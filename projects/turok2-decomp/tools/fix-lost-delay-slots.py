#!/usr/bin/env python3
"""Restore the delay slot instruction a stray symbol took from a "jr $ra".

A MIPS jump executes the instruction after it before control leaves, and the
compiler puts the stack restore there. When the ELF carries a symbol on that
delay slot, N64Recomp ends the function at the jump and the instruction is never
emitted, so the function returns without undoing its frame. Every call then loses
that many bytes of stack, and once enough have leaked the caller's saved
registers are reloaded from the wrong addresses. That is the mechanism behind the
original scheduler corruption, found by hand in func_0042C3BC.

The generator places the delay slot statement ahead of the "return", so the fix
is to read the missing word from the ROM, translate it, and insert it there.

Only the two forms that actually occur are translated, an immediate add and a
word load; anything else is reported rather than guessed at.

RecompiledFuncs/ is generated, so this runs again after every regeneration.
"""

import pathlib
import re
import struct
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNCS = ROOT / "RecompiledFuncs"
ROM = ROOT / "baserom.us.z64"

FUNC_RE = re.compile(r"^RECOMP_FUNC void (\w+)\(uint8_t\* rdram, recomp_context\* ctx\) \{$")
INSN_RE = re.compile(r"^\s+// 0x([0-9A-F]{8}): (\S+)\s*(.*)$")

MARKER = "turok2: restored delay slot"

# ram_addr, size, rom_addr for each recompiled code section.
SECTIONS = (
    (0x00200500, 0x000A4D00, 0x00001100),
    (0x00400000, 0x0003C000, 0x0014A000),
    (0x0043C000, 0x00039A00, 0x00186000),
)

REGS = {29: "r29"}


def rom_word(rom: bytes, vram: int):
    for ram, size, rom_addr in SECTIONS:
        if ram <= vram < ram + size:
            offset = rom_addr + (vram - ram)
            return struct.unpack(">I", rom[offset:offset + 4])[0]
    return None


def signed16(value: int) -> int:
    return value - 0x10000 if value & 0x8000 else value


def immediate(value: int) -> str:
    return f"-0X{-value:X}" if value < 0 else f"0X{value:X}"


def translate(word: int):
    """Return (C statement, disassembly text) for the instructions we expect."""
    opcode = word >> 26
    rs = (word >> 21) & 0x1F
    rt = (word >> 16) & 0x1F
    imm = signed16(word & 0xFFFF)

    if opcode == 0x09:  # addiu rt, rs, imm
        return (f"ctx->r{rt} = ADD32(ctx->r{rs}, {immediate(imm)});",
                f"addiu $r{rt}, $r{rs}, {immediate(imm)}")
    if opcode == 0x23:  # lw rt, imm(rs)
        return (f"ctx->r{rt} = MEM_W(ctx->r{rs}, {immediate(imm)});",
                f"lw $r{rt}, {immediate(imm)}($r{rs})")
    return None


def bodies():
    result = []
    for path in sorted(FUNCS.glob("*.c")):
        lines = path.read_text().splitlines(keepends=True)
        name = None
        start = None
        insns = []
        for index, line in enumerate(lines):
            match = FUNC_RE.match(line.rstrip("\n"))
            if match:
                if name is not None:
                    result.append((path, name, start, index, insns))
                name, start, insns = match.group(1), index, []
                continue
            insn = INSN_RE.match(line.rstrip("\n"))
            if insn and name is not None:
                addr = int(insn.group(1), 16)
                if insns and insns[-1][0] == addr:
                    continue
                insns.append((addr, insn.group(2), insn.group(3)))
        if name is not None:
            result.append((path, name, start, len(lines), insns))
    return [entry for entry in result if entry[4]]


def main():
    rom = ROM.read_bytes()
    entries = bodies()
    starts = {min(a for a, _, _ in insns) for _, _, _, _, insns in entries}

    fixes = []
    for path, name, start, end, insns in entries:
        addr, mnemonic, operands = insns[-1]
        if mnemonic != "jr" or "$ra" not in operands:
            continue
        slot = addr + 4
        if slot not in starts:
            continue
        word = rom_word(rom, slot)
        if word is None:
            print(f"{name}: delay slot 0x{slot:08X} outside the recompiled sections")
            continue
        decoded = translate(word)
        if decoded is None:
            print(f"{name}: delay slot 0x{slot:08X} is 0x{word:08X}, "
                  f"not a form this script translates")
            continue
        fixes.append((path, name, start, end, addr, slot, word, decoded))

    by_path = {}
    for fix in fixes:
        by_path.setdefault(fix[0], []).append(fix)

    applied = 0
    for path, group in by_path.items():
        lines = path.read_text().splitlines(keepends=True)
        for _, name, start, end, addr, slot, word, (statement, text) in sorted(
                group, key=lambda f: f[2], reverse=True):
            if any(MARKER in lines[i] for i in range(start, end)):
                continue
            ret = next((i for i in range(end - 1, start, -1)
                        if lines[i].strip() == "return;"), None)
            if ret is None:
                print(f"{name}: no return to insert before")
                continue
            lines.insert(ret, (
                f"    // {MARKER}: a stray ELF symbol at 0x{slot:08X} sits on this\n"
                f"    // jump's delay slot, so the recompiler stopped at the jump and\n"
                f"    // dropped the instruction. On the hardware it runs before the\n"
                f"    // jump takes effect.\n"
                f"    // 0x{slot:08X}: {text}\n"
                f"    {statement}\n"
            ))
            applied += 1
            print(f"{name}: restored 0x{slot:08X} {text}  ({path.name})")
        path.write_text("".join(lines))

    print(f"delay slots restaurados: {applied}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
