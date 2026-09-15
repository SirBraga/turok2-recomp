#include <thread>
#include <atomic>
#include <chrono>
#include <cinttypes>
#include <variant>
#include <unordered_map>
#include <utility>
#include <mutex>
#include <queue>
#include <cstring>
#include <cstdio>
#include <cstdlib>

#include "blockingconcurrentqueue.h"

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/extensions.h"

#include "ultramodern/rsp.hpp"
#include "ultramodern/renderer_context.hpp"

static ultramodern::events::callbacks_t events_callbacks{};

void ultramodern::events::set_callbacks(const ultramodern::events::callbacks_t& callbacks) {
    events_callbacks = callbacks;
}

struct SpTaskAction {
    OSTask task;
};

struct ScreenUpdateAction {
    ultramodern::renderer::ViRegs regs;
};

struct UpdateConfigAction {
};

struct DummyWorkloadAction {
    int32_t fb_address;
};

using Action = std::variant<SpTaskAction, ScreenUpdateAction, UpdateConfigAction, DummyWorkloadAction>;

struct ViState {
    const OSViMode* mode;
    PTR(void) framebuffer;
    PTR(OSMesg) mq;
    OSMesg msg;
    uint32_t state;
    uint32_t control;
    int retrace_count = 1;
};

#define VI_STATE_BLACK 0x20
#define VI_STATE_REPEATLINE 0x40

static struct {
    struct {
        std::thread thread;
        int cur_state;
        int field;
        ViState states[2];
        ultramodern::renderer::ViRegs regs;
        ultramodern::renderer::ViRegs update_screen_regs;

        ViState* get_next_state() {
            return &states[cur_state ^ 1];
        }
        ViState* get_cur_state() {
            return &states[cur_state];
        }
        void update_vi() {
            ViState* next_state = get_next_state();
            const OSViMode* next_mode = next_state->mode;
            // Some games (including Turok 2) take longer than one host VI tick
            // to install their first mode. Keep the blank startup state until
            // osViSetMode has supplied a valid OSViMode.
            if (next_mode == nullptr) {
                return;
            }
            const OSViCommonRegs* common_regs = &next_mode->comRegs;
            const OSViFieldRegs* field_regs = &next_mode->fldRegs[field];
            PTR(void) framebuffer = osVirtualToPhysical(next_state->framebuffer);
            PTR(void) origin = framebuffer + field_regs->origin;

            // Process the VI state flags.
            uint32_t hStart = common_regs->hStart;
            if (next_state->state & VI_STATE_BLACK) {
                hStart = 0;
            }

            uint32_t yScale = field_regs->yScale;
            if (next_state->state & VI_STATE_REPEATLINE) {
                yScale = 0;
                origin = framebuffer;
            }

            // TODO implement osViFade

            // Update VI registers.
            regs.VI_ORIGIN_REG = origin;
            regs.VI_WIDTH_REG = common_regs->width;
            regs.VI_TIMING_REG = common_regs->burst;
            regs.VI_V_SYNC_REG = common_regs->vSync;
            regs.VI_H_SYNC_REG = common_regs->hSync;
            regs.VI_LEAP_REG = common_regs->leap;
            regs.VI_H_START_REG = hStart;
            regs.VI_V_START_REG = field_regs->vStart; // TODO implement osViExtendVStart
            regs.VI_V_BURST_REG = field_regs->vBurst;
            regs.VI_INTR_REG = field_regs->vIntr;
            regs.VI_X_SCALE_REG = common_regs->xScale; // TODO implement osViSetXScale
            regs.VI_Y_SCALE_REG = yScale; // TODO implement osViSetYScale
            regs.VI_STATUS_REG = next_state->control;
            
            // Swap VI states.
            cur_state ^= 1;
            *get_next_state() = *get_cur_state();
        }
    } vi;
    struct {
        std::thread gfx_thread;
        std::thread task_thread;
        PTR(OSMesgQueue) mq = NULLPTR;
        OSMesg msg = (OSMesg)0;
    } sp;
    struct {
        PTR(OSMesgQueue) mq = NULLPTR;
        OSMesg msg = (OSMesg)0;
    } dp;
    struct {
        PTR(OSMesgQueue) mq = NULLPTR;
        OSMesg msg = (OSMesg)0;
    } ai;
    struct {
        PTR(OSMesgQueue) mq = NULLPTR;
        OSMesg msg = (OSMesg)0;
    } si;
    struct {
        PTR(OSMesgQueue) mq = NULLPTR;
        OSMesg msg = (OSMesg)0;
    } pi;
    // The same message queue may be used for multiple events, so share a mutex for all of them
    std::mutex message_mutex;
    uint8_t* rdram;
    moodycamel::BlockingConcurrentQueue<Action> action_queue{};
    moodycamel::BlockingConcurrentQueue<OSTask*> sp_task_queue{};
    moodycamel::ConcurrentQueue<OSThread*> deleted_threads{};
} events_context{};

ultramodern::renderer::ViRegs* ultramodern::renderer::get_vi_regs() {
    return &events_context.vi.update_screen_regs;
}

extern "C" void osSetEventMesg(RDRAM_ARG OSEvent event_id, PTR(OSMesgQueue) mq_, OSMesg msg) {
    std::lock_guard lock{ events_context.message_mutex };

    switch (event_id) {
        case OS_EVENT_VI:
            // Some games install their own VI manager with osSetEventMesg
            // instead of osViSetEvent. Keep the registration visible in both
            // buffered VI states so the first retrace can wake that manager.
            for (ViState& state : events_context.vi.states) {
                state.mq = mq_;
                state.msg = msg;
                state.retrace_count = 1;
            }
            break;
        case OS_EVENT_SP:
            events_context.sp.msg = msg;
            events_context.sp.mq = mq_;
            break;
        case OS_EVENT_DP:
            events_context.dp.msg = msg;
            events_context.dp.mq = mq_;
            break;
        case OS_EVENT_AI:
            events_context.ai.msg = msg;
            events_context.ai.mq = mq_;
            break;
        case OS_EVENT_SI:
            events_context.si.msg = msg;
            events_context.si.mq = mq_;
            break;
        case OS_EVENT_PI:
            events_context.pi.msg = msg;
            events_context.pi.mq = mq_;
            break;
    }
}

void ultramodern::pi_dma_complete() {
    std::lock_guard lock{ events_context.message_mutex };
    if (events_context.pi.mq != NULLPTR) {
        ultramodern::enqueue_external_message_src(events_context.pi.mq, events_context.pi.msg,
            false, ultramodern::EventMessageSource::Pi);
    }
}

extern "C" void osViSetEvent(RDRAM_ARG PTR(OSMesgQueue) mq_, OSMesg msg, u32 retrace_count) {
    std::lock_guard lock{ events_context.message_mutex };
    for (ViState& state : events_context.vi.states) {
        state.mq = mq_;
        state.msg = msg;
        state.retrace_count = retrace_count;
    }
}

uint64_t total_vis = 0;

static bool present_after_display_list() {
    static const bool enabled = getenv("TUROK2_PRESENT_AFTER_DL") != nullptr;
    return enabled;
}


extern std::atomic_bool exited;
extern moodycamel::LightweightSemaphore graphics_shutdown_ready;

void set_dummy_vi(bool odd);

extern "C" uint32_t turok2_host_vi_hz(void);

static uint32_t host_vi_hz() {
    return turok2_host_vi_hz();
}

static bool turok2_unique_120() {
    return host_vi_hz() >= 120u;
}

void vi_thread_func() {
    ultramodern::set_native_thread_name("VI Thread");
    // This thread should be prioritized over every other thread in the application, as it's what allows
    // the game to generate new audio and gfx lists.
    ultramodern::set_native_thread_priority(ultramodern::ThreadPriority::Critical);
    using namespace std::chrono_literals;

    int remaining_retraces = 1;

    while (!exited) {
        // Determine the next VI time (more accurate than adding 16ms each VI interrupt).
        // total_vis is in host-VI units. If Graphics → Hz changes 60↔120,
        // rescale so the next wake stays on the current wall time instead
        // of sleeping or bursting by 2×.
        const uint32_t vi_hz = host_vi_hz();
        static uint32_t last_vi_hz = 0;
        if (last_vi_hz != 0 && last_vi_hz != vi_hz && total_vis > 0) {
            total_vis = (total_vis * vi_hz + last_vi_hz / 2) / last_vi_hz;
        }
        last_vi_hz = vi_hz;
        auto next = ultramodern::get_start() + (total_vis * 1000000us) / (vi_hz * ultramodern::get_speed_multiplier());
        //if (next > std::chrono::high_resolution_clock::now()) {
        //    printf("Sleeping for %" PRIu64 " us to get from %" PRIu64 " us to %" PRIu64 " us \n",
        //        (next - std::chrono::high_resolution_clock::now()) / 1us,
        //        (std::chrono::high_resolution_clock::now() - events_context.start) / 1us,
        //        (next - events_context.start) / 1us);
        //} else {
        //    printf("No need to sleep\n");
        //}
        // Detect if there's more than a second to wait and wait a fixed amount instead for the next VI if so, as that usually means the system clock went back in time.
        if (std::chrono::floor<std::chrono::seconds>(next - std::chrono::high_resolution_clock::now()) > 1s) {
            // printf("Skipping the next VI wait\n");
            next = std::chrono::high_resolution_clock::now();
        }
        ultramodern::sleep_until(next);
        auto time_now = ultramodern::time_since_start();
        // Calculate how many VIs have passed
        uint64_t new_total_vis = (time_now * (vi_hz * ultramodern::get_speed_multiplier()) / 1000ms) + 1;
        if (new_total_vis > total_vis + 1) {
            //printf("Skipped % " PRId64 " frames in VI interupt thread!\n", new_total_vis - total_vis - 1);
        }
        total_vis = new_total_vis;

        // Keep the VI uninitialized / blank once the game installs its own mode
        // via osViSetMode. Supplying a 320x240 dummy framebuffer on 0x80700000
        // collides with Turok 2's 480x360 Z-buffer (depth buffer) and causes
        // pink flickering borders and a scaled/zoomed pause menu.
        //
        // Before the game starts nothing owns RDRAM and nothing else drives a
        // present, so without a VI here RT64 never renders and the launcher is
        // an unlit window. Feed the dummy only in that window.
        if (!ultramodern::is_game_started()) {
            set_dummy_vi((total_vis & 1) != 0);
        }

        // Queue a screen update for the graphics thread with the current VI register state.
        // Doing this before the VI update is equivalent to updating the screen after the previous frame's scanout finished.
        if (!present_after_display_list()) {
            events_context.action_queue.enqueue(ScreenUpdateAction{ events_context.vi.regs });
        }

        // Update VI registers and swap VI modes. osViSetMode writes the same
        // ViState under message_mutex; without the lock a torn/null OSViMode*
        // reads as host 0x1c (xScale) and kills the VI thread.
        {
            std::lock_guard lock{ events_context.message_mutex };
            events_context.vi.update_vi();
        }

        // If the game has started, handle sending VI and AI events.
        if (ultramodern::is_game_started()) {
            remaining_retraces--;
            
            std::lock_guard lock{ events_context.message_mutex };
            ViState* cur_state = events_context.vi.get_cur_state();
            static uint32_t turok_vi_trace = 0;

            // Measured retrace rate. This separates a game that presents every
            // other field on purpose from a VI clock that is simply running slow:
            // the interrupt itself should land at about 60 per second regardless of
            // how often the game swaps.
            {
                static const auto first = std::chrono::steady_clock::now();
                if ((getenv("TUROK2_GFX_DIAGNOSTICS") != nullptr) &&
                    (turok_vi_trace != 0) && ((turok_vi_trace % 600) == 0)) {
                    const double seconds = std::chrono::duration<double>(
                        std::chrono::steady_clock::now() - first).count();
                    fprintf(stderr, "[vi:rate] %u retraces in %.1fs = %.1f/s\n",
                        turok_vi_trace, seconds,
                        (seconds > 0.0) ? (turok_vi_trace / seconds) : 0.0);
                    fflush(stderr);
                }
            }

            if ((getenv("TUROK2_GFX_DIAGNOSTICS") != nullptr) &&
                (turok_vi_trace < 20 || (turok_vi_trace % 120) == 0)) {
                fprintf(stderr, "[vi:tick] n=%u remain=%d q=%08X msg=%08X retraces=%d mode=%p cur=%d fb=%08X origin=%08X hstart=%08X\n",
                    turok_vi_trace, remaining_retraces, static_cast<uint32_t>(cur_state->mq),
                    static_cast<uint32_t>(cur_state->msg), cur_state->retrace_count,
                    static_cast<const void*>(cur_state->mode), events_context.vi.cur_state,
                    static_cast<uint32_t>(cur_state->framebuffer),
                    static_cast<uint32_t>(events_context.vi.regs.VI_ORIGIN_REG),
                    static_cast<uint32_t>(events_context.vi.regs.VI_H_START_REG));
            }
            turok_vi_trace++;
            if (remaining_retraces == 0) {
                if (cur_state->mq != NULLPTR) {
                    // Send a message to the VI queue, and do not set it to be requeued if the queue was full.
                    // The worst case scenario is that the game misses a VI message and has to wait a little longer for the next. 
                    ultramodern::enqueue_external_message_src(cur_state->mq, cur_state->msg, false, ultramodern::EventMessageSource::Vi);
                }
                remaining_retraces = cur_state->retrace_count;
            }
            if (events_context.ai.mq != NULLPTR) {
                // Unique 120 fires VI twice as often. Keep AI at 60 so the
                // mixer does not generate two buffers per authored refresh.
                static uint32_t ai_div = 0;
                const bool send_ai = !turok2_unique_120() || ((++ai_div & 1u) == 0u);
                if (send_ai) {
                    ultramodern::enqueue_external_message_src(events_context.ai.mq, events_context.ai.msg, false, ultramodern::EventMessageSource::Ai);
                }
            }
        }

        if (events_callbacks.vi_callback != nullptr) {
            events_callbacks.vi_callback();
        }
    }
}

void sp_complete() {
    uint8_t* rdram = events_context.rdram;
    std::lock_guard lock{ events_context.message_mutex };
    ultramodern::enqueue_external_message_src(events_context.sp.mq, events_context.sp.msg, false, ultramodern::EventMessageSource::Sp);
}

void dp_complete() {
    uint8_t* rdram = events_context.rdram;
    std::lock_guard lock{ events_context.message_mutex };
    ultramodern::enqueue_external_message_src(events_context.dp.mq, events_context.dp.msg, false, ultramodern::EventMessageSource::Dp);
}

void task_thread_func(uint8_t* rdram, moodycamel::LightweightSemaphore* thread_ready) {
    ultramodern::set_native_thread_name("SP Task Thread");
    ultramodern::set_native_thread_priority(ultramodern::ThreadPriority::Normal);

    // Notify the caller thread that this thread is ready.
    thread_ready->signal();

    while (true) {
        // Wait until an RSP task has been sent
        OSTask* task;
        events_context.sp_task_queue.wait_dequeue(task);

        if (task == nullptr) {
            return;
        }

        if (!ultramodern::rsp::run_task(PASS_RDRAM task)) {
            fprintf(stderr, "Failed to execute task type: %" PRIu32 "\n", task->t.type);
            ULTRAMODERN_QUICK_EXIT();
        }

        // Tell the game that the RSP has completed
        sp_complete();
    }
}

std::atomic_uint32_t display_refresh_rate = 60;
std::atomic<float> resolution_scale = 1.0f;

uint32_t ultramodern::get_target_framerate(uint32_t original) {
    auto& config = ultramodern::renderer::get_graphics_config();

    switch (config.rr_option) {
        case ultramodern::renderer::RefreshRate::Original:
        default:
            return original;
        case ultramodern::renderer::RefreshRate::Manual:
            return config.rr_manual_value;
        case ultramodern::renderer::RefreshRate::Display:
            return display_refresh_rate.load();
    }
}

uint32_t ultramodern::get_display_refresh_rate() {
    return display_refresh_rate.load();
}

float ultramodern::get_resolution_scale() {
    return resolution_scale.load();
}

void ultramodern::trigger_config_action() {
    events_context.action_queue.enqueue(UpdateConfigAction{});
}

std::atomic<ultramodern::renderer::SetupResult> renderer_setup_result = ultramodern::renderer::SetupResult::Success;
std::atomic<ultramodern::renderer::GraphicsApi> renderer_chosen_api = ultramodern::renderer::GraphicsApi::Auto;

void gfx_thread_func(uint8_t* rdram, moodycamel::LightweightSemaphore* thread_ready, ultramodern::renderer::WindowHandle window_handle) {
    bool enabled_instant_present = false;
    using namespace std::chrono_literals;

    ultramodern::set_native_thread_name("Gfx Thread");
    ultramodern::set_native_thread_priority(ultramodern::ThreadPriority::Normal);

    auto old_config = ultramodern::renderer::get_graphics_config();

    auto renderer_context = ultramodern::renderer::create_render_context(rdram, window_handle, ultramodern::renderer::get_graphics_config().developer_mode);

    renderer_chosen_api.store(renderer_context->get_chosen_api());
    if (!renderer_context->valid()) {
        renderer_setup_result.store(renderer_context->get_setup_result());
        // Notify the caller thread that this thread is ready.
        thread_ready->signal();
        return;
    }

    if (events_callbacks.gfx_init_callback != nullptr) {
        events_callbacks.gfx_init_callback();
    }

    ultramodern::rsp::init();

    // Notify the caller thread that this thread is ready.
    thread_ready->signal();

    while (!exited) {
        // Try to pull an action from the queue
        Action action;
        if (events_context.action_queue.wait_dequeue_timed(action, 1ms)) {
            // Determine the action type and act on it
            if (const auto* task_action = std::get_if<SpTaskAction>(&action)) {
                ultramodern::measure_input_latency();

                PTR(u64) displaylist = task_action->task.t.data_ptr;
                ultramodern::extensions::on_displaylist_submitted(displaylist);

                [[maybe_unused]] auto renderer_start = std::chrono::high_resolution_clock::now();
                renderer_context->send_dl(&task_action->task);
                [[maybe_unused]] auto renderer_end = std::chrono::high_resolution_clock::now();

                // RT64 parses the RSP input synchronously in send_dl(). Do not
                // signal SP completion before that read has finished: Turok 2
                // releases and reuses geometry/display-list cache entries as
                // soon as it receives OS_EVENT_SP. An early signal therefore
                // lets the game overwrite nested G_DL targets while RT64 is
                // still walking them.
                sp_complete();
                dp_complete();

                // Turok 2 rotates three framebuffers and can submit a VI update
                // while RT64 is still consuming the workload that completes the
                // buffer selected for scanout. Presenting here makes the order
                // deterministic: the display list has been parsed, then the
                // most recently completed VI buffer is handed to RT64. This also
                // prevents partial menu/weapon layers from being exposed as a
                // complete frame.
                if (present_after_display_list()) {
                    events_context.vi.update_screen_regs = events_context.vi.regs;
                    renderer_context->update_screen();
                    display_refresh_rate = renderer_context->get_display_framerate();
                    resolution_scale = renderer_context->get_resolution_scale();
                }
                // TODO hook the parsed event up to the actual parsing point when a callback is added to RT64.
                ultramodern::extensions::on_displaylist_parsed(displaylist);
                ultramodern::extensions::on_displaylist_completed(displaylist);
                // printf("Renderer ProcessDList time: %d us\n", static_cast<u32>(std::chrono::duration_cast<std::chrono::microseconds>(renderer_end - renderer_start).count()));
            }
            else if (const auto* screen_update_action = std::get_if<ScreenUpdateAction>(&action)) {
                events_context.vi.update_screen_regs = screen_update_action->regs;
                renderer_context->update_screen();
                display_refresh_rate = renderer_context->get_display_framerate();
                resolution_scale = renderer_context->get_resolution_scale();
            }
            else if (const auto* config_action = std::get_if<UpdateConfigAction>(&action)) {
                (void)config_action;
                auto new_config = ultramodern::renderer::get_graphics_config();
                if (renderer_context->update_config(old_config, new_config)) {
                    old_config = new_config;
                }
            }
            else if (const auto* dummy_workload_action = std::get_if<DummyWorkloadAction>(&action)) {
                renderer_context->send_dummy_workload(dummy_workload_action->fb_address);
            }
        }
    }

    graphics_shutdown_ready.wait();
    renderer_context->shutdown();
}

#define VI_CTRL_TYPE_16             0x00002
#define VI_CTRL_TYPE_32             0x00003
#define VI_CTRL_GAMMA_DITHER_ON     0x00004
#define VI_CTRL_GAMMA_ON            0x00008
#define VI_CTRL_DIVOT_ON            0x00010
#define VI_CTRL_SERRATE_ON          0x00040
#define VI_CTRL_ANTIALIAS_MASK      0x00300
#define VI_CTRL_ANTIALIAS_MODE_1    0x00100
#define VI_CTRL_ANTIALIAS_MODE_2    0x00200
#define VI_CTRL_ANTIALIAS_MODE_3    0x00300
#define VI_CTRL_PIXEL_ADV_MASK      0x01000
#define VI_CTRL_PIXEL_ADV_1         0x01000
#define VI_CTRL_PIXEL_ADV_2         0x02000
#define VI_CTRL_PIXEL_ADV_3         0x03000
#define VI_CTRL_DITHER_FILTER_ON    0x10000

static const OSViMode dummy_mode = []() {
    OSViMode ret{};

    ret.type = 2;
    ret.comRegs.ctrl = VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_ANTIALIAS_MODE_1 | VI_CTRL_PIXEL_ADV_3;
    ret.comRegs.width = 0x140;
    ret.comRegs.burst = 0x03E52239;
    ret.comRegs.vSync = 0x20D;
    ret.comRegs.hSync = 0xC15;
    ret.comRegs.leap = 0x0C150C15;
    ret.comRegs.hStart = 0x006C02EC;
    ret.comRegs.xScale = 0x200;
    ret.comRegs.vCurrent = 0x0;

    for (int field = 0; field < 2; field++) {
        ret.fldRegs[field].origin = 0x280;
        ret.fldRegs[field].yScale = 0x400;
        ret.fldRegs[field].vStart = 0x2501FF;
        ret.fldRegs[field].vBurst = 0xE0204;
        ret.fldRegs[field].vIntr = 0x2;
    }

    return ret;
}();

void set_dummy_vi(bool odd) {
    ViState* next_state = events_context.vi.get_next_state();
    next_state->mode = &dummy_mode;
    next_state->control = next_state->mode->comRegs.ctrl;
    // Set up a dummy framebuffer.
    next_state->framebuffer = 0x80700000;
    if (odd) {
        next_state->framebuffer += 0x25800;
    }
}

extern "C" void osViSwapBuffer(RDRAM_ARG PTR(void) frameBufPtr) {
    // TEMPORARY DIAGNOSTIC: confirm which buffer the VI is told to scan out.
    //
    // Measured: the game triple buffers across 0x80600000 / 0x80654600 /
    // 0x806A8C00, spaced 0x54600 apart, and its display lists render into
    // whichever of those three is current. 0x80700000 is the game's Z buffer
    // (it is the operand of G_SETZIMG, and the G_SETCIMG to the same address is
    // immediately followed by a G_FILLRECT, i.e. the depth clear idiom), which
    // happens to collide with the address used for the pre-start dummy
    // framebuffer above.
    //
    // Report on change plus a periodic histogram, rather than sampling every Nth
    // swap. Sampling at a fixed stride is actively misleading here: the game
    // rotates through three buffers, so any stride that is a multiple of three
    // always lands on the same phase and makes a healthy rotation look like a
    // VI stuck on one buffer.
    if (getenv("TUROK2_GFX_DIAGNOSTICS") != nullptr) {
        static constexpr uint32_t max_tracked = 8;
        static uint32_t addresses[max_tracked] = {};
        static uint32_t counts[max_tracked] = {};
        static uint32_t tracked = 0;
        static uint32_t swaps = 0;
        static uint32_t changes_printed = 0;
        static uint32_t last_address = 0;

        const uint32_t address = (uint32_t)frameBufPtr;
        const uint32_t swap_index = swaps++;

        uint32_t slot = max_tracked;
        for (uint32_t i = 0; i < tracked; i++) {
            if (addresses[i] == address) {
                slot = i;
                break;
            }
        }
        if ((slot == max_tracked) && (tracked < max_tracked)) {
            slot = tracked++;
            addresses[slot] = address;
        }
        if (slot < max_tracked) {
            counts[slot]++;
        }

        if ((address != last_address) && (changes_printed < 40)) {
            fprintf(stderr, "[vi:swap] #%u framebuffer=%08X\n", swap_index, address);
            changes_printed++;
        }
        last_address = address;

        if ((swap_index != 0) && ((swap_index % 300) == 0)) {
            // Rate as well as count. The mode this game selects is interlaced
            // (the serrate bit is set in the control register), so the VI puts out
            // 60 fields per second while a full 480x360 frame takes two of them.
            // Thirty presented frames per second is therefore the intended rate
            // here, and the number worth checking is whether the measured rate
            // sits at 30, at 60, or somewhere below both.
            static const auto first = std::chrono::steady_clock::now();
            const auto now = std::chrono::steady_clock::now();
            const double seconds =
                std::chrono::duration<double>(now - first).count();

            fprintf(stderr, "[vi:swap] %u swaps in %.1fs = %.1f/s, %u distinct buffers:",
                swap_index, seconds, (seconds > 0.0) ? (swap_index / seconds) : 0.0, tracked);
            for (uint32_t i = 0; i < tracked; i++) {
                fprintf(stderr, " %08X=%u", addresses[i], counts[i]);
            }
            fprintf(stderr, "\n");
        }
        fflush(stderr);
    }

    std::lock_guard lock{ events_context.message_mutex };
    events_context.vi.get_next_state()->framebuffer = frameBufPtr;
}

extern "C" void osViSetMode(RDRAM_ARG PTR(OSViMode) mode_) {
    std::lock_guard lock{ events_context.message_mutex };
    OSViMode* mode = TO_PTR(OSViMode, mode_);

    // TEMPORARY DIAGNOSTIC: the mode carries the framebuffer stride and the
    // horizontal scale, which together decide how a 480 wide target is mapped onto
    // the active area. Report them once per distinct mode.
    {
        static uint32_t last_width = 0xFFFFFFFFu;
        static uint32_t last_xscale = 0xFFFFFFFFu;
        if ((mode->comRegs.width != last_width) || (mode->comRegs.xScale != last_xscale)) {
            last_width = mode->comRegs.width;
            last_xscale = mode->comRegs.xScale;
            fprintf(stderr, "[vi:mode] width=%u xScale=%08X hStart=%08X vSync=%08X ctrl=%08X\n",
                mode->comRegs.width, mode->comRegs.xScale, mode->comRegs.hStart,
                mode->comRegs.vSync, mode->comRegs.ctrl);
            fflush(stderr);
        }
    }
    ViState* next_state = events_context.vi.get_next_state();
    next_state->mode = mode;
    next_state->control = next_state->mode->comRegs.ctrl;
}

#define OS_VI_GAMMA_ON          0x0001
#define OS_VI_GAMMA_OFF         0x0002
#define OS_VI_GAMMA_DITHER_ON   0x0004
#define OS_VI_GAMMA_DITHER_OFF  0x0008
#define OS_VI_DIVOT_ON          0x0010
#define OS_VI_DIVOT_OFF         0x0020
#define OS_VI_DITHER_FILTER_ON  0x0040
#define OS_VI_DITHER_FILTER_OFF 0x0080

extern "C" void osViSetSpecialFeatures(uint32_t func) {
    std::lock_guard lock{ events_context.message_mutex };
    ViState* next_state = events_context.vi.get_next_state();
    uint32_t* control_out = &next_state->control;
    if ((func & OS_VI_GAMMA_ON) != 0) {
        *control_out |= VI_CTRL_GAMMA_ON;
    }

    if ((func & OS_VI_GAMMA_OFF) != 0) {
        *control_out &= ~VI_CTRL_GAMMA_ON;
    }

    if ((func & OS_VI_GAMMA_DITHER_ON) != 0) {
        *control_out |= VI_CTRL_GAMMA_DITHER_ON;
    }

    if ((func & OS_VI_GAMMA_DITHER_OFF) != 0) {
        *control_out &= ~VI_CTRL_GAMMA_DITHER_ON;
    }

    if ((func & OS_VI_DIVOT_ON) != 0) {
        *control_out |= VI_CTRL_DIVOT_ON;
    }

    if ((func & OS_VI_DIVOT_OFF) != 0) {
        *control_out &= ~VI_CTRL_DIVOT_ON;
    }

    if ((func & OS_VI_DITHER_FILTER_ON) != 0) {
        *control_out |= VI_CTRL_DITHER_FILTER_ON;
        *control_out &= ~VI_CTRL_ANTIALIAS_MASK;
    }

    if ((func & OS_VI_DITHER_FILTER_OFF) != 0) {
        *control_out &= ~VI_CTRL_DITHER_FILTER_ON;
        *control_out |= next_state->mode->comRegs.ctrl & VI_CTRL_ANTIALIAS_MASK;
    }
}

extern "C" void osViBlack(uint8_t active) {
    std::lock_guard lock{ events_context.message_mutex };
    ViState* next_state = events_context.vi.get_next_state();
    uint32_t* state_out = &next_state->state;
    if (active) {
        *state_out |= VI_STATE_BLACK;
    } else {
        *state_out &= ~VI_STATE_BLACK;
    }
}

extern "C" void osViRepeatLine(uint8_t active) {
    std::lock_guard lock{ events_context.message_mutex };
    ViState* next_state = events_context.vi.get_next_state();
    uint32_t* state_out = &next_state->state;
    if (active) {
        *state_out |= VI_STATE_REPEATLINE;
    } else {
        *state_out &= ~VI_STATE_REPEATLINE;
    }
}

// TEMPORARY DIAGNOSTIC: both of these are stubs, and the assert that used to
// stand in for the missing implementation is compiled out in optimized builds, so
// a scale the game asked for was dropped without a trace. Turok 2 renders at
// 480x360 rather than 320x240 (measured: the render target declares width=480 with
// a scissor of 479x359, and 480*360*2 is 0x54600, exactly the spacing between the
// three framebuffers the VI rotates through), so whether it also asks for a
// non-unity scale decides whether dropping these matters.
extern "C" void osViSetXScale(float scale) {
    static uint32_t reports = 0;
    if (reports < 8) {
        reports++;
        fprintf(stderr, "[vi:xscale] requested %f (ignored, stub)\n", (double)scale);
        fflush(stderr);
    }
}

extern "C" void osViSetYScale(float scale) {
    static uint32_t reports = 0;
    if (reports < 8) {
        reports++;
        fprintf(stderr, "[vi:yscale] requested %f (ignored, stub)\n", (double)scale);
        fflush(stderr);
    }
}

extern "C" PTR(void) osViGetNextFramebuffer() {
    return events_context.vi.get_next_state()->framebuffer;
}

extern "C" PTR(void) osViGetCurrentFramebuffer() {
    return events_context.vi.get_cur_state()->framebuffer;
}

// TEMPORARY DIAGNOSTIC: graphics display list decoding.
//
// Turok 2 ships an Acclaim build of F3DEX2.NoN.fifo 2.05. The version number is
// what identifies the GBI generation, not the name: the SDK spells the F3DEX2
// family's signature string as "F3DEX" with a 2.xx version, while 1.xx versions
// belong to the older F3DEX generation. This ROM reports
//   "RSP Gfx ucode F3DEX.NoN   fifo 2.05  Yoshitaka Yasumoto 1998 Nintendo."
// at ROM 0xC0478, alongside an "L3DEX fifo 2.05" companion that RT64's own GBI
// database labels "L3DEX2.fifo 2.05". The command numbering below is therefore
// F3DEX2's. Note that docs/MICROCODE.md used to claim the opposite (F3DEX 1.x,
// stock SDK); it was wrong on both counts and has been corrected.
namespace {
    // Turok 2 requires the Expansion Pak, so RDRAM is 8 MiB.
    constexpr uint32_t diag_rdram_size = 0x800000;

    const char* gbi_opcode_name(uint8_t op) {
        switch (op) {
        // F3DEX2 geometry and control commands.
        case 0x00: return "G_NOOP";
        case 0x01: return "G_VTX";
        case 0x02: return "G_MODIFYVTX";
        case 0x03: return "G_CULLDL";
        case 0x04: return "G_BRANCH_Z";
        case 0x05: return "G_TRI1";
        case 0x06: return "G_TRI2";
        case 0x07: return "G_QUAD";
        case 0x08: return "G_LINE3D";
        case 0xD3: return "G_SPECIAL_3";
        case 0xD4: return "G_SPECIAL_2";
        case 0xD5: return "G_SPECIAL_1";
        case 0xD6: return "G_DMA_IO";
        case 0xD7: return "G_TEXTURE";
        case 0xD8: return "G_POPMTX";
        case 0xD9: return "G_GEOMETRYMODE";
        case 0xDA: return "G_MTX";
        case 0xDB: return "G_MOVEWORD";
        case 0xDC: return "G_MOVEMEM";
        case 0xDD: return "G_LOAD_UCODE";
        case 0xDE: return "G_DL";
        case 0xDF: return "G_ENDDL";
        case 0xE0: return "G_SPNOOP";
        case 0xE1: return "G_RDPHALF_1";
        case 0xE2: return "G_SETOTHERMODE_L";
        case 0xE3: return "G_SETOTHERMODE_H";
        // RDP commands, identical across the F3D families.
        case 0xE4: return "G_TEXRECT";
        case 0xE5: return "G_TEXRECTFLIP";
        case 0xE6: return "G_RDPLOADSYNC";
        case 0xE7: return "G_RDPPIPESYNC";
        case 0xE8: return "G_RDPTILESYNC";
        case 0xE9: return "G_RDPFULLSYNC";
        case 0xEA: return "G_SETKEYGB";
        case 0xEB: return "G_SETKEYR";
        case 0xEC: return "G_SETCONVERT";
        case 0xED: return "G_SETSCISSOR";
        case 0xEE: return "G_SETPRIMDEPTH";
        case 0xEF: return "G_RDPSETOTHERMODE";
        case 0xF0: return "G_LOADTLUT";
        case 0xF1: return "G_RDPHALF_2";
        case 0xF2: return "G_SETTILESIZE";
        case 0xF3: return "G_LOADBLOCK";
        case 0xF4: return "G_LOADTILE";
        case 0xF5: return "G_SETTILE";
        case 0xF6: return "G_FILLRECT";
        case 0xF7: return "G_SETFILLCOLOR";
        case 0xF8: return "G_SETFOGCOLOR";
        case 0xF9: return "G_SETBLENDCOLOR";
        case 0xFA: return "G_SETPRIMCOLOR";
        case 0xFB: return "G_SETENVCOLOR";
        case 0xFC: return "G_SETCOMBINE";
        case 0xFD: return "G_SETTIMG";
        case 0xFE: return "G_SETZIMG";
        case 0xFF: return "G_SETCIMG";
        default:   return "?";
        }
    }

    // Decodes the first cycle's RGB equation from a G_SETCOMBINE, which computes
    // (A - B) * C + D. For a one-cycle textured rectangle this is the whole story,
    // and it is what says which of the primitive and environment colors actually
    // reaches the framebuffer.
    const char* combine_rgb_a(uint32_t v) {
        switch (v) {
        case 0: return "COMBINED"; case 1: return "TEXEL0"; case 2: return "TEXEL1";
        case 3: return "PRIMITIVE"; case 4: return "SHADE"; case 5: return "ENVIRONMENT";
        case 6: return "1"; case 7: return "NOISE";
        default: return "0";
        }
    }

    const char* combine_rgb_b(uint32_t v) {
        switch (v) {
        case 0: return "COMBINED"; case 1: return "TEXEL0"; case 2: return "TEXEL1";
        case 3: return "PRIMITIVE"; case 4: return "SHADE"; case 5: return "ENVIRONMENT";
        case 6: return "CENTER"; case 7: return "K4";
        default: return "0";
        }
    }

    const char* combine_rgb_c(uint32_t v) {
        switch (v) {
        case 0: return "COMBINED"; case 1: return "TEXEL0"; case 2: return "TEXEL1";
        case 3: return "PRIMITIVE"; case 4: return "SHADE"; case 5: return "ENVIRONMENT";
        case 6: return "SCALE"; case 7: return "COMBINED_ALPHA"; case 8: return "TEXEL0_ALPHA";
        case 9: return "TEXEL1_ALPHA"; case 10: return "PRIMITIVE_ALPHA";
        case 11: return "SHADE_ALPHA"; case 12: return "ENV_ALPHA";
        case 13: return "LOD_FRACTION"; case 14: return "PRIM_LOD_FRAC"; case 15: return "K5";
        default: return "0";
        }
    }

    const char* combine_rgb_d(uint32_t v) {
        switch (v) {
        case 0: return "COMBINED"; case 1: return "TEXEL0"; case 2: return "TEXEL1";
        case 3: return "PRIMITIVE"; case 4: return "SHADE"; case 5: return "ENVIRONMENT";
        case 6: return "1";
        default: return "0";
        }
    }

    // Alpha combiner sources. The A, B and D slots share one list; C has its own.
    const char* combine_alpha_abd(uint32_t v) {
        switch (v) {
        case 0:  return "COMBINED_ALPHA";
        case 1:  return "TEXEL0_ALPHA";
        case 2:  return "TEXEL1_ALPHA";
        case 3:  return "PRIMITIVE_ALPHA";
        case 4:  return "SHADE_ALPHA";
        case 5:  return "ENV_ALPHA";
        case 6:  return "1";
        default: return "0";
        }
    }

    const char* combine_alpha_c(uint32_t v) {
        switch (v) {
        case 0:  return "LOD_FRACTION";
        case 1:  return "TEXEL0_ALPHA";
        case 2:  return "TEXEL1_ALPHA";
        case 3:  return "PRIMITIVE_ALPHA";
        case 4:  return "SHADE_ALPHA";
        case 5:  return "ENV_ALPHA";
        case 6:  return "PRIM_LOD_FRAC";
        default: return "0";
        }
    }

    const char* image_format_name(uint32_t fmt) {
        switch (fmt) {
        case 0:  return "RGBA";
        case 1:  return "YUV";
        case 2:  return "CI";
        case 3:  return "IA";
        case 4:  return "I";
        default: return "?";
        }
    }

    const char* image_size_name(uint32_t siz) {
        switch (siz) {
        case 0:  return "4b";
        case 1:  return "8b";
        case 2:  return "16b";
        default: return "32b";
        }
    }

    // A single RDP tile descriptor, as assembled from G_SETTILE and
    // G_SETTILESIZE. The combiner for Turok 2's text samples TEXEL1, so the
    // descriptor for the second tile is what decides whether the interpolation
    // ramp between the two font colors is real data or zeroes.
    struct TileDescriptor {
        uint32_t fmt = 0;
        uint32_t siz = 0;
        uint32_t line = 0;
        uint32_t tmem = 0;
        uint32_t palette = 0;
        uint32_t mask_s = 0;
        uint32_t mask_t = 0;
        uint32_t shift_s = 0;
        uint32_t shift_t = 0;
        uint32_t uls = 0;
        uint32_t ult = 0;
        uint32_t lrs = 0;
        uint32_t lrt = 0;
        bool set_tile_seen = false;
        bool set_size_seen = false;
    };

    // A TMEM load, recorded so the amount of data actually placed at a tile's
    // TMEM address can be compared against the extent the tile then samples.
    struct LoadRecord {
        uint32_t tmem = 0;
        uint32_t siz = 0;
        uint32_t lrs = 0;
        uint32_t dxt = 0;
        uint32_t bytes = 0;
        uint32_t source = 0;
        bool is_block = false;
        uint32_t count = 0;
    };

    // A distinct (primitive color, environment color) combination observed on a
    // glyph-sized textured rectangle.
    struct GlyphColorPair {
        uint32_t prim = 0;
        uint32_t env = 0;
        // The combiner in effect decides which of the two colors actually reaches
        // the framebuffer, so recording the colors without it cannot say whether
        // a dark result is the dark color winning or the bright one being
        // dropped. Stored as the raw G_SETCOMBINE words.
        uint32_t combine_hi = 0;
        uint32_t combine_lo = 0;
        // Whether a combiner may legitimately reference TEXEL1 depends on the
        // cycle type, so it has to be recorded alongside.
        uint32_t cycle_type = 0;
        // The full high word of the other mode. The texture LOD bit in particular
        // decides how RT64 counts the tiles a draw call needs: with LOD off it
        // derives the count from the combiner and binds two tiles when TEXEL1 is
        // referenced, but with LOD on it trusts the level count instead, which
        // RDP::drawTexRect hardcodes to 1.
        uint32_t othermode_h = 0;
        // The tile the rectangle renders from. TEXEL1 samples the following tile,
        // so this plus the set of configured tiles says whether the second tile
        // the combiner asks for was ever set up.
        uint32_t tile = 0;
        uint32_t count = 0;
    };

    struct DisplayListStats {
        static constexpr uint32_t max_pairs = 8;

        uint32_t commands = 0;
        uint32_t triangles = 0;
        uint32_t vertices = 0;
        uint32_t texrects = 0;
        uint32_t glyph_texrects = 0;
        GlyphColorPair pairs[max_pairs] = {};
        uint32_t pair_count = 0;
        // One bit per tile index touched by G_SETTILE during the frame.
        uint32_t tiles_configured = 0;

        // State captured at the first glyph sized rectangle of the frame: the
        // descriptors for the tile the rectangle renders from and the following
        // one that TEXEL1 samples, plus the texture image most recently set.
        bool glyph_state_captured = false;
        TileDescriptor glyph_tiles[2] = {};
        uint32_t glyph_timg_addr = 0;
        uint32_t glyph_timg_fmt = 0;
        uint32_t glyph_timg_siz = 0;
        uint32_t glyph_timg_width = 0;

        static constexpr uint32_t max_loads = 8;
        LoadRecord loads[max_loads] = {};
        uint32_t load_count = 0;

        // The same state captured at the first rectangle too large to be a glyph.
        // The screens after the legal text are built from a grid of large blits,
        // and those are a separate path from the text: they do not go through the
        // zero line stride tile at all.
        bool block_state_captured = false;
        TileDescriptor block_tiles[2] = {};
        uint32_t block_width = 0;
        uint32_t block_height = 0;
        uint32_t block_prim = 0;
        uint32_t block_env = 0;
        uint32_t block_combine_hi = 0;
        uint32_t block_combine_lo = 0;
        uint32_t block_othermode_h = 0;
        uint32_t block_tile = 0;
        uint32_t block_timg_addr = 0;
        uint32_t block_timg_fmt = 0;
        uint32_t block_timg_siz = 0;
        uint32_t block_timg_width = 0;
        // The two immediate words that follow a texture rectangle carry its
        // texture coordinates and per pixel steps. The steps are what stretch a
        // 32x32 texture across a 48x48 rectangle, so a wrong one shows up as
        // geometry rather than as color.
        // The declared width of the render target and the scissor in effect.
        // The blits that build these screens reach x=384, so whether the target is
        // that wide decides between the game drawing out of bounds and the target
        // being described too narrow.
        uint32_t cimg_width = 0;
        uint32_t cimg_fmt = 0;
        uint32_t cimg_siz = 0;
        uint32_t cimg_address = 0;
        uint32_t fillrects = 0;
        uint32_t vtx_dumps = 0;
        uint32_t mtx_dumps = 0;

        // Extents of everything drawn, to tell a game that overdraws its target
        // apart from a presenter that crops a correctly drawn one.
        uint32_t extent_min_x = 0xFFFFFFFFu;
        uint32_t extent_min_y = 0xFFFFFFFFu;
        uint32_t extent_max_x = 0;
        uint32_t extent_max_y = 0;
        uint32_t scissor_ulx = 0;
        uint32_t scissor_uly = 0;
        uint32_t scissor_lrx = 0;
        uint32_t scissor_lry = 0;

        bool block_steps_captured = false;
        uint32_t block_s = 0;
        uint32_t block_t = 0;
        uint32_t block_dsdx = 0;
        uint32_t block_dtdy = 0;
    };

    const char* cycle_type_name(uint32_t v) {
        switch (v) {
        case 0:  return "1CYCLE";
        case 1:  return "2CYCLE";
        case 2:  return "COPY";
        default: return "FILL";
        }
    }

    // Reads a byte at an N64 address. Words sit in native order at word
    // granularity, so the bytes within a word have to be picked out from the most
    // significant end to come back in the original order.
    uint8_t read_byte_n64(const uint8_t* rdram, uint32_t address) {
        const uint32_t word = *reinterpret_cast<const uint32_t*>(rdram + (address & ~3u));
        return (uint8_t)((word >> (8 * (3 - (address & 3)))) & 0xFF);
    }

    // Renders a texture straight out of RDRAM as luminance art, with a count of
    // how many distinct values it holds.
    //
    // This is what separates a renderer problem from a data problem. Every part of
    // the display list for these blits measures as correct, so either RT64 draws a
    // correct description wrongly, or the pixels handed to it were already wrong.
    // A coherent picture here means the data is fine; a flat or noisy field means
    // whatever produced it is at fault.
    void dump_texture_preview(const uint8_t* rdram, uint32_t task_index, const char* label,
                              uint32_t address, uint32_t siz, uint32_t stride_bytes,
                              uint32_t width, uint32_t height) {
        if ((width == 0) || (height == 0) || (address == 0)) {
            return;
        }
        if ((address + (stride_bytes * height)) > diag_rdram_size) {
            fprintf(stderr, "[dl:img] task #%u: %s at %06X reaches outside RDRAM\n",
                task_index, label, address);
            return;
        }

        static const char ramp[] = " .:-=+*#%@";
        uint32_t distinct_estimate = 0;
        uint32_t previous = 0xFFFFFFFFu;

        fprintf(stderr, "[dl:img] task #%u: %s, %ux%u at %06X, stride %u bytes\n",
            task_index, label, width, height, address, stride_bytes);

        for (uint32_t y = 0; y < height; y++) {
            char row[129];
            uint32_t out = 0;
            for (uint32_t x = 0; x < width && out < (sizeof(row) - 1); x++) {
                uint32_t luminance = 0;
                uint32_t value = 0;

                if (siz == 2) { // 16 bit, RGBA5551
                    const uint32_t offset = address + (y * stride_bytes) + (x * 2);
                    value = ((uint32_t)read_byte_n64(rdram, offset) << 8) |
                            read_byte_n64(rdram, offset + 1);
                    const uint32_t r = (value >> 11) & 0x1F;
                    const uint32_t g = (value >> 6) & 0x1F;
                    const uint32_t b = (value >> 1) & 0x1F;
                    luminance = ((r + g + b) * 255) / (31 * 3);
                }
                else if (siz == 0) { // 4 bit intensity
                    const uint32_t offset = address + (y * stride_bytes) + (x / 2);
                    const uint8_t byte = read_byte_n64(rdram, offset);
                    value = ((x & 1) != 0) ? (byte & 0x0F) : (uint8_t)(byte >> 4);
                    luminance = value * 17;
                }
                else { // 8 bit
                    const uint32_t offset = address + (y * stride_bytes) + x;
                    value = read_byte_n64(rdram, offset);
                    luminance = value;
                }

                if (value != previous) {
                    distinct_estimate++;
                    previous = value;
                }
                row[out++] = ramp[(luminance * 9) / 255];
            }
            row[out] = '\0';
            fprintf(stderr, "[dl:img]   |%s|\n", row);
        }

        fprintf(stderr, "[dl:img] task #%u: %s changed value %u times while scanning\n",
            task_index, label, distinct_estimate);
    }

    // The large blits that build the screens after the legal text.
    void report_block_rect(const uint8_t* rdram, uint32_t task_index, const DisplayListStats& stats) {
        if (!stats.block_state_captured) {
            return;
        }

        fprintf(stderr, "[dl:blit] task #%u: first non glyph rect %ux%u tile=%u %s textLOD=%s othermode_h=%06X\n",
            task_index, stats.block_width, stats.block_height, stats.block_tile,
            cycle_type_name((stats.block_othermode_h >> 20) & 0x03),
            ((stats.block_othermode_h >> 16) & 1) ? "G_TL_LOD" : "G_TL_TILE",
            stats.block_othermode_h);
        fprintf(stderr, "[dl:blit] task #%u:   prim=%08X env=%08X\n",
            task_index, stats.block_prim, stats.block_env);

        if (stats.block_steps_captured) {
            // The steps are 5.10 fixed point texels per pixel. 0x0400 is 1.0,
            // meaning no scaling; 0x02AB is two thirds, which spreads a 32 texel
            // wide source across 48 pixels.
            fprintf(stderr, "[dl:blit] task #%u:   s=%.2f t=%.2f dsdx=%04X (%.4f) dtdy=%04X (%.4f)\n",
                task_index, stats.block_s / 32.0f, stats.block_t / 32.0f,
                stats.block_dsdx, stats.block_dsdx / 1024.0f,
                stats.block_dtdy, stats.block_dtdy / 1024.0f);
            const float covered_x = stats.block_width * (stats.block_dsdx / 1024.0f);
            const float covered_y = stats.block_height * (stats.block_dtdy / 1024.0f);
            fprintf(stderr, "[dl:blit] task #%u:   steps cover %.1fx%.1f texels of the %ux%u tile\n",
                task_index, covered_x, covered_y,
                (stats.block_tiles[0].lrs >> 2) + 1, (stats.block_tiles[0].lrt >> 2) + 1);
        }
        fprintf(stderr, "[dl:blit] task #%u:   cycle0 rgb   = (%s - %s) * %s + %s\n",
            task_index,
            combine_rgb_a((stats.block_combine_hi >> 20) & 0x0F),
            combine_rgb_b((stats.block_combine_lo >> 28) & 0x0F),
            combine_rgb_c((stats.block_combine_hi >> 15) & 0x1F),
            combine_rgb_d((stats.block_combine_lo >> 15) & 0x07));
        fprintf(stderr, "[dl:blit] task #%u:   cycle0 alpha = (%s - %s) * %s + %s\n",
            task_index,
            combine_alpha_abd((stats.block_combine_hi >> 12) & 0x07),
            combine_alpha_abd((stats.block_combine_lo >> 12) & 0x07),
            combine_alpha_c((stats.block_combine_hi >> 9) & 0x07),
            combine_alpha_abd((stats.block_combine_lo >> 9) & 0x07));
        fprintf(stderr, "[dl:blit] task #%u:   texture image %s%s width=%u at %06X\n",
            task_index, image_format_name(stats.block_timg_fmt),
            image_size_name(stats.block_timg_siz), stats.block_timg_width, stats.block_timg_addr);

        for (uint32_t i = 0; i < 2; i++) {
            const TileDescriptor& tile_desc = stats.block_tiles[i];
            fprintf(stderr, "[dl:blit] task #%u:   %s: %s%s line=%u tmem=%03X pal=%u mask=%u/%u shift=%u/%u rect=(%u,%u)-(%u,%u)%s\n",
                task_index,
                (i == 0) ? "render tile, TEXEL0" : "next tile, TEXEL1  ",
                image_format_name(tile_desc.fmt), image_size_name(tile_desc.siz),
                tile_desc.line, tile_desc.tmem, tile_desc.palette,
                tile_desc.mask_s, tile_desc.mask_t, tile_desc.shift_s, tile_desc.shift_t,
                tile_desc.uls >> 2, tile_desc.ult >> 2, tile_desc.lrs >> 2, tile_desc.lrt >> 2,
                tile_desc.set_tile_seen ? "" : "  <- never received G_SETTILE");
        }

        // Show the pixels behind each of the two tiles. The source address comes
        // from whichever recorded load targeted that tile's TMEM address, since
        // the texture image register has already moved on by the time the
        // rectangle is drawn.
        for (uint32_t i = 0; i < 2; i++) {
            const TileDescriptor& tile_desc = stats.block_tiles[i];
            const uint32_t width = (tile_desc.lrs >> 2) + 1;
            const uint32_t height = (tile_desc.lrt >> 2) + 1;

            uint32_t source = 0;
            for (uint32_t j = 0; j < stats.load_count; j++) {
                if (stats.loads[j].tmem == tile_desc.tmem) {
                    source = stats.loads[j].source;
                    break;
                }
            }

            if (source == 0) {
                fprintf(stderr, "[dl:img] task #%u: no recorded load targets tmem=%03X\n",
                    task_index, tile_desc.tmem);
                continue;
            }

            dump_texture_preview(rdram, task_index,
                (i == 0) ? "color, TEXEL0" : "alpha mask, TEXEL1",
                source, tile_desc.siz, tile_desc.line * 8, width, height);
        }
    }

    void report_glyph_tiles(const uint8_t* rdram, uint32_t task_index, const DisplayListStats& stats) {
        if (!stats.glyph_state_captured) {
            return;
        }

        fprintf(stderr, "[dl:tile] task #%u: texture image in effect: %s%s width=%u at %06X\n",
            task_index, image_format_name(stats.glyph_timg_fmt), image_size_name(stats.glyph_timg_siz),
            stats.glyph_timg_width, stats.glyph_timg_addr);

        for (uint32_t i = 0; i < 2; i++) {
            const TileDescriptor& tile_desc = stats.glyph_tiles[i];
            fprintf(stderr, "[dl:tile] task #%u:   %s: %s%s line=%u tmem=%03X pal=%u mask=%u/%u shift=%u/%u rect=(%u,%u)-(%u,%u)%s%s\n",
                task_index,
                (i == 0) ? "render tile, TEXEL0" : "next tile, TEXEL1  ",
                image_format_name(tile_desc.fmt), image_size_name(tile_desc.siz),
                tile_desc.line, tile_desc.tmem, tile_desc.palette,
                tile_desc.mask_s, tile_desc.mask_t, tile_desc.shift_s, tile_desc.shift_t,
                tile_desc.uls >> 2, tile_desc.ult >> 2, tile_desc.lrs >> 2, tile_desc.lrt >> 2,
                tile_desc.set_tile_seen ? "" : "  <- never received G_SETTILE",
                tile_desc.set_size_seen ? "" : "  <- never received G_SETTILESIZE");
        }

        // How much data reached each TMEM address. A tile that samples more rows
        // than were loaded is reading stale TMEM, which matters for deciding
        // whether a zero line stride should be widened or should alias row 0.
        for (uint32_t i = 0; i < stats.load_count; i++) {
            const LoadRecord& load = stats.loads[i];
            fprintf(stderr, "[dl:load] task #%u:   %s -> tmem=%03X siz=%s lrs=%u dxt=%u = %u bytes from %06X, x%u\n",
                task_index, load.is_block ? "LOADBLOCK" : "LOADTILE ",
                load.tmem, image_size_name(load.siz), load.lrs, load.dxt, load.bytes,
                load.source, load.count);

            // Show the head of the source data. A smooth run of nibbles reads as
            // an interpolation ramp; sparse or patterned data reads as a bitmap.
            // Bytes are emitted most significant first so they appear in the
            // original N64 order rather than the host's word order.
            if ((load.source + 32) <= diag_rdram_size) {
                fprintf(stderr, "[dl:load] task #%u:     first 32 bytes:", task_index);
                for (uint32_t offset = 0; offset < 32; offset += 4) {
                    const uint32_t word = *reinterpret_cast<const uint32_t*>(rdram + ((load.source + offset) & ~3u));
                    fprintf(stderr, " %02X %02X %02X %02X",
                        (word >> 24) & 0xFF, (word >> 16) & 0xFF, (word >> 8) & 0xFF, word & 0xFF);
                }
                fprintf(stderr, "\n");
            }
        }
    }

    // Walks a graphics display list, following G_DL into sub-lists the way the
    // RSP does. A Turok 2 frame's top level holds no geometry of its own, so a
    // single-level dump cannot distinguish a frame that draws from one that does
    // not: the drawing lives in the sub-lists.
    //
    // Two modes share this one traversal on purpose. `verbose` prints every
    // command for a single frame; with it off the walk is cheap enough to run on
    // every frame, which is how the frames that actually draw text get found
    // without knowing their numbers in advance. Keeping it to one function stops
    // the detailed and the scanning view from drifting apart.
    void walk_gfx_display_list(const uint8_t* rdram, uint32_t base_address, uint32_t byte_size,
                               uint32_t task_index, bool verbose, DisplayListStats& stats) {
        // F3DEX2's segment table, populated through G_MOVEWORD/G_MW_SEGMENT.
        // Sub-list pointers may be segmented, so resolve them exactly as the RSP
        // does before dereferencing anything.
        uint32_t segments[16] = {};

        bool read_failed = false;
        uint32_t failed_address = 0;

        auto read_word = [&](uint32_t address) -> uint32_t {
            const uint32_t offset = address & ~3u;
            if ((offset + 4) > diag_rdram_size) {
                read_failed = true;
                failed_address = address;
                return 0;
            }
            // Words are stored in native order at word granularity, so a direct
            // 32-bit read yields the original N64 word.
            return *reinterpret_cast<const uint32_t*>(rdram + offset);
        };

        // Mirrors RSP::fromSegmentedMasked: segment lookup followed by the RSP
        // DMA physical address mask.
        auto resolve = [&](uint32_t seg_address) -> uint32_t {
            return (segments[(seg_address >> 24) & 0x0F] + (seg_address & 0x00FFFFFF)) & 0x00FFFFF8;
        };

        // F3DEX2's display list stack is 18 entries deep. Matching it keeps the
        // walk faithful and bounds the traversal.
        constexpr uint32_t max_depth = 18;
        constexpr uint32_t command_budget = 500000;
        constexpr uint32_t print_budget = 400;

        uint32_t return_stack[max_depth] = {};
        uint32_t depth = 0;

        uint32_t address = base_address & 0x00FFFFF8;
        const uint32_t top_level_start = address;
        const uint32_t top_level_end = address + byte_size;

        uint32_t opcode_counts[256] = {};
        uint32_t total_commands = 0;
        uint32_t printed = 0;
        uint32_t sublists_entered = 0;
        uint32_t branches_taken = 0;
        uint32_t deepest = 0;
        uint32_t triangles = 0;
        uint32_t vertices = 0;
        uint32_t stack_overflows = 0;
        bool budget_exhausted = false;

        // Distinct color image targets. This is what separates a frame that
        // renders into the buffer the VI scans out from one that renders
        // somewhere the presenter never reads.
        // Both the raw command operand and the resolved physical address are
        // recorded, because osViSwapBuffer reports the framebuffer as a KSEG0
        // pointer while the resolved value here is physical. Printing both makes
        // the comparison against the [vi:swap] trace direct.
        constexpr uint32_t max_color_images = 16;
        uint32_t color_images_raw[max_color_images] = {};
        uint32_t color_images[max_color_images] = {};
        uint32_t color_image_count = 0;

        // RDP color state, tracked so every textured rectangle can be attributed
        // to the colors that were in effect when it was drawn.
        //
        // This is the point of the exercise: in the Acclaim London engine the
        // on-screen text system (COnScreen, see references/LibTEngine) draws each
        // glyph with a top color and a bottom color —
        // COnScreen__SetFontColor(tr, tg, tb, br, bg, bb) — plus an optional
        // shadow pass at m_ShadowXOff/m_ShadowYOff. Those two colors reach the
        // RDP as the primitive and environment colors, which is why a frame with
        // 109 rectangles needs only 4 combiners but changes the primitive color
        // 30 times. Letters coming out dark should therefore be visible right
        // here, either as both colors arriving dark or as only the shadow pass
        // being emitted.
        uint32_t prim_color = 0;
        uint32_t env_color = 0;
        uint32_t combine_hi = 0;
        uint32_t combine_lo = 0;
        // Reconstructed from the partial writes the ucode emits, so the cycle type
        // in effect at each rectangle is known.
        uint32_t othermode_h = 0;
        uint32_t texrect_tile = 0;

        // Set when the block snapshot has just been taken, so the two immediate
        // words that follow that rectangle can be attributed to it.
        bool expect_block_steps = false;

        TileDescriptor tiles[8] = {};
        uint32_t timg_addr = 0;
        uint32_t timg_fmt = 0;
        uint32_t timg_siz = 0;
        uint32_t timg_width = 0;

        auto record_glyph_pair = [&]() {
            for (uint32_t i = 0; i < stats.pair_count; i++) {
                GlyphColorPair& pair = stats.pairs[i];
                if ((pair.prim == prim_color) && (pair.env == env_color) &&
                    (pair.combine_hi == combine_hi) && (pair.combine_lo == combine_lo) &&
                    (pair.othermode_h == othermode_h) && (pair.tile == texrect_tile)) {
                    pair.count++;
                    return;
                }
            }
            if (stats.pair_count < DisplayListStats::max_pairs) {
                GlyphColorPair& pair = stats.pairs[stats.pair_count];
                pair.prim = prim_color;
                pair.env = env_color;
                pair.combine_hi = combine_hi;
                pair.combine_lo = combine_lo;
                pair.cycle_type = (othermode_h >> 20) & 0x03;
                pair.othermode_h = othermode_h;
                pair.tile = texrect_tile;
                pair.count = 1;
                stats.pair_count++;
            }
        };

        if (verbose) {
            fprintf(stderr, "\n[dl:dump] task #%u: display list at %08X, %u bytes (%u commands at top level)\n",
                task_index, base_address, byte_size, byte_size / 8);
        }

        while (true) {
            const uint32_t command_address = address;
            const uint32_t w0 = read_word(address);
            const uint32_t w1 = read_word(address + 4);
            if (read_failed) {
                if (verbose) {
                    fprintf(stderr, "[dl:dump]   <read outside RDRAM at %08X, stopping>\n", failed_address);
                }
                break;
            }

            const uint8_t op = (uint8_t)(w0 >> 24);
            opcode_counts[op]++;
            total_commands++;

            if (verbose && (printed < print_budget)) {
                fprintf(stderr, "[dl:dump]   %*s%06X: %08X %08X  %02X %s\n",
                    int(depth * 2), "", address, w0, w1, op, gbi_opcode_name(op));
                printed++;
            }

            if (total_commands >= command_budget) {
                budget_exhausted = true;
                break;
            }

            bool advance = true;

            switch (op) {
            case 0x01: { // G_VTX
                const uint32_t vtx_n = (w0 >> 12) & 0xFF;
                vertices += vtx_n;
                if (verbose && (stats.vtx_dumps < 3)) {
                    const uint32_t phys = resolve(w1);
                    fprintf(stderr, "[dl:vtx] task #%u: n=%u v0=%u seg=%08X phys=%08X\n",
                        task_index, vtx_n, (w0 >> 1) & 0x7F, w1, phys);
                    for (uint32_t v = 0; v < vtx_n && v < 2; v++) {
                        const uint32_t base = phys + v * 16;
                        const uint32_t a = read_word(base);
                        const uint32_t b = read_word(base + 4);
                        const uint32_t c = read_word(base + 8);
                        const uint32_t d = read_word(base + 12);
                        const int16_t x = (int16_t)(a >> 16);
                        const int16_t y = (int16_t)(a & 0xFFFF);
                        const int16_t z = (int16_t)(b >> 16);
                        fprintf(stderr,
                            "[dl:vtx]   v%u xyz=(%d,%d,%d) flag=%04X tc=%08X cn=%08X\n",
                            v, x, y, z, b & 0xFFFF, c, d);
                    }
                    stats.vtx_dumps++;
                }
                break;
            }

            case 0xDA: { // G_MTX
                if (verbose && (stats.mtx_dumps < 4)) {
                    const uint32_t phys = resolve(w1);
                    fprintf(stderr, "[dl:mtx] task #%u: w0=%08X seg=%08X phys=%08X\n",
                        task_index, w0, w1, phys);
                    fprintf(stderr, "[dl:mtx]   raw");
                    for (uint32_t i = 0; i < 16; i++) {
                        fprintf(stderr, " %08X", read_word(phys + i * 4));
                    }
                    fprintf(stderr, "\n");
                    uint32_t raw[16] = {};
                    for (uint32_t i = 0; i < 16; i++) {
                        raw[i] = read_word(phys + i * 4);
                    }
                    // F3D Mtx: 8 words of packed s16 integer parts, then 8 of u16 fracs.
                    int16_t ip[16] = {};
                    uint16_t fp[16] = {};
                    for (uint32_t i = 0; i < 8; i++) {
                        ip[i * 2] = (int16_t)(raw[i] >> 16);
                        ip[i * 2 + 1] = (int16_t)(raw[i] & 0xFFFF);
                        fp[i * 2] = (uint16_t)(raw[8 + i] >> 16);
                        fp[i * 2 + 1] = (uint16_t)(raw[8 + i] & 0xFFFF);
                    }
                    fprintf(stderr, "[dl:mtx]   ");
                    for (uint32_t r = 0; r < 4; r++) {
                        for (uint32_t col = 0; col < 4; col++) {
                            const uint32_t k = r * 4 + col;
                            const float f = (float)ip[k] + (float)fp[k] / 65536.0f;
                            fprintf(stderr, "%8.3f ", f);
                        }
                        fprintf(stderr, "%s", (r == 3) ? "\n" : "\n[dl:mtx]   ");
                    }
                    stats.mtx_dumps++;
                }
                break;
            }

            case 0x05: // G_TRI1
                triangles += 1;
                break;

            case 0x06: // G_TRI2
            case 0x07: // G_QUAD
                triangles += 2;
                break;

            case 0xDB: { // G_MOVEWORD
                // F3DEX2 encodes the index in bits 16..23 and, for the segment
                // index, the segment number in bits 2..5.
                const uint8_t index = (uint8_t)((w0 >> 16) & 0xFF);
                if (index == 0x06) { // G_MW_SEGMENT
                    segments[(w0 >> 2) & 0x0F] = w1;
                }
                break;
            }

            case 0xFA: // G_SETPRIMCOLOR
                // w1 is RGBA8888. w0 also carries the LOD fraction, ignored here.
                prim_color = w1;
                break;

            case 0xFB: // G_SETENVCOLOR
                env_color = w1;
                break;

            case 0xFC: // G_SETCOMBINE
                combine_hi = w0 & 0x00FFFFFFU;
                combine_lo = w1;
                break;

            case 0xE3: { // G_SETOTHERMODE_H
                // F3DEX2 writes a bit field: w0 carries (32 - shift - length) in
                // bits 8..15 and (length - 1) in bits 0..7, with w1 already
                // shifted into place.
                const uint32_t length = (w0 & 0xFF) + 1;
                const uint32_t shift_field = (w0 >> 8) & 0xFF;
                if ((shift_field + length) <= 32) {
                    const uint32_t shift = 32 - shift_field - length;
                    const uint32_t mask = (length >= 32) ? 0xFFFFFFFFU : (((1u << length) - 1u) << shift);
                    othermode_h = (othermode_h & ~mask) | (w1 & mask);
                }
                break;
            }

            case 0xEF: // G_RDPSETOTHERMODE
                othermode_h = w0 & 0x00FFFFFFU;
                break;

            case 0xF5: { // G_SETTILE
                const uint32_t index = (w1 >> 24) & 0x07;
                stats.tiles_configured |= 1u << index;

                TileDescriptor& tile_desc = tiles[index];
                tile_desc.fmt = (w0 >> 21) & 0x07;
                tile_desc.siz = (w0 >> 19) & 0x03;
                tile_desc.line = (w0 >> 9) & 0x1FF;
                tile_desc.tmem = w0 & 0x1FF;
                tile_desc.palette = (w1 >> 20) & 0x0F;
                tile_desc.mask_t = (w1 >> 14) & 0x0F;
                tile_desc.shift_t = (w1 >> 10) & 0x0F;
                tile_desc.mask_s = (w1 >> 4) & 0x0F;
                tile_desc.shift_s = w1 & 0x0F;
                tile_desc.set_tile_seen = true;
                break;
            }

            case 0xF2: { // G_SETTILESIZE
                const uint32_t index = (w1 >> 24) & 0x07;
                TileDescriptor& tile_desc = tiles[index];
                tile_desc.uls = (w0 >> 12) & 0xFFF;
                tile_desc.ult = w0 & 0xFFF;
                tile_desc.lrs = (w1 >> 12) & 0xFFF;
                tile_desc.lrt = w1 & 0xFFF;
                tile_desc.set_size_seen = true;
                break;
            }

            case 0xE1: // G_RDPHALF_1, the rectangle's texture coordinates
                if (expect_block_steps) {
                    stats.block_s = (w1 >> 16) & 0xFFFF;
                    stats.block_t = w1 & 0xFFFF;
                }
                break;

            case 0xF1: // G_RDPHALF_2, the rectangle's per pixel steps
                if (expect_block_steps) {
                    stats.block_dsdx = (w1 >> 16) & 0xFFFF;
                    stats.block_dtdy = w1 & 0xFFFF;
                    stats.block_steps_captured = true;
                    expect_block_steps = false;
                }
                break;

            case 0xFD: // G_SETTIMG
                timg_fmt = (w0 >> 21) & 0x07;
                timg_siz = (w0 >> 19) & 0x03;
                timg_width = (w0 & 0xFFF) + 1;
                timg_addr = resolve(w1);
                break;

            case 0xF3:   // G_LOADBLOCK
            case 0xF4: { // G_LOADTILE
                // The load targets the TMEM address of the tile named in the
                // command, which is a separate descriptor from the render tile.
                const uint32_t index = (w1 >> 24) & 0x07;
                const TileDescriptor& load_tile = tiles[index];
                const uint32_t lrs = (w1 >> 12) & 0xFFF;
                const uint32_t dxt = w1 & 0xFFF;
                const bool is_block = (op == 0xF3);

                // G_LOADBLOCK transfers texels 0..lrs in the load tile's size.
                // G_LOADTILE addresses in the 10.2 fixed point coordinate space.
                const uint32_t texels = is_block ? (lrs + 1) : (((lrs - ((w0 >> 12) & 0xFFF)) >> 2) + 1);
                const uint32_t bytes = (texels << (load_tile.siz + 2)) >> 3;

                bool known = false;
                for (uint32_t i = 0; i < stats.load_count; i++) {
                    LoadRecord& load = stats.loads[i];
                    if ((load.tmem == load_tile.tmem) && (load.siz == load_tile.siz) &&
                        (load.lrs == lrs) && (load.dxt == dxt) && (load.is_block == is_block)) {
                        load.count++;
                        known = true;
                        break;
                    }
                }
                if (!known && (stats.load_count < DisplayListStats::max_loads)) {
                    LoadRecord& load = stats.loads[stats.load_count++];
                    load.tmem = load_tile.tmem;
                    load.siz = load_tile.siz;
                    load.lrs = lrs;
                    load.dxt = dxt;
                    load.bytes = bytes;
                    load.source = timg_addr;
                    load.is_block = is_block;
                    load.count = 1;
                }
                break;
            }

            case 0xE4:   // G_TEXRECT
            case 0xE5: { // G_TEXRECTFLIP
                // w0 holds the lower-right corner, w1 the upper-left, both as
                // 10.2 fixed point screen coordinates.
                const uint32_t xh = (w0 >> 12) & 0xFFF;
                const uint32_t yh = w0 & 0xFFF;
                const uint32_t xl = (w1 >> 12) & 0xFFF;
                const uint32_t yl = w1 & 0xFFF;
                const uint32_t width = (xh > xl) ? ((xh - xl) >> 2) : 0;
                const uint32_t height = (yh > yl) ? ((yh - yl) >> 2) : 0;
                texrect_tile = (w1 >> 24) & 0x07;

                stats.texrects++;

                if ((width > 0) && (height > 0)) {
                    const uint32_t left = xl >> 2;
                    const uint32_t top = yl >> 2;
                    const uint32_t right = xh >> 2;
                    const uint32_t bottom = yh >> 2;
                    if (left < stats.extent_min_x) { stats.extent_min_x = left; }
                    if (top < stats.extent_min_y) { stats.extent_min_y = top; }
                    if (right > stats.extent_max_x) { stats.extent_max_x = right; }
                    if (bottom > stats.extent_max_y) { stats.extent_max_y = bottom; }
                }

                // Separate glyphs from background art by size. Measured: the
                // full-screen image on the frames inspected so far is blitted as
                // a grid of 48x48 tiles, while font glyphs are far smaller. This
                // threshold is a heuristic, so the verbose dump prints every
                // rectangle's real size to keep it checkable.
                if ((width > 0) && (height > 0) && (width <= 32) && (height <= 32)) {
                    stats.glyph_texrects++;
                    record_glyph_pair();

                    if (!stats.glyph_state_captured) {
                        stats.glyph_state_captured = true;
                        // The rectangle renders from texrect_tile and the
                        // combiner's TEXEL1 samples the tile after it.
                        stats.glyph_tiles[0] = tiles[texrect_tile & 0x07];
                        stats.glyph_tiles[1] = tiles[(texrect_tile + 1) & 0x07];
                        stats.glyph_timg_addr = timg_addr;
                        stats.glyph_timg_fmt = timg_fmt;
                        stats.glyph_timg_siz = timg_siz;
                        stats.glyph_timg_width = timg_width;
                    }
                }
                else if ((width > 0) && (height > 0) && !stats.block_state_captured) {
                    stats.block_state_captured = true;
                    stats.block_tiles[0] = tiles[texrect_tile & 0x07];
                    stats.block_tiles[1] = tiles[(texrect_tile + 1) & 0x07];
                    stats.block_width = width;
                    stats.block_height = height;
                    stats.block_prim = prim_color;
                    stats.block_env = env_color;
                    stats.block_combine_hi = combine_hi;
                    stats.block_combine_lo = combine_lo;
                    stats.block_othermode_h = othermode_h;
                    stats.block_tile = texrect_tile;
                    stats.block_timg_addr = timg_addr;
                    stats.block_timg_fmt = timg_fmt;
                    stats.block_timg_siz = timg_siz;
                    stats.block_timg_width = timg_width;
                    expect_block_steps = true;
                }

                if (verbose) {
                    fprintf(stderr, "[dl:rect]   %*s%ux%u at (%u,%u) prim=%08X env=%08X%s\n",
                        int(depth * 2), "", width, height, xl >> 2, yl >> 2,
                        prim_color, env_color,
                        ((width <= 32) && (height <= 32)) ? "  <- glyph sized" : "");
                }
                break;
            }

            case 0xED: // G_SETSCISSOR
                stats.scissor_ulx = (w0 >> 12) & 0xFFF;
                stats.scissor_uly = w0 & 0xFFF;
                stats.scissor_lrx = (w1 >> 12) & 0xFFF;
                stats.scissor_lry = w1 & 0xFFF;
                break;

            case 0xFF: { // G_SETCIMG
                stats.cimg_fmt = (w0 >> 21) & 0x07;
                stats.cimg_siz = (w0 >> 19) & 0x03;
                stats.cimg_width = (w0 & 0xFFF) + 1;

                const uint32_t target = resolve(w1);
                stats.cimg_address = target;
                bool known = false;
                for (uint32_t i = 0; i < color_image_count; i++) {
                    if (color_images[i] == target) {
                        known = true;
                        break;
                    }
                }
                if (!known && (color_image_count < max_color_images)) {
                    color_images_raw[color_image_count] = w1;
                    color_images[color_image_count] = target;
                    color_image_count++;
                }
                break;
            }

            case 0xDE: { // G_DL
                // Bits 16..23 select push (0) or branch without push (1).
                const bool no_push = ((w0 >> 16) & 0xFF) != 0;
                const uint32_t target = resolve(w1);
                if (no_push) {
                    branches_taken++;
                    address = target;
                }
                else if (depth < max_depth) {
                    sublists_entered++;
                    return_stack[depth++] = address + 8;
                    if (depth > deepest) {
                        deepest = depth;
                    }
                    address = target;
                }
                else {
                    // The real RSP would corrupt its stack here, so record it
                    // rather than following the call.
                    stack_overflows++;
                    break;
                }
                advance = false;
                break;
            }

            case 0xDF: // G_ENDDL
                if (depth > 0) {
                    address = return_stack[--depth];
                    advance = false;
                    break;
                }
                // A G_ENDDL at the outermost level ends the task's list.
                goto done;

            default:
                break;
            }

            if (advance) {
                address += 8;
            }

            // Only the top level has a declared length; sub-lists are bounded by
            // G_ENDDL. Fire this only when the walk was stepping linearly inside
            // the declared buffer and ran past its end, so that a G_DL branch
            // that legitimately jumps elsewhere in RDRAM is not mistaken for the
            // end of the list.
            if (advance && (depth == 0) &&
                (command_address >= top_level_start) && (command_address < top_level_end) &&
                (address >= top_level_end)) {
                if (verbose) {
                    fprintf(stderr, "[dl:dump]   <reached declared end of top level without G_ENDDL>\n");
                }
                break;
            }
        }
    done:

        stats.commands = total_commands;
        stats.triangles = triangles;
        stats.vertices = vertices;
        stats.fillrects = opcode_counts[0xF6];

        if (!verbose) {
            return;
        }

        fprintf(stderr, "[dl:mix] task #%u: %u commands walked, %u sub-lists entered, %u branches, max depth %u\n",
            task_index, total_commands, sublists_entered, branches_taken, deepest);
        fprintf(stderr, "[dl:mix] task #%u: %u triangles, %u vertices loaded\n",
            task_index, triangles, vertices);
        fprintf(stderr, "[dl:mix] task #%u: %u textured rectangles, %u of them glyph sized\n",
            task_index, stats.texrects, stats.glyph_texrects);
        fprintf(stderr, "[dl:text] task #%u: tiles configured mask=%02X\n",
            task_index, stats.tiles_configured);
        for (uint32_t i = 0; i < stats.pair_count; i++) {
            const GlyphColorPair& pair = stats.pairs[i];
            fprintf(stderr, "[dl:text] task #%u: %u glyphs prim=%08X env=%08X %s tile=%u othermode_h=%06X textLOD=%s\n",
                task_index, pair.count, pair.prim, pair.env,
                cycle_type_name(pair.cycle_type), pair.tile, pair.othermode_h,
                ((pair.othermode_h >> 16) & 1) ? "G_TL_LOD" : "G_TL_TILE");
            fprintf(stderr, "[dl:text] task #%u:   cycle0 rgb = (%s - %s) * %s + %s\n",
                task_index,
                combine_rgb_a((pair.combine_hi >> 20) & 0x0F),
                combine_rgb_b((pair.combine_lo >> 28) & 0x0F),
                combine_rgb_c((pair.combine_hi >> 15) & 0x1F),
                combine_rgb_d((pair.combine_lo >> 15) & 0x07));
            fprintf(stderr, "[dl:text] task #%u:   cycle1 rgb = (%s - %s) * %s + %s\n",
                task_index,
                combine_rgb_a((pair.combine_hi >> 5) & 0x0F),
                combine_rgb_b((pair.combine_lo >> 24) & 0x0F),
                combine_rgb_c(pair.combine_hi & 0x1F),
                combine_rgb_d((pair.combine_lo >> 6) & 0x07));
            fprintf(stderr, "[dl:text] task #%u:   cycle0 alpha = (%s - %s) * %s + %s\n",
                task_index,
                combine_alpha_abd((pair.combine_hi >> 12) & 0x07),
                combine_alpha_abd((pair.combine_lo >> 12) & 0x07),
                combine_alpha_c((pair.combine_hi >> 9) & 0x07),
                combine_alpha_abd((pair.combine_lo >> 9) & 0x07));
            fprintf(stderr, "[dl:text] task #%u:   cycle1 alpha = (%s - %s) * %s + %s\n",
                task_index,
                combine_alpha_abd((pair.combine_lo >> 21) & 0x07),
                combine_alpha_abd((pair.combine_lo >> 3) & 0x07),
                combine_alpha_c((pair.combine_lo >> 18) & 0x07),
                combine_alpha_abd(pair.combine_lo & 0x07));
        }
        report_block_rect(rdram, task_index, stats);
        report_glyph_tiles(rdram, task_index, stats);
        if (stack_overflows != 0) {
            fprintf(stderr, "[dl:mix] task #%u: %u G_DL calls exceeded the %u entry stack\n",
                task_index, stack_overflows, max_depth);
        }
        if (budget_exhausted) {
            fprintf(stderr, "[dl:mix] task #%u: stopped at the %u command budget; the list may be cyclic\n",
                task_index, command_budget);
        }

        for (uint32_t i = 0; i < color_image_count; i++) {
            fprintf(stderr, "[dl:cimg] task #%u: color image %u raw=%08X resolved=%08X (compare against [vi:swap] framebuffer)\n",
                task_index, i, color_images_raw[i], color_images[i]);
        }
        if (stats.extent_max_x > 0) {
            fprintf(stderr, "[dl:cimg] task #%u: drawn extents (%u,%u)-(%u,%u)\n",
                task_index, stats.extent_min_x, stats.extent_min_y,
                stats.extent_max_x, stats.extent_max_y);
        }
        fprintf(stderr, "[dl:cimg] task #%u: render target %s%s width=%u, scissor (%u,%u)-(%u,%u)\n",
            task_index, image_format_name(stats.cimg_fmt), image_size_name(stats.cimg_siz),
            stats.cimg_width,
            stats.scissor_ulx >> 2, stats.scissor_uly >> 2,
            stats.scissor_lrx >> 2, stats.scissor_lry >> 2);

        for (uint32_t op = 0; op < 256; op++) {
            if (opcode_counts[op] != 0) {
                fprintf(stderr, "[dl:mix]   %02X %-18s %u\n",
                    op, gbi_opcode_name((uint8_t)op), opcode_counts[op]);
            }
        }
        fflush(stderr);
    }
}

void ultramodern::submit_rsp_task(RDRAM_ARG PTR(OSTask) task_) {
    OSTask* task = TO_PTR(OSTask, task_);
    static std::atomic_uint32_t debug_task_count{0};
    uint32_t task_count = debug_task_count.fetch_add(1);
    // Also sample periodically, so a display list that keeps changing size can be
    // told apart from a frame that has gone static.
    if ((getenv("TUROK2_GFX_DIAGNOSTICS") != nullptr) &&
        (task_count < 8 || (task_count % 300) == 0)) {
        fprintf(stderr,
            "[rsp submit] #%u task=%08X type=%u flags=%08X ucode=%08X data=%08X data_size=%u output=%08X output_size=%08X\n",
            task_count, task_, task->t.type, task->t.flags, task->t.ucode,
            task->t.data_ptr, task->t.data_size, task->t.output_buff,
            task->t.output_buff_size);
    }

    // TEMPORARY DIAGNOSTIC: decode the graphics display list, following G_DL
    // into sub-lists, since the top level carries no geometry of its own.
    //
    // Measured results so far, with the recursive walk terminating cleanly on
    // matched G_ENDDLs (which is itself the strongest confirmation that the
    // F3DEX2 command numbering is the right one):
    //   task #0:   92 commands, 4 sub-lists, 0 triangles, 0 vertices.
    //              Mostly a clear: 4 G_FILLRECT, 2 G_SETCIMG, 1 G_SETZIMG.
    //   task #400: 2065 commands, 4 sub-lists, 0 triangles, 0 vertices, but
    //              109 G_TEXRECT and 192 G_SETTIMG/G_LOADBLOCK pairs.
    // So at this point the game is drawing a purely 2D screen: text and images
    // are blitted as textured rectangles, not as triangles. The absence of
    // triangle commands is therefore not a pipeline defect here. Note also that
    // only 4 G_SETCOMBINE cover all 109 rectangles while G_SETPRIMCOLOR and
    // G_SETENVCOLOR change 30 and 22 times, so per-rectangle tinting rides on
    // the primitive/environment colors rather than on the combiner.
    //
    // The earlier note that this was "a constant 448 byte list every frame" no
    // longer holds: the top level grows to 16232 bytes once the game is running.
    if ((getenv("TUROK2_GFX_DIAGNOSTICS") != nullptr) &&
        task->t.type == M_GFXTASK) {
        // Dump the first list and one from well after the opening sequence has
        // been triggered, so the two can be compared for geometry commands.
        static uint32_t gfx_index = 0;
        const uint32_t this_index = gfx_index++;

        // How often the game hands over a display list, which is its own render
        // rate as opposed to how often the result reaches the screen.
        {
            static const auto first = std::chrono::steady_clock::now();
            if ((this_index != 0) && ((this_index % 300) == 0)) {
                const double seconds = std::chrono::duration<double>(
                    std::chrono::steady_clock::now() - first).count();
                fprintf(stderr, "[gfx:rate] %u display lists in %.1fs = %.1f/s\n",
                    this_index, seconds, (seconds > 0.0) ? (this_index / seconds) : 0.0);
                fflush(stderr);
            }
        }

        // The frame that shows the symptom is not known in advance, so allow one
        // to be selected without rebuilding: TUROK2_DL_DUMP_FRAME=<n>.
        static const uint32_t requested_frame = []() -> uint32_t {
            const char* env = getenv("TUROK2_DL_DUMP_FRAME");
            return (env != nullptr) ? (uint32_t)strtoul(env, nullptr, 10) : 0xFFFFFFFFU;
        }();

        DisplayListStats stats;
        walk_gfx_display_list(rdram, task->t.data_ptr, task->t.data_size & 0x1FFFFFFFU,
                              this_index, false, stats);

        static bool first_tri_dumped = false;
        const bool verbose = (this_index == 0) || (this_index == 400) || (this_index == requested_frame) ||
            ((stats.triangles >= 80) && !first_tri_dumped);
        if ((stats.triangles >= 80) && !first_tri_dumped) {
            first_tri_dumped = true;
        }
        if (verbose) {
            DisplayListStats dump_stats;
            walk_gfx_display_list(rdram, task->t.data_ptr, task->t.data_size & 0x1FFFFFFFU,
                                  this_index, true, dump_stats);
        }

        // Optional compact frame trace used to correlate what a display list
        // rendered with the framebuffer selected by osViSwapBuffer.  This is
        // intentionally separate from the verbose command dump so a few
        // seconds of menu animation remain readable.
        if (getenv("TUROK2_GFX_FRAME_TRACE") != nullptr) {
            fprintf(stderr,
                "[gfx:frame] #%u target=%08X bytes=%u commands=%u fill=%u texrect=%u tri=%u glyph=%u extent=(%u,%u)-(%u,%u)\n",
                this_index, stats.cimg_address,
                task->t.data_size & 0x1FFFFFFFU, stats.commands,
                stats.fillrects, stats.texrects, stats.triangles,
                stats.glyph_texrects,
                stats.extent_min_x == 0xFFFFFFFFu ? 0 : stats.extent_min_x,
                stats.extent_min_y == 0xFFFFFFFFu ? 0 : stats.extent_min_y,
                stats.extent_max_x, stats.extent_max_y);
            fflush(stderr);
        }

        // Announce the first frame that draws glyph sized rectangles and then
        // sample periodically. This is what locates the frames where text is on
        // screen, together with the color pair each glyph was drawn with.
        static bool glyphs_reported = false;
        if ((stats.glyph_texrects != 0) && (!glyphs_reported || ((this_index % 300) == 0))) {
            glyphs_reported = true;
            fprintf(stderr, "[dl:text] task #%u: %u of %u rectangles glyph sized, tiles configured mask=%02X\n",
                this_index, stats.glyph_texrects, stats.texrects, stats.tiles_configured);
            for (uint32_t i = 0; i < stats.pair_count; i++) {
                const GlyphColorPair& pair = stats.pairs[i];
                fprintf(stderr, "[dl:text] task #%u:   x%u prim=%08X env=%08X %s tile=%u othermode_h=%06X textLOD=%s\n",
                    this_index, pair.count, pair.prim, pair.env,
                    cycle_type_name(pair.cycle_type), pair.tile, pair.othermode_h,
                    ((pair.othermode_h >> 16) & 1) ? "G_TL_LOD" : "G_TL_TILE");
                fprintf(stderr, "[dl:text] task #%u:     cycle0 rgb = (%s - %s) * %s + %s\n",
                    this_index,
                    combine_rgb_a((pair.combine_hi >> 20) & 0x0F),
                    combine_rgb_b((pair.combine_lo >> 28) & 0x0F),
                    combine_rgb_c((pair.combine_hi >> 15) & 0x1F),
                    combine_rgb_d((pair.combine_lo >> 15) & 0x07));
                fprintf(stderr, "[dl:text] task #%u:     cycle1 rgb = (%s - %s) * %s + %s\n",
                    this_index,
                    combine_rgb_a((pair.combine_hi >> 5) & 0x0F),
                    combine_rgb_b((pair.combine_lo >> 24) & 0x0F),
                    combine_rgb_c(pair.combine_hi & 0x1F),
                    combine_rgb_d((pair.combine_lo >> 6) & 0x07));
            }
            report_block_rect(rdram, this_index, stats);
            report_glyph_tiles(rdram, this_index, stats);
            fflush(stderr);
        }
    }

    // Send gfx tasks to the graphics action queue
    if (task->t.type == M_GFXTASK) {
        OSTask normalized_task = *task;

        // Turok 2 builds its display lists through a KSEG0 alias while keeping
        // the task buffer base as a physical RDRAM address. The original RSP
        // only observes the low physical address bits, but subtracting those
        // mixed aliases on the recompiled CPU leaves bit 31 set in data_size
        // (for example 0x800001A0 instead of 0x1A0). Strip the address-space
        // alias from this byte count before handing the task to RT64.
        if ((normalized_task.t.data_size & 0x80000000U) != 0) {
            normalized_task.t.data_size &= 0x1FFFFFFFU;
        }

        if ((getenv("TUROK2_GFX_DIAGNOSTICS") != nullptr) && task_count < 32 &&
            normalized_task.t.data_size != task->t.data_size) {
            fprintf(stderr, "[rsp normalize] data_size=%u\n", normalized_task.t.data_size);
        }

        events_context.action_queue.enqueue(SpTaskAction{ normalized_task });
    }
    // Set all other tasks as the RSP task
    else {
        events_context.sp_task_queue.enqueue(task);
    }
}

void ultramodern::send_si_message() {
    ultramodern::enqueue_external_message_src(events_context.si.mq, events_context.si.msg, false, ultramodern::EventMessageSource::Si);
}

// TEMPORARY DIAGNOSTIC: the base of emulated RDRAM, exported under a plain name
// so a debugger can turn an N64 address into a host address without having to dig
// through the runtime's internals. A write watchpoint here is the tool that names
// whoever is corrupting memory:
//
//   watchpoint set expression -w write -s 4 -- (void*)(turok2_rdram_base + 0xD8158)
//
extern "C" uint8_t* turok2_rdram_base = nullptr;

void ultramodern::init_events(RDRAM_ARG ultramodern::renderer::WindowHandle window_handle) {
    moodycamel::LightweightSemaphore gfx_thread_ready;
    moodycamel::LightweightSemaphore task_thread_ready;
    events_context.rdram = rdram;
    turok2_rdram_base = rdram;
    fprintf(stderr, "[rdram] base=%p (N64 0x80000000 maps here)\n", (void*)rdram);
    fflush(stderr);
    events_context.sp.gfx_thread = std::thread{ gfx_thread_func, rdram, &gfx_thread_ready, window_handle };
    events_context.sp.task_thread = std::thread{ task_thread_func, rdram, &task_thread_ready };

    // Wait for the two sp threads to be ready before continuing to prevent the game from
    // running before we're able to handle RSP tasks.
    gfx_thread_ready.wait();
    task_thread_ready.wait();

    ultramodern::renderer::SetupResult setup_result = renderer_setup_result.load();
    if (setup_result != ultramodern::renderer::SetupResult::Success) {
        auto show_renderer_error = [](const std::string& msg) {
            std::string error_msg = "An error has been encountered on startup: " + msg;

            ultramodern::error_handling::message_box(error_msg.c_str());
        };

        const std::string driver_os_suffix = "\nPlease make sure your GPU drivers and your OS are up to date.";
        switch (setup_result) {
            case ultramodern::renderer::SetupResult::Success:
                break;
            case ultramodern::renderer::SetupResult::DynamicLibrariesNotFound:
                show_renderer_error("Failed to load dynamic libraries. Make sure the DLLs are next to the recomp executable.");
                break;
            case ultramodern::renderer::SetupResult::InvalidGraphicsAPI:
                show_renderer_error(ultramodern::renderer::get_graphics_api_name(renderer_chosen_api.load()) + " is not supported on this platform. Please select a different graphics API.");
                break;
            case ultramodern::renderer::SetupResult::GraphicsAPINotFound:
                show_renderer_error("Unable to initialize " + ultramodern::renderer::get_graphics_api_name(renderer_chosen_api.load()) + "." + driver_os_suffix);
                break;
            case ultramodern::renderer::SetupResult::GraphicsDeviceNotFound:
                show_renderer_error("Unable to find compatible graphics device." + driver_os_suffix);
                break;
        }
        throw std::runtime_error("Failed to initialize the renderer");
    }

    events_context.vi.thread = std::thread{ vi_thread_func };
}

void ultramodern::join_event_threads() {
    events_context.sp.gfx_thread.join();
    events_context.vi.thread.join();

    // Send a null RSP task to indicate that the RSP task thread should exit.
    events_context.sp_task_queue.enqueue(nullptr);
    events_context.sp.task_thread.join();
}
