#include "recomp.h"
#include <cstdio>
#include <string>
#include <ultramodern/ultra64.h>
#include <ultramodern/ultramodern.hpp>

#define VI_NTSC_CLOCK 48681812

extern "C" void osAiSetFrequency_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint32_t freq = ctx->r4;
    // This makes actual audio frequency more accurate to console, but may not be desirable
    //uint32_t dacRate = (uint32_t)(((float)VI_NTSC_CLOCK / freq) + 0.5f);
    //freq = VI_NTSC_CLOCK / dacRate;
    ctx->r2 = freq;
    ultramodern::set_audio_frequency(freq);
}

extern "C" void osAiSetNextBuffer_recomp(uint8_t* rdram, recomp_context* ctx) {
    ultramodern::queue_audio_buffer(rdram, ctx->r4, ctx->r5);
    ctx->r2 = 0;
}

extern "C" void osAiGetLength_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = ultramodern::get_remaining_audio_bytes();
}

extern "C" void osAiGetStatus_recomp(uint8_t* rdram, recomp_context* ctx) {
    // Hardware AI has two DMA slots. FIFO_FULL means both are occupied, not
    // that a single buffer is playing. Reporting full as soon as any sample
    // is queued forced the mixer to wait for an underrun (clicks / slow gaps).
    // ~0x800 bytes is a bit more than one 22050 Hz VI after ultramodern's
    // 0.5-VI remaining adjustment, so a second buffer can be queued.
    (void)rdram;
    ctx->r2 = ultramodern::get_remaining_audio_bytes() > 0x800 ? 0x80000000 : 0;
}
