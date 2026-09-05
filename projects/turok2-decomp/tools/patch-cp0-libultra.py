#!/usr/bin/env python3
"""Redirect tiny libultra CP0 wrappers to N64ModernRuntime.

The Turok 2 ELF currently has provisional names for these functions, so
N64Recomp does not recognize them as libultra replacements.  Their original
bodies consist entirely of mfc0/mtc0 instructions; unsupported CP0 operations
therefore produce empty recompiled functions.  Keep the address-based names
used by the rest of the generated code, but delegate their bodies to the native
runtime implementations.

The identification is byte-for-byte compatible with the corresponding
Turok 3 libultra sources:

* 0x0029DFC0: osGetCount (mfc0 v0, C0_COUNT)
* 0x0029DFF0: __osDisableInt
* 0x0029E010: __osRestoreInt
"""

import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"

REPLACEMENTS = {
    "func_0029DFC0": """RECOMP_FUNC void func_0029DFC0(uint8_t* rdram, recomp_context* ctx) {
    // osGetCount: the original body is `mfc0 v0, C0_COUNT`, which cannot run
    // on the host.  This counter drives osGetTime and cinematic frame deltas.
    extern void osGetCount_recomp(uint8_t* rdram, recomp_context* ctx);
    osGetCount_recomp(rdram, ctx);
}
""",
    "func_0029DFF0": """RECOMP_FUNC void func_0029DFF0(uint8_t* rdram, recomp_context* ctx) {
    // __osDisableInt: host scheduling supplies the required synchronization.
    extern void __osDisableInt_recomp(uint8_t* rdram, recomp_context* ctx);
    __osDisableInt_recomp(rdram, ctx);
}
""",
    "func_0029E010": """RECOMP_FUNC void func_0029E010(uint8_t* rdram, recomp_context* ctx) {
    // __osRestoreInt: paired with func_0029DFF0 above.
    extern void __osRestoreInt_recomp(uint8_t* rdram, recomp_context* ctx);
    __osRestoreInt_recomp(rdram, ctx);
}
""",
}


def patch(name: str, body: str) -> bool:
    pattern = re.compile(
        r"^RECOMP_FUNC void " + name + r"\(uint8_t\* rdram, recomp_context\* ctx\) \{$"
    )

    for path in sorted(FUNCS.glob("*.c")):
        lines = path.read_text().splitlines(keepends=True)
        start = next(
            (i for i, line in enumerate(lines) if pattern.match(line.rstrip("\n"))),
            None,
        )
        if start is None:
            continue

        end = next(
            (i for i in range(start + 1, len(lines)) if lines[i].startswith("RECOMP_FUNC")),
            len(lines),
        )

        runtime_name = name.replace("func_0029DFC0", "osGetCount_recomp")
        runtime_name = runtime_name.replace("func_0029DFF0", "__osDisableInt_recomp")
        runtime_name = runtime_name.replace("func_0029E010", "__osRestoreInt_recomp")
        if runtime_name in "".join(lines[start:end]):
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
