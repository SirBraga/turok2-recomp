#!/usr/bin/env python3
"""Layout and crash-screen probe for Turok 2 US Rev.01.

Evidence only. Does not write splat yaml, ELF, or recomp metadata.
"""
from __future__ import annotations

import hashlib
import struct
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REV = (ROOT / "baserom.z64").read_bytes()
US10 = Path(__file__).resolve().parents[2] / "turok2-decomp" / "baserom.us.z64"


def sha1(data: bytes) -> str:
    return hashlib.sha1(data).hexdigest()


def find_all(haystack: bytes, needle: bytes) -> list[int]:
    out = []
    start = 0
    while True:
        i = haystack.find(needle, start)
        if i < 0:
            return out
        out.append(i)
        start = i + 1


def identical_prefix(a: bytes, b: bytes) -> int:
    n = min(len(a), len(b))
    for i in range(n):
        if a[i] != b[i]:
            return i
    return n


def word(data: bytes, off: int) -> int:
    return struct.unpack_from(">I", data, off)[0]


def is_prologue(w: int) -> bool:
    return (w & 0xFFFF0000) == 0x27BD0000 and (w & 0x8000)


def scan_prologues(data: bytes, start: int, end: int, step: int = 0x1000) -> list[tuple[int, int]]:
    rows = []
    for base in range(start, end, step):
        chunk = data[base : base + step]
        count = 0
        for i in range(0, len(chunk) - 3, 4):
            if is_prologue(struct.unpack_from(">I", chunk, i)[0]):
                count += 1
        rows.append((base, count))
    return rows


def find_string_xrefs(data: bytes, rom_off: int, vram: int) -> list[int]:
    """Find LUI+ADDIU pairs that materialize `vram` (HI/LO of the address)."""
    hi = (vram >> 16) & 0xFFFF
    lo = vram & 0xFFFF
    if lo >= 0x8000:
        hi = (hi + 1) & 0xFFFF
    lui_op = 0x3C000000 | hi
    addiu_lo = lo
    hits = []
    for i in range(0, len(data) - 7, 4):
        w = struct.unpack_from(">I", data, i)[0]
        if (w & 0xFFE0FFFF) != (lui_op & 0xFFE0FFFF) and (w & 0xFFFF) != hi:
            continue
        if (w >> 26) != 0x0F:  # lui
            continue
        rt = (w >> 16) & 0x1F
        nxt = struct.unpack_from(">I", data, i + 4)[0]
        if (nxt >> 26) == 0x09 and ((nxt >> 21) & 0x1F) == rt and (nxt & 0xFFFF) == addiu_lo:
            hits.append(i)
    return hits


def dump_strings(data: bytes, start: int, end: int) -> None:
    blob = data[start:end]
    print(f"\n--- strings {start:#x}-{end:#x} ---")
    print(blob.decode("latin1", errors="replace").replace("\x00", "\n"))


def main() -> int:
    print(f"rev01 sha1={sha1(REV)} size={len(REV)}")
    print(f"header version={REV[0x3F]} cart={REV[0x3C:0x3E]!r} pc={word(REV, 8):#010x}")

    us = US10.read_bytes() if US10.exists() else None
    if us:
        print(f"us10  sha1={sha1(us)} version={us[0x3F]}")
        pref = identical_prefix(REV, us)
        print(f"identical prefix: {pref:#x} ({pref} bytes)")
        same = sum(1 for a, b in zip(REV, us) if a == b)
        print(f"identical bytes: {same}/{len(REV)} ({100.0 * same / len(REV):.2f}%)")

    print("\n=== markers ===")
    for needle in (
        b"LNK\x02",
        b"F3DEX",
        b"rspboot",
        b"aspMain",
        b"Call stack",
        b"TUROK2 BUILD",
        b"ASSERTION FAILED",
        b"Fault in thread",
        b"badvaddr",
        b"D:\\turok2",
        b"D:\\TUROK2",
        b"EXPANSION PAK FOUND",
    ):
        hits = find_all(REV, needle)
        extra = ""
        if us:
            uh = find_all(us, needle)
            extra = f"  us10={ [hex(x) for x in uh[:6]] }"
        print(f"{needle!r:30} rev={[hex(x) for x in hits[:8]]}{extra}")

    dump_strings(REV, 0x8BB80, 0x8BD00)

    print("\n=== prologue density (rev01, 4 KiB bins, first 1.2 MiB) ===")
    for base, count in scan_prologues(REV, 0x1000, 0x140000):
        if count:
            bar = "#" * min(count, 40)
            print(f"  {base:08X}  {count:3d} {bar}")

    if us:
        print("\n=== boot stub 0x1000-0x1100 ===")
        stub_rev = REV[0x1000:0x1100]
        stub_us = us[0x1000:0x1100]
        print(f"identical boot stub: {stub_rev == stub_us}")
        if stub_rev != stub_us:
            diffs = [(i, stub_rev[i], stub_us[i]) for i in range(0x100) if stub_rev[i] != stub_us[i]]
            print(f"  differing bytes: {len(diffs)}")
            for i, a, b in diffs[:16]:
                print(f"    +{i:#x}: rev={a:02x} us={b:02x}")

    # Crash-string VRAM candidates.
    # US 1.0 engine rodata: ROM + 0x7FFFF400.
    # Try that delta on Rev.01 crash strings and look for LUI/ADDIU.
    print("\n=== crash-string xref hunt ===")
    crash_rom = 0x8BB88
    for delta, label in (
        (0x7FFFF400, "kseg0 ROM+0x7FFFF400"),
        (0x80000400 - 0x1000, "contig after header"),
        (0x00200500 - 0x1100, "useg like US 1.0 engine"),
    ):
        vram = (crash_rom + delta) & 0xFFFFFFFF
        hits = find_string_xrefs(REV, crash_rom, vram)
        print(f"  {label}: vram={vram:#010x} xrefs={len(hits)} {[hex(x) for x in hits[:8]]}")

    if us:
        us_crash = 0xAACF4
        us_vram = (us_crash + 0x7FFFF400) & 0xFFFFFFFF
        hits = find_string_xrefs(us, us_crash, us_vram)
        print(f"  us10 kseg0: vram={us_vram:#010x} xrefs={len(hits)} {[hex(x) for x in hits[:8]]}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
