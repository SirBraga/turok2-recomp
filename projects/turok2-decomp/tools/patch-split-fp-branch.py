#!/usr/bin/env python3
"""Reconnect func_0021E374 across an ELF split that loses the FP condition.

The real instruction stream is contiguous:

    0021E4F8 c.lt.s f2,f20
    0021E4FC nop
    0021E500 bc1f 0021E510

N64Recomp emits 0x0021E500 as a separate C function.  Its local ``c1cs`` is
therefore reset to zero, and the preceding body at 0x0021E374 also returns
without reaching the epilogue at 0x0021E5A0.  Re-evaluate the exact comparison
at the split entry and reconnect the fallthrough.  This models the original
instructions; it does not approximate an indirect target.
"""

import pathlib
import sys


ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

ROOT_TAIL = (
    "    // 0x0021E4F8: c.lt.s      $f2, $f20\n"
    "    CHECK_FR(ctx, 2);\n"
    "    CHECK_FR(ctx, 20);\n"
    "    c1cs = ctx->f2.fl < ctx->f20.fl;\n"
)
ROOT_FIXED = ROOT_TAIL + (
    "    // 0x0021E4FC: nop\n"
    "\n"
    "    // The ELF split at 0x0021E500 is not a return on N64 hardware.\n"
    "    func_0021E500(rdram, ctx);\n"
    "    return;\n"
)

BRANCH = (
    "    // 0x0021E500: bc1f        L_0021E510\n"
    "    if (!c1cs) {\n"
)
BRANCH_FIXED = (
    "    // The c.lt.s at 0x0021E4F8 lives in the preceding split C body.\n"
    "    // Reconstruct its condition before executing the original bc1f.\n"
    "    c1cs = ctx->f2.fl < ctx->f20.fl;\n"
    "    // 0x0021E500: bc1f        L_0021E510\n"
    "    if (!c1cs) {\n"
)


def main() -> int:
    root_hits = 0
    branch_hits = 0
    for path in sorted(FUNCS.glob("*.c")):
        text = path.read_text()
        updated = text

        # Only the actual func_0021E374 body lacks 0x0021E4FC.  Duplicated
        # static loop bodies already contain it and are connected by the
        # generic merge pass.
        if "RECOMP_FUNC void func_0021E374" in updated and ROOT_FIXED not in updated:
            count = updated.count(ROOT_TAIL)
            if count != 1:
                raise RuntimeError(f"{path}: expected one func_0021E374 tail, found {count}")
            updated = updated.replace(ROOT_TAIL, ROOT_FIXED, 1)
            root_hits += 1

        if "RECOMP_FUNC void func_0021E500" in updated and BRANCH_FIXED not in updated:
            count = updated.count(BRANCH)
            if count != 1:
                raise RuntimeError(f"{path}: expected one 0x0021E500 branch, found {count}")
            updated = updated.replace(BRANCH, BRANCH_FIXED, 1)
            branch_hits += 1

        if updated != text:
            path.write_text(updated)

    if root_hits not in (0, 1) or branch_hits not in (0, 1):
        raise RuntimeError(f"unexpected patch counts: root={root_hits} branch={branch_hits}")

    print(f"split FP branch: root={root_hits}, branch={branch_hits}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
