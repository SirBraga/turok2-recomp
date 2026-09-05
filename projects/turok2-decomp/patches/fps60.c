#include "patches.h"

// Zelda-style N64 C patch. Live path is src/patches/native_60.cpp + toml hooks.
// Unique 60 Hz Update/Draw; increment stays 15/gRefreshRate (0.25) so cinema
// currentTime (seconds) does not speed. RT64 interpolation stays off.

RECOMP_HOOK(func_00287ABC) void turok2_native_60_after_ticks(void) {
    gNextTicks = 1;
}

RECOMP_HOOK_RETURN(func_00287ABC) void turok2_native_60_lock_increment(void) {
    if (gRefreshRate > 1.0f) {
        gFrameIncrement = 15.0f / gRefreshRate;
    }
}

RECOMP_HOOK(func_00288C80) void turok2_retrace_triple_buffer_guard(void) {
    // Live host hook zeros $v0 (loaded count) when count <= 1 so Retrace
    // skips Update. Cinema uses the same guard so it does not double-Update.
    (void)gDisplayListCount;
}

// Display-list injection lives on the host (RT64Context::send_dl). Unique
// source is 60 / gNextTicks; presentation is 60 or 120 from the panel.
