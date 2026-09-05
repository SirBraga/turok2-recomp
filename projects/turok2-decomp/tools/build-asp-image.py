#!/usr/bin/env python3
"""Build the logical RSP IMEM image used by Turok 2's audio task.

The aspMain ROM asset occupies 0x1080..0x1F5F.  Its calls at 0x1FB4,
0x1FC8, and 0x1FD8 target the small DMA-helper tail copied from rspboot, not
the rspboot loader at its original ROM-relative layout.  RSPRecomp needs this
final logical IMEM layout rather than either contiguous ROM asset by itself.
"""

from pathlib import Path
import sys


RSPBOOT_HELPERS_ROM = 0xBDF54
RSPBOOT_HELPERS_IMEM = 0x1FB4
RSPBOOT_HELPERS_SIZE = 0x2C
ASP_MAIN_ROM = 0xBE000
IMEM_START = 0x1000
ASP_MAIN_IMEM = 0x1080
ASP_MAIN_SIZE = 0xEE0
IMEM_END = 0x2000


def main() -> int:
    root = Path(__file__).resolve().parent.parent
    rom = Path(sys.argv[1]) if len(sys.argv) > 1 else root / "baserom.us.z64"
    output = Path(sys.argv[2]) if len(sys.argv) > 2 else root / "rsp" / "aspMain.imem.bin"
    data = rom.read_bytes()

    if len(data) < ASP_MAIN_ROM + ASP_MAIN_SIZE:
        raise SystemExit(f"ROM is too small for Turok 2 US audio assets: {rom}")

    image = bytearray(IMEM_END - IMEM_START)
    main_dest = ASP_MAIN_IMEM - IMEM_START
    image[main_dest:main_dest + ASP_MAIN_SIZE] = data[
        ASP_MAIN_ROM:ASP_MAIN_ROM + ASP_MAIN_SIZE
    ]

    helpers_dest = RSPBOOT_HELPERS_IMEM - IMEM_START
    image[helpers_dest:helpers_dest + RSPBOOT_HELPERS_SIZE] = data[
        RSPBOOT_HELPERS_ROM:RSPBOOT_HELPERS_ROM + RSPBOOT_HELPERS_SIZE
    ]

    if len(image) != 0x1000 or not any(
        image[helpers_dest:helpers_dest + RSPBOOT_HELPERS_SIZE]
    ):
        raise SystemExit("Invalid composed aspMain/rspboot IMEM image")

    output.parent.mkdir(parents=True, exist_ok=True)
    if not output.exists() or output.read_bytes() != image:
        output.write_bytes(image)
    print(f"wrote {len(image):#x} bytes: {output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
