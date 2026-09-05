#!/usr/bin/env python3
"""Split the truncated-function boundaries into the ones safe to reject.

find-truncated-funcs.py reports functions that end without returning, which
means the symbol that ends them was seeded in the middle of a real function. The
project already has a native place to record that: versions/rejected_boundaries
tells function_seed.py and fix_asm.py not to seed an address, so the function
comes out whole and no patching of the generated C is needed.

That only works when nothing calls the successor. If some other code reaches it
with a jal, it is a real entry point as well, and dropping the boundary would
leave those callers with "No function found for jal target". Two different
situations produce the same symptom:

  the boundary is bogus        -> nothing calls the successor -> reject it
  the tail is shared           -> the successor is called too -> keep the
                                  boundary and let the first half fall through

So classify by whether the generated code calls the successor directly, and
write only the first group to the reject list.
"""

import argparse
import collections
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"
REJECTED = ROOT / "versions" / "rejected_boundaries.us.txt"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)\s*(.*)$")
CALL_RE = re.compile(r"^\s+(\w+)\(rdram, ctx\);$")

TRANSFERS = {"j", "jr", "b"}


def address_of(name: str):
    match = re.search(r"_([0-9A-F]{8})$", name)
    return int(match.group(1), 16) if match else None


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--write", action="store_true")
    args = parser.parse_args()

    bodies = []
    # Call targets are taken from the disassembly rather than from the emitted
    # calls, so the reconnections this script is meant to replace do not count
    # themselves as evidence that a successor is a real entry point.
    jal_targets = collections.Counter()

    for path in sorted(FUNCS.glob("*.c")):
        name = None
        insns = []
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
                mnemonic, operands = insn.group(2), insn.group(3)
                insns.append((addr, mnemonic, operands))
                if mnemonic == "jal":
                    target = re.match(r"^0x([0-9A-Fa-f]+)$", operands.strip())
                    if target:
                        jal_targets[int(target.group(1), 16)] += 1
        if name is not None and insns:
            bodies.append((name, insns))

    starts = {}
    for name, insns in bodies:
        starts.setdefault(min(a for a, _, _ in insns), name)

    reject, keep, skipped = [], [], []
    for name, insns in bodies:
        returns = any(m == "jr" and "$ra" in o for _, m, o in insns)
        if returns:
            continue
        end = max(a for a, _, _ in insns)
        successor = starts.get(end + 4)
        if successor is None or successor == name:
            continue
        if all(m.startswith(".") for _, m, _ in insns):
            skipped.append((name, successor, "corpo e dado"))
            continue
        if any(m in TRANSFERS for _, m, _ in insns[-2:]):
            skipped.append((name, successor, "transfere controle"))
            continue

        address = end + 4
        direct = jal_targets[address]
        (keep if direct > 0 else reject).append((name, successor, address, direct))

    print(f"truncadas classificadas: {len(reject) + len(keep)}")
    print(f"  fronteira pode ser rejeitada (sucessor nunca chamado): {len(reject)}")
    print(f"  precisa manter a fronteira (sucessor tambem e chamado): {len(keep)}")
    print(f"  fora do escopo: {len(skipped)}")
    print()
    for name, successor, address, direct in keep[:20]:
        print(f"  manter: {name} -> {successor} ({direct} chamada(s) direta(s))")

    if not args.write:
        print()
        print("relatorio apenas; use --write para juntar em rejected_boundaries")
        return 0

    existing = {line.strip() for line in REJECTED.read_text().splitlines() if line.strip()}
    added = sorted({f"0x{a:08X}" for _, _, a, _ in reject} - existing)
    if added:
        merged = sorted(existing | set(added), key=lambda s: int(s, 16))
        REJECTED.write_text("\n".join(merged) + "\n")
    print(f"acrescentadas a rejected_boundaries: {len(added)} "
          f"(lista agora com {len(existing | set(added))})")
    return 0


if __name__ == "__main__":
    sys.exit(main())
