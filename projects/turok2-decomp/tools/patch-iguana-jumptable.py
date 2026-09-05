#!/usr/bin/env python3
"""Restore the two destinations of func_002682CC's jump table.

The original table at 0x800A7E60 has thirteen entries. Nine return true from
the local label at 0x002682F4; entries 1, 4, 9 and 11 jump to the adjacent
eight-byte false-return body at 0x002682FC. That body is currently exposed as a
provisional ELF function symbol, so N64Recomp treats it as a different function
and emits only case 0 for the reader. The first nonzero object kind encountered
by the Iguana cinema consequently calls switch_error and exits the port.

Keep this post-generation pass until the provisional symbol is folded into its
parent function in the decomp ELF.
"""

import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"
FUNCTION = "func_002682CC"

ANCHOR = """    switch (jr_addend_002682EC >> 2) {
        case 0: goto L_002682F4; break;
        default: switch_error(__func__, 0x002682EC, 0x800A7E60);
    }
"""

REPLACEMENT = """    // The original 13-entry table has two destinations. The false-return
    // destination (0x002682FC) was split into a provisional ELF function and
    // therefore omitted from the generated switch.
    switch (jr_addend_002682EC >> 2) {
        case 1:
        case 4:
        case 9:
        case 11:
            func_002682FC(rdram, ctx);
            return;
        case 0:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 12:
            goto L_002682F4;
        default:
            switch_error(__func__, 0x002682EC, 0x800A7E60);
    }
"""


def main() -> int:
    for path in sorted(FUNCS.glob("*.c")):
        text = path.read_text()
        if f"RECOMP_FUNC void {FUNCTION}" not in text:
            continue

        if "original 13-entry table has two destinations" in text:
            print(f"{FUNCTION}: already patched in {path.name}")
            return 0

        if ANCHOR not in text:
            print(f"{FUNCTION}: jump-table switch not found in {path.name}", file=sys.stderr)
            return 1

        path.write_text(text.replace(ANCHOR, REPLACEMENT, 1))
        print(f"{FUNCTION}: restored all 13 jump-table cases in {path.name}")
        return 0

    print(f"{FUNCTION}: NOT FOUND", file=sys.stderr)
    return 1


if __name__ == "__main__":
    sys.exit(main())
