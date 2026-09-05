#!/usr/bin/env python3
"""Turn native C compiler missing-label errors into N64Recomp size overrides.

N64Recomp can successfully emit a file even when an ELF function boundary is
too short or too long.  Clang then diagnoses the consequence precisely: a
``goto`` names a label that was not emitted in that C function.  This tool
maps that diagnostic back to the guest function and updates either
``function_sizes`` or an existing ``manual_funcs`` entry.

The end is selected conservatively.  If the generated body already passed a
``jr ra`` before the bad goto, the ELF symbol swept into the following body,
so it is shortened to that return.  Otherwise it is extended through the
first return following the missing target.

Usage:
    python tools/compile_feedback.py compile-c.log
    python tools/compile_feedback.py compile-c.log --write
"""

import argparse
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ROM = ROOT / "baserom.us.z64"
CONFIG = ROOT / "turok2.us.toml"

ERROR = re.compile(
    r"(RecompiledFuncs/[^:]+):(\d+):\d+: error: use of undeclared label '([^']+)'"
)
FUNC = re.compile(r"RECOMP_FUNC void (\S+)\(")
VRAM = re.compile(r"// 0x([0-9A-Fa-f]{8}):")


def address_of(name):
    match = re.search(r"([0-9A-Fa-f]{8})$", name)
    return int(match.group(1), 16) if match else None


def complaints(log_path):
    result = {}
    for line in log_path.read_text(errors="replace").splitlines():
        match = ERROR.match(line)
        if not match:
            continue
        source = ROOT / match.group(1)
        line_number = int(match.group(2))
        label = match.group(3)
        lines = source.read_text(errors="replace").splitlines()
        function = None
        instruction = None
        for source_line in lines[:line_number]:
            func_match = FUNC.match(source_line)
            if func_match:
                function = func_match.group(1)
            address_match = VRAM.search(source_line)
            if address_match:
                instruction = int(address_match.group(1), 16)
        if function is None or instruction is None:
            continue
        if label.startswith("L_"):
            needed = int(label[2:], 16)
        elif label.startswith("after_"):
            # A link-return label belongs immediately after the jal and its
            # delay slot.
            needed = instruction + 8
        else:
            continue
        entry = result.setdefault(function, {"needed": needed, "errors": []})
        entry["needed"] = max(entry["needed"], needed)
        entry["errors"].append(instruction)
    return result


def choose_sizes(items):
    sys.path.insert(0, str(ROOT / "tools"))
    from function_seed import load_code_segments, vram_to_rom

    segments = load_code_segments()
    rom = ROM.read_bytes()
    selected = {}
    for name, details in items.items():
        start = address_of(name)
        start_rom = vram_to_rom(segments, start)
        needed_rom = vram_to_rom(segments, details["needed"])
        if start_rom is None or needed_rom is None:
            print(f"skip {name}: address is outside a code segment")
            continue

        first_end = None
        for offset in range(0, 0x10000, 4):
            if start_rom + offset + 8 > len(rom):
                break
            word = struct.unpack_from(">I", rom, start_rom + offset)[0]
            if word == 0x03E00008:  # jr ra; include its delay slot
                first_end = start + offset + 8
                break

        first_error = min(details["errors"])
        if first_end is not None and first_error >= first_end:
            end = first_end
            reason = "shorten"
        else:
            end = None
            for offset in range(0, 0x10000, 4):
                if needed_rom + offset + 8 > len(rom):
                    break
                word = struct.unpack_from(">I", rom, needed_rom + offset)[0]
                if word == 0x03E00008:
                    end = details["needed"] + offset + 8
                    break
            reason = "extend"

        if end is None or end <= start:
            print(f"skip {name}: no return found after 0x{details['needed']:08X}")
            continue
        selected[name] = end - start
        print(
            f"{reason:7} {name:<24} size=0x{end - start:X} "
            f"(need 0x{details['needed']:08X}, end 0x{end:08X})"
        )
    return selected


def update_config(sizes):
    text = CONFIG.read_text()
    manual_names = set(re.findall(r'\{ name = "(entry_[^"]+)"', text))

    # Update existing manual entries in place.
    for name, size in sizes.items():
        if name not in manual_names:
            continue
        pattern = re.compile(
            rf'(\{{ name = "{re.escape(name)}", section = "[^"]+", '
            rf'vram = 0x[0-9A-Fa-f]+, size = )\d+( \}})'
        )
        text, count = pattern.subn(rf"\g<1>{size}\g<2>", text, count=1)
        if count != 1:
            raise RuntimeError(f"could not update manual function {name}")

    # Merge ELF function overrides with the existing function_sizes block.
    block_match = re.search(r"function_sizes = \[(.*?)\n\]", text, re.S)
    existing = {}
    if block_match:
        for name, size in re.findall(
            r'\{ name = "([^"]+)", size = (0x[0-9A-Fa-f]+|\d+) \}',
            block_match.group(1),
        ):
            existing[name] = int(size, 0)
    existing.update({name: size for name, size in sizes.items() if name.startswith("func_")})
    entries = "\n".join(
        f'    {{ name = "{name}", size = 0x{size:X} }},'
        for name, size in sorted(existing.items(), key=lambda item: address_of(item[0]) or 0)
    )
    replacement = f"function_sizes = [\n{entries}\n]"
    if block_match:
        text = text[:block_match.start()] + replacement + text[block_match.end():]
    else:
        marker = "use_absolute_symbols = true\n"
        text = text.replace(marker, marker + "\n" + replacement + "\n", 1)
    CONFIG.write_text(text)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("log", type=Path)
    parser.add_argument("--write", action="store_true")
    args = parser.parse_args()
    sizes = choose_sizes(complaints(args.log))
    print(f"\nsize corrections: {len(sizes)}")
    if args.write:
        update_config(sizes)
        print(f"updated: {CONFIG}")


if __name__ == "__main__":
    main()
