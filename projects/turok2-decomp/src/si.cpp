// Minimal serial interface (SI) emulation for Turok 2.
//
// The runtime normally never needs this. librecomp reimplements the public
// controller API natively (osContInit, osContStartQuery, osContStartReadData,
// ...), so the low level SI entry points are listed in N64Recomp's
// ignored_funcs and no native implementation exists for them.
//
// That only holds when the ELF names those symbols. Ours does name the
// osCont* family, which is why controllers are detected, but the controller
// pak / rumble helpers kept generic func_* names. They are therefore
// recompiled as real code and run libultra's own implementation, which drives
// the SI registers directly:
//
//   func_00299A40:  __osSiGetAccess()
//                   __osPackRamReadData(...)          -> builds a 64 byte
//                                                        command block in
//                                                        __osContPifRam
//                   __osSiRawStartDma(OS_WRITE, pif)
//                   osRecvMesg(siEventQueue, BLOCK)   <-- hung here
//                   __osSiRawStartDma(OS_READ, pif)
//                   osRecvMesg(siEventQueue, BLOCK)
//                   err = (pif[2] & 0xC0) >> 4        -> CHNL_ERR_MASK
//
// Nothing raises the SI interrupt, so the first osRecvMesg blocked forever and
// took the game thread with it. func_00427F80 hangs the same way.
//
// Emulating the PIF properly is far more than this game needs: it only wants to
// learn that no controller pak is plugged in. So complete the transfer
// synchronously and report "no device" on every channel, which is what a
// console with empty expansion slots does. func_00299A40 then returns
// PFS_ERR_NOPACK (1), matching what librecomp's own osPfsInitPak stub returns.

#include <cstdint>
#include <cstdio>

#include "recomp.h"
#include "ultramodern/ultramodern.hpp"

namespace {

// libultra's OS_READ / OS_WRITE, the direction argument in $a0.
constexpr int32_t os_read = 0;

// The PIF reports per channel errors in the top two bits of the rxsize byte;
// libultra reads them as CHNL_ERR(fmt) == (rxsize & CHNL_ERR_MASK) >> 4.
// 0x80 is CONT_NO_RESPONSE_ERROR (8) once shifted, meaning nothing answered.
constexpr uint8_t chnl_err_mask = 0xC0;
constexpr uint8_t chnl_err_no_response = 0x80;

// Joybus framing bytes that carry no command block.
constexpr uint8_t joybus_channel_skip = 0x00;
constexpr uint8_t joybus_channel_reset = 0xFD;
constexpr uint8_t joybus_end = 0xFE;
constexpr uint8_t joybus_padding = 0xFF;

constexpr uint32_t pif_ram_size = 64;

// Walk the command blocks the game staged in PIF RAM and flag each one as
// unanswered. Layout of a block, which the disassembly of func_00299A40
// confirms by masking the byte at index 2:
//
//   [0] 0xFF   padding the PIF skips
//   [1] txsize bytes to send      (low 6 bits)
//   [2] rxsize bytes to receive   (low 6 bits, top 2 bits = error flags)
//   [3] command, then txsize-1 more request bytes, then rxsize reply bytes
void report_no_device(uint8_t* rdram, uint32_t dram_addr) {
    uint32_t offset = 0;

    while (offset + 1 < pif_ram_size) {
        const uint8_t header = MEM_BU(offset, dram_addr);

        if (header == joybus_end) {
            break;
        }

        // A skipped or reset channel occupies a single byte.
        if (header == joybus_padding || header == joybus_channel_skip ||
            header == joybus_channel_reset) {
            offset += 1;
            continue;
        }

        const uint32_t tx_size = header & 0x3Fu;
        const uint8_t rx_byte = MEM_BU(offset + 1, dram_addr);
        const uint32_t rx_size = rx_byte & 0x3Fu;

        MEM_B(offset + 1, dram_addr) =
            (int8_t)((rx_byte & (uint8_t)~chnl_err_mask) | chnl_err_no_response);

        // Skip the header pair plus the request and reply payloads.
        offset += 2 + tx_size + rx_size;
    }
}

int logged_transfers = 0;

}

// func_0029A140: s32 __osSiDeviceBusy(void)
//
//   return (IO_READ(SI_STATUS_REG) & (DMA_BUSY | IO_BUSY)) != 0;
//
// Transfers finish inside __osSiRawStartDma here, so the interface is never
// busy. Answering through the real register would be wrong anyway: reads of
// 0xA4800018 fall outside RDRAM and recomp_rdram_offset masks them down into
// the first bytes of memory.
extern "C" void turok2_si_device_busy(uint8_t*, recomp_context* ctx) {
    ctx->r2 = 0;
}

// func_0029A080: s32 __osSiRawStartDma(s32 direction, void* dramAddr)
//
// The hardware version points SI_DRAM_ADDR at the buffer and kicks off a
// 64 byte RD64B or WR64B burst against PIF RAM, then raises the SI interrupt on
// completion. Reproduce only the observable effects: on the read half fill in
// the channel errors the PIF would have reported, then release the caller's
// osRecvMesg. The OS_WRITE half needs nothing, since the block the game staged
// is already in RDRAM where the read half will find it.
extern "C" void turok2_si_raw_start_dma(uint8_t* rdram, recomp_context* ctx) {
    const int32_t direction = (int32_t)ctx->r4;
    const uint32_t dram_addr = (uint32_t)ctx->r5;

    if (direction == os_read) {
        report_no_device(rdram, dram_addr);
    }

    if (logged_transfers < 40) {
        logged_transfers++;
        std::printf("[si:dma] #%d %s addr=0x%08X block=", logged_transfers,
            direction == os_read ? "read " : "write", dram_addr);
        for (uint32_t i = 0; i < 12; i++) {
            std::printf("%02X ", MEM_BU(i, dram_addr));
        }
        std::printf("\n");
        std::fflush(stdout);
    }

    // Stands in for the SI interrupt that would normally post to the queue
    // registered for OS_EVENT_SI. This mirrors how librecomp's own
    // osContStartQuery / osContStartReadData complete their transfers.
    ultramodern::send_si_message();

    ctx->r2 = 0;
}
