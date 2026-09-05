#ifndef TUROK2_PATCHES_H
#define TUROK2_PATCHES_H

#include "recomp.h"

#ifdef __cplusplus
extern "C" {
#endif

void turok2_set_camera_scales(float fov_scale, float far_scale, float fog_scale);
void turok2_set_hud_scale(float hud_scale);
void turok2_patch_hud_draw_scale(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_hud_icon_scale(uint8_t* rdram, recomp_context* ctx);

void turok2_patch_native_60(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_lock_increment(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_relock_increment(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_freeze(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_flinch_s0(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_flinch_s3(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_hurt_sfx(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_swoosh_edge(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_swoosh_uv(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_swoosh_detach(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_overlay_lerp(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_overlay_f0(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_overlay_wait(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_wave_every_update(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_wave_index(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_frame_a1(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_frame_t0(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_frame_count(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_frame_aux(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_frontend_hold(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_skip_pak_screen(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_anim_repeat(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_scale_hud_timer(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_retrace_guard(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_gameplay_camera(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_fog_position(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_widen_camera_culling(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_fix_jalr(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_jalr_done(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_restore_resource_table(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_fix_particle(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_rax_open(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_rax_decomp(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_rax_decomp_done(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_rax_player(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_page_useg(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_v2p(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_audio_frame(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_sanitize_anim(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_player_controls(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_disable_lookspring(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_direct_mouse_look(uint8_t* rdram, recomp_context* ctx);
void turok2_patch_projectile_clear_flag(uint8_t* rdram, recomp_context* ctx);

#ifdef __cplusplus
}
#endif

#endif
