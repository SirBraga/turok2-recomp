#!/usr/bin/env python3
"""Move a function symbol that the ELF placed before the real entry point.

func_00285CE8 is registered eight bytes ahead of where its prologue actually is.
The two instructions it picks up store registers through the caller's $sp, before
any stack has been reserved, which real code never does; they belong to whatever
sits before this function. The consequence is that the address the game calls,
0x00285CF0, is absent from the function table, and librecomp's get_function
aborts the process with "Failed to find function at 0x00285CF0".

Nothing calls the misplaced symbol directly, it is only reachable through the
table, so the entry can simply be moved: drop the leading instructions, rename
the function to its real address, and shift the table entry by the same amount.

Deliberately not applied to func_0029E3E0, which the detector also reports. Its
leading stores go to 0x4, 0x8 and 0xC, the argument save area the caller
reserves, which is the ordinary prologue of a variadic function. It has 115
direct callers and its symbol is correct.

RecompiledFuncs/ is generated, so this runs again after every regeneration. It is
idempotent.
"""

import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

# symbol address -> real entry address
MOVES = {
    0x00285CE8: 0x00285CF0,
    # Orphan `sw $v0, 0x3604($s1)` sits between func_002605AC's jr delay slot
    # and this leaf. Animation callbacks jalr 0x00260610 (`lui $v1, 0xFFFD`).
    0x0026060C: 0x00260610,
}


def move(symbol: int, entry: int) -> bool:
    old_name = f"func_{symbol:08X}"
    new_name = f"func_{entry:08X}"
    shift = entry - symbol

    header = FUNCS / "funcs.h"
    table = FUNCS / "recomp_overlays.inl"

    if new_name in header.read_text() or f"entry_{entry:08X}" in header.read_text():
        print(f"{old_name}: already moved to {new_name}")
        return True

    target = None
    for path in FUNCS.glob("*.c"):
        if f"RECOMP_FUNC void {old_name}(" in path.read_text():
            target = path
            break
    if target is None:
        print(f"{old_name}: not found", file=sys.stderr)
        return False

    lines = target.read_text().splitlines(keepends=True)
    start = next(i for i, l in enumerate(lines)
                 if l.startswith(f"RECOMP_FUNC void {old_name}("))
    keep_from = next(i for i in range(start, len(lines))
                     if lines[i].strip().startswith(f"// 0x{entry:08X}:"))
    # Everything between the first instruction comment and the real entry belongs
    # to the previous function.
    first_insn = next(i for i in range(start, keep_from)
                      if lines[i].strip().startswith("// 0x"))

    dropped = lines[first_insn:keep_from]
    del lines[first_insn:keep_from]
    lines[start] = lines[start].replace(old_name, new_name)
    lines.insert(start + 1, (
        f"    // turok2: the ELF symbol for this function was at 0x{symbol:08X},\n"
        f"    // {shift} bytes ahead of its prologue, so the address the game calls\n"
        f"    // was missing from the function table. The {len(dropped) // 2} instruction(s)\n"
        f"    // that used to open the body stored through the caller's frame and\n"
        f"    // belong to the code before this function.\n"
    ))
    target.write_text("".join(lines))

    header.write_text(header.read_text().replace(old_name, new_name))

    entry_re = re.compile(
        r"(\{ \.func = )" + old_name + r"(, \.offset = 0x)([0-9A-Fa-f]{8})"
        r"(, \.rom_size = 0x)([0-9A-Fa-f]{8})( \},)")

    def rewrite(match):
        offset = int(match.group(3), 16) + shift
        size = int(match.group(5), 16) - shift
        return (f"{match.group(1)}{new_name}{match.group(2)}{offset:08X}"
                f"{match.group(4)}{size:08X}{match.group(6)}")

    text = table.read_text()
    text, count = entry_re.subn(rewrite, text)
    if count != 1:
        print(f"{old_name}: expected one table entry, found {count}", file=sys.stderr)
        return False
    table.write_text(text)

    print(f"{old_name} -> {new_name}: dropped {len(dropped) // 2} instruction(s), "
          f"shifted table entry by {shift} in {target.name}")
    return True


if __name__ == "__main__":
    sys.exit(0 if all(move(s, e) for s, e in MOVES.items()) else 1)
