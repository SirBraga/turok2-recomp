#!/usr/bin/env python3
"""Build a first-pass N64Recomp symbols file from prologue-sized functions."""
from __future__ import annotations

import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ROM = (ROOT / "baserom.z64").read_bytes()
OUT = ROOT / "turok2.rev01.syms.toml"

SECTIONS = [
    {
        "name": ".boot",
        "rom": 0x1000,
        "vram": 0x80000400,
        "end": 0x1100,
    },
    {
        "name": ".code",
        "rom": 0x1100,
        "vram": 0x00200500,
        "end": 0x8A4C4,
    },
    {
        "name": ".rodata",
        "rom": 0x8A4C4,
        "vram": 0x800898C4,
        "end": 0x9F35C,
    },
    {
        "name": ".libultra",
        "rom": 0xA3118,
        "vram": 0x800A2518,
        "end": 0xC7A84,
    },
]


def is_prologue(word: int) -> bool:
    return (word & 0xFFFF0000) == 0x27BD0000 and (word & 0x8000)


def functions_in(rom_start: int, rom_end: int, vram: int) -> list[tuple[str, int, int]]:
    starts = []
    for off in range(rom_start, rom_end, 4):
        word = struct.unpack_from(">I", ROM, off)[0]
        if is_prologue(word):
            starts.append(off)
    extras = {
        0x1000: "func_80000400",
        0x1088: "func_80000488",
        0x75BD0: "entry_00274FD0",
    }
    for rom_off in extras:
        if rom_start <= rom_off < rom_end and rom_off not in starts:
            starts.append(rom_off)
    starts.sort()
    if not starts:
        return []
    rows = []
    for i, off in enumerate(starts):
        nxt = starts[i + 1] if i + 1 < len(starts) else rom_end
        size = nxt - off
        if size < 8:
            continue
        func_vram = vram + (off - rom_start)
        name = extras.get(off, f"func_{func_vram:08X}")
        rows.append((name, func_vram, size))
    return rows


def main() -> None:
    lines = [
        "# First-pass Rev.01 symbols. Function sizes are prologue-to-prologue.",
        "# Evidence only — refine from splat before trusting a boundary.",
        "",
    ]
    for section in SECTIONS:
        funcs = functions_in(section["rom"], section["end"], section["vram"])
        size = section["end"] - section["rom"]
        lines.append("[[section]]")
        lines.append(f'name = "{section["name"]}"')
        lines.append(f"rom = {section['rom']:#x}")
        lines.append(f"vram = {section['vram']:#x}")
        lines.append(f"size = {size:#x}")
        lines.append("functions = [")
        for name, vram, func_size in funcs:
            lines.append(
                f'    {{ name = "{name}", vram = {vram:#x}, size = {func_size:#x} }},'
            )
        lines.append("]")
        lines.append("")
        print(f"{section['name']}: {len(funcs)} prologue functions")
    OUT.write_text("\n".join(lines) + "\n")
    print(f"wrote {OUT}")


if __name__ == "__main__":
    main()
