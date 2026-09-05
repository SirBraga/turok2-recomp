#ifndef TUROK2_N64_PATCHES_H
#define TUROK2_N64_PATCHES_H

#define RECOMP_PATCH __attribute__((section(".recomp_patch")))
#define RECOMP_HOOK(func) __attribute__((section(".recomp_hook." #func)))
#define RECOMP_HOOK_RETURN(func) __attribute__((section(".recomp_hook_return." #func)))

typedef signed int s32;
typedef float f32;

#define gNextTicks (*(s32*)0x8011AD10)
#define gFrameIncrement (*(f32*)0x800B6D28)
#define gRefreshRate (*(f32*)0x8011B0A4)
#define gDisplayListCount (*(s32*)0x8011B110)

s32 Cinema_PathPlaying(void);

#endif
