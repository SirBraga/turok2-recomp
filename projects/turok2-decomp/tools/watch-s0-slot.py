#!/usr/bin/env python3
"""Instrument entry_00206990 to find which call overwrites its saved $s0.

The dispatch loop in func_00201C60 keeps the object pointer in $s0 and rebuilds
the queue pointer from it on every iteration, so a handler that fails to give
$s0 back poisons the next osRecvMesg. Measurement already showed the handler
returns a balanced $sp, which leaves the other possibility: something writes
over the stack slot the handler saved $s0 into.

This captures the slot right after the prologue stores it and re-reads it after
every direct call, so the first call that changes it is named instead of guessed.

RecompiledFuncs is generated, so run this again after regen-recompiled-funcs.sh.
"""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TARGET = ROOT / "RecompiledFuncs" / "funcs_95.c"
FUNCTION = "entry_00206990"

SAVE_LINE = "    MEM_W(0X18, ctx->r29) = ctx->r16;"
CAPTURE = """    // turok2 diagnostic (temporario): valor gravado no slot de $s0. A pilha volta
    // equilibrada, entao o suspeito e alguem escrevendo sobre este slot.
    const uint32_t turok2_s0_slot = (uint32_t)MEM_W(0X18, turok2_sp0);"""

WRAPPER_RE = re.compile(r"^\s*\{ (\w+)\(rdram, ctx\); if \(\(uint32_t\)ctx->r29 != turok2_sp0\) \{")


def main():
    text = TARGET.read_text()
    if "turok2_s0_slot" in text:
        print("ja instrumentado, nada a fazer")
        return 0

    lines = text.splitlines()

    start = next((i for i, line in enumerate(lines) if f"void {FUNCTION}(" in line), None)
    if start is None:
        print(f"{FUNCTION} nao encontrada em {TARGET.name}", file=sys.stderr)
        return 1
    end = next((i for i in range(start + 1, len(lines)) if lines[i].startswith("RECOMP_FUNC")), len(lines))

    out = []
    inserted = False
    wrapped = 0
    for index, line in enumerate(lines):
        out.append(line)
        if not (start <= index < end):
            continue

        if not inserted and line == SAVE_LINE:
            out.extend(CAPTURE.splitlines())
            inserted = True
            continue

        match = WRAPPER_RE.match(line)
        if match is not None:
            name = match.group(1)
            wrapped += 1
            out.append(
                '    if ((uint32_t)MEM_W(0X18, turok2_sp0) != turok2_s0_slot) {'
                ' static int q = 0; if (q++ < 3) {'
                ' fprintf(stderr, "[slot] apos %s: sp+0x18 0x%08X -> 0x%08X\\n",'
                f' "{name}", turok2_s0_slot, (uint32_t)MEM_W(0X18, turok2_sp0));'
                ' fflush(stderr); } }'
            )

    if not inserted:
        print("linha de salvamento de $s0 nao encontrada", file=sys.stderr)
        return 1

    TARGET.write_text("\n".join(out) + "\n")
    print(f"instrumentado {FUNCTION}: captura do slot + {wrapped} chamadas vigiadas")
    return 0


if __name__ == "__main__":
    sys.exit(main())
