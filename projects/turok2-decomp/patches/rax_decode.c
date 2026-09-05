#include "patches.h"

// Turok 2 CPU RAX decoder — title screen already boots; this is audio.
//
// T3 US (ultra_raxaud / CRAXPlayer):
//   ReadCmpFrame       0x002E0DB8  size 0x18C
//   DecompressFrame    0x002E14DC  size 0x2E4
//   alRaxOpen          0x002E1A34  size 0xBC
//   alRaxDecomp        0x002E1AF0  size 0xA0
//   CRAXPlayer__Update 0x0024A2A0
//
// T2 does not map those VRAM addresses. Engine .text ends ~0x002A53D8.
// Live libultra/libaudio is the copy inside the engine at ROM 0x08AAA0
// → VRAM 0x0028A4A0 (the 0xC3074 blob is a dead duplicate).
//
// SN64 LNK types in the ROM confirm AL_RAX_WAVE / ALRaxLoop / raxWave
// and sample ids RAX_NONE, RAX_ADON_INTRO_*. RSP aspMain already exits
// via break; LOADBUFF sources are zero because this CPU decoder is not
// filling the mix buffers.
//
// Bitstream-heavy (many lbu, zero COP1) cluster in live libaudio — Ghidra
// decompile these first; size-only matches like func_0029815C are false
// (float-heavy, called from gameplay objects):
//   func_0028BB00  size 0x2FC  36 lbu, 16 jal  — likely player/dispatch
//   func_0028BDFC  size 0x2B4  23 lbu
//   func_0028DBAC  size 0x350  19 lbu, 2 jal   — self-contained unpack
//   func_00292640  size 0x204  16 lbu, 1 jal   — compact unpack
//   func_0028B614 / func_0028B7C0 / func_0028B954  — same cluster, 18 lbu each
//   entry_0028A020  — audio/libultra thread entry (boundary, not title)
//
// Ghidra: import baserom.us.z64 with N64LoaderWV, signature file
// tools/turok2.n64sym, then MCP-decompile the cluster.

void turok2_rax_placeholder(void) {
}
