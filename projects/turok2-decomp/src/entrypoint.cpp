#include <cstdio>
#include "funcs.h"
#include "librecomp/game.hpp"
#include "librecomp/overlays.hpp"
#include "crash_diagnostics.h"

namespace {
void load_virtual_region(uint8_t* rdram, uint32_t rom, uint32_t ram, uint32_t size) {
    load_overlays(rom, static_cast<int32_t>(ram), size);
    recomp::do_rom_read(rdram, ram, 0x10000000u + rom, size);
}
}

// Turok 2 runs with the COP0 Status FR bit set, so its odd single precision
// registers ($f1, $f3, ...) are independent rather than aliases of the upper half
// of the preceding even register. The recompiler relies on that: it emits
// ctx->f_odd[(n - 1) * 2] for loads and moves of an odd register but ctx->fN.fl
// for arithmetic, and those only refer to the same storage when f_odd points at
// f1, which is the FR = 1 layout. That is also what CHECK_FR asserts, though the
// assert is compiled out in optimized builds.
//
// The boot stub that would set Status is deliberately not recompiled (see the
// comment in turok2.us.toml), so nothing ever raised FR and every odd register
// load was landing in the wrong slot. Reads then returned zero, which turned the
// frame delta at 0x800B6D28 into inf or NaN and left the game parked on a black
// screen. Raise the bit here, standing in for the boot code, and on every thread
// the game creates since each one gets a fresh context.
namespace {
void turok2_enable_fr_bit(recomp_context* ctx) {
    constexpr uint32_t status_fr = 0x04000000u;
    cop0_status_write(ctx, ctx->status_reg | status_fr);
}
}

extern "C" void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    turok2_enable_fr_bit(ctx);

    // boot_main normally sets this before installing the engine TLB mapping.
    ctx->r29 = static_cast<gpr>(static_cast<int64_t>(static_cast<int32_t>(0x803EFFC0u)));
    entry_0028D380(rdram, ctx);
}

void turok2_on_thread_create(uint8_t* rdram, recomp_context* ctx) {
    turok2_enable_fr_bit(ctx);
    turok2_diag_capture(rdram, ctx, 0, 0);
}

gpr get_entrypoint_address() {
    // IPL3 places the initial 1 MiB at physical RDRAM 0x400. Turok then
    // aliases its code through a TLB mapping at 0x00200400.
    return static_cast<gpr>(static_cast<int64_t>(static_cast<int32_t>(0x80000400u)));
}

// The engine's useg banks are kept resident instead of being paged in by the
// game's VMASM/TLB code. Flattening them this way puts them at RDRAM offsets that
// fall inside the game's own heap: entry_00202130 clears 0x8014A000 through
// 0x80780000, which covers both 0x00200400 and 0x00400000. On real hardware the
// banks live in useg addresses that the TLB maps to physical pages outside that
// range, so the clear does not touch them.
//
// Loading them once before the game starts is therefore not enough, because the
// heap clear runs afterwards as the first thing func_00286674 does. Keep the load
// in one place and repeat it once the clear is done.
void turok2_on_init(uint8_t* rdram, recomp_context*) {
    // Mirror the IPL3 payload into Turok's useg alias, replacing the boot TLB.
    load_virtual_region(rdram, 0x00001000, 0x00200400, 0x00100000);

    // Replace VMASM/TLB paging by keeping both non-overlapping banks resident.
    // recomp_rdram_offset relocates 0x00400000-0x00900000 to 0x00B00000 so the
    // heap clear at 0x8014A000-0x80780000 cannot wipe them. The audio ctl/tbl
    // window (type 3 at func_0028EC54, typically 0x004B0000) is paged in later
    // by turok2_patch_page_useg — that handler only reserves the useg VA.
    load_virtual_region(rdram, 0x0014A000, 0x00400000, 0x0003C000);
    load_virtual_region(rdram, 0x00186000, 0x0043C000, 0x00039A00);
}
