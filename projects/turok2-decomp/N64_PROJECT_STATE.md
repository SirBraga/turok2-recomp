# Turok 2: Seeds of Evil US 1.0 — session state for n64-decomp skill.
# Game already boots past the title screen. Do not treat title-screen hang as current.

## Track
B — N64Recomp static port (not matching decomp)

## Phase
In-game debug HUD: F8 skips cinema, F5/F7 save/load Adia, F3 toggles HUD.

Playable baseline: unique 60 Hz Update/Draw (cinema time in seconds unchanged),
RT64 interpolation off, RAX/audio bank path repaired.

## ROM
- File: `projects/turok2-decomp/baserom.us.z64` (local, not committed)
- SHA1: `fb0400f21e3f043939ab56500c7b12a3231006f1`

## Mapping
| Name | Address | Notes |
| --- | --- | --- |
| CEngineApp__Update | `func_00287ABC` | gNextTicks store at 0x00287FF8 |
| CEngineApp__Retrace | `func_00288C80` | DL-count Update at 0x00288D10 |
| CEngineApp__Main | `func_00286674` | OS_SC_DONE → Update |
| CEngineApp__Draw | `func_00287248` | |
| Cinema_PathPlaying | `func_00284188` | path window; unique 60 Hz DLs, currentTime in seconds |
| CIN_Update_Time | `func_00284568` | currentTime += increment * (1/15) |
| gNextTicks | 0x8011AD10 | nNextFields |
| gFrameIncrement | 0x800B6D28 | (ticks * 15) / refresh |
| gRefreshRate | 0x8011B0A4 | NTSC 60 |
| gDisplayListCount | 0x8011B110 | triple-buffer spare slots |
| GameApp | 0x800F6CB0 | |
| aspMain ROM | 0xBF520 | IMEM 0x1080, table DMEM+0x10 |
| live libaudio | 0x0028A4A0 | ROM 0x08AAA0; 0xC3074 is a dead duplicate |
| RAX cluster | `func_0028B614`…`func_0028BDFC` | many `lbu`, no COP1 |
| unpack candidate | `func_0028DBAC` | 0x350, 19 `lbu`, 2 `jal` |
| compact unpack | `func_00292640` | 0x204, 16 `lbu`, 1 `jal` |

## 60 FPS
Host C + toml hooks, rebuilt into `Turok2Recompiled`. Default is unique 60 Hz
Update/Draw (`gNextTicks=1`, increment `0.25`) for gameplay **and** cinema.
`func_00284568` / `func_00283CD4` advance `currentTime += increment * (1/15)`
so authored cinema seconds stay real-time. Intermediate poses are the engine's
own float lerp (path eval `func_00410BB4`, anim `func_002097AC`).
`RT64Context::send_dl` advertises source 60 and present 60 by default.
`workload_queue` forces `targetRate=0` so RT64 does **not** interpolate
(30/15→60 or 60→120). N64 VI stays 60 Hz so audio is not doubled. Retrace
Update only while `gDisplayListCount > 1`.
`TUROK2_AUTHORED_CADENCE=1` restores the original 30/15 Hz scheduler.
`TUROK2_RT64_INTERPOLATE=1` re-enables RT64 frame-matching only.
`TUROK2_UNIQUE_120=1` is an opt-in engine test (not the default): host VI
120, increment `0.125`, leftover `+= 0.125`, AI still 60, source=120 with
matching still forced off. That is unique 120 DLs, not 60→120 interpolation.
**User rule 2026-09-04:** never bring back the 30/15 interpolated look.
Do not set `TUROK2_RT64_INTERPOLATE`, do not turn `targetRate` back on to
save CPU. Default stays unique 60 + `targetRate=0`.
Watch stderr `[fps:engine]`, `[rt64:source-rate]`, and `[rt64:interp]`.

### Integer 15/30 family — freeze 2026-09-04
- First leftover class: `CAI.m_FreezeTime` (`func_00245848` at `0x00245884`)
  does `timer -= 1` then zeros `gFrameIncrement`. Authored gameplay lasts
  N/30 s; unique 60 without a hook lasts N/60 s.
- `turok2_patch_scale_freeze` at `0x00245890` keeps a per-CAI float
  accumulator and only stores the decremented byte every two unique-60
  Updates (`+= 0.25`, consume at `0.5`). World pause (`increment = 0`)
  still happens every Update while the timer is live.
- `turok2_patch_relock_increment` at `0x00288084` rewrites increment after
  the optional `ticks/60` store at `0x00288080` (0.0167). Do not relock
  after a legitimate freeze zero later in the same Update.
- Particle integer leftovers closed 2026-09-04: `m_nFrames` (CParticle+0x128)
  is a lifetime *threshold* vs float `m_cFrame`, never `-= 1` per Update.
  `m_cAnimFrame` (+0x12A) is `trunc(m_cFramePos)`, not an incrementing byte.
  `func_00230CB4` at `0x00230F00` does `m_cFrame += gFrameIncrement`.
  `func_00228C38` at `0x0022B524` does
  `m_cFramePos += increment * m_Framerate * D_800B6D30 * const`.
  Spawn writes `m_nFrames` from ROM/random (`0x0022B0F0`, `0x0022FE78`)
  and `m_nRandomFrame = -1`. No host scale hook.

### Integer 15/30 family — i-frames / AI think / HUD 2026-09-04
- i-frames: `CPlayer.m_InvincibilityTime` is a **float** at +0xA30.
  `func_0024DDA0` subtracts `gFrameIncrement`. No integer hook.
- AI think: `CAI.m_AnimRepeatedCount` (+0xC7) `+= 1` in `func_00243170`
  when the anim index stays. Hooks at `0x0024329C`, `0x00243314`,
  `0x00243344`, `0x002433F8` (`$s1` = CAI). Zero at `0x002433CC` is not
  hooked. Same 0.25/0.5 accumulator as freeze.
- `PathFindCount` (+0xCA) is a scene index write, not a countdown.
- `COverlay.m_Time` (+0x0C) is a mode/id write, not `+=1` per Update.
- HUD/spawn leftover: `func_00272EC4` at `0x00272F44` stores
  `lh/addiu -1` into object+0x68 (`sh $v0`). Hook only the store path.
- A/B: `TUROK2_AUTHORED_CADENCE=1` skips every integer scale hook.

### Graphics menu / texture packs / camera 2026-09-04
- Graphics tab: Filtering (default Pixel Scaling), post-blend dither Off,
  HUD/2D upscale (default All), FOV 1.0–1.5, far/fog 1.0–2.0. Extra keys
  live in `graphics.json`, not `GraphicsConfig`. Applied via
  `apply_extra_graphics_options`.
- HUD/2D All renders texrects at output resolution (crisp HUD). Original
  keeps 240p. This is sharpness, not HUD *size*.
- HUD Size 0.50–1.00 scales gameplay 2D draw in `func_0027B320`
  (ScaleX/Y on the stack) and 3D digits/icons in `func_00277CF0`
  (`$f22`/`$f24` before `func_0027A7A0`). Pixel positions stay so
  corners hold. First-person weapon uses on-screen projection and is
  not scaled. Pause/cinema overlay callers (`0x004xxxxx`) are skipped.
  Texture dump (F2) is deferred; hashes stay local, do not commit ROM.
- General: mouse sensitivity (50% = old 1.0), analog look, deadzone 20%.
- Texture packs: register `rt64.json` / `.rtz` before `recomp::start`.
  Skeleton `mods/turok2-hd-example/` has no ROM textures.
  **F2** dumps hashes to `runtime-data/texture-dumps/` (no file dialog).
  F1 inspector is D3D12/Vulkan only (Metal has no ImGui backend). Do not commit dumps.
- Gameplay FOV/far: `turok2_patch_gameplay_camera` at `0x0027D97C`
  (after Cinema_PathPlaying). Cinema (`$v0!=0`) and on-screen HUD
  projection (+0x430) are not scaled. Cull scale is `WIDE_CULL * fov`.
- RDP fog: `turok2_patch_fog_position` at `0x0027E530`. `m_FogStart`
  is a packed int (low 16 = gSPFogPosition min). Do **not** store a
  float there. Do **not** force min=999: `fm=128000/(1000-min)` is
  int16, 999 washes the framebuffer grey (Adia 2026-09-04). Authored
  min is already 995; only push when min < 900, cap at 996.
  HUD Size customization is parked.
- Object model LOD2: T2 `CIntelligenceBase` has `m_LOD2Dist` / `m_nModelLOD2`
  in the header, but no T2 code compares +0x08 after `m_pIntelligence`.
  `func_00266570` reads the union (Action idle/go), not the base pair.
  Draw `func_0023801C` passes 1.0 / 2.5 / 0.35 scales, not world distance.
  Do **not** ship a blind LOD2 hook. F3DEX vertex LOD is already off
  (`forceBranch=true`). Texture mip LOD already scales (`textureLOD.scale`).
- HLE 3-point stays on (`threePointFiltering` default true). Graphics
  tab Filtering is VI only. Bilinear HLE blurs 4–32 px ROM textures;
  do not force it off until a DDS pack exists. A 2026-09-04 always-on
  bilinear flip was reverted for that reason.
- Controls tab drives the pad through `get_n64_input`. Right stick look
  shares `turok2_patch_direct_mouse_look` when analog look is on.

### In-game debug HUD 2026-09-04
- Overlay (top-left): F8 skip cinema, F9 A, F5 save, F7 load, F3 hide.
- F2 texture dump to `runtime-data/texture-dumps/` (no file dialog).
  F1 RT64 ImGui editor is D3D12/Vulkan only — Metal NewFrame SIGSEGVs.
- F8 snaps cinema `currentTime` past the path end and pulses Start.
- F5/F7 dump/restore 8MB RDRAM + useg bank window to `saves/quick.t2sav`.
  Load keeps live ultramodern `OSThread` (host `context` pointer) and
  message-queue thread heads. The first scan matched 4299 false
  positives and crashed; the scan now requires 8-aligned structs,
  stack in `0x800C0000–0x80128000`, and 4–24 hits.
- `TUROK2_AUTO_LOAD=1` loads that save after 3s of Updates.

### Integer 15/30 family — flinch + hurt SFX 2026-09-04
- Warblade/Talon hit-stop reported 100% (no leftover world freeze).
- `CAI.m_FlinchCountdown` (CAI+0x12) inits to 0x19 and `-= 1` in
  `func_0021B95C` (`0x0021C3D4`, CAI in `$s0`) and `func_0021F7F4`
  (`0x0021F948`, CAI in `$s3`). Same 30 Hz accumulator as freeze.
- `CAI.m_LastHurtSFXTimer` (CAI+0xCB) `+= 1` in `func_0025C5F8` at
  `0x0025C6A0` until 100. Hurt sound plays when the byte is `>= 11`.
  Scale the +1 so grunts do not fire twice as often.

### Integer 15/30 family — swoosh add-edge 2026-09-04
- Totem-side lasers are CSwoosh ribbons. `m_LifeTime` / edge fade already
  use `gFrameIncrement`. The leftover is add-edge once per Update:
  `func_002360A0` / `func_00236170` / `func_00234E48` / `func_00236C64`
  all jal `func_002333C0` → `func_00235FF4` with no time gate.
- First hook kept the first edge (empty `m_EdgeList`). Totem pulses recycle
  a short-lived swoosh, so every add was "first" and the gate never fired.
  User still saw 2× after that build. The hook now gates every allocate
  (`+= 0.25`, consume at `0.5`), including the first. Skipping zeros `$s0`.
- Flag 8 `m_AddEdgeTime += 1` (detach owner at 3) is scaled at
  `0x00233C6C` by `turok2_patch_scale_swoosh_detach`.
- Do not also scale the add-edge UV delta (`dist * 0.005` at `0x0023350C`)
  while this gate is on — that path only runs on a successful add.
- If still 2× after the first-edge fix: spawn leftover or `pos += vel`
  without increment, not another add-edge tweak.

### Visual leftovers — fluid 60/120 2026-09-04
User: water / totem laser / menus SUPER fast at unique 60 **and** 120.
Do **not** restore 15/30 skip-look. Scale deltas by `increment/0.5`
(0.5 at unique 60, 0.25 at unique 120) so 120 Updates still cover one
authored second with intermediate poses.
- Menus: `func_00277328` is COverlay::Update and never loads increment.
  Mode 4 lerp (`pos += (final-pos)*k` at `0x00277520`) scales `$f3`.
  Modes 5/6 Euler (`pos += vel`, `vel += accel`) scale `$f0`.
  Mode 3 `m_Time -= 1` stays on the integer leftover accumulator.
  Do **not** hook `entry_00413E14` (layout /320 /240) or `func_004133A4`
  (hold-button slider). Overlay `0x004xxxxx` fades already use increment.
- Laser: skip-to-30 add-edge made the ribbon choppy and still 2× when
  two callers ate the accum in one Update. Now one allocate per Update
  (`g_update_gen`) plus UV `dist*0.005` at `0x0023350C` × `increment/0.5`.
  `func_00236040` is edge recycle, not a spawn bypass.
- Water: CSkyLayer scroll/frame already × increment. Grid leftover is
  the vertex-color wave in `func_00214844` / `entry_00214F68`: even
  `gFrameCount` (0x800B6D18) gate plus raw frame index into a 64-entry
  table. Force the gate open and scale the index. Camera wobble already
  uses increment. `func_0021CDAC` @ `0x0021D1B8` is a profiler, not UV.
- 2026-09-04 video (17:12 unique 60): Adia water ripples, totem energy
  column, weapon-select bars. Extra leftover: helpers that index the
  same wave / a 15-entry UV table with **raw** `gFrameCount`.
  `func_00213E90` (object displace, instance+0xBA) scales `$a1`.
  `func_0021B59C` (material UV, instance +0xD4 bit `0x00800000`) scales `$t0`.
  Weapon-select bars are COverlay (already scaled).
- Cinema divisor 2026-09-04: visual hooks used `increment/0.5` (30/s).
  Authored cinema is 15 Updates/s, so cinema water/energy stayed 2×.
  `visual_step_scale` now uses `increment/1.0` while Cinema_PathPlaying.
  Gameplay stays `/0.5`. `func_0021B59C` is CAI-only; type-0 cinema
  meshes use the wave path (`func_00214844`), not that UV helper.
- UV hunt 2026-09-04: no leftover `UV += const` / `texframe += 1` left
  in grid draw or material apply. Do **not** hook `entry_00240800`
  (geometry), `func_00215AE0` (keyframe lerp), `func_002156FC`
  (already × increment), `func_002671B4` (type getter), or
  `G_SETTILESIZE` emitters. `CGameSection.m_MultU/V` are static.
  If Adia water still races it is the hooked color/displace wave or
  an increment-scaled scroll, not a new leftover clock.

### gFrameCount leftover KILL-LIST 2026-09-04
User: black screen after leftover-scaling stored `gFrameCount` /
0x6D20 in `func_00286B58`. Live log had **no** `[fps:engine]` —
Update never ran. FB modulo uses the raw +1, then 0x6D1C xors
every Draw; rewinding the store reused one CFrameData slot and
starved OS_SC_DONE. Hooks at `0x00286D74` / `0x00286D8C` are
no-ops. Do **not** leftover-scale `gFrameCount` or 0x6D20 again.
Do not hook `func_00288318`. Consumer index scales restored.

### RDRAM clock sweep + authored A/B 2026-09-04
New tool instead of more guessing. `TUROK2_FIND_TIMERS=1` sweeps the
8 MB of RDRAM once per Draw (from the no-op hook in `func_00286B58`)
and reports every word whose step is constant for 12+ Draws. It
detects integer clocks and float clocks separately — a float `+= k`
has a *bit* delta that halves at each binade, so the decoded float
step is what must be compared. `TUROK2_TIMER_DUMP=1` hex-dumps heap
objects around a hit. Diagnostic only, off by default.

Run it twice and join on address: once with `TUROK2_AUTHORED_CADENCE=1`
(30 Draw/s) and once at unique 60, then compare **units per second**.
Equal rate = already real-time. Ratio 2.0 = the bug.

Result (120 s attract demo each, 110 shared clocks): **96 run at
exactly 2x**. This is systemic, not a handful of sites — nearly every
integer clock in the engine ticks once per Draw, and unique 60 draws
twice as often as authored.

Ruled out by the sweep:
- No word counts down by 1 per Draw anywhere during boot, so the
  Expansion Pak wait is **not** an integer `-= 1` countdown.
- `D_8011AD40` (attract timeout, `func_0028917C`) subtracts
  `gFrameIncrement` and is real-time correct.
- The huge `0x8015C638`-`0x8015DA60` block (stride 0x28, ~90 hits)
  is the resource-cache LRU: `{void* data; u32 size; ...; u32
  lastUsedFrame; prev; next}`. The counter is a timestamp. Harmless.
- `0x800CFA08` / `0x800CFA60` / `0x800CFB38` / `0x800D845C` /
  `0x800D8DF0` sit inside thread stacks (tops 800CFC80, 800D81B0,
  800D8D68). Stack locals, not clocks. Do not hook.
- CParticle pool base is `D_800F8928`, sizeof 0x1D8; the +0x120
  (`m_cFramePos`) step of 0.5/Draw is `m_Framerate * increment` and
  holds the same units per second in both runs. Correct, do not touch.

Proven 2x and still unexplained (static, worth code hunting):
`0x800E6890`, `0x800F5A14`/`0x800F5A20`, `0x80116D94` stride 0x54
(5 entries), `0x80119C44`/`0x80119C50`, `0x8011AC94` (hardcoded
float `+= 0.05`/Draw), `0x806FF474`/`0x806FF480` (camera 0x806FF120
at +0x354/+0x360), `0x80754CA8`.

### 0x800B6D20 leftover 2026-09-04 (SHIPPED, user-confirmed)
Governor verdict: it slowed the whole game and did **not** fix the
totem laser, the water or the Pak screen. That is the key result —
those three keep no per-Draw word in RDRAM, so no RAM sweep can ever
see them. They read a frame counter directly at draw time.

Enumerating readers in `RecompiledFuncs/` settles which counter:
- `0x6D18` gFrameCount: only 14 readers, all in `0x002xxxxx`.
- `0x6D1C`: ~100 readers, the odd/even framebuffer select. Never touch.
- `0x6D20`: ~40 readers spanning gameplay (`0x0025xxxx`, `0x0027Cxxxx`)
  **and** the frontend overlays (`0x0041xxxx`, `0x0042xxxx`,
  `0x0046xxxx`) where the Pak screen lives. Proven 2x by the A/B.

`turok2_patch_scale_frame_aux` (`func_00286B58` @ `0x00286D8C`) now
holds `0x6D20` to 30/s gameplay, 15/s cinema via wall-clock leftover.
`$v0` there is the incremented value; the framebuffer xor at `0x6D1C`
comes from a *different* register two instructions later, which is
why this is safe when rewinding gFrameCount was not.
`turok2_patch_scale_frame_count` stays a no-op. Boots clean, 60
Updates/s.

**CONFIRMED by the user: water and the totem laser are correct.**
This is the fix the per-site UV/swoosh/wave hooks were all reaching
for. `0x6D20` was the shared clock the whole time. Keep this hook.
Nothing became too slow. The Pak splash was **not** fixed by it.

### Frontend screen hold — Expansion Pak, found 2026-09-05
Traced by symbol, not by sweeping: the string `D_800A87DC`
("EXPANSION PAK FOUND!") sits in the table `D_800B36F4`, used only by
the draw routine `func_00285CE8`. Its state machine is
`func_00288C80`, which dispatches through `D_800B6D7C[state * 12]`
and then does, once per call:

    if (state != 0x11 && D_8011B110 != 0) { D_8011B110 -= 1; ... }
    D_800B6D24 += 1;

`D_8011B110` is the "hold this screen for N frames" counter, authored
at 30 Hz. New hook `turok2_patch_scale_frontend_hold` on
`func_00288C80` @ `0x00288D0C` gives the step back on Draws the
authored clock has not reached. Boots clean, 60 Updates/s.

Why the RAM sweep missed it: the decrement is conditional and the
hold is short, so it never produced the 12 consecutive constant-step
Draws the detector requires. A sweep finds long clocks; short gated
countdowns still need the symbol trail.

### Expansion Pak splash skipped 2026-09-05 (default on)
User: a PC port has no reason to show it. State 3 ends when the
screen's elapsed time at `+0x23FD0` passes `4.0 * D_800A9DE4`
(`func_00288D80`). `turok2_patch_skip_pak_screen` on `func_00289494`
@ `0x00289494` pushes that accumulator just past the threshold, so
the game runs its own transition instead of the state machine being
edited. `TUROK2_SHOW_PAK_SCREEN=1` restores the splash.

### Unique 120 verified 2026-09-05
`TUROK2_UNIQUE_120=1`: `updates=120/s ticks=1 increment=0.1250
mode=unique120`, `[rt64:source-rate] source=120Hz present=120Hz
display=120 interp=off`. Both new leftover hooks (`0x6D20` and the
frontend hold) key off the wall clock at 30/s, not off a Draw count,
so they hold the authored rate at 60 and at 120 without changes.

### Clock governor 2026-09-04 (opt-in, slows everything — do not ship)
`TUROK2_CLOCK_GOVERNOR=1`. Same per-Draw sweep as the timer finder.
Once a word has stepped by a constant for 12 Draws it is treated as a
per-Draw clock and rewound to its previous value on skipped Draws, so
it advances at 30/s gameplay / 15/s cinema while Draw stays 60. This
is the leftover idea applied per clock instead of to gFrameCount.

Never governed:
- `0x800B6C00`-`0x800B6E00` (gFrameCount, 0x6D20, the FB xor,
  gFrameIncrement) — rewinding these is what froze boot.
- Thread stacks `0x800C7000`-`0x800DA000`, `0x80120000`-`0x80123000`.
- Scheduler `0x8011AD00`-`0x8011AD60`.
- Any word equal to gFrameCount: that is a cache LRU timestamp.
- Floats whose step is a small multiple of gFrameIncrement: already
  real-time, holding them would make them half speed.

Live audit: `[gov] clocks=N rewindsPerDraw=R`. First run reached 46
governed clocks, booted clean, held 60 Updates/s, no crash. Still
needs the user's eye test on water / totem laser / menus / Pak.

### Frontend wait leftover — Expansion Pak 2026-09-04 (SUPERSEDED)
Superseded by the `0x6D20` leftover and the `func_00288C80` frontend
hold above. The `0x800F56B0` delayed-callback hooks were never the
Pak screen. Kept for the addresses it rules out.
User: water / lasers / Expansion Pak still 2× after the visual hooks.
Live unique 60 stays `updates≈60/s increment=0.2500`, so increment
clocks are real-time. Pak vanishing in half the time is the leftover
class (authored N/30 s).
- `0x78` at `func_00403C14` / `func_0043CC14` is flags at 0x8012F9CC,
  not the countdown. Do not hook `osGetMemSize`.
- COverlay mode 3 is already hooked. Boot logos / Expansion Pak /
  legal use the delayed-callback list at 0x800F56B0. When
  manager+0xC is 0 they inline `m_Time -= 1` and only jalr at 0.
- Same wait hook (`$a0` = object) on resident `func_0027BC68`
  @ `0x0027BCDC` plus overlay clones `func_0042F344` /
  `func_0042F838` / `func_0042F958` and `func_00468264` /
  `func_00468758` / `func_00468878`.
- Those hooks did **not** fix the user-visible 2× (see wall-clock
  leftover + even-gate wave above). Do not retune that family next.

### Native 60, no RT64 interp 2026-09-04
- Live instance already reported `updates=60/s ticks=1 increment=0.2500`
  `mode=unique60` and `interpolation=0 display_frames=1`. The interpolated
  look came from send_dl still asking for present=120 and marking FBs
  interpolable (`[rt64:present] interpolation=1`). Fullscreen 120 Hz would
  have turned matching back on.
- Do not close a running `Turok2Recompiled` to pick this up; rebuild only.
- Do not speed cinema: increment stays 0.25.

### Unique 120 experiment 2026-09-04
- Opt-in only: `TUROK2_UNIQUE_120=1`. Default remains unique 60.
- Host VI clock 120; AI message every other tick so mixer stays 60 Hz.
- `gRefreshRate` stays 60; increment forced to `0.125`.
- Integer leftover hooks use `+= 0.125`, consume at `0.5` (still 30/s).
- `send_dl` source/present 120 with `targetRate` still forced to 0.
- Visual leftovers (menu COverlay, swoosh UV, vertex-color wave) now scale
  by `increment/0.5` after a `regen-recompiled-funcs.sh`. Integer leftovers
  still consume at 0.5. If river UV is still 2×, hunt grid/texture-frame
  next — do not hook sky or `func_0021CDAC`.
- Do not leave this as the default after the test.

### Cinema 60/120 rework 2026-09-04
- Authored cinema is 15 Updates/s, but keys are not integer frames.
  `func_00284568` does `currentTime += gFrameIncrement * (1/15)` (rodata
  `0.0666…` at `0x800A9CDC`). Path begin/end are float seconds.
- Unique 60 Hz DLs with increment `0.25` keep one cinema second per real second.
  120 unique DLs/s would require a 120 Hz VI and would double audio.
- `TUROK2_AUTHORED_CADENCE=1` restores 30/15 Hz + interpolation for A/B.

### 60 Hz interpolation validation 2026-09-03 (superseded)
- Advertising source 60 while still updating at 30 disabled interpolation and
  looked like 30 fps. That was the 15/30 authored+interp experiment. Unique 60
  with increment 0.25 is the live path.

## Adon cinema flat-frame flicker — OPEN, 5 hypotheses ruled out

Symptom: isolated single frames during the Adon cinema show the viewport as a
flat colour with the cinema letterbox still drawn. User has fought this for a
while; it predates the 2026-09-04 cadence work.

Measured from two screen captures (`ffmpeg signalstats` YAVG per frame):
- 17 flat frames in 13.4s at unique 120, 19 in the second capture at unique 60.
- Every flat frame has an identical YAVG (18.85/18.86 across both captures), so
  it is always the same image.
- Viewport is uniform **RGB(0, 0, 27)** over 261k pixels; letterbox bars are
  pure black. 71 distinct colours total, all of it cursor and edges.
- Spacing is irregular (4, 13, 25, 8, 2, 36, 12, 26, 2, 2, 9 frames), so it is
  event-driven, not periodic. Consistent with camera cuts.

Rate behaviour: same *count* of frames at 60 and 120, so each one is half as
long at 120 but there are just as many. Fewer at `TUROK2_AUTHORED_CADENCE=1`,
but not zero — and that mode also enables interpolation, which could be masking
them, so "fewer" is not clean evidence that cadence is the cause.

Ruled out, each by measurement rather than by trying a fix and eyeballing:
1. *Stale fill-only CFB chosen for present.* `colorSet`/`colorVector` are
   rebuilt per workload, so a cut whose fill landed in an earlier workload was
   invisible to `holdIncompleteColor`. Persisting the state per address did fire
   (408 holds) but only during boot; 0 during the cinema.
2. *Letterbox defeating `isFullScreenFill()`.* True as written — that predicate
   requires `gameCallCount == 1` and the cut draws clear plus two bars — but
   switching the predicate to `fillRectOnly` still gave 0 hits in the cinema.
3. *Raw RDRAM upload path* (`presentFb == nullptr`). Instrumented: **0**
   occurrences in an entire run. That path is never taken.
4. *No scene projection in the presented buffer.* `hasSceneProjection()` is the
   right question and is wider than `fillRectOnly`, but during the cinema only
   38 of 4290 presents had `noScene=1`, and 37 of those are one contiguous block
   (a transition), not 19 scattered frames.
5. *Widescreen cull expansion producing a degenerate frustum at cuts.*
   `TUROK2_WIDE_CULL_SCALE=1.0` (effective 1.100 after the FOV factor, down from
   2.200) changed nothing. Note the residual 10%: a harder test is still
   possible if this becomes the last suspect standing.

Caveat on the above, worth taking seriously before trusting 1–4: the trace reads
the per-address sets from the present thread, while the buffer being presented
is by definition one the current workload did not draw into (`inSet=0` on every
present, including normal ones). Tracking is keyed by address so it *should*
describe the right image, but there is a window where a newer workload updates
an address before the present reads it. Treat the cinema negatives as strong but
not airtight.

Narrowed further by the user: it only happens right before Adon presents the
Primagen, not at every camera cut. In the pair trace that moment shows the
cinema camera pointer change from `801198F0` to `806FF120`, and a block of ~45
consecutive workloads submitting `calls=65 scene=0` (a full-screen 2D sequence)
instead of the usual `calls=43 scene=1`.

### Measurement bug found and fixed — invalidated hypotheses 1 and 4

The present trace read the per-address state at present time. With three
rotating CFBs and one workload per frame, a buffer is rewritten every third
workload, which is exactly when VI scans it out, so the flag described the
render *in flight* rather than the image on screen. Visible in the log as a
consistent 3-present lag: pairs turn `scene=0` at n=1167 but the trace only
reports `noScene=1` at n=1170.

`fillOnlyColorAddressesPrev` / `noSceneColorAddressesPrev` retire the state each
address had before being rewritten, and the trace now prints `shownFill` /
`shownNoScene` (the image on screen) beside `liveFill` / `liveNoScene` (the
render in flight). Hypotheses 1 and 4 were then retested properly: still 0
occurrences during the cinema.

### Present path exonerated end to end

With the corrected instrument, every stage says the frame is healthy:
- Correct buffer selected; rotation across the three CFBs is regular.
- `shownNoScene` / `shownFill` are 0 for the whole cinema, so the buffer being
  displayed had 3D geometry rendered into it.
- 4910 presents: render target **never empty**, width 480, siz 2 and resolution
  scale 3.71 constant throughout. No resize, no format change.
- 4567 cinema pairs: `drawColorRect` is exactly 479x359 every time. Never empty,
  never collapsed, so geometry rasterized full screen.
- RDRAM upload path taken 0 times. Interpolation off on every present.
- The HD texture mod is the empty example (three json files, no textures), so
  nothing is streaming in late.

So RT64 selects a valid, populated target containing rasterized geometry, and a
flat clear reaches the screen anyway. Every CPU-side check passing is itself the
signal: the disagreement is not in the bookkeeping.

### The one causal link that held: it tracks a frame-counted clock

`TUROK2_NO_6D20_LEFTOVER=1` disables the 0x800B6D20 leftover hold. Measured off
captures, flat frames per decoded frame:

| run | density |
| --- | --- |
| unique 60, leftover on | 0.008 |
| unique 120, leftover on | 0.022 |
| unique 120, leftover off | 0.035 |

Same flat image every time (YAVG 18.8), only more frequent. So 0x6D20 is a
*modulator*, not the cause: holding that clock to the authored rate thins the
flicker out, letting it run at display rate packs it in. Whatever produces the
flat frame is indexed by a frame counter, which is the same class of bug as the
water and totem laser fixed on 2026-09-04.

This also reframes the artifact. It is very likely not a broken frame at all.
Every RT64 stage reports a healthy frame because the frame *is* healthy; the
game draws something that covers it. That is why six presentation-side
hypotheses all measured clean.

Also ruled out after that reframing:
6. *Fog wrap.* `turok2_patch_fog_position` only clamped `min < 900`, so an
   authored 997-999 would overflow `fm = 128000 / (1000 - min)` as int16 and,
   per the comment already in that patch, wash the framebuffer to fog colour.
   Instrumented: the game never authors above 996 (0 hits, min pinned at 995
   across 49 cinema samples). The ceiling added for this was reverted.
7. *Cinema cadence.* `TUROK2_CINEMA_AUTHORED=1` (gameplay unique 60, cinema on
   engine ticks) puts cinema at 15 Hz and the flicker stays, while full
   `TUROK2_AUTHORED_CADENCE` puts cinema at 30 Hz and it nearly goes. Slower
   being worse than faster rules cadence out; what differs between those two
   modes is which patches are live, not the tick rate.
8. *Full-screen overlay quad.* Counted rectangle draws covering the colour image
   (`fullRects` in the pair trace). Baseline is 1, values move in blocks of 1-4,
   and there is not a single isolated spike in 6107 cinema pairs.

Where to resume, in order of promise:
0. **`gFrameCount` (0x800B6D18) as the driver.** 0x6D20 only modulates, and
   gFrameCount is the other per-Draw counter, deliberately left untouched
   because leftover-scaling it at the source black-screened the boot (it feeds
   the 0x6D1C framebuffer selector). The move is not to scale it globally but to
   find the specific read site behind this effect and scale only there. The
   readers were already catalogued by grepping `RecompiledFuncs/` for
   `lw ... 0x6D18`.
1. **Thread interlock.** The present locks `workloadMutex` (rt64_present_queue
   ~386, released ~635 after `presentGraphicsWorker->wait()`), while the
   workload render path guards itself with `workerMutex` and does
   `workloadGraphicsWorker->execute()` then `wait()` (rt64_workload_queue ~884).
   Two different mutexes. The workload does wait for its own GPU work, so the
   naive race is not it, but whether these two interlock at all is unverified
   and is the last unexamined mechanism.
2. **RGB(0, 0, 27).** A specific arbitrary value. Finding where the game sets
   that clear colour ties the frame to game code with no RT64 inference at all.
3. The `806FF120` cinema camera and the 65-call 2D block, which is the exact
   moment the user identified.

Shipped from this investigation: nothing behavioural. The two candidate holds
were reverted once unproven; only `TUROK2_PRESENT_TRACE` and the bookkeeping it
reads were kept.

## Attract-mode demos cut short at high FPS — OPEN, reported 2026-09-05

The recorded gameplay demos that auto-play after idling at the main menu "não
rodam inteiras" at raised frame rates, and get worse the higher the rate.

Working diagnosis, not yet measured: a demo is a recorded input stream, one
sample per authored 30 Hz tick. If playback consumes one sample per Update
while the world advances by `gFrameIncrement` in real time, then at unique 60
the stream drains twice as fast as the world moves and at 120 four times. The
demo does not play *fast*, it **desyncs** — the recorded stick and button
values land on a world state they were never recorded against, so Turok walks
into geometry and the stream ends early. Same class as the water and totem
laser, whose fix shape applies directly: hold one recorded sample across the
intermediate updates via the leftover-clock pattern already used for 0x6D20.

Decisive measurement before writing any patch: time one full demo at unique 60
and one at unique 120. Duration halving means tick-consumption and confirms the
above. Equal wall-clock duration means the stream is already time-gated and the
bug is elsewhere.

Search warning for whoever picks this up. `0x800F6750` is **not** the demo
input-mode flag. It is written from ~30 sites and sits amid `osRecvMesg`, the
message queues at `0x800F6758`/`0x800F6798` and `func_00299198`, which makes it
SI / Controller Pak state. Likewise `func_002851C0`'s `+0xD0`/`+0xD4` pair is
not a demo clock: `+0xD0` is the sum of two `func_0026E760` results, i.e. a
motion magnitude, so that accumulator is an animation or footstep stepper.
`func_00200574` is a plain linked-list insert (prev/next at `+0x4`/`+0x8`/`+0xC`,
count at `+0x10`), not a stream index. All three were false leads.

Genuinely confirmed, and the one solid foothold: `func_0028917C`
(`RecompiledFuncs/funcs_43.c:4083`) is the menu idle countdown, subtracting
`gFrameIncrement` from `D_8011AD40` behind the `D_800B6D64` attract gate. It is
real-time correct already, so demo *start* timing is not the bug — only what
happens during playback.

## Capture 2026-09-02 Adon→Primagen
Recording: `captures/2026-09-02-adon-primagen/screen.mp4` (~239s).
Cinema stays `ticks=1 increment=0.2500`. Flicker was 1–3 frame garbage/black
presents on cinema camera cuts. SkipBuffering now holds the last swapchain
image when the VI target was only G_CYC_FILL this workload.

## Audio
T2 `alRaxOpen` = `func_002A1170`, `alRaxDecomp` = `func_002A122C`,
`ReadCmpFrame` = `func_002A0448`, `DecompressFrame` = `func_002A0B6C`.
Singleton state at `0x80125C38`, PCM ring `0x80125EF0`. Host hooks log open/decomp/PCM peak.
`entry_00294D60` (n_alAuxBusPull) must jalr the real voice pull (`0x00295690` / `0x00296750` / `0x0029F190`, …); skipping that call zeros the mix.
`func_002768D0` logs `[rax] player state=` each tick. SDL queue logs peak even without `TUROK2_AUDIO_DIAGNOSTICS`.

Boot mute: `func_0028E60C` type 3 (`func_0028EC54`) only reserves useg
`0x004B0000` (ROM `0xBE1814`, size `0x3EA7A0`) and replies with `page<<12`.
It does not DMA. The VM pager never runs in recomp, so the CISet stays
empty and `n_alSeqpPlay` never fires. `turok2_patch_page_useg` copies the
ROM blob into that window. `RECOMP_USEG_BANKS_END` is `0x00900000` so the
window lives at `0x00BB0000` instead of aliasing heap `0x804B0000`.
`guest_ptr_ok` used to reject `0x004B0000`, which made `bank0=0` a false
diagnostic. Do not invent a PCM decoder or force PVoice `+0x48=1`.
Slow/bad audio after the bank copy: RSP DMA forced KSEG0 on useg physicals,
so ADPCM/RESAMPLE loaded heap at `0x804Bxxxx` instead of the relocated bank.
`turok2_patch_v2p` on `func_0029BF80` returns `0x00Bxxxxx`; RSP DMA maps that
window back to the useg VA. Do not remap KSEG0 heap `0x807xxxxx`.

## Crash (Port of Adia cart) / mute audio
Never skip jalr/callbacks. As of 2026-09-03, jalr hooks are observation-only:
they capture the exact target/guest context and report missing registrations,
but never redirect to a nearby function, restore a target, alter guest tables,
or repair callee-saved registers. Fix each missing target separately with proven
`manual_funcs` metadata or a dedicated subsystem patch. Previously established
failure classes remain useful evidence:
- Resource table `D_800AD080` (ROM slot 6 = `func_00238824`) if RDRAM was smashed
- Flags are restored too: type 1 is `flags=0`. Bit 0x2 walks `0xBF8`/`0xDF8` as
  child objects; smashed flags made type 1 treat floats as pointers and jalr
  `0x02400440` from `func_00236EA0` after_3 (0xBF8 walk).
- n_al filter pull from param handler at `+8` / type at `+0x10`
- Prologue skew of 4–16 bytes
`turok2_patch_restore_resource_table` rewrites all 16 ROM slots before the
flags load in `func_00236EA0` / `func_0022C488` and each Update.
Skipping `entry_00294D60`'s voice `jalr` left `Acmd*` = garbage (`0x5258303C`),
which silenced mix and later SIGBUS in `do_send`. Particle inner pointers are
relocated (`0x00B`/`ROM` → `0x004`), never skipped.
VI thread null-mode race remains locked with `message_mutex`.

## Boundaries (not title-screen)
`entry_*` in `turok2.us.toml` are added one at a time because a bulk dump of
misplaced entries broke boot. Remaining ones (texture loader, audio thread
`entry_0028A020`) are for later crash-free play, not the title hang.

### Cheat-menu crash 2026-09-03
- Reproduced under LLDB: librecomp aborted with `Failed to find function at
  0x0041A4D0`; native call path included `func_00414EA8`, `func_00416894`,
  `func_004198B0`, `func_0027D160`, and `func_0027ECF0`.
- Raw ROM/ELF proof: `0x0041A4CC` is `jr $ra`; its delay slot at `0x0041A4D0`
  is `addu $v1,$zero,$zero`, followed by the callable body at `0x0041A4D4`.
  That body scans 11 table entries/bits and ends at `0x0041A5C4`.
- Fix: `entry_0041A4D0` in `turok2.us.toml`, section `.virtual`, size `0xF4`.
  N64Recomp now emits and registers the overlapping body at overlay offset
  `0x1A4D0`, reproducing the N64's valid jump-into-delay-slot/fallthrough.
- Regeneration and `cmake --build build-app --target Turok2Recompiled -j 8`
  completed. The rebuilt game remained running through the previously failing
  navigation window without another missing-function report during monitoring.

### Adon-to-gameplay SIGBUS 2026-09-03
- Reproduced with the user's exact signature: last observed audio callback
  `0x0023876C`, followed by `SIGBUS` while `osSendMesg` drained an external
  message in `do_send`.
- The callback target itself was registered and exact. ABI observation proved
  its call tree returned with `$sp` lower by `0xA8` and corrupted `s0/s1/s5`.
- Root cause: `func_0021E374` reserves a `0xA8` frame, but an ELF split ends its
  generated C body after `c.lt.s` at `0x0021E4F8`. It did not fall through the
  `nop` at `0x0021E4FC` and `bc1f` at `0x0021E500` to the real epilogue at
  `0x0021E5A0`. The queue crash was a downstream symptom of the bad stack.
- Fix: `tools/patch-split-fp-branch.py` reconnects that exact fallthrough and
  reconstructs the lost FP condition at the split entry. The regeneration
  script runs it after the generic split merge. No jalr target is redirected
  and no register is restored by the jalr diagnostic hook.
- Validation: before the fix, the automated Adon/new-game route crashed after
  roughly 116k logged queue events with the `-0xA8` ABI report. After the fix,
  the same run passed 134k events with no crash and no ABI report.

## US Rev.01 cross-version evidence (2026-09-03)
- Comparison ROM: `../../turok2.us1(with-crash-screen-enabled).z64`, SHA-1
  `f005a571471602ceaa8f15b45e834d0d5ba19261`, header version 1. The current
  base is header version 0. Do not replace the configured base ROM with it.
- `tools/match-revision-functions.py` uses the US 1.0 ELF boundaries, strict
  and immediate-relaxed MIPS anchors, whole-function scoring, and forward and
  reverse ambiguity checks. It writes `analysis/rev01_function_matches.csv`,
  `.summary.json`, and `.md`; output is evidence only.
- Current conservative result over 3,800 executable ELF functions: 18 known,
  9 likely, 78 tentative, 70 weak, 3,625 unmatched. Exact short helpers are
  deliberately capped below known confidence because they collide easily.
- Confirmed relocation deltas are non-linear (`-0x240`, `-0x18C10`,
  `-0x1A9A0`, `-0x1AAD0`, `-0x1B6F0`, etc.). Never apply one global delta.
- Rev.01 crash strings occupy ROM `0x8BB88`–`0x8BC4C`. The equivalent US 1.0
  string block is at `0xAACF4`–`0xAADC0` (duplicate at `0xE3CF4`). US 1.0
  xrefs associate `Call stack` with `func_0028BDFC` and fault/assert text with
  `func_0028C0B0`; both remain unmatched in Rev.01 and need call-graph/xref
  validation before assigning new boundaries.

## Learned Patterns

- Measure a visual glitch off the capture before touching code. Per-frame YAVG
  gives the count, the exact frames, and whether every occurrence is the same
  image. An identical brightness every time means one specific image, which is a
  much narrower thing to hunt than "it flickers".
- Ask whether a glitch is a fixed number of *frames* or of *seconds*. Same count
  at 60 and 120 says it is tied to frames rendered, not to elapsed time, and
  that alone kills whole families of explanations.
- A "hold the previous image" heuristic needs its mark and unmark on the same
  predicate. Marking with `isFullScreenFill()` and unmarking with
  `isPresentableScene()` left 2D frontend pairs marked forever, because the
  latter also requires an early-present candidate.
- Any hold needs a consecutive cap. Without one, a legitimately held clear
  (fade, load screen) freezes the image indefinitely.
- Prefer a diagnostic that can disprove the hypothesis before a fix that assumes
  it. Three of five hypotheses here died on instrumentation without the user
  ever having to test a build.
- RT64's per-workload containers (`colorImageAddressSet`, `colorImageAddressVector`)
  describe only the workload being processed. Anything reasoning about the image
  actually on screen needs state keyed per colour address instead.
- Check the instrument's alignment before trusting a negative. Three rotating
  CFBs with one workload per frame means a buffer is rewritten exactly when it
  is being scanned out, so present-time reads of per-address state describe the
  render in flight. Two hypotheses were wrongly declared dead this way.
- When every stage of a pipeline measures healthy but the output is wrong, stop
  looking for a broken stage. The output is probably correct for what was asked,
  and the question is what asked for it.
- A knob that changes a symptom's *rate* without removing it has found the
  clock, not the cause. Turning the 0x6D20 hold off made the Adon flicker 1.6x
  denser, which proved a frame counter drives it after six presentation-side
  hypotheses had measured clean.
- Prefer a switch that isolates one patch over a mode that disables a whole
  family. `TUROK2_AUTHORED_CADENCE` turns off every cadence patch at once, so
  "it improves under authored cadence" pointed at the tick rate when the real
  variable was one of the patches it silenced.
- A newer retail revision may retain isolated byte-identical functions while
  reorganizing most code and data. Exact islands are useful anchors, but they
  do not establish a section-wide address transform.
- Candidate uniqueness must be checked in both directions. A revision address
  claimed by several base functions is template/duplicate evidence and cannot
  be promoted to known or likely confidence automatically.
- Crash strings establish subsystem presence, not function boundaries. Promote
  a mapping only after prologue/epilogue, caller/callee, and data-xref checks.
- A function pointer may intentionally target a preceding function's delay
  slot and fall through into the next body. Register an overlapping N64Recomp
  entry that begins at the exact pointer and includes the full reachable body;
  redirecting only selected jalr sites leaves other callers crashing.
- Nearest-function lookup is safe only as a diagnostic label. Runtime jalr
  dispatch must use the exact registered address; no automatic `target-N`
  fallback or register/table mutation belongs in the jalr observation hook.
- A 60 Hz window is not proof of 60 Hz motion. Record engine updates, RT64's
  advertised source rate, interpolation eligibility, and rendered frame count
  separately. Unique 60 Hz DLs need source=60 and `targetRate=0`. Asking RT64
  for present=120 marks FBs interpolable and brings back the 30/15 look.
- When many effects run at the same wrong speed, look for one shared clock
  before patching sites. Water, the totem laser and the weapon-select bars
  were five rounds of per-site UV/swoosh/wave hooks that each fixed a sliver
  and never the symptom; all three read `0x800B6D20`, and one leftover on the
  incrementer fixed them together.
- Raising the Draw rate breaks every clock counted in frames, not just the
  visible ones. Decide per counter whether it is a *clock* (hold it) or a
  *timestamp / buffer index* (never hold it). Rewinding `gFrameCount` froze
  boot on a black VI because `0x6D1C` and the framebuffer pick depend on it;
  `0x6D20` next door drives no framebuffer state and was safe.
- Leftover hooks should key off the wall clock, not off a Draw count. Written
  that way the same hook holds the authored rate at 60 and at 120 with no
  changes.
- A memory sweep only finds clocks that are *stored* for many frames running.
  Values computed from a frame counter at draw time, and short conditional
  countdowns, are invisible to it and need the symbol trail instead.

## Tools
### Present diagnostics (RT64, off by default)

`TUROK2_PRESENT_TRACE=1` numbers every present and prints what was shown:

    [trace] n=1234 vi=006A8840 fb=006A8C00 fillOnly=0 noScene=0 inSet=0 presentable=0 colors=1 interp=0

`fillOnly` and `noScene` describe the last workload to touch that colour
address: every call was a `G_CYC_FILL` rectangle, and no Perspective/Triangle
projection at all, respectively. Neither gates presentation.

The technique that made this useful: a visual glitch's *spacing* in a capture is
a signature. Get flat-frame indices with `ffmpeg signalstats` YAVG per frame,
turn them into gaps, then look for the trace attribute that changes on the same
irregular spacing. Self-aligning, so no clock sync between video and log.

Note `vi` sits 0x3C0 below `fb` (one 480-pixel 16bpp scanline) and `inSet=0` on
every present including healthy ones, since triple buffering presents a buffer
the current workload did not draw into.

### Cadence diagnostics (host, all off by default, zero cost when unset)
All three live in `src/patches/native_60.cpp`, driven from the Draw
hook on `func_00286B58`.

| Env | What it does |
|-----|--------------|
| `TUROK2_FIND_TIMERS=1` | Sweeps 8 MB of RDRAM once per Draw and reports any word with a constant step for 12+ Draws. Integer and float clocks are detected separately — a float `+= k` has a *bit* delta that halves at every binade, so the decoded float step is what must be compared. |
| `TUROK2_TIMER_DUMP=1` | With the above, hex-dumps the block around heap hits so pointers identify the object. |
| `TUROK2_BOOT_TIMELINE=1` | Logs the first change of every global in `0x800B0000`-`0x80140000` during the first 2500 Draws, with both the Draw number and the wall clock. |
| `TUROK2_CLOCK_GOVERNOR=1` | Holds every detected per-Draw clock to the authored rate. Slows the whole game — diagnostic only, never ship. |

**The A/B that actually answers "is this 2x?":** run a scan twice,
once with `TUROK2_AUTHORED_CADENCE=1` (30 Draw/s) and once at unique
60, then join on address and compare **units per second**. Equal rate
means already real-time; ratio 2.0 is the bug. Same idea for
`TUROK2_BOOT_TIMELINE`: a state word that flips on the *same Draw*
but at half the wall time is counted in frames.

Limit worth remembering: the sweep only sees clocks **stored** in
RDRAM for 12+ consecutive Draws. It cannot see a value computed from
a frame counter at draw time, and it misses short conditional
countdowns. Both of tonight's real fixes (`0x6D20`, the frontend
hold) were found by enumerating readers and symbols, not by sweeping.

- Skill: `~/.agents/skills/n64-decomp`
- Ghidra 12.1.3: `/opt/homebrew/opt/ghidra/libexec` (openjdk@21)
- GhidraMCP 7.0.0 plugin: `~/Library/ghidra/ghidra_12.1.3_PUBLIC/Extensions/GhidraMCP`
- N64LoaderWV: same Extensions dir; ZIP also at `tools/N64LoaderWV/dist/`
- MCP bridge: workspace `.cursor/mcp.json` → `uv run --directory tools/ghidra-mcp bridge-mcp-ghidra`
- Signature hints: `projects/turok2-decomp/tools/turok2.n64sym`
- MCP HTTP is down until Ghidra GUI has a program open and Tools > GhidraMCP > Start MCP Server
