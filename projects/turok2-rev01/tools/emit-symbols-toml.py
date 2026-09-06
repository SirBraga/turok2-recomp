#!/usr/bin/env python3
"""Build a first-pass N64Recomp symbols file from ROM evidence."""
from __future__ import annotations

import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ROM = (ROOT / "baserom.z64").read_bytes()
OUT = ROOT / "turok2.rev01.syms.toml"

JR_RA = 0x03E00008

# Named starts proven from the ROM (boot, engine jalr, virtual leaf at base).
EXTRAS = {
    0x1000: "func_80000400",
    0x1088: "func_80000488",
    0x75BD0: "entry_00274FD0",
    0xA30D0: "func_00400000",
    # WatchLo/WatchHi helper after jr $ra of func_0041B908. First word is
    # sll, so split_epilogues will not cut it. Stub only this leaf.
    0xBECB0: "func_0041BBE0",
}

# Engine ROM = 0x1100 + (vram - 0x00200500). Names must match
# N64Recomp reimplemented_funcs exactly so the host runtime is used.
# Evidence is this ROM only — do not copy US 1.0 addresses.
_ENGINE_ROM = 0x1100
_ENGINE_VRAM = 0x00200500


def _engine_rom(vram: int) -> int:
    return _ENGINE_ROM + (vram - _ENGINE_VRAM)


# SP: memcpy 0x40 task + virt-to-phys + jal SetPc; StartGo waits busy
# then SetStatus(0x125); Yield writes 0x400; Yielded tests status 0x80.
# VI: 0x800A8F80 is __osViNext (SwapBuffer stores framep+4, OR 0x10);
# 0x800A8F84 is __osViCurr (GetCurrentFramebuffer).
# Mesg: CreateMesgQueue stores &__osThreadTail at +0/+4; Jam prepends
# first; Send appends; Recv returns -1 on empty+noblock.
# Thread: CreateThread does sp-16; StartThread sets state 2 and enqueues
# 0x800A9DB4; GetThreadPri reads +4, NULL -> __osRunningThread.
# Cache: Hit_Writeback_Inv_D / Hit_Invalidate_I / Hit_Writeback_D /
# Index_Writeback_Inv_D over 8 KiB.
# PI: 0xA460 status wait, virt-to-phys, DRAM/CART/LEN — osPiRawStartDma.
LIBULTRA_VRAM = {
    # Cont: StartReadData packs then SI write/read; GetReadData unpacks
    # 6-byte OSContPad; Init is first-time + 500ms timer + bitpattern.
    # StartQuery lastcmd==1; GetQuery unpacks 4-byte OSContStatus.
    0x0027E6F0: "osContStartReadData",
    0x0027E770: "osContGetQuery",
    0x0027E790: "osContStartQuery",
    0x0027E8A0: "osContGetReadData",
    0x0027EB3C: "osContInit",
    0x0027F8C0: "osPiRawStartDma",
    0x0027FB10: "osSpTaskLoad",
    0x0027FCF4: "osSpTaskStartGo",
    0x0027FE50: "__osSpSetPc",
    0x0027FE90: "osSpTaskYield",
    0x0027FEB0: "osSpTaskYielded",
    0x0027FF10: "osViBlack",
    0x00280020: "osViGetCurrentFramebuffer",
    0x00280194: "osCreateViManager",
    0x00280350: "osViSetEvent",
    0x002803B0: "osViSetMode",
    0x00280410: "osViSetSpecialFeatures",
    0x00280540: "osViSetXScale",
    0x00280590: "osViSwapBuffer",
    0x00280820: "osCreateMesgQueue",
    0x00280850: "osCreateThread",
    0x00280920: "osGetThreadPri",
    0x002809B0: "osInitialize",
    0x00280D10: "osJamMesg",
    0x00280E30: "osRecvMesg",
    0x00280F30: "osSendMesg",
    0x00281040: "osSetEventMesg",
    0x00281200: "osStartThread",
    0x002815E0: "osVirtualToPhysical",
    0x00283520: "__osDisableInt",
    0x00283540: "__osRestoreInt",
    0x00283560: "osInvalDCache",
    0x00283600: "osInvalICache",
    0x00283760: "osSetIntMask",
    0x00283870: "osWritebackDCache",
    0x002838E0: "osWritebackDCacheAll",
}

EXTRAS.update({_engine_rom(vram): name for vram, name in LIBULTRA_VRAM.items()})
# RNC2 wrapper does jalr $t4 after lui/addiu 0x00200F28.
EXTRAS[_engine_rom(0x00200F28)] = "func_00200F28"

# Mid-function addi $sp in the handwritten RNC1 decoder. A global
# fall-through prologue sweep ate ~157 other starts; only these are proven.
RNC1_FALSE_PROLOGUES = {
    _engine_rom(0x00200A98),
    _engine_rom(0x00200AC8),
    _engine_rom(0x00200D08),
    _engine_rom(0x00200D40),
}

SECTIONS = [
    {
        "name": ".boot",
        "rom": 0x1000,
        "vram": 0x80000400,
        "end": 0x1100,
        "scan_jals": True,
        "use_jal_starts": False,
        "split_epilogues": False,
    },
    {
        "name": ".code",
        "rom": 0x1100,
        "vram": 0x00200500,
        # func_00289870's second path is at 0x002898C4 (ROM 0x8A4C4): three
        # instructions ending in `beq $0, $0, -68`. Strings start at 0x8A4D0.
        "end": 0x8A4D0,
        "scan_jals": True,
        "use_jal_starts": True,
        "split_epilogues": True,
    },
    {
        "name": ".rodata",
        "rom": 0x8A4D0,
        "vram": 0x800898D0,
        "end": 0x9F35C,
        "scan_jals": False,
        "use_jal_starts": False,
        "split_epilogues": False,
    },
    # IPL3 places ROM 0x1000 at RDRAM 0x400, so ROM R → KSEG0 R+0x7FFFF400.
    # Jump tables live here (e.g. 0x800A1640 at ROM 0xA2240), after the ucode
    # blobs and before the 0x00400000 virtual bank.
    {
        "name": ".kseg0_late",
        "rom": 0x9F35C,
        "vram": 0x8009E75C,
        "end": 0xA30D0,
        "scan_jals": False,
        "use_jal_starts": False,
        "split_epilogues": False,
    },
    {
        "name": ".virtual",
        "rom": 0xA30D0,
        "vram": 0x00400000,
        "end": 0xC7A84,
        "scan_jals": True,
        "use_jal_starts": True,
        "split_epilogues": True,
    },
]


def word(off: int) -> int:
    return struct.unpack_from(">I", ROM, off)[0]


def is_prologue(instr: int) -> bool:
    # addiu $sp / addi $sp with a negative immediate.
    return (instr & 0xFFFF0000) in (0x27BD0000, 0x23BD0000) and (instr & 0x8000)


def is_sp_restore(instr: int) -> bool:
    return (instr & 0xFFFF0000) in (0x27BD0000, 0x23BD0000) and not (instr & 0x8000)


def looks_like_code_start(instr: int) -> bool:
    if is_prologue(instr):
        return True
    # KSEG0 pointers used as data (0x800xxxxx as a word).
    if 0x80000000 <= instr < 0x80800000:
        return False
    op = instr >> 26
    rs = (instr >> 21) & 31
    if op in (0x0F, 0x09):
        return True
    if op in (0x20, 0x23, 0x28, 0x2B) and rs in (4, 5, 29):
        return True
    # Float leaves (e.g. 0x00241904) start with lwc1/ldc1 from a0/a1.
    if op in (0x31, 0x35) and rs in (4, 5, 16, 17):
        return True
    if op == 0x11 and rs == 4:
        return True
    if op == 0 and (instr & 0x3F) == 8:
        return True
    return False


def jal_target(instr: int, pc_vram: int) -> int | None:
    if (instr >> 26) != 3:
        return None
    return (pc_vram & 0xF0000000) | ((instr & 0x03FFFFFF) << 2)


def i_branch_target(instr: int, pc: int) -> int | None:
    """PC-relative branch / COP1 bc target. Does not follow j/jal."""
    op = instr >> 26
    if op in (4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17) or (
        op == 1 and ((instr >> 16) & 31) in (0, 1, 2, 3, 0x10, 0x11, 0x12, 0x13)
    ) or (op == 0x11 and ((instr >> 21) & 31) == 8):
        simm = instr & 0xFFFF
        if simm >= 0x8000:
            simm -= 0x10000
        return pc + 4 + simm * 4
    return None


def beq0_target(instr: int, branch_vram: int) -> int | None:
    """Unconditional `beq $zero, $zero, simm` target, or None."""
    if (instr >> 26) != 4:
        return None
    if ((instr >> 21) & 31) != 0 or ((instr >> 16) & 31) != 0:
        return None
    simm = instr & 0xFFFF
    if simm >= 0x8000:
        simm -= 0x10000
    return branch_vram + 4 + simm * 4


def skip_nops(off: int, rom_end: int) -> int:
    while off < rom_end and word(off) == 0:
        off += 4
    return off


def collect_jal_targets() -> set[int]:
    targets: set[int] = set()
    for section in SECTIONS:
        if not section["scan_jals"]:
            continue
        vram = section["vram"]
        rom0 = section["rom"]
        for off in range(rom0, section["end"], 4):
            target = jal_target(word(off), vram + (off - rom0))
            if target is not None:
                targets.add(target)
    return targets


def after_return_boundary(off: int) -> bool:
    """True when `off` follows `jr $ra` (+ optional restore / nops)."""
    prev = off
    while prev >= 4 and word(prev - 4) == 0:
        prev -= 4
    if prev >= 8 and word(prev - 8) == JR_RA and is_sp_restore(word(prev - 4)):
        return True
    return prev >= 4 and word(prev - 4) == JR_RA


def drop_late_prologues(starts: set[int], keep: set[int]) -> None:
    """Drop addiu-$sp that sits a few insns after lui/lw (same function).

    Never drop a jal target: 0x00407AA8 is a real prologue 8 bytes after a
    leftover jr $ra / nop pair. Also keep a prologue that sits after a
    real return — 0x00201850 is a thread entry, and a backward `j` onto
    the previous `jr $ra` used to make drop_late delete it.
    """
    for off in list(starts):
        if off in keep or not is_prologue(word(off)):
            continue
        if after_return_boundary(off):
            continue
        if any((off - delta) in starts for delta in (4, 8, 12)):
            starts.discard(off)


def pull_shared_body_entries(
    starts: set[int], jal_roms: set[int], rom_start: int, vram: int
) -> int:
    """addiu $sp / beq $0,$0, back / sw $ra → start at the shared body."""
    moved = 0
    for off in list(starts):
        if not is_prologue(word(off)):
            continue
        branch_vram = vram + (off + 4 - rom_start)
        target = beq0_target(word(off + 4), branch_vram)
        if target is None or target >= vram + (off - rom_start):
            continue
        target_rom = rom_start + (target - vram)
        if target_rom < off:
            if off not in jal_roms:
                starts.discard(off)
            starts.add(target_rom)
            moved += 1
    return moved


def jump_target(instr: int, pc: int) -> int | None:
    if (instr >> 26) != 2:
        return None
    return (pc & 0xF0000000) | ((instr & 0x03FFFFFF) << 2)


def pull_backward_jumps(
    starts: set[int], rom_start: int, rom_end: int, vram: int
) -> int:
    """`j` to a few insns before the prologue is a shared-body entry."""
    moved = 0
    ordered = sorted(off for off in starts if rom_start <= off < rom_end)
    for i, off in enumerate(ordered):
        nxt = ordered[i + 1] if i + 1 < len(ordered) else rom_end
        for cur in range(off, nxt, 4):
            target = jump_target(word(cur), vram + (cur - rom_start))
            if target is None:
                continue
            target_rom = rom_start + (target - vram)
            if off - 0x80 <= target_rom < off:
                starts.add(target_rom)
                moved += 1
    return moved


def pull_leading_beq0(starts: set[int], rom_start: int, rom_end: int, vram: int) -> int:
    """If the two insns before a start are `beq $0,$0` into it, take them too."""
    moved = 0
    for off in list(starts):
        if off - 8 < rom_start:
            continue
        target = beq0_target(word(off - 8), vram + (off - 8 - rom_start))
        if target is None:
            continue
        target_rom = rom_start + (target - vram)
        if target_rom >= off:
            starts.discard(off)
            starts.add(off - 8)
            # The skipped body belongs to this function, not a new one.
            starts.discard(target_rom)
            moved += 1
    return moved


def merge_forward_branches(
    starts: set[int],
    protected: set[int],
    rom_start: int,
    rom_end: int,
    vram: int,
) -> int:
    """Drop epilogue-only starts that sit inside a previous function's branch."""
    removed = 0
    changed = True
    while changed:
        changed = False
        ordered = sorted(off for off in starts if rom_start <= off < rom_end)
        for i, off in enumerate(ordered):
            nxt = ordered[i + 1] if i + 1 < len(ordered) else rom_end
            farthest = nxt
            for cur in range(off, nxt, 4):
                pc = vram + (cur - rom_start)
                target = i_branch_target(word(cur), pc)
                if target is None:
                    continue
                target_rom = rom_start + (target - vram)
                if nxt <= target_rom < rom_end:
                    farthest = max(farthest, target_rom + 4)
            if farthest <= nxt:
                continue
            for later in ordered[i + 1 :]:
                if later >= farthest:
                    break
                if later in protected:
                    continue
                starts.discard(later)
                removed += 1
                changed = True
    return removed


def functions_in(
    rom_start: int,
    rom_end: int,
    vram: int,
    jal_targets: set[int],
    use_jal_starts: bool,
    split_epilogues: bool,
) -> list[tuple[str, int, int]]:
    starts: set[int] = set()
    protected: set[int] = set()
    jal_roms: set[int] = set()
    for off in range(rom_start, rom_end, 4):
        if is_prologue(word(off)):
            starts.add(off)
            protected.add(off)
        if split_epilogues and word(off) == JR_RA and off + 8 < rom_end:
            if is_sp_restore(word(off + 4)):
                nxt = skip_nops(off + 8, rom_end)
                if nxt < rom_end and looks_like_code_start(word(nxt)):
                    starts.add(nxt)
    if use_jal_starts:
        vram_end = vram + (rom_end - rom_start)
        for target in jal_targets:
            if vram <= target < vram_end:
                rom_off = rom_start + (target - vram)
                starts.add(rom_off)
                protected.add(rom_off)
                jal_roms.add(rom_off)
    for rom_off in EXTRAS:
        if rom_start <= rom_off < rom_end:
            starts.add(rom_off)
            protected.add(rom_off)
            jal_roms.add(rom_off)
    drop_late_prologues(starts, jal_roms)
    pulled = pull_shared_body_entries(starts, jal_roms, rom_start, vram)
    pulled += pull_leading_beq0(starts, rom_start, rom_end, vram)
    pulled += pull_backward_jumps(starts, rom_start, rom_end, vram)
    drop_late_prologues(starts, jal_roms)
    if pulled:
        print(f"  adjusted {pulled} starts (shared body / leading beq)")
    merged = merge_forward_branches(starts, protected, rom_start, rom_end, vram)
    if merged:
        print(f"  merged {merged} starts (branch past false end)")
    if use_jal_starts:
        vram_end = vram + (rom_end - rom_start)
        for target in jal_targets:
            if vram <= target < vram_end:
                starts.add(rom_start + (target - vram))
    rnc1 = starts.intersection(RNC1_FALSE_PROLOGUES)
    starts.difference_update(RNC1_FALSE_PROLOGUES)
    if rnc1:
        print(f"  dropped {len(rnc1)} RNC1 mid-function addi $sp")
    ordered = sorted(off for off in starts if rom_start <= off < rom_end)
    if not ordered:
        return []
    rows = []
    trimmed = 0
    extended = 0
    for i, off in enumerate(ordered):
        nxt = ordered[i + 1] if i + 1 < len(ordered) else rom_end
        end = nxt
        grew = True
        while grew:
            grew = False
            for cur in range(off, end, 4):
                target = i_branch_target(word(cur), vram + (cur - rom_start))
                if target is None:
                    continue
                target_rom = rom_start + (target - vram)
                if end <= target_rom < min(rom_end, end + 0x800):
                    later = next((s for s in ordered if s > target_rom), rom_end)
                    if later > end:
                        end = later
                        grew = True
        size = end - off
        if size < 8:
            continue
        if end > nxt:
            extended += 1
        last_jr = None
        first_exit = None
        earlier_tgts: list[int] = []
        branch_tgts: list[int] = []
        cop0_off = None
        for cur in range(off, off + size - 4, 4):
            instr = word(cur)
            tgt = i_branch_target(instr, vram + (cur - rom_start))
            if tgt is not None:
                branch_tgts.append(rom_start + (tgt - vram))
                earlier_tgts.append(rom_start + (tgt - vram))
            if (instr & 0xFFE00000) in (0x40000000, 0x40800000):
                if ((instr >> 11) & 31) != 12:
                    cop0_off = cur
            if instr != JR_RA:
                continue
            last_jr = cur + 8
            if first_exit is None and not any(
                cur + 8 <= t < off + size for t in earlier_tgts
            ):
                first_exit = cur + 8
        if last_jr is not None:
            leftover = off + size - last_jr
            tail = skip_nops(last_jr, off + size)
            keep_tail = any(last_jr <= tgt < off + size for tgt in branch_tgts)
            data_tail = (
                tail < off + size and not looks_like_code_start(word(tail))
            )
            # RNC1: first jr $ra, then a COP0 leftover with its own jr.
            cop0_after_exit = (
                first_exit is not None
                and cop0_off is not None
                and first_exit <= cop0_off < last_jr
            )
            if not keep_tail and leftover > 0 and (
                leftover <= 0x20 or data_tail or cop0_after_exit
            ):
                size = (first_exit if cop0_after_exit else last_jr) - off
                trimmed += 1
        func_vram = vram + (off - rom_start)
        name = EXTRAS.get(off, f"func_{func_vram:08X}")
        rows.append((name, func_vram, size))
    if extended:
        print(f"  extended {extended} sizes over inner starts (overlap ok)")
    if trimmed:
        print(f"  trimmed {trimmed} tails after last jr $ra")
    return rows


def sext16(imm: int) -> int:
    return imm - 0x10000 if imm >= 0x8000 else imm


# jalr tables of standalone callbacks. Do not harvest switch jump
# tables (those labels must stay inside the parent function).
# 0x800983C4 is used by func_00268D84 (lh index * 8 + 4). Ends at the
# 0x00000800 / float block at 0x800984E4.
CALLBACK_TABLES = (
    (0x800983C4, 0x800984E4),
    # func_00241738: index * 0x18 at 0x8008F3BC. 36 records, then floats.
    # Leaves often start with lwc1 / lw, not addi $sp (e.g. 0x00241904).
    (0x8008F3BC, 0x8008F73C),
    # Object method words around 0x80093C08 (e.g. 0x00255BEC after a jr $ra).
    # Stop before the next 0x800xxxxx data block.
    (0x80093C08, 0x80093E80),
)


# Boot PI copies virtual ROM through 0xD3DB8. Function scan stops at the
# last jr $ra (0xC7A84); vtables after that still point at code in-bank.
VIRTUAL_DATA_END = 0xD3DB8


def harvest_virtual_vtables() -> int:
    """Protect jalr targets stored in the virtual bank's data tail."""
    virt = next(sec for sec in SECTIONS if sec["name"] == ".virtual")
    vram0 = virt["vram"]
    rom0 = virt["rom"]
    code_end = virt["end"]
    vram_code_end = vram0 + (code_end - rom0)
    added = 0
    for off in range(code_end, VIRTUAL_DATA_END, 4):
        target = word(off)
        if target & 3:
            continue
        if not (vram0 <= target < vram_code_end):
            continue
        rom_off = rom0 + (target - vram0)
        if rom_off not in EXTRAS:
            EXTRAS[rom_off] = f"func_{target:08X}"
            added += 1
    return added


def looks_like_funcptr_head(instr: int) -> bool:
    """Reject COP0 leftovers and raw pointer words mistaken for code."""
    if instr == 0:
        return False
    if (instr & 0xFFE00000) in (0x40000000, 0x40800000):
        return False
    if (instr & 3) == 0 and (
        0x00200500 <= instr < 0x002898C4 or 0x00400000 <= instr < 0x004249B4
    ):
        return False
    return looks_like_code_start(instr)


def harvest_lui_addiu_funcptrs() -> int:
    """Protect jalr targets built with lui/addiu (object +0xF0 callbacks)."""
    code_secs = [sec for sec in SECTIONS if sec["scan_jals"]]
    added = 0
    for section in code_secs:
        rom0 = section["rom"]
        rom1 = section["end"]
        last_lui: dict[int, tuple[int, int]] = {}
        for off in range(rom0, rom1, 4):
            instr = word(off)
            op = instr >> 26
            rt = (instr >> 16) & 31
            rs = (instr >> 21) & 31
            if op == 0x0F:
                last_lui[rt] = ((instr & 0xFFFF) << 16, off)
                continue
            if op not in (0x09, 0x0D) or rt != rs or rt not in last_lui:
                continue
            hival, hoff = last_lui.pop(rt)
            if off - hoff > 40:
                continue
            imm = instr & 0xFFFF
            target = (hival + (sext16(imm) if op == 0x09 else imm)) & 0xFFFFFFFF
            if target & 3:
                continue
            for code in code_secs:
                csize = code["end"] - code["rom"]
                if not (code["vram"] <= target < code["vram"] + csize):
                    continue
                rom_off = code["rom"] + (target - code["vram"])
                # lui/addiu also builds mid-function labels (COP0 helpers).
                # Only keep a start that sits on a real leaf after jr $ra.
                if rom_off < code["rom"] + 8 or word(rom_off - 8) != JR_RA:
                    break
                if not looks_like_funcptr_head(word(rom_off)):
                    break
                if rom_off not in EXTRAS:
                    EXTRAS[rom_off] = f"func_{target:08X}"
                    added += 1
                break
    return added


def harvest_callback_tables() -> int:
    """Protect jalr targets from proven callback tables in .rodata."""
    code_secs = [sec for sec in SECTIONS if sec["scan_jals"]]
    added = 0
    for vram0, vram1 in CALLBACK_TABLES:
        for sec in SECTIONS:
            size = sec["end"] - sec["rom"]
            if not (sec["vram"] <= vram0 < sec["vram"] + size):
                continue
            rom0 = sec["rom"] + (vram0 - sec["vram"])
            rom1 = sec["rom"] + (vram1 - sec["vram"])
            for off in range(rom0, rom1, 4):
                target = word(off)
                if target & 3:
                    continue
                for code in code_secs:
                    csize = code["end"] - code["rom"]
                    if code["vram"] <= target < code["vram"] + csize:
                        rom_off = code["rom"] + (target - code["vram"])
                        EXTRAS.setdefault(rom_off, f"func_{target:08X}")
                        added += 1
                        break
            break
    return added


def harvest_create_thread_entries() -> int:
    """Protect osCreateThread $a2 pointers. They are not always jal targets."""
    create_vram = next(
        (v for v, name in LIBULTRA_VRAM.items() if name == "osCreateThread"),
        None,
    )
    if create_vram is None:
        return 0
    enc = 0x0C000000 | ((create_vram >> 2) & 0x3FFFFFF)
    added = 0
    for section in SECTIONS:
        if not section["scan_jals"]:
            continue
        rom0 = section["rom"]
        for off in range(rom0, section["end"], 4):
            if word(off) != enc:
                continue
            hi = None
            for cur in range(max(rom0, off - 0x40), off + 8, 4):
                instr = word(cur)
                op = instr >> 26
                rt = (instr >> 16) & 31
                rs = (instr >> 21) & 31
                if op == 0x0F and rt == 6:
                    hi = (instr & 0xFFFF) << 16
                elif op == 0x09 and rt == 6 and rs == 6 and hi is not None:
                    entry = (hi + sext16(instr & 0xFFFF)) & 0xFFFFFFFF
                    for sec in SECTIONS:
                        size = sec["end"] - sec["rom"]
                        if sec["vram"] <= entry < sec["vram"] + size:
                            rom_off = sec["rom"] + (entry - sec["vram"])
                            EXTRAS.setdefault(rom_off, f"func_{entry:08X}")
                            added += 1
                            break
                    hi = None
    return added


def main() -> None:
    thread_entries = harvest_create_thread_entries()
    if thread_entries:
        print(f"thread entries from osCreateThread: {thread_entries}")
    callbacks = harvest_callback_tables()
    if callbacks:
        print(f"callback-table entries: {callbacks}")
    lui_ptrs = harvest_lui_addiu_funcptrs()
    if lui_ptrs:
        print(f"lui/addiu function pointers: {lui_ptrs}")
    vtables = harvest_virtual_vtables()
    if vtables:
        print(f"virtual-vtable entries: {vtables}")
    jal_targets = collect_jal_targets()
    lines = [
        "# First-pass Rev.01 symbols. Sizes are start-to-next-start.",
        "# Evidence: prologues, jal targets, jr $ra + addiu $sp restore.",
        "",
    ]
    for section in SECTIONS:
        funcs = functions_in(
            section["rom"],
            section["end"],
            section["vram"],
            jal_targets,
            section["use_jal_starts"],
            section["split_epilogues"],
        )
        size = section["end"] - section["rom"]
        lines.append("[[section]]")
        lines.append(f'name = "{section["name"]}"')
        lines.append(f"rom = {section['rom']:#x}")
        lines.append(f"vram = {section['vram']:#x}")
        lines.append(f"size = {size:#x}")
        lines.append("functions = [")
        for name, func_vram, func_size in funcs:
            lines.append(
                f'    {{ name = "{name}", vram = {func_vram:#x}, size = {func_size:#x} }},'
            )
        lines.append("]")
        lines.append("")
        print(f"{section['name']}: {len(funcs)} functions")
    OUT.write_text("\n".join(lines) + "\n")
    print(f"jal targets harvested: {len(jal_targets)}")
    print(f"wrote {OUT}")


if __name__ == "__main__":
    main()
