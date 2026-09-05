#!/usr/bin/env python3
"""Cross-version MIPS function matcher for the Turok 2 ROMs.

The known build supplies function boundaries through its ELF.  Instructions
are read from the ELF section LMAs in the base ROM, normalized to remove the
most common link-address operands, and matched against every word-aligned
position in an unknown revision.  Output is evidence only: it never edits the
ELF, splat yaml, TOML, or generated recompilation sources.
"""

from __future__ import annotations

import argparse
import array
import csv
import hashlib
import json
import re
import struct
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Optional


@dataclass(frozen=True)
class Section:
    name: str
    size: int
    vma: int
    lma: int


@dataclass(frozen=True)
class Function:
    name: str
    vram: int
    size: int
    rom: int
    words: tuple[int, ...]


def command_lines(*args: str) -> list[str]:
    result = subprocess.run(args, check=True, text=True, capture_output=True)
    return result.stdout.splitlines()


def elf_sections(elf: Path) -> list[Section]:
    sections: list[Section] = []
    pattern = re.compile(
        r"^\s*\d+\s+(\S+)\s+([0-9a-fA-F]{8})\s+"
        r"([0-9a-fA-F]{8})\s+([0-9a-fA-F]{8})\s+(.*)$"
    )
    for line in command_lines("objdump", "-h", str(elf)):
        match = pattern.match(line)
        if not match or "TEXT" not in match.group(5).split():
            continue
        sections.append(
            Section(
                name=match.group(1),
                size=int(match.group(2), 16),
                vma=int(match.group(3), 16),
                lma=int(match.group(4), 16),
            )
        )
    if not sections:
        raise RuntimeError(f"no executable sections found in {elf}")
    return sections


def find_section(sections: list[Section], vram: int, size: int) -> Section | None:
    for section in sections:
        if section.vma <= vram and vram + size <= section.vma + section.size:
            return section
    return None


def load_functions(elf: Path, base_rom: bytes, minimum_words: int) -> list[Function]:
    sections = elf_sections(elf)
    functions: list[Function] = []
    # macOS nm emits: address size T symbol
    pattern = re.compile(r"^([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+[Tt]\s+(\S+)$")
    for line in command_lines("nm", "-n", "-S", str(elf)):
        match = pattern.match(line)
        if not match:
            continue
        vram = int(match.group(1), 16)
        size = int(match.group(2), 16)
        name = match.group(3)
        if size < minimum_words * 4 or size % 4 != 0:
            continue
        section = find_section(sections, vram, size)
        if section is None:
            continue
        rom = section.lma + (vram - section.vma)
        if rom < 0 or rom + size > len(base_rom):
            continue
        words = struct.unpack_from(f">{size // 4}I", base_rom, rom)
        functions.append(Function(name, vram, size, rom, words))
    return functions


def normalized_word(word: int) -> int:
    opcode = word >> 26
    # Absolute jump/call target.
    if opcode in (2, 3):
        return word & 0xFC000000
    # REGIMM and integer conditional branch displacements.
    if opcode in (1, 4, 5, 6, 7):
        return word & 0xFFFF0000
    # COP0/COP1 branch displacements.
    if opcode in (16, 17) and ((word >> 21) & 0x1F) == 8:
        return word & 0xFFFF0000
    # Upper half of an address. The paired low half remains as useful evidence.
    if opcode == 15:
        return word & 0xFFFF0000
    return word


def normalized(words: tuple[int, ...]) -> tuple[int, ...]:
    return tuple(normalized_word(word) for word in words)


def relaxed_word(word: int) -> int:
    opcode = word >> 26
    if opcode == 0:
        # R-type: registers and function selector are stable and informative.
        return word
    if opcode in (2, 3):
        return word & 0xFC000000
    if opcode in (16, 17, 18):
        # Retain COP operations, except their branch displacement.
        if ((word >> 21) & 0x1F) == 8:
            return word & 0xFFFF0000
        return word
    # I-type: retain opcode and register allocation, discard the immediate.
    return word & 0xFFFF0000


def relaxed(words: tuple[int, ...]) -> tuple[int, ...]:
    return tuple(relaxed_word(word) for word in words)


def anchor_positions(word_count: int, width: int) -> list[int]:
    last = word_count - width
    positions = {0, max(0, last // 4), max(0, last // 2), max(0, last * 3 // 4), last}
    return sorted(positions)


def anchor_key(words: tuple[int, ...]) -> bytes:
    packed = struct.pack(f">{len(words)}I", *words)
    return hashlib.blake2b(packed, digest_size=12).digest()


def score_candidate(base: tuple[int, ...], candidate: tuple[int, ...],
                    base_relaxed: tuple[int, ...], candidate_relaxed: tuple[int, ...]) -> tuple[float, float, float, float]:
    norm_equal = sum(a == b for a, b in zip(base, candidate)) / len(base)
    relaxed_equal = sum(a == b for a, b in zip(base_relaxed, candidate_relaxed)) / len(base)
    opcode_equal = sum((a >> 26) == (b >> 26) for a, b in zip(base, candidate)) / len(base)
    raw_equal = sum(a == b for a, b in zip(base, candidate)) / len(base)
    score = 0.45 * norm_equal + 0.35 * relaxed_equal + 0.15 * opcode_equal + 0.05 * raw_equal
    return score, norm_equal, relaxed_equal, raw_equal


def confidence(score: float, anchors: int, words: int) -> str:
    # Tiny helpers are common enough that even an exact match is navigation
    # evidence, not identity proof. Require a longer body for high confidence.
    if score >= 0.985 and anchors >= 2 and words >= 16:
        return "known"
    if score >= 0.93 and anchors >= 2 and words >= 12:
        return "likely"
    if score >= 0.82:
        return "tentative"
    return "weak"


def match_functions(functions: list[Function], revision_rom: bytes, anchor_width: int) -> list[dict]:
    normalized_functions = [normalized(function.words) for function in functions]
    relaxed_functions = [relaxed(function.words) for function in functions]
    wanted: dict[bytes, list[tuple[int, int]]] = {}
    for function_index, words in enumerate(normalized_functions):
        width = min(anchor_width, len(words))
        for position in anchor_positions(len(words), width):
            window = words[position : position + width]
            # All-zero/padding windows are not discriminating anchors.
            if not any(window):
                continue
            wanted.setdefault(b"N" + anchor_key(window), []).append((function_index, position))
            relaxed_window = relaxed_functions[function_index][position : position + width]
            wanted.setdefault(b"R" + anchor_key(relaxed_window), []).append((function_index, position))

    revision_words = array.array("I")
    revision_words.frombytes(revision_rom)
    if sys.byteorder == "little":
        revision_words.byteswap()
    normalized_revision = array.array("I", (normalized_word(word) for word in revision_words))
    relaxed_revision = array.array("I", (relaxed_word(word) for word in revision_words))
    candidate_anchors: dict[tuple[int, int], set[int]] = {}
    for index in range(0, len(normalized_revision) - anchor_width + 1):
        keys = (
            b"N" + anchor_key(normalized_revision[index : index + anchor_width]),
            b"R" + anchor_key(relaxed_revision[index : index + anchor_width]),
        )
        for key in keys:
            for function_index, position in wanted.get(key, ()):
                function = functions[function_index]
                start = index - position
                if start < 0 or start + len(function.words) > len(revision_words):
                    continue
                candidate_anchors.setdefault((function_index, start), set()).add(position)

    by_function: list[list[dict]] = [[] for _ in functions]
    for (function_index, start), anchors in candidate_anchors.items():
        function = functions[function_index]
        base_words = normalized_functions[function_index]
        candidate = normalized_revision[start : start + len(base_words)]
        candidate_relaxed = relaxed_revision[start : start + len(base_words)]
        score, norm_equal, relaxed_equal, raw_equal = score_candidate(
            base_words, candidate, relaxed_functions[function_index], candidate_relaxed
        )
        if score < 0.70:
            continue
        by_function[function_index].append(
            {
                "revision_rom": start * 4,
                "score": score,
                "normalized_equal": norm_equal,
                "relaxed_equal": relaxed_equal,
                "raw_equal": raw_equal,
                "anchors": len(anchors),
            }
        )

    results: list[dict] = []
    for function_index, function in enumerate(functions):
        candidates = sorted(
            by_function[function_index],
            key=lambda item: (item["score"], item["anchors"], item["raw_equal"]),
            reverse=True,
        )
        if not candidates:
            results.append(
                {
                    "base_name": function.name,
                    "base_vram": function.vram,
                    "base_rom": function.rom,
                    "size": function.size,
                    "revision_rom": None,
                    "score": 0.0,
                    "normalized_equal": 0.0,
                    "relaxed_equal": 0.0,
                    "raw_equal": 0.0,
                    "anchors": 0,
                    "ambiguity": 0,
                    "confidence": "unmatched",
                }
            )
            continue
        best = candidates[0]
        near_best = sum(candidate["score"] >= best["score"] - 0.01 for candidate in candidates)
        level = confidence(best["score"], best["anchors"], len(function.words))
        if near_best > 1 and level in ("known", "likely"):
            level = "tentative"
        results.append(
            {
                "base_name": function.name,
                "base_vram": function.vram,
                "base_rom": function.rom,
                "size": function.size,
                **best,
                "ambiguity": near_best,
                "confidence": level,
            }
        )
    # A candidate can look unique from the perspective of one base function but
    # still be claimed by several duplicated/template functions.  Surface that
    # reverse ambiguity and do not call such a mapping known/likely.
    revision_claims: dict[int, int] = {}
    for row in results:
        if row["revision_rom"] is not None and row["confidence"] != "unmatched":
            revision_claims[row["revision_rom"]] = revision_claims.get(row["revision_rom"], 0) + 1
    for row in results:
        collision_count = revision_claims.get(row["revision_rom"], 0)
        row["collision_count"] = collision_count
        if collision_count > 1 and row["confidence"] in ("known", "likely"):
            row["confidence"] = "tentative"
    return results


def write_csv(path: Path, rows: list[dict]) -> None:
    fields = [
        "base_name", "base_vram", "base_rom", "size", "revision_rom",
        "score", "normalized_equal", "relaxed_equal", "raw_equal", "anchors", "ambiguity",
        "collision_count", "confidence",
    ]
    with path.open("w", newline="") as output:
        writer = csv.DictWriter(output, fieldnames=fields)
        writer.writeheader()
        for row in rows:
            formatted = dict(row)
            for field in ("base_vram", "base_rom", "size", "revision_rom"):
                value = formatted[field]
                formatted[field] = "" if value is None else f"0x{value:08X}"
            for field in ("score", "normalized_equal", "relaxed_equal", "raw_equal"):
                formatted[field] = f"{formatted[field]:.6f}"
            writer.writerow(formatted)


PRIORITY_FUNCTIONS = {
    "func_00287ABC": "CEngineApp__Update",
    "func_00288C80": "CEngineApp__Retrace",
    "func_00286674": "CEngineApp__Main",
    "func_00284188": "Cinema_PathPlaying",
    "func_002A1170": "alRaxOpen",
    "func_002A122C": "alRaxDecomp",
    "func_002A0448": "ReadCmpFrame",
    "func_002A0B6C": "DecompressFrame",
    "func_00294D60": "n_alAuxBusPull",
    "func_00236EA0": "resource traversal",
    "func_0022C488": "resource traversal",
    "func_00238824": "resource table slot 6",
    "func_00281FF8": "crash/debug text helper",
    "func_0028BDFC": "Call stack xref owner",
    "func_0028C0B0": "fault/assert xref owner",
}


def hex_or_dash(value: Optional[int]) -> str:
    return "—" if value is None else f"0x{value:08X}"


def write_report(path: Path, rows: list[dict], summary: dict) -> None:
    useful = [row for row in rows if row["confidence"] in ("known", "likely")]
    useful.sort(key=lambda row: (row["base_rom"], row["revision_rom"] or 0))
    by_name = {row["base_name"]: row for row in rows}
    lines = [
        "# Turok 2 US 1.0 → US Rev.01 function evidence map",
        "",
        "This is a comparison artifact, not a linker map. Revision offsets are ROM offsets; they are not",
        "automatically valid VRAM addresses or function boundaries.",
        "",
        "## Inputs and result",
        "",
        f"- Base SHA-1: `{summary['base_sha1']}`",
        f"- Rev.01 SHA-1: `{summary['revision_sha1']}`",
        f"- ELF functions examined: {summary['functions_examined']}",
        f"- Confidence counts: `{json.dumps(summary['confidence_counts'], sort_keys=True)}`",
        "- Matching: strict and immediate-relaxed MIPS anchors, followed by whole-function aligned scoring.",
        "- `collision_count > 1` means multiple base functions claim the same revision offset; those rows are",
        "  capped at tentative confidence.",
        "",
        "## Port priorities",
        "",
        "| Base symbol | Role | Base ROM | Rev.01 ROM | Score | Confidence |",
        "| --- | --- | ---: | ---: | ---: | --- |",
    ]
    for name, role in PRIORITY_FUNCTIONS.items():
        row = by_name.get(name)
        if row is None:
            continue
        lines.append(
            f"| `{name}` | {role} | `{hex_or_dash(row['base_rom'])}` | "
            f"`{hex_or_dash(row['revision_rom'])}` | {row['score']:.3f} | {row['confidence']} |"
        )
    lines += [
        "",
        "The priority routines being unmatched is meaningful: the Rev.01 executable is not the US 1.0",
        "binary with one constant offset. Those systems need call-graph/string/behavior matching before any",
        "address is promoted into recompilation metadata.",
        "",
        "## Known and likely mappings",
        "",
        "| Base symbol | Base ROM | Rev.01 ROM | Delta | Score | Confidence |",
        "| --- | ---: | ---: | ---: | ---: | --- |",
    ]
    for row in useful:
        delta = row["revision_rom"] - row["base_rom"]
        lines.append(
            f"| `{row['base_name']}` | `{hex_or_dash(row['base_rom'])}` | "
            f"`{hex_or_dash(row['revision_rom'])}` | `{delta:+#x}` | {row['score']:.3f} | "
            f"{row['confidence']} |"
        )
    lines += [
        "",
        "## Crash-screen evidence",
        "",
        "Rev.01 contains `Call stack`, `TUROK2 BUILD`, `ASSERTION FAILED!! in thread`, `Fault in thread`,",
        "`cause`, and `badvaddr` together at ROM `0x0008BB88`–`0x0008BC4C`. The corresponding US 1.0",
        "block occurs at `0x000AACF4`–`0x000AADC0` (and has a second copy at `0x000E3CF4`).",
        "In US 1.0, direct references place the call-stack text in `func_0028BDFC` and the assertion/fault",
        "text in `func_0028C0B0`. Neither function has a safe automatic Rev.01 match yet, so the strings",
        "prove the subsystem is present but do not by themselves prove its new function boundaries.",
        "",
        "## Safe use",
        "",
        "Use known/likely rows as navigation hints in Ghidra. Verify prologue, epilogue, callers, callees,",
        "and data xrefs before adding a symbol or recomp boundary. Do not derive one global relocation delta:",
        "the table deliberately shows several different deltas.",
        "",
    ]
    path.write_text("\n".join(lines))


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--base-rom", type=Path, default=Path("baserom.us.z64"))
    parser.add_argument("--revision-rom", type=Path, required=True)
    parser.add_argument("--elf", type=Path, default=Path("build/turok2.us.elf"))
    parser.add_argument("--output", type=Path, default=Path("analysis/rev01_function_matches.csv"))
    parser.add_argument("--report", type=Path, default=Path("analysis/rev01_function_matches.md"))
    parser.add_argument("--minimum-words", type=int, default=8)
    parser.add_argument("--anchor-width", type=int, default=6)
    args = parser.parse_args()

    base_rom = args.base_rom.read_bytes()
    revision_rom = args.revision_rom.read_bytes()
    if len(base_rom) % 4 or len(revision_rom) % 4:
        raise RuntimeError("ROM sizes must be word aligned")
    functions = load_functions(args.elf, base_rom, args.minimum_words)
    rows = match_functions(functions, revision_rom, args.anchor_width)

    args.output.parent.mkdir(parents=True, exist_ok=True)
    write_csv(args.output, rows)
    counts: dict[str, int] = {}
    for row in rows:
        counts[row["confidence"]] = counts.get(row["confidence"], 0) + 1
    summary = {
        "base_rom": str(args.base_rom),
        "base_sha1": hashlib.sha1(base_rom).hexdigest(),
        "revision_rom": str(args.revision_rom),
        "revision_sha1": hashlib.sha1(revision_rom).hexdigest(),
        "elf": str(args.elf),
        "functions_examined": len(functions),
        "confidence_counts": counts,
        "method": "strict and relaxed MIPS anchors plus whole-function aligned similarity",
        "warning": "Evidence only. Revision ROM offsets are not VRAM addresses or approved function boundaries.",
    }
    summary_path = args.output.with_suffix(".summary.json")
    summary_path.write_text(json.dumps(summary, indent=2) + "\n")
    write_report(args.report, rows, summary)
    print(json.dumps(summary, indent=2))
    print(f"wrote {args.output}")
    print(f"wrote {summary_path}")
    print(f"wrote {args.report}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
