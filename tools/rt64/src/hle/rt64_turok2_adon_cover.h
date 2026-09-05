// Snapshot of CEngineApp fade + CCamera flash, published from the Turok 2
// Draw hook and read by TUROK2_PRESENT_TRACE. Header-only so the two TUs
// share one set of atomics without a new link symbol.
//
// LibTEngine T2 US layouts (verified against this ROM):
//   GameApp 0x800F6CB0
//   m_FadeFast/Status/Alpha at +0x23FE0 / +0x23FE1 / +0x23FE4
//   CCameraPool at +0x22C00, m_MainCamera at +0x40 (= 0x801198F0)
//   CCamera.m_FlashTimer/Mode/Flash/Color at +0x520 / +0x52C / +0x530 / +0x536

#pragma once

#include <atomic>
#include <cstdint>
#include <cstring>

struct Turok2AdonCover {
    uint32_t draw = 0;
    uint32_t frame_count = 0;
    uint32_t cinema = 0;
    uint32_t fade_fast = 0;
    uint32_t fade_status = 0;
    float fade_alpha = 0.0f;
    uint32_t cam = 0;
    int32_t flash_mode = 0;
    float flash_timer = 0.0f;
    uint32_t flash = 0;
    uint32_t flash_dec = 0;
    uint32_t flash_r = 0;
    uint32_t flash_g = 0;
    uint32_t flash_b = 0;
    uint32_t flash_a = 0;
    uint32_t fog_r = 0;
    uint32_t fog_g = 0;
    uint32_t fog_b = 0;
    uint32_t fog_min = 0;
    uint32_t fog_min_in = 0;
    float far_clip = 0.0f;
    float pitch = 0.0f;
    float yaw = 0.0f;
    int32_t region = 0;
    uint32_t vis_bits = 0;
    uint32_t pregion = 0;
    uint32_t underwater = 0;
    int32_t sky_layers = 0;
    float sky_alpha = 0.0f;
    uint32_t lsb_skip = 0;
    uint32_t lsb_rebuild = 0;
    uint32_t cams = 0;
    uint32_t live = 0;
};

inline std::atomic<uint32_t> g_turok2_adon_draw{0};
inline std::atomic<uint32_t> g_turok2_adon_frame_count{0};
inline std::atomic<uint32_t> g_turok2_adon_cinema{0};
inline std::atomic<uint32_t> g_turok2_adon_fade_fast{0};
inline std::atomic<uint32_t> g_turok2_adon_fade_status{0};
inline std::atomic<uint32_t> g_turok2_adon_fade_bits{0};
inline std::atomic<uint32_t> g_turok2_adon_cam{0};
inline std::atomic<int32_t> g_turok2_adon_flash_mode{0};
inline std::atomic<uint32_t> g_turok2_adon_flash_timer_bits{0};
inline std::atomic<uint32_t> g_turok2_adon_flash{0};
inline std::atomic<uint32_t> g_turok2_adon_flash_dec{0};
inline std::atomic<uint32_t> g_turok2_adon_flash_r{0};
inline std::atomic<uint32_t> g_turok2_adon_flash_g{0};
inline std::atomic<uint32_t> g_turok2_adon_flash_b{0};
inline std::atomic<uint32_t> g_turok2_adon_flash_a{0};
inline std::atomic<uint32_t> g_turok2_adon_fog_r{0};
inline std::atomic<uint32_t> g_turok2_adon_fog_g{0};
inline std::atomic<uint32_t> g_turok2_adon_fog_b{0};
inline std::atomic<uint32_t> g_turok2_adon_fog_min{0};
inline std::atomic<uint32_t> g_turok2_adon_fog_min_in{0};
inline std::atomic<uint32_t> g_turok2_adon_far_bits{0};
inline std::atomic<uint32_t> g_turok2_adon_pitch_bits{0};
inline std::atomic<uint32_t> g_turok2_adon_yaw_bits{0};
inline std::atomic<int32_t> g_turok2_adon_region{0};
inline std::atomic<uint32_t> g_turok2_adon_vis_bits{0};
inline std::atomic<uint32_t> g_turok2_adon_pregion{0};
inline std::atomic<uint32_t> g_turok2_adon_underwater{0};
inline std::atomic<int32_t> g_turok2_adon_sky_layers{0};
inline std::atomic<uint32_t> g_turok2_adon_sky_alpha_bits{0};
inline std::atomic<uint32_t> g_turok2_lsb_skip_acc{0};
inline std::atomic<uint32_t> g_turok2_lsb_rebuild_acc{0};
inline std::atomic<uint32_t> g_turok2_adon_lsb_skip{0};
inline std::atomic<uint32_t> g_turok2_adon_lsb_rebuild{0};
inline std::atomic<uint32_t> g_turok2_adon_cams{0};
inline std::atomic<uint32_t> g_turok2_adon_live{0};

inline uint32_t turok2_float_bits(float value) {
    uint32_t bits = 0;
    static_assert(sizeof(bits) == sizeof(value), "float must be 32-bit");
    std::memcpy(&bits, &value, sizeof(bits));
    return bits;
}

inline float turok2_bits_float(uint32_t bits) {
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

inline void turok2_adon_cover_publish(const Turok2AdonCover &snap) {
    g_turok2_adon_draw.store(snap.draw, std::memory_order_relaxed);
    g_turok2_adon_frame_count.store(snap.frame_count, std::memory_order_relaxed);
    g_turok2_adon_cinema.store(snap.cinema, std::memory_order_relaxed);
    g_turok2_adon_fade_fast.store(snap.fade_fast, std::memory_order_relaxed);
    g_turok2_adon_fade_status.store(snap.fade_status, std::memory_order_relaxed);
    g_turok2_adon_fade_bits.store(turok2_float_bits(snap.fade_alpha), std::memory_order_relaxed);
    g_turok2_adon_cam.store(snap.cam, std::memory_order_relaxed);
    g_turok2_adon_flash_mode.store(snap.flash_mode, std::memory_order_relaxed);
    g_turok2_adon_flash_timer_bits.store(turok2_float_bits(snap.flash_timer), std::memory_order_relaxed);
    g_turok2_adon_flash.store(snap.flash, std::memory_order_relaxed);
    g_turok2_adon_flash_dec.store(snap.flash_dec, std::memory_order_relaxed);
    g_turok2_adon_flash_r.store(snap.flash_r, std::memory_order_relaxed);
    g_turok2_adon_flash_g.store(snap.flash_g, std::memory_order_relaxed);
    g_turok2_adon_flash_b.store(snap.flash_b, std::memory_order_relaxed);
    g_turok2_adon_flash_a.store(snap.flash_a, std::memory_order_relaxed);
    g_turok2_adon_fog_r.store(snap.fog_r, std::memory_order_relaxed);
    g_turok2_adon_fog_g.store(snap.fog_g, std::memory_order_relaxed);
    g_turok2_adon_fog_b.store(snap.fog_b, std::memory_order_relaxed);
    g_turok2_adon_fog_min.store(snap.fog_min, std::memory_order_relaxed);
    g_turok2_adon_fog_min_in.store(snap.fog_min_in, std::memory_order_relaxed);
    g_turok2_adon_far_bits.store(turok2_float_bits(snap.far_clip), std::memory_order_relaxed);
    g_turok2_adon_pitch_bits.store(turok2_float_bits(snap.pitch), std::memory_order_relaxed);
    g_turok2_adon_yaw_bits.store(turok2_float_bits(snap.yaw), std::memory_order_relaxed);
    g_turok2_adon_region.store(snap.region, std::memory_order_relaxed);
    g_turok2_adon_vis_bits.store(snap.vis_bits, std::memory_order_relaxed);
    g_turok2_adon_pregion.store(snap.pregion, std::memory_order_relaxed);
    g_turok2_adon_underwater.store(snap.underwater, std::memory_order_relaxed);
    g_turok2_adon_sky_layers.store(snap.sky_layers, std::memory_order_relaxed);
    g_turok2_adon_sky_alpha_bits.store(turok2_float_bits(snap.sky_alpha), std::memory_order_relaxed);
    g_turok2_adon_lsb_skip.store(snap.lsb_skip, std::memory_order_relaxed);
    g_turok2_adon_lsb_rebuild.store(snap.lsb_rebuild, std::memory_order_relaxed);
    g_turok2_adon_cams.store(snap.cams, std::memory_order_relaxed);
    g_turok2_adon_live.store(snap.live, std::memory_order_release);
}

inline Turok2AdonCover turok2_adon_cover_copy() {
    Turok2AdonCover snap;
    snap.live = g_turok2_adon_live.load(std::memory_order_acquire);
    snap.draw = g_turok2_adon_draw.load(std::memory_order_relaxed);
    snap.frame_count = g_turok2_adon_frame_count.load(std::memory_order_relaxed);
    snap.cinema = g_turok2_adon_cinema.load(std::memory_order_relaxed);
    snap.fade_fast = g_turok2_adon_fade_fast.load(std::memory_order_relaxed);
    snap.fade_status = g_turok2_adon_fade_status.load(std::memory_order_relaxed);
    snap.fade_alpha = turok2_bits_float(g_turok2_adon_fade_bits.load(std::memory_order_relaxed));
    snap.cam = g_turok2_adon_cam.load(std::memory_order_relaxed);
    snap.flash_mode = g_turok2_adon_flash_mode.load(std::memory_order_relaxed);
    snap.flash_timer = turok2_bits_float(
        g_turok2_adon_flash_timer_bits.load(std::memory_order_relaxed));
    snap.flash = g_turok2_adon_flash.load(std::memory_order_relaxed);
    snap.flash_dec = g_turok2_adon_flash_dec.load(std::memory_order_relaxed);
    snap.flash_r = g_turok2_adon_flash_r.load(std::memory_order_relaxed);
    snap.flash_g = g_turok2_adon_flash_g.load(std::memory_order_relaxed);
    snap.flash_b = g_turok2_adon_flash_b.load(std::memory_order_relaxed);
    snap.flash_a = g_turok2_adon_flash_a.load(std::memory_order_relaxed);
    snap.fog_r = g_turok2_adon_fog_r.load(std::memory_order_relaxed);
    snap.fog_g = g_turok2_adon_fog_g.load(std::memory_order_relaxed);
    snap.fog_b = g_turok2_adon_fog_b.load(std::memory_order_relaxed);
    snap.fog_min = g_turok2_adon_fog_min.load(std::memory_order_relaxed);
    snap.fog_min_in = g_turok2_adon_fog_min_in.load(std::memory_order_relaxed);
    snap.far_clip = turok2_bits_float(g_turok2_adon_far_bits.load(std::memory_order_relaxed));
    snap.pitch = turok2_bits_float(g_turok2_adon_pitch_bits.load(std::memory_order_relaxed));
    snap.yaw = turok2_bits_float(g_turok2_adon_yaw_bits.load(std::memory_order_relaxed));
    snap.region = g_turok2_adon_region.load(std::memory_order_relaxed);
    snap.vis_bits = g_turok2_adon_vis_bits.load(std::memory_order_relaxed);
    snap.pregion = g_turok2_adon_pregion.load(std::memory_order_relaxed);
    snap.underwater = g_turok2_adon_underwater.load(std::memory_order_relaxed);
    snap.sky_layers = g_turok2_adon_sky_layers.load(std::memory_order_relaxed);
    snap.sky_alpha = turok2_bits_float(g_turok2_adon_sky_alpha_bits.load(std::memory_order_relaxed));
    snap.lsb_skip = g_turok2_adon_lsb_skip.load(std::memory_order_relaxed);
    snap.lsb_rebuild = g_turok2_adon_lsb_rebuild.load(std::memory_order_relaxed);
    snap.cams = g_turok2_adon_cams.load(std::memory_order_relaxed);
    return snap;
}
