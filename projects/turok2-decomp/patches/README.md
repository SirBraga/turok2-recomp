# Manual fixes to the recompiler output

`RecompiledFuncs/` is gitignored, so anything edited there exists only on disk and
is lost the moment N64Recomp runs again. These patches keep those edits
reproducible.

Regenerate and reapply with:

```sh
tools/regen-recompiled-funcs.sh              # fixes only
tools/regen-recompiled-funcs.sh --diagnostics # also the debug logging
```

To refresh the patches after fixing something new by hand:

```sh
tools/diff-recompiled-funcs.sh > patches/recompiled-funcs-all.patch
```

Then split the result between the two files below, keeping anything that prints
with the diagnostics.

## Native 60 FPS (Zelda-style C, not a RecompiledFuncs sed)

| Piece | Role |
| --- | --- |
| `src/patches/native_60.cpp` | Host helpers: force `gNextTicks=1`; lock increment to `(ticks * 15) / refresh` (0.25); Retrace does not Update once the DL pipeline is filled |
| `patches/fps60.c` | MIPS C source of record for the future `patches.elf` pipeline |
| `turok2.us.toml` `[[patches.hook]]` | Emitted into `func_00287ABC` / `func_00288C80` on regen |
| `RT64Context::send_dl` | always advertises unique source 60 Hz; RT64 interpolation stays off |

`tools/patch-60fps.py` is a no-op. Gameplay and cinema emit 60 unique display lists/s. Cinema `currentTime` is seconds (`increment * 1/15` in `func_00284568` / `func_00283CD4`), so duration matches the 15 Hz original. Intermediate poses are the engine's float lerp, not RT64 frame-matching. `TUROK2_AUTHORED_CADENCE=1` restores 30/15 Hz + interpolation. The game already boots past the title screen; these hooks do not reintroduce that hang.

Ghidra signature hints for the RAX decoder (audio, not title screen) live in `tools/turok2.n64sym`.

## recompiled-funcs-fixes.patch

Required for the game to run. Ten hunks, all the same defect class: a provisional
symbol in the ELF sits either on a `jr` delay slot or in the middle of a real
function, so the recompiler ends the function one instruction early or stops
before its epilogue. Each hunk restores the statement that was cut off.

| Function | Restored | File |
| --- | --- | --- |
| `func_0028EE40` | continues into `func_0028EE44` | `funcs_50.c` |
| `func_0041BA50` | continues into `func_0041BBB0` | `funcs_14.c` |
| `func_0042AA80` | continues into `func_0042AB2C` | `funcs_71.c` |
| `func_0042C194` | continues into `func_0042C38C` | `funcs_82.c` |
| `func_0042C3BC` | `addiu $sp, $sp, 0x18` delay slot | `funcs_49.c` |
| `func_0042C46C` | continues into `func_0042C480` | `funcs_68.c` |
| `func_0042C560` | continues into `func_0042C620` | `funcs_74.c` |
| `func_0042CF90` | continues into `func_0042CFC0` | `funcs_13.c` |
| `func_0042CFC0` | continues into `func_0042D040` | `funcs_6.c` |
| `func_0042D120` | continues into `func_0042D140` | `funcs_33.c` |

The last two rows of that group matter for a specific symptom worth recording.
`func_0042C3BC` and `func_0042C46C` each leaked `0x18` bytes of stack. Together
that left `func_00429FA0`'s epilogue reloading `$s2` from an address `0x30` too
low, so it picked up adjacent stack garbage instead of the game object pointer.
`func_0042FBA4` then cleared an array based on that bad pointer, landing on the
scheduler at `0x8011AD90` and zeroing both message queue capacities. Queues with
capacity zero look permanently full, VI events were rejected, and the game
deadlocked on a black screen.

A cleaner long-term fix would be to describe these boundaries in
`turok2.us.toml` under `function_sizes` or `manual_funcs` so the recompiler emits
correct code without post-processing. Until then these patches are the record.

## Texture packs (RT64)

The runner registers the `rt64.json` content type and `.rtz` containers before
`recomp::start`. Drop a folder or `.rtz` under `runtime-data/mods/` (see
`mods/turok2-hd-example/`). `game_id` must be `turok2`.

To dump hashes from a local ROM (do **not** commit dumps):

1. In-game, press **F2**. Hashes go to `build-native/runtime-data/texture-dumps/`
   (no native file dialog). Press F2 again to stop.
2. Optional: **F1** opens the RT64 editor on D3D12/Vulkan only. This Mac
   build uses Metal; F1 is a no-op (the ImGui backend does not exist).
3. Play until the materials you care about have been hashed (`.tmem`, Rice
   `.rdram` / `.json`).
4. Convert replacements to DDS BC7 with mipmaps. Point `rt64.json` at them, or
   pack the folder as `.rtz`.
5. Keep PNG/DDS dumps out of git. The example mod ships an empty `textures` list.

## recompiled-funcs-diagnostics.patch

Optional. Debug logging added while investigating the scheduler deadlock:
`[job:*]` around the job callback in `funcs_28.c`, `[state:429fa0-*]` around
`func_00429FA0`'s frame in `funcs_5.c`, and `[state:ac0c-sp]` stack pointer
balance checks in `funcs_50.c` and `funcs_57.c`. Safe to skip for a normal build.
