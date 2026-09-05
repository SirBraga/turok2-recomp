#!/usr/bin/env python3
"""Emit manual_funcs entries for symbols that sit ahead of their own prologue.

The ELF carries many function symbols a few instructions before the real entry
point, so the address the game calls has nothing registered for it and
librecomp's get_function ends the process:

    Failed to find function at 0x00257A40

A non-leaf MIPS function opens by reserving stack. When the emitted body reaches
that reservation only after a few instructions, and those instructions are not
the argument spills of a variadic prologue, the reservation is the real entry and
the symbol is early.

Only the symbols nothing calls directly are reported. If some jal names the
symbol address, that address is an entry point as well, whatever this heuristic
thinks, and declaring the later address would split a function that works.

Sizes run from the prologue to the jr $ra that closes the function, read from the
ROM rather than guessed.

Usage:
    python3 tools/declare-misplaced-entries.py          # print the TOML block
"""

import collections
import pathlib
import re
import struct
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"
ROM = ROOT / "baserom.us.z64"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)\s*(.*)$")
ALLOC_RE = re.compile(r"^\$sp, \$sp, -0x([0-9A-F]+)$")
SP_STORE_RE = re.compile(r"^\$\w+, (-?0x[0-9A-F]+)\(\$sp\)$")

# ram_addr, size, rom_addr, splat section name
SECTIONS = (
    (0x00200500, 0x000A4D00, 0x00001100, ".code"),
    (0x00400000, 0x0003C000, 0x0014A000, ".virtual"),
    (0x0043C000, 0x00039A00, 0x00186000, ".virtual_1"),
)

JR_RA = 0x03E00008


def section_of(vram):
    for ram, size, rom, name in SECTIONS:
        if ram <= vram < ram + size:
            return ram, size, rom, name
    return None


def main():
    rom = ROM.read_bytes()

    def word(vram):
        found = section_of(vram)
        if found is None:
            return None
        ram, _, rom_addr, _ = found
        offset = rom_addr + (vram - ram)
        return struct.unpack(">I", rom[offset:offset + 4])[0]

    bodies = []
    jal_targets = collections.Counter()
    for path in sorted(FUNCS.glob("*.c")):
        name, insns = None, []
        for line in path.read_text().splitlines():
            match = FUNC_RE.match(line)
            if match:
                if name is not None and insns:
                    bodies.append((name, insns))
                name, insns = match.group(1), []
                continue
            insn = INSN_RE.match(line)
            if insn and name is not None:
                addr = int(insn.group(1), 16)
                if insns and insns[-1][0] == addr:
                    continue
                insns.append((addr, insn.group(2), insn.group(3)))
                if insn.group(2) == "jal":
                    target = re.match(r"^0x([0-9A-Fa-f]+)$", insn.group(3).strip())
                    if target:
                        jal_targets[int(target.group(1), 16)] += 1
        if name is not None and insns:
            bodies.append((name, insns))

    declared = set()
    for line in (ROOT / "turok2.us.toml").read_text().splitlines():
        for match in re.finditer(r"vram = 0x([0-9A-Fa-f]+)", line):
            declared.add(int(match.group(1), 16))

    known_starts = {min(a for a, _, _ in insns) for _, insns in bodies}

    results = []
    for name, insns in bodies:
        index = next((k for k, (_, m, o) in enumerate(insns)
                      if m == "addiu" and ALLOC_RE.match(o)), None)
        if index is None or index == 0:
            continue
        leading = insns[:index]
        # A variadic function legitimately spills a0-a3 into the caller's
        # argument area, at 0x0 through 0xC, before reserving its own frame.
        if all(m in ("sw", "swc1", "sd", "sdc1") and SP_STORE_RE.match(o)
               and int(SP_STORE_RE.match(o).group(1), 16) <= 0xC
               for _, m, o in leading):
            continue

        symbol = insns[0][0]
        entry = insns[index][0]
        if jal_targets[symbol] != 0:
            continue
        if entry in declared or entry in known_starts:
            continue
        found = section_of(entry)
        if found is None:
            continue

        cursor = entry
        limit = entry + 0x4000
        while cursor < limit and word(cursor) not in (JR_RA, None):
            cursor += 4
        if word(cursor) != JR_RA:
            continue
        size = (cursor + 8) - entry

        results.append((name, symbol, entry, size, found[3], jal_targets[entry]))

    results.sort(key=lambda r: r[2])
    print(f"# {len(results)} entradas geradas por tools/declare-misplaced-entries.py")
    for name, symbol, entry, size, section, calls in results:
        print(f'    {{ name = "entry_{entry:08X}", section = "{section}", '
              f'vram = 0x{entry:08X}, size = 0x{size:X} }},'
              f'  # {name} esta 0x{entry - symbol:X} antes; {calls} jal diretos')
    return 0


if __name__ == "__main__":
    sys.exit(main())
