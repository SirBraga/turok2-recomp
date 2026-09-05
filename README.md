# Turok 2: Recompiled

[Português](README.pt-BR.md)

[![status](https://img.shields.io/badge/status-early%20public%20testing-orange)](https://github.com/SirBraga/turok2-recomp)
[![cadence](https://img.shields.io/badge/cadence-120%20FPS%20%2F%20120%20Hz-brightgreen)](https://github.com/SirBraga/turok2-recomp)
[![platform](https://img.shields.io/badge/windows-x64%20build-0078D6)](https://github.com/SirBraga/turok2-recomp/actions)
[![engine](https://img.shields.io/badge/renderer-RT64-lightgrey)](https://github.com/rt64/rt64)
[![pipeline](https://img.shields.io/badge/pipeline-N64Recomp-blue)](https://github.com/Mr-Wiseguy/N64Recomp)

A native PC port of **Turok 2: Seeds of Evil** (Nintendo 64, USA 1.0), built with [N64Recomp](https://github.com/Mr-Wiseguy/N64Recomp), [N64ModernRuntime](https://github.com/Mr-Wiseguy/N64ModernRuntime), [RT64](https://github.com/rt64/rt64), and [RecompFrontend](https://github.com/N64Recomp/RecompFrontend).

This is **not** an emulator wrapper. The original MIPS code is translated to native C and linked against a modern runtime, with a real launcher, graphics options, keyboard / mouse / controller input, and a 120 FPS / 120 Hz presentation.

> **Early testing.** The game boots, plays, and presents at **120 unique frames per second** on a **120 Hz** host clock. That is the shipping cadence we are iterating on. It is still a first public test: crashes, visual leftovers, audio glitches, and input quirks can and will happen. We are playing it, finding the bugs, and fixing them. Please treat every build as experimental.

---

## A note from the author

I am a huge **Turok 2** fan. This is the N64 game I never really put down — the Hub, the Port of Adia, the energy totems, the War Blade, the way the soundtrack hits when you drop into a new world. I wanted it on PC the way the modern recomp ports do it: your own ROM, a native window, a real mouse, widescreen, and a frame rate the original hardware could not offer.

This repository is that attempt. I am building it because I love the game, not because it is finished. If something explodes, that is part of the process. File it, laugh at it, and we will chase it down.

— **Pedro Braga** ([@SirBraga](https://github.com/SirBraga))

---

## What you should expect right now

| Area | Today |
| --- | --- |
| **Status** | Early public testing. Playable, not polished. |
| **Frame rate** | **120 FPS** unique Update/Draw. Not 30→120 interpolation. |
| **Refresh** | **120 Hz** host VI / presentation. |
| **Launcher** | Native UI: load ROM, play, controls, options, mods. |
| **Windows** | CI produces a ready-to-run `Turok2Recompiled-windows-x64` zip. |
| **ROM** | You must supply your own USA 1.0 dump. Never shipped. |

The original N64 cadence was 30 Hz gameplay and 15 Hz cinematics. This port does **not** fake smoothness by blending those frames. The engine itself steps at 120 unique updates, cinema time is still measured in authored seconds, and leftover 15/30-style counters are scaled so they do not run at 4× / 8×. Interpolation in RT64 stays off on purpose.

If you need the old 30/15 scheduler for comparison, set `TUROK2_AUTHORED_CADENCE=1`. If you want a 60 Hz A/B, set `TUROK2_UNIQUE_60=1`. Default is **unique 120**.

---

## Bugs will happen

This is a living test bed. Known classes of trouble:

- Crashes on a specific level, save, or cinema
- Effects that still look too fast or too choppy (water, lasers, overlays, particles)
- Audio pops, missing banks, or a silent cutscene
- Mouse look / analog look feel that still needs a pass
- Launcher or in-game menu layout issues
- Windows-only runtime problems (missing VC++ redistributable, GPU / Vulkan / D3D12)

**Please report them.** A short note plus the level name, what you pressed, and whether it reproduces is enough. We are actively hunting these, not ignoring them.

---

## Where we are → where we want to go

```text
N64 cartridge
    → splat / ELF / N64Recomp
        → native Turok2Recompiled
            → playable 120 FPS test  ← you are here
                → stable 1.0
                    → HD / widescreen polish
                        → sister games (Turok 3, Armorines)
```

### 1. Bring-up — done

- [x] Verify the USA 1.0 ROM (`SHA1 fb0400f21e3f043939ab56500c7b12a3231006f1`)
- [x] Recover the memory map and ~13k functions
- [x] Confirm stock `F3DEX` + `aspMain` (no custom RSP microcode work)
- [x] Recompile to native C and link N64ModernRuntime + RT64
- [x] Solve TLB / PI paging enough to boot and stay in-game
- [x] Repair RAX / audio bank loading
- [x] Open a real window and draw the game

### 2. Playable test — current

- [x] Boot past the title screen into real levels
- [x] Unique **120 FPS / 120 Hz** presentation (default)
- [x] Scale integer leftovers so freeze, i-frames, lasers, water, and menus do not run at 4×
- [x] RecompFrontend launcher (Load ROM / Play, Controls, Options, Mods)
- [x] Keyboard, mouse, and controller, including mouse-look and analog look
- [x] Graphics tab: filtering, HUD/2D upscale, FOV, far / fog
- [x] Windows CI artifact + local `scripts/build-windows.ps1`
- [ ] Crash-free Hub → first worlds on a clean launch
- [ ] Audio that stays correct through cinemas and combat
- [ ] Input that feels finished, not “good enough for bring-up”

### 3. Stable 1.0

- [ ] Finish leftover 15/30 timing audits
- [ ] Reliable saves (in-game + host)
- [ ] Full controller profiles and a clean bindings screen
- [ ] Installer-style Windows folder and a macOS / Linux build people can just run
- [ ] Crash reporter / log that testers can attach

### 4. The port people actually want

- [ ] HD texture packs (F2 already dumps hashes for that work)
- [ ] Real widescreen and HUD that stay sharp
- [ ] Accessibility: FOV, look sensitivity, deadzone, optional 60 Hz mode
- [ ] Mod API that is not just a folder named `mods`

### 5. Same engine, next games

Turok 2, Turok 3, and **Armorines: Project S.W.A.R.M.** share the Acclaim Studios London engine. The long bet is that most of this runtime, TLB story, and renderer path transfers.

- [ ] Split game-specific hooks from shared engine support
- [ ] Turok 3 bring-up on the same stack
- [ ] Armorines investigation
- [ ] Stretch: Android via RT64 Vulkan

---

## How to play (Windows)

1. Grab the latest **Actions** artifact `Turok2Recompiled-windows-x64` from this repository, **or** build locally (below).
2. Install the [Visual C++ 2015–2022 x64 redistributable](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist) if Windows asks for runtime DLLs.
3. Run `Turok2Recompiled.exe`.
4. **Carregar ROM** / Load ROM and pick your **Turok 2 USA 1.0** dump.
5. The button becomes **Jogar** / Play. Esc or F10 opens the menu in-game.

`portable.txt` next to the exe keeps saves and settings in that folder. Delete it to use `%LOCALAPPDATA%\turok2-recompiled`.

### Required ROM

You must dump a cartridge you own. The ROM is **not** in this repo and never will be.

| Field | Value |
| --- | --- |
| Game | Turok 2: Seeds of Evil |
| Region | USA 1.0 |
| Internal name | `Turok 2: Seeds of Ev` |
| Cartridge ID | `NT2E` |
| Size | 32 MB |
| SHA1 | `fb0400f21e3f043939ab56500c7b12a3231006f1` |

---

## Controls (defaults)

| Action | Keyboard | Notes |
| --- | --- | --- |
| Move | WASD | Engine movement, not a fake N64 stick |
| Look | Mouse | Sensitivity lives in Options |
| Fire | Z binding / controller trigger | Remap in Controls |
| Jump / aim / crouch | See Controls tab | Defaults follow the N64 layout as closely as they can |
| Pause | Enter / Start | |
| Menu | Esc / F10 | Launcher-style config over the game |
| Skip cinema | Backspace / P / F8 | F8 is the debug skip |
| Quick save / load | 5 / 7 or F5 / F7 | Bring-up tool, not a final save system |
| Debug HUD | F3 | Off by default |
| Texture dump | F2 | Writes hashes under `runtime-data/texture-dumps/` |

A controller is fully supported. Bindings persist between sessions.

---

## Build it yourself

### Windows (recommended for testers)

Needs Visual Studio 2022+ with Desktop C++, and CMake. Ninja is optional.

```powershell
powershell -ExecutionPolicy Bypass -File scripts\build-windows.ps1
```

Or double-click `scripts\build-windows.bat`. The playable folder is `dist\Turok2Recompiled\`.

### CI

Every push to this branch runs `.github/workflows/windows.yml` and uploads `Turok2Recompiled-windows-x64`.

### From CMake (any host that already builds the app)

```bash
cmake -S projects/turok2-decomp -B build-app -DTUROK2_BUILD_APP=ON
cmake --build build-app --target Turok2Recompiled
```

On macOS / Linux you need a system SDL2. On Windows the tree vendors SDL2 and DXC.

---

## Project layout

```text
projects/turok2-decomp/   game port, recompiled funcs, patches, launcher glue
tools/N64Recomp/          static recompiler
tools/N64ModernRuntime/   host runtime (librecomp + ultramodern)
tools/rt64/               renderer
tools/RecompFrontend/     menus, input, RmlUi
scripts/build-windows.ps1 local Windows package
```

The older splat / matching notes still live under `projects/turok2-decomp/docs/`. This repository’s job now is the **native port**, not a matching decomp.

---

## Credits

Nothing here exists without the people who opened the trail:

- [Drahsid/turok3](https://github.com/Drahsid/turok3) and [LibTEngine](https://github.com/Drahsid/LibTEngine) — same engine family, the reason this was even possible
- [Mr-Wiseguy/N64Recomp](https://github.com/Mr-Wiseguy/N64Recomp), [N64ModernRuntime](https://github.com/Mr-Wiseguy/N64ModernRuntime)
- [rt64/rt64](https://github.com/rt64/rt64)
- RecompFrontend / RmlUi / SDL2
- [ethteck/splat](https://github.com/ethteck/splat), the N64Brew docs, Kaiser / Turok EX, and everyone who kept Turok alive

Full notes: [`projects/turok2-decomp/CREDITS.md`](projects/turok2-decomp/CREDITS.md).

---

## Legal

Turok 2: Seeds of Evil and all original game assets belong to their rights holders. This project does **not** distribute the ROM, textures, or music.

The reverse-engineering work in this repository (tools glue, patches, documentation) is released under [CC0 1.0](projects/turok2-decomp/LICENSE) unless a vendored dependency says otherwise. Provide your own dump from a cartridge you own.

---

If you only want a finished, risk-free Turok 2 session, an emulator is still the safe answer. If you want to help drag this game into a native 120 Hz future, you are in the right place. Play it. Break it. Tell us what broke.
