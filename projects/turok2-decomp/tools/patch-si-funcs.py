#!/usr/bin/env python3
"""Redirect the recompiled raw SI entry points at the native implementation.

RecompiledFuncs/ is generated output, so this runs again after every
regeneration. It is idempotent: a file that already delegates is left alone.
"""

import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

REPLACEMENTS = {
    "func_0029A080": """RECOMP_FUNC void func_0029A080(uint8_t* rdram, recomp_context* ctx) {
    // s32 __osSiRawStartDma(s32 direction, void* dramAddr)
    //
    // Replaced. The original points SI_DRAM_ADDR at the buffer, kicks off a
    // RD64B/WR64B burst against PIF RAM and relies on the SI interrupt to
    // release the osRecvMesg that follows. Nothing raises that interrupt here,
    // so both callers, func_00299A40 and func_00427F80, blocked forever.
    // See src/si.cpp.
    extern void turok2_si_raw_start_dma(uint8_t* rdram, recomp_context* ctx);
    turok2_si_raw_start_dma(rdram, ctx);
}
""",
    "func_0029A140": """RECOMP_FUNC void func_0029A140(uint8_t* rdram, recomp_context* ctx) {
    // s32 __osSiDeviceBusy(void)
    //
    // Replaced. The original reads SI_STATUS at 0xA4800018, which is outside
    // RDRAM; recomp_rdram_offset would fold that onto the first bytes of
    // memory and return whatever happens to live there. See src/si.cpp.
    extern void turok2_si_device_busy(uint8_t* rdram, recomp_context* ctx);
    turok2_si_device_busy(rdram, ctx);
}
""",
}


def patch(name: str, body: str) -> bool:
    pattern = re.compile(
        r"^RECOMP_FUNC void " + name + r"\(uint8_t\* rdram, recomp_context\* ctx\) \{$"
    )

    for path in sorted(FUNCS.glob("*.c")):
        lines = path.read_text().splitlines(keepends=True)

        start = next((i for i, line in enumerate(lines) if pattern.match(line.rstrip("\n"))), None)
        if start is None:
            continue

        end = next(
            (i for i in range(start + 1, len(lines)) if lines[i].startswith("RECOMP_FUNC")),
            len(lines),
        )

        if "turok2_si_" in "".join(lines[start:end]):
            print(f"{name}: already delegating in {path.name}")
            return True

        lines[start:end] = [body]
        path.write_text("".join(lines))
        print(f"{name}: patched {path.name}")
        return True

    print(f"{name}: NOT FOUND", file=sys.stderr)
    return False


if __name__ == "__main__":
    ok = all(patch(name, body) for name, body in REPLACEMENTS.items())
    sys.exit(0 if ok else 1)
