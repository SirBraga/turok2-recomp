# Turok 2 US Rev.01 (crash-screen rebuild) — session state

## Track
B — N64Recomp feasibility experiment (sibling of `projects/turok2-decomp`)

## Phase
B1 smoke — splat first split done; N64Recomp emits C then dies on overlays.
Do **not** replace the playable US 1.0 base ROM.

## ROM
- File: `projects/turok2-rev01/baserom.z64` → `turok2.us1(with-crash-screen-enabled).z64`
- SHA1: `f005a571471602ceaa8f15b45e834d0d5ba19261`
- Header version: 1 (US 1.0 is version 0)
- Entrypoint header: `0x80000400`
- Boot jalr target: `0x00274FD0` (US 1.0 is `0x0028D380`)
- `__DATE__` / `__TIME__`: **`Aug 30 2026` / `13:19:22`**
- US 1.0 same slot: `Nov 10 1998` / `13:17:04`
- Identical bytes vs US 1.0: **1.07%**. Prefix match: 16 bytes.
- No SN64 `LNK` records / no `D:\turok2` paths.

This is a **2026 rebuild with crash screen compiled in**, not a 1998 retail Rev.1.

## Verdict (2026-09-05)
Keep the playable port on US 1.0. Do not switch the configured base ROM.

Crash-screen value is real (live `Call stack` printer at ROM `0x75110`,
xref `0x75154` → `0x8008AF88`). US 1.0 already has the same strings
(`0xAACF4` / `0xE3CF4`). Recomp stubs CP0 anyway; host
`crash_diagnostics.cpp` is the working reporter.

## Mapping
| Name | ROM | VRAM | Notes |
| --- | --- | --- | --- |
| boot stub | `0x1000` | `0x80000400` | 3 bytes differ; jalr → `0x00274FD0` |
| engine .text | `0x1100`–`0x8A4C4` | `0x00200500` | last `jr $ra` delay at `0x8A4C0` |
| engine .rodata | `0x8A4C4`–`0x9F35C` | `0x800898C4` | crash strings `0x8BB88` |
| ucode | `0x9F35C` | `0x8009E75C` | rspboot/aspMain match US blobs |
| libultra .text | `0xA3118`–`0xC7A84` | `0x800A2518` | |
| rest / assets | `0xC8000` | — | not split |

## Smoke results
- splat 0.50.0: **99.74%** in defined segments, 712 KB asm, 126 auto funcs
- N64Recomp: 2369 prologue symbols, **933 decls / 20 `.c` files** emitted
- Stopped on `jal 0x00405F4C` (virtual overlay, no `.virtual` section yet)
- Many `branching outside` warnings = prologue-to-prologue sizes are crude

## Active Commands
```bash
python3 projects/turok2-rev01/tools/probe-rev01.py
python3 projects/turok2-rev01/tools/emit-symbols-toml.py
projects/turok2-decomp/.venv/bin/python -m splat split \
  projects/turok2-rev01/versions/turok2.rev01.yaml
projects/turok2-rev01/tools/smoke-recomp.sh
```

## Learned Patterns
- A header version of 1 plus "crash screen" in the filename is not proof of
  1998 Rev.1. Check `__DATE__` next to `TUROK2 BUILD`.
- Crash-screen strings in US 1.0 are not missing; they are just not the
  live path. Enabling that path is cheaper than switching ROMs.
- N64Recomp symbol files need the KSEG0 `.rodata` section or jump-table
  analysis dies (`Failed to find section for jump table`).
- Do not mass-stub `Failed to analyze` — that is usually a bad boundary,
  not CP0.

## Known Issues / TODOs
- [x] First splat yaml from measured Rev.01 offsets
- [x] Split + symbol harvest
- [x] N64Recomp smoke emit
- [x] Verdict: keep US 1.0
- [ ] Virtual `0x004xxxxx` overlays (only if this experiment continues)
