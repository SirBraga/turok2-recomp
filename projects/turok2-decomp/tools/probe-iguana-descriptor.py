#!/usr/bin/env python3
"""Instrument the divide that ends the intro, to see why its divisor is zero.

func_00208810 divides a counter by the byte at offset 1 of a descriptor whose
pointer it reads from sp+0x30. That byte comes back zero, and the compiler's
break-7 after the divide ends the process:

    0x00208894: lw   $v0, 0x30($sp)     <- descriptor pointer
    0x00208898: lbu  $v1, 0x1($v0)      <- the divisor, measured as zero
    0x002088A0: lw   $v0, 0x6D20($v0)   <- numerator, from 0x800B6D20
    0x002088A4: divu $zero, $v0, $v1

Two possibilities remain, and they lead to very different fixes: the pointer is
valid and the byte is genuinely zero because the data behind it was never filled
in, or the pointer itself is wrong. The inherited note blames a resource DMA that
never happens, but instrumenting librecomp's do_dma showed no malformed cart
transfers at all, so that explanation no longer holds and the pointer has to be
looked at directly.

This prints the pointer, whether it lands in RDRAM, and the bytes behind it.

RecompiledFuncs is generated, so run this again after regen-recompiled-funcs.sh.
"""

import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TARGET = ROOT / "RecompiledFuncs"

MARKER = "turok2 diagnostic (temporario): divisor zero em 0x002088A4"

# The load of the divisor. The descriptor pointer is still in $v0 at this point,
# because the next instruction overwrites it.
ANCHOR = "    ctx->r3 = MEM_BU(ctx->r2, 0X1);"

PROBE = f'''    // {MARKER}. Ver tools/probe-iguana-descriptor.py.
    if ((uint32_t)ctx->r3 == 0) {{
        static int mostrados = 0;
        if (mostrados++ < 4) {{
            const uint32_t ponteiro = (uint32_t)ctx->r2;
            /* Estes arquivos sao C, sem bool. */
            const int na_rdram = (ponteiro >= 0x80000000u) && (ponteiro < 0x80800000u);
            fprintf(stderr, "[iguana] divisor zero: descritor=%08X %s\\n",
                ponteiro, na_rdram ? "(dentro da RDRAM)" : "(FORA da RDRAM)");
            if (na_rdram) {{
                fprintf(stderr, "[iguana]   bytes 0..15:");
                for (uint32_t i = 0; i < 16; i++) {{
                    fprintf(stderr, " %02X", (unsigned)MEM_BU(ctx->r2, i));
                }}
                fprintf(stderr, "\\n");
            }}
            fflush(stderr);
        }}
    }}
'''


def main():
    path = next((p for p in TARGET.glob("*.c")
                 if "RECOMP_FUNC void func_00208810(" in p.read_text()), None)
    if path is None:
        print("func_00208810 nao encontrada", file=sys.stderr)
        return 1

    text = path.read_text()
    if MARKER in text:
        print(f"sonda ja aplicada em {path.name}")
        return 0

    # The generated files are C and do not pull in stdio, so the probe has to
    # bring it along.
    if "#include <stdio.h>" not in text:
        text = text.replace('#include "funcs.h"', '#include <stdio.h>\n#include "funcs.h"', 1)

    lines = text.splitlines(keepends=True)

    # Only the occurrence inside func_00208810 matters, so find the function first.
    start = next((i for i, line in enumerate(lines)
                  if "RECOMP_FUNC void func_00208810(" in line), None)
    end = next((i for i in range(start + 1, len(lines))
                if lines[i].startswith("RECOMP_FUNC")), len(lines))

    for index in range(start, end):
        if lines[index].rstrip("\n") == ANCHOR.rstrip("\n"):
            lines.insert(index + 1, PROBE)
            path.write_text("".join(lines))
            print(f"sonda aplicada em {path.name}, linha {index + 2}")
            return 0

    print("ponto de ancoragem nao encontrado dentro de func_00208810", file=sys.stderr)
    return 1


if __name__ == "__main__":
    sys.exit(main())
