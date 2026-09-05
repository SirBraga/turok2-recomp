#!/usr/bin/env python3
"""Superseded: native 60 FPS is a Zelda-style C patch, not a RecompiledFuncs sed.

Live path:
  src/patches/native_60.cpp          host helpers
  patches/fps60.c                   MIPS C source of record
  turok2.us.toml [[patches.hook]]   emitted on N64Recomp regen
  RT64Context::send_dl              gEXSetRefreshRate(60) equivalent

Cinema_PathPlaying (func_00284188) still keeps authored 15 Hz paths.
This script is a no-op so old regen invocations do not fail.
"""

print("patch-60fps.py: skipped (native 60 lives in src/patches/native_60.cpp)")
