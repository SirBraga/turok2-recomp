# Turok 2 Native Port Roadmap

This project exists for native ports, modding—including HD textures, real
widescreen, and 60 FPS—and preservation.

Long-term goals include:

1. Reusing approximately 70% of the work to port **Turok 3: Shadow of
   Oblivion** and **Armorines: Project S.W.A.R.M.**, which share related
   Acclaim engine technology.
2. Bringing the project to Android through RT64's Vulkan backend as a stretch
   goal.

## Standing on the shoulders of

- [Drahsid/turok3](https://github.com/Drahsid/turok3) — in-progress decompilation
  of Turok 3 and a foundation for the official Turok 3 remaster.
- [Drahsid/LibTEngine](https://github.com/Drahsid/LibTEngine) — reverse-engineered
  structures and function signatures for the Turok 2 and Turok 3 engine.
- [Mr-Wiseguy/N64Recomp](https://github.com/Mr-Wiseguy/N64Recomp),
  [N64ModernRuntime](https://github.com/Mr-Wiseguy/N64ModernRuntime), and
  [RT64](https://github.com/rt64/rt64) — the native-port pipeline.
- [ethteck/splat](https://github.com/ethteck/splat) — disassembler and segment
  splitter.
- [matt-kempster/m2c](https://github.com/matt-kempster/m2c) — MIPS-to-C
  decompiler for matching work.

## Phase 1 — Recompilation bring-up

- [x] Identify and verify the Turok 2 USA 1.0 ROM.
- [x] Generate a symbolized MIPS ELF and N64Recomp metadata.
- [x] Produce and compile the initial recompiled C output.
- [x] Create a native N64ModernRuntime and RT64 executable.
- [x] Implement initial TLB and PI/DMA compatibility.
- [x] Reach game initialization and asset loading.
- [x] Repair the scheduler/message-queue path and sustain VI delivery at 60 Hz.
- [x] Submit valid graphics tasks to RT64 and render the opening sequence.
- [x] Restore the nested texture-loader entry at `0x00207914`; this fixes the
  invalid Iguana animation descriptors without bypassing the original code.
- [x] Preserve the engine-selected 30 Hz gameplay and 15 Hz cinematic cadence.
  This keeps discrete weapon, particle and cinema events on their authored
  timing while RT64 produces a 60 Hz presentation.
- [x] Restore all 13 entries of the Iguana object-kind jump table at
  `0x800A7E60`. A provisional symbol at `0x002682FC` had split the false-return
  target away from `func_002682CC`, causing N64Recomp to emit only case zero and
  exit immediately after the arrows. The full opening now advances through
  states 5, 7, and 13 without a recompilation error.
- [x] Raise the default presentation quality: high-resolution HiDPI output,
  automatic integer internal scaling, permanently enabled MSAA 2x, automatic
  high-precision framebuffer, and
  RT64 skip-buffering presentation. The latter follows the newest rendered
  color image instead of exposing black members of Turok 2's rotating buffer,
  and interpolates engine-paced cinematics to the display refresh rate.
- [x] Identify the provisional libultra CP0 wrappers through the matching
  Turok 3 sources and redirect `osGetCount`, `__osDisableInt`, and
  `__osRestoreInt` to N64ModernRuntime; opening/cinematic time now advances.
- [x] Measure engine and renderer cadence independently: gameplay holds 30.0
  updates/s with two RT64 frames per state; cinema holds 15.0 updates/s with
  four RT64 frames per state. This produces 60 Hz motion without doubling the
  cost or event frequency of the original game logic.
- [x] Correct graphics-task synchronization in N64ModernRuntime: delay
  `OS_EVENT_SP` until RT64 has parsed the display list, preventing Turok 2 from
  recycling nested geometry lists while the renderer is still reading them.
- [x] Register the callback entry at `0x00265A30`, which the ELF had hidden
  inside the preceding oversized symbol.
- [x] Register the alternate callback entry at `0x00265200` and validate
  optional callbacks against the runtime's loaded-function map. The former
  high-bit heuristic rejected every valid low-VRAM Turok 2 callback and hid
  particle swooshes, Acclaim letter effects, arrows, gunfire, explosions, and
  damage feedback. Turok 3's separate particle-effect and particle-swoosh
  resources were used to confirm this engine path.
- [ ] Fix the remaining incorrect function boundaries and symbols.
- [ ] Reach the title screen reliably.

## Phase 2 — Playable baseline

- [ ] Implement or integrate the required RSP microcodes.
- [ ] Restore sound effects and music playback.
- [ ] Implement controller input and save support.
- [ ] Boot every level from a clean launch.
- [ ] Complete the game without recompilation-specific crashes.
- [ ] Validate important behavior against the original N64 release.
- [ ] Replace temporary runtime hacks with reproducible patches.
- [ ] Support legally supplied USA 1.0 ROMs without distributing game data.

## Phase 3 — Native-port features

- [ ] Add configurable internal resolution and fullscreen modes.
- [x] Implement real widescreen projection without stretching the HUD. Move
  Turok 2's one-pixel 4:3 edge guards to the physical widescreen edges so they
  no longer produce vertical seams at the old framebuffer boundary.
- [x] Preserve the original 15/30 Hz simulation cadence while RT64 manufactures
  four/two distinct display frames for a 60 Hz presentation. Synthetic frames
  are never dropped, workload backlog cannot discard the remaining group, and
  15 Hz cinematics are interpolated rather than duplicated.
- [x] Detect unmistakable cinematic camera cuts before scene matching. This
  prevents synthetic zoom/sweep artifacts across authored cuts while leaving
  continuous camera and object motion fully interpolated.
- [ ] Audit animation, physics, particles, and cutscenes for any remaining
  assumptions tied to the original 15/30 FPS modes.
- [ ] Add modern controller bindings, dead zones, and sensitivity settings.
- [ ] Add keyboard and mouse support.
- [ ] Add an HD texture replacement system.
- [ ] Add configurable FOV and accessibility options.
- [ ] Use portable save and configuration directories.

## Phase 4 — Modding support

- [ ] Maintain a stable symbol and engine-structure database.
- [ ] Add runtime hooks for gameplay and rendering modifications.
- [ ] Support external texture, model, audio, and level overrides.
- [ ] Document the mod format and publish an example project.
- [ ] Add a debug console and developer overlays.
- [ ] Create a versioned mod API with compatibility checks.
- [ ] Provide a mod manager or command-line launcher.

## Phase 5 — Engine reuse

- [ ] Separate game-specific code from shared Acclaim engine support.
- [ ] Import compatible types and signatures from LibTEngine.
- [ ] Compare Turok 2 and Turok 3 engine subsystems.
- [ ] Extract reusable runtime, TLB, RSP, asset, and renderer modules.
- [ ] Bring up Turok 3 using the shared foundation.
- [ ] Investigate Armorines: Project S.W.A.R.M. compatibility.
- [ ] Document the process for porting other related Acclaim games.

## Stretch goals

- [ ] Release builds for Windows, Linux, and macOS.
- [ ] Add automated builds and regression tests.
- [ ] Add deterministic verification against emulator traces.
- [ ] Implement Android input, storage, lifecycle, and packaging support.
- [ ] Render on Android through RT64's Vulkan backend.
- [ ] Publish preservation-oriented technical documentation and symbol archives.

## Current technical status

The native executable regenerates cleanly and advances through the full opening
state-machine loop. The post-arrows exit was a split jump-table target:
the original object-kind table reaches both `0x002682F4` and `0x002682FC`, but
the latter's provisional function symbol caused the generated switch to retain
only case zero. A reproducible post-generation pass now restores the original
13-case behavior. The earlier apparent scene-geometry corruption was a runtime race:
N64ModernRuntime signalled RSP completion before RT64 parsed the list, and
Turok 2 legally recycled its geometry cache in response. Moving `OS_EVENT_SP`
after `send_dl()` eliminated the invalid nested lists in extended runs.

The high-volume VI, scheduler, interpolation, widescreen, and display-list
diagnostics are opt-in instead of running during normal play. A monitored intro
run now renders the Acclaim assembly, Iguana arrows and guns, and reports every
15 Hz group as four rendered frames and every 30 Hz group as two, with zero
synthetic-frame skips. The next bring-up task is to exercise deeper gameplay
paths, continue correcting callable entry points, and add repeatable visual
regression captures. Turok 3 and LibTEngine remain the primary references for
identifying engine structures, particle resources, and libultra-equivalent
routines.
