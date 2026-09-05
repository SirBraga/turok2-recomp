#!/usr/bin/env python3
"""Temporary bypass: keep the Iguana logo animation from killing the process.

This is not a fix. It hides a real bug so the code past the intro can be reached
and worked on.

What actually goes wrong: the animation's resource never loads. The DMA request
for it carries a device address of 0x1CFE3000, far past the end of a 32 MB ROM,
and a size of zero, so nothing is transferred and the buffer keeps whatever it
held before. func_002079D8 then builds the animation descriptor out of that stale
memory through func_002017D4, which is base + *(base + 4 + 4*index), a table of
relative offsets. The offsets are garbage, so the pointers are garbage, and the
frame-rate byte the descriptor should hold reads as zero.

func_00208810 divides a frame counter by that byte. The SN64 compiler puts a
"break 7" after every division to trap a zero divisor, and that trap is what ends
the process. Substituting 1 lets the animation run with nonsense timing rather
than dying, which is enough to reach the game code behind it.

Remove this pass once the resource load is fixed.

Status (2026-09-01): the malformed request described above no longer happens.
librecomp's do_dma is the single choke point every cart transfer passes through,
and instrumenting it to report any transfer with a zero size or a device address
past the end of the 32 MB cart produced no reports across full runs. So either the
intervening fixes changed this path or the original reading was of a different code
state.

The bypass is therefore masking an unknown rather than a known bug. It is kept only
so the analysis above is not lost; --revert takes it back out, which is the
preferred state, because a trap that fires is worth more than a trap that is hidden.
"""

import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TARGET = ROOT / "RecompiledFuncs"

MARKER = "turok2 bypass: zero divisor in the Iguana animation"

# The three divisions in func_00208810 and the register holding each divisor.
DIVISIONS = {
    "// 0x002088A4: divu": "r3",
    "// 0x002088C0: div": "r2",
    "// 0x002088F4: div": "r5",
}


def revert(path, lines):
    kept = []
    removed = 0
    skip_next = False
    for line in lines:
        if skip_next:
            skip_next = False
            removed += 1
            continue
        if MARKER in line:
            # The pass inserts a comment line followed by the guard itself.
            skip_next = True
            removed += 1
            continue
        kept.append(line)

    path.write_text("".join(kept))
    print(f"bypass da Iguana removido: {removed} linhas retiradas de {path.name}")
    return 0


def main():
    path = next((p for p in TARGET.glob("*.c")
                 if "RECOMP_FUNC void func_00208810(" in p.read_text()), None)
    if path is None:
        print("func_00208810 not found", file=sys.stderr)
        return 1

    lines = path.read_text().splitlines(keepends=True)
    applied_already = any(MARKER in line for line in lines)

    if "--revert" in sys.argv:
        if not applied_already:
            print(f"bypass da Iguana nao esta aplicado em {path.name}")
            return 0
        return revert(path, lines)

    if applied_already:
        print(f"bypass da Iguana ja aplicado em {path.name}")
        return 0

    applied = 0
    for index in range(len(lines) - 1, -1, -1):
        stripped = lines[index].strip()
        for prefix, register in DIVISIONS.items():
            if not stripped.startswith(prefix):
                continue
            lines.insert(index + 1,
                f"    // {MARKER}. See tools/bypass-iguana-divide.py.\n"
                f"    if ((uint32_t)ctx->{register} == 0) ctx->{register} = 1;\n")
            applied += 1

    path.write_text("".join(lines))
    print(f"bypass da Iguana aplicado: {applied} divisoes protegidas em {path.name}")
    return 0 if applied == len(DIVISIONS) else 1


if __name__ == "__main__":
    sys.exit(main())
