#include "turok2_patches.h"
#include "crash_diagnostics.h"
#include "debug_tools.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <unordered_map>
#include <vector>

#include "librecomp/game.hpp"
#include "hle/rt64_turok2_adon_cover.h"

// Unique 60 Hz Update/Draw for gameplay and cinema. Authored cinema keys are
// float seconds: CIN_Update_Time (func_00284568 / func_00283CD4) does
// currentTime += gFrameIncrement * (1/15). With ticks=1 and
// increment = 15/gRefreshRate = 0.25, one second of cinema time still lasts
// one real second. Intermediate poses are the engine's own float lerp, not
// RT64 frame-matching. The N64 VI stays at 60 so audio mixing is not doubled.
// TUROK2_AUTHORED_CADENCE=1 restores the original 30/15 Hz scheduler.
// Unique 120 is the default: increment 0.125, leftover += 0.125, host VI 120,
// AI still every other tick. TUROK2_UNIQUE_60=1 drops back to 60 for A/B
// measurement only.

constexpr int32_t kNextTicks = 0x8011AD10;
constexpr int32_t kFrameIncrement = 0x800B6D28;
constexpr int32_t kRefreshRate = 0x8011B0A4;

static bool env_flag_on(const char* name) {
    const char* value = std::getenv(name);
    return value != nullptr && value[0] != '\0' &&
           std::strcmp(value, "0") != 0;
}

// Menu Graphics → Hz (0 Original, 1=60, 2=120). Env still wins for A/B:
// TUROK2_AUTHORED_CADENCE=1, TUROK2_UNIQUE_60=1.
static std::atomic<int> g_menu_engine_hz{2};

static int env_engine_hz_override() {
    static const int cached = [] {
        if (env_flag_on("TUROK2_AUTHORED_CADENCE")) {
            return 0;
        }
        if (env_flag_on("TUROK2_UNIQUE_60")) {
            return 1;
        }
        return -1;
    }();
    return cached;
}

static int effective_engine_hz() {
    const int env = env_engine_hz_override();
    if (env >= 0) {
        return env;
    }
    return g_menu_engine_hz.load(std::memory_order_relaxed);
}

static bool preserve_authored_cadence() {
    return effective_engine_hz() == 0;
}

static bool unique_120_enabled() {
    return effective_engine_hz() == 2;
}

static const char* engine_mode_name() {
    switch (effective_engine_hz()) {
    case 0:
        return "original";
    case 1:
        return "unique60";
    default:
        return "unique120";
    }
}

extern "C" void turok2_set_engine_hz(int mode) {
    if (mode < 0 || mode > 2) {
        mode = 2;
    }
    const int prev = g_menu_engine_hz.exchange(mode, std::memory_order_relaxed);
    if (prev != mode) {
        std::fprintf(stderr, "[fps:engine] menu hz=%s (env override=%d)\n",
                     engine_mode_name(), env_engine_hz_override());
    }
}

extern "C" uint32_t turok2_host_vi_hz(void) {
    return unique_120_enabled() ? 120u : 60u;
}

extern "C" int turok2_engine_hz_mode(void) {
    return effective_engine_hz();
}

static std::atomic<float> g_fov_scale{1.0f};

static float env_scale_override(const char* name, float fallback, float lo, float hi) {
    const char* text = std::getenv(name);
    if (text == nullptr || *text == '\0') {
        return fallback;
    }
    const float requested = std::strtof(text, nullptr);
    if (!std::isfinite(requested)) {
        return fallback;
    }
    return requested < lo ? lo : (requested > hi ? hi : requested);
}

extern "C" void turok2_set_camera_scales(float fov_scale) {
    if (!std::isfinite(fov_scale)) {
        g_fov_scale.store(1.0f, std::memory_order_relaxed);
        return;
    }
    const float clamped = fov_scale < 1.0f ? 1.0f : (fov_scale > 1.5f ? 1.5f : fov_scale);
    g_fov_scale.store(clamped, std::memory_order_relaxed);
}

static float camera_fov_scale() {
    return env_scale_override("TUROK2_FOV_SCALE",
                              g_fov_scale.load(std::memory_order_relaxed),
                              1.0f, 1.5f);
}

// RDP gSPFogPosition min. Packed int CCamera.m_FogStart (+0x524) keeps the
// 0-1000 fog min in its low 16 bits. This is the shipped floor that keeps the
// fog wall off the authored N64 range; it is not a user setting.
static constexpr float kFogDistanceScale = 2.0f;

static float load_f32(uint8_t* rdram, int32_t addr) {
    const uint32_t bits = static_cast<uint32_t>(MEM_W(addr, 0));
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

static void store_f32(uint8_t* rdram, int32_t addr, float value) {
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    MEM_W(addr, 0) = static_cast<int32_t>(bits);
}

// Set from Cinema_PathPlaying in lock_increment. Authored cinema is 15
// Updates/s (increment 1.0); authored gameplay is 30 (increment 0.5).
static bool g_cinema = false;

// Unique 60/120 keep real-time with a smaller step. Leftovers that still
// `+= const` / index gFrameCount need this factor so N unique poses cover
// one authored second. Cinema uses /1.0 (15 steps/s); gameplay /0.5.
static float visual_step_scale(uint8_t* rdram) {
    if (preserve_authored_cadence()) {
        return 1.0f;
    }
    const float increment = load_f32(rdram, kFrameIncrement);
    if (!std::isfinite(increment)) {
        return 1.0f;
    }
    if (increment <= 0.0f) {
        return 0.0f;
    }
    return increment / (g_cinema ? 1.0f : 0.5f);
}

static uint32_t g_update_gen = 0;

// TUROK2_CINEMA_AUTHORED=1 leaves cinema on the engine's own ticks (4 at NTSC
// 60, so 15 Hz) while gameplay stays unique 60. Tried against the Adon
// flat-frame flicker and it did NOT help: cinema at 15 Hz still flickers while
// full TUROK2_AUTHORED_CADENCE (cinema at 30 Hz) almost does not, so cinema
// cadence is not the variable. Kept only as a cadence experiment knob.
static bool cinema_authored_cadence() {
    static const bool enabled = env_flag_on("TUROK2_CINEMA_AUTHORED");
    return enabled && !preserve_authored_cadence();
}

extern "C" void turok2_patch_restore_resource_table(uint8_t* rdram, recomp_context* ctx);
extern "C" void turok2_patch_native_60(uint8_t* rdram, recomp_context* ctx) {
    // Refresh the per-thread snapshot once per engine update. This gives a
    // later native SIGSEGV/SIGBUS useful guest state even when no jalr failed.
    turok2_diag_capture(rdram, ctx, 0x00288004u, 0);
    // One VI field per Update (gameplay and cinema). The following load at
    // 0x00288008 rebuilds gFrameIncrement from this value, and
    // turok2_patch_lock_increment replaces cinema's wall-clock catch-up with
    // the same 0.25 step so paths do not skip.
    if (!preserve_authored_cadence() && !(cinema_authored_cadence() && g_cinema)) {
        MEM_W(kNextTicks, 0) = 1;
        g_update_gen++;
    }
    turok2_patch_restore_resource_table(rdram, ctx);
    turok2_debug_tick(rdram, g_cinema ? 1 : 0);
}

static void apply_native_increment(uint8_t* rdram) {
    if (preserve_authored_cadence()) {
        return;
    }
    // Leave cinema on the engine's own ticks and its own increment.
    if (cinema_authored_cadence() && g_cinema) {
        return;
    }
    MEM_W(kNextTicks, 0) = 1;
    // Keep guest gRefreshRate at NTSC 60. Unique 120 only halves the
    // 15 Hz-unit step so 120 Updates still advance one authored second.
    const float refresh = load_f32(rdram, kRefreshRate);
    const float increment = unique_120_enabled()
        ? 0.125f
        : ((refresh > 1.0f) ? (15.0f / refresh) : 0.25f);
    store_f32(rdram, kFrameIncrement, increment);
    static bool announced = false;
    if (!announced && unique_120_enabled()) {
        announced = true;
        std::fprintf(stderr,
            "[fps:engine] unique120 increment=0.125 leftover=0.125 "
            "vi=120 ai=60 interp=off\n");
    }
}

extern "C" void turok2_patch_lock_increment(uint8_t* rdram, recomp_context* ctx) {
    // $v0 is still Cinema_PathPlaying. Replace cinema's noisy wall-clock
    // increment with the retrace-derived step. ticks=1 → 0.25 at NTSC 60, so
    // currentTime advances at the authored 15 units/s even while Draw runs
    // at 60 unique display lists.
    const int cinema = (ctx->r2 != 0);
    g_cinema = (cinema != 0);
    apply_native_increment(rdram);
    turok2_debug_tick(rdram, cinema);
    const float refresh = load_f32(rdram, kRefreshRate);
    const int32_t ticks = std::clamp<int32_t>(MEM_W(kNextTicks, 0), 1, 12);
    const float increment = load_f32(rdram, kFrameIncrement);

    if (std::getenv("TUROK2_FPS_DIAGNOSTICS") != nullptr) {
        using Clock = std::chrono::steady_clock;
        static auto interval_start = Clock::now();
        static uint64_t updates = 0;
        updates++;
        const auto now = Clock::now();
        const double seconds = std::chrono::duration<double>(now - interval_start).count();
        if (seconds >= 1.0) {
            std::fprintf(stderr,
                         "[fps:engine] updates=%.1f/s ticks=%d increment=%.4f refresh=%.2f cinema=%d mode=%s\n",
                         static_cast<double>(updates) / seconds, ticks, increment,
                         refresh, cinema,
                         engine_mode_name());
            updates = 0;
            interval_start = now;
        }
    }
}

extern "C" void turok2_patch_relock_increment(uint8_t* rdram, recomp_context* ctx) {
    (void)ctx;
    // 0x00288080 may rewrite increment as ticks/60 (0.0167) after the first
    // lock. Put the 15 Hz-unit step back so later systems keep authored time.
    apply_native_increment(rdram);
}

static bool guest_kseg0(uint32_t addr) {
    return (addr >= 0x80000000u) && (addr < 0x80800000u);
}

// Integer leftover `+= 1` / `-= 1`. Authored rate is 30 steps/s (gameplay
// Update, or Draw for the frontend wait list). Unique 60/120 can tick the
// same word from Update and Draw in one VI — leftover_delta() per call
// then double-counts and stays 2×. Accumulate wall-clock time instead so
// call frequency does not change duration.
struct LeftoverClock {
    float held = 0.0f;
    std::chrono::steady_clock::time_point last{};
    bool armed = false;
};

// Same wall-clock leftover as 0x6D20 (turok2_patch_scale_frame_aux):
// accumulate min(dt, 0.05) * (30 gameplay / 15 cinema), consume at 1.0.
// Returns true when this call should apply the authored step. Water and
// the totem laser allow the first increment; one-shot death and the
// proximity nFrames store must not — the first unique Update is the 4×.
static bool leftover_step(LeftoverClock& clock, bool allow_first) {
    const auto now = std::chrono::steady_clock::now();
    if (!clock.armed) {
        clock.armed = true;
        clock.last = now;
        return allow_first;
    }
    const float dt = std::chrono::duration<float>(now - clock.last).count();
    clock.last = now;
    clock.held += std::min(dt, 0.05f) * (g_cinema ? 15.0f : 30.0f);
    if (clock.held >= 1.0f) {
        clock.held -= 1.0f;
        return true;
    }
    return false;
}

static void scale_int8_after_step(recomp_context* ctx, uint32_t key,
                                  std::unordered_map<uint32_t, LeftoverClock>& accum,
                                  int32_t applied_delta) {
    if (preserve_authored_cadence() || !guest_kseg0(key)) {
        return;
    }
    const int32_t after = static_cast<int32_t>(ctx->r2);
    const int32_t before = after - applied_delta;
    LeftoverClock& clock = accum[key];
    const auto now = std::chrono::steady_clock::now();
    if (!clock.armed) {
        clock.armed = true;
        clock.last = now;
    } else {
        const float dt = std::chrono::duration<float>(now - clock.last).count();
        clock.last = now;
        clock.held += std::min(dt, 0.05f) * 30.0f;
    }
    if (clock.held < 1.0f) {
        ctx->r2 = before;
        return;
    }
    clock.held -= 1.0f;
    if ((applied_delta < 0) && (after <= 0)) {
        accum.erase(key);
    }
}

extern "C" void turok2_patch_scale_freeze(uint8_t* rdram, recomp_context* ctx) {
    // func_00245848: CAI.m_FreezeTime (CAI+0xC9) does `timer -= 1` and then
    // zeros gFrameIncrement. Authored gameplay consumes one count per 30 Hz
    // Update (N/30 s). Unique 60 would finish in N/60 s without this hook.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r16), accum, -1);
}

extern "C" void turok2_patch_scale_flinch_s0(uint8_t* rdram, recomp_context* ctx) {
    // func_0021B95C at 0x0021C3D0: CAI.m_FlinchCountdown (CAI+0x12) -= 1.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r16), accum, -1);
}

extern "C" void turok2_patch_scale_flinch_s3(uint8_t* rdram, recomp_context* ctx) {
    // func_0021F7F4 at 0x0021F944: same field, CAI in $s3 ($a1).
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r19), accum, -1);
}

extern "C" void turok2_patch_scale_hurt_sfx(uint8_t* rdram, recomp_context* ctx) {
    // func_0025C5F8 at 0x0025C69C: CAI.m_LastHurtSFXTimer += 1 until 100.
    // Hurt sound plays when the timer is >= 11, then the byte is cleared.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r16), accum, 1);
}

extern "C" void turok2_patch_scale_swoosh_edge(uint8_t* rdram, recomp_context* ctx) {
    // func_00235FF4 at 0x00236008: $s0 is the free CSwooshEdge, $a1 is the
    // CSwoosh. Multiple callers can jal add-edge in one Update. Keep one
    // allocate per Update so 60/120 DLs get a denser ribbon, not 2×/4×
    // leftover adds. UV crawl is scaled separately at 0x0023350C.
    (void)rdram;
    if (preserve_authored_cadence()) {
        return;
    }
    const uint32_t swoosh = static_cast<uint32_t>(ctx->r5);
    if (!guest_kseg0(swoosh)) {
        return;
    }
    static std::unordered_map<uint32_t, uint32_t> last_gen;
    static uint32_t adds = 0;
    static uint32_t skips = 0;
    uint32_t& seen = last_gen[swoosh];
    if (seen == g_update_gen) {
        ctx->r16 = 0;
        skips++;
    } else {
        seen = g_update_gen;
        adds++;
    }
    if (std::getenv("TUROK2_FPS_DIAGNOSTICS") != nullptr) {
        using Clock = std::chrono::steady_clock;
        static auto interval_start = Clock::now();
        const auto now = Clock::now();
        const double seconds = std::chrono::duration<double>(now - interval_start).count();
        if (seconds >= 1.0) {
            std::fprintf(stderr, "[swoosh] add=%.1f/s skip=%.1f/s\n",
                         static_cast<double>(adds) / seconds,
                         static_cast<double>(skips) / seconds);
            adds = 0;
            skips = 0;
            interval_start = now;
        }
    }
}

extern "C" void turok2_patch_scale_swoosh_uv(uint8_t* rdram, recomp_context* ctx) {
    // func_002333C0 at 0x0023350C: m_uCurrentTexture += dist * 0.005.
    // One add per Update at unique 60/120 would crawl 2×/4× without this.
    const float scale = visual_step_scale(rdram);
    if (scale == 1.0f) {
        return;
    }
    CHECK_FR(ctx, 0);
    if (std::isfinite(ctx->f0.fl)) {
        ctx->f0.fl *= scale;
    }
}

extern "C" void turok2_patch_scale_overlay_lerp(uint8_t* rdram, recomp_context* ctx) {
    // func_00277328 mode 4: pos += (final-pos) * ZoomFactor. ZoomFactor is
    // the per-Update lerp k, not increment-scaled.
    const float scale = visual_step_scale(rdram);
    if (scale == 1.0f) {
        return;
    }
    CHECK_FR(ctx, 3);
    if (std::isfinite(ctx->f3.fl)) {
        ctx->f3.fl *= scale;
    }
}

extern "C" void turok2_patch_scale_overlay_f0(uint8_t* rdram, recomp_context* ctx) {
    // func_00277328 modes 5/6: after `mov.s $f1, $f0`, scale $f0 so
    // pos += vel * s and later vel += accel * s. Do not hook the mov
    // itself — that would bake s into the stored velocity.
    const float scale = visual_step_scale(rdram);
    if (scale == 1.0f) {
        return;
    }
    CHECK_FR(ctx, 0);
    if (std::isfinite(ctx->f0.fl)) {
        ctx->f0.fl *= scale;
    }
}

extern "C" void turok2_patch_scale_overlay_wait(uint8_t* rdram, recomp_context* ctx) {
    // Word wait `timer -= 1` with $a0 = object and $v0 already stepped.
    // COverlay mode 3 (func_00277328) and the frontend delayed-callback
    // list at 0x800F56B0. Update inlines one slot (func_0027BC68);
    // Draw walks the list (func_0027BB80 → overlay 0x0042/0x0046).
    // Wall-clock leftover so Update+Draw on the same word stay 30/s.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r4), accum, -1);
}

extern "C" void turok2_patch_wave_every_update(uint8_t* rdram, recomp_context* ctx) {
    // func_00214844 / entry_00214F68 skip vertex-color waves on odd
    // gFrameCount (0x800B6D18). Unique 60/120 would still run 2×/4× and
    // skip the in-between samples. Force the even-frame gate open.
    (void)rdram;
    if (preserve_authored_cadence()) {
        return;
    }
    ctx->r2 = 0;
}

extern "C" void turok2_patch_scale_wave_index(uint8_t* rdram, recomp_context* ctx) {
    // After `addu $v0, $s2, $v0` the table index is frame + phase.
    // Do not leftover-scale the stored gFrameCount — that desyncs the
    // FB modulo from 0x6D1C and hangs boot on a black VI.
    if (preserve_authored_cadence()) {
        return;
    }
    const float scale = visual_step_scale(rdram);
    const uint32_t sum = static_cast<uint32_t>(ctx->r2);
    const uint32_t frame = static_cast<uint32_t>(ctx->r18);
    const uint32_t phase = sum - frame;
    ctx->r2 = static_cast<int32_t>(
        static_cast<uint32_t>(static_cast<float>(frame) * scale) + phase);
}

static void scale_loaded_frame(uint8_t* rdram, gpr* reg) {
    if (preserve_authored_cadence()) {
        return;
    }
    const float scale = visual_step_scale(rdram);
    if (scale == 1.0f) {
        return;
    }
    const uint32_t frame = static_cast<uint32_t>(*reg);
    *reg = static_cast<int32_t>(static_cast<uint32_t>(
        static_cast<float>(frame) * scale));
}

extern "C" void turok2_patch_scale_frame_a1(uint8_t* rdram, recomp_context* ctx) {
    scale_loaded_frame(rdram, &ctx->r5);
}

extern "C" void turok2_patch_scale_frame_t0(uint8_t* rdram, recomp_context* ctx) {
    scale_loaded_frame(rdram, &ctx->r8);
}

extern "C" void turok2_patch_frame_lsb_dirty(uint8_t* rdram, recomp_context* ctx) {
    // func_002152AC at 0x002152E0: $v1 is CGameSimpleInstance.m_DrawFrame
    // (+0x194), $v0 is gFrameCount LSB (0x800B6D1B). Equal → skip the write
    // into m_mOrientation[0x6D1C] and still draw that slot. Leftover-holding
    // the LSB would skip more often while 0x6D1C keeps flipping — empty mtx,
    // fog-colored frame. Force a mismatch in cinema so the current slot is
    // always rebuilt. Init already stores LSB-1; this covers the 256-wrap
    // and same-Draw double-call cases. TUROK2_NO_6D1B_DIRTY=1 for A/B.
    (void)rdram;
    const uint8_t cached = static_cast<uint8_t>(ctx->r3);
    const uint8_t lsb = static_cast<uint8_t>(ctx->r2);
    const bool would_skip = cached == lsb;
    if (g_cinema) {
        if (would_skip) {
            g_turok2_lsb_skip_acc.fetch_add(1, std::memory_order_relaxed);
        } else {
            g_turok2_lsb_rebuild_acc.fetch_add(1, std::memory_order_relaxed);
        }
    }
    static const bool disabled = env_flag_on("TUROK2_NO_6D1B_DIRTY");
    if (preserve_authored_cadence() || disabled || !g_cinema || !would_skip) {
        return;
    }
    ctx->r2 = static_cast<int32_t>(static_cast<uint8_t>(cached ^ 1u));
}

// TUROK2_FIND_TIMERS=1 sweeps RDRAM once per Draw and reports every word
// that fell by exactly 1 since the previous Draw for many Draws in a row.
// Authored waits are "N frames at 30 Draw/s"; at unique 60 they drain 2x.
// This names the address instead of guessing which -= 1 site is visible.
static float bits_to_float(uint32_t bits) {
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

// Regions whose per-Draw words must keep running at the real Draw rate.
// Holding any of these back is what froze boot on a black VI.
static bool clock_region_denied(uint32_t addr) {
    // gFrameCount, 0x6D20, the odd/even framebuffer xor and gFrameIncrement.
    if (addr >= 0x800B6C00u && addr < 0x800B6E00u) return true;
    // Thread stacks (tops 800C7C80, 800CFC80, 800D81B0, 800D2B40,
    // 800D8D68, 800D1C80). A matching "clock" there is a stack local.
    if (addr >= 0x800C7000u && addr < 0x800DA000u) return true;
    if (addr >= 0x80120000u && addr < 0x80123000u) return true;
    // OS scheduler block around gNextTicks.
    if (addr >= 0x8011AD00u && addr < 0x8011AD60u) return true;
    return false;
}

// One authored step per wall-clock tick: 30/s gameplay, 15/s cinema.
// Between steps every governed clock is rewound, so a word that the
// engine advances once per Draw ends up advancing at the authored rate
// while Draw itself keeps running at 60.
static bool governor_step_this_draw() {
    static LeftoverClock clock;
    const float rate = g_cinema ? 15.0f : 30.0f;
    const auto now = std::chrono::steady_clock::now();
    if (!clock.armed) {
        clock.armed = true;
        clock.last = now;
        return true;
    }
    const float dt = std::chrono::duration<float>(now - clock.last).count();
    clock.last = now;
    clock.held += std::min(dt, 0.05f) * rate;
    if (clock.held < 1.0f) {
        return false;
    }
    clock.held -= 1.0f;
    return true;
}

// TUROK2_BOOT_TIMELINE=1 logs the first change of every engine global
// during boot, with both the Draw number and the wall clock. Run it in
// both cadences: a state word that flips on the *same Draw* but at
// half the wall time is counted in frames, which is the 2x bug. One
// that flips at the same wall time is already real-time.
static void boot_timeline(uint8_t* rdram) {
    static const bool enabled = env_flag_on("TUROK2_BOOT_TIMELINE");
    if (!enabled) {
        return;
    }
    constexpr uint32_t kLo = 0x800B0000u;
    constexpr uint32_t kWords = (0x80140000u - kLo) / 4u;
    constexpr uint32_t kMaxDraw = 2500;
    constexpr int kMaxLogged = 1500;
    static std::vector<int32_t> prev;
    static std::vector<uint8_t> seen;
    static uint32_t draw = 0;
    static int logged = 0;
    static auto start = std::chrono::steady_clock::now();

    if (prev.empty()) {
        prev.assign(kWords, 0);
        seen.assign(kWords, 0);
        for (uint32_t i = 0; i < kWords; ++i) {
            prev[i] = MEM_W(static_cast<int32_t>(kLo + i * 4u), 0);
        }
        start = std::chrono::steady_clock::now();
        return;
    }
    ++draw;
    if (draw > kMaxDraw || logged >= kMaxLogged) {
        return;
    }
    const float elapsed = std::chrono::duration<float>(
        std::chrono::steady_clock::now() - start).count();
    for (uint32_t i = 0; i < kWords; ++i) {
        const int32_t value = MEM_W(static_cast<int32_t>(kLo + i * 4u), 0);
        if (value == prev[i]) {
            continue;
        }
        if (!seen[i]) {
            seen[i] = 1;
            ++logged;
            std::fprintf(stderr, "[boot] addr=%08X draw=%u t=%.2f %08X->%08X\n",
                         kLo + i * 4u, draw, elapsed,
                         static_cast<uint32_t>(prev[i]),
                         static_cast<uint32_t>(value));
        }
        prev[i] = value;
    }
}

// Attract-mode demo instrumentation.
//
// The menu idle countdown D_8011AD40 is ~120 s, which makes every demo test
// cost two minutes of standing still. TUROK2_ATTRACT_FAST=<seconds> caps it so
// a demo starts in a few seconds instead. It only ever lowers the value, so it
// cannot make the countdown run backwards into a retrigger loop.
//
// TUROK2_DEMO_TRACE=1 then logs the frontend words that bracket a demo, each
// with the Draw number and the wall clock. That pairing is the whole point: a
// demo whose start and end land on the same Draw count but at half the wall
// time in unique 120 is being consumed per tick, which is the water/laser bug
// again. One that spans the same wall time is already real-time and the fault
// is elsewhere.
static void attract_demo_probe(uint8_t* rdram) {
    constexpr int32_t kAttractGate = 0x800B6D64;  // D_800B6D64, 0 = attract off
    constexpr int32_t kIdleCountdown = 0x8011AD40; // float seconds to demo
    constexpr int32_t kFrontendState = 0x8011B110; // frontend state machine
    constexpr int32_t kDemoOpening = 0x8011B118;   // set to 1 at timeout

    static const bool trace = env_flag_on("TUROK2_DEMO_TRACE");
    static const float fast_seconds = []() {
        const char* text = std::getenv("TUROK2_ATTRACT_FAST");
        if (text == nullptr || *text == '\0') {
            return 0.0f;
        }
        const float requested = std::strtof(text, nullptr);
        return std::isfinite(requested) && requested > 0.0f ? requested : 3.0f;
    }();
    if (!trace && fast_seconds <= 0.0f) {
        return;
    }

    static uint32_t draw = 0;
    static auto start = std::chrono::steady_clock::now();
    ++draw;
    const float now = std::chrono::duration<float>(
        std::chrono::steady_clock::now() - start).count();

    if (fast_seconds > 0.0f && MEM_W(kAttractGate, 0) != 0) {
        const float remaining = load_f32(rdram, kIdleCountdown);
        if (remaining > fast_seconds) {
            store_f32(rdram, kIdleCountdown, fast_seconds);
        }
    }

    if (!trace) {
        return;
    }
    struct Watch {
        const char* name;
        int32_t addr;
    };
    static const Watch watches[] = {
        {"gate", kAttractGate},
        {"state", kFrontendState},
        {"opening", kDemoOpening},
    };
    // Periodic sample as well as edges. Without it a silent log is ambiguous
    // between "the demo never started" and "these are the wrong addresses".
    if ((draw % 120u) == 0u) {
        std::fprintf(stderr, "[demo] sample  draw=%u t=%.2f gate=%d state=%d open=%d idle=%.2f\n",
                     draw, now, MEM_W(kAttractGate, 0), MEM_W(kFrontendState, 0),
                     MEM_W(kDemoOpening, 0), load_f32(rdram, kIdleCountdown));
    }

    static int32_t previous[3] = {0, 0, 0};
    static bool primed = false;
    for (size_t i = 0; i < 3; ++i) {
        const int32_t value = MEM_W(watches[i].addr, 0);
        if (primed && value != previous[i]) {
            std::fprintf(stderr, "[demo] %-7s draw=%u t=%.2f %d -> %d  idle=%.2f\n",
                         watches[i].name, draw, now, previous[i], value,
                         load_f32(rdram, kIdleCountdown));
        }
        previous[i] = value;
    }
    primed = true;
}

static void find_frame_timers(uint8_t* rdram) {
    static const bool report_on = env_flag_on("TUROK2_FIND_TIMERS");
    static const bool govern_on = env_flag_on("TUROK2_CLOCK_GOVERNOR") &&
                                  !preserve_authored_cadence();
    if (!report_on && !govern_on) {
        return;
    }
    const bool step_now = govern_on ? governor_step_this_draw() : true;
    const float increment = load_f32(rdram, kFrameIncrement);
    constexpr uint32_t kBase = 0x80000000u;
    constexpr uint32_t kWords = 0x00800000u / 4u;
    constexpr uint16_t kMinStreak = 12;
    constexpr int kMaxReports = 400;
    static std::vector<int32_t> previous;
    static std::vector<int32_t> last_delta;
    static std::vector<float> last_fdelta;
    static std::vector<uint16_t> streak;
    static std::vector<uint16_t> fstreak;
    static std::vector<uint8_t> reported;
    static std::vector<uint8_t> governed;
    static uint32_t draw = 0;
    static int reports = 0;
    static uint64_t g_gov_rewinds = 0;
    static uint32_t g_gov_addresses = 0;

    if (previous.empty()) {
        previous.assign(kWords, 0);
        last_delta.assign(kWords, 0);
        last_fdelta.assign(kWords, 0.0f);
        streak.assign(kWords, 0);
        fstreak.assign(kWords, 0);
        reported.assign(kWords, 0);
        governed.assign(kWords, 0);
    }
    ++draw;
    if (reports >= kMaxReports && !govern_on) {
        return;
    }
    // A word that mirrors gFrameCount is a "last used" timestamp, not a
    // wait. The resource cache keeps ~90 of them and they must not lag.
    const int32_t frame_count = MEM_W(0x800B6D18, 0);
    // Report units per real second, not per Draw. Authored cadence draws
    // 30x/s and unique 60 draws 60x/s, so only the per-second rate is
    // comparable between the two runs. Equal rate = already real-time.
    static auto rate_start = std::chrono::steady_clock::now();
    const float elapsed = std::chrono::duration<float>(
        std::chrono::steady_clock::now() - rate_start).count();
    const float draw_rate = elapsed > 0.5f ? (draw / elapsed) : 60.0f;

    const bool first = draw == 1;
    for (uint32_t i = 0; i < kWords; ++i) {
        const int32_t value =
            MEM_W(static_cast<int32_t>(kBase + i * 4u), 0);
        const int32_t was = previous[i];
        if (first) {
            previous[i] = value;
            continue;
        }
        // Integer clock: same small non-zero step every Draw.
        const int32_t delta = value - was;
        if (delta != 0 && delta == last_delta[i] && std::abs(delta) <= 16) {
            if (streak[i] < 0xFFFF) {
                ++streak[i];
            }
        } else {
            streak[i] = 0;
        }
        last_delta[i] = delta;

        // Float clock: `x += const`. The raw bit delta halves at every
        // binade, so compare the decoded float step, not the word step.
        const float now_f = bits_to_float(static_cast<uint32_t>(value));
        const float was_f = bits_to_float(static_cast<uint32_t>(was));
        const float fdelta = now_f - was_f;
        const bool float_clock =
            std::isfinite(now_f) && std::isfinite(was_f) &&
            std::fabs(now_f) < 1e7f && fdelta != 0.0f &&
            std::fabs(fdelta) > 1e-5f && std::fabs(fdelta) < 1e4f &&
            std::fabs(fdelta - last_fdelta[i]) <=
                std::fabs(fdelta) * 1e-3f;
        if (float_clock) {
            if (fstreak[i] < 0xFFFF) {
                ++fstreak[i];
            }
        } else {
            fstreak[i] = 0;
        }
        last_fdelta[i] = fdelta;

        const bool hit_int = streak[i] >= kMinStreak;
        const bool hit_float = fstreak[i] >= kMinStreak;
        const uint32_t addr = kBase + i * 4u;

        // Hold the clock back on skipped Draws so it advances at the
        // authored rate. Rewinding writes the previous value straight
        // back, which is what "leftover" means for a word the engine
        // only knows how to step by a fixed amount.
        int32_t stored = value;
        if (govern_on && !step_now && (hit_int || hit_float) &&
            !clock_region_denied(addr) && value != frame_count &&
            value != frame_count - 1) {
            // A float stepping by a multiple of gFrameIncrement already
            // scales with the cadence and is real-time correct.
            bool increment_driven = false;
            if (hit_float && !hit_int && increment > 0.0f) {
                for (int n = 1; n <= 8 && !increment_driven; ++n) {
                    increment_driven =
                        std::fabs(std::fabs(fdelta) - n * increment) <=
                        increment * 1e-3f;
                }
            }
            if (!increment_driven) {
                MEM_W(static_cast<int32_t>(addr), 0) = was;
                stored = was;
                ++g_gov_rewinds;
                if (!governed[i]) {
                    governed[i] = 1;
                    ++g_gov_addresses;
                }
            }
        }
        previous[i] = stored;

        if (!report_on || reported[i] || reports >= kMaxReports ||
            (!hit_int && !hit_float)) {
            continue;
        }
        reported[i] = 1;
        ++reports;
        std::fprintf(stderr,
                     "[timer] addr=%08X %s int=%d step=%d "
                     "float=%.5f fstep=%.5f perSec=%.3f draw=%u\n",
                     kBase + i * 4u, hit_int ? "INT " : "FLT ", value, delta,
                     now_f, fdelta,
                     (hit_int ? static_cast<float>(delta) : fdelta) * draw_rate,
                     draw);
        // Heap pools have no symbol. Dump the block so pointers and
        // magic words identify which engine object owns the counter.
        static int dumps = 0;
        const bool heap_object = (kBase + i * 4u) >= 0x8014A000u;
        if (env_flag_on("TUROK2_TIMER_DUMP") && heap_object && dumps < 16) {
            ++dumps;
            const uint32_t start = (kBase + i * 4u) - 0x20u;
            for (uint32_t row = 0; row < 4; ++row) {
                const uint32_t at = start + row * 0x10u;
                std::fprintf(stderr,
                             "[timer:mem] %08X %08X %08X %08X %08X\n", at,
                             static_cast<uint32_t>(
                                 MEM_W(static_cast<int32_t>(at), 0)),
                             static_cast<uint32_t>(
                                 MEM_W(static_cast<int32_t>(at), 4)),
                             static_cast<uint32_t>(
                                 MEM_W(static_cast<int32_t>(at), 8)),
                             static_cast<uint32_t>(
                                 MEM_W(static_cast<int32_t>(at), 12)));
            }
        }
        if (reports >= kMaxReports) {
            std::fprintf(stderr, "[timer] report cap reached\n");
            if (!govern_on) {
                return;
            }
        }
    }

    // Half of all Draws are skips, so a healthy governor rewinds about
    // one half of the live clocks per Draw. Far below that means the
    // deny-list or the increment test is swallowing everything.
    if (govern_on && draw % 300 == 0) {
        static uint64_t window_base = 0;
        const double per_draw =
            static_cast<double>(g_gov_rewinds - window_base) / 300.0;
        window_base = g_gov_rewinds;
        std::fprintf(stderr,
                     "[gov] clocks=%u rewindsPerDraw=%.1f cinema=%d\n",
                     g_gov_addresses, per_draw, g_cinema ? 1 : 0);
    }
}

// LibTEngine CEngineApp / CCamera cover layers. A healthy RT64 scene plus
// one of these going non-zero is the remaining Adon-flat hypothesis.
constexpr uint32_t kGameApp = 0x800F6CB0u;
constexpr uint32_t kCamPool = kGameApp + 0x22C00u;
constexpr uint32_t kMainCamera = kCamPool + 0x40u; // 0x801198F0
constexpr uint32_t kPlayerPool = kGameApp + 0x22BC0u;
static uint32_t g_live_player = 0;

// Live CPlayer.m_vHeadRotOffset.x. LibTEngine draft puts that at +0xAD0;
// this ROM's ContState is eight bytes earlier, so pitch is +0xAC8.
static float load_head_pitch(uint8_t* rdram) {
    uint32_t player = g_live_player;
    if (!guest_kseg0(player)) {
        player = static_cast<uint32_t>(MEM_W(static_cast<int32_t>(kPlayerPool + 0x08u), 0));
    }
    if (!guest_kseg0(player)) {
        return 0.0f;
    }
    const float pitch = load_f32(rdram, static_cast<int32_t>(player + 0xAC8u));
    return std::isfinite(pitch) ? pitch : 0.0f;
}

static bool adon_cover_wanted() {
    static const bool cover = env_flag_on("TUROK2_ADON_COVER");
    static const bool present = env_flag_on("TUROK2_PRESENT_TRACE");
    static const bool pair = env_flag_on("TUROK2_PAIR_TRACE");
    return cover || present || pair;
}

static bool adon_cover_log_on() {
    static const bool cover = env_flag_on("TUROK2_ADON_COVER");
    return cover;
}

static bool adon_cover_verbose() {
    static const bool verbose = [] {
        const char* value = std::getenv("TUROK2_ADON_COVER");
        return value != nullptr && (value[0] == '2' || std::strcmp(value, "all") == 0);
    }();
    return verbose;
}

struct AdonCam {
    uint32_t addr = 0;
    int32_t mode = 0;
    float timer = 0.0f;
    uint32_t flash = 0;
    uint32_t dec = 0;
    uint32_t r = 0;
    uint32_t g = 0;
    uint32_t b = 0;
    uint32_t a = 0;
    uint32_t fog_r = 0;
    uint32_t fog_g = 0;
    uint32_t fog_b = 0;
};

static bool read_adon_cam(uint8_t* rdram, uint32_t cam, AdonCam* out) {
    if (!guest_kseg0(cam) || cam > 0x807FF13Fu) {
        return false;
    }
    const int32_t mode = MEM_W(static_cast<int32_t>(cam + 0x52Cu), 0);
    if (mode < 0 || mode > 3) {
        return false;
    }
    const float timer = load_f32(rdram, static_cast<int32_t>(cam + 0x520u));
    if (!std::isfinite(timer)) {
        return false;
    }
    out->addr = cam;
    out->mode = mode;
    out->timer = timer;
    out->flash = MEM_BU(static_cast<int32_t>(cam + 0x530u), 0);
    out->dec = MEM_BU(static_cast<int32_t>(cam + 0x531u), 0);
    out->r = MEM_BU(static_cast<int32_t>(cam + 0x536u), 0);
    out->g = MEM_BU(static_cast<int32_t>(cam + 0x537u), 0);
    out->b = MEM_BU(static_cast<int32_t>(cam + 0x538u), 0);
    out->a = MEM_BU(static_cast<int32_t>(cam + 0x539u), 0);
    out->fog_r = MEM_BU(static_cast<int32_t>(cam + 0x508u), 0);
    out->fog_g = MEM_BU(static_cast<int32_t>(cam + 0x509u), 0);
    out->fog_b = MEM_BU(static_cast<int32_t>(cam + 0x50Au), 0);
    return true;
}

static void fill_view_from_camera(uint8_t* rdram, uint32_t cam,
                                  Turok2AdonCover* snap) {
    if (!guest_kseg0(cam) || cam > 0x807FF13Fu || snap == nullptr) {
        return;
    }
    snap->far_clip = load_f32(rdram, static_cast<int32_t>(cam + 0x510u));
    // Player look lives in CCameraViewParams (+0x24): m_RotY and m_vRotOffset.
    // CCamera.m_vRotation (+0x120) stays 0 on the main gameplay camera.
    snap->pitch = load_f32(rdram, static_cast<int32_t>(cam + 0x2Cu));
    snap->yaw = load_f32(rdram, static_cast<int32_t>(cam + 0x28u));
    if (!std::isfinite(snap->far_clip)) {
        snap->far_clip = 0.0f;
    }
    if (!std::isfinite(snap->pitch)) {
        snap->pitch = 0.0f;
    }
    if (!std::isfinite(snap->yaw)) {
        snap->yaw = 0.0f;
    }
    snap->region = MEM_W(static_cast<int32_t>(cam + 0x500u), 0);
    snap->vis_bits = MEM_W(static_cast<int32_t>(cam + 0x64u), 0);
    snap->pregion = MEM_W(static_cast<int32_t>(cam + 0x58u), 0);
    snap->underwater = MEM_BU(static_cast<int32_t>(cam + 0x53Au), 0);
    snap->fog_r = MEM_BU(static_cast<int32_t>(cam + 0x508u), 0);
    snap->fog_g = MEM_BU(static_cast<int32_t>(cam + 0x509u), 0);
    snap->fog_b = MEM_BU(static_cast<int32_t>(cam + 0x50Au), 0);
    snap->sky_layers = MEM_H(static_cast<int32_t>(cam + 0xE20u), 0);
    snap->sky_alpha = load_f32(rdram, static_cast<int32_t>(cam + 0x760u));
    if (!std::isfinite(snap->sky_alpha)) {
        snap->sky_alpha = 0.0f;
    }
    snap->fog_min = g_turok2_adon_fog_min.load(std::memory_order_relaxed);
    snap->fog_min_in = g_turok2_adon_fog_min_in.load(std::memory_order_relaxed);
}

static void publish_view(uint8_t* rdram, uint32_t camera) {
    // Gameplay HUD/log follow the main camera only. The cinema camera
    // also hits this hook and was overwriting pitch/region every Draw.
    if (!g_cinema && camera != kMainCamera) {
        return;
    }
    Turok2AdonCover snap = turok2_adon_cover_copy();
    fill_view_from_camera(rdram, camera, &snap);
    if (snap.cam == 0) {
        snap.cam = camera;
    }
    snap.live = 1;
    turok2_adon_cover_publish(snap);

    static Turok2AdonCover prev{};
    static bool primed = false;
    const bool changed = !primed ||
        prev.region != snap.region ||
        prev.vis_bits != snap.vis_bits ||
        prev.pregion != snap.pregion ||
        prev.fog_min_in != snap.fog_min_in ||
        prev.fog_r != snap.fog_r ||
        prev.fog_g != snap.fog_g ||
        prev.fog_b != snap.fog_b ||
        prev.sky_layers != snap.sky_layers ||
        std::fabs(prev.far_clip - snap.far_clip) > 5.0f;
    primed = true;
    if (!changed) {
        return;
    }
    prev = snap;
    if (g_cinema) {
        return;
    }
    std::fprintf(stderr,
        "[view] cam=%08X fogMin=%u->%u rgb=%02X%02X%02X far=%.1f "
        "pitch=%.2f yaw=%.2f region=%d vis=%08X preg=%08X sky=%d a=%.2f\n",
        camera, snap.fog_min_in, snap.fog_min,
        snap.fog_r, snap.fog_g, snap.fog_b, snap.far_clip,
        snap.pitch, snap.yaw, snap.region, snap.vis_bits, snap.pregion,
        snap.sky_layers, snap.sky_alpha);
}

static const char* flash_mode_name(int32_t mode) {
    switch (mode) {
        case 0: return "OFF";
        case 1: return "ATTACK";
        case 2: return "SUSTAIN";
        case 3: return "DECAY";
        default: return "?";
    }
}

static uint32_t g_adon_draw = 0;

static void adon_cover_probe(uint8_t* rdram) {
    if (!adon_cover_wanted()) {
        return;
    }
    ++g_adon_draw;

    Turok2AdonCover snap;
    snap.draw = g_adon_draw;
    snap.frame_count = static_cast<uint32_t>(MEM_W(0x800B6D18, 0));
    snap.cinema = g_cinema ? 1u : 0u;
    snap.fade_fast = MEM_BU(static_cast<int32_t>(kGameApp + 0x23FE0u), 0);
    snap.fade_status = MEM_BU(static_cast<int32_t>(kGameApp + 0x23FE1u), 0);
    snap.fade_alpha = load_f32(rdram, static_cast<int32_t>(kGameApp + 0x23FE4u));
    if (!std::isfinite(snap.fade_alpha)) {
        snap.fade_alpha = 0.0f;
    }
    snap.live = 1;

    AdonCam cams[8];
    uint32_t n = 0;
    auto push = [&](uint32_t addr) {
        if (n >= 8) {
            return;
        }
        for (uint32_t i = 0; i < n; ++i) {
            if (cams[i].addr == addr) {
                return;
            }
        }
        AdonCam cam{};
        if (read_adon_cam(rdram, addr, &cam)) {
            cams[n++] = cam;
        }
    };

    push(kMainCamera);
    uint32_t cam = static_cast<uint32_t>(MEM_W(static_cast<int32_t>(kCamPool + 0x20u), 0));
    for (uint32_t guard = 0; guest_kseg0(cam) && guard < 8; ++guard) {
        push(cam);
        cam = static_cast<uint32_t>(MEM_W(static_cast<int32_t>(cam + 4u), 0));
    }

    AdonCam best{};
    bool have = false;
    for (uint32_t i = 0; i < n; ++i) {
        const bool hotter = !have || cams[i].mode > best.mode ||
            (cams[i].mode == best.mode && cams[i].flash > best.flash);
        if (hotter) {
            best = cams[i];
            have = true;
        }
    }
    snap.cams = n;
    if (have) {
        snap.cam = best.addr;
        snap.flash_mode = best.mode;
        snap.flash_timer = best.timer;
        snap.flash = best.flash;
        snap.flash_dec = best.dec;
        snap.flash_r = best.r;
        snap.flash_g = best.g;
        snap.flash_b = best.b;
        snap.flash_a = best.a;
        snap.fog_r = best.fog_r;
        snap.fog_g = best.fog_g;
        snap.fog_b = best.fog_b;
    }
    for (uint32_t i = 0; i < n; ++i) {
        if (cams[i].addr == 0x806FF120u) {
            snap.fog_r = cams[i].fog_r;
            snap.fog_g = cams[i].fog_g;
            snap.fog_b = cams[i].fog_b;
            break;
        }
    }
    snap.lsb_skip = g_turok2_lsb_skip_acc.exchange(0, std::memory_order_relaxed);
    snap.lsb_rebuild = g_turok2_lsb_rebuild_acc.exchange(0, std::memory_order_relaxed);
    uint32_t view_cam = kMainCamera;
    if (snap.cinema != 0) {
        for (uint32_t i = 0; i < n; ++i) {
            if (cams[i].addr == 0x806FF120u) {
                view_cam = cams[i].addr;
                break;
            }
        }
    } else if (have) {
        view_cam = best.addr;
    }
    fill_view_from_camera(rdram, view_cam, &snap);
    turok2_adon_cover_publish(snap);

    if (!adon_cover_log_on()) {
        return;
    }

    static Turok2AdonCover prev{};
    static bool primed = false;
    const bool changed = !primed ||
        prev.cinema != snap.cinema ||
        prev.fade_status != snap.fade_status ||
        prev.fade_fast != snap.fade_fast ||
        std::fabs(prev.fade_alpha - snap.fade_alpha) > 0.001f ||
        prev.cam != snap.cam ||
        prev.flash_mode != snap.flash_mode ||
        prev.flash != snap.flash ||
        prev.flash_r != snap.flash_r ||
        prev.flash_g != snap.flash_g ||
        prev.flash_b != snap.flash_b ||
        prev.fog_r != snap.fog_r ||
        prev.fog_g != snap.fog_g ||
        prev.fog_b != snap.fog_b;
    primed = true;
    prev = snap;

    const bool heartbeat = snap.cinema != 0 && (g_adon_draw % 60u) == 0u;
    const bool verbose = adon_cover_verbose() && snap.cinema != 0;
    if (!changed && !heartbeat && !verbose) {
        return;
    }

    static const auto start = std::chrono::steady_clock::now();
    const float now = std::chrono::duration<float>(
        std::chrono::steady_clock::now() - start).count();
    std::fprintf(stderr,
        "[adon] %s draw=%u t=%.3f fc=%u cinema=%u fade=%.3f fst=%u ffast=%u "
        "cam=%08X flash=%s/%u timer=%.3f rgb=%02X%02X%02X a=%u "
        "fog=%02X%02X%02X skip=%u rebuild=%u cams=%u\n",
        changed ? "edge" : (verbose ? "draw" : "beat"),
        snap.draw, now, snap.frame_count, snap.cinema,
        snap.fade_alpha, snap.fade_status, snap.fade_fast,
        snap.cam, flash_mode_name(snap.flash_mode), snap.flash, snap.flash_timer,
        snap.flash_r, snap.flash_g, snap.flash_b, snap.flash_a,
        snap.fog_r, snap.fog_g, snap.fog_b, snap.lsb_skip, snap.lsb_rebuild,
        snap.cams);
    if (changed || verbose) {
        for (uint32_t i = 0; i < n; ++i) {
            std::fprintf(stderr,
                "[adon]   cam=%08X flash=%s/%u timer=%.3f rgb=%02X%02X%02X "
                "fog=%02X%02X%02X\n",
                cams[i].addr, flash_mode_name(cams[i].mode), cams[i].flash,
                cams[i].timer, cams[i].r, cams[i].g, cams[i].b,
                cams[i].fog_r, cams[i].fog_g, cams[i].fog_b);
        }
    }
}

static void adon_cover_note_camera(uint8_t* rdram, uint32_t camera) {
    if (!adon_cover_wanted()) {
        return;
    }
    AdonCam cam{};
    if (!read_adon_cam(rdram, camera, &cam)) {
        return;
    }
    Turok2AdonCover snap = turok2_adon_cover_copy();
    const bool hotter = (cam.mode > snap.flash_mode) ||
        (cam.mode == snap.flash_mode && cam.flash > snap.flash) ||
        snap.cam == 0 || snap.cam == camera;
    if (hotter) {
        snap.cam = cam.addr;
        snap.flash_mode = cam.mode;
        snap.flash_timer = cam.timer;
        snap.flash = cam.flash;
        snap.flash_dec = cam.dec;
        snap.flash_r = cam.r;
        snap.flash_g = cam.g;
        snap.flash_b = cam.b;
        snap.flash_a = cam.a;
        snap.fog_r = cam.fog_r;
        snap.fog_g = cam.fog_g;
        snap.fog_b = cam.fog_b;
        turok2_adon_cover_publish(snap);
    }
}

extern "C" void turok2_patch_scale_frame_count(uint8_t* rdram, recomp_context* ctx) {
    // Kill-listed 2026-09-04: leftover-scaling the stored gFrameCount
    // froze boot (no [fps:engine], black VI). Hooks stay as no-ops.
    // The Draw edge is still the cheapest place to run the timer sweep.
    (void)ctx;
    find_frame_timers(rdram);
    boot_timeline(rdram);
    attract_demo_probe(rdram);
    adon_cover_probe(rdram);
}

extern "C" void turok2_patch_scale_frame_aux(uint8_t* rdram, recomp_context* ctx) {
    // func_00286B58 at 0x00286D8C: $v0 is the incremented 0x800B6D20,
    // about to be stored. Unlike gFrameCount this word drives no
    // framebuffer state -- 0x6D1C is xored from a separate register two
    // instructions later -- but ~40 sites read it as a game clock, in
    // gameplay (0x0025xxxx, 0x0027Cxxxx) and in the frontend overlays
    // (0x0041xxxx, 0x0042xxxx, 0x0046xxxx). At unique 60 it runs 2x.
    // Hold it to the authored rate and leave gFrameCount alone.
    (void)rdram;
    if (preserve_authored_cadence()) {
        return;
    }
    // Bisect switch. Full TUROK2_AUTHORED_CADENCE nearly removes the Adon
    // flat-frame flicker while cinema-only authored cadence does not, so the
    // variable is one of the patches that full authored mode turns off rather
    // than the cinema tick rate. This is the most invasive of them.
    static const bool disabled = env_flag_on("TUROK2_NO_6D20_LEFTOVER");
    if (disabled) {
        return;
    }
    static LeftoverClock clock;
    const float rate = g_cinema ? 15.0f : 30.0f;
    const auto now = std::chrono::steady_clock::now();
    if (!clock.armed) {
        clock.armed = true;
        clock.last = now;
        return;
    }
    const float dt = std::chrono::duration<float>(now - clock.last).count();
    clock.last = now;
    clock.held += std::min(dt, 0.05f) * rate;
    if (clock.held >= 1.0f) {
        clock.held -= 1.0f;
        return;
    }
    ctx->r2 = static_cast<int32_t>(ctx->r2) - 1;
}

extern "C" void turok2_patch_scale_frontend_hold(uint8_t* rdram,
                                                 recomp_context* ctx) {
    // func_00288C80 at 0x00288D0C: $v0 is D_8011B110 - 1, about to be
    // stored. This is the "hold the current frontend screen" counter for
    // the boot logos and the Expansion Pak splash, authored in 30 Hz
    // frames. Give back the step on Draws the authored clock has not
    // reached yet so the splash lasts the same number of seconds.
    (void)rdram;
    if (preserve_authored_cadence()) {
        return;
    }
    static LeftoverClock clock;
    const auto now = std::chrono::steady_clock::now();
    if (!clock.armed) {
        clock.armed = true;
        clock.last = now;
        return;
    }
    const float dt = std::chrono::duration<float>(now - clock.last).count();
    clock.last = now;
    clock.held += std::min(dt, 0.05f) * 30.0f;
    if (clock.held >= 1.0f) {
        clock.held -= 1.0f;
        return;
    }
    ctx->r2 = static_cast<int32_t>(ctx->r2) + 1;
}

extern "C" void turok2_patch_skip_pak_screen(uint8_t* rdram,
                                             recomp_context* ctx) {
    // Frontend state 3 is the "EXPANSION PAK FOUND!" splash: its update
    // slot is func_00289494, its draw slot points inside func_00285CE8.
    // It ends when the screen's elapsed time at +0x23FD0 passes
    // 4.0 * D_800A9DE4 (func_00288D80). A PC port always has the 4 MB,
    // so push the timer just past the threshold and let the game's own
    // transition run. TUROK2_SHOW_PAK_SCREEN=1 keeps the splash.
    static const bool keep = env_flag_on("TUROK2_SHOW_PAK_SCREEN");
    if (keep) {
        return;
    }
    const float unit = load_f32(rdram, 0x800A9DE4);
    const int32_t elapsed_addr = static_cast<int32_t>(ctx->r4) + 0x23FD0;
    store_f32(rdram, elapsed_addr, 4.0f * unit + 1.0f);
}

extern "C" void turok2_patch_scale_swoosh_detach(uint8_t* rdram, recomp_context* ctx) {
    // func_00233BD4 at 0x00233C68: flag 8 does m_AddEdgeTime += 1 and clears
    // m_pOwner at 3. Authored detach is 3/30 s; unique 60 would be 3/60 s.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r16), accum, 1);
}

extern "C" void turok2_patch_scale_anim_repeat(uint8_t* rdram, recomp_context* ctx) {
    // func_00243170: CAI.m_AnimRepeatedCount (CAI+0xC7) += 1 when the anim
    // index stays the same. Unique 60 would double AI "think" / loop counts.
    // $s1 is the CAI. i-frames are CPlayer.m_InvincibilityTime (float +0xA30)
    // already stepped by gFrameIncrement in func_0024DDA0 — no integer hook.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r17), accum, 1);
}

extern "C" void turok2_patch_scale_hud_timer(uint8_t* rdram, recomp_context* ctx) {
    // func_00272EC4 at 0x00272F3C: int16 countdown at object+0x68, stored with
    // sh $v0. Same 30 Hz leftover class as freeze (HUD/spawn pulse). COverlay
    // m_Time at +0x0C is a mode/id write, not +=1 per Update.
    (void)rdram;
    static std::unordered_map<uint32_t, LeftoverClock> accum;
    scale_int8_after_step(ctx, static_cast<uint32_t>(ctx->r17), accum, -1);
}

extern "C" void turok2_patch_retrace_guard(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    const int32_t count = static_cast<int32_t>(ctx->r2);
    // One Retrace-driven Update fills the pipeline (count == 2). After that,
    // only OS_SC_DONE in func_00286674 calls Update — cinema included —
    // so HUD and paths are not drawn into a CFrameData still on the VI.
    ctx->r2 = (count <= 1) ? 0 : count;
}

namespace {

struct CameraPoint {
    float x;
    float y;
    float z;
};

static CameraPoint load_camera_point(uint8_t* rdram, uint32_t address) {
    return {
        load_f32(rdram, static_cast<int32_t>(address + 0u)),
        load_f32(rdram, static_cast<int32_t>(address + 4u)),
        load_f32(rdram, static_cast<int32_t>(address + 8u)),
    };
}

static void store_camera_point(uint8_t* rdram, uint32_t address,
                               const CameraPoint& point) {
    store_f32(rdram, static_cast<int32_t>(address + 0u), point.x);
    store_f32(rdram, static_cast<int32_t>(address + 4u), point.y);
    store_f32(rdram, static_cast<int32_t>(address + 8u), point.z);
}

static bool finite_camera_point(const CameraPoint& point) {
    return std::isfinite(point.x) && std::isfinite(point.y) &&
           std::isfinite(point.z);
}

static float camera_cull_scale() {
    static const float scale = [] {
        // RT64's Expand mode can expose substantially more than 16:9 on an
        // ultrawide window. Render a little more scene than is strictly needed
        // so CPU-side Turok 2 region/object culling never cuts into the image.
        const char* text = std::getenv("TUROK2_WIDE_CULL_SCALE");
        if (text == nullptr || *text == '\0') {
            return 2.0f;
        }
        const float requested = std::strtof(text, nullptr);
        if (!std::isfinite(requested)) {
            return 2.0f;
        }
        return requested < 1.0f ? 1.0f : (requested > 3.2f ? 3.2f : requested);
    }();
    const float with_fov = scale * camera_fov_scale();
    return with_fov < 1.0f ? 1.0f : (with_fov > 3.2f ? 3.2f : with_fov);
}

// Grow a far-plane XZ copy so CPU world AABB / ViewVolume stay wide
// when look-up flattens TCorners. Do not write this back into
// CCamera.m_vTCorners — that shears the sky card. Returns 0 / 1 / 2.
static int grow_corner_xz(CameraPoint corners[5], float far_clip) {
    if (!std::isfinite(far_clip) || far_clip < 64.0f) {
        far_clip = 2048.0f;
    }
    float min_x = corners[1].x;
    float max_x = corners[1].x;
    float min_z = corners[1].z;
    float max_z = corners[1].z;
    for (int i = 2; i < 5; i++) {
        min_x = std::min(min_x, corners[i].x);
        max_x = std::max(max_x, corners[i].x);
        min_z = std::min(min_z, corners[i].z);
        max_z = std::max(max_z, corners[i].z);
    }
    const float span = std::max(max_x - min_x, max_z - min_z);
    const float cx = corners[0].x;
    const float cz = corners[0].z;
    const float needed = far_clip;
    if (span < 16.0f) {
        const float half = needed * 0.55f;
        corners[1].x = cx + half;
        corners[1].z = cz + half;
        corners[2].x = cx - half;
        corners[2].z = cz + half;
        corners[3].x = cx + half;
        corners[3].z = cz - half;
        corners[4].x = cx - half;
        corners[4].z = cz - half;
        return 2;
    }
    if (span < needed * 0.55f) {
        const float scale = needed / span;
        for (int i = 1; i < 5; i++) {
            corners[i].x = cx + (corners[i].x - cx) * scale;
            corners[i].z = cz + (corners[i].z - cz) * scale;
        }
        return 1;
    }
    return 0;
}

static void expand_camera_pair(CameraPoint& positive, CameraPoint& negative,
                               float scale) {
    const CameraPoint midpoint = {
        (positive.x + negative.x) * 0.5f,
        (positive.y + negative.y) * 0.5f,
        (positive.z + negative.z) * 0.5f,
    };
    positive.x = midpoint.x + (positive.x - midpoint.x) * scale;
    positive.y = midpoint.y + (positive.y - midpoint.y) * scale;
    positive.z = midpoint.z + (positive.z - midpoint.z) * scale;
    negative.x = midpoint.x + (negative.x - midpoint.x) * scale;
    negative.y = midpoint.y + (negative.y - midpoint.y) * scale;
    negative.z = midpoint.z + (negative.z - midpoint.z) * scale;
}

} // namespace

static void note_guest_world_sections(uint8_t* rdram) {
    // Guest-only. Scene+0x14A8 is m_nActiveGridSections. func_002222E0
    // skips the entire world loop when this is <= 0. Read here after the
    // previous Draw so we do not depend on RT64.
    // CScene is embedded at GameApp+0x3C8, not a pointer.
    constexpr uint32_t kScene = 0x800F6CB0u + 0x3C8u;
    const int32_t nsec = static_cast<int32_t>(MEM_W(static_cast<int32_t>(kScene + 0x14A8u), 0));
    static uint64_t frames = 0;
    static double avg = 0.0;
    static uint64_t empties = 0;
    frames++;
    if (nsec <= 0) {
        empties++;
    }
    const bool have_avg = frames > 30;
    avg = (frames == 1) ? static_cast<double>(nsec) : (avg * 0.95 + static_cast<double>(nsec) * 0.05);
    const bool empty = nsec <= 0;
    const bool collapsed = have_avg && (nsec < avg * 0.25) && (avg > 4.0);
    if (empty || collapsed || ((frames & 255u) == 0u)) {
        std::fprintf(stderr,
            "[scene:nsec] %s n=%llu nsec=%d avg=%.1f empty=%llu\n",
            empty ? "EMPTY" : (collapsed ? "DROP" : "hb"),
            static_cast<unsigned long long>(frames), nsec, avg,
            static_cast<unsigned long long>(empties));
    }
}

extern "C" void turok2_patch_gameplay_camera(uint8_t* rdram, recomp_context* ctx) {
    // 0x0027D97C in func_0027D160: Cinema_PathPlaying just returned in $v0.
    // Delay slot already stored $f22 into CCamera.m_Fov (+0x6C). Gameplay
    // (v0==0) still feeds $f22 to guPerspective at 0x0027D9A8. Cinema may
    // overwrite m_FarClip (+0x510) at 0x0027D9A4 — skip all scales there.
    // Do not write m_FieldOfView (+0x518) (would compound). Do not touch
    // m_mOnScreenProjection (+0x430) (weapon/HUD).
    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
    note_guest_world_sections(rdram);
    publish_view(rdram, camera);
    adon_cover_note_camera(rdram, camera);
    if (ctx->r2 != 0) {
        return;
    }
    if ((camera < 0x80000000u) || (camera > 0x807FF13Fu)) {
        return;
    }

    const float fov = camera_fov_scale();
    if (fov > 1.0001f) {
        CHECK_FR(ctx, 22);
        if (std::isfinite(ctx->f22.fl)) {
            ctx->f22.fl *= fov;
            store_f32(rdram, static_cast<int32_t>(camera + 0x6Cu), ctx->f22.fl);
        }
    }

    // m_FogStart (+0x524) is a packed int (low 16 = gSPFogPosition min).
    // Scaled in turok2_patch_fog_position when the DL is built.
}

// FAILED eye-test 2026-09-05. Opt-in TUROK2_CUT_HOLD=1 only. Dist override
// TUROK2_CUT_HOLD_DIST (default 40). Do not leftover gFrameCount. Do not
// pull the cinema eye. Do not add another pose lerp / 2×-Hz smoother.
struct CinemaHold {
    uint32_t cam = 0;
    float good[16]{};
    float in_x = 0.0f;
    float in_y = 0.0f;
    float in_z = 0.0f;
    float in_zx = 0.0f;
    float in_zy = 0.0f;
    float in_zz = 0.0f;
    bool primed = false;
};

static void load_mtx16(uint8_t* rdram, uint32_t mtx, float out[16]) {
    for (uint32_t i = 0; i < 16; ++i) {
        out[i] = load_f32(rdram, static_cast<int32_t>(mtx + i * 4u));
    }
}

static void store_mtx16(uint8_t* rdram, uint32_t mtx, const float in[16]) {
    for (uint32_t i = 0; i < 16; ++i) {
        if (std::isfinite(in[i])) {
            store_f32(rdram, static_cast<int32_t>(mtx + i * 4u), in[i]);
        }
    }
}

static CinemaHold* cinema_hold_slot(uint32_t camera) {
    static CinemaHold slots[4];
    for (uint32_t i = 0; i < 4; ++i) {
        if (slots[i].cam == camera) {
            return &slots[i];
        }
    }
    for (uint32_t i = 0; i < 4; ++i) {
        if (slots[i].cam == 0u) {
            slots[i].cam = camera;
            return &slots[i];
        }
    }
    slots[0] = CinemaHold{};
    slots[0].cam = camera;
    return &slots[0];
}

static uint32_t camera_fog_rgb(uint8_t* rdram, uint32_t camera) {
    return (static_cast<uint32_t>(MEM_BU(static_cast<int32_t>(camera + 0x508u), 0)) << 16) |
           (static_cast<uint32_t>(MEM_BU(static_cast<int32_t>(camera + 0x509u), 0)) << 8) |
           static_cast<uint32_t>(MEM_BU(static_cast<int32_t>(camera + 0x50Au), 0));
}

static uint32_t mask_rgb(uint32_t rgb, uint32_t mask) {
    return ((rgb >> 16) & mask) << 16 | ((rgb >> 8) & mask) << 8 | (rgb & mask);
}

// Measure-only. Cinema fill is fog quantized to 5-bit / 3-bit. A flat
// letterbox frame is that fill with no 3D coverage. Log sky / region /
// vis / 0x6D20 on the path camera so the next capture can join.
static void cinema_fill_note(uint8_t* rdram, uint32_t camera) {
    if (camera != 0x806FF120u) {
        return;
    }
    const uint32_t fog = camera_fog_rgb(rdram, camera);
    const uint32_t fill5 = mask_rgb(fog, 0xF8u);
    const uint32_t fill3 = mask_rgb(fog, 0xE0u);
    const uint32_t preg = static_cast<uint32_t>(MEM_W(static_cast<int32_t>(camera + 0x58u), 0));
    const uint32_t vis = static_cast<uint32_t>(MEM_W(static_cast<int32_t>(camera + 0x64u), 0));
    const int32_t sky = MEM_H(static_cast<int32_t>(camera + 0xE20u), 0);
    const float alpha = load_f32(rdram, static_cast<int32_t>(camera + 0x760u));
    const uint32_t aux = static_cast<uint32_t>(MEM_W(0x800B6D20, 0));

    static uint32_t prev_fog = 0;
    static uint32_t prev_preg = 0;
    static uint32_t prev_vis = 0;
    static int32_t prev_sky = 0;
    static bool primed = false;
    static uint64_t n = 0;
    const bool changed = !primed || fog != prev_fog || preg != prev_preg ||
                         vis != prev_vis || sky != prev_sky;
    const bool beat = ((n++ & 31u) == 0u);
    if (!changed && !beat) {
        return;
    }
    primed = true;
    prev_fog = fog;
    prev_preg = preg;
    prev_vis = vis;
    prev_sky = sky;
    std::fprintf(stderr,
        "[cin:fill] %s fog=%06X fill5=%06X fill3=%06X preg=%08X vis=%08X "
        "sky=%d a=%.2f aux=%u n=%llu\n",
        changed ? "edge" : "hb", fog, fill5, fill3, preg, vis, sky,
        std::isfinite(alpha) ? alpha : 0.0f, aux,
        static_cast<unsigned long long>(n));
}

static void cinema_hold_cut(uint8_t* rdram, uint32_t camera, uint32_t mtx,
                            float px, float py, float pz,
                            float zx, float zy, float zz) {
    // FAILED eye-test 2026-09-05 including locked-off shots. Opt-in only.
    static const bool disabled = !env_flag_on("TUROK2_CUT_HOLD");
    static const float dist = env_scale_override("TUROK2_CUT_HOLD_DIST", 40.0f, 8.0f, 400.0f);
    const float dist2 = dist * dist;

    static bool announced = false;
    if (!announced) {
        announced = true;
        std::fprintf(stderr, "[cin:hold] %s dist=%.1f\n",
                     disabled ? "off" : "on", dist);
    }

    CinemaHold* slot = cinema_hold_slot(camera);
    float dx = 0.0f;
    float dy = 0.0f;
    float dz = 0.0f;
    float look_dot = 1.0f;
    bool jump = false;
    if (slot->primed) {
        dx = px - slot->in_x;
        dy = py - slot->in_y;
        dz = pz - slot->in_z;
        look_dot = zx * slot->in_zx + zy * slot->in_zy + zz * slot->in_zz;
        jump = (dx * dx + dy * dy + dz * dz) > dist2 || look_dot < 0.25f;
    }
    slot->in_x = px;
    slot->in_y = py;
    slot->in_z = pz;
    slot->in_zx = zx;
    slot->in_zy = zy;
    slot->in_zz = zz;

    static uint64_t frames = 0;
    static uint64_t holds = 0;
    const bool heartbeat = ((frames++ & 63u) == 0u);
    if (heartbeat) {
        const uint32_t skip = g_turok2_lsb_skip_acc.exchange(0, std::memory_order_relaxed);
        const uint32_t rebuild = g_turok2_lsb_rebuild_acc.exchange(0, std::memory_order_relaxed);
        std::fprintf(stderr,
            "[cin:lsb] skip=%u rebuild=%u holds=%llu cam=%08X\n",
            skip, rebuild, static_cast<unsigned long long>(holds), camera);
    }

    const uint32_t fog = camera_fog_rgb(rdram, camera);
    if (jump && !disabled && slot->primed) {
        store_mtx16(rdram, mtx, slot->good);
        store_f32(rdram, static_cast<int32_t>(camera + 0x038u), slot->good[12]);
        store_f32(rdram, static_cast<int32_t>(camera + 0x03Cu), slot->good[13]);
        store_f32(rdram, static_cast<int32_t>(camera + 0x040u), slot->good[14]);
        holds++;
        std::fprintf(stderr,
            "[cin:hold] cam=%08X from=(%.1f,%.1f,%.1f) d=(%.1f,%.1f,%.1f) "
            "dot=%.2f fog=%06X n=%llu\n",
            camera, px, py, pz, dx, dy, dz, look_dot, fog,
            static_cast<unsigned long long>(holds));
        return;
    }

    load_mtx16(rdram, mtx, slot->good);
    slot->primed = true;
    if (!jump && !heartbeat) {
        return;
    }
    std::fprintf(stderr,
        "[cin:cam] %s cam=%08X pos=(%.1f,%.1f,%.1f) d=(%.1f,%.1f,%.1f) "
        "lookZ=(%.2f,%.2f,%.2f) dot=%.2f fog=%06X\n",
        jump ? "JUMP" : "hb", camera, px, py, pz, dx, dy, dz,
        zx, zy, zz, look_dot, fog);
}

extern "C" void turok2_patch_pull_camera_eye(uint8_t* rdram, recomp_context* ctx) {
    // 0x0027D610 in func_0027D160: $a0 is m_mfViewOrient, $s4 is the camera.
    // func_002101A0 is about to copy the matrix translation into m_vPos, then
    // the inverse / view / TCorners are all built from that origin. Pulling
    // here moves the rendered eye, not just the cull volume.
    //
    // Local -Z is look (far-plane corners store Z = -far). Opposite look is
    // therefore +Z of the orientation matrix. Default off — the stairs
    // probe failed. TUROK2_EYE_PULL=1 opts back in. Cinema holds a cut.
    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
    const uint32_t mtx = static_cast<uint32_t>(ctx->r4);
    if ((camera < 0x80000000u) || (camera > 0x807FF13Fu) ||
        (mtx < 0x80000000u) || (mtx > 0x807FF13Fu)) {
        return;
    }

    const float zx = load_f32(rdram, static_cast<int32_t>(mtx + 0x20u));
    const float zy = load_f32(rdram, static_cast<int32_t>(mtx + 0x24u));
    const float zz = load_f32(rdram, static_cast<int32_t>(mtx + 0x28u));
    float px = load_f32(rdram, static_cast<int32_t>(mtx + 0x30u));
    float py = load_f32(rdram, static_cast<int32_t>(mtx + 0x34u));
    float pz = load_f32(rdram, static_cast<int32_t>(mtx + 0x38u));
    if (!std::isfinite(zx) || !std::isfinite(zy) || !std::isfinite(zz) ||
        !std::isfinite(px) || !std::isfinite(py) || !std::isfinite(pz)) {
        return;
    }

    if (g_cinema) {
        cinema_fill_note(rdram, camera);
        cinema_hold_cut(rdram, camera, mtx, px, py, pz, zx, zy, zz);
        return;
    }

    // Eye-pull probe failed three times on the Adia stairs (persist,
    // unpitched +Z, then pitched opposite-look with opp.y=-1). Do not
    // leave it on — it yanks the drawn path camera. Opt-in only.
    static const bool enabled = env_flag_on("TUROK2_EYE_PULL");
    if (!enabled) {
        return;
    }
    static const float pull = env_scale_override("TUROK2_EYE_PULL", 10.0f, 0.0f, 40.0f);
    if (pull <= 0.0f) {
        return;
    }

    // One-frame mtx offset only. Do not write ViewParams +0x038 (that
    // walked Z by 10/Update). The Z column here has no head pitch
    // (look_y stayed 0). Stairs still flicked after the persist-only
    // fix: same mtx at pitch 0.00 and 1.57. Looking up is positive.
    // Rotate opposite-look by that pitch so a stair/ceiling stare
    // pulls the eye down, not along body +Z. Apply to every gameplay
    // camera — Adia sky/world draw on 806FF120, not just main.
    // Do not leftover. Do not bring back the pitch gate.
    const float pitch = load_head_pitch(rdram);
    const float cp = std::cos(pitch);
    const float sp = std::sin(pitch);
    const float ox = zx * cp;
    const float oy = zy * cp - sp;
    const float oz = zz * cp;
    px += ox * pull;
    py += oy * pull;
    pz += oz * pull;
    store_f32(rdram, static_cast<int32_t>(mtx + 0x30u), px);
    store_f32(rdram, static_cast<int32_t>(mtx + 0x34u), py);
    store_f32(rdram, static_cast<int32_t>(mtx + 0x38u), pz);

    static uint64_t calls = 0;
    if ((calls++ & 255u) == 0u) {
        std::fprintf(stderr,
            "[cam:pull] pull=%.1f pitch=%.2f opp=(%.2f,%.2f,%.2f) "
            "mtx=(%.1f,%.1f,%.1f) cam=%08X\n",
            pull, pitch, ox, oy, oz, px, py, pz, camera);
    }
}

// Test (user 2026-09-05): cinema currentTime / increment stay unique 120.
// Only the path-camera pose is sampled at the authored 15 Hz. Hold frames
// replay the last eye/look/region/ViewMin/RSP view bundle together so the
// pair stays consistent. Fog / sky / anims are left on 120. This is not
// TUROK2_CINEMA_AUTHORED (that drops every cinema tick) and not a lerp.
// Opt-out: TUROK2_CAM_120=1.
static bool cinema_path_step(LeftoverClock& clock) {
    const auto now = std::chrono::steady_clock::now();
    if (!clock.armed) {
        clock.armed = true;
        clock.last = now;
        clock.held = 0.0f;
        return true;
    }
    const float dt = std::chrono::duration<float>(now - clock.last).count();
    clock.last = now;
    // New cinema after a gap: take the fresh pose, do not replay the last shot.
    if (dt > 0.15f) {
        clock.held = 0.0f;
        return true;
    }
    clock.held += std::min(dt, 0.05f) * 15.0f;
    if (clock.held >= 1.0f) {
        clock.held -= 1.0f;
        return true;
    }
    return false;
}

extern "C" void turok2_patch_cinema_cam_15(uint8_t* rdram,
                                          recomp_context* ctx) {
    // FAILED eye-test 2026-09-06: 15 Hz path hold did not kill Adon flats.
    // Camera follows Graphics → Hz (Original / 60 / 120). Opt-in only.
    static const bool off = !env_flag_on("TUROK2_CAM_15") ||
                            preserve_authored_cadence() ||
                            cinema_authored_cadence();
    static bool announced = false;
    if (!announced) {
        announced = true;
        std::fprintf(stderr,
            "[cin:cam15] %s (path follows Graphics Hz)\n",
            off ? "off" : "path at 15 Hz; unset TUROK2_CAM_15 to restore menu Hz");
    }
    if (off) {
        return;
    }

    // 0x0027DF00 is the common tail of func_0027D160 (main and path).
    // Gameplay / main stay unique 120. Only a live cinema path camera
    // is undersampled.
    if (!g_cinema) {
        return;
    }
    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
    if (!guest_kseg0(camera) || camera > 0x807FF13Fu ||
        camera == kMainCamera) {
        return;
    }

    static LeftoverClock clock;
    struct Snap {
        uint32_t cam = 0;
        uint32_t view[0x58 / 4]{};
        uint32_t pose[0x314 / 4]{};
        uint32_t far_fov[4]{};
        float eye_x = 0.0f;
        float eye_y = 0.0f;
        float eye_z = 0.0f;
        bool primed = false;
    };
    static Snap snap;

    auto load_words = [&](uint32_t addr, uint32_t* dst, uint32_t n) {
        for (uint32_t i = 0; i < n; ++i) {
            dst[i] = static_cast<uint32_t>(
                MEM_W(static_cast<int32_t>(addr + i * 4u), 0));
        }
    };
    auto store_words = [&](uint32_t addr, const uint32_t* src, uint32_t n) {
        for (uint32_t i = 0; i < n; ++i) {
            MEM_W(static_cast<int32_t>(addr + i * 4u), 0) =
                static_cast<int32_t>(src[i]);
        }
    };

    if (snap.cam != camera) {
        snap.cam = camera;
        snap.primed = false;
        clock = LeftoverClock{};
    }

    bool step = cinema_path_step(clock);
    if (snap.primed) {
        const float nx = load_f32(rdram, static_cast<int32_t>(camera + 0x114u));
        const float ny = load_f32(rdram, static_cast<int32_t>(camera + 0x118u));
        const float nz = load_f32(rdram, static_cast<int32_t>(camera + 0x11Cu));
        const float dx = nx - snap.eye_x;
        const float dy = ny - snap.eye_y;
        const float dz = nz - snap.eye_z;
        // Cut / new shot: take the engine pose, do not hold the previous eye.
        if (dx * dx + dy * dy + dz * dz > 150.0f * 150.0f) {
            step = true;
            clock.held = 0.0f;
        }
    }

    if (step || !snap.primed) {
        load_words(camera + 0x024u, snap.view, 0x58u / 4u);
        load_words(camera + 0x114u, snap.pose, 0x314u / 4u);
        load_words(camera + 0x510u, snap.far_fov, 4u);
        snap.eye_x = load_f32(rdram, static_cast<int32_t>(camera + 0x114u));
        snap.eye_y = load_f32(rdram, static_cast<int32_t>(camera + 0x118u));
        snap.eye_z = load_f32(rdram, static_cast<int32_t>(camera + 0x11Cu));
        snap.primed = true;
    } else {
        store_words(camera + 0x024u, snap.view, 0x58u / 4u);
        store_words(camera + 0x114u, snap.pose, 0x314u / 4u);
        store_words(camera + 0x510u, snap.far_fov, 4u);
        // Later 0026BE60 / vis tests still have the just-built eye in regs.
        ctx->f_odd[(21 - 1) * 2] =
            MEM_W(static_cast<int32_t>(camera + 0x038u), 0);
        ctx->f_odd[(23 - 1) * 2] =
            MEM_W(static_cast<int32_t>(camera + 0x03Cu), 0);
        ctx->f20.u32l = MEM_W(static_cast<int32_t>(camera + 0x040u), 0);
        ctx->f22.u32l = MEM_W(static_cast<int32_t>(camera + 0x044u), 0);
        ctx->r16 = MEM_W(static_cast<int32_t>(camera + 0x058u), 0);
    }

    static uint64_t calls = 0;
    static uint64_t holds = 0;
    if (!step && snap.primed) {
        holds++;
    }
    if ((calls++ & 63u) == 0u) {
        std::fprintf(stderr,
            "[cin:cam15] step=%d holds=%llu cam=%08X\n",
            step ? 1 : 0, static_cast<unsigned long long>(holds), camera);
    }
}

extern "C" void turok2_patch_cinema_region(uint8_t* rdram, recomp_context* ctx) {
    // 0x0027DED8 in func_0027D160: Cinema_PathPlaying was true, so
    // func_00220A1C looked up the section under camera+0x38. $v0 is about
    // to land in m_pCurrentRegion (+0x58). Null → no world, fog-colored
    // letterbox frame. A brand-new pointer is the first frame of a cut
    // before that section's vis is live. Hold the last good pointer for
    // that one Draw. TUROK2_NO_REGION_HOLD=1 disables.
    (void)rdram;
    if (!g_cinema) {
        return;
    }
    static const bool disabled = env_flag_on("TUROK2_NO_REGION_HOLD");
    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
    const uint32_t incoming = static_cast<uint32_t>(ctx->r2);
    const bool valid = guest_kseg0(incoming);

    struct RegionHold {
        uint32_t cam = 0;
        uint32_t last = 0;
        uint32_t held = 0;
    };
    static RegionHold slots[4];
    RegionHold* slot = &slots[0];
    for (uint32_t i = 0; i < 4; ++i) {
        if (slots[i].cam == camera) {
            slot = &slots[i];
            break;
        }
        if (slots[i].cam == 0u) {
            slots[i].cam = camera;
            slot = &slots[i];
            break;
        }
    }
    slot->cam = camera;

    static bool announced = false;
    if (!announced) {
        announced = true;
        std::fprintf(stderr, "[cin:region] %s\n", disabled ? "off" : "on");
    }

    // SWITCH hold already failed (old section + new eye = fog). Long NULL
    // after the 7586 fade is the authored 2D Primagen block — do not force
    // 3D there. Isolated 3D NULLs were 1-2 pairs. Keep the last pointer
    // for at most two Draws, then let a real NULL through.
    if (valid) {
        if (slot->last != 0u && incoming != slot->last) {
            std::fprintf(stderr,
                "[cin:region] SWITCH cam=%08X from=%08X to=%08X\n",
                camera, slot->last, incoming);
        }
        slot->last = incoming;
        slot->held = 0;
        return;
    }
    slot->held++;
    if (!disabled && slot->last != 0u && slot->held <= 2u) {
        ctx->r2 = static_cast<int32_t>(slot->last);
        std::fprintf(stderr, "[cin:region] KEEP cam=%08X last=%08X n=%u\n",
                     camera, slot->last, slot->held);
        return;
    }
    static uint64_t nulls = 0;
    if ((nulls++ & 63u) == 0u) {
        std::fprintf(stderr, "[cin:region] NULL cam=%08X last=%08X n=%llu\n",
                     camera, slot->last, static_cast<unsigned long long>(nulls));
    }
}

extern "C" int turok2_cinema_skip_this_camera(uint8_t* rdram, recomp_context* ctx) {
    // FAILED eye-test 2026-09-05: [cin:skip] fired on 806FF120 and the
    // Primagen flats stayed. Dual-Draw is not the cause. Opt-in only.
    if (!g_cinema) {
        return 0;
    }
    static const bool enabled = env_flag_on("TUROK2_SKIP_MAIN");
    if (!enabled) {
        return 0;
    }
    const uint32_t camera = static_cast<uint32_t>(ctx->r4);
    if (camera != kMainCamera) {
        return 0;
    }
    const uint32_t path = static_cast<uint32_t>(MEM_W(static_cast<int32_t>(kCamPool + 0x20u), 0));
    if (!guest_kseg0(path) || path == kMainCamera) {
        return 0;
    }
    static uint64_t skips = 0;
    if ((skips++ & 255u) == 0u) {
        std::fprintf(stderr, "[cin:skip] main=%08X path=%08X n=%llu\n",
                     camera, path, static_cast<unsigned long long>(skips));
    }
    return 1;
}

struct AuthoredTCorners {
    uint32_t camera = 0;
    CameraPoint corners[5]{};
    bool valid = false;
};

static AuthoredTCorners g_authored_tcorners[8];

static void save_authored_tcorners(uint32_t camera, const CameraPoint corners[5]) {
    int slot = -1;
    int empty = -1;
    for (int i = 0; i < 8; i++) {
        if (g_authored_tcorners[i].valid &&
            g_authored_tcorners[i].camera == camera) {
            slot = i;
            break;
        }
        if (empty < 0 && !g_authored_tcorners[i].valid) {
            empty = i;
        }
    }
    if (slot < 0) {
        slot = empty >= 0 ? empty : 0;
    }
    g_authored_tcorners[slot].camera = camera;
    g_authored_tcorners[slot].valid = true;
    for (int i = 0; i < 5; i++) {
        g_authored_tcorners[slot].corners[i] = corners[i];
    }
}

static const AuthoredTCorners* find_authored_tcorners(uint32_t camera) {
    for (int i = 0; i < 8; i++) {
        if (g_authored_tcorners[i].valid &&
            g_authored_tcorners[i].camera == camera) {
            return &g_authored_tcorners[i];
        }
    }
    return nullptr;
}

extern "C" void turok2_patch_widen_camera_culling(uint8_t* rdram,
                                                     recomp_context* ctx) {
    // CCamera::m_vTCorners at +0x24C contains the camera origin followed by
    // top-right, top-left, bottom-right and bottom-left far-plane points. The
    // engine turns those points into m_ViewVolume immediately after this hook.
    // The same array is later flattened onto CSkyLayer.m_Height in
    // func_00282340 — widening in place shears that cloud mesh into the
    // look-up card / UV seam / black shards. Snapshot the authored corners
    // here; turok2_patch_sky_layer_corners rebuilds the sky plane from them.
    // Do not turn wide cull off. RT64 still owns the rendered projection.
    //
    // TUROK2_WIDE_CULL_OFF=1 leaves m_vTCorners exactly as the engine wrote
    // them. TUROK2_WIDE_CULL_SCALE cannot express a true no-op: it clamps to
    // 1.0 and is then multiplied by the FOV factor, so the lowest reachable
    // scale still expands the corners and still stores them back.
    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
    adon_cover_note_camera(rdram, camera);
    if ((camera < 0x80000000u) || (camera > 0x807FF13Fu)) {
        return;
    }

    constexpr uint32_t kCornersOffset = 0x24Cu;
    constexpr uint32_t kPointSize = 0x0Cu;
    CameraPoint corners[5];
    for (uint32_t i = 0; i < 5; i++) {
        corners[i] = load_camera_point(rdram, camera + kCornersOffset + i * kPointSize);
        if (!finite_camera_point(corners[i])) {
            return;
        }
    }
    save_authored_tcorners(camera, corners);

    static const bool cull_off = env_flag_on("TUROK2_WIDE_CULL_OFF");
    bool changed = false;
    float scale = 1.0f;
    if (!cull_off) {
        scale = camera_cull_scale();
        if (scale > 1.0001f) {
            expand_camera_pair(corners[1], corners[2], scale);
            expand_camera_pair(corners[3], corners[4], scale);
            changed = true;
        }
    }

    if (changed) {
        for (uint32_t i = 1; i < 5; i++) {
            store_camera_point(rdram, camera + kCornersOffset + i * kPointSize,
                               corners[i]);
        }
    }

    static uint64_t calls = 0;
    if ((calls++ & 255u) == 0u) {
        std::fprintf(stderr,
            "[wide:cull] camera=%08X scale=%.3f origin=(%.1f,%.1f,%.1f)\n",
            camera, scale, corners[0].x, corners[0].y, corners[0].z);
    }
}

extern "C" void func_0026F080(uint8_t* rdram, recomp_context* ctx);

extern "C" void turok2_patch_expand_view_bounds(uint8_t* rdram,
                                               recomp_context* ctx) {
    // After func_0026B9E0 in func_0027D160: $s4 is the camera,
    // m_ViewMin/Max (+0x338/+0x344) and m_ViewVolume (+0x2D8) were
    // just built from TCorners. func_002222E0 AABB-culls grid
    // sections against those bounds, then objects against the
    // volume. Stairs / Adon isolated fill is that Draw missing
    // the world for one frame — not the sky card. Expand the cull
    // box around the eye and rebuild the volume from a grown XZ
    // copy, then put TCorners back so sky still uses the snapshot.
    // Opt-out: TUROK2_NO_VIEW_BOUNDS=1.
    static const bool disabled = env_flag_on("TUROK2_NO_VIEW_BOUNDS");
    if (disabled) {
        return;
    }

    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
    if (!guest_kseg0(camera) || camera > 0x807FF13Fu) {
        return;
    }

    constexpr uint32_t kCornersOffset = 0x24Cu;
    constexpr uint32_t kPointSize = 0x0Cu;
    CameraPoint corners[5];
    CameraPoint saved[5];
    for (uint32_t i = 0; i < 5; i++) {
        corners[i] = load_camera_point(rdram, camera + kCornersOffset +
                                               i * kPointSize);
        if (!finite_camera_point(corners[i])) {
            return;
        }
        saved[i] = corners[i];
    }

    float far_clip = load_f32(rdram, static_cast<int32_t>(camera + 0x510u));
    const int grew = grow_corner_xz(corners, far_clip);
    if (!std::isfinite(far_clip) || far_clip < 64.0f) {
        far_clip = 2048.0f;
    }
    const float half = far_clip * 0.55f;
    const CameraPoint eye = corners[0];

    CameraPoint vmin = corners[0];
    CameraPoint vmax = corners[0];
    for (int i = 1; i < 5; i++) {
        vmin.x = std::min(vmin.x, corners[i].x);
        vmin.y = std::min(vmin.y, corners[i].y);
        vmin.z = std::min(vmin.z, corners[i].z);
        vmax.x = std::max(vmax.x, corners[i].x);
        vmax.y = std::max(vmax.y, corners[i].y);
        vmax.z = std::max(vmax.z, corners[i].z);
    }
    vmin.x = std::min(vmin.x, eye.x - half);
    vmin.y = std::min(vmin.y, eye.y - half);
    vmin.z = std::min(vmin.z, eye.z - half);
    vmax.x = std::max(vmax.x, eye.x + half);
    vmax.y = std::max(vmax.y, eye.y + half);
    vmax.z = std::max(vmax.z, eye.z + half);
    store_camera_point(rdram, camera + 0x338u, vmin);
    store_camera_point(rdram, camera + 0x344u, vmax);

    if (grew != 0) {
        for (uint32_t i = 1; i < 5; i++) {
            store_camera_point(rdram, camera + kCornersOffset + i * kPointSize,
                               corners[i]);
        }
        const uint64_t r4 = ctx->r4;
        const uint64_t r5 = ctx->r5;
        const uint64_t r6 = ctx->r6;
        const uint64_t r7 = ctx->r7;
        const uint64_t r2 = ctx->r2;
        const uint32_t sp10 = static_cast<uint32_t>(MEM_W(0X10, ctx->r29));
        const uint32_t sp14 = static_cast<uint32_t>(MEM_W(0X14, ctx->r29));
        ctx->r4 = ADD32(camera, 0x2D8);
        ctx->r5 = ADD32(camera, kCornersOffset);
        ctx->r6 = ADD32(camera, 0x258);
        ctx->r7 = ADD32(camera, 0x264);
        MEM_W(0X10, ctx->r29) = ADD32(camera, 0x270);
        MEM_W(0X14, ctx->r29) = ADD32(camera, 0x27C);
        func_0026F080(rdram, ctx);
        ctx->r4 = r4;
        ctx->r5 = r5;
        ctx->r6 = r6;
        ctx->r7 = r7;
        ctx->r2 = r2;
        MEM_W(0X10, ctx->r29) = sp10;
        MEM_W(0X14, ctx->r29) = sp14;
        for (uint32_t i = 1; i < 5; i++) {
            store_camera_point(rdram, camera + kCornersOffset + i * kPointSize,
                               saved[i]);
        }
    }

    static uint64_t calls = 0;
    if ((calls++ & 255u) == 0u) {
        std::fprintf(stderr,
            "[view:aabb] cam=%08X grow=%d "
            "min=(%.1f,%.1f,%.1f) max=(%.1f,%.1f,%.1f)\n",
            camera, grew, vmin.x, vmin.y, vmin.z, vmax.x, vmax.y, vmax.z);
    }
}

extern "C" void turok2_patch_world_draw_gate(uint8_t* rdram,
                                            recomp_context* ctx) {
    // Two silent skips of the 3D world, both leave only the fog fill:
    // 1. func_002222E0 @ 0x0022232C — byte 0x8011AAF1 != 0 jumps to
    //    func_00221D3C and never reaches the section loop.
    // 2. func_0027F2C4 @ 0x0027F594 — word 0x80130940 != 0 skips
    //    func_0027E770 entirely (no [scene:draw]).
    // Isolated 1–2 Draw spikes are the Adon / stairs flats. A long
    // streak is the authored 2D Primagen block — let that through.
    // Opt-out: TUROK2_NO_FORCE_WORLD=1.
    (void)rdram;
    static const bool disabled = env_flag_on("TUROK2_NO_FORCE_WORLD");
    const uint32_t pool = static_cast<uint32_t>(ctx->r18);
    const bool pool_site = (pool == kCamPool);
    static uint32_t streak_alt = 0;
    static uint32_t streak_skip = 0;
    uint32_t* streak = pool_site ? &streak_skip : &streak_alt;
    const char* tag = pool_site ? "skip3d" : "alt";
    if (ctx->r2 == 0) {
        *streak = 0;
        return;
    }
    (*streak)++;
    if (disabled || *streak > 2u) {
        if (((*streak) & 31u) == 1u) {
            std::fprintf(stderr, "[scene:gate] %s n=%u keep\n", tag, *streak);
        }
        return;
    }
    ctx->r2 = 0;
    std::fprintf(stderr, "[scene:gate] %s n=%u FORCE\n", tag, *streak);
}

extern "C" void func_002216DC(uint8_t* rdram, recomp_context* ctx);

static uint64_t g_scene_emits = 0;
static uint64_t g_scene_vis_pass = 0;
static uint64_t g_scene_sec_try = 0;
static int32_t g_scene_last_nsec = 0;
static uint64_t g_scene_last_emits = 0;
static uint64_t g_scene_last_vis_pass = 0;
static uint64_t g_scene_last_sec_try = 0;

extern "C" void turok2_patch_scene_draw_emit(uint8_t* rdram,
                                            recomp_context* ctx) {
    (void)rdram;
    (void)ctx;
    g_scene_emits++;
}

extern "C" int turok2_scene_force_sec(void) {
    // Draw culls the Load list against ViewMin/Max. Those boxes
    // do not match (Load uses AnimMin). nsec>0 + vispass=0 +
    // emits=0 means every listed section failed the Draw AABB.
    // Opt-out: TUROK2_NO_SEC_AABB=1.
    static const bool disabled = env_flag_on("TUROK2_NO_SEC_AABB");
    return disabled ? 0 : 1;
}

extern "C" void turok2_patch_scene_sec_try(uint8_t* rdram,
                                          recomp_context* ctx) {
    (void)rdram;
    (void)ctx;
    g_scene_sec_try++;
}

extern "C" void turok2_patch_scene_vis_pass(uint8_t* rdram,
                                           recomp_context* ctx) {
    // Geo AND at 0x002225D4 and instance AND at 0x00222608.
    // Stack masks never dropped (vis-hold force=0). A geo without
    // bit 4, or instance+0x84 == 0, still skips every emit and
    // leaves the fog fill with nsec > 0. Force the AND result
    // through. Opt-out: TUROK2_NO_VIS_PASS=1.
    (void)rdram;
    static const bool disabled = env_flag_on("TUROK2_NO_VIS_PASS");
    if (disabled || ctx->r2 != 0) {
        return;
    }
    ctx->r2 = 1;
    g_scene_vis_pass++;
}

extern "C" void turok2_patch_scene_draw_note(uint8_t* rdram,
                                            recomp_context* ctx) {
    // 0x00222510 in func_002222E0: $t1 is m_nActiveGridSections,
    // $s2 is the camera, $s4 is the scene. Load (func_002216DC)
    // fills that list from m_AnimMin/Max (+0x350/+0x35C), not
    // ViewMin/Max. The Primagen cut leaves ~186 Draws of nsec=0
    // — Update already queried, then Draw expanded ViewMin. Copy
    // the live View box into AnimMin, Load again, restore AnimMin.
    // Skip when preg is 0 (authored 2D Primagen block).
    // Opt-out: TUROK2_NO_SEC_RELOAD=1.
    const uint32_t camera = static_cast<uint32_t>(ctx->r18);
    const uint32_t scene = static_cast<uint32_t>(ctx->r20);
    int32_t sections = static_cast<int32_t>(ctx->r9);
    if (!guest_kseg0(camera) || !guest_kseg0(scene)) {
        return;
    }

    g_scene_last_emits = g_scene_emits;
    g_scene_last_vis_pass = g_scene_vis_pass;
    g_scene_last_sec_try = g_scene_sec_try;
    g_scene_emits = 0;
    g_scene_vis_pass = 0;
    g_scene_sec_try = 0;

    const CameraPoint vmin =
        load_camera_point(rdram, camera + 0x338u);
    const CameraPoint vmax =
        load_camera_point(rdram, camera + 0x344u);
    const uint32_t preg =
        static_cast<uint32_t>(MEM_W(static_cast<int32_t>(camera + 0x58u), 0));
    uint32_t load_head = static_cast<uint32_t>(
        MEM_W(static_cast<int32_t>(kCamPool + 0x20u), 0));
    const uint32_t saved_head = load_head;
    int poked_head = 0;
    if (!guest_kseg0(load_head) && guest_kseg0(camera)) {
        MEM_W(static_cast<int32_t>(kCamPool + 0x20u), 0) =
            static_cast<int32_t>(camera);
        load_head = camera;
        poked_head = 1;
    }

    static const bool reload_off = env_flag_on("TUROK2_NO_SEC_RELOAD");
    const int32_t old_sections = sections;
    int reloaded = 0;
    if (!reload_off && sections <= 0 && preg != 0u &&
        guest_kseg0(load_head)) {
        const CameraPoint saved_min =
            load_camera_point(rdram, camera + 0x350u);
        const CameraPoint saved_max =
            load_camera_point(rdram, camera + 0x35Cu);
        CameraPoint head_min = saved_min;
        CameraPoint head_max = saved_max;
        const bool head_other = load_head != camera;
        if (head_other) {
            head_min = load_camera_point(rdram, load_head + 0x350u);
            head_max = load_camera_point(rdram, load_head + 0x35Cu);
        }
        store_camera_point(rdram, camera + 0x350u, vmin);
        store_camera_point(rdram, camera + 0x35Cu, vmax);
        if (head_other) {
            store_camera_point(rdram, load_head + 0x350u, vmin);
            store_camera_point(rdram, load_head + 0x35Cu, vmax);
        }
        recomp_context keep = *ctx;
        ctx->r4 = static_cast<int32_t>(scene);
        func_002216DC(rdram, ctx);
        sections = static_cast<int32_t>(
            MEM_W(static_cast<int32_t>(scene + 0x14A8u), 0));
        *ctx = keep;
        ctx->r9 = sections;
        store_camera_point(rdram, camera + 0x350u, saved_min);
        store_camera_point(rdram, camera + 0x35Cu, saved_max);
        if (head_other) {
            store_camera_point(rdram, load_head + 0x350u, head_min);
            store_camera_point(rdram, load_head + 0x35Cu, head_max);
        }
        reloaded = 1;
    }
    if (poked_head) {
        MEM_W(static_cast<int32_t>(kCamPool + 0x20u), 0) =
            static_cast<int32_t>(saved_head);
    }

    static const bool vis_off = env_flag_on("TUROK2_NO_VIS_HOLD");
    static uint32_t last_geom = 0xFFFFFFFFu;
    static uint32_t last_cvis = 0xFFFFFFFFu;
    uint32_t geom = static_cast<uint32_t>(MEM_W(0X18, ctx->r29));
    uint32_t cvis = static_cast<uint32_t>(MEM_W(0X1C, ctx->r29));
    int forced = 0;
    if (!vis_off && geom == 0u && last_geom != 0u) {
        MEM_W(0X18, ctx->r29) = static_cast<int32_t>(last_geom);
        geom = last_geom;
        forced |= 1;
    } else if (geom != 0u) {
        last_geom = geom;
    }
    if (!vis_off && cvis == 0u && last_cvis != 0u) {
        MEM_W(0X1C, ctx->r29) = static_cast<int32_t>(last_cvis);
        cvis = last_cvis;
        forced |= 2;
    } else if (cvis != 0u) {
        last_cvis = cvis;
    }

    const float span_x = vmax.x - vmin.x;
    const float span_z = vmax.z - vmin.z;
    const bool empty = sections <= 0;
    const bool tiny = span_x < 64.0f || span_z < 64.0f;
    const bool miss = g_scene_last_nsec > 0 && g_scene_last_emits == 0;
    static uint64_t calls = 0;
    static uint64_t empties = 0;
    if (empty) {
        empties++;
    }
    const bool cinema = g_cinema;
    calls++;
    g_scene_last_nsec = sections;
    if (forced || empty || tiny || reloaded || miss ||
        (cinema && ((calls & 31u) == 0u)) ||
        ((calls & 255u) == 0u)) {
        std::fprintf(stderr,
            "[scene:draw] cam=%08X nsec=%d empty=%llu "
            "spanxz=(%.1f,%.1f) geom=%08X cvis=%08X force=%d "
            "reload=%d->%d poke=%d preg=%08X emits=%llu vispass=%llu "
            "sec=%llu%s\n",
            camera, sections, static_cast<unsigned long long>(empties),
            span_x, span_z, geom, cvis, forced,
            reloaded ? old_sections : 0, reloaded ? sections : 0,
            poked_head, preg,
            static_cast<unsigned long long>(g_scene_last_emits),
            static_cast<unsigned long long>(g_scene_last_vis_pass),
            static_cast<unsigned long long>(g_scene_last_sec_try),
            miss ? " MISS" : "");
    }
}

extern "C" void turok2_patch_sky_layer_corners(uint8_t* rdram,
                                              recomp_context* ctx) {
    // 0x00282770 in func_00282340: the five sky verts at $sp+0x38 are
    // (TCorner.x, m_Height, TCorner.z) after the near-plane clip. $s3 is
    // the camera. Replacing XZ with the pre-widen snapshot undoes the
    // cull shear. If look-up collapsed the XZ span, grow the plane to
    // far-clip so the 5-point fan still covers the view. Do not leftover
    // scroll/frame. Opt-out: TUROK2_NO_SKY_CORNER_FIX=1.
    static const bool disabled = env_flag_on("TUROK2_NO_SKY_CORNER_FIX");
    if (disabled) {
        return;
    }

    const uint32_t camera = static_cast<uint32_t>(ctx->r19);
    const uint32_t verts = static_cast<uint32_t>(ctx->r29) + 0x38u;
    if (!guest_kseg0(camera) || !guest_kseg0(verts) ||
        !guest_kseg0(verts + 4u * 0x0Cu)) {
        return;
    }

    CameraPoint plane[5];
    for (uint32_t i = 0; i < 5; i++) {
        plane[i] = load_camera_point(rdram, verts + i * 0x0Cu);
        if (!finite_camera_point(plane[i])) {
            return;
        }
    }

    const AuthoredTCorners* snap = find_authored_tcorners(camera);
    if (snap != nullptr) {
        for (int i = 0; i < 5; i++) {
            plane[i].x = snap->corners[i].x;
            plane[i].z = snap->corners[i].z;
        }
    }

    float min_x = plane[1].x;
    float max_x = plane[1].x;
    float min_z = plane[1].z;
    float max_z = plane[1].z;
    for (int i = 2; i < 5; i++) {
        min_x = std::min(min_x, plane[i].x);
        max_x = std::max(max_x, plane[i].x);
        min_z = std::min(min_z, plane[i].z);
        max_z = std::max(max_z, plane[i].z);
    }
    const float span = std::max(max_x - min_x, max_z - min_z);

    float far_clip = load_f32(rdram, static_cast<int32_t>(camera + 0x510u));
    if (!std::isfinite(far_clip) || far_clip < 64.0f) {
        far_clip = 2048.0f;
    }

    const float cx = plane[0].x;
    const float cz = plane[0].z;
    const float needed = far_clip;
    int grew = 0;
    if (span < 16.0f) {
        const float half = needed * 0.55f;
        plane[1].x = cx + half;
        plane[1].z = cz + half;
        plane[2].x = cx - half;
        plane[2].z = cz + half;
        plane[3].x = cx + half;
        plane[3].z = cz - half;
        plane[4].x = cx - half;
        plane[4].z = cz - half;
        grew = 2;
    } else if (span < needed * 0.55f) {
        const float scale = needed / span;
        for (int i = 1; i < 5; i++) {
            plane[i].x = cx + (plane[i].x - cx) * scale;
            plane[i].z = cz + (plane[i].z - cz) * scale;
        }
        grew = 1;
    }

    for (uint32_t i = 0; i < 5; i++) {
        store_camera_point(rdram, verts + i * 0x0Cu, plane[i]);
    }

    static uint64_t calls = 0;
    if ((calls++ & 255u) == 0u) {
        std::fprintf(stderr,
            "[sky:cover] cam=%08X span=%.1f far=%.1f snap=%d grow=%d\n",
            camera, span, far_clip, snap != nullptr ? 1 : 0, grew);
    }
}

extern "C" void turok2_patch_fog_position(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    // 0x0027E530 in func_0027E000. $a2 is gSPFogPosition min (0–1000),
    // the low 16 of CCamera.m_FogStart. fm = 128000 / (1000 - min) is
    // packed as int16. min>=997 wraps (Adia wash); min==1000 divides by
    // zero. Always cap at 996. Authored T2 is 995, so the ceiling is a
    // no-op until a region set spikes. Also push heavy fog (min < 900)
    // toward that ceiling by the far/fog slider.
    uint32_t min = static_cast<uint32_t>(ctx->r6) & 0xFFFFu;
    if (min > 1000u) {
        min = 1000u;
    }
    const uint32_t authored = min;
    if (min < 900u) {
        const float remaining = (1000.0f - static_cast<float>(min)) / kFogDistanceScale;
        float pushed = 1000.0f - remaining;
        if (pushed < static_cast<float>(min)) {
            pushed = static_cast<float>(min);
        }
        if (pushed > 996.0f) {
            pushed = 996.0f;
        }
        min = static_cast<uint32_t>(pushed);
    }
    if (min > 996u) {
        min = 996u;
    }

    ctx->r6 = static_cast<int32_t>(min);
    g_turok2_adon_fog_min_in.store(authored, std::memory_order_relaxed);
    g_turok2_adon_fog_min.store(min, std::memory_order_relaxed);

    static uint32_t last_in = 0xFFFFFFFFu;
    static uint64_t calls = 0;
    const bool spike = authored > 996u;
    const bool changed = authored != last_in;
    last_in = authored;
    if (spike || changed || ((calls++ & 255u) == 0u)) {
        std::fprintf(stderr, "[fog:pos] min %u -> %u scale=%.3f%s\n",
                     authored, min, kFogDistanceScale,
                     spike ? " WRAP" : "");
    }
}

static int guest_ptr_ok(uint32_t address) {
    if ((address >= 0x80000000u) && (address < 0x80800000u)) {
        return 1;
    }
    if ((address >= RECOMP_USEG_BANKS_START) &&
        (address < RECOMP_USEG_BANKS_END)) {
        return 1;
    }
    return 0;
}

static int is_code_vram(uint32_t address) {
    if ((address >= 0x00200000u) && (address < 0x00300000u)) {
        return 1;
    }
    if ((address >= 0x00400000u) && (address < 0x00480000u)) {
        return 1;
    }
    return 0;
}

static recomp_func_t* lookup_code(uint32_t address) {
    return LOOKUP_FUNC_OR_NULL(static_cast<int32_t>(address));
}

static uint32_t pull_from_filter(uint32_t param, uint32_t type) {
    switch (param) {
        case 0x00294E3Cu: return 0x00294D60u; // n_alAuxBusPull
        case 0x00297038u: return 0x00296750u; // n_alEnvmixerPull
        case 0x00296118u: return 0x00295690u;
        case 0x00296690u: return 0x002964D0u;
        case 0x0029FB64u: return 0x0029F190u; // RAX/load pull
        case 0x002964A0u: return 0x00296360u; // n_alMainBusPull
        case 0x002973E0u: return 0x002972E0u;
        default: break;
    }
    // Type 0 is also raw zero in uninitialized memory, so only the param
    // handler above may identify a RAX/load filter.
    switch (type) {
        case 1: return 0x002964D0u;
        case 3: return 0x002972E0u;
        case 4: return 0x00295690u;
        case 5: return 0x00296750u;
        case 6: return 0x00294D60u;
        case 7: return 0x00296360u;
        default: break;
    }
    return 0;
}

extern "C" void turok2_patch_audio_frame(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t bus = static_cast<uint32_t>(ctx->r16);
    if (!guest_ptr_ok(bus)) {
        return;
    }
    const uint32_t pull = static_cast<uint32_t>(MEM_W(bus, 4));
    if (lookup_code(pull) != nullptr) {
        return;
    }
    const uint32_t param = static_cast<uint32_t>(MEM_W(bus, 8));
    const uint32_t type = static_cast<uint32_t>(MEM_W(bus, 0x10));
    const uint32_t restored = pull_from_filter(param, type);
    if ((restored != 0) && (lookup_code(restored) != nullptr)) {
        MEM_W(bus, 4) = static_cast<int32_t>(restored);
    }
}

// ROM image of D_800AD080: callback + flags, stride 8. Flags bit 0x2
// walks 0xBF8/0xDF8 as child objects; type 1 is 0, so that path is floats.
static const uint32_t kResourceTable[][2] = {
    {0x0023801Cu, 0x00000000u}, {0x00238134u, 0x00000000u},
    {0x0023870Cu, 0x00000004u}, {0x0023876Cu, 0x00000006u},
    {0x002387C4u, 0x00000006u}, {0x0023881Cu, 0x0000000Au},
    {0x00238824u, 0x00000010u}, {0x00238858u, 0x00000010u},
    {0x00238134u, 0x00000000u}, {0x00238888u, 0x00000000u},
    {0x0023890Cu, 0x00000000u}, {0x00238914u, 0x00000000u},
    {0x00238958u, 0x00000000u}, {0x002389ECu, 0x00000000u},
    {0x00238A7Cu, 0x00000000u}, {0x00238B2Cu, 0x00000006u},
};
constexpr uint32_t kResourceTableBase = 0x800AD080u;
constexpr uint32_t kResourceTableSlots =
    static_cast<uint32_t>(sizeof(kResourceTable) / sizeof(kResourceTable[0]));

static int resource_slot_ok(uint32_t slot) {
    return slot < kResourceTableSlots;
}

static void write_resource_slot(uint8_t* rdram, uint32_t slot) {
    const uint32_t addr = kResourceTableBase + slot * 8u;
    MEM_W(static_cast<int32_t>(addr), 0) =
        static_cast<int32_t>(kResourceTable[slot][0]);
    MEM_W(static_cast<int32_t>(addr), 4) =
        static_cast<int32_t>(kResourceTable[slot][1]);
}

extern "C" void turok2_patch_restore_resource_table(uint8_t* rdram, recomp_context* ctx) {
    (void)ctx;
    uint32_t smashed = 0;
    for (uint32_t slot = 0; slot < kResourceTableSlots; slot++) {
        const uint32_t addr = kResourceTableBase + slot * 8u;
        const uint32_t callback = static_cast<uint32_t>(MEM_W(addr, 0));
        const uint32_t flags = static_cast<uint32_t>(MEM_W(addr, 4));
        if (callback != kResourceTable[slot][0] || flags != kResourceTable[slot][1]) {
            if (smashed < 8) {
                std::fprintf(stderr,
                    "[res] table[%u] was %08X flags=%08X, ROM %08X flags=%08X\n",
                    slot, callback, flags,
                    kResourceTable[slot][0], kResourceTable[slot][1]);
            }
            write_resource_slot(rdram, slot);
            smashed++;
        }
    }
    static int reports = 0;
    if (smashed != 0 && reports < 24) {
        std::fprintf(stderr, "[res] restored %u smashed D_800AD080 slot(s)\n", smashed);
        reports++;
    }
}

struct JalrFrame {
    int32_t r16, r17, r18, r19, r20, r21, r22, target, r29;
    uint32_t type;
};

thread_local JalrFrame gJalrFrames[12];
thread_local int gJalrDepth = 0;

static uint32_t walker_type(const recomp_context* ctx) {
    const uint32_t s5 = static_cast<uint32_t>(ctx->r21);
    if (s5 < kResourceTableSlots) {
        return s5;
    }
    if (gJalrDepth > 0) {
        const uint32_t saved = gJalrFrames[gJalrDepth - 1].type;
        if (saved < kResourceTableSlots) {
            return saved;
        }
    }
    return 0xFFFFFFFFu;
}

static void push_jalr_frame(recomp_context* ctx) {
    if (gJalrDepth >= 12) {
        return;
    }
    JalrFrame& frame = gJalrFrames[gJalrDepth];
    frame.r16 = ctx->r16;
    frame.r17 = ctx->r17;
    frame.r18 = ctx->r18;
    frame.r19 = ctx->r19;
    frame.r20 = ctx->r20;
    frame.r21 = ctx->r21;
    frame.r22 = ctx->r22;
    frame.target = ctx->r2;
    frame.r29 = ctx->r29;
    frame.type = walker_type(ctx);
    gJalrDepth++;
}

extern "C" void turok2_patch_jalr_done(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    if (gJalrDepth <= 0) {
        return;
    }
    gJalrDepth--;
    const JalrFrame& frame = gJalrFrames[gJalrDepth];
    const int clobbered =
        ctx->r16 != frame.r16 || ctx->r17 != frame.r17 || ctx->r18 != frame.r18 ||
        ctx->r19 != frame.r19 || ctx->r21 != frame.r21 || ctx->r29 != frame.r29;
    static int reports = 0;
    if (clobbered && reports < 100) {
        std::fprintf(stderr,
            "[jalr] abi s0=%08X->%08X s1=%08X->%08X s5=%08X->%08X sp=%08X->%08X type=%u target=%08X\n",
            static_cast<uint32_t>(ctx->r16), static_cast<uint32_t>(frame.r16),
            static_cast<uint32_t>(ctx->r17), static_cast<uint32_t>(frame.r17),
            static_cast<uint32_t>(ctx->r21), static_cast<uint32_t>(frame.r21),
            static_cast<uint32_t>(ctx->r29), static_cast<uint32_t>(frame.r29),
            frame.type, static_cast<uint32_t>(frame.target));
        reports++;
    }
}

extern "C" void turok2_patch_jalr_abi_diag_v0(uint8_t* rdram, recomp_context* ctx) {
    push_jalr_frame(ctx);
    turok2_diag_capture(rdram, ctx, 0x00414EA8, static_cast<uint32_t>(ctx->r2));
}

extern "C" void turok2_patch_jalr_abi_diag_v1(uint8_t* rdram, recomp_context* ctx) {
    push_jalr_frame(ctx);
    uint32_t original = static_cast<uint32_t>(ctx->r3);
    turok2_diag_capture(rdram, ctx, 0x00414EA8, original);
}

extern "C" void turok2_patch_fix_jalr(uint8_t* rdram, recomp_context* ctx) {
    push_jalr_frame(ctx);

    const uint32_t original = static_cast<uint32_t>(ctx->r2);
    // Both current hook sites are indirect calls inside func_002949A4. Record
    // the containing guest function; the exact call site is already identified
    // by the surrounding [jalr] line when needed.
    turok2_diag_capture(rdram, ctx, 0x002949A4u, original);
    // Observation only. Never rewrite ctx, guest tables, filters, or the jalr
    // target here. Exact registered targets proceed normally; exact unmapped
    // targets are reported and then left for librecomp to reject. Each failure
    // is fixed separately with verified metadata or a dedicated subsystem patch.
    if (lookup_code(original) != nullptr) return;

    static int reports = 0;
    if (reports < 40) {
        std::fprintf(stderr,
            "[jalr] unmapped %08X a0=%08X a1=%08X a2=%08X at=%08X s0=%08X s1=%08X s2=%08X s3=%08X s5=%08X\n",
            original,
            static_cast<uint32_t>(ctx->r4),
            static_cast<uint32_t>(ctx->r5),
            static_cast<uint32_t>(ctx->r6),
            static_cast<uint32_t>(ctx->r1),
            static_cast<uint32_t>(ctx->r16),
            static_cast<uint32_t>(ctx->r17),
            static_cast<uint32_t>(ctx->r18),
            static_cast<uint32_t>(ctx->r19),
            static_cast<uint32_t>(ctx->r21));
        reports++;
    }
    static int full_reports = 0;
    if (full_reports < 8) {
        turok2_diag_report("unmapped jalr", rdram, ctx, 0x002949A4u, original);
        full_reports++;
    }
}

extern "C" void turok2_patch_fix_particle(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t object = static_cast<uint32_t>(ctx->r16);
    const uint32_t inner = static_cast<uint32_t>(ctx->r2);
    uint32_t fixed = inner;

    if ((inner >= 0x00B00000u) && (inner < 0x00B80000u)) {
        fixed = 0x00400000u + (inner - 0x00B00000u);
    } else if ((inner >= 0x0014A070u) && (inner < 0x00186070u)) {
        fixed = 0x00400000u + (inner - 0x0014A070u);
    } else if ((inner >= 0x00186070u) && (inner < 0x001BFA70u)) {
        fixed = 0x0043C000u + (inner - 0x00186070u);
    }

    if (fixed != inner) {
        std::fprintf(stderr, "[fx] relocate particle inner %08X -> %08X object=%08X\n",
                     inner, fixed, object);
        if (guest_ptr_ok(object)) {
            MEM_W(object, 0x14) = static_cast<int32_t>(fixed);
        }
        ctx->r2 = static_cast<int32_t>(fixed);
    }
    ctx->r18 = ADD32(ctx->r2, 0x14);
}

extern "C" void turok2_patch_rax_open(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t header = static_cast<uint32_t>(ctx->r4);
    const int32_t rate = static_cast<int32_t>(ctx->r5);
    uint32_t word0 = 0;
    uint32_t word1 = 0;
    uint32_t word2 = 0;
    if (guest_ptr_ok(header)) {
        word0 = static_cast<uint32_t>(MEM_W(header, 0));
        word1 = static_cast<uint32_t>(MEM_W(header, 4));
        word2 = static_cast<uint32_t>(MEM_W(header, 8));
    }
    static int reports = 0;
    if ((std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) &&
        (reports < 20)) {
        std::fprintf(stderr,
            "[rax] open header=%08X rate=%d w0=%08X w1=%08X w2=%08X\n",
            header, rate, word0, word1, word2);
        reports++;
    }
}

extern "C" void turok2_patch_rax_decomp(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t remaining = static_cast<uint32_t>(MEM_W(0x80125C48, 0));
    static int reports = 0;
    if ((std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) &&
        ((reports < 20) || ((reports % 120) == 0))) {
        std::fprintf(stderr, "[rax] decomp remaining=%u v0=%08X\n",
                     remaining, static_cast<uint32_t>(ctx->r2));
    }
    reports++;
}

extern "C" void turok2_patch_rax_decomp_done(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t pcm = static_cast<uint32_t>(ctx->r2);
    int16_t peak = 0;
    if (guest_ptr_ok(pcm)) {
        for (int i = 0; i < 32; i++) {
            const int16_t sample = static_cast<int16_t>(MEM_H(pcm, i * 2));
            const int16_t abs_sample = (sample < 0) ? static_cast<int16_t>(-sample) : sample;
            if (abs_sample > peak) {
                peak = abs_sample;
            }
        }
    }
    static int reports = 0;
    if ((std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) &&
        ((reports < 20) || ((reports % 120) == 0))) {
        std::fprintf(stderr, "[rax] pcm=%08X peak=%d remaining=%u\n",
                     pcm, static_cast<int>(peak),
                     static_cast<uint32_t>(MEM_W(0x80125C48, 0)));
    }
    reports++;
}

extern "C" void turok2_patch_rax_player(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t player = static_cast<uint32_t>(ctx->r16);
    const uint32_t state = static_cast<uint32_t>(ctx->r3);
    static int reports = 0;
    static uint32_t last_state = 0xFFFFFFFFu;
    if ((std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) &&
        ((state != last_state) || (reports < 8) || ((reports % 240) == 0))) {
        std::fprintf(stderr, "[rax] player=%08X state=%u remaining=%u\n",
                     player, state, static_cast<uint32_t>(MEM_W(0x80125C48, 0)));
        last_state = state;
    }
    reports++;
}

// The original VM pager reserves this useg address and faults the bank data in
// later. Static recompilation has no TLB fault path, so materialize the bank
// when the reservation is completed.
extern "C" void turok2_patch_page_useg(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t msg = static_cast<uint32_t>(ctx->r4);
    const uint32_t dest = static_cast<uint32_t>(ctx->r5);
    const uint32_t size = guest_ptr_ok(msg) ? static_cast<uint32_t>(MEM_W(msg, 4)) : 0;
    const uint32_t obj = guest_ptr_ok(msg) ? static_cast<uint32_t>(MEM_W(msg, 8)) : 0;
    const uint32_t rom = guest_ptr_ok(obj) ? static_cast<uint32_t>(MEM_W(obj, 8)) : 0;

    if ((dest < RECOMP_USEG_BANKS_START) || (dest >= RECOMP_USEG_BANKS_END) ||
        (size == 0) || (rom == 0)) {
        return;
    }

    uint32_t copy = size;
    if ((dest + copy) > RECOMP_USEG_BANKS_END) {
        copy = RECOMP_USEG_BANKS_END - dest;
    }
    recomp::do_rom_read(rdram, dest, 0x10000000u + rom, copy);

    if (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) {
        std::fprintf(stderr, "[audio] page dest=%08X size=%08X rom=%08X\n",
                     dest, copy, rom);
    }
}

// osVirtualToPhysical must return the relocated backing offset for useg audio
// banks. KSEG0 heap addresses deliberately retain their normal low physical.
extern "C" void turok2_patch_v2p(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    const uint32_t va = static_cast<uint32_t>(ctx->r4);
    if (((va & 0x80000000u) == 0) &&
        (va >= RECOMP_USEG_BANKS_START) && (va < RECOMP_USEG_BANKS_END)) {
        ctx->r2 = static_cast<int32_t>(
            RECOMP_USEG_BANKS_BASE + (va - RECOMP_USEG_BANKS_START));
    }
}

// func_002097AC calculates animation keyframe interpolation using repeated
// float subtraction: while (f0 <= f20) f20 -= f0. If an actor spawns or enters
// a cutscene (such as Adon) with non-finite or extreme keyframe values (>= 2^24),
// f20 - f0 rounds right back to f20 in IEEE 754 float32, creating an infinite loop.
// Sanitizing the incoming float $a1 prevents this hang without altering legitimate timing.
extern "C" void turok2_patch_sanitize_anim(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    const uint32_t bits = static_cast<uint32_t>(ctx->r5);
    float time = 0.0f;
    std::memcpy(&time, &bits, sizeof(time));
    if (!std::isfinite(time) || time < -100.0f || time > 10000.0f) {
        static int reports = 0;
        if (reports < 24) {
            std::fprintf(stderr,
                "[anim:sanitize] actor anim time non-finite/extreme: %f (bits=%08X) -> clamped to 0.0f\n",
                time, bits);
            reports++;
        }
        time = 0.0f;
        uint32_t sanitized_bits = 0;
        std::memcpy(&sanitized_bits, &time, sizeof(sanitized_bits));
        ctx->r5 = static_cast<int32_t>(sanitized_bits);
    }
}

extern "C" void turok2_take_mouse_deltas(float* dx, float* dy, bool* captured);
extern "C" void turok2_get_keyboard_movement(float* strafe, float* forward);
extern "C" void turok2_get_weapon_keys(bool* previous, bool* next);

extern "C" void turok2_patch_disable_lookspring(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t opts_addr = static_cast<uint32_t>(ctx->r17);
    if (opts_addr >= 0x80000000u && opts_addr < 0x80800000u) {
        // This hook runs immediately after func_00246BC0 loads m_pOptions and
        // before either of its two m_LookSpring branches reads offset 0x2D.
        MEM_B(0x2D, opts_addr) = 0;
    }
}

extern "C" void turok2_patch_player_controls(uint8_t* rdram, recomp_context* ctx) {
    // 1. Permanently disable lookspring in player options ($s1 / ctx->r17)
    const uint32_t opts_addr = static_cast<uint32_t>(ctx->r17);
    if (opts_addr >= 0x80000000u && opts_addr < 0x80800000u) {
        // m_LookSpring is at offset 0x2D of CPlayerOptions
        MEM_B(0x2D, opts_addr) = 0;
    }

    // Read native keyboard movement accumulated by SDL on the main thread.
    float keyboard_strafe = 0.0f;
    float keyboard_forward = 0.0f;
    turok2_get_keyboard_movement(&keyboard_strafe, &keyboard_forward);

    const uint32_t cont_addr = static_cast<uint32_t>(ctx->r16);
    if (cont_addr >= 0x80000000u && cont_addr < 0x80800000u) {
        if (keyboard_strafe != 0.0f) {
            store_f32(rdram, static_cast<int32_t>(cont_addr + 0x1Cu), keyboard_strafe);
        }
        if (keyboard_forward != 0.0f) {
            store_f32(rdram, static_cast<int32_t>(cont_addr + 0x20u), keyboard_forward);
        }

        // Q/E feed the exact two authored weapon-selection paths. The normal
        // path consumes translated single-press A/B actions; the quick path
        // reads held A/B directly from CContState.
        bool weapon_previous = false;
        bool weapon_next = false;
        turok2_get_weapon_keys(&weapon_previous, &weapon_next);
        static bool previous_was_held = false;
        static bool next_was_held = false;
        const bool previous_pressed = weapon_previous && !previous_was_held;
        const bool next_pressed = weapon_next && !next_was_held;
        previous_was_held = weapon_previous;
        next_was_held = weapon_next;

        constexpr uint32_t kPreviousWeapon = 0x8000u;
        constexpr uint32_t kNextWeapon = 0x4000u;
        const uint32_t held_mask = (weapon_previous ? kPreviousWeapon : 0u) |
                                   (weapon_next ? kNextWeapon : 0u);
        const uint32_t pressed_mask = (previous_pressed ? kPreviousWeapon : 0u) |
                                      (next_pressed ? kNextWeapon : 0u);
        const uint8_t weapon_select =
            (opts_addr >= 0x80000000u && opts_addr < 0x80800000u)
                ? MEM_BU(0x31, opts_addr) : 0;
        if (weapon_select == 1 && held_mask != 0u) {
            const uint32_t raw_cont_addr = static_cast<uint32_t>(MEM_W(0x10, cont_addr));
            if (raw_cont_addr >= 0x80000000u && raw_cont_addr < 0x80800000u) {
                MEM_W(0xB0, raw_cont_addr) |= held_mask;
            }
        } else {
            if (held_mask != 0u) {
                MEM_W(0x24, cont_addr) |= held_mask;
            }
            if (pressed_mask != 0u) {
                MEM_W(0x28, cont_addr) |= pressed_mask;
                MEM_W(0x2C, cont_addr) |= pressed_mask;
                MEM_W(0x34, cont_addr) |= pressed_mask;
            }
        }
    }
}

extern "C" void turok2_patch_direct_mouse_look(uint8_t* rdram, recomp_context* ctx) {
    float dx = 0.0f;
    float dy = 0.0f;
    bool captured = false;
    turok2_take_mouse_deltas(&dx, &dy, &captured);

    // Direct mouse can slam tens of degrees in one 120 Hz Update. The N64
    // stick curve never did that, and the constructed eye / near plane then
    // sits inside the stair riser or ceiling for a frame. Cap is per Update,
    // not per second: leftover frames still add up to a fast look.
    static const bool no_look_cap = env_flag_on("TUROK2_NO_LOOK_CAP");
    if (!no_look_cap) {
        const float cap = env_scale_override("TUROK2_LOOK_CAP", 0.10f, 0.02f, 0.50f);
        dx = std::clamp(dx, -cap, cap);
        dy = std::clamp(dy, -cap, cap);
    }

    // At 0x0024F154 func_0024EF70 has finished the authored analog path. s1 is
    // the player and s2 is its active rotation target. Apply the raw X/Y pair
    // together after that path so neither axis sees stick acceleration,
    // dead-zones, sensitivity tables or look smoothing.
    const uint32_t player_addr = static_cast<uint32_t>(ctx->r17);
    const uint32_t target_addr = static_cast<uint32_t>(ctx->r18);
    const bool valid =
        player_addr >= 0x80000000u && player_addr < 0x80800000u &&
        target_addr >= 0x80000000u && target_addr < 0x80800000u &&
        MEM_W(0x1284, player_addr) == 0;
    if (valid) {
        g_live_player = player_addr;
    }
    static uint32_t pitch_player_addr = 0;
    static float native_pitch = 0.0f;
    static bool native_pitch_active = false;
    if (!captured || !valid) {
        native_pitch_active = false;
        pitch_player_addr = 0;
        return;
    }

    if (std::isfinite(dx) && dx != 0.0f) {
        float yaw = load_f32(rdram, static_cast<int32_t>(target_addr + 0x50u));
        if (std::isfinite(yaw)) {
            constexpr float two_pi = 6.2831853071795864769f;
            yaw = std::remainder(yaw + dx, two_pi);
            store_f32(rdram, static_cast<int32_t>(target_addr + 0x50u), yaw);
        }
    }

    // This ROM's live CPlayerContState begins at player+0xA40 (eight bytes
    // earlier than the old LibTEngine draft). The authored pitch is the X
    // component of m_vHeadRotOffset at player+0xAC8. Keep a native target so
    // the following authored frame cannot reintroduce analog smoothing.
    const uint32_t pitch_addr = player_addr + 0xAC8u;
    if (std::isfinite(dy) && dy != 0.0f) {
        if (!native_pitch_active || pitch_player_addr != player_addr) {
            native_pitch = load_f32(rdram, static_cast<int32_t>(pitch_addr));
            if (!std::isfinite(native_pitch)) {
                native_pitch = 0.0f;
            }
            native_pitch_active = true;
            pitch_player_addr = player_addr;
        }
        constexpr float pitch_limit = 1.3962634016f; // 80 degrees
        native_pitch = std::clamp(native_pitch - dy, -pitch_limit, pitch_limit);
    }
    if (native_pitch_active && pitch_player_addr == player_addr) {
        store_f32(rdram, static_cast<int32_t>(pitch_addr), native_pitch);
    }
}

// CParticle.m_vLastPos (+0x144) is copied from m_vPos every unique Update
// at 0x0022B538, then Draw (func_00232934) does pos − lastPos for the
// tracer. func_00239F00 already integrates × increment, so travel is
// real-time; the ribbon is one unique step (4× shorter at 120). Delay
// the snapshot by (authored_steps − 1) so lastPos→pos stays one 30 Hz
// step. A shared skip-copy leftover would pulse 1↔4 and flicker.
// TUROK2_NO_LASTPOS_HOLD=1 restores the raw unique-rate copy.
extern "C" void turok2_patch_lastpos_hold(uint8_t* rdram, recomp_context* ctx) {
    static const bool disabled = env_flag_on("TUROK2_NO_LASTPOS_HOLD");
    if (disabled || preserve_authored_cadence()) {
        return;
    }

    const uint32_t particle = static_cast<uint32_t>(ctx->r20);
    if (!guest_kseg0(particle)) {
        return;
    }

    const float scale = visual_step_scale(rdram);
    if (scale <= 0.0f || scale >= 0.999f) {
        return;
    }
    int delay = static_cast<int>(std::lround(1.0f / scale)) - 1;
    if (delay < 1) {
        return;
    }
    if (delay > 7) {
        delay = 7;
    }

    struct LastPosSample {
        uint32_t x = 0;
        uint32_t y = 0;
        uint32_t z = 0;
    };
    struct LastPosHist {
        LastPosSample ring[7];
        int delay = 0;
        int head = 0;
        bool armed = false;
    };
    static std::unordered_map<uint32_t, LastPosHist> hist;

    const float increment = load_f32(rdram, kFrameIncrement);
    const float c_frame = load_f32(rdram, static_cast<int32_t>(particle + 0x11C));
    const bool respawn = !std::isfinite(c_frame) ||
                         (std::isfinite(increment) && increment > 0.0f &&
                          c_frame <= increment * 1.5f);

    LastPosHist& slot = hist[particle];
    const LastPosSample current{
        static_cast<uint32_t>(ctx->r9),
        static_cast<uint32_t>(ctx->r10),
        static_cast<uint32_t>(ctx->r11),
    };

    if (respawn || !slot.armed || slot.delay != delay) {
        slot.delay = delay;
        slot.head = 0;
        slot.armed = true;
        for (int i = 0; i < delay; ++i) {
            slot.ring[i] = current;
        }
        return;
    }

    const LastPosSample delayed = slot.ring[slot.head];
    slot.ring[slot.head] = current;
    slot.head = (slot.head + 1) % delay;
    ctx->r9 = delayed.x;
    ctx->r10 = delayed.y;
    ctx->r11 = delayed.z;
}

// CParticle Advance (func_00230CB4 @ 0x00230DF8): nFrames==1 skips the
// increment lifetime and dies on the first unique Update; cFrame >= 1
// kills the same sprite again (~66 ms at unique 120). Authored 30 Hz
// is one flash plus the death jals (func_00236EA0 / func_00275544).
// Hold both compares on the 0x6D20 leftover (one authored step), then
// let L_00230F18 run so death SFX still fire. Do not invent an 8-frame
// lifetime — that kept sprites in the 128-slot pool and dropped sounds.
// Do not leftover-hold m_cFrame += increment. Opt-out:
// TUROK2_NO_EXPLOSION_HOLD=1.
static void store_f1(recomp_context* ctx, float value) {
    ctx->f1.fl = value;
    if (ctx->f_odd != nullptr) {
        uint32_t bits = 0;
        std::memcpy(&bits, &value, sizeof(bits));
        ctx->f_odd[0] = bits;
    }
}

extern "C" void turok2_patch_oneshot_particle_hold(uint8_t* rdram,
                                                  recomp_context* ctx) {
    static const bool disabled = env_flag_on("TUROK2_NO_EXPLOSION_HOLD");
    if (disabled || preserve_authored_cadence()) {
        return;
    }
    if (static_cast<int32_t>(ctx->r2) != 1) {
        return;
    }

    const uint32_t particle = static_cast<uint32_t>(ctx->r16);
    if (!guest_kseg0(particle)) {
        return;
    }

    static std::unordered_map<uint32_t, LeftoverClock> accum;
    LeftoverClock& clock = accum[particle];
    if (leftover_step(clock, false)) {
        accum.erase(particle);
        return;
    }
    store_f1(ctx, 0.0f);
    ctx->r2 = 2;
}

// Same Advance (func_00230CB4 @ 0x00231128): nearby particles get
// nFrames forced to 1, then the oneshot death path. A barrel cluster
// runs that store every unique Update (4×), so every flipbook collapses
// in 8 ms. Leftover-hold the store to 30/s like 0x6D20 — do not skip
// it forever (that filled the pool and dropped death SFX). Opt-out
// shares TUROK2_NO_EXPLOSION_HOLD=1.
extern "C" void turok2_patch_particle_nframes_cull(uint8_t* rdram,
                                                  recomp_context* ctx) {
    static const bool disabled = env_flag_on("TUROK2_NO_EXPLOSION_HOLD");
    if (disabled || preserve_authored_cadence()) {
        return;
    }
    const uint32_t particle = static_cast<uint32_t>(ctx->r16);
    if (!guest_kseg0(particle)) {
        return;
    }

    static std::unordered_map<uint32_t, LeftoverClock> accum;
    LeftoverClock& clock = accum[particle];
    if (leftover_step(clock, false)) {
        accum.erase(particle);
        return;
    }
    const int16_t n_frames =
        static_cast<int16_t>(MEM_H(static_cast<int32_t>(particle), 0x128));
    if (n_frames > 1) {
        ctx->r12 = static_cast<uint32_t>(n_frames);
    }
}

// CFxTimer tick (func_002367A0 @ 0x002367E0): m_Time -= increment is
// real-time, then fire + m_Count -= 1. Spacing below one authored step
// expires every unique Update, so a burst of N lasts N/120 s. Leftover
// later fires to 30/s like 0x6D20, but allow the first fire so the
// opening bang is not dropped. Leave increment-correct spacing alone.
extern "C" void turok2_patch_fx_timer_fire_hold(uint8_t* rdram,
                                               recomp_context* ctx) {
    static const bool disabled = env_flag_on("TUROK2_NO_EXPLOSION_HOLD");
    if (disabled || preserve_authored_cadence()) {
        return;
    }

    const uint32_t timer = static_cast<uint32_t>(ctx->r16);
    if (!guest_kseg0(timer)) {
        return;
    }

    const float time = ctx->f1.fl;
    if (!std::isfinite(time) || time > 0.0f) {
        return;
    }

    const float increment = load_f32(rdram, kFrameIncrement);
    if (!std::isfinite(increment) || increment <= 0.0f) {
        return;
    }

    const float spacing = load_f32(rdram, static_cast<int32_t>(timer + 0x0C));
    const float authored_step = g_cinema ? 1.0f : 0.5f;
    if (std::isfinite(spacing) && spacing >= authored_step * 0.75f) {
        return;
    }

    static std::unordered_map<uint32_t, LeftoverClock> accum;
    LeftoverClock& clock = accum[timer];
    if (leftover_step(clock, true)) {
        return;
    }
    store_f1(ctx, increment);
    store_f32(rdram, static_cast<int32_t>(timer + 0x08), increment);
}

// Legacy explicit helper retained for ABI compatibility with older generated
// builds. Current builds execute the proven entry_0041A4D0 body directly.
extern "C" void turok2_patch_projectile_clear_flag(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t a0 = static_cast<uint32_t>(ctx->r4);
    if (a0 >= 0x80000000u && a0 < 0x80800000u) {
        const uint32_t target = MEM_W(a0, 0x0C);
        if (target >= 0x80000000u && target < 0x80800000u) {
            uint32_t flags = MEM_W(target, 0x02D8);
            flags &= 0xFE7FFFFFu; // ~0x01800000
            MEM_W(target, 0x02D8) = flags;
            ctx->r2 = flags;
        }
    }
}

extern "C" void turok2_patch_music_tick(uint8_t* rdram, recomp_context* ctx) {}
extern "C" void turok2_patch_play_sound(uint8_t* rdram, recomp_context* ctx) {}
extern "C" void turok2_patch_seqp_handler(uint8_t* rdram, recomp_context* ctx) {}
extern "C" void turok2_patch_seqp_play(uint8_t* rdram, recomp_context* ctx) {}
