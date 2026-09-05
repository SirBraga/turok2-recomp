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

static bool preserve_authored_cadence() {
    static const bool enabled = env_flag_on("TUROK2_AUTHORED_CADENCE");
    return enabled;
}

static bool unique_120_enabled() {
    // 120 is the shipping cadence. TUROK2_UNIQUE_60=1 is the opt-out, kept
    // only for A/B measurement. TUROK2_AUTHORED_CADENCE still overrides both.
    static const bool dropped_to_60 = env_flag_on("TUROK2_UNIQUE_60");
    return !dropped_to_60 && !preserve_authored_cadence();
}

static const char* engine_mode_name() {
    if (preserve_authored_cadence()) {
        return "authored+interp";
    }
    return unique_120_enabled() ? "unique120" : "unique60";
}

static std::atomic<float> g_fov_scale{1.0f};
static std::atomic<float> g_far_scale{1.0f};
static std::atomic<float> g_fog_scale{1.0f};
static std::atomic<float> g_hud_scale{1.0f};

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

extern "C" void turok2_set_camera_scales(float fov_scale, float far_scale, float fog_scale) {
    auto clamp_scale = [](float value, float lo, float hi) {
        if (!std::isfinite(value)) {
            return 1.0f;
        }
        return value < lo ? lo : (value > hi ? hi : value);
    };
    g_fov_scale.store(clamp_scale(fov_scale, 1.0f, 1.5f), std::memory_order_relaxed);
    g_far_scale.store(clamp_scale(far_scale, 1.0f, 2.0f), std::memory_order_relaxed);
    g_fog_scale.store(clamp_scale(fog_scale, 1.0f, 2.0f), std::memory_order_relaxed);
}

extern "C" void turok2_set_hud_scale(float hud_scale) {
    if (!std::isfinite(hud_scale)) {
        g_hud_scale.store(1.0f, std::memory_order_relaxed);
        return;
    }
    const float clamped = hud_scale < 0.5f ? 0.5f : (hud_scale > 1.0f ? 1.0f : hud_scale);
    g_hud_scale.store(clamped, std::memory_order_relaxed);
}

static float camera_fov_scale() {
    return env_scale_override("TUROK2_FOV_SCALE",
                              g_fov_scale.load(std::memory_order_relaxed),
                              1.0f, 1.5f);
}

static float camera_far_scale() {
    return env_scale_override("TUROK2_FAR_SCALE",
                              g_far_scale.load(std::memory_order_relaxed),
                              1.0f, 2.0f);
}

static float camera_fog_scale() {
    return env_scale_override("TUROK2_FOG_SCALE",
                              g_fog_scale.load(std::memory_order_relaxed),
                              1.0f, 2.0f);
}

// RDP gSPFogPosition min must track far clip. The Graphics fog slider used
// to write a float over packed int CCamera.m_FogStart (+0x524); bit 31 is a
// pack flag and the low 16 bits are the 0–1000 fog min. Always push fog at
// least as far as draw distance (floor 2.0) so the wall does not sit at the
// authored N64 range while far clip is already doubled.
static float fog_distance_scale() {
    const float far_scale = camera_far_scale();
    const float fog_scale = camera_fog_scale();
    float scale = far_scale > fog_scale ? far_scale : fog_scale;
    if (scale < 2.0f) {
        scale = 2.0f;
    }
    return scale;
}

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

static float hud_scale_now() {
    return env_scale_override(
        "TUROK2_HUD_SCALE",
        g_hud_scale.load(std::memory_order_relaxed),
        0.5f, 1.0f);
}

static bool gameplay_hud_caller(uint32_t ra) {
    // Same windows as the 2D HUD Size hook. Pause/cinema overlays live at
    // 0x004xxxxx and must keep authored size.
    return (ra >= 0x0024A000u && ra < 0x0024D000u) ||
           (ra >= 0x00252000u && ra < 0x00255000u) ||
           (ra >= 0x00277000u && ra < 0x00277400u);
}

extern "C" void turok2_patch_hud_draw_scale(uint8_t* rdram, recomp_context* ctx) {
    // func_0027B320 at 0x0027B3BC: X/Y size floats live at caller $sp+0x10/+0x14,
    // which is $sp+0x48/+0x4C after the prologue. Pixel X/Y stay in $a2/$a3 so
    // corner anchors do not slide. First-person weapon uses on-screen
    // projection, not this path. Skip pause/cinema overlay callers (0x004xxxxx).
    const float scale = hud_scale_now();
    if (scale > 0.999f) {
        return;
    }
    if (!gameplay_hud_caller(static_cast<uint32_t>(ctx->r31))) {
        return;
    }
    const int32_t sp = static_cast<int32_t>(ctx->r29);
    float sx = load_f32(rdram, sp + 0x48);
    float sy = load_f32(rdram, sp + 0x4C);
    if (std::isfinite(sx) && sx != 0.0f) {
        store_f32(rdram, sp + 0x48, sx * scale);
    }
    if (std::isfinite(sy) && sy != 0.0f) {
        store_f32(rdram, sp + 0x4C, sy * scale);
    }
}

extern "C" void turok2_patch_hud_icon_scale(uint8_t* rdram, recomp_context* ctx) {
    // func_00277CF0 at 0x00277D58: $f22/$f24 are the 3D digit/icon ScaleX/Y
    // (passed on to func_0027A7A0). Pixel position is $f21/$f20 and stays put
    // so corners hold, matching the 2D HUD Size path. Callers are gameplay HUD
    // only (func_0024C648 and the 0x00252Fxx overlay). Do not touch $f22/$f24
    // after the digit-advance mul at 0x00277EC0 — scale once here.
    (void)rdram;
    const float scale = hud_scale_now();
    if (scale > 0.999f) {
        return;
    }
    if (!gameplay_hud_caller(static_cast<uint32_t>(ctx->r31))) {
        return;
    }
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    if (std::isfinite(ctx->f22.fl) && ctx->f22.fl != 0.0f) {
        ctx->f22.fl *= scale;
    }
    if (std::isfinite(ctx->f24.fl) && ctx->f24.fl != 0.0f) {
        ctx->f24.fl *= scale;
    }
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

extern "C" void turok2_patch_scale_frame_count(uint8_t* rdram, recomp_context* ctx) {
    // Kill-listed 2026-09-04: leftover-scaling the stored gFrameCount
    // froze boot (no [fps:engine], black VI). Hooks stay as no-ops.
    // The Draw edge is still the cheapest place to run the timer sweep.
    (void)ctx;
    find_frame_timers(rdram);
    boot_timeline(rdram);
    attract_demo_probe(rdram);
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

extern "C" void turok2_patch_gameplay_camera(uint8_t* rdram, recomp_context* ctx) {
    // 0x0027D97C in func_0027D160: Cinema_PathPlaying just returned in $v0.
    // Delay slot already stored $f22 into CCamera.m_Fov (+0x6C). Gameplay
    // (v0==0) still feeds $f22 to guPerspective at 0x0027D9A8. Cinema may
    // overwrite m_FarClip (+0x510) at 0x0027D9A4 — skip all scales there.
    // Do not write m_FieldOfView (+0x518) (would compound). Do not touch
    // m_mOnScreenProjection (+0x430) (weapon/HUD).
    if (ctx->r2 != 0) {
        return;
    }
    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
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

    const float far_scale = camera_far_scale();
    if (far_scale > 1.0001f) {
        float far_clip = load_f32(rdram, static_cast<int32_t>(camera + 0x510u));
        if (std::isfinite(far_clip) && far_clip > 0.0f) {
            far_clip *= far_scale;
            store_f32(rdram, static_cast<int32_t>(camera + 0x510u), far_clip);
        }
        CHECK_FR(ctx, 24);
        if (std::isfinite(ctx->f24.fl)) {
            ctx->f24.fl *= far_scale;
        }
        CHECK_FR(ctx, 21);
        if (std::isfinite(ctx->f21.fl)) {
            ctx->f21.fl *= far_scale;
        }
    }

    // m_FogStart (+0x524) is a packed int (low 16 = gSPFogPosition min).
    // Scaled in turok2_patch_fog_position when the DL is built.
}

extern "C" void turok2_patch_widen_camera_culling(uint8_t* rdram,
                                                     recomp_context* ctx) {
    // CCamera::m_vTCorners at +0x24C contains the camera origin followed by
    // top-right, top-left, bottom-right and bottom-left far-plane points. The
    // original engine turns those points into m_ViewVolume immediately after
    // this hook. Widening the horizontal pairs here changes only CPU visibility;
    // RT64 remains the sole owner of the rendered projection/aspect ratio.
    //
    // TUROK2_WIDE_CULL_OFF=1 leaves m_vTCorners exactly as the engine wrote
    // them. TUROK2_WIDE_CULL_SCALE cannot express a true no-op: it clamps to
    // 1.0 and is then multiplied by the FOV factor, so the lowest reachable
    // scale still expands the corners and still stores them back.
    static const bool cull_off = env_flag_on("TUROK2_WIDE_CULL_OFF");
    if (cull_off) {
        return;
    }

    const uint32_t camera = static_cast<uint32_t>(ctx->r20);
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

    const float scale = camera_cull_scale();
    if (scale <= 1.0001f) {
        return;
    }
    expand_camera_pair(corners[1], corners[2], scale);
    expand_camera_pair(corners[3], corners[4], scale);

    for (uint32_t i = 1; i < 5; i++) {
        store_camera_point(rdram, camera + kCornersOffset + i * kPointSize, corners[i]);
    }

    static uint64_t calls = 0;
    if ((calls++ & 255u) == 0u) {
        std::fprintf(stderr,
            "[wide:cull] camera=%08X scale=%.3f origin=(%.1f,%.1f,%.1f)\n",
            camera, scale, corners[0].x, corners[0].y, corners[0].z);
    }
}

extern "C" void turok2_patch_fog_position(uint8_t* rdram, recomp_context* ctx) {
    (void)rdram;
    // 0x0027E530 in func_0027E000. $a2 is gSPFogPosition min (0–1000).
    // fm = 128000 / (1000 - min) is packed as int16. min=999 → fm=128000
    // wraps and washes the whole framebuffer to fog color (seen in Adia).
    // Safe ceiling is 996 (fm=32000). Authored T2 min is already 995 —
    // leave it. Only push heavy fog (min < 900) toward that ceiling.
    uint32_t min = static_cast<uint32_t>(ctx->r6) & 0xFFFFu;
    if (min > 1000u) {
        min = 1000u;
    }
    const uint32_t authored = min;
    if (min < 900u) {
        const float remaining = (1000.0f - static_cast<float>(min)) / fog_distance_scale();
        float pushed = 1000.0f - remaining;
        if (pushed < static_cast<float>(min)) {
            pushed = static_cast<float>(min);
        }
        if (pushed > 996.0f) {
            pushed = 996.0f;
        }
        min = static_cast<uint32_t>(pushed);
    }

    ctx->r6 = static_cast<int32_t>(min);

    static uint64_t calls = 0;
    if ((calls++ & 255u) == 0u) {
        std::fprintf(stderr, "[fog:pos] min %u -> %u scale=%.3f\n",
                     authored, min, fog_distance_scale());
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
