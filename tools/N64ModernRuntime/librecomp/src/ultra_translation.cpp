#include <cstdio>
#include <cstdlib>
#include <memory>
#include <ultramodern/ultra64.h>
#include <ultramodern/ultramodern.hpp>
#include "recomp.h"

static bool turok2_runtime_diagnostics() {
    static const bool enabled = std::getenv("TUROK2_RUNTIME_DIAGNOSTICS") != nullptr;
    return enabled;
}

#if RECOMP_QUEUE_WATCH
#include <execinfo.h>
#include <cstdlib>
#include <mutex>
#include <cstring>

// Storage for the frame watch declared in recomp.h. These must live in exactly
// one translation unit so every recompiled function, spread across the
// RecompiledFuncs files, shares the same shadow state.
extern "C" {
// Aimed at the two floats that gate Turok 2's opening sequence in
// func_0028917C: the per-frame delta at 0x800B6D28 and the countdown at
// 0x8011AD40. The delta starts as 1.0 and then becomes inf, which turns the
// countdown into NaN so it can never expire.
// Aimed at the TLB-paged .virtual banks that turok2_on_init makes resident at
// 0x00400000 and 0x0043C000. They contain the engine's vtables and are loaded
// correctly, then wiped to zero before the opening sequence dereferences them.
uint32_t recomp_qwatch_enabled = 1;
uint32_t recomp_qwatch_target[2] = { 0x0043B738u, 0x00460000u };
int32_t recomp_qwatch_last[2] = { 0, 0 };
int32_t recomp_qwatch_reports = 0;
}

// sp as recorded by recomp_qwatch_arm_frame, used as the reference for the
// balance check below.
static uint32_t qwatch_frame_sp = 0;

extern "C" void recomp_qwatch_arm_frame(uint8_t* rdram, uint32_t sp) {
    const uint32_t rdram_mask = 0x007FFFFFU;
    recomp_qwatch_target[0] = (sp + 0x40U) & rdram_mask;
    recomp_qwatch_target[1] = (sp + 0x44U) & rdram_mask;
    recomp_qwatch_last[0] = *(const int32_t*)(rdram + recomp_qwatch_target[0]);
    recomp_qwatch_last[1] = *(const int32_t*)(rdram + recomp_qwatch_target[1]);
    recomp_qwatch_reports = 0;
    recomp_qwatch_enabled = 1;
    qwatch_frame_sp = sp;

    fprintf(stderr, "\n[qwatch:arm] frame sp=%08X watching %08X(saved $s2)=%08X and %08X(saved $s3)=%08X\n",
        sp, sp + 0x40U, recomp_qwatch_last[0], sp + 0x44U, recomp_qwatch_last[1]);
    fflush(stderr);
}

extern "C" void recomp_qwatch_disarm(void) {
    recomp_qwatch_enabled = 0;
    fprintf(stderr, "[qwatch:disarm]\n");
    fflush(stderr);
}

extern "C" void recomp_qwatch_check_sp(const char* after, uint32_t sp) {
    static std::mutex sp_mutex;
    std::lock_guard<std::mutex> lock{ sp_mutex };

    if (qwatch_frame_sp == 0 || !recomp_qwatch_enabled) {
        return;
    }

    static bool already_reported = false;
    static uint32_t lines = 0;

    if (sp == qwatch_frame_sp) {
        if (lines++ < 120) {
            fprintf(stderr, "[qwatch:sp] ok    after %-22s sp=%08X\n", after, sp);
            fflush(stderr);
        }
        return;
    }

    if (!already_reported) {
        already_reported = true;
        fprintf(stderr, "\n[qwatch:sp] *** UNBALANCED after %s: sp=%08X (expected %08X, leaked 0x%X) ***\n\n",
            after, sp, qwatch_frame_sp, qwatch_frame_sp - sp);
        fflush(stderr);
    }
}

extern "C" void recomp_qwatch_note_base(uint32_t base) {
    static std::mutex base_mutex;
    std::lock_guard<std::mutex> lock{ base_mutex };

    static uint32_t calls = 0;
    if (calls++ >= 16) {
        return;
    }

    // func_002888BC derives its object at base + 0x22C00, and func_0042FBA4
    // clears an array of 8 entries of 0x54 bytes starting at +0xF20 of that.
    const uint32_t object = base + 0x22C00U;
    const uint32_t clear_start = object + 0xF20U;
    const uint32_t clear_end = clear_start + 8U * 0x54U;
    const bool clobbers = clear_end > 0x8011AD90U;

    fprintf(stderr, "[qwatch:base] func_002888BC base=%08X object=%08X clears=%08X..%08X %s\n",
        base, object, clear_start, clear_end,
        clobbers ? "<<< REACHES INTO SCHEDULER 0x8011AD90" : "(clear of scheduler)");
    fflush(stderr);
}

extern "C" void recomp_qwatch_note_ptr(uint32_t tag, uint32_t value) {
    static std::mutex ptr_mutex;
    std::lock_guard<std::mutex> lock{ ptr_mutex };

    static uint32_t calls = 0;
    if (calls++ >= 40) {
        return;
    }

    // 0x800F6CB0 is the pointer func_00288860 loads at 0x002888A0 and hands to
    // func_00286674. Any frame reporting something else has altered it.
    const uint32_t expected = 0x800F6CB0U;
    fprintf(stderr, "[qwatch:ptr] func_%08X a0=%08X%s\n", tag, value,
        value == expected ? "" : "   <<< ALTERED");
    fflush(stderr);
}

extern "C" void recomp_qwatch_report(uint32_t vaddr, uint32_t offset, int32_t old_value, int32_t new_value, const char* kind) {
    // Several game threads run recompiled code, so serialize the reports to keep
    // each backtrace intact.
    static std::mutex report_mutex;
    std::lock_guard<std::mutex> lock{ report_mutex };

    if (recomp_qwatch_reports >= RECOMP_QWATCH_MAX_REPORTS) {
        return;
    }
    recomp_qwatch_reports++;

    const char* slot = (offset == recomp_qwatch_target[0]) ? "vtable slot 0x0043B738"
                                                          : "code word 0x00460000";

    // These slots hold floats, so show the bits interpreted both ways.
    float old_f, new_f;
    memcpy(&old_f, &old_value, sizeof(old_f));
    memcpy(&new_f, &new_value, sizeof(new_f));

    if (kind[0] == 'd') {
        fprintf(stderr, "\n[qwatch:direct] %s (vaddr %08X) currently %08X (%g)\n",
            slot, vaddr, (uint32_t)old_value, old_f);
    }
    else {
        fprintf(stderr, "\n[qwatch:poll] %s changed %08X (%g) -> %08X (%g)\n",
            slot, (uint32_t)old_value, old_f, (uint32_t)new_value, new_f);
    }

    void* frames[24];
    const int frame_count = backtrace(frames, 24);
    char** symbols = backtrace_symbols(frames, frame_count);

    if (symbols != nullptr) {
        // Skip frame 0, which is this reporting function itself.
        for (int index = 1; index < frame_count; index++) {
            fprintf(stderr, "[qwatch]   #%02d %s\n", index - 1, symbols[index]);
        }
        free(symbols);
    }

    fflush(stderr);
}
#endif

extern "C" void osInitialize_recomp(uint8_t * rdram, recomp_context * ctx) {
    osInitialize();
}

extern "C" void __osInitialize_common_recomp(uint8_t * rdram, recomp_context * ctx) {
    osInitialize();
}

extern "C" void osCreateThread_recomp(uint8_t* rdram, recomp_context* ctx) {
    // The game thread's argument is the base pointer that func_002888BC turns
    // into the object cleared by func_0042FBA4, so log it to check whether that
    // object can fit below the scheduler at 0x8011AD90.
    if (turok2_runtime_diagnostics()) {
        fprintf(stderr, "[thread:create] thread=%08X id=%d entry=%08X arg=%08X stack=%08X pri=%d\n",
            static_cast<uint32_t>(ctx->r4), static_cast<int32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r7),
            static_cast<uint32_t>(MEM_W(0x10, ctx->r29)),
            static_cast<int32_t>(MEM_W(0x14, ctx->r29)));
    }

    osCreateThread(rdram, (int32_t)ctx->r4, (OSId)ctx->r5, (int32_t)ctx->r6, (int32_t)ctx->r7,
        (int32_t)MEM_W(0x10, ctx->r29), (OSPri)MEM_W(0x14, ctx->r29));
}

extern "C" void osStartThread_recomp(uint8_t* rdram, recomp_context* ctx) {
    osStartThread(rdram, (int32_t)ctx->r4);
}

extern "C" void osStopThread_recomp(uint8_t * rdram, recomp_context * ctx) {
    osStopThread(rdram, (int32_t)ctx->r4);
}

extern "C" void osDestroyThread_recomp(uint8_t * rdram, recomp_context * ctx) {
    osDestroyThread(rdram, (int32_t)ctx->r4);
}

extern "C" void osYieldThread_recomp(uint8_t * rdram, recomp_context * ctx) {
    assert(false);
    // osYieldThread(rdram);
}

extern "C" void osSetThreadPri_recomp(uint8_t* rdram, recomp_context* ctx) {
    osSetThreadPri(rdram, (int32_t)ctx->r4, (OSPri)ctx->r5);
}

extern "C" void osGetThreadPri_recomp(uint8_t * rdram, recomp_context * ctx) {
    ctx->r2 = osGetThreadPri(rdram, (int32_t)ctx->r4);
}

extern "C" void osGetThreadId_recomp(uint8_t * rdram, recomp_context * ctx) {
    ctx->r2 = osGetThreadId(rdram, (int32_t)ctx->r4);
}

extern "C" void osCreateMesgQueue_recomp(uint8_t* rdram, recomp_context* ctx) {
    static uint32_t create_logs = 0;
    if (turok2_runtime_diagnostics() && create_logs++ < 128) {
        fprintf(stderr, "[mesg:create] q=%08X buf=%08X count=%u ra=%08X\n",
            static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r31));
    }
    osCreateMesgQueue(rdram, (int32_t)ctx->r4, (int32_t)ctx->r5, (s32)ctx->r6);
}

extern "C" void osRecvMesg_recomp(uint8_t* rdram, recomp_context* ctx) {
    static uint32_t recv_logs = 0;
    if (turok2_runtime_diagnostics() && recv_logs++ < 256) {
        fprintf(stderr, "[mesg:recv] q=%08X dst=%08X flags=%u ra=%08X\n",
            static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r31));
    }
    const uint32_t queue = static_cast<uint32_t>(ctx->r4);
    const uint32_t destination = static_cast<uint32_t>(ctx->r5);
    ctx->r2 = osRecvMesg(rdram, (int32_t)queue, (int32_t)destination, (s32)ctx->r6);
    if (turok2_runtime_diagnostics() && queue == 0x8011AD28u) {
        // Sample the state machine over time rather than only during the first
        // frames, so it is visible whether the game is advancing, cycling or
        // parked on a single state.
        static uint32_t main_queue_recvs = 0;
        const uint32_t recv_index = main_queue_recvs++;
        if (recv_index < 24 || (recv_index % 120) == 0) {
            const uint32_t message = destination != 0 ? MEM_W(0, destination) : 0;
            const uint32_t type = message != 0 ? static_cast<uint16_t>(MEM_H(0, message)) : 0;
            const uint32_t game = static_cast<uint32_t>(ctx->r18);
            const uint32_t state = game != 0 ? MEM_W(0x23FD8, game) : 0;
            const uint32_t target_state = game != 0 ? MEM_W(0x23FDC, game) : 0;
            const uint32_t transition_count = MEM_W(0x8011B110u, 0);
            const uint32_t transition_flag = game != 0 ? MEM_W(0x23FF0, game) : 0;
            const uint32_t handler = state < 32 ? MEM_W(0x800B6D7Cu + state * 12u, 0) : 0;
            // func_0028917C, the state 0 handler, gates the opening sequence on a
            // float countdown at 0x8011AD40 that it decrements by the frame delta
            // at 0x800B6D28. If the delta is zero the countdown never expires and
            // the game draws a black frame forever.
            auto read_float = [&](uint32_t address) {
                const int32_t bits = MEM_W(address, 0);
                float value;
                memcpy(&value, &bits, sizeof(value));
                return value;
            };
            const float countdown = read_float(0x8011AD40u);
            const float frame_delta = read_float(0x800B6D28u);
            const uint32_t gate = static_cast<uint32_t>(MEM_W(0x800B6D64u, 0));
            const uint32_t opening_started = static_cast<uint32_t>(MEM_W(0x8011B118u, 0));
            const uint32_t scene = static_cast<uint32_t>(MEM_W(0x800C1BB0u, 0));
            const uint32_t cinemas = scene != 0 ? static_cast<uint32_t>(MEM_W(0x38u, scene)) : 0;
            const uint32_t scene_mem_entry = scene != 0 ? static_cast<uint32_t>(MEM_W(0xDCu, scene)) : 0;
            const uint32_t input_buttons = static_cast<uint32_t>(MEM_W(0x800F5D2Cu, 0));
            const uint32_t fade_status = game != 0
                ? static_cast<uint8_t>(MEM_B(0x23FE1u, game)) : 0;
            const float mode_time = game != 0 ? read_float(game + 0x23FD0u) : 0.0f;

            // func_00287ABC computes the delta at 0x800B6D28 as
            // (ticks * 15) / divisor, where the divisor at 0x8011B0A4 is seeded
            // by func_00286674 at 0x002866FC from one of two rodata constants,
            // selected by osTvType at 0x80000300. A zero divisor yields inf.
            static bool printed_divisor = false;
            if (!printed_divisor) {
                printed_divisor = true;
                fprintf(stderr, "[timing] osTvType=%d  pal_const(0x800A9D5C)=%g  ntsc_const(0x800A9D60)=%g"
                    "  divisor(0x8011B0A4)=%g  ticks(0x8011AD10)=%d\n",
                    static_cast<int32_t>(MEM_W(0x80000300u, 0)),
                    read_float(0x800A9D5Cu), read_float(0x800A9D60u),
                    read_float(0x8011B0A4u),
                    static_cast<int32_t>(MEM_W(0x8011AD10u, 0)));
                fflush(stderr);
            }

            fprintf(stderr, "[mesg:main-result] msg=%08X type=%u game=%08X state=%u target=%u count=%u flag=%u handler=%08X result=%d"
                " | gate=%u countdown=%.6f delta=%.6f opening=%u mode_time=%.6f"
                " fade=%u input=%08X scene=%08X cinemas=%08X scene_dc=%08X\n",
                message, type, game, state, target_state, transition_count,
                transition_flag, handler, static_cast<int32_t>(ctx->r2),
                gate, countdown, frame_delta, opening_started, mode_time,
                fade_status, input_buttons, scene, cinemas, scene_mem_entry);
        }
    }
}

extern "C" void osSendMesg_recomp(uint8_t* rdram, recomp_context* ctx) {
    static uint32_t send_logs = 0;
    if (turok2_runtime_diagnostics() && send_logs++ < 256) {
        fprintf(stderr, "[mesg:send] q=%08X msg=%08X flags=%u ra=%08X\n",
            static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r31));
    }
    // A Turok 2 scheduler listener allocated on an auxiliary thread's stack
    // can remain linked after its queue field has been cleared. The following
    // listener is still valid, so do not let this stale node turn into a host
    // access outside RDRAM.
    if (static_cast<uint32_t>(ctx->r4) == 0) {
        static uint32_t null_queue_sends = 0;
        if (null_queue_sends++ < 16) {
            fprintf(stderr, "[mesg] ignored send to null queue, msg=%08X flags=%u\n",
                static_cast<uint32_t>(ctx->r5), static_cast<uint32_t>(ctx->r6));
        }
        ctx->r2 = static_cast<int32_t>(-1);
        return;
    }

    ctx->r2 = osSendMesg(rdram, (int32_t)ctx->r4, (OSMesg)ctx->r5, (s32)ctx->r6);
}

extern "C" void osJamMesg_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = osJamMesg(rdram, (int32_t)ctx->r4, (OSMesg)ctx->r5, (s32)ctx->r6);
}

extern "C" void osSetEventMesg_recomp(uint8_t* rdram, recomp_context* ctx) {
    if (turok2_runtime_diagnostics()) {
        fprintf(stderr, "[mesg:event] event=%u q=%08X msg=%08X ra=%08X\n",
            static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r31));
    }
    osSetEventMesg(rdram, (OSEvent)ctx->r4, (int32_t)ctx->r5, (OSMesg)ctx->r6);
}

extern "C" void osViSetEvent_recomp(uint8_t * rdram, recomp_context * ctx) {
    if (turok2_runtime_diagnostics()) {
        fprintf(stderr, "[mesg:vi-event] q=%08X msg=%08X retraces=%u ra=%08X\n",
            static_cast<uint32_t>(ctx->r4), static_cast<uint32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6), static_cast<uint32_t>(ctx->r31));
    }
    osViSetEvent(rdram, (int32_t)ctx->r4, (OSMesg)ctx->r5, (u32)ctx->r6);
}

extern "C" void osGetCount_recomp(uint8_t * rdram, recomp_context * ctx) {
    ctx->r2 = osGetCount();
}

extern "C" void osSetCount_recomp(uint8_t * rdram, recomp_context * ctx) {
    osSetCount(ctx->r4);
}

extern "C" void osGetTime_recomp(uint8_t * rdram, recomp_context * ctx) {
    uint64_t total_count = osGetTime();
    ctx->r2 = (int32_t)(total_count >> 32);
    ctx->r3 = (int32_t)(total_count >> 0);
}

extern "C" void osSetTime_recomp(uint8_t * rdram, recomp_context * ctx) {
    uint64_t t = ((uint64_t)(ctx->r4) << 32) | ((ctx->r5) & 0xFFFFFFFFu);
    osSetTime(t);
}

extern "C" void osSetTimer_recomp(uint8_t * rdram, recomp_context * ctx) {
    uint64_t countdown = ((uint64_t)(ctx->r6) << 32) | ((ctx->r7) & 0xFFFFFFFFu);
    uint64_t interval = load_doubleword(rdram, ctx->r29, 0x10);
    ctx->r2 = osSetTimer(rdram, (int32_t)ctx->r4, countdown, interval, (int32_t)MEM_W(0x18, ctx->r29), (OSMesg)MEM_W(0x1C, ctx->r29));
}

extern "C" void osStopTimer_recomp(uint8_t * rdram, recomp_context * ctx) {
    ctx->r2 = osStopTimer(rdram, (int32_t)ctx->r4);
}

extern "C" void osVirtualToPhysical_recomp(uint8_t * rdram, recomp_context * ctx) {
    ctx->r2 = osVirtualToPhysical((int32_t)ctx->r4);
}

extern "C" void osInvalDCache_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void osInvalICache_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void osWritebackDCache_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void osWritebackDCacheAll_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void osSetIntMask_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void __osDisableInt_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void __osRestoreInt_recomp(uint8_t * rdram, recomp_context * ctx) {
    ;
}

extern "C" void __osSetFpcCsr_recomp(uint8_t * rdram, recomp_context * ctx) {
    ctx->r2 = 0;
}

// For the Mario Party games (not working)
//extern "C" void longjmp_recomp(uint8_t * rdram, recomp_context * ctx) {
//    RecompJmpBuf* buf = TO_PTR(RecompJmpBuf, ctx->r4);
//
//    // Check if this is a buffer that was set up with setjmp
//    if (buf->magic == SETJMP_MAGIC) {
//        // If so, longjmp to it
//        // Setjmp/longjmp does not work across threads, so verify that this buffer was made by this thread
//        assert(buf->owner == ultramodern::this_thread());
//        longjmp(buf->storage->buffer, ctx->r5);
//    } else {
//        // Otherwise, check if it was one built manually by the game with $ra pointing to a function
//        gpr sp = MEM_W(0, ctx->r4);
//        gpr ra = MEM_W(4, ctx->r4);
//        ctx->r29 = sp;
//        recomp_func_t* target = LOOKUP_FUNC(ra);
//        if (target == nullptr) {
//            fprintf(stderr, "Failed to find function for manual longjmp\n");
//            std::quick_exit(EXIT_FAILURE);
//        }
//        target(rdram, ctx);
//
//        // TODO kill this thread if the target function returns
//        assert(false);
//    }
//}
//
//#undef setjmp_recomp
//extern "C" void setjmp_recomp(uint8_t * rdram, recomp_context * ctx) {
//    fprintf(stderr, "Program called setjmp_recomp\n");
//    std::quick_exit(EXIT_FAILURE);
//}
//
//extern "C" int32_t osGetThreadEx(void) {
//    return ultramodern::this_thread();
//}
