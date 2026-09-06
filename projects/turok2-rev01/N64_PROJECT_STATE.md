# Turok 2 US Rev.01 (crash-screen rebuild) — session state

## Track
B — N64Recomp feasibility experiment (sibling of `projects/turok2-decomp`)

## Phase
B3 (renderer). Frontend is up: RSP gfx + audio tasks submit, VI rotates
3 CFBs (`80600000` / `80654600` / `806A8C00`), Controller Pak → IMPORTANT →
legal all draw as 2D texrects. The 3D title screen after the second A is
the open problem. Jalr leaves after `jr $ra` must be EXTRAS (tables at
`0x8008F3BC`, `0x80093C08`; lui/addiu after `jr $ra`).
Do **not** replace the playable US 1.0 base ROM.

## Fixed — engine/rodata boundary was 0xC bytes short
The engine segment used to end at `0x002898C4`, which orphaned three
instructions that belong to `func_00289870`:
```
0x002898C4  and $a1, $a1, $v0     mask the low word
0x002898C8  beq $0, $0, -68       back to .L00289888
0x002898CC  ori $a1, $a1, 0x800   delay slot, rounding bit
0x002898D0  "header\0texture\0simple object index\0geometry..."
```
`func_00289870` is a u64 -> float conversion (hi in `$a0`, lo in `$a1`,
result in `$f0` via `cvt.s.d`) called right after the 64-bit divide
`func_00288DB0` in nine places, with divisors 3 and `0xBB8`. The cut made
N64Recomp refuse it ("branch outside"), it was stubbed, and it returned a
garbage float. Fixed in the yaml, `tools/emit-symbols-toml.py` and
`src/rev01_map.h`; the manual entry in `tools/refresh-stubs.py` is gone and
the function is generated with its `L_002898C4` path. Smoke still passes,
only `FLAT rodata` moved to `0x800898D0`.

**Lesson: do not stub a "branch outside the function" — check the segment
boundary first.** Any remaining "branching outside" warning deserves the
same treatment before a stub.

## Open problem — title screen
Title gfx task: 106 triangles, 86 vertices, 36 glyph texrects
(`PRESS START` at y≈308 of 360), DL at `805A4160` / `805D20A0`.
Confirmed working: projection reaches the DL, tris rasterize
(`[rt64:geo] triangles drawn`), the pair is a presentable scene
(`calls=43 scene=1 w=479 h=359`), the font tiles/TMEM loads are
byte-identical to the visible pak screen, text `othermode_l=00504240`
matches too, and RT64 presents the same CFB rotation at the title as at
the legal screen. So it is neither presentation nor the text render state.

Measured with `TUROK2_FB_DUMP` (reads the CFB out of RDRAM, see below):
before the boundary fix the title CFB held exactly **one** colour, pure
black, 100% of 172800 pixels, and dropping every 3D triangle
(`TUROK2_RT64_STRIP_TRIS=1`) changed nothing — so the 3D pass was never
the cause. After the fix the same CFB is **99% covered**, in a dithered
light cyan (`0xCEF6` / `0xD738`, ratio 3:1, black 1px border). That is not
the Z clear (`0xFFFC` would be 255,255,246), so it is real rasterized
output: something now draws a full-screen wash over the title. The 2D text
screens still render (48 colours at 7 s, gold `205,205,139` present).

## Evidence channel — read the framebuffer, not the screen
`TUROK2_FB_DUMP=<sec>[,<sec>...]` dumps the three CFBs to
`/tmp/turok2-cfb-<sec>s-<addr>.ppm` from `turok2_rev01_mark_dl`. It works
because `EmulatorConfiguration::framebuffer.renderToRAM` defaults to true,
so RT64 copies each rendered colour target back into RDRAM
(`Framebuffer::copyNativeToRAM`). Compare *distinct colour counts*, not a
brightness threshold. Caveat still open: the dump reflects the readback
range, so confirm `colorRowStart`/`colorRowEnd` are sane before calling a
frame empty.

## ROM
- File: `projects/turok2-rev01/baserom.z64` → `turok2.us1(with-crash-screen-enabled).z64`
- SHA1: `f005a571471602ceaa8f15b45e834d0d5ba19261`
- Header version: 1 (US 1.0 is version 0)
- Boot jalr target: `0x00274FD0`
- `__DATE__` / `__TIME__`: **`Aug 30 2026` / `13:19:22`**
- Identical bytes vs US 1.0: **1.07%**

This is a **2026 rebuild with crash screen compiled in**, not 1998 retail Rev.1.

## Verdict
Keep the playable port on US 1.0. This tree is the follow-along test project.

## Mapping
| Name | ROM | VRAM | Size |
| --- | --- | --- | --- |
| boot | `0x1000` | `0x80000400` | `0x100` |
| engine | `0x1100` | `0x00200500` | `0x893D0` |
| rodata | `0x8A4D0` | `0x800898D0` | `0x14E8C` |
| kseg0 late (ucode + jtbl) | `0x9F35C` | `0x8009E75C` | `0x3D74` |
| virtual | `0xA30D0` | `0x00400000` | `0x30CE8` (code `0x249B4` + vtables) |

KSEG0 after IPL3: ROM `R` → `0x80000000 + R - 0x400`.
Jump table example: ROM `0xA2240` → `0x800A1640`.

The old `0x800A2518` “libultra” mapping was ROM+`0x7FFFF400` on the
**virtual** bank and is wrong. Virtual is `0x00400000`.

## Smoke results
- splat 0.50.0: **99.74%** in defined segments
- N64Recomp: **3229** symbols, `RecompiledFuncs/` + `recomp_overlays.inl`
- `Turok2Rev01MapSmoke` OK: function probes + flatten of boot / engine /
  rodata / kseg0_late / virtual / entry / crash / `0x00405F4C` / jtbl `0x800A1640`
- Host `$sp` for `recomp_entrypoint`: `0x803FFFC0` (from `func_80000400`)
- `Turok2Rev01Recompiled` links; 12–20 s boot stays alive (heap at `0x01000000`,
  Metal `Apple M1 Pro`). First crash was `cop0_status_write` on CU1/IE.
- XXH3 of this ROM: `0x0F10B228A7D61DE4`
- Named libultra (this ROM only) so N64Recomp calls host `*_recomp`.
- Thread 3 entry `0x00201850` is a real prologue after `jr $ra`; protect
  `osCreateThread` `$a2` pointers and do not drop prologues after a return.
- `osPiRawStartDma` is `func_0027F8C0`. Game DMA copies ROM `0xA30D0`…
  into `0x80780000` (8 KiB chunks), then `osViSetEvent` sets `q=0x800DD880`
  msg `0x29A`.
- Do not stub `func_00273790` for `teq $zero,$zero`. Nop those asserts
  with `[[patches.instruction]]`. Gfx thread is generated; still no RSP task.

## Active Commands
```bash
python3 tools/emit-symbols-toml.py
python3 tools/refresh-stubs.py
../turok2-decomp/.venv/bin/python -m splat split versions/turok2.rev01.yaml
../../tools/N64Recomp/build/N64Recomp turok2.rev01.toml
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --target Turok2Rev01MapSmoke
./build/Turok2Rev01MapSmoke baserom.z64
cmake --build build --target Turok2Rev01Recompiled
./build/Turok2Rev01Recompiled baserom.z64
```

## Learned Patterns
- A header version of 1 plus "crash screen" in the filename is not proof of
  1998 Rev.1. Check `__DATE__` next to `TUROK2 BUILD`.
- Engine `jal 0x004xxxxx` resolve at ROM `0xA30D0 + (vram - 0x00400000)`.
- N64Recomp needs the KSEG0 section that holds jump tables, not just `.rodata`.
- Do not mass-stub `Failed to analyze`. Fix starts (shared `beq $0,$0` /
  backward `j`, epilogue-vs-data, jal targets). Stub only unsupported
  COP0 / `teq` / `CACHE`, plus `func_00289870` (branch onto `.rodata`).
- `addi $sp` (`23BD`) is a prologue, same as `addiu $sp` (`27BD`).
- Rev.01 boot sets `$sp` to `0x803FFFC0`. Flatten KSEG0 via IPL3 1 MiB at
  `0x80000400` (rodata at `0x800898C4` is 4-byte aligned, so `do_rom_read`
  cannot target it directly). Virtual `0x00400000` relocates to `0x00B00000`;
  host RDRAM for flatten must be 16 MiB, not 8 MiB.
- `__osSiRawStartDma` is `func_0027FA30`, `__osSiDeviceBusy` is `func_0027FAF0`.
- `cop0_status_write` exits if any bit other than FR changes. Stub Status
  writers that are not reimplemented (`__osSetSR` `func_00283810`).
  Name `__osDisableInt` / `__osRestoreInt` / `osSetIntMask` instead.
- N64Recomp only uses host `osFoo_recomp` when the symbol is named `osFoo`.
- `teq $zero,$zero` is an IDO assert. Nop it; do not stub the function.
- **`CCamera.m_mProjection` (+0x368) is view × projection × scale, not a
  perspective.** `func_00268D84` builds it as: `guPerspectiveF`
  (`func_0027E1D0`) → `sp+0xE8`; view → `sp+0x1A8` (also copied to
  `m_mfView` +0x20C); `func_0020B488(sp+0x168, sp+0x1A8, sp+0xE8)` =
  view×persp; `func_0020B488(cam+0x1CC, sp+0x168, sp+0xA8)` =
  `m_mfProjection`; then `guMtxF2L` into `m_mProjection[frame]`. A matrix
  there that does not look like a `P` is correct, not corrupt. Do not
  overwrite +0x368 with the bare perspective — that deletes the camera
  orientation.
- `func_0020B488` has **no** aliasing between dest and sources in either
  call, and both source matrices are initialized first. Dead ends.
- Offsets verified against two independent sources in
  `docs/reference/`: LibTEngine `types/CCamera.h` (`GAME_TUROK2`) and the
  Turok 3 decomp `camera.h` (same field order, shifted). Turok 2:
  `0x068` `m_PerspNorm`, `0x1CC` `m_mfProjection`, `0x20C` `m_mfView`,
  `0x368` `Mtx m_mProjection[2]`, `0x510` `m_FarClip`, `0x524`
  `m_FogStart` (the `lhu 0x526` is its low half-word).
- `func_00268444` is the `CCamera__DisplayListSetup` equivalent (fog +
  `G_MTX_PROJECTION` + viewport). `func_00268D84` is the attribute/view
  setup that feeds it.
- **Desktop `screencapture` is not usable evidence here.** The US 1.0
  port keeps windows at `(0,0) 1512x949` that fully cover the Rev.01
  window, and raising Rev.01 to the front is unreliable — three captures
  of three different game states returned byte-identical pixel stats, and
  one capture returned the Cursor window. Any conclusion drawn from those
  numbers is void. Need a real frame dump before trusting pixels again.
- Forcing `gSPFogPosition` min to 0 emits `00800080`, which saturates
  vertex fog and paints everything with the black fog color. Authored 995
  is fine; only cap the `>=997` wrap.

## Known Issues / TODOs
- [x] First splat yaml from measured Rev.01 offsets
- [x] Virtual `0x004xxxxx` bank at ROM `0xA30D0`
- [x] N64Recomp emits overlays + C
- [x] Map-smoke binary
- [x] `entrypoint.cpp` + flatten smoke (no US 1.0 hooks)
- [x] RT64 runner boots and stays alive (no US 1.0 60 Hz hooks)
- [x] Prove a display list (`TUROK2_GFX_DIAGNOSTICS=1`, `[rsp submit]`)
- [x] 2D frontend visible (pak / IMPORTANT / legal)
- [x] Confirm camera offsets against external documentation
- [ ] **Reliable frame evidence** — replace desktop `screencapture` with a
      framebuffer dump from the runner
- [ ] Title screen 3D + `PRESS START` not visible
- [ ] Decide whether the hooks in `src/runtime_stubs.cpp` stay; they are
      off unless `TUROK2_REV01_HOOKS=1`, and `fix_projection` is known
      wrong. Remove from `turok2.rev01.toml` once confirmed unneeded.
- [ ] `func_0041B908` is still stubbed (CACHE); may skip framebuffer setup
- [ ] Heap-clear reload if useg banks get wiped
- [ ] Refine prologue-to-prologue leftovers (`branching outside` warnings)
