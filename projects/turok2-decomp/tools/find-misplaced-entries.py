#!/usr/bin/env python3
"""Find recompiled functions whose ELF symbol sits before the real entry point.

The mirror image of the truncation problem. Where a stray symbol in the middle of
a function cuts it short, a symbol placed a few instructions early swallows the
tail of whatever came before it, and the address the game actually calls is then
missing from the function table. That is what "Failed to find function at
0x00285CF0" means: the symbol is at 0x00285CE8, eight bytes early, so nothing is
registered for the address in the game's function pointer.

A non-leaf MIPS function opens by making room on the stack. When the emitted body
stores registers relative to $sp before that adjustment, those stores are writing
into the caller's frame, which real code does not do. The sp adjustment is the
true entry point.
"""

import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)\s*(.*)$")
ALLOC_RE = re.compile(r"^\$sp, \$sp, -0x([0-9A-F]+)$")
SP_STORE_RE = re.compile(r"^\$\w+, (-?0x[0-9A-F]+)\(\$sp\)$")


def main():
    findings = []

    for path in sorted(FUNCS.glob("*.c")):
        name = None
        insns = []

        def check():
            if name is None or not insns:
                return
            # Deduplicate the delay slot lines the generator repeats.
            seen = []
            for addr, mnemonic, ops in insns:
                if seen and seen[-1][0] == addr:
                    continue
                seen.append((addr, mnemonic, ops))

            alloc = None
            for index, (addr, mnemonic, ops) in enumerate(seen):
                if mnemonic == "addiu" and ALLOC_RE.match(ops):
                    alloc = (index, addr, ops)
                    break
            if alloc is None or alloc[0] == 0:
                return
            index, addr, ops = alloc
            # Everything ahead of the allocation must be a store through $sp for
            # this to look like a misplaced symbol rather than ordinary code.
            leading = seen[:index]
            if not leading or not all(
                m in ("sw", "swc1", "sd", "sdc1") and SP_STORE_RE.match(o)
                for _, m, o in leading
            ):
                return
            findings.append((name, seen[0][0], addr, index, path.name))

        for line in path.read_text().splitlines():
            match = FUNC_RE.match(line)
            if match:
                check()
                name = match.group(1)
                insns = []
                continue
            insn = INSN_RE.match(line)
            if insn and name is not None:
                insns.append((int(insn.group(1), 16), insn.group(2), insn.group(3)))
        check()

    findings.sort(key=lambda f: f[1])
    print(f"simbolos posicionados antes da entrada real: {len(findings)}")
    print()
    print(f"{'simbolo':<22} {'entrada real':<14} {'bytes de erro':<14} arquivo")
    print("-" * 70)
    for name, symbol, entry, index, filename in findings:
        print(f"{name:<22} 0x{entry:08X}     {entry - symbol:<14} {filename}")

    print()
    print("para o TOML (manual_funcs):")
    for name, symbol, entry, index, filename in findings:
        print(f'  {{ name = "entry_{entry:08X}", vram = 0x{entry:08X}, size = ? }},')

    return 0


if __name__ == "__main__":
    sys.exit(main())
