#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004540E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004540E8: jr          $ra
    // 0x004540EC: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    return;
    // 0x004540EC: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
;}
RECOMP_FUNC void func_0020D908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020D908: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
    // 0x0020D90C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x0020D910: lw          $a3, 0x20($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X20);
    // 0x0020D914: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D918: lwc1        $f2, 0x54F8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X54F8);
    // 0x0020D91C: and         $v0, $t0, $a2
    ctx->r2 = ctx->r8 & ctx->r6;
    // 0x0020D920: srl         $v1, $a3, 16
    ctx->r3 = S32(U32(ctx->r7) >> 16);
    // 0x0020D924: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D928: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D92C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D930: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D934: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0020D938: andi        $v1, $a3, 0xFFFF
    ctx->r3 = ctx->r7 & 0XFFFF;
    // 0x0020D93C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D940: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D944: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D948: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D94C: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D950: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020D954: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x0020D958: lhu         $v0, 0x24($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X24);
    // 0x0020D95C: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x0020D960: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D964: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D968: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D96C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x0020D970: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020D974: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x0020D978: lw          $a3, 0x28($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X28);
    // 0x0020D97C: and         $v0, $t0, $a2
    ctx->r2 = ctx->r8 & ctx->r6;
    // 0x0020D980: srl         $v1, $a3, 16
    ctx->r3 = S32(U32(ctx->r7) >> 16);
    // 0x0020D984: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D988: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D98C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D990: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D994: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0020D998: andi        $v1, $a3, 0xFFFF
    ctx->r3 = ctx->r7 & 0XFFFF;
    // 0x0020D99C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D9A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D9A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D9A8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D9AC: swc1        $f1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020D9B0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020D9B4: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x0020D9B8: lhu         $v0, 0x2C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2C);
    // 0x0020D9BC: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x0020D9C0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020D9C4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020D9C8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020D9CC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x0020D9D0: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020D9D4: lw          $t0, 0x10($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X10);
    // 0x0020D9D8: lw          $a3, 0x30($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X30);
    // 0x0020D9DC: and         $v0, $t0, $a2
    ctx->r2 = ctx->r8 & ctx->r6;
    // 0x0020D9E0: srl         $v1, $a3, 16
    ctx->r3 = S32(U32(ctx->r7) >> 16);
    // 0x0020D9E4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D9E8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020D9EC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020D9F0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020D9F4: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0020D9F8: andi        $v1, $a3, 0xFFFF
    ctx->r3 = ctx->r7 & 0XFFFF;
    // 0x0020D9FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020DA00: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020DA04: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020DA08: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020DA0C: swc1        $f1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DA10: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020DA14: lw          $t0, 0x14($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X14);
    // 0x0020DA18: lhu         $v0, 0x34($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X34);
    // 0x0020DA1C: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x0020DA20: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020DA24: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020DA28: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020DA2C: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x0020DA30: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x0020DA34: lw          $t0, 0x18($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X18);
    // 0x0020DA38: lw          $a3, 0x38($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X38);
    // 0x0020DA3C: and         $v0, $t0, $a2
    ctx->r2 = ctx->r8 & ctx->r6;
    // 0x0020DA40: srl         $v1, $a3, 16
    ctx->r3 = S32(U32(ctx->r7) >> 16);
    // 0x0020DA44: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020DA48: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0020DA4C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0020DA50: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020DA54: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x0020DA58: andi        $v1, $a3, 0xFFFF
    ctx->r3 = ctx->r7 & 0XFFFF;
    // 0x0020DA5C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020DA60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020DA64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020DA68: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020DA6C: swc1        $f1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DA70: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020DA74: lw          $t0, 0x1C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X1C);
    // 0x0020DA78: lhu         $v0, 0x3C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X3C);
    // 0x0020DA7C: and         $a2, $t0, $a2
    ctx->r6 = ctx->r8 & ctx->r6;
    // 0x0020DA80: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020DA84: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x0020DA88: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020DA8C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020DA90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020DA94: lwc1        $f1, 0x54FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54FC);
    // 0x0020DA98: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DA9C: jr          $ra
    // 0x0020DAA0: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020DAA0: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0044F1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F1B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044F1B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0044F1BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044F1C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0044F1C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0044F1C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0044F1CC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0044F1D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0044F1D4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044F1D8: jal         0x00413230
    // 0x0044F1DC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_00413230(rdram, ctx);
        goto after_0;
    // 0x0044F1DC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x0044F1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044F1E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044F1E8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0044F1EC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044F1F0: jal         0x00413F74
    // 0x0044F1F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_1;
    // 0x0044F1F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044F1F8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044F1FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0044F200: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0044F204: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0044F208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0044F20C: jr          $ra
    // 0x0044F210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044F210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002571FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002571FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00257200: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00257204: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00257208: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0025720C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00257210: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00257214: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00257218: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025721C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257220: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00257224: blez        $v0, L_00257260
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00257228: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00257260;
    }
    // 0x00257228: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0025722C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00257230: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00257234:
    // 0x00257234: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x00257238: jal         0x0024E700
    // 0x0025723C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x0025723C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x00257240: beql        $v0, $zero, L_0025724C
    if (ctx->r2 == 0) {
        // 0x00257244: sw          $zero, 0x24($s0)
        MEM_W(0X24, ctx->r16) = 0;
            goto L_0025724C;
    }
    goto skip_0;
    // 0x00257244: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    skip_0:
    // 0x00257248: sw          $s3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r19;
L_0025724C:
    // 0x0025724C: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00257250: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00257254: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00257258: bne         $v0, $zero, L_00257234
    if (ctx->r2 != 0) {
        // 0x0025725C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_00257234;
    }
    // 0x0025725C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_00257260:
    // 0x00257260: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00257264: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00257268: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025726C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00257270: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00257274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257278: jr          $ra
    // 0x0025727C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025727C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042EADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EADC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042EAE0: beq         $v0, $zero, L_0042EAF0
    if (ctx->r2 == 0) {
        // 0x0042EAE4: nop
    
            goto L_0042EAF0;
    }
    // 0x0042EAE4: nop

    // 0x0042EAE8: jal         0x00248A8C
    // 0x0042EAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_0;
    // 0x0042EAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_0042EAF0:
    // 0x0042EAF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042EAF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042EAF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042EAFC: jr          $ra
    // 0x0042EB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042EB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00293C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293C50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00293C54: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00293C58: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00293C5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00293C60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00293C64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00293C68: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x00293C6C: nop

    // 0x00293C70: bc1f        L_00293C90
    if (!c1cs) {
        // 0x00293C74: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00293C90;
    }
    // 0x00293C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00293C78: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00293C7C: addiu       $a0, $a0, -0x5B78
    ctx->r4 = ADD32(ctx->r4, -0X5B78);
    // 0x00293C80: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00293C84: addiu       $a1, $a1, -0x5B74
    ctx->r5 = ADD32(ctx->r5, -0X5B74);
    // 0x00293C88: jal         0x0029B020
    // 0x00293C8C: addiu       $a2, $zero, 0x11D
    ctx->r6 = ADD32(0, 0X11D);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00293C8C: addiu       $a2, $zero, 0x11D
    ctx->r6 = ADD32(0, 0X11D);
    after_0:
L_00293C90:
    // 0x00293C90: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x00293C94: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00293C98: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00293C9C: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00293CA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293CA4: ldc1        $f1, -0x5B60($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5B60);
    // 0x00293CA8: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x00293CAC: c.lt.d      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.d < ctx->f0.d;
    // 0x00293CB0: nop

    // 0x00293CB4: bc1t        L_00293CC4
    if (c1cs) {
        // 0x00293CB8: ori         $v0, $v0, 0xFFFF
        ctx->r2 = ctx->r2 | 0XFFFF;
            goto L_00293CC4;
    }
    // 0x00293CB8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00293CBC: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x00293CC0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
L_00293CC4:
    // 0x00293CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00293CC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00293CCC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00293CD0: jr          $ra
    // 0x00293CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00293CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023C960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0023C964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023C968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C96C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0023C970: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023C974: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023C978: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0023C97C: jal         0x0020EEF8
    // 0x0023C980: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_0;
    // 0x0023C980: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0023C984: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x0023C988: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0023C98C: jal         0x0020EEF8
    // 0x0023C990: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_1;
    // 0x0023C990: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0023C994: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x0023C998: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0023C99C: jal         0x0020EEF8
    // 0x0023C9A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x0023C9A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0023C9A4: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x0023C9A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023C9AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0023C9B0: jal         0x0020EEF8
    // 0x0023C9B4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x0023C9B4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0023C9B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0023C9BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023C9C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023C9C4: jr          $ra
    // 0x0023C9C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0023C9C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020D274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020D274: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0020D278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D27C: lwc1        $f0, 0x5494($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5494);
    // 0x0020D280: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D284: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D288: lwc1        $f1, 0x5498($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5498);
    // 0x0020D28C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D290: nop

    // 0x0020D294: bc1t        L_0020D2AC
    if (c1cs) {
        // 0x0020D298: addiu       $t0, $a1, 0x20
        ctx->r8 = ADD32(ctx->r5, 0X20);
            goto L_0020D2AC;
    }
    // 0x0020D298: addiu       $t0, $a1, 0x20
    ctx->r8 = ADD32(ctx->r5, 0X20);
    // 0x0020D29C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D2A0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D2A4: j           L_0020D2C0
    // 0x0020D2A8: nop

        goto L_0020D2C0;
    // 0x0020D2A8: nop

L_0020D2AC:
    // 0x0020D2AC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D2B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D2B4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D2B8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D2BC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D2C0:
    // 0x0020D2C0: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0020D2C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D2C8: lwc1        $f0, 0x549C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X549C);
    // 0x0020D2CC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D2D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D2D4: lwc1        $f1, 0x54A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54A0);
    // 0x0020D2D8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D2DC: nop

    // 0x0020D2E0: bc1tl       L_0020D2F8
    if (c1cs) {
        // 0x0020D2E4: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D2F8;
    }
    goto skip_0;
    // 0x0020D2E4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0020D2E8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D2EC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D2F0: j           L_0020D30C
    // 0x0020D2F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D30C;
    // 0x0020D2F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D2F8:
    // 0x0020D2F8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D2FC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D300: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D304: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D308: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D30C:
    // 0x0020D30C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D310: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D314: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D318: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D31C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D320: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D324: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D328: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D32C: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0020D330: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D334: lwc1        $f0, 0x54A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54A4);
    // 0x0020D338: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D33C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D340: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D344: lwc1        $f1, 0x54A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54A8);
    // 0x0020D348: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D34C: nop

    // 0x0020D350: bc1t        L_0020D368
    if (c1cs) {
        // 0x0020D354: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D368;
    }
    // 0x0020D354: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D358: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D35C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D360: j           L_0020D380
    // 0x0020D364: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D380;
    // 0x0020D364: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D368:
    // 0x0020D368: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D36C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D370: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D374: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D378: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0020D37C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D380:
    // 0x0020D380: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D384: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D388: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D38C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D390: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0020D394: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D398: lwc1        $f0, 0x54AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54AC);
    // 0x0020D39C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D3A0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D3A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D3A8: lwc1        $f1, 0x54B0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54B0);
    // 0x0020D3AC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D3B0: nop

    // 0x0020D3B4: bc1t        L_0020D3CC
    if (c1cs) {
        // 0x0020D3B8: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D3CC;
    }
    // 0x0020D3B8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D3BC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D3C0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D3C4: j           L_0020D3E0
    // 0x0020D3C8: nop

        goto L_0020D3E0;
    // 0x0020D3C8: nop

L_0020D3CC:
    // 0x0020D3CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D3D0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D3D4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D3D8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D3DC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D3E0:
    // 0x0020D3E0: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0020D3E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D3E8: lwc1        $f0, 0x54B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54B4);
    // 0x0020D3EC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D3F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D3F4: lwc1        $f1, 0x54B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54B8);
    // 0x0020D3F8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D3FC: nop

    // 0x0020D400: bc1tl       L_0020D418
    if (c1cs) {
        // 0x0020D404: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D418;
    }
    goto skip_1;
    // 0x0020D404: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0020D408: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D40C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D410: j           L_0020D42C
    // 0x0020D414: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D42C;
    // 0x0020D414: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D418:
    // 0x0020D418: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D41C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D420: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D424: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D428: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D42C:
    // 0x0020D42C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D430: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D434: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D438: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D43C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D440: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D444: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D448: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D44C: lwc1        $f1, 0x18($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x0020D450: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D454: lwc1        $f0, 0x54BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54BC);
    // 0x0020D458: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D45C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D460: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D464: lwc1        $f1, 0x54C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54C0);
    // 0x0020D468: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D46C: nop

    // 0x0020D470: bc1t        L_0020D488
    if (c1cs) {
        // 0x0020D474: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D488;
    }
    // 0x0020D474: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D478: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D47C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D480: j           L_0020D4A0
    // 0x0020D484: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D4A0;
    // 0x0020D484: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D488:
    // 0x0020D488: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D48C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D490: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D494: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D498: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0020D49C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D4A0:
    // 0x0020D4A0: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D4A4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D4A8: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D4AC: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D4B0: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x0020D4B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D4B8: lwc1        $f0, 0x54C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54C4);
    // 0x0020D4BC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D4C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D4C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D4C8: lwc1        $f1, 0x54C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54C8);
    // 0x0020D4CC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D4D0: nop

    // 0x0020D4D4: bc1t        L_0020D4EC
    if (c1cs) {
        // 0x0020D4D8: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D4EC;
    }
    // 0x0020D4D8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D4DC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D4E0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D4E4: j           L_0020D500
    // 0x0020D4E8: nop

        goto L_0020D500;
    // 0x0020D4E8: nop

L_0020D4EC:
    // 0x0020D4EC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D4F0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D4F4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D4F8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D4FC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D500:
    // 0x0020D500: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020D504: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D508: lwc1        $f0, 0x54CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54CC);
    // 0x0020D50C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D510: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D514: lwc1        $f1, 0x54D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54D0);
    // 0x0020D518: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D51C: nop

    // 0x0020D520: bc1tl       L_0020D538
    if (c1cs) {
        // 0x0020D524: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D538;
    }
    goto skip_2;
    // 0x0020D524: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0020D528: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D52C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D530: j           L_0020D54C
    // 0x0020D534: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D54C;
    // 0x0020D534: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D538:
    // 0x0020D538: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D53C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D540: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D544: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D548: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D54C:
    // 0x0020D54C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D550: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D554: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D558: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D55C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D560: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D564: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D568: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D56C: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020D570: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D574: lwc1        $f0, 0x54D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54D4);
    // 0x0020D578: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D57C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D584: lwc1        $f1, 0x54D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54D8);
    // 0x0020D588: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D58C: nop

    // 0x0020D590: bc1t        L_0020D5A8
    if (c1cs) {
        // 0x0020D594: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D5A8;
    }
    // 0x0020D594: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D598: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D59C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D5A0: j           L_0020D5C0
    // 0x0020D5A4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D5C0;
    // 0x0020D5A4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D5A8:
    // 0x0020D5A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D5AC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D5B0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D5B4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D5B8: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0020D5BC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D5C0:
    // 0x0020D5C0: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D5C4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D5C8: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D5CC: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D5D0: lwc1        $f1, 0x30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0020D5D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D5D8: lwc1        $f0, 0x54DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54DC);
    // 0x0020D5DC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D5E0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D5E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D5E8: lwc1        $f1, 0x54E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54E0);
    // 0x0020D5EC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D5F0: nop

    // 0x0020D5F4: bc1t        L_0020D60C
    if (c1cs) {
        // 0x0020D5F8: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D60C;
    }
    // 0x0020D5F8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D5FC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D600: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D604: j           L_0020D620
    // 0x0020D608: nop

        goto L_0020D620;
    // 0x0020D608: nop

L_0020D60C:
    // 0x0020D60C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D610: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D614: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D618: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D61C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D620:
    // 0x0020D620: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x0020D624: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D628: lwc1        $f0, 0x54E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54E4);
    // 0x0020D62C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D630: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D634: lwc1        $f1, 0x54E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54E8);
    // 0x0020D638: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D63C: nop

    // 0x0020D640: bc1tl       L_0020D658
    if (c1cs) {
        // 0x0020D644: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D658;
    }
    goto skip_3;
    // 0x0020D644: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x0020D648: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D64C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D650: j           L_0020D66C
    // 0x0020D654: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D66C;
    // 0x0020D654: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D658:
    // 0x0020D658: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D65C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D660: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D664: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D668: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D66C:
    // 0x0020D66C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D670: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D674: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D678: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D67C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D680: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D684: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D688: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D68C: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x0020D690: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D694: lwc1        $f0, 0x54EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54EC);
    // 0x0020D698: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D69C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D6A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D6A4: lwc1        $f1, 0x54F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X54F0);
    // 0x0020D6A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D6AC: nop

    // 0x0020D6B0: bc1t        L_0020D6C8
    if (c1cs) {
        // 0x0020D6B4: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D6C8;
    }
    // 0x0020D6B4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D6B8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D6BC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D6C0: j           L_0020D6E0
    // 0x0020D6C4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D6E0;
    // 0x0020D6C4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D6C8:
    // 0x0020D6C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D6CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D6D0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D6D4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D6D8: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0020D6DC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D6E0:
    // 0x0020D6E0: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D6E4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0020D6E8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D6EC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D6F0: jr          $ra
    // 0x0020D6F4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    return;
    // 0x0020D6F4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
;}
RECOMP_FUNC void func_0045AC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421D14:
    // 0x0045AC40: lh          $a1, 0x0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X0);
    // 0x0045AC44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AC48: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0045AC4C: beq         $v0, $zero, L_0045AC84
    if (ctx->r2 == 0) {
        // 0x0045AC50: addiu       $v1, $a1, -0x3
        ctx->r3 = ADD32(ctx->r5, -0X3);
            goto L_0045AC84;
    }
    // 0x0045AC50: addiu       $v1, $a1, -0x3
    ctx->r3 = ADD32(ctx->r5, -0X3);
    // 0x0045AC54: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AC58: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0045AC5C: beq         $v0, $zero, L_0045AC74
    if (ctx->r2 == 0) {
        // 0x0045AC60: nop
    
            goto L_0045AC74;
    }
    // 0x0045AC60: nop

    // 0x0045AC64: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AC68: addiu       $v0, $v0, 0x4870
    ctx->r2 = ADD32(ctx->r2, 0X4870);
    // 0x0045AC6C: j           L_00421D14
    // 0x0045AC70: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045AC70: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045AC74:
    // 0x0045AC74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AC78: addiu       $v0, $v0, 0x4888
    ctx->r2 = ADD32(ctx->r2, 0X4888);
    // 0x0045AC7C: j           L_00421D14
    // 0x0045AC80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045AC80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045AC84:
    // 0x0045AC84: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AC88: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0045AC8C: beq         $v0, $zero, L_0045ACF8
    if (ctx->r2 == 0) {
        // 0x0045AC90: sltiu       $v0, $v1, 0x10
        ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
            goto L_0045ACF8;
    }
    // 0x0045AC90: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x0045AC94: beql        $v0, $zero, L_0045ACB0
    if (ctx->r2 == 0) {
        // 0x0045AC98: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_0045ACB0;
    }
    goto skip_0;
    // 0x0045AC98: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    skip_0:
    // 0x0045AC9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ACA0: addiu       $v0, $v0, 0x48A8
    ctx->r2 = ADD32(ctx->r2, 0X48A8);
    // 0x0045ACA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045ACA8: jr          $ra
    // 0x0045ACAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045ACAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045ACB0:
    // 0x0045ACB0: bne         $a1, $v0, L_0045ACC8
    if (ctx->r5 != ctx->r2) {
        // 0x0045ACB4: nop
    
            goto L_0045ACC8;
    }
    // 0x0045ACB4: nop

    // 0x0045ACB8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045ACBC: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0045ACC0: j           L_00421D14
    // 0x0045ACC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045ACC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ACC8:
    // 0x0045ACC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045ACCC: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0045ACD0: beq         $v0, $zero, L_0045ACE8
    if (ctx->r2 == 0) {
        // 0x0045ACD4: nop
    
            goto L_0045ACE8;
    }
    // 0x0045ACD4: nop

    // 0x0045ACD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ACDC: addiu       $v0, $v0, 0x487C
    ctx->r2 = ADD32(ctx->r2, 0X487C);
    // 0x0045ACE0: j           L_00421D14
    // 0x0045ACE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045ACE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ACE8:
    // 0x0045ACE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045ACEC: addiu       $v0, $v0, 0x4894
    ctx->r2 = ADD32(ctx->r2, 0X4894);
    // 0x0045ACF0: j           L_00421D14
    // 0x0045ACF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00421D14(rdram, ctx);
    return;
    // 0x0045ACF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045ACF8:
    // 0x0045ACF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045ACFC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045AD00: beq         $v0, $zero, L_0045AD14
    if (ctx->r2 == 0) {
        // 0x0045AD04: nop
    
            goto L_0045AD14;
    }
    // 0x0045AD04: nop

    // 0x0045AD08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AD0C: addiu       $v0, $v0, 0x48E4
    ctx->r2 = ADD32(ctx->r2, 0X48E4);
    // 0x0045AD10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045AD14:
    // 0x0045AD14: jr          $ra
    // 0x0045AD18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045AD18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026C724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C728: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C72C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026C730: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C734: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C738: jal         0x0022425C
    // 0x0026C73C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C73C: nop

    after_0:
    // 0x0026C740: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0026C744: beq         $a0, $zero, L_0026C758
    if (ctx->r4 == 0) {
        // 0x0026C748: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_0026C758;
    }
    // 0x0026C748: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0026C74C: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0026C750: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0026C754: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
L_0026C758:
    // 0x0026C758: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C75C: jr          $ra
    // 0x0026C760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0022C228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022C228: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0022C22C: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0022C230: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022C234: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0022C238: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0022C23C: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0022C240: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0022C244: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0022C248: jal         0x0026C114
    // 0x0022C24C: nop

    func_0026C114(rdram, ctx);
        goto after_0;
    // 0x0022C24C: nop

    after_0:
    // 0x0022C250: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022C254: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0022C258: beql        $a0, $v0, L_0022C260
    if (ctx->r4 == ctx->r2) {
        // 0x0022C25C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0022C260;
    }
    goto skip_0;
    // 0x0022C25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
L_0022C260:
    // 0x0022C260: lw          $a2, 0xF8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF8);
    // 0x0022C264: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x0022C268: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022C26C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0022C270: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022C274: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x0022C278: lhu         $v1, 0x8C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022C27C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022C280: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022C284: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022C288: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x0022C28C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x0022C290: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022C294: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x0022C298: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022C29C: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022C2A0: beq         $v1, $s1, L_0022C2E8
    if (ctx->r3 == ctx->r17) {
        // 0x0022C2A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022C2E8;
    }
    // 0x0022C2A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022C2A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022C2AC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0022C2B0: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C2B4: addiu       $t3, $t3, 0x1D98
    ctx->r11 = ADD32(ctx->r11, 0X1D98);
    // 0x0022C2B8: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C2BC: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C2C0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C2C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022C2C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022C2CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022C2D0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0022C2D4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0022C2D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022C2DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022C2E0: jal         0x00236EA0
    // 0x0022C2E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_1;
    // 0x0022C2E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
L_0022C2E8:
    // 0x0022C2E8: beq         $s2, $s1, L_0022C3F8
    if (ctx->r18 == ctx->r17) {
        // 0x0022C2EC: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_0022C3F8;
    }
    // 0x0022C2EC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0022C2F0: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x0022C2F4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022C2F8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0022C2FC: beq         $v0, $zero, L_0022C32C
    if (ctx->r2 == 0) {
        // 0x0022C300: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_0022C32C;
    }
    // 0x0022C300: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x0022C304: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C308: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x0022C30C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C310: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C314: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C318: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022C31C: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022C320: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x0022C324: j           L_0022C344
    // 0x0022C328: nop

        goto L_0022C344;
    // 0x0022C328: nop

L_0022C32C:
    // 0x0022C32C: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x0022C330: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0022C334: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x0022C338: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022C33C: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022C340: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_0022C344:
    // 0x0022C344: jal         0x0020E810
    // 0x0022C348: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_0020E810(rdram, ctx);
        goto after_2;
    // 0x0022C348: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_2:
    // 0x0022C34C: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x0022C350: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0022C354: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0022C358: lw          $v1, 0x1D94($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D94);
    // 0x0022C35C: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x0022C360: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0022C364: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022C368: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0022C36C: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x0022C370: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x0022C374: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x0022C378: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0022C37C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0022C380: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0022C384: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x0022C388: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0022C38C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x0022C390: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x0022C394: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022C398: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0022C39C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0022C3A0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0022C3A4: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C3A8: addiu       $t3, $t3, 0x1D98
    ctx->r11 = ADD32(ctx->r11, 0X1D98);
    // 0x0022C3AC: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C3B0: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C3B4: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C3B8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0022C3BC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0022C3C0: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0022C3C4: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x0022C3C8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x0022C3CC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022C3D0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022C3D4: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022C3D8: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0022C3DC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0022C3E0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0022C3E4: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x0022C3E8: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x0022C3EC: jal         0x0022F350
    // 0x0022C3F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_3;
    // 0x0022C3F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0022C3F4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_0022C3F8:
    // 0x0022C3F8: beq         $s3, $v0, L_0022C428
    if (ctx->r19 == ctx->r2) {
        // 0x0022C3FC: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_0022C428;
    }
    // 0x0022C3FC: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x0022C400: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022C404: addiu       $v0, $v0, 0x1D98
    ctx->r2 = ADD32(ctx->r2, 0X1D98);
    // 0x0022C408: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0022C40C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022C410: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022C414: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022C418: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022C41C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022C420: jal         0x00275544
    // 0x0022C424: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00275544(rdram, ctx);
        goto after_4;
    // 0x0022C424: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
L_0022C428:
    // 0x0022C428: addiu       $a0, $s0, 0x168
    ctx->r4 = ADD32(ctx->r16, 0X168);
    // 0x0022C42C: lw          $a2, 0x1A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A0);
    // 0x0022C430: jal         0x0020EF60
    // 0x0022C434: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0022C434: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0022C438: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022C43C: lb          $v1, 0x196($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X196);
    // 0x0022C440: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x0022C444: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0022C448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022C44C: bne         $v1, $v0, L_0022C46C
    if (ctx->r3 != ctx->r2) {
        // 0x0022C450: nop
    
            goto L_0022C46C;
    }
    // 0x0022C450: nop

    // 0x0022C454: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022C458: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022C45C: jal         0x0022F1C8
    // 0x0022C460: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_6;
    // 0x0022C460: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0022C464: jal         0x00232B40
    // 0x0022C468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_7;
    // 0x0022C468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_0022C46C:
    // 0x0022C46C: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0022C470: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0022C474: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0022C478: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0022C47C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0022C480: jr          $ra
    // 0x0022C484: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0022C484: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00247C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00247C10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00247C14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00247C18: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00247C1C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00247C20: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00247C24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00247C28: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00247C2C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00247C30: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00247C34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00247C38: jal         0x00284188
    // 0x00247C3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00247C3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x00247C40: bne         $v0, $zero, L_00247F90
    if (ctx->r2 != 0) {
        // 0x00247C44: nop
    
            goto L_00247F90;
    }
    // 0x00247C44: nop

    // 0x00247C48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00247C4C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00247C50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00247C54: bne         $v0, $zero, L_00247F90
    if (ctx->r2 != 0) {
        // 0x00247C58: nop
    
            goto L_00247F90;
    }
    // 0x00247C58: nop

    // 0x00247C5C: jal         0x00284174
    // 0x00247C60: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x00247C60: nop

    after_1:
    // 0x00247C64: bne         $v0, $zero, L_00247F90
    if (ctx->r2 != 0) {
        // 0x00247C68: nop
    
            goto L_00247F90;
    }
    // 0x00247C68: nop

    // 0x00247C6C: lw          $s0, 0x1A8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A8);
    // 0x00247C70: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00247C74: beq         $a1, $zero, L_00247CA8
    if (ctx->r5 == 0) {
        // 0x00247C78: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00247CA8;
    }
    // 0x00247C78: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00247C7C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00247C80: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00247C84: jal         0x0022425C
    // 0x00247C88: nop

    func_0022425C(rdram, ctx);
        goto after_2;
    // 0x00247C88: nop

    after_2:
    // 0x00247C8C: beq         $v0, $zero, L_00247CA8
    if (ctx->r2 == 0) {
        // 0x00247C90: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00247CA8;
    }
    // 0x00247C90: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00247C94: lhu         $v0, 0x52($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X52);
    // 0x00247C98: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00247C9C: bne         $v0, $zero, L_00247CA8
    if (ctx->r2 != 0) {
        // 0x00247CA0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00247CA8;
    }
    // 0x00247CA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00247CA4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00247CA8:
    // 0x00247CA8: bnel        $v1, $zero, L_00247CB0
    if (ctx->r3 != 0) {
        // 0x00247CAC: addiu       $s1, $zero, 0x14
        ctx->r17 = ADD32(0, 0X14);
            goto L_00247CB0;
    }
    goto skip_0;
    // 0x00247CAC: addiu       $s1, $zero, 0x14
    ctx->r17 = ADD32(0, 0X14);
    skip_0:
L_00247CB0:
    // 0x00247CB0: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x00247CB4: beq         $a0, $zero, L_00247CF0
    if (ctx->r4 == 0) {
        // 0x00247CB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00247CF0;
    }
    // 0x00247CB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00247CBC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00247CC0: bnel        $v1, $v0, L_00247CF4
    if (ctx->r3 != ctx->r2) {
        // 0x00247CC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00247CF4;
    }
    goto skip_1;
    // 0x00247CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x00247CC8: lw          $v0, 0x10C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10C);
    // 0x00247CCC: bne         $v0, $s0, L_00247CF4
    if (ctx->r2 != ctx->r16) {
        // 0x00247CD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00247CF4;
    }
    // 0x00247CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00247CD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247CD8: lwc1        $f1, 0x6A84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A84);
    // 0x00247CDC: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x00247CE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00247CE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00247CE8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00247CEC: swc1        $f2, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f2.u32l;
L_00247CF0:
    // 0x00247CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00247CF4:
    // 0x00247CF4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00247CF8: lw          $a2, 0x4($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X4);
    // 0x00247CFC: lw          $a3, 0xC($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XC);
    // 0x00247D00: jal         0x00249358
    // 0x00247D04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00249358(rdram, ctx);
        goto after_3;
    // 0x00247D04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00247D08: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x00247D0C: beq         $a0, $zero, L_00247D78
    if (ctx->r4 == 0) {
        // 0x00247D10: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00247D78;
    }
    // 0x00247D10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00247D14: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00247D18: beq         $v1, $a1, L_00247D58
    if (ctx->r3 == ctx->r5) {
        // 0x00247D1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00247D58;
    }
    // 0x00247D1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00247D20: bne         $v1, $v0, L_00247D7C
    if (ctx->r3 != ctx->r2) {
        // 0x00247D24: nop
    
            goto L_00247D7C;
    }
    // 0x00247D24: nop

    // 0x00247D28: lw          $a0, 0x10C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10C);
    // 0x00247D2C: beq         $a0, $zero, L_00247D7C
    if (ctx->r4 == 0) {
        // 0x00247D30: nop
    
            goto L_00247D7C;
    }
    // 0x00247D30: nop

    // 0x00247D34: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00247D38: bne         $v0, $a1, L_00247D7C
    if (ctx->r2 != ctx->r5) {
        // 0x00247D3C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00247D7C;
    }
    // 0x00247D3C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00247D40: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00247D44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00247D48: bnel        $v0, $zero, L_00247D7C
    if (ctx->r2 != 0) {
        // 0x00247D4C: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00247D7C;
    }
    goto skip_2;
    // 0x00247D4C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    skip_2:
    // 0x00247D50: j           L_00247D7C
    // 0x00247D54: nop

        goto L_00247D7C;
    // 0x00247D54: nop

L_00247D58:
    // 0x00247D58: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00247D5C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00247D60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00247D64: beq         $v0, $zero, L_00247D7C
    if (ctx->r2 == 0) {
        // 0x00247D68: nop
    
            goto L_00247D7C;
    }
    // 0x00247D68: nop

    // 0x00247D6C: lw          $s2, 0x1A8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X1A8);
    // 0x00247D70: j           L_00247D7C
    // 0x00247D74: nop

        goto L_00247D7C;
    // 0x00247D74: nop

L_00247D78:
    // 0x00247D78: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
L_00247D7C:
    // 0x00247D7C: beq         $s2, $zero, L_00247F90
    if (ctx->r18 == 0) {
        // 0x00247D80: nop
    
            goto L_00247F90;
    }
    // 0x00247D80: nop

    // 0x00247D84: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x00247D88: bne         $v0, $zero, L_00247F90
    if (ctx->r2 != 0) {
        // 0x00247D8C: nop
    
            goto L_00247F90;
    }
    // 0x00247D8C: nop

    // 0x00247D90: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x00247D94: lbu         $v0, 0x3C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3C);
    // 0x00247D98: bne         $v0, $zero, L_00247F90
    if (ctx->r2 != 0) {
        // 0x00247D9C: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_00247F90;
    }
    // 0x00247D9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00247DA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00247DA4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00247DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247DAC: jal         0x0025340C
    // 0x00247DB0: sb          $v0, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = ctx->r2;
    func_0025340C(rdram, ctx);
        goto after_4;
    // 0x00247DB0: sb          $v0, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = ctx->r2;
    after_4:
    // 0x00247DB4: lw          $a0, 0x518($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X518);
    // 0x00247DB8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00247DBC: lbu         $v1, 0x3E($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3E);
    // 0x00247DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247DC4: bne         $v1, $v0, L_00247DE4
    if (ctx->r3 != ctx->r2) {
        // 0x00247DC8: sll         $v1, $s3, 1
        ctx->r3 = S32(ctx->r19 << 1);
            goto L_00247DE4;
    }
    // 0x00247DC8: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x00247DCC: sllv        $v1, $s3, $v0
    ctx->r3 = S32(ctx->r19 << (ctx->r2 & 31));
    // 0x00247DD0: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x00247DD4: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x00247DD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00247DDC: j           L_00247DF4
    // 0x00247DE0: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
        goto L_00247DF4;
    // 0x00247DE0: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
L_00247DE4:
    // 0x00247DE4: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x00247DE8: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x00247DEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00247DF0: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
L_00247DF4:
    // 0x00247DF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00247DF8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00247DFC: jal         0x0025340C
    // 0x00247E00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_5;
    // 0x00247E00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00247E04: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x00247E08: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00247E0C: lbu         $v1, 0x3E($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3E);
    // 0x00247E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247E14: bne         $v1, $v0, L_00247E34
    if (ctx->r3 != ctx->r2) {
        // 0x00247E18: sll         $v1, $s1, 1
        ctx->r3 = S32(ctx->r17 << 1);
            goto L_00247E34;
    }
    // 0x00247E18: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x00247E1C: lw          $v0, 0x518($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X518);
    // 0x00247E20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00247E24: lhu         $v1, 0x10($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X10);
    // 0x00247E28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00247E2C: j           L_00247E48
    // 0x00247E30: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
        goto L_00247E48;
    // 0x00247E30: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
L_00247E34:
    // 0x00247E34: lw          $v0, 0x518($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X518);
    // 0x00247E38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00247E3C: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
    // 0x00247E40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00247E44: sh          $v1, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r3;
L_00247E48:
    // 0x00247E48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00247E4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00247E50: jal         0x002478C8
    // 0x00247E54: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_002478C8(rdram, ctx);
        goto after_6;
    // 0x00247E54: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_6:
    // 0x00247E58: bne         $s3, $s1, L_00247EC4
    if (ctx->r19 != ctx->r17) {
        // 0x00247E5C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00247EC4;
    }
    // 0x00247E5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00247E60: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00247E64: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00247E68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00247E6C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x00247E70: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00247E74: lw          $v0, -0x532C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X532C);
    // 0x00247E78: beq         $v0, $zero, L_00247F90
    if (ctx->r2 == 0) {
        // 0x00247E7C: nop
    
            goto L_00247F90;
    }
    // 0x00247E7C: nop

    // 0x00247E80: lw          $a0, 0xBF4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBF4);
    // 0x00247E84: beq         $a0, $zero, L_00247E9C
    if (ctx->r4 == 0) {
        // 0x00247E88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00247E9C;
    }
    // 0x00247E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247E8C: beq         $a0, $v0, L_00247EAC
    if (ctx->r4 == ctx->r2) {
        // 0x00247E90: nop
    
            goto L_00247EAC;
    }
    // 0x00247E90: nop

    // 0x00247E94: j           L_00247F90
    // 0x00247E98: nop

        goto L_00247F90;
    // 0x00247E98: nop

L_00247E9C:
    // 0x00247E9C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00247EA0: addiu       $v1, $v1, -0x5324
    ctx->r3 = ADD32(ctx->r3, -0X5324);
    // 0x00247EA4: j           L_00247EB4
    // 0x00247EA8: nop

        goto L_00247EB4;
    // 0x00247EA8: nop

L_00247EAC:
    // 0x00247EAC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00247EB0: addiu       $v1, $v1, -0x5320
    ctx->r3 = ADD32(ctx->r3, -0X5320);
L_00247EB4:
    // 0x00247EB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00247EB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00247EBC: j           L_00247F90
    // 0x00247EC0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_00247F90;
    // 0x00247EC0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_00247EC4:
    // 0x00247EC4: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x00247EC8: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x00247ECC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00247ED0: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x00247ED4: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00247ED8: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00247EDC: bne         $v0, $a0, L_00247F20
    if (ctx->r2 != ctx->r4) {
        // 0x00247EE0: nop
    
            goto L_00247F20;
    }
    // 0x00247EE0: nop

    // 0x00247EE4: lw          $v0, 0x518($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X518);
    // 0x00247EE8: lhu         $v1, 0x6($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6);
    // 0x00247EEC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00247EF0: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x00247EF4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00247EF8: lw          $v0, -0x532C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X532C);
    // 0x00247EFC: beq         $v0, $zero, L_00247F90
    if (ctx->r2 == 0) {
        // 0x00247F00: nop
    
            goto L_00247F90;
    }
    // 0x00247F00: nop

    // 0x00247F04: lw          $v0, 0xBF4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XBF4);
    // 0x00247F08: beq         $v0, $zero, L_00247F5C
    if (ctx->r2 == 0) {
        // 0x00247F0C: nop
    
            goto L_00247F5C;
    }
    // 0x00247F0C: nop

    // 0x00247F10: beq         $v0, $a0, L_00247F6C
    if (ctx->r2 == ctx->r4) {
        // 0x00247F14: nop
    
            goto L_00247F6C;
    }
    // 0x00247F14: nop

    // 0x00247F18: j           L_00247F90
    // 0x00247F1C: nop

        goto L_00247F90;
    // 0x00247F1C: nop

L_00247F20:
    // 0x00247F20: lw          $v0, 0x518($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X518);
    // 0x00247F24: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    // 0x00247F28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00247F2C: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x00247F30: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00247F34: lw          $v0, -0x532C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X532C);
    // 0x00247F38: beq         $v0, $zero, L_00247F90
    if (ctx->r2 == 0) {
        // 0x00247F3C: nop
    
            goto L_00247F90;
    }
    // 0x00247F3C: nop

    // 0x00247F40: lw          $v0, 0xBF4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XBF4);
    // 0x00247F44: beq         $v0, $zero, L_00247F5C
    if (ctx->r2 == 0) {
        // 0x00247F48: nop
    
            goto L_00247F5C;
    }
    // 0x00247F48: nop

    // 0x00247F4C: beq         $v0, $a0, L_00247F6C
    if (ctx->r2 == ctx->r4) {
        // 0x00247F50: nop
    
            goto L_00247F6C;
    }
    // 0x00247F50: nop

    // 0x00247F54: j           L_00247F90
    // 0x00247F58: nop

        goto L_00247F90;
    // 0x00247F58: nop

L_00247F5C:
    // 0x00247F5C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00247F60: addiu       $a0, $a0, -0x5324
    ctx->r4 = ADD32(ctx->r4, -0X5324);
    // 0x00247F64: j           L_00247F74
    // 0x00247F68: nop

        goto L_00247F74;
    // 0x00247F68: nop

L_00247F6C:
    // 0x00247F6C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00247F70: addiu       $a0, $a0, -0x5320
    ctx->r4 = ADD32(ctx->r4, -0X5320);
L_00247F74:
    // 0x00247F74: lw          $v1, 0xBF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBF4);
    // 0x00247F78: lw          $v0, 0xBF4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XBF4);
    // 0x00247F7C: beq         $v1, $v0, L_00247F90
    if (ctx->r3 == ctx->r2) {
        // 0x00247F80: nop
    
            goto L_00247F90;
    }
    // 0x00247F80: nop

    // 0x00247F84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00247F88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00247F8C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00247F90:
    // 0x00247F90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00247F94: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00247F98: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00247F9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00247FA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00247FA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00247FA8: jr          $ra
    // 0x00247FAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00247FAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029E2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E2D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0029E2DC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
;}
RECOMP_FUNC void func_00417910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417910: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00417914: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x00417918: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x0041791C: beq         $v0, $zero, L_00417938
    if (ctx->r2 == 0) {
        // 0x00417920: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00417938;
    }
    // 0x00417920: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00417924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417928: addu        $at, $at, $v0
    gpr jr_addend_00417930 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041792C: lw          $v0, 0xEC0($at)
    ctx->r2 = ADD32(ctx->r1, 0XEC0);
    // 0x00417930: jr          $v0
    // 0x00417934: nop

    switch (jr_addend_00417930 >> 2) {
        case 0: goto L_00417948; break;
        case 1: goto L_00417978; break;
        case 2: goto L_004179A8; break;
        case 3: goto L_004179D8; break;
        case 4: goto L_00417A08; break;
        case 5: goto L_00417A38; break;
        case 6: goto L_00417A68; break;
        case 7: goto L_00417A98; break;
        default: switch_error(__func__, 0x00417930, 0x800C0EC0);
    }
    // 0x00417934: nop

L_00417938:
    // 0x00417938: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041793C: addiu       $v0, $v0, 0xEB0
    ctx->r2 = ADD32(ctx->r2, 0XEB0);
    // 0x00417940: j           L_00417AC4
    // 0x00417944: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417944: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417948:
    // 0x00417948: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041794C: lbu         $v0, -0x54F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F7);
    // 0x00417950: beq         $v0, $zero, L_00417968
    if (ctx->r2 == 0) {
        // 0x00417954: nop
    
            goto L_00417968;
    }
    // 0x00417954: nop

    // 0x00417958: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041795C: addiu       $v0, $v0, 0x6288
    ctx->r2 = ADD32(ctx->r2, 0X6288);
    // 0x00417960: j           L_00417AC4
    // 0x00417964: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417964: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417968:
    // 0x00417968: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041796C: addiu       $v0, $v0, 0x62A0
    ctx->r2 = ADD32(ctx->r2, 0X62A0);
    // 0x00417970: j           L_00417AC4
    // 0x00417974: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417974: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417978:
    // 0x00417978: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041797C: lbu         $v0, -0x54F6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F6);
    // 0x00417980: beq         $v0, $zero, L_00417998
    if (ctx->r2 == 0) {
        // 0x00417984: nop
    
            goto L_00417998;
    }
    // 0x00417984: nop

    // 0x00417988: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041798C: addiu       $v0, $v0, 0x62B8
    ctx->r2 = ADD32(ctx->r2, 0X62B8);
    // 0x00417990: j           L_00417AC4
    // 0x00417994: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417994: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417998:
    // 0x00417998: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041799C: addiu       $v0, $v0, 0x62D0
    ctx->r2 = ADD32(ctx->r2, 0X62D0);
    // 0x004179A0: j           L_00417AC4
    // 0x004179A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x004179A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004179A8:
    // 0x004179A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004179AC: lbu         $v0, -0x54F5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F5);
    // 0x004179B0: beq         $v0, $zero, L_004179C8
    if (ctx->r2 == 0) {
        // 0x004179B4: nop
    
            goto L_004179C8;
    }
    // 0x004179B4: nop

    // 0x004179B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004179BC: addiu       $v0, $v0, 0x62E8
    ctx->r2 = ADD32(ctx->r2, 0X62E8);
    // 0x004179C0: j           L_00417AC4
    // 0x004179C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x004179C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004179C8:
    // 0x004179C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004179CC: addiu       $v0, $v0, 0x6300
    ctx->r2 = ADD32(ctx->r2, 0X6300);
    // 0x004179D0: j           L_00417AC4
    // 0x004179D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x004179D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004179D8:
    // 0x004179D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004179DC: lbu         $v0, -0x54F4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F4);
    // 0x004179E0: beq         $v0, $zero, L_004179F8
    if (ctx->r2 == 0) {
        // 0x004179E4: nop
    
            goto L_004179F8;
    }
    // 0x004179E4: nop

    // 0x004179E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004179EC: addiu       $v0, $v0, 0x6318
    ctx->r2 = ADD32(ctx->r2, 0X6318);
    // 0x004179F0: j           L_00417AC4
    // 0x004179F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x004179F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004179F8:
    // 0x004179F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004179FC: addiu       $v0, $v0, 0x6330
    ctx->r2 = ADD32(ctx->r2, 0X6330);
    // 0x00417A00: j           L_00417AC4
    // 0x00417A04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A08:
    // 0x00417A08: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00417A0C: lbu         $v0, -0x54F3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F3);
    // 0x00417A10: beq         $v0, $zero, L_00417A28
    if (ctx->r2 == 0) {
        // 0x00417A14: nop
    
            goto L_00417A28;
    }
    // 0x00417A14: nop

    // 0x00417A18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417A1C: addiu       $v0, $v0, 0x6348
    ctx->r2 = ADD32(ctx->r2, 0X6348);
    // 0x00417A20: j           L_00417AC4
    // 0x00417A24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A28:
    // 0x00417A28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417A2C: addiu       $v0, $v0, 0x6360
    ctx->r2 = ADD32(ctx->r2, 0X6360);
    // 0x00417A30: j           L_00417AC4
    // 0x00417A34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A38:
    // 0x00417A38: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00417A3C: lbu         $v0, -0x54F2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F2);
    // 0x00417A40: beq         $v0, $zero, L_00417A58
    if (ctx->r2 == 0) {
        // 0x00417A44: nop
    
            goto L_00417A58;
    }
    // 0x00417A44: nop

    // 0x00417A48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417A4C: addiu       $v0, $v0, 0x6378
    ctx->r2 = ADD32(ctx->r2, 0X6378);
    // 0x00417A50: j           L_00417AC4
    // 0x00417A54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A58:
    // 0x00417A58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417A5C: addiu       $v0, $v0, 0x6390
    ctx->r2 = ADD32(ctx->r2, 0X6390);
    // 0x00417A60: j           L_00417AC4
    // 0x00417A64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A68:
    // 0x00417A68: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00417A6C: lbu         $v0, -0x54F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F1);
    // 0x00417A70: beq         $v0, $zero, L_00417A88
    if (ctx->r2 == 0) {
        // 0x00417A74: nop
    
            goto L_00417A88;
    }
    // 0x00417A74: nop

    // 0x00417A78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417A7C: addiu       $v0, $v0, 0x63A8
    ctx->r2 = ADD32(ctx->r2, 0X63A8);
    // 0x00417A80: j           L_00417AC4
    // 0x00417A84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A84: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A88:
    // 0x00417A88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417A8C: addiu       $v0, $v0, 0x63C0
    ctx->r2 = ADD32(ctx->r2, 0X63C0);
    // 0x00417A90: j           L_00417AC4
    // 0x00417A94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417A94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417A98:
    // 0x00417A98: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00417A9C: lbu         $v0, -0x54EF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54EF);
    // 0x00417AA0: beq         $v0, $zero, L_00417AB8
    if (ctx->r2 == 0) {
        // 0x00417AA4: nop
    
            goto L_00417AB8;
    }
    // 0x00417AA4: nop

    // 0x00417AA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417AAC: addiu       $v0, $v0, 0x63D8
    ctx->r2 = ADD32(ctx->r2, 0X63D8);
    // 0x00417AB0: j           L_00417AC4
    // 0x00417AB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00417AC4;
    // 0x00417AB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417AB8:
    // 0x00417AB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00417ABC: addiu       $v0, $v0, 0x63F0
    ctx->r2 = ADD32(ctx->r2, 0X63F0);
    // 0x00417AC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00417AC4:
    // 0x00417AC4: jr          $ra
    // 0x00417AC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00417AC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00274B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274B40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00274B44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00274B48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    turok2_patch_music_tick(rdram, ctx);
    // 0x00274B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00274B50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00274B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274B58: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00274B5C: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x00274B60: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x00274B64: beq         $v1, $a1, L_00274C24
    if (ctx->r3 == ctx->r5) {
        // 0x00274B68: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_00274C24;
    }
    // 0x00274B68: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x00274B6C: beq         $v0, $zero, L_00274B8C
    if (ctx->r2 == 0) {
        // 0x00274B70: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_00274B8C;
    }
    // 0x00274B70: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x00274B74: beq         $v1, $a0, L_00274DAC
    if (ctx->r3 == ctx->r4) {
        // 0x00274B78: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00274DAC;
    }
    // 0x00274B78: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00274B7C: beq         $v1, $v0, L_00274BA8
    if (ctx->r3 == ctx->r2) {
        // 0x00274B80: nop
    
            goto L_00274BA8;
    }
    // 0x00274B80: nop

    // 0x00274B84: j           L_00274DAC
    // 0x00274B88: nop

        goto L_00274DAC;
    // 0x00274B88: nop

L_00274B8C:
    // 0x00274B8C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x00274B90: beq         $v1, $a0, L_00274CE8
    if (ctx->r3 == ctx->r4) {
        // 0x00274B94: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_00274CE8;
    }
    // 0x00274B94: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x00274B98: beq         $v1, $v0, L_00274BD8
    if (ctx->r3 == ctx->r2) {
        // 0x00274B9C: nop
    
            goto L_00274BD8;
    }
    // 0x00274B9C: nop

    // 0x00274BA0: j           L_00274DAC
    // 0x00274BA4: nop

        goto L_00274DAC;
    // 0x00274BA4: nop

L_00274BA8:
    // 0x00274BA8: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00274BAC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00274BB0: beq         $v0, $zero, L_00274F18
    if (ctx->r2 == 0) {
        // 0x00274BB4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00274F18;
    }
    // 0x00274BB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274BB8: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x00274BBC: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x00274BC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274BC4: sw          $v0, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = ctx->r2;
    // 0x00274BC8: bltzl       $v1, L_00274F18
    if (SIGNED(ctx->r3) < 0) {
        // 0x00274BCC: sw          $a0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r4;
            goto L_00274F18;
    }
    goto skip_0;
    // 0x00274BCC: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    skip_0:
    // 0x00274BD0: j           L_00274F18
    // 0x00274BD4: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
        goto L_00274F18;
    // 0x00274BD4: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
L_00274BD8:
    // 0x00274BD8: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00274BDC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00274BE0: beq         $v0, $zero, L_00274BF4
    if (ctx->r2 == 0) {
        // 0x00274BE4: nop
    
            goto L_00274BF4;
    }
    // 0x00274BE4: nop

    // 0x00274BE8: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    // 0x00274BEC: j           L_00274F18
    // 0x00274BF0: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_00274F18;
    // 0x00274BF0: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_00274BF4:
    // 0x00274BF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00274BF8: lw          $v0, 0x2A74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2A74);
    // 0x00274BFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00274C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274C04: sw          $v0, 0x2A74($at)
    MEM_W(0X2A74, ctx->r1) = ctx->r2;
    // 0x00274C08: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x00274C0C: bne         $v0, $zero, L_00274F18
    if (ctx->r2 != 0) {
        // 0x00274C10: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00274F18;
    }
    // 0x00274C10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00274C14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274C18: sw          $v0, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = ctx->r2;
    // 0x00274C1C: j           L_00274F18
    // 0x00274C20: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
        goto L_00274F18;
    // 0x00274C20: sw          $a1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r5;
L_00274C24:
    // 0x00274C24: lw          $a2, 0x28($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X28);
    // 0x00274C28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00274C2C: beq         $a2, $s2, L_00274F14
    if (ctx->r6 == ctx->r18) {
        // 0x00274C30: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00274F14;
    }
    // 0x00274C30: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00274C34: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274C38: lw          $a0, 0x2B60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B60);
    // 0x00274C3C: lw          $a1, 0x2B64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B64);
    // 0x00274C40: jal         0x00266D24
    // 0x00274C44: nop

    func_00266D24(rdram, ctx);
        goto after_0;
    // 0x00274C44: nop

    after_0:
    // 0x00274C48: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00274C4C: beq         $s0, $s2, L_00274CB4
    if (ctx->r16 == ctx->r18) {
        // 0x00274C50: sll         $s0, $s0, 1
        ctx->r16 = S32(ctx->r16 << 1);
            goto L_00274CB4;
    }
    // 0x00274C50: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x00274C54: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274C58: lw          $a0, 0x2B50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B50);
    // 0x00274C5C: jal         0x002017D4
    // 0x00274C60: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00274C60: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    after_1:
    // 0x00274C64: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00274C68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00274C6C: lw          $a0, 0x2B50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B50);
    // 0x00274C70: jal         0x002017D4
    // 0x00274C74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00274C74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00274C78: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00274C7C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x00274C80: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x00274C84: jal         0x0026D210
    // 0x00274C88: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x00274C88: nop

    after_3:
    // 0x00274C8C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00274C90: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00274C94: nop

    // 0x00274C98: bc1f        L_00274CAC
    if (!c1cs) {
        // 0x00274C9C: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_00274CAC;
    }
    // 0x00274C9C: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x00274CA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274CA4: lwc1        $f0, -0x7E60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E60);
    // 0x00274CA8: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
L_00274CAC:
    // 0x00274CAC: j           L_00274CB8
    // 0x00274CB0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00274CB8;
    // 0x00274CB0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00274CB4:
    // 0x00274CB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00274CB8:
    // 0x00274CB8: bne         $v0, $zero, L_00274CD8
    if (ctx->r2 != 0) {
        // 0x00274CBC: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_00274CD8;
    }
    // 0x00274CBC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x00274CC0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x00274CC4: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274CC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274CCC: sw          $zero, 0x2A74($at)
    MEM_W(0X2A74, ctx->r1) = 0;
    // 0x00274CD0: j           L_00274F18
    // 0x00274CD4: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_00274F18;
    // 0x00274CD4: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_00274CD8:
    // 0x00274CD8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00274CDC: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00274CE4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_00274CE8:
    // 0x00274CE8: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x00274CEC: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x00274CF0: jal         0x0028F518
    // 0x00274CF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_0028F518(rdram, ctx);
        goto after_4;
    // 0x00274CF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_4:
    // 0x00274CF8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274CFC: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x00274D00: jal         0x00290E90
    // 0x00274D04: nop

    func_00290E90(rdram, ctx);
        goto after_5;
    // 0x00274D04: nop

    after_5:
    // 0x00274D08: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00274D0C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D10: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00274D14: jal         0x00290E10
    // 0x00274D18: nop

    func_00290E10(rdram, ctx);
        goto after_6;
    // 0x00274D18: nop

    after_6:
L_00274D1C:
    // 0x00274D1C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D20: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x00274D24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00274D28: jal         0x00290E40
    // 0x00274D2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00290E40(rdram, ctx);
        goto after_7;
    // 0x00274D2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x00274D30: slti        $v0, $s0, 0x14
    ctx->r2 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x00274D34: bne         $v0, $zero, L_00274D1C
    if (ctx->r2 != 0) {
        // 0x00274D38: nop
    
            goto L_00274D1C;
    }
    // 0x00274D38: nop

    // 0x00274D3C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274D40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274D44: lwc1        $f1, -0x7E5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E5C);
    // 0x00274D48: lwc1        $f0, 0x2BA4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BA4);
    // 0x00274D4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274D50: lwc1        $f20, 0x24($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X24);
    // 0x00274D54: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00274D58: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274D5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274D60: lwc1        $f0, -0x7E58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E58);
    // 0x00274D64: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274D68: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D6C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00274D70: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00274D74: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00274D78: jal         0x00290EC0
    // 0x00274D7C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_8;
    // 0x00274D7C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_8:
    // 0x00274D80: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274D84: jal         0x00290DE0
    // 0x00274D88: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
    func_00290DE0(rdram, ctx);
        goto after_9;
    // 0x00274D88: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
    after_9:
    // 0x00274D8C: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x00274D90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00274D94: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x00274D98: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274D9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274DA0: sw          $v1, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = ctx->r3;
    // 0x00274DA4: j           L_00274F18
    // 0x00274DA8: nop

        goto L_00274F18;
    // 0x00274DA8: nop

L_00274DAC:
    // 0x00274DAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00274DB0: lw          $v0, 0x2A70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2A70);
    // 0x00274DB4: blez        $v0, L_00274DE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00274DB8: nop
    
            goto L_00274DE0;
    }
    // 0x00274DB8: nop

    // 0x00274DBC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274DC0: jal         0x0028FA00
    // 0x00274DC4: nop

    func_0028FA00(rdram, ctx);
        goto after_10;
    // 0x00274DC4: nop

    after_10:
    // 0x00274DC8: bne         $v0, $zero, L_00274DE0
    if (ctx->r2 != 0) {
        // 0x00274DCC: nop
    
            goto L_00274DE0;
    }
    // 0x00274DCC: nop

    // 0x00274DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274DD4: sw          $zero, 0x2A70($at)
    MEM_W(0X2A70, ctx->r1) = 0;
    // 0x00274DD8: j           L_00274E90
    // 0x00274DDC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
        goto L_00274E90;
    // 0x00274DDC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_00274DE0:
    // 0x00274DE0: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x00274DE4: beq         $v0, $zero, L_00274E1C
    if (ctx->r2 == 0) {
        // 0x00274DE8: nop
    
            goto L_00274E1C;
    }
    // 0x00274DE8: nop

    // 0x00274DEC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274DF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274DF4: lwc1        $f1, -0x7E54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E54);
    // 0x00274DF8: lwc1        $f0, 0x2BA4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2BA4);
    // 0x00274DFC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274E00: lwc1        $f20, 0x24($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X24);
    // 0x00274E04: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00274E08: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274E0C: lwc1        $f0, 0x3C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x00274E10: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274E14: j           L_00274E68
    // 0x00274E18: nop

        goto L_00274E68;
    // 0x00274E18: nop

L_00274E1C:
    // 0x00274E1C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274E20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274E24: lwc1        $f0, -0x7E50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E50);
    // 0x00274E28: lwc1        $f1, 0x2BA4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X2BA4);
    // 0x00274E2C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00274E30: lw          $v0, 0x2BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BB8);
    // 0x00274E34: lwc1        $f0, 0x24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X24);
    // 0x00274E38: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00274E3C: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274E40: beq         $v0, $zero, L_00274E54
    if (ctx->r2 == 0) {
        // 0x00274E44: nop
    
            goto L_00274E54;
    }
    // 0x00274E44: nop

    // 0x00274E48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274E4C: lwc1        $f0, -0x7E4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E4C);
    // 0x00274E50: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00274E54:
    // 0x00274E54: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x00274E58: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x00274E5C: nop

    // 0x00274E60: bc1t        L_00274E90
    if (c1cs) {
        // 0x00274E64: nop
    
            goto L_00274E90;
    }
    // 0x00274E64: nop

L_00274E68:
    // 0x00274E68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274E6C: lwc1        $f0, -0x7E48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E48);
    // 0x00274E70: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274E74: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00274E78: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00274E7C: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00274E80: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00274E84: jal         0x00290EC0
    // 0x00274E88: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00290EC0(rdram, ctx);
        goto after_11;
    // 0x00274E88: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_11:
    // 0x00274E8C: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
L_00274E90:
    // 0x00274E90: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x00274E94: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00274E98: lw          $v1, 0x2A70($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2A70);
    // 0x00274E9C: beq         $v0, $v1, L_00274F18
    if (ctx->r2 == ctx->r3) {
        // 0x00274EA0: nop
    
            goto L_00274F18;
    }
    // 0x00274EA0: nop

    // 0x00274EA4: blez        $v1, L_00274F0C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00274EA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00274F0C;
    }
    // 0x00274EA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00274EAC: lwc1        $f1, 0x2C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2C);
    // 0x00274EB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274EB4: lwc1        $f0, -0x7E44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E44);
    // 0x00274EB8: lwc1        $f2, 0x30($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X30);
    // 0x00274EBC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00274EC0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x00274EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274EC8: lwc1        $f0, -0x7E40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E40);
    // 0x00274ECC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00274ED0: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x00274ED4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00274ED8: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00274EDC: swc1        $f3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x00274EE0: bc1fl       L_00274EE8
    if (!c1cs) {
        // 0x00274EE4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_00274EE8;
    }
    goto skip_1;
    // 0x00274EE4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
L_00274EE8:
    // 0x00274EE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274EEC: lwc1        $f1, -0x7E3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E3C);
    // 0x00274EF0: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00274EF4: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x00274EF8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00274EFC: swc1        $f2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f2.u32l;
    // 0x00274F00: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274F04: j           L_00274F18
    // 0x00274F08: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
        goto L_00274F18;
    // 0x00274F08: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
L_00274F0C:
    // 0x00274F0C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00274F10: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_00274F14:
    // 0x00274F14: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
L_00274F18:
    // 0x00274F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00274F1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00274F20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00274F24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274F28: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00274F2C: jr          $ra
    // 0x00274F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00274F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00259BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259BC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00259BC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00259BCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00259BD0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00259BD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00259BD8: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x00259BDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00259BE0: lw          $v1, 0x51C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X51C);
    // 0x00259BE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00259BE8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00259BEC: addiu       $v0, $v1, 0x114
    ctx->r2 = ADD32(ctx->r3, 0X114);
    // 0x00259BF0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00259BF4: lw          $a1, 0x114($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X114);
    // 0x00259BF8: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00259BFC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x00259C00: jal         0x00275544
    // 0x00259C04: addiu       $a0, $zero, 0x1BB
    ctx->r4 = ADD32(0, 0X1BB);
    func_00275544(rdram, ctx);
        goto after_0;
    // 0x00259C04: addiu       $a0, $zero, 0x1BB
    ctx->r4 = ADD32(0, 0X1BB);
    after_0:
    // 0x00259C08: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x00259C0C: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x00259C10: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x00259C14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00259C18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259C1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00259C20: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00259C24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259C28: lwc1        $f1, 0x734C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X734C);
    // 0x00259C2C: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00259C30: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00259C34: swc1        $f0, 0x118($s1)
    MEM_W(0X118, ctx->r17) = ctx->f0.u32l;
    // 0x00259C38: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00259C3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00259C40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00259C44: jr          $ra
    // 0x00259C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00259C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029A720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A720: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0029A724: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0029A728: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x0029A72C: addiu       $s2, $s2, 0x7AD0
    ctx->r18 = ADD32(ctx->r18, 0X7AD0);
    // 0x0029A730: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0029A734: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0029A738: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0029A73C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029A740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029A744: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0029A748: bne         $v0, $zero, L_0029A870
    if (ctx->r2 != 0) {
        // 0x0029A74C: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_0029A870;
    }
    // 0x0029A74C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0029A750: jal         0x0029BDB8
    // 0x0029A754: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    func_0029BDB8(rdram, ctx);
        goto after_0;
    // 0x0029A754: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    after_0:
    // 0x0029A758: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0029A75C: addiu       $s1, $s1, 0x2910
    ctx->r17 = ADD32(ctx->r17, 0X2910);
    // 0x0029A760: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029A764: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0029A768: addiu       $a1, $a1, 0x2930
    ctx->r5 = ADD32(ctx->r5, 0X2930);
    // 0x0029A76C: jal         0x0029B030
    // 0x0029A770: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x0029A770: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x0029A774: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x0029A778: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029A77C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0029A780: addiu       $a2, $a2, 0x2950
    ctx->r6 = ADD32(ctx->r6, 0X2950);
    // 0x0029A784: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0029A788: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029A78C: addiu       $s0, $s0, 0x2970
    ctx->r16 = ADD32(ctx->r16, 0X2970);
    // 0x0029A790: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x0029A794: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0029A798: sb          $zero, 0x2($a2)
    MEM_B(0X2, ctx->r6) = 0;
    // 0x0029A79C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0029A7A0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x0029A7A4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x0029A7A8: jal         0x0029B950
    // 0x0029A7AC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0029A7AC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_2:
    // 0x0029A7B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x0029A7B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029A7B8: jal         0x0029B950
    // 0x0029A7BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0029A7BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0029A7C0: jal         0x0029B150
    // 0x0029A7C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029B150(rdram, ctx);
        goto after_4;
    // 0x0029A7C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0029A7C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0029A7CC: slt         $v0, $v1, $s4
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0029A7D0: beq         $v0, $zero, L_0029A7E8
    if (ctx->r2 == 0) {
        // 0x0029A7D4: nop
    
            goto L_0029A7E8;
    }
    // 0x0029A7D4: nop

    // 0x0029A7D8: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0029A7DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029A7E0: jal         0x0029B9B0
    // 0x0029A7E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0029B9B0(rdram, ctx);
        goto after_5;
    // 0x0029A7E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_5:
L_0029A7E8:
    // 0x0029A7E8: jal         0x0029DFF0
    // 0x0029A7EC: nop

    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x0029A7EC: nop

    after_6:
    // 0x0029A7F0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0029A7F4: addiu       $s0, $s0, 0x16E0
    ctx->r16 = ADD32(ctx->r16, 0X16E0);
    // 0x0029A7F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029A7FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029A800: lui         $a2, 0x2A
    ctx->r6 = S32(0X2A << 16);
    // 0x0029A804: addiu       $a2, $a2, -0x5770
    ctx->r6 = ADD32(ctx->r6, -0X5770);
    // 0x0029A808: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0029A80C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0029A810: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0029A814: addiu       $v1, $v1, 0x2910
    ctx->r3 = ADD32(ctx->r3, 0X2910);
    // 0x0029A818: sw          $s1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r17;
    // 0x0029A81C: sw          $s1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r17;
    // 0x0029A820: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029A824: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x0029A828: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x0029A82C: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x0029A830: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x0029A834: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x0029A838: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0029A83C: jal         0x0029B060
    // 0x0029A840: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    osCreateThread_recomp(rdram, ctx);
        goto after_7;
    // 0x0029A840: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_7:
    // 0x0029A844: jal         0x0029A5E0
    // 0x0029A848: nop

    func_0029A5E0(rdram, ctx);
        goto after_8;
    // 0x0029A848: nop

    after_8:
    // 0x0029A84C: jal         0x0029BB10
    // 0x0029A850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_9;
    // 0x0029A850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0029A854: jal         0x0029E010
    // 0x0029A858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_10;
    // 0x0029A858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0029A85C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029A860: beq         $s3, $v0, L_0029A870
    if (ctx->r19 == ctx->r2) {
        // 0x0029A864: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0029A870;
    }
    // 0x0029A864: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029A868: jal         0x0029B9B0
    // 0x0029A86C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029B9B0(rdram, ctx);
        goto after_11;
    // 0x0029A86C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_11:
L_0029A870:
    // 0x0029A870: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0029A874: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0029A878: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0029A87C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029A880: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029A884: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029A888: jr          $ra
    // 0x0029A88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029A88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040A418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A418: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x0040A41C: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x0040A420: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040A424: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x0040A428: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0040A42C: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x0040A430: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040A434: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    // 0x0040A438: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x0040A43C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040A440: sw          $ra, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r31;
    // 0x0040A444: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x0040A448: sdc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE0, ctx->r29);
    // 0x0040A44C: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x0040A450: jal         0x00246108
    // 0x0040A454: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040A454: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x0040A458: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0040A45C: addiu       $s1, $s1, -0x490
    ctx->r17 = ADD32(ctx->r17, -0X490);
    // 0x0040A460: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x0040A464: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A468: lwc1        $f20, 0x848($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X848);
    // 0x0040A46C: beq         $a0, $zero, L_0040A48C
    if (ctx->r4 == 0) {
        // 0x0040A470: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0040A48C;
    }
    // 0x0040A470: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0040A474: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040A478: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040A47C: beq         $v0, $zero, L_0040A48C
    if (ctx->r2 == 0) {
        // 0x0040A480: nop
    
            goto L_0040A48C;
    }
    // 0x0040A480: nop

    // 0x0040A484: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x0040A488: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
L_0040A48C:
    // 0x0040A48C: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x0040A490: beq         $v0, $zero, L_0040A594
    if (ctx->r2 == 0) {
        // 0x0040A494: nop
    
            goto L_0040A594;
    }
    // 0x0040A494: nop

    // 0x0040A498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A49C: lwc1        $f0, 0x84C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X84C);
    // 0x0040A4A0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0040A4A4: nop

    // 0x0040A4A8: bc1f        L_0040A4F4
    if (!c1cs) {
        // 0x0040A4AC: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_0040A4F4;
    }
    // 0x0040A4AC: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040A4B0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040A4B4: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x0040A4B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040A4BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0040A4C0: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040A4C4: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    // 0x0040A4C8: lw          $v1, 0x66C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X66C);
    // 0x0040A4CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040A4D0: bne         $v1, $v0, L_0040A560
    if (ctx->r3 != ctx->r2) {
        // 0x0040A4D4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040A560;
    }
    // 0x0040A4D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A4D8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A4DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A4E0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A4E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0040A4E8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040A4EC: j           L_0040A560
    // 0x0040A4F0: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
        goto L_0040A560;
    // 0x0040A4F0: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
L_0040A4F4:
    // 0x0040A4F4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040A4F8: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x0040A4FC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040A500: beq         $a0, $zero, L_0040A514
    if (ctx->r4 == 0) {
        // 0x0040A504: sw          $zero, 0x668($s1)
        MEM_W(0X668, ctx->r17) = 0;
            goto L_0040A514;
    }
    // 0x0040A504: sw          $zero, 0x668($s1)
    MEM_W(0X668, ctx->r17) = 0;
L_0040A508:
    // 0x0040A508: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x0040A50C: bne         $a0, $zero, L_0040A508
    if (ctx->r4 != 0) {
        // 0x0040A510: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0040A508;
    }
    // 0x0040A510: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0040A514:
    // 0x0040A514: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0040A518: beq         $v0, $zero, L_0040A53C
    if (ctx->r2 == 0) {
        // 0x0040A51C: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0040A53C;
    }
    // 0x0040A51C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A520: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A524: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040A528: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040A52C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0040A530: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040A534: j           L_0040A55C
    // 0x0040A538: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
        goto L_0040A55C;
    // 0x0040A538: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
L_0040A53C:
    // 0x0040A53C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040A540: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A544: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040A548: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040A54C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x0040A550: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040A554: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x0040A558: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040A55C:
    // 0x0040A55C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_0040A560:
    // 0x0040A560: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A564: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A568: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040A56C: jal         0x0026D518
    // 0x0040A570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x0040A570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_1:
    // 0x0040A574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040A578: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A57C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A580: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x0040A584: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040A588: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0040A58C: jal         0x00243414
    // 0x0040A590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040A590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_2:
L_0040A594:
    // 0x0040A594: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A598: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040A59C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040A5A0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040A5A4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040A5A8: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x0040A5AC: jr          $ra
    // 0x0040A5B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0040A5B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_00266C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266C00: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00266C04: beq         $v0, $zero, L_00266C2C
    if (ctx->r2 == 0) {
            // 0x00266C08: sra         $a2, $a2, 2
    ctx->r6 = S32(SIGNED(ctx->r6) >> 2);
    func_00266C2C(rdram, ctx);
    return;
    }
    // 0x00266C08: sra         $a2, $a2, 2
    ctx->r6 = S32(SIGNED(ctx->r6) >> 2);
L_00266C0C:
    // 0x00266C0C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00266C10: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00266C14: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00266C18: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00266C1C: bne         $a2, $zero, L_00266C0C
    if (ctx->r6 != 0) {
        // 0x00266C20: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00266C0C;
    }
    // 0x00266C20: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00266C24: jr          $ra
    // 0x00266C28: nop

    return;
    // 0x00266C28: nop

;}
RECOMP_FUNC void func_00261FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261FB0: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00261FB4: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x00261FB8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261FBC: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x00261FC0: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x00261FC4: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x00261FC8: lwc1        $f12, 0xBC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x00261FCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261FD0: lwc1        $f14, 0x7B50($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B50);
    // 0x00261FD4: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x00261FD8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00261FDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00261FE0: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x00261FE4: jal         0x00211774
    // 0x00261FE8: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00261FE8: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    after_0:
    // 0x00261FEC: lwc1        $f12, 0x118($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X118);
    // 0x00261FF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261FF4: lwc1        $f14, 0x7B54($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B54);
    // 0x00261FF8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x00261FFC: jal         0x00211774
    // 0x00262000: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    func_00211774(rdram, ctx);
        goto after_1;
    // 0x00262000: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00262004: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00262008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026200C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00262010: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00262014: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00262018: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x0026201C: jal         0x00246108
    // 0x00262020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_2;
    // 0x00262020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00262024: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00262028: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026202C: jal         0x0024599C
    // 0x00262030: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0024599C(rdram, ctx);
        goto after_3;
    // 0x00262030: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x00262034: lwc1        $f0, 0xB8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x00262038: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x0026203C: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00262040: lwc1        $f12, 0x1C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00262044: lwc1        $f14, 0x60($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00262048: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0026204C: jal         0x0021160C
    // 0x00262050: nop

    func_0021160C(rdram, ctx);
        goto after_4;
    // 0x00262050: nop

    after_4:
    // 0x00262054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262058: lwc1        $f1, 0x7B58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B58);
    // 0x0026205C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00262060: nop

    // 0x00262064: bc1t        L_00262084
    if (c1cs) {
        // 0x00262068: swc1        $f0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
            goto L_00262084;
    }
    // 0x00262068: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x0026206C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262070: lwc1        $f1, 0x7B5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B5C);
    // 0x00262074: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00262078: nop

    // 0x0026207C: bc1f        L_0026208C
    if (!c1cs) {
        // 0x00262080: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0026208C;
    }
    // 0x00262080: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00262084:
    // 0x00262084: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00262088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0026208C:
    // 0x0026208C: lw          $a2, 0x118($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X118);
    // 0x00262090: lw          $a3, 0x4C($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4C);
    // 0x00262094: jal         0x00245BAC
    // 0x00262098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_5;
    // 0x00262098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0026209C: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x002620A0: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x002620A4: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x002620A8: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x002620AC: jr          $ra
    // 0x002620B0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x002620B0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_002745DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002745DC: lwc1        $f2, 0x34($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X34);
    // 0x002745E0: lwc1        $f0, 0x114($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X114);
    // 0x002745E4: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002745E8: addiu       $v0, $a0, 0x34
    ctx->r2 = ADD32(ctx->r4, 0X34);
    // 0x002745EC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002745F0: addiu       $a1, $a1, 0x114
    ctx->r5 = ADD32(ctx->r5, 0X114);
    // 0x002745F4: lwc1        $f3, 0x4($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002745F8: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x002745FC: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00274600: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00274604: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00274608: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0027460C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00274610: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274614: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00274618: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0027461C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274620: lwc1        $f3, 0x2A30($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X2A30);
    // 0x00274624: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00274628: nop

    // 0x0027462C: bc1fl       L_00274640
    if (!c1cs) {
        // 0x00274630: div.s       $f0, $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
            goto L_00274640;
    }
    goto skip_0;
    // 0x00274630: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    skip_0:
    // 0x00274634: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00274638: j           L_0027464C
    // 0x0027463C: nop

        goto L_0027464C;
    // 0x0027463C: nop

L_00274640:
    // 0x00274640: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274644: lwc1        $f1, -0x7E70($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E70);
    // 0x00274648: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
L_0027464C:
    // 0x0027464C: lb          $a0, 0x44($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X44);
    // 0x00274650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00274654: beq         $a0, $v0, L_00274690
    if (ctx->r4 == ctx->r2) {
        // 0x00274658: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_00274690;
    }
    // 0x00274658: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0027465C: beql        $v0, $zero, L_00274674
    if (ctx->r2 == 0) {
        // 0x00274660: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00274674;
    }
    goto skip_1;
    // 0x00274660: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x00274664: beq         $a0, $zero, L_00274684
    if (ctx->r4 == 0) {
        // 0x00274668: nop
    
            goto L_00274684;
    }
    // 0x00274668: nop

    // 0x0027466C: j           L_002746A0
    // 0x00274670: nop

    func_002746A0(rdram, ctx);
    return;
    // 0x00274670: nop

L_00274674:
    // 0x00274674: bne         $a0, $v0, L_002746A0
    if (ctx->r4 != ctx->r2) {
            // 0x00274678: nop

    func_002746A0(rdram, ctx);
    return;
    }
    // 0x00274678: nop

    // 0x0027467C: jr          $ra
    // 0x00274680: nop

    return;
    // 0x00274680: nop

L_00274684:
    // 0x00274684: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274688: nop

    // 0x0027468C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
L_00274690:
    // 0x00274690: nop

    // 0x00274694: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274698: jr          $ra
    // 0x0027469C: nop

    return;
    // 0x0027469C: nop

;}
RECOMP_FUNC void func_00264CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264CCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00264CD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00264CD4: sw          $zero, 0x110($a1)
    MEM_W(0X110, ctx->r5) = 0;
    // 0x00264CD8: jal         0x00243414
    // 0x00264CDC: sw          $zero, 0x114($a1)
    MEM_W(0X114, ctx->r5) = 0;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00264CDC: sw          $zero, 0x114($a1)
    MEM_W(0X114, ctx->r5) = 0;
    after_0:
    // 0x00264CE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264CE4: jr          $ra
    // 0x00264CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A073C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A073C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002A0740: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A0744: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002A0748: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A074C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A0750: sra         $s2, $s3, 1
    ctx->r18 = S32(SIGNED(ctx->r19) >> 1);
    // 0x002A0754: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002A0758: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x002A075C: addiu       $s4, $s4, -0x75D0
    ctx->r20 = ADD32(ctx->r20, -0X75D0);
    // 0x002A0760: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002A0764: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A0768: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x002A076C: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x002A0770: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x002A0774: blez        $s2, L_002A07D8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x002A0778: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002A07D8;
    }
    // 0x002A0778: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002A077C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A0780: lwc1        $f22, -0x53D0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X53D0);
    // 0x002A0784: mtc1        $s3, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r19;
    // 0x002A0788: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
L_002A078C:
    // 0x002A078C: mtc1        $s1, $f20
    ctx->f20.u32l = ctx->r17;
    // 0x002A0790: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x002A0794: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x002A0798: div.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
    // 0x002A079C: jal         0x002974C0
    // 0x002A07A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x002A07A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x002A07A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002A07A8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x002A07AC: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x002A07B0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002A07B4: jal         0x002982F0
    // 0x002A07B8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x002A07B8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x002A07BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A07C0: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x002A07C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002A07C8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x002A07CC: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x002A07D0: bne         $v0, $zero, L_002A078C
    if (ctx->r2 != 0) {
        // 0x002A07D4: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_002A078C;
    }
    // 0x002A07D4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_002A07D8:
    // 0x002A07D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A07DC: lw          $t0, 0x8($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X8);
    // 0x002A07E0: blez        $s3, L_002A0800
    if (SIGNED(ctx->r19) <= 0) {
        // 0x002A07E4: sll         $t1, $s3, 1
        ctx->r9 = S32(ctx->r19 << 1);
            goto L_002A0800;
    }
    // 0x002A07E4: sll         $t1, $s3, 1
    ctx->r9 = S32(ctx->r19 << 1);
    // 0x002A07E8: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
L_002A07EC:
    // 0x002A07EC: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x002A07F0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x002A07F4: slt         $v0, $a3, $s3
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x002A07F8: bne         $v0, $zero, L_002A07EC
    if (ctx->r2 != 0) {
        // 0x002A07FC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_002A07EC;
    }
    // 0x002A07FC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_002A0800:
    // 0x002A0800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A0804: blez        $t1, L_002A0890
    if (SIGNED(ctx->r9) <= 0) {
        // 0x002A0808: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_002A0890;
    }
    // 0x002A0808: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x002A080C: slti        $t2, $s3, 0x2
    ctx->r10 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
L_002A0810:
    // 0x002A0810: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002A0814: beq         $v0, $zero, L_002A0858
    if (ctx->r2 == 0) {
        // 0x002A0818: addiu       $a0, $a2, -0x1
        ctx->r4 = ADD32(ctx->r6, -0X1);
            goto L_002A0858;
    }
    // 0x002A0818: addiu       $a0, $a2, -0x1
    ctx->r4 = ADD32(ctx->r6, -0X1);
    // 0x002A081C: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x002A0820: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x002A0824: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x002A0828: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x002A082C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x002A0830: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x002A0834: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x002A0838: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A083C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x002A0840: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0844: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x002A0848: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002A084C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x002A0850: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x002A0854: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_002A0858:
    // 0x002A0858: bne         $t2, $zero, L_002A0880
    if (ctx->r10 != 0) {
        // 0x002A085C: addu        $v1, $s3, $zero
        ctx->r3 = ADD32(ctx->r19, 0);
            goto L_002A0880;
    }
    // 0x002A085C: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
    // 0x002A0860: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_002A0864:
    // 0x002A0864: beql        $v0, $zero, L_002A0884
    if (ctx->r2 == 0) {
        // 0x002A0868: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_002A0884;
    }
    goto skip_0;
    // 0x002A0868: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    skip_0:
    // 0x002A086C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x002A0870: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x002A0874: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002A0878: beq         $v0, $zero, L_002A0864
    if (ctx->r2 == 0) {
        // 0x002A087C: slt         $v0, $v1, $a2
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_002A0864;
    }
    // 0x002A087C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_002A0880:
    // 0x002A0880: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_002A0884:
    // 0x002A0884: slt         $v0, $t1, $a3
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x002A0888: beq         $v0, $zero, L_002A0810
    if (ctx->r2 == 0) {
        // 0x002A088C: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_002A0810;
    }
    // 0x002A088C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
L_002A0890:
    // 0x002A0890: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x002A0894: sw          $s3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r19;
    // 0x002A0898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002A089C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002A08A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A08A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A08A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A08AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A08B0: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x002A08B4: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x002A08B8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x002A08BC: jr          $ra
    // 0x002A08C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002A08C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00277090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00277094: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00277098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027709C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002770A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002770A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x002770A8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002770AC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002770B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002770B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002770B8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x002770BC: jal         0x00284188
    // 0x002770C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x002770C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002770C4: bne         $v0, $zero, L_002772FC
    if (ctx->r2 != 0) {
        // 0x002770C8: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_002772FC;
    }
    // 0x002770C8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x002770CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002770D0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x002770D4: bne         $v1, $v0, L_002772FC
    if (ctx->r3 != ctx->r2) {
        // 0x002770D8: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_002772FC;
    }
    // 0x002770D8: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x002770DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002770E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x002770E4: jal         0x0027AEA8
    // 0x002770E8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0027AEA8(rdram, ctx);
        goto after_1;
    // 0x002770E8: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x002770EC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x002770F0: beq         $v0, $zero, L_002772FC
    if (ctx->r2 == 0) {
        // 0x002770F4: nop
    
            goto L_002772FC;
    }
    // 0x002770F4: nop

    // 0x002770F8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x002770FC: beq         $v0, $zero, L_002772FC
    if (ctx->r2 == 0) {
        // 0x00277100: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002772FC;
    }
    // 0x00277100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00277104: beq         $s1, $v0, L_0027711C
    if (ctx->r17 == ctx->r2) {
        // 0x00277108: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0027711C;
    }
    // 0x00277108: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027710C: beq         $s1, $v0, L_0027713C
    if (ctx->r17 == ctx->r2) {
        // 0x00277110: addiu       $s1, $s0, 0x48
        ctx->r17 = ADD32(ctx->r16, 0X48);
            goto L_0027713C;
    }
    // 0x00277110: addiu       $s1, $s0, 0x48
    ctx->r17 = ADD32(ctx->r16, 0X48);
    // 0x00277114: j           L_002772FC
    // 0x00277118: nop

        goto L_002772FC;
    // 0x00277118: nop

L_0027711C:
    // 0x0027711C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00277120: lwc1        $f20, 0x44($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X44);
    // 0x00277124: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00277128: addiu       $s4, $zero, 0x32
    ctx->r20 = ADD32(0, 0X32);
    // 0x0027712C: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x00277130: addu        $s5, $s4, $zero
    ctx->r21 = ADD32(ctx->r20, 0);
    // 0x00277134: j           L_00277154
    // 0x00277138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
        goto L_00277154;
    // 0x00277138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0027713C:
    // 0x0027713C: lwc1        $f20, 0x8C($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x00277140: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00277144: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x00277148: addiu       $s6, $zero, 0x32
    ctx->r22 = ADD32(0, 0X32);
    // 0x0027714C: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x00277150: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
L_00277154:
    // 0x00277154: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00277158: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0027715C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00277160: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x00277164: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00277168: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0027716C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00277170: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00277174: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00277178: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027717C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00277180: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x00277184: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00277188: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027718C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00277190: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00277194: mfc1        $s3, $f3
    ctx->r19 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00277198: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027719C: mfc1        $s2, $f3
    ctx->r18 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002771A0: jal         0x0027AF4C
    // 0x002771A4: nop

    func_0027AF4C(rdram, ctx);
        goto after_2;
    // 0x002771A4: nop

    after_2:
    // 0x002771A8: jal         0x00277328
    // 0x002771AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00277328(rdram, ctx);
        goto after_3;
    // 0x002771AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x002771B0: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x002771B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002771B8: bne         $v1, $v0, L_0027722C
    if (ctx->r3 != ctx->r2) {
        // 0x002771BC: lui         $t1, 0x51EB
        ctx->r9 = S32(0X51EB << 16);
            goto L_0027722C;
    }
    // 0x002771BC: lui         $t1, 0x51EB
    ctx->r9 = S32(0X51EB << 16);
    // 0x002771C0: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x002771C4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002771C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002771CC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002771D0: nop

    // 0x002771D4: bc1f        L_002771F4
    if (!c1cs) {
        // 0x002771D8: nop
    
            goto L_002771F4;
    }
    // 0x002771D8: nop

    // 0x002771DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002771E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002771E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002771E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002771EC: j           L_00277214
    // 0x002771F0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
        goto L_00277214;
    // 0x002771F0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
L_002771F4:
    // 0x002771F4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002771F8: nop

    // 0x002771FC: bc1f        L_00277228
    if (!c1cs) {
        // 0x00277200: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_00277228;
    }
    // 0x00277200: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00277204: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x00277208: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027720C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277210: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_00277214:
    // 0x00277214: nop

    // 0x00277218: bc1f        L_0027722C
    if (!c1cs) {
        // 0x0027721C: lui         $t1, 0x51EB
        ctx->r9 = S32(0X51EB << 16);
            goto L_0027722C;
    }
    // 0x0027721C: lui         $t1, 0x51EB
    ctx->r9 = S32(0X51EB << 16);
    // 0x00277220: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00277224: swc1        $f3, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
L_00277228:
    // 0x00277228: lui         $t1, 0x51EB
    ctx->r9 = S32(0X51EB << 16);
L_0027722C:
    // 0x0027722C: ori         $t1, $t1, 0x851F
    ctx->r9 = ctx->r9 | 0X851F;
    // 0x00277230: lui         $a2, 0x8080
    ctx->r6 = S32(0X8080 << 16);
    // 0x00277234: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00277238: addiu       $s0, $s0, -0x5516
    ctx->r16 = ADD32(ctx->r16, -0X5516);
    // 0x0027723C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00277240: ori         $a2, $a2, 0x8081
    ctx->r6 = ctx->r6 | 0X8081;
    // 0x00277244: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00277248: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0027724C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00277250: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00277254: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00277258: mult        $v1, $a2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027725C: addiu       $a0, $s3, 0x1E
    ctx->r4 = ADD32(ctx->r19, 0X1E);
    // 0x00277260: addiu       $a1, $s2, 0x8
    ctx->r5 = ADD32(ctx->r18, 0X8);
    // 0x00277264: addiu       $a3, $s2, 0xE
    ctx->r7 = ADD32(ctx->r18, 0XE);
    // 0x00277268: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0027726C: mfhi        $t3
    ctx->r11 = hi;
    // 0x00277270: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x00277274: addiu       $t0, $t0, -0x3C
    ctx->r8 = ADD32(ctx->r8, -0X3C);
    // 0x00277278: mult        $t0, $v0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027727C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00277280: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x00277284: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00277288: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x0027728C: mflo        $t0
    ctx->r8 = lo;
    // 0x00277290: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x00277294: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x00277298: mult        $t0, $t1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027729C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002772A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002772A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x002772A8: sra         $t0, $t0, 31
    ctx->r8 = S32(SIGNED(ctx->r8) >> 31);
    // 0x002772AC: mfhi        $t1
    ctx->r9 = hi;
    // 0x002772B0: sra         $a2, $t1, 5
    ctx->r6 = S32(SIGNED(ctx->r9) >> 5);
    // 0x002772B4: subu        $a2, $a2, $t0
    ctx->r6 = SUB32(ctx->r6, ctx->r8);
    // 0x002772B8: jal         0x0027AFAC
    // 0x002772BC: addu        $a2, $a0, $a2
    ctx->r6 = ADD32(ctx->r4, ctx->r6);
    func_0027AFAC(rdram, ctx);
        goto after_4;
    // 0x002772BC: addu        $a2, $a0, $a2
    ctx->r6 = ADD32(ctx->r4, ctx->r6);
    after_4:
    // 0x002772C0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x002772C4: jal         0x00279028
    // 0x002772C8: nop

    func_00279028(rdram, ctx);
        goto after_5;
    // 0x002772C8: nop

    after_5:
    // 0x002772CC: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x002772D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002772D4: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x002772D8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x002772DC: sll         $a3, $s2, 16
    ctx->r7 = S32(ctx->r18 << 16);
    // 0x002772E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002772E4: lwc1        $f0, -0x7DC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7DC0);
    // 0x002772E8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x002772EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002772F0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002772F4: jal         0x0027B320
    // 0x002772F8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0027B320(rdram, ctx);
        goto after_6;
    // 0x002772F8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_6:
L_002772FC:
    // 0x002772FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00277300: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00277304: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00277308: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0027730C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00277310: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00277314: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00277318: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0027731C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00277320: jr          $ra
    // 0x00277324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00277324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00217214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217214: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00217218: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0021721C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00217220: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00217224: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00217228: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0021722C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00217230: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00217234: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00217238: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x0021723C: lw          $v1, 0x28($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X28);
    // 0x00217240: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00217244: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x00217248: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021724C: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x00217250: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00217254: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x00217258: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0021725C: mflo        $a3
    ctx->r7 = lo;
    // 0x00217260: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x00217264: jal         0x00217C58
    // 0x00217268: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00217C58(rdram, ctx);
        goto after_0;
    // 0x00217268: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0021726C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00217270: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00217274: jal         0x00217C58
    // 0x00217278: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    func_00217C58(rdram, ctx);
        goto after_1;
    // 0x00217278: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0021727C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00217280: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00217284: jal         0x00217C58
    // 0x00217288: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00217C58(rdram, ctx);
        goto after_2;
    // 0x00217288: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0021728C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00217290: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00217294: jal         0x00217C58
    // 0x00217298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00217C58(rdram, ctx);
        goto after_3;
    // 0x00217298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0021729C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002172A0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002172A4: jal         0x00217C58
    // 0x002172A8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_00217C58(rdram, ctx);
        goto after_4;
    // 0x002172A8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002172AC: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x002172B0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x002172B4: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x002172B8: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x002172BC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002172C0: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x002172C4: sll         $a2, $s0, 5
    ctx->r6 = S32(ctx->r16 << 5);
    // 0x002172C8: subu        $v1, $a2, $v1
    ctx->r3 = SUB32(ctx->r6, ctx->r3);
    // 0x002172CC: sll         $a1, $s2, 1
    ctx->r5 = S32(ctx->r18 << 1);
    // 0x002172D0: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x002172D4: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x002172D8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x002172DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002172E0: mtc1        $v1, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r3;
    // 0x002172E4: cvt.s.w     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f5.fl = CVT_S_W(ctx->f_odd[(5 - 1) * 2]);
    // 0x002172E8: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x002172EC: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x002172F0: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x002172F4: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x002172F8: sll         $v1, $s2, 2
    ctx->r3 = S32(ctx->r18 << 2);
    // 0x002172FC: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x00217300: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00217304: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00217308: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0021730C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x00217310: mtc1        $a0, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r4;
    // 0x00217314: cvt.s.w     $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f7.fl = CVT_S_W(ctx->f_odd[(7 - 1) * 2]);
    // 0x00217318: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x0021731C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x00217320: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00217324: sll         $s0, $s0, 6
    ctx->r16 = S32(ctx->r16 << 6);
    // 0x00217328: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x0021732C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217330: lwc1        $f0, 0x5990($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5990);
    // 0x00217334: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x00217338: mul.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x0021733C: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x00217340: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00217344: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00217348: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x0021734C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x00217350: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00217354: beq         $s3, $zero, L_00217378
    if (ctx->r19 == 0) {
        // 0x00217358: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00217378;
    }
    // 0x00217358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021735C: sllv        $v0, $v0, $s3
    ctx->r2 = S32(ctx->r2 << (ctx->r19 & 31));
    // 0x00217360: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217364: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x00217368: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021736C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217370: j           L_0021739C
    // 0x00217374: div.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
        goto L_0021739C;
    // 0x00217374: div.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_00217378:
    // 0x00217378: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x0021737C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217380: lwc1        $f1, 0x5994($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5994);
    // 0x00217384: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00217388: lwc1        $f1, 0x4($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X4);
    // 0x0021738C: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x00217390: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00217394: lwc1        $f3, 0x8($s4)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x00217398: swc1        $f1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
L_0021739C:
    // 0x0021739C: sltiu       $v0, $s5, 0x2
    ctx->r2 = ctx->r21 < 0X2 ? 1 : 0;
    // 0x002173A0: mul.s       $f6, $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f3.fl);
    // 0x002173A4: bne         $v0, $zero, L_002173E0
    if (ctx->r2 != 0) {
        // 0x002173A8: nop
    
            goto L_002173E0;
    }
    // 0x002173A8: nop

    // 0x002173AC: mtc1        $s5, $f2
    ctx->f2.u32l = ctx->r21;
    // 0x002173B0: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x002173B4: bgez        $s5, L_002173C8
    if (SIGNED(ctx->r21) >= 0) {
        // 0x002173B8: nop
    
            goto L_002173C8;
    }
    // 0x002173B8: nop

    // 0x002173BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002173C0: ldc1        $f0, 0x5998($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5998);
    // 0x002173C4: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_002173C8:
    // 0x002173C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002173CC: lwc1        $f1, 0x59A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59A0);
    // 0x002173D0: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x002173D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002173D8: j           L_002173E8
    // 0x002173DC: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
        goto L_002173E8;
    // 0x002173DC: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_002173E0:
    // 0x002173E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002173E4: lwc1        $f1, 0x59A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59A4);
L_002173E8:
    // 0x002173E8: mul.s       $f0, $f1, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x002173EC: nop

    // 0x002173F0: mul.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x002173F4: nop

    // 0x002173F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002173FC: nop

    // 0x00217400: mul.s       $f7, $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f0.fl);
    // 0x00217404: nop

    // 0x00217408: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021740C: lwc1        $f1, 0x4($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X4);
    // 0x00217410: add.s       $f6, $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f1.fl;
    // 0x00217414: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00217418: sw          $s5, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r21;
    // 0x0021741C: swc1        $f5, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f_odd[(5 - 1) * 2];
    // 0x00217420: swc1        $f6, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f6.u32l;
    // 0x00217424: swc1        $f7, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f_odd[(7 - 1) * 2];
    // 0x00217428: swc1        $f4, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f4.u32l;
    // 0x0021742C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00217430: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00217434: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00217438: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0021743C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00217440: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00217444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00217448: jr          $ra
    // 0x0021744C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0021744C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00404FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00404FE4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404FE8: addiu       $a0, $a0, -0x5F4
    ctx->r4 = ADD32(ctx->r4, -0X5F4);
    // 0x00404FEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00404FF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00404FF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00404FF8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00404FFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00405000: beq         $v0, $zero, L_004050C8
    if (ctx->r2 == 0) {
        // 0x00405004: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004050C8;
    }
    // 0x00405004: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405008: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0040500C: beql        $v1, $v0, L_00405054
    if (ctx->r3 == ctx->r2) {
        // 0x00405010: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_00405054;
    }
    goto skip_0;
    // 0x00405010: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
    skip_0:
    // 0x00405014: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405018: lw          $v1, -0x5F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F0);
    // 0x0040501C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00405020: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00405024: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405028: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0040502C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405034: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00405038: j           L_00405054
    // 0x0040503C: swc1        $f0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f0.u32l;
        goto L_00405054;
    // 0x0040503C: swc1        $f0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f0.u32l;
L_00405040:
    // 0x00405040: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x00405044: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00405048: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0040504C: j           L_004050C8
    // 0x00405050: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
        goto L_004050C8;
    // 0x00405050: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
L_00405054:
    // 0x00405054: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00405058: addiu       $s0, $s0, -0x5F0
    ctx->r16 = ADD32(ctx->r16, -0X5F0);
    // 0x0040505C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_00405060:
    // 0x00405060: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405064: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x00405068: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0040506C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405070: lw          $v1, -0x5F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F0);
    // 0x00405074: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00405078: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0040507C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405080: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00405084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405088: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0040508C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405090: beq         $v0, $s1, L_00405040
    if (ctx->r2 == ctx->r17) {
        // 0x00405094: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00405040;
    }
    // 0x00405094: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405098: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040509C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004050A0: lwc1        $f14, 0x41C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X41C);
    // 0x004050A4: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x004050A8: lwc1        $f20, 0x10($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X10);
    // 0x004050AC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004050B0: jal         0x002119FC
    // 0x004050B4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x004050B4: nop

    after_0:
    // 0x004050B8: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004050BC: nop

    // 0x004050C0: bc1t        L_00405060
    if (c1cs) {
        // 0x004050C4: nop
    
            goto L_00405060;
    }
    // 0x004050C4: nop

L_004050C8:
    // 0x004050C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004050CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004050D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004050D4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x004050D8: jr          $ra
    // 0x004050DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004050DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00298BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298BE0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00298BE4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00298BE8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x00298BEC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00298BF0: addiu       $v0, $v0, 0x1418
    ctx->r2 = ADD32(ctx->r2, 0X1418);
L_00298BF4:
    // 0x00298BF4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00298BF8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00298BFC: bgez        $a1, L_00298BF4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00298C00: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_00298BF4;
    }
    // 0x00298C00: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00298C04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00298C08: addiu       $v0, $v0, 0x13E0
    ctx->r2 = ADD32(ctx->r2, 0X13E0);
    // 0x00298C0C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00298C10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00298C18: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x00298C1C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00298C20: addiu       $a3, $a3, 0x13DC
    ctx->r7 = ADD32(ctx->r7, 0X13DC);
    // 0x00298C24: sw          $v0, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r2;
    // 0x00298C28: sb          $v1, 0x0($sp)
    MEM_B(0X0, ctx->r29) = ctx->r3;
    // 0x00298C2C: sb          $v0, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r2;
    // 0x00298C30: lbu         $a0, 0x0($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X0);
    // 0x00298C34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00298C38: sb          $v0, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r2;
    // 0x00298C3C: sb          $t0, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r8;
    // 0x00298C40: sb          $v1, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r3;
    // 0x00298C44: sb          $v1, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r3;
    // 0x00298C48: sb          $v1, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r3;
    // 0x00298C4C: beq         $a0, $zero, L_00298C88
    if (ctx->r4 == 0) {
        // 0x00298C50: sb          $v1, 0x7($sp)
        MEM_B(0X7, ctx->r29) = ctx->r3;
            goto L_00298C88;
    }
    // 0x00298C50: sb          $v1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r3;
L_00298C54:
    // 0x00298C54: lwl         $t1, 0x0($sp)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r29, 0X0);
    // 0x00298C58: lwr         $t1, 0x3($sp)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r29, 0X3);
    // 0x00298C5C: lwl         $t2, 0x4($sp)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r29, 0X4);
    // 0x00298C60: lwr         $t2, 0x7($sp)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r29, 0X7);
    // 0x00298C64: swl         $t1, 0x0($a2)
    do_swl(rdram, 0X0, ctx->r6, ctx->r9);
    // 0x00298C68: swr         $t1, 0x3($a2)
    do_swr(rdram, 0X3, ctx->r6, ctx->r9);
    // 0x00298C6C: swl         $t2, 0x4($a2)
    do_swl(rdram, 0X4, ctx->r6, ctx->r10);
    // 0x00298C70: swr         $t2, 0x7($a2)
    do_swr(rdram, 0X7, ctx->r6, ctx->r10);
    // 0x00298C74: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x00298C78: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00298C7C: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00298C80: bne         $v0, $zero, L_00298C54
    if (ctx->r2 != 0) {
        // 0x00298C84: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00298C54;
    }
    // 0x00298C84: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_00298C88:
    // 0x00298C88: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00298C8C: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x00298C90: jr          $ra
    // 0x00298C94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00298C94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0044459C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044459C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004445A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004445A4: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x004445A8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x004445AC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x004445B0: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x004445B4: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x004445B8: beq         $v0, $zero, L_004445C8
    if (ctx->r2 == 0) {
        // 0x004445BC: nop
    
            goto L_004445C8;
    }
    // 0x004445BC: nop

    // 0x004445C0: jal         0x00243414
    // 0x004445C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004445C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
L_004445C8:
    // 0x004445C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004445CC: jr          $ra
    // 0x004445D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004445D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00217B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217B64: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00217B68: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x00217B6C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00217B70: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00217B74: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x00217B78: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00217B7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00217B80: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x00217B84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00217B88: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00217B8C: beq         $a0, $zero, L_00217BA4
    if (ctx->r4 == 0) {
        // 0x00217B90: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00217BA4;
    }
    // 0x00217B90: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00217B94: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x00217B98: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00217B9C: sllv        $a2, $a2, $v0
    ctx->r6 = S32(ctx->r6 << (ctx->r2 & 31));
    // 0x00217BA0: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
L_00217BA4:
    // 0x00217BA4: sltiu       $v0, $a1, 0x20
    ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x00217BA8: beq         $v0, $zero, L_00217BBC
    if (ctx->r2 == 0) {
        // 0x00217BAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00217BBC;
    }
    // 0x00217BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217BB0: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217BB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217BB8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_00217BBC:
    // 0x00217BBC: jr          $ra
    // 0x00217BC0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00217BC0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0025B2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025B2D4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0025B2D8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0025B2DC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0025B2E0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0025B2E4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025B2E8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x0025B2EC: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0025B2F0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0025B2F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0025B2F8: addiu       $v1, $zero, 0x3D
    ctx->r3 = ADD32(0, 0X3D);
    // 0x0025B2FC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0025B300: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x0025B304: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0025B308: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x0025B30C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0025B310: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0025B314: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x0025B318: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0025B31C: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x0025B320: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B324: lwc1        $f20, 0x753C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X753C);
    // 0x0025B328: lb          $v0, 0x34($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X34);
    // 0x0025B32C: lb          $s6, 0x133($s1)
    ctx->r22 = MEM_B(ctx->r17, 0X133);
    // 0x0025B330: bne         $v0, $v1, L_0025B348
    if (ctx->r2 != ctx->r3) {
        // 0x0025B334: addiu       $s7, $a0, 0x14
        ctx->r23 = ADD32(ctx->r4, 0X14);
            goto L_0025B348;
    }
    // 0x0025B334: addiu       $s7, $a0, 0x14
    ctx->r23 = ADD32(ctx->r4, 0X14);
    // 0x0025B338: jal         0x002600E8
    // 0x0025B33C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002600E8(rdram, ctx);
        goto after_0;
    // 0x0025B33C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0025B340: j           L_0025BA4C
    // 0x0025B344: nop

        goto L_0025BA4C;
    // 0x0025B344: nop

L_0025B348:
    // 0x0025B348: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x0025B34C: beq         $s4, $zero, L_0025B560
    if (ctx->r20 == 0) {
        // 0x0025B350: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B560;
    }
    // 0x0025B350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B354: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x0025B358: beq         $v1, $v0, L_0025B370
    if (ctx->r3 == ctx->r2) {
        // 0x0025B35C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B370;
    }
    // 0x0025B35C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B360: beq         $v1, $v0, L_0025B3D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B364: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0025B3D4;
    }
    // 0x0025B364: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0025B368: j           L_0025B4D0
    // 0x0025B36C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
        goto L_0025B4D0;
    // 0x0025B36C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B370:
    // 0x0025B370: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x0025B374: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0025B378: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B37C: beq         $v0, $zero, L_0025B4CC
    if (ctx->r2 == 0) {
        // 0x0025B380: addu        $s2, $s4, $zero
        ctx->r18 = ADD32(ctx->r20, 0);
            goto L_0025B4CC;
    }
    // 0x0025B380: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x0025B384: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0025B388: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x0025B38C: addiu       $v0, $v0, -0x1BBC
    ctx->r2 = ADD32(ctx->r2, -0X1BBC);
    // 0x0025B390: sltiu       $v0, $v0, 0x191
    ctx->r2 = ctx->r2 < 0X191 ? 1 : 0;
    // 0x0025B394: beq         $v0, $zero, L_0025B4D0
    if (ctx->r2 == 0) {
        // 0x0025B398: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B4D0;
    }
    // 0x0025B398: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B39C: lw          $a2, 0x1A8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1A8);
    // 0x0025B3A0: lw          $v0, 0x1C0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1C0);
    // 0x0025B3A4: beq         $v0, $a2, L_0025B4CC
    if (ctx->r2 == ctx->r6) {
        // 0x0025B3A8: nop
    
            goto L_0025B4CC;
    }
    // 0x0025B3A8: nop

    // 0x0025B3AC: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x0025B3B0: jal         0x002460FC
    // 0x0025B3B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002460FC(rdram, ctx);
        goto after_1;
    // 0x0025B3B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025B3B8: lui         $v1, 0xBFFF
    ctx->r3 = S32(0XBFFF << 16);
    // 0x0025B3BC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B3C0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025B3C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B3C8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B3CC: j           L_0025B4CC
    // 0x0025B3D0: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
        goto L_0025B4CC;
    // 0x0025B3D0: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
L_0025B3D4:
    // 0x0025B3D4: lhu         $v1, 0x2($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X2);
    // 0x0025B3D8: bne         $v1, $v0, L_0025B43C
    if (ctx->r3 != ctx->r2) {
        // 0x0025B3DC: nop
    
            goto L_0025B43C;
    }
    // 0x0025B3DC: nop

    // 0x0025B3E0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025B3E4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0025B3E8: beq         $v0, $zero, L_0025B408
    if (ctx->r2 == 0) {
        // 0x0025B3EC: nop
    
            goto L_0025B408;
    }
    // 0x0025B3EC: nop

    // 0x0025B3F0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0025B3F4: beq         $v0, $zero, L_0025B408
    if (ctx->r2 == 0) {
        // 0x0025B3F8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B408;
    }
    // 0x0025B3F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B3FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B400: jal         0x00243414
    // 0x0025B404: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025B404: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    after_2:
L_0025B408:
    // 0x0025B408: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0025B40C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0025B410: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B414: beq         $v0, $zero, L_0025B43C
    if (ctx->r2 == 0) {
        // 0x0025B418: nop
    
            goto L_0025B43C;
    }
    // 0x0025B418: nop

    // 0x0025B41C: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B424: lwc1        $f1, 0x7540($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7540);
    // 0x0025B428: addiu       $v0, $v0, 0x3200
    ctx->r2 = ADD32(ctx->r2, 0X3200);
    // 0x0025B42C: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x0025B430: lwc1        $f0, 0xD0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XD0);
    // 0x0025B434: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025B438: swc1        $f0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->f0.u32l;
L_0025B43C:
    // 0x0025B43C: lw          $s0, 0x10C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X10C);
    // 0x0025B440: beq         $s0, $zero, L_0025B4E0
    if (ctx->r16 == 0) {
        // 0x0025B444: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0025B4E0;
    }
    // 0x0025B444: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0025B448: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025B44C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B450: beq         $v0, $zero, L_0025B4A4
    if (ctx->r2 == 0) {
        // 0x0025B454: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B4A4;
    }
    // 0x0025B454: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B458: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0025B45C: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x0025B460: addiu       $v0, $v0, -0x1BBC
    ctx->r2 = ADD32(ctx->r2, -0X1BBC);
    // 0x0025B464: sltiu       $v0, $v0, 0x191
    ctx->r2 = ctx->r2 < 0X191 ? 1 : 0;
    // 0x0025B468: beq         $v0, $zero, L_0025B4A8
    if (ctx->r2 == 0) {
        // 0x0025B46C: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0025B4A8;
    }
    // 0x0025B46C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B470: lw          $a2, 0x1A8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A8);
    // 0x0025B474: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x0025B478: beql        $v0, $a2, L_0025B4AC
    if (ctx->r2 == ctx->r6) {
        // 0x0025B47C: addiu       $a2, $s4, 0x4
        ctx->r6 = ADD32(ctx->r20, 0X4);
            goto L_0025B4AC;
    }
    goto skip_0;
    // 0x0025B47C: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    skip_0:
    // 0x0025B480: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x0025B484: jal         0x002460FC
    // 0x0025B488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002460FC(rdram, ctx);
        goto after_3;
    // 0x0025B488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0025B48C: lui         $v1, 0xBFFF
    ctx->r3 = S32(0XBFFF << 16);
    // 0x0025B490: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B494: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025B498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B49C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B4A0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B4A4:
    // 0x0025B4A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0025B4A8:
    // 0x0025B4A8: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
L_0025B4AC:
    // 0x0025B4AC: jal         0x0025E52C
    // 0x0025B4B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_4;
    // 0x0025B4B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_4:
    // 0x0025B4B4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x0025B4B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B4BC: beql        $v1, $v0, L_0025B4E0
    if (ctx->r3 == ctx->r2) {
        // 0x0025B4C0: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_0025B4E0;
    }
    goto skip_1;
    // 0x0025B4C0: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x0025B4C4: j           L_0025B4E0
    // 0x0025B4C8: nop

        goto L_0025B4E0;
    // 0x0025B4C8: nop

L_0025B4CC:
    // 0x0025B4CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B4D0:
    // 0x0025B4D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B4D4: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    // 0x0025B4D8: jal         0x0025E52C
    // 0x0025B4DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_5;
    // 0x0025B4DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_5:
L_0025B4E0:
    // 0x0025B4E0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0025B4E4: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0025B4E8: bne         $v0, $zero, L_0025B578
    if (ctx->r2 != 0) {
        // 0x0025B4EC: nop
    
            goto L_0025B578;
    }
    // 0x0025B4EC: nop

    // 0x0025B4F0: beq         $s2, $zero, L_0025B578
    if (ctx->r18 == 0) {
        // 0x0025B4F4: nop
    
            goto L_0025B578;
    }
    // 0x0025B4F4: nop

    // 0x0025B4F8: lhu         $v1, 0xB8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XB8);
    // 0x0025B4FC: lhu         $v0, 0xB8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XB8);
    // 0x0025B500: beq         $v1, $v0, L_0025B578
    if (ctx->r3 == ctx->r2) {
        // 0x0025B504: nop
    
            goto L_0025B578;
    }
    // 0x0025B504: nop

    // 0x0025B508: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0025B50C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0025B510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B514: bne         $v1, $v0, L_0025B540
    if (ctx->r3 != ctx->r2) {
        // 0x0025B518: lui         $a0, 0xDFFF
        ctx->r4 = S32(0XDFFF << 16);
            goto L_0025B540;
    }
    // 0x0025B518: lui         $a0, 0xDFFF
    ctx->r4 = S32(0XDFFF << 16);
    // 0x0025B51C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B520: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0025B524: sw          $s2, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r18;
    // 0x0025B528: sw          $s2, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r18;
    // 0x0025B52C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B530: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x0025B534: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B538: j           L_0025B578
    // 0x0025B53C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0025B578;
    // 0x0025B53C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0025B540:
    // 0x0025B540: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0025B544: lui         $v1, 0xBFFF
    ctx->r3 = S32(0XBFFF << 16);
    // 0x0025B548: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B54C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025B550: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0025B554: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B558: j           L_0025B578
    // 0x0025B55C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0025B578;
    // 0x0025B55C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0025B560:
    // 0x0025B560: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B564: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B568: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025B56C: addiu       $a2, $a2, 0x6A0
    ctx->r6 = ADD32(ctx->r6, 0X6A0);
    // 0x0025B570: jal         0x0025E52C
    // 0x0025B574: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_6;
    // 0x0025B574: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_6:
L_0025B578:
    // 0x0025B578: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0025B57C: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B580: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x0025B584: bltzl       $v0, L_0025B58C
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025B588: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025B58C;
    }
    goto skip_2;
    // 0x0025B588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
L_0025B58C:
    // 0x0025B58C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x0025B590: sltiu       $s2, $v0, 0x1
    ctx->r18 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0025B594: beq         $s2, $zero, L_0025B5A0
    if (ctx->r18 == 0) {
        // 0x0025B598: addu        $fp, $zero, $zero
        ctx->r30 = ADD32(0, 0);
            goto L_0025B5A0;
    }
    // 0x0025B598: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0025B59C: sltu        $fp, $fp, $v1
    ctx->r30 = ctx->r30 < ctx->r3 ? 1 : 0;
L_0025B5A0:
    // 0x0025B5A0: bne         $v1, $zero, L_0025B5C0
    if (ctx->r3 != 0) {
        // 0x0025B5A4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025B5C0;
    }
    // 0x0025B5A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025B5A8: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B5AC: beq         $v1, $v0, L_0025B63C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B5B0: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5B0: nop

    // 0x0025B5B4: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B5B8: bne         $v0, $zero, L_0025B63C
    if (ctx->r2 != 0) {
        // 0x0025B5BC: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5BC: nop

L_0025B5C0:
    // 0x0025B5C0: lhu         $v0, 0x30($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X30);
    // 0x0025B5C4: beq         $v0, $zero, L_0025B63C
    if (ctx->r2 == 0) {
        // 0x0025B5C8: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5C8: nop

    // 0x0025B5CC: lb          $v0, 0xCB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XCB);
    // 0x0025B5D0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x0025B5D4: bne         $v0, $zero, L_0025B63C
    if (ctx->r2 != 0) {
        // 0x0025B5D8: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5D8: nop

    // 0x0025B5DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0025B5E0: lw          $v1, -0x5528($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5528);
    // 0x0025B5E4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x0025B5E8: beq         $v0, $zero, L_0025B600
    if (ctx->r2 == 0) {
        // 0x0025B5EC: andi        $v0, $v1, 0x20
        ctx->r2 = ctx->r3 & 0X20;
            goto L_0025B600;
    }
    // 0x0025B5EC: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x0025B5F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B5F4: lwc1        $f20, 0x7544($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7544);
    // 0x0025B5F8: j           L_0025B610
    // 0x0025B5FC: nop

        goto L_0025B610;
    // 0x0025B5FC: nop

L_0025B600:
    // 0x0025B600: beq         $v0, $zero, L_0025B610
    if (ctx->r2 == 0) {
        // 0x0025B604: nop
    
            goto L_0025B610;
    }
    // 0x0025B604: nop

    // 0x0025B608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B60C: lwc1        $f20, 0x7548($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7548);
L_0025B610:
    // 0x0025B610: lh          $a0, 0x30($s7)
    ctx->r4 = MEM_H(ctx->r23, 0X30);
    // 0x0025B614: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025B61C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025B620: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0025B624: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0025B628: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x0025B62C: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x0025B630: jal         0x002755B0
    // 0x0025B634: nop

    func_002755B0(rdram, ctx);
        goto after_7;
    // 0x0025B634: nop

    after_7:
    // 0x0025B638: sb          $zero, 0xCB($s1)
    MEM_B(0XCB, ctx->r17) = 0;
L_0025B63C:
    // 0x0025B63C: lbu         $v1, 0xC8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC8);
    // 0x0025B640: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B644: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0025B648: slti        $v0, $v0, 0xFF
    ctx->r2 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x0025B64C: bnel        $v0, $zero, L_0025B65C
    if (ctx->r2 != 0) {
        // 0x0025B650: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0025B65C;
    }
    goto skip_3;
    // 0x0025B650: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_3:
    // 0x0025B654: lbu         $v0, 0x7($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7);
    // 0x0025B658: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_0025B65C:
    // 0x0025B65C: sb          $v0, 0xC8($s1)
    MEM_B(0XC8, ctx->r17) = ctx->r2;
    // 0x0025B660: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B664: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B668: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B66C: beq         $v0, $zero, L_0025B6C0
    if (ctx->r2 == 0) {
        // 0x0025B670: nop
    
            goto L_0025B6C0;
    }
    // 0x0025B670: nop

    // 0x0025B674: jal         0x002113A4
    // 0x0025B678: nop

    func_002113A4(rdram, ctx);
        goto after_8;
    // 0x0025B678: nop

    after_8:
    // 0x0025B67C: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B680: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B684: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B688: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B68C: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025B690: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025B694: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B698: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B69C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B6A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B6A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B6A8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B6AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B6B0: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B6B4: beq         $v0, $zero, L_0025B6C0
    if (ctx->r2 == 0) {
        // 0x0025B6B8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_0025B6C0;
    }
    // 0x0025B6B8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0025B6BC: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
L_0025B6C0:
    // 0x0025B6C0: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B6C4: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0025B6C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B6CC: beq         $v0, $zero, L_0025B724
    if (ctx->r2 == 0) {
        // 0x0025B6D0: lui         $s0, 0xFC0F
        ctx->r16 = S32(0XFC0F << 16);
            goto L_0025B724;
    }
    // 0x0025B6D0: lui         $s0, 0xFC0F
    ctx->r16 = S32(0XFC0F << 16);
    // 0x0025B6D4: jal         0x002113A4
    // 0x0025B6D8: nop

    func_002113A4(rdram, ctx);
        goto after_9;
    // 0x0025B6D8: nop

    after_9:
    // 0x0025B6DC: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B6E0: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B6E4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B6E8: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B6EC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025B6F0: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025B6F4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B6F8: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B6FC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B700: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B704: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B708: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B70C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B710: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B714: beq         $v0, $zero, L_0025B724
    if (ctx->r2 == 0) {
        // 0x0025B718: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0025B724;
    }
    // 0x0025B718: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0025B71C: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
    // 0x0025B720: lui         $s0, 0xFC0F
    ctx->r16 = S32(0XFC0F << 16);
L_0025B724:
    // 0x0025B724: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B728: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x0025B72C: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0025B730: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B734: lw          $v1, 0xC($s5)
    ctx->r3 = MEM_W(ctx->r21, 0XC);
    // 0x0025B738: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B73C: beq         $fp, $zero, L_0025B7B0
    if (ctx->r30 == 0) {
        // 0x0025B740: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_0025B7B0;
    }
    // 0x0025B740: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B744: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B748: jal         0x00246918
    // 0x0025B74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_10;
    // 0x0025B74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0025B750: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B758: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x0025B75C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0025B760: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x0025B764: jal         0x0025B078
    // 0x0025B768: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    func_0025B078(rdram, ctx);
        goto after_11;
    // 0x0025B768: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    after_11:
    // 0x0025B76C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0025B770: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x0025B774: bne         $a2, $v0, L_0025B798
    if (ctx->r6 != ctx->r2) {
        // 0x0025B778: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B798;
    }
    // 0x0025B778: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B77C: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B780: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B784: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B788: beq         $v0, $zero, L_0025B798
    if (ctx->r2 == 0) {
        // 0x0025B78C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_0025B798;
    }
    // 0x0025B78C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B790: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025B794: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B798:
    // 0x0025B798: jal         0x00243414
    // 0x0025B79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00243414(rdram, ctx);
        goto after_12;
    // 0x0025B79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0025B7A0: jal         0x004089C8
    // 0x0025B7A4: nop

    func_004089C8(rdram, ctx);
        goto after_13;
    // 0x0025B7A4: nop

    after_13:
    // 0x0025B7A8: j           L_0025B9D4
    // 0x0025B7AC: nop

        goto L_0025B9D4;
    // 0x0025B7AC: nop

L_0025B7B0:
    // 0x0025B7B0: beq         $s2, $zero, L_0025B84C
    if (ctx->r18 == 0) {
        // 0x0025B7B4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B84C;
    }
    // 0x0025B7B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B7B8: jal         0x00246918
    // 0x0025B7BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_14;
    // 0x0025B7BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0025B7C0: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B7C4: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x0025B7C8: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B7CC: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025B9D4;
    }
    // 0x0025B7CC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025B7D0: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B7D4: nop
    
            goto L_0025B9D4;
    }
    // 0x0025B7D4: nop

    // 0x0025B7D8: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B7DC: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B7E0: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B7E0: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x0025B7E4: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B7E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B7EC: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B7F0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B7F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B7F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B7FC: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B800: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0025B804: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B808: jal         0x0025DF04
    // 0x0025B80C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_0025DF04(rdram, ctx);
        goto after_15;
    // 0x0025B80C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_15:
    // 0x0025B810: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0025B814: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x0025B818: beq         $s0, $s2, L_0025B9D4
    if (ctx->r16 == ctx->r18) {
        // 0x0025B81C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B81C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B820: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025B824: jal         0x00219F74
    // 0x0025B828: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00219F74(rdram, ctx);
        goto after_16;
    // 0x0025B828: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_16:
    // 0x0025B82C: beq         $v0, $s2, L_0025B9D4
    if (ctx->r2 == ctx->r18) {
        // 0x0025B830: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_0025B9D4;
    }
    // 0x0025B830: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B834: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025B838: sh          $s0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r16;
    // 0x0025B83C: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x0025B840: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x0025B844: j           L_0025B9D4
    // 0x0025B848: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
        goto L_0025B9D4;
    // 0x0025B848: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_0025B84C:
    // 0x0025B84C: lw          $v1, 0x10($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X10);
    // 0x0025B850: beq         $v1, $zero, L_0025B95C
    if (ctx->r3 == 0) {
        // 0x0025B854: nop
    
            goto L_0025B95C;
    }
    // 0x0025B854: nop

    // 0x0025B858: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0025B85C: addiu       $v0, $v0, -0x1C
    ctx->r2 = ADD32(ctx->r2, -0X1C);
    // 0x0025B860: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x0025B864: bne         $v0, $zero, L_0025B95C
    if (ctx->r2 != 0) {
        // 0x0025B868: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B95C;
    }
    // 0x0025B868: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B86C: lbu         $v1, 0x65($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X65);
    // 0x0025B870: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x0025B874: bne         $a0, $v0, L_0025B95C
    if (ctx->r4 != ctx->r2) {
        // 0x0025B878: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_0025B95C;
    }
    // 0x0025B878: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0025B87C: bne         $v0, $zero, L_0025B8F0
    if (ctx->r2 != 0) {
        // 0x0025B880: nop
    
            goto L_0025B8F0;
    }
    // 0x0025B880: nop

    // 0x0025B884: bne         $s6, $zero, L_0025B8A4
    if (ctx->r22 != 0) {
        // 0x0025B888: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B8A4;
    }
    // 0x0025B888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B88C: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B890: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B894: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025B898: bnel        $v0, $zero, L_0025B8DC
    if (ctx->r2 != 0) {
        // 0x0025B89C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B8DC;
    }
    goto skip_4;
    // 0x0025B89C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_4:
    // 0x0025B8A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025B8A4:
    // 0x0025B8A4: bne         $s6, $v0, L_0025B8C0
    if (ctx->r22 != ctx->r2) {
        // 0x0025B8A8: nop
    
            goto L_0025B8C0;
    }
    // 0x0025B8A8: nop

    // 0x0025B8AC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8B0: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B8B4: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025B8B8: bnel        $v0, $zero, L_0025B8DC
    if (ctx->r2 != 0) {
        // 0x0025B8BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B8DC;
    }
    goto skip_5;
    // 0x0025B8BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_5:
L_0025B8C0:
    // 0x0025B8C0: bne         $s6, $a0, L_0025B95C
    if (ctx->r22 != ctx->r4) {
        // 0x0025B8C4: nop
    
            goto L_0025B95C;
    }
    // 0x0025B8C4: nop

    // 0x0025B8C8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8CC: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B8D0: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025B8D4: beq         $v0, $zero, L_0025B95C
    if (ctx->r2 == 0) {
        // 0x0025B8D8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B95C;
    }
    // 0x0025B8D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B8DC:
    // 0x0025B8DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B8E0: jal         0x00243414
    // 0x0025B8E4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_00243414(rdram, ctx);
        goto after_17;
    // 0x0025B8E4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_17:
    // 0x0025B8E8: j           L_0025BA4C
    // 0x0025B8EC: nop

        goto L_0025BA4C;
    // 0x0025B8EC: nop

L_0025B8F0:
    // 0x0025B8F0: bne         $s6, $zero, L_0025B910
    if (ctx->r22 != 0) {
        // 0x0025B8F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B910;
    }
    // 0x0025B8F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B8F8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8FC: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B900: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025B904: bnel        $v0, $zero, L_0025B948
    if (ctx->r2 != 0) {
        // 0x0025B908: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B948;
    }
    goto skip_6;
    // 0x0025B908: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_6:
    // 0x0025B90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025B910:
    // 0x0025B910: bne         $s6, $v0, L_0025B92C
    if (ctx->r22 != ctx->r2) {
        // 0x0025B914: nop
    
            goto L_0025B92C;
    }
    // 0x0025B914: nop

    // 0x0025B918: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B91C: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B920: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025B924: bnel        $v0, $zero, L_0025B948
    if (ctx->r2 != 0) {
        // 0x0025B928: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B948;
    }
    goto skip_7;
    // 0x0025B928: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_7:
L_0025B92C:
    // 0x0025B92C: bne         $s6, $a0, L_0025B95C
    if (ctx->r22 != ctx->r4) {
        // 0x0025B930: nop
    
            goto L_0025B95C;
    }
    // 0x0025B930: nop

    // 0x0025B934: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B938: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B93C: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025B940: beq         $v0, $zero, L_0025B95C
    if (ctx->r2 == 0) {
        // 0x0025B944: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B95C;
    }
    // 0x0025B944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B948:
    // 0x0025B948: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B94C: jal         0x00243414
    // 0x0025B950: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    func_00243414(rdram, ctx);
        goto after_18;
    // 0x0025B950: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    after_18:
    // 0x0025B954: j           L_0025BA4C
    // 0x0025B958: nop

        goto L_0025BA4C;
    // 0x0025B958: nop

L_0025B95C:
    // 0x0025B95C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B960: beq         $v0, $zero, L_0025B990
    if (ctx->r2 == 0) {
        // 0x0025B964: nop
    
            goto L_0025B990;
    }
    // 0x0025B964: nop

    // 0x0025B968: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0025B96C: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x0025B970: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025B974: beq         $v0, $zero, L_0025B990
    if (ctx->r2 == 0) {
        // 0x0025B978: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B990;
    }
    // 0x0025B978: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B97C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B980: jal         0x00243414
    // 0x0025B984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_19;
    // 0x0025B984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_19:
    // 0x0025B988: j           L_0025B9D4
    // 0x0025B98C: nop

        goto L_0025B9D4;
    // 0x0025B98C: nop

L_0025B990:
    // 0x0025B990: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B994: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x0025B998: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B99C: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B99C: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x0025B9A0: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B9A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B9A8: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B9AC: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B9AC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025B9B0: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0025B9B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B9B8: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B9BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B9BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B9C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B9C4: jal         0x00243414
    // 0x0025B9C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00243414(rdram, ctx);
        goto after_20;
    // 0x0025B9C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_20:
    // 0x0025B9CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B9D0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_0025B9D4:
    // 0x0025B9D4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0025B9D8: beq         $t0, $zero, L_0025BA4C
    if (ctx->r8 == 0) {
        // 0x0025B9DC: nop
    
            goto L_0025BA4C;
    }
    // 0x0025B9DC: nop

    // 0x0025B9E0: beq         $s4, $zero, L_0025BA4C
    if (ctx->r20 == 0) {
        // 0x0025B9E4: nop
    
            goto L_0025BA4C;
    }
    // 0x0025B9E4: nop

    // 0x0025B9E8: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0025B9EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025B9F0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025B9F4: nop

    // 0x0025B9F8: bc1f        L_0025BA4C
    if (!c1cs) {
        // 0x0025B9FC: addiu       $a1, $s3, 0x4
        ctx->r5 = ADD32(ctx->r19, 0X4);
            goto L_0025BA4C;
    }
    // 0x0025B9FC: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    // 0x0025BA00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0025BA04: jal         0x0020EF2C
    // 0x0025BA08: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_21;
    // 0x0025BA08: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    after_21:
    // 0x0025BA0C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0025BA10: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0025BA14: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0025BA18: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0025BA1C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0025BA20: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0025BA24: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025BA28: jal         0x00298470
    // 0x0025BA2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_22;
    // 0x0025BA2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_22:
    // 0x0025BA30: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0025BA34: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025BA38: nop

    // 0x0025BA3C: bc1f        L_0025BA4C
    if (!c1cs) {
        // 0x0025BA40: nop
    
            goto L_0025BA4C;
    }
    // 0x0025BA40: nop

    // 0x0025BA44: jal         0x0020EAA0
    // 0x0025BA48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020EAA0(rdram, ctx);
        goto after_23;
    // 0x0025BA48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_23:
L_0025BA4C:
    // 0x0025BA4C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0025BA50: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0025BA54: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0025BA58: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0025BA5C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0025BA60: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0025BA64: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0025BA68: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0025BA6C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0025BA70: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0025BA74: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x0025BA78: jr          $ra
    // 0x0025BA7C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0025BA7C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0026EFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EFB8: addiu       $v0, $zero, 0x7CF
    ctx->r2 = ADD32(0, 0X7CF);
    // 0x0026EFBC: beq         $a0, $v0, L_0026EFF4
    if (ctx->r4 == ctx->r2) {
        // 0x0026EFC0: addiu       $v0, $zero, 0xBB7
        ctx->r2 = ADD32(0, 0XBB7);
            goto L_0026EFF4;
    }
    // 0x0026EFC0: addiu       $v0, $zero, 0xBB7
    ctx->r2 = ADD32(0, 0XBB7);
    // 0x0026EFC4: beq         $a0, $v0, L_0026EFF4
    if (ctx->r4 == ctx->r2) {
        // 0x0026EFC8: addiu       $v0, $zero, 0xF9F
        ctx->r2 = ADD32(0, 0XF9F);
            goto L_0026EFF4;
    }
    // 0x0026EFC8: addiu       $v0, $zero, 0xF9F
    ctx->r2 = ADD32(0, 0XF9F);
    // 0x0026EFCC: beq         $a0, $v0, L_0026EFF4
    if (ctx->r4 == ctx->r2) {
        // 0x0026EFD0: addiu       $v0, $zero, 0x1387
        ctx->r2 = ADD32(0, 0X1387);
            goto L_0026EFF4;
    }
    // 0x0026EFD0: addiu       $v0, $zero, 0x1387
    ctx->r2 = ADD32(0, 0X1387);
    // 0x0026EFD4: beq         $a0, $v0, L_0026EFF4
    if (ctx->r4 == ctx->r2) {
        // 0x0026EFD8: addiu       $v0, $zero, 0x176F
        ctx->r2 = ADD32(0, 0X176F);
            goto L_0026EFF4;
    }
    // 0x0026EFD8: addiu       $v0, $zero, 0x176F
    ctx->r2 = ADD32(0, 0X176F);
    // 0x0026EFDC: beq         $a0, $v0, L_0026EFF4
    if (ctx->r4 == ctx->r2) {
        // 0x0026EFE0: addiu       $v0, $zero, 0x1B57
        ctx->r2 = ADD32(0, 0X1B57);
            goto L_0026EFF4;
    }
    // 0x0026EFE0: addiu       $v0, $zero, 0x1B57
    ctx->r2 = ADD32(0, 0X1B57);
    // 0x0026EFE4: beq         $a0, $v0, L_0026EFF4
    if (ctx->r4 == ctx->r2) {
        // 0x0026EFE8: addiu       $v0, $zero, 0x63
        ctx->r2 = ADD32(0, 0X63);
            goto L_0026EFF4;
    }
    // 0x0026EFE8: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x0026EFEC: bne         $a0, $v0, L_0026EFFC
    if (ctx->r4 != ctx->r2) {
            // 0x0026EFF0: addiu       $v0, $a0, -0x3E8
    ctx->r2 = ADD32(ctx->r4, -0X3E8);
    func_0026EFFC(rdram, ctx);
    return;
    }
    // 0x0026EFF0: addiu       $v0, $a0, -0x3E8
    ctx->r2 = ADD32(ctx->r4, -0X3E8);
L_0026EFF4:
    // 0x0026EFF4: jr          $ra
    // 0x0026EFF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026EFF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0025612C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025612C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256130: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256134: jal         0x00251698
    // 0x00256138: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256138: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_0:
    // 0x0025613C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256140: jr          $ra
    // 0x00256144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238B2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238B34: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238B38: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00238B3C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238B40: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238B44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238B48: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00238B4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238B50: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x00238B54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00238B58: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00238B5C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00238B60: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x00238B64: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238B68: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238B6C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238B70: jal         0x00237AFC
    // 0x00238B74: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00238B74: nop

    after_0:
    // 0x00238B78: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238B7C: jr          $ra
    // 0x00238B80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238B80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029E010(uint8_t* rdram, recomp_context* ctx) {
    // __osRestoreInt: paired with func_0029DFF0 above.
    extern void __osRestoreInt_recomp(uint8_t* rdram, recomp_context* ctx);
    __osRestoreInt_recomp(rdram, ctx);
}
RECOMP_FUNC void func_00418660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418660: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418664: lb          $v1, -0x5501($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X5501);
    // 0x00418668: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x0041866C: beq         $v0, $zero, L_004186F4
    if (ctx->r2 == 0) {
        // 0x00418670: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004186F4;
    }
    // 0x00418670: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00418674: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418678: addu        $at, $at, $v0
    gpr jr_addend_00418680 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041867C: lw          $v0, 0xEF0($at)
    ctx->r2 = ADD32(ctx->r1, 0XEF0);
    // 0x00418680: jr          $v0
    // 0x00418684: nop

    switch (jr_addend_00418680 >> 2) {
        case 0: goto L_00418688; break;
        case 1: goto L_00418698; break;
        case 2: goto L_004186A8; break;
        case 3: goto L_004186B8; break;
        case 4: goto L_004186C8; break;
        case 5: goto L_004186D8; break;
        case 6: goto L_004186E8; break;
        default: switch_error(__func__, 0x00418680, 0x800C0EF0);
    }
    // 0x00418684: nop

L_00418688:
    // 0x00418688: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041868C: addiu       $v0, $v0, 0x5F3C
    ctx->r2 = ADD32(ctx->r2, 0X5F3C);
    // 0x00418690: j           L_004186F4
    // 0x00418694: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004186F4;
    // 0x00418694: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418698:
    // 0x00418698: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041869C: addiu       $v0, $v0, 0x61D8
    ctx->r2 = ADD32(ctx->r2, 0X61D8);
    // 0x004186A0: j           L_004186F4
    // 0x004186A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004186F4;
    // 0x004186A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004186A8:
    // 0x004186A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004186AC: addiu       $v0, $v0, 0x61F0
    ctx->r2 = ADD32(ctx->r2, 0X61F0);
    // 0x004186B0: j           L_004186F4
    // 0x004186B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004186F4;
    // 0x004186B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004186B8:
    // 0x004186B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004186BC: addiu       $v0, $v0, 0x6208
    ctx->r2 = ADD32(ctx->r2, 0X6208);
    // 0x004186C0: j           L_004186F4
    // 0x004186C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004186F4;
    // 0x004186C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004186C8:
    // 0x004186C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004186CC: addiu       $v0, $v0, 0x6220
    ctx->r2 = ADD32(ctx->r2, 0X6220);
    // 0x004186D0: j           L_004186F4
    // 0x004186D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004186F4;
    // 0x004186D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004186D8:
    // 0x004186D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004186DC: addiu       $v0, $v0, 0x6238
    ctx->r2 = ADD32(ctx->r2, 0X6238);
    // 0x004186E0: j           L_004186F4
    // 0x004186E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004186F4;
    // 0x004186E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004186E8:
    // 0x004186E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004186EC: addiu       $v0, $v0, 0x6250
    ctx->r2 = ADD32(ctx->r2, 0X6250);
    // 0x004186F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004186F4:
    // 0x004186F4: jr          $ra
    // 0x004186F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004186F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00268B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268B98: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x00268B9C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00268BA0: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00268BA4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00268BA8: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00268BAC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00268BB0: nop

    // 0x00268BB4: bc1fl       L_00268BBC
    if (!c1cs) {
        // 0x00268BB8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00268BBC;
    }
    goto skip_0;
    // 0x00268BB8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_00268BBC:
    // 0x00268BBC: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00268BC0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00268BC4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00268BC8: nop

    // 0x00268BCC: bc1fl       L_00268BD4
    if (!c1cs) {
        // 0x00268BD0: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00268BD4;
    }
    goto skip_1;
    // 0x00268BD0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_1:
L_00268BD4:
    // 0x00268BD4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00268BD8: jr          $ra
    // 0x00268BDC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    return;
    // 0x00268BDC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
;}
RECOMP_FUNC void func_0029ACE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029ACE0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0029ACE4: lui         $v0, 0xA440
    ctx->r2 = S32(0XA440 << 16);
    // 0x0029ACE8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x0029ACEC: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x0029ACF0: lw          $fp, 0x7AC4($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X7AC4);
    // 0x0029ACF4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029ACF8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0029ACFC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x0029AD00: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0029AD04: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0029AD08: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0029AD0C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0029AD10: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0029AD14: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0029AD18: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0029AD1C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029AD20: lw          $a0, 0x4($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X4);
    // 0x0029AD24: lw          $a3, 0x8($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X8);
    // 0x0029AD28: andi        $s7, $v0, 0x1
    ctx->r23 = ctx->r2 & 0X1;
    // 0x0029AD2C: jal         0x0029BF80
    // 0x0029AD30: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_0029BF80(rdram, ctx);
        goto after_0;
    // 0x0029AD30: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x0029AD34: sll         $v1, $s7, 2
    ctx->r3 = S32(ctx->r23 << 2);
    // 0x0029AD38: addu        $v1, $v1, $s7
    ctx->r3 = ADD32(ctx->r3, ctx->r23);
    // 0x0029AD3C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0029AD40: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0029AD44: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x0029AD48: lw          $a0, 0x28($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X28);
    // 0x0029AD4C: lhu         $v1, 0x0($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X0);
    // 0x0029AD50: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x0029AD54: beq         $v1, $zero, L_0029AD78
    if (ctx->r3 == 0) {
        // 0x0029AD58: addu        $a1, $v0, $a0
        ctx->r5 = ADD32(ctx->r2, ctx->r4);
            goto L_0029AD78;
    }
    // 0x0029AD58: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x0029AD5C: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x0029AD60: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x0029AD64: lw          $a0, 0x20($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X20);
    // 0x0029AD68: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0029AD6C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0029AD70: j           L_0029AD80
    // 0x0029AD74: sw          $a0, 0x20($fp)
    MEM_W(0X20, ctx->r30) = ctx->r4;
        goto L_0029AD80;
    // 0x0029AD74: sw          $a0, 0x20($fp)
    MEM_W(0X20, ctx->r30) = ctx->r4;
L_0029AD78:
    // 0x0029AD78: lw          $v0, 0x20($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X20);
    // 0x0029AD7C: sw          $v0, 0x20($fp)
    MEM_W(0X20, ctx->r30) = ctx->r2;
L_0029AD80:
    // 0x0029AD80: lhu         $v0, 0x0($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X0);
    // 0x0029AD84: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0029AD88: beq         $v0, $zero, L_0029AE34
    if (ctx->r2 == 0) {
        // 0x0029AD8C: sll         $v0, $s7, 2
        ctx->r2 = S32(ctx->r23 << 2);
            goto L_0029AE34;
    }
    // 0x0029AD8C: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x0029AD90: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x0029AD94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029AD98: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0029AD9C: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x0029ADA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0029ADA4: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0029ADA8: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0029ADAC: bgez        $v0, L_0029ADC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0029ADB0: addiu       $a0, $fp, 0x2C
        ctx->r4 = ADD32(ctx->r30, 0X2C);
            goto L_0029ADC0;
    }
    // 0x0029ADB0: addiu       $a0, $fp, 0x2C
    ctx->r4 = ADD32(ctx->r30, 0X2C);
    // 0x0029ADB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029ADB8: ldc1        $f0, -0x5730($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5730);
    // 0x0029ADBC: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0029ADC0:
    // 0x0029ADC0: lwc1        $f1, 0x24($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X24);
    // 0x0029ADC4: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x0029ADC8: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0029ADCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029ADD0: lwc1        $f1, -0x5728($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5728);
    // 0x0029ADD4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0029ADD8: nop

    // 0x0029ADDC: bc1tl       L_0029ADF4
    if (c1cs) {
        // 0x0029ADE0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0029ADF4;
    }
    goto skip_0;
    // 0x0029ADE0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0029ADE4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0029ADE8: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0029ADEC: j           L_0029AE08
    // 0x0029ADF0: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
        goto L_0029AE08;
    // 0x0029ADF0: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
L_0029ADF4:
    // 0x0029ADF4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0029ADF8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0029ADFC: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0029AE00: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029AE04: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
L_0029AE08:
    // 0x0029AE08: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x0029AE0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029AE10: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0029AE14: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0029AE18: addiu       $a0, $zero, -0x1000
    ctx->r4 = ADD32(0, -0X1000);
    // 0x0029AE1C: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x0029AE20: lw          $v1, 0x2C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X2C);
    // 0x0029AE24: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0029AE28: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029AE2C: j           L_0029AE48
    // 0x0029AE30: sw          $v1, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->r3;
        goto L_0029AE48;
    // 0x0029AE30: sw          $v1, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->r3;
L_0029AE34:
    // 0x0029AE34: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x0029AE38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029AE3C: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0029AE40: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x0029AE44: sw          $v0, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->r2;
L_0029AE48:
    // 0x0029AE48: lhu         $v1, 0x0($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X0);
    // 0x0029AE4C: lw          $a2, 0x1C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1C);
    // 0x0029AE50: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x0029AE54: beq         $v0, $zero, L_0029AE60
    if (ctx->r2 == 0) {
        // 0x0029AE58: sw          $a2, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r6;
            goto L_0029AE60;
    }
    // 0x0029AE58: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x0029AE5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0029AE60:
    // 0x0029AE60: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x0029AE64: beq         $v0, $zero, L_0029AE84
    if (ctx->r2 == 0) {
        // 0x0029AE68: nop
    
            goto L_0029AE84;
    }
    // 0x0029AE68: nop

    // 0x0029AE6C: lw          $a0, 0x4($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X4);
    // 0x0029AE70: sw          $zero, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = 0;
    // 0x0029AE74: jal         0x0029BF80
    // 0x0029AE78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_0029BF80(rdram, ctx);
        goto after_1;
    // 0x0029AE78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x0029AE7C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0029AE80: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_0029AE84:
    // 0x0029AE84: lhu         $v0, 0x0($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X0);
    // 0x0029AE88: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0029AE8C: beq         $v0, $zero, L_0029AEB8
    if (ctx->r2 == 0) {
        // 0x0029AE90: lui         $v1, 0x3FF
        ctx->r3 = S32(0X3FF << 16);
            goto L_0029AEB8;
    }
    // 0x0029AE90: lui         $v1, 0x3FF
    ctx->r3 = S32(0X3FF << 16);
    // 0x0029AE94: lhu         $v0, 0x28($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X28);
    // 0x0029AE98: lw          $a0, 0x4($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X4);
    // 0x0029AE9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0029AEA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029AEA4: sw          $v0, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->r2;
    // 0x0029AEA8: jal         0x0029BF80
    // 0x0029AEAC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_0029BF80(rdram, ctx);
        goto after_2;
    // 0x0029AEAC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x0029AEB0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0029AEB4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_0029AEB8:
    // 0x0029AEB8: lui         $v1, 0xA440
    ctx->r3 = S32(0XA440 << 16);
    // 0x0029AEBC: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x0029AEC0: lui         $t0, 0xA440
    ctx->r8 = S32(0XA440 << 16);
    // 0x0029AEC4: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x0029AEC8: lui         $s6, 0xA440
    ctx->r22 = S32(0XA440 << 16);
    // 0x0029AECC: ori         $s6, $s6, 0x14
    ctx->r22 = ctx->r22 | 0X14;
    // 0x0029AED0: lui         $s5, 0xA440
    ctx->r21 = S32(0XA440 << 16);
    // 0x0029AED4: ori         $s5, $s5, 0x18
    ctx->r21 = ctx->r21 | 0X18;
    // 0x0029AED8: lui         $s4, 0xA440
    ctx->r20 = S32(0XA440 << 16);
    // 0x0029AEDC: ori         $s4, $s4, 0x1C
    ctx->r20 = ctx->r20 | 0X1C;
    // 0x0029AEE0: lui         $s3, 0xA440
    ctx->r19 = S32(0XA440 << 16);
    // 0x0029AEE4: ori         $s3, $s3, 0x20
    ctx->r19 = ctx->r19 | 0X20;
    // 0x0029AEE8: lui         $s2, 0xA440
    ctx->r18 = S32(0XA440 << 16);
    // 0x0029AEEC: ori         $s2, $s2, 0x24
    ctx->r18 = ctx->r18 | 0X24;
    // 0x0029AEF0: lui         $s1, 0xA440
    ctx->r17 = S32(0XA440 << 16);
    // 0x0029AEF4: ori         $s1, $s1, 0x28
    ctx->r17 = ctx->r17 | 0X28;
    // 0x0029AEF8: lui         $s0, 0xA440
    ctx->r16 = S32(0XA440 << 16);
    // 0x0029AEFC: ori         $s0, $s0, 0x2C
    ctx->r16 = ctx->r16 | 0X2C;
    // 0x0029AF00: lui         $t7, 0xA440
    ctx->r15 = S32(0XA440 << 16);
    // 0x0029AF04: ori         $t7, $t7, 0xC
    ctx->r15 = ctx->r15 | 0XC;
    // 0x0029AF08: lui         $t6, 0xA440
    ctx->r14 = S32(0XA440 << 16);
    // 0x0029AF0C: ori         $t6, $t6, 0x30
    ctx->r14 = ctx->r14 | 0X30;
    // 0x0029AF10: addu        $t8, $fp, $zero
    ctx->r24 = ADD32(ctx->r30, 0);
    // 0x0029AF14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029AF18: addiu       $v0, $v0, 0x7AC0
    ctx->r2 = ADD32(ctx->r2, 0X7AC0);
    // 0x0029AF1C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0029AF20: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x0029AF24: addiu       $t1, $t8, 0x30
    ctx->r9 = ADD32(ctx->r24, 0X30);
    // 0x0029AF28: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0029AF2C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0029AF30: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x0029AF34: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x0029AF38: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x0029AF3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029AF40: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0029AF44: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x0029AF48: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x0029AF4C: lw          $a1, 0x10($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X10);
    // 0x0029AF50: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x0029AF54: lw          $a3, 0x18($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X18);
    // 0x0029AF58: lw          $a2, 0x30($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X30);
    // 0x0029AF5C: lw          $t0, 0x34($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X34);
    // 0x0029AF60: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x0029AF64: lw          $t2, 0x20($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X20);
    // 0x0029AF68: lw          $t3, 0x2C($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X2C);
    // 0x0029AF6C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0029AF70: lui         $t5, 0xA440
    ctx->r13 = S32(0XA440 << 16);
    // 0x0029AF74: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x0029AF78: sw          $a0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r4;
    // 0x0029AF7C: sw          $a1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r5;
    // 0x0029AF80: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x0029AF84: sw          $a3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r7;
    // 0x0029AF88: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x0029AF8C: ori         $t5, $t5, 0x34
    ctx->r13 = ctx->r13 | 0X34;
    // 0x0029AF90: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x0029AF94: sw          $a2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r6;
    // 0x0029AF98: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x0029AF9C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x0029AFA0: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x0029AFA4: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x0029AFA8: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x0029AFAC: lui         $v0, 0xA440
    ctx->r2 = S32(0XA440 << 16);
    // 0x0029AFB0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0029AFB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029AFB8: sw          $t4, 0x7AC4($at)
    MEM_W(0X7AC4, ctx->r1) = ctx->r12;
L_0029AFBC:
    // 0x0029AFBC: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x0029AFC0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x0029AFC4: lw          $t1, 0x8($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X8);
    // 0x0029AFC8: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x0029AFCC: sw          $a2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r6;
    // 0x0029AFD0: sw          $t0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r8;
    // 0x0029AFD4: sw          $t1, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r9;
    // 0x0029AFD8: sw          $t9, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r25;
    // 0x0029AFDC: addiu       $t8, $t8, 0x10
    ctx->r24 = ADD32(ctx->r24, 0X10);
    // 0x0029AFE0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0029AFE4: bne         $t8, $a2, L_0029AFBC
    if (ctx->r24 != ctx->r6) {
        // 0x0029AFE8: addiu       $t4, $t4, 0x10
        ctx->r12 = ADD32(ctx->r12, 0X10);
            goto L_0029AFBC;
    }
    // 0x0029AFE8: addiu       $t4, $t4, 0x10
    ctx->r12 = ADD32(ctx->r12, 0X10);
    // 0x0029AFEC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0029AFF0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x0029AFF4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x0029AFF8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0029AFFC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0029B000: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0029B004: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0029B008: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0029B00C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0029B010: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0029B014: jr          $ra
    // 0x0029B018: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0029B018: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_002847D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002847D0: jr          $ra
    // 0x002847D4: nop

    return;
    // 0x002847D4: nop

;}
RECOMP_FUNC void func_0045A6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421708:
    // 0x0045A6C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_00421738:
    // 0x0045A6C4: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
L_00421770:
    // 0x0045A6C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045A6CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045A6D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045A6D4: bne         $v0, $zero, L_0045A788
    if (ctx->r2 != 0) {
        // 0x0045A6D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045A788;
    }
    // 0x0045A6D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045A6DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A6E0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A6E4: beq         $v0, $zero, L_0045A6FC
    if (ctx->r2 == 0) {
        // 0x0045A6E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045A6FC;
    }
    // 0x0045A6E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045A6EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045A6F0: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0045A6F4: j           L_00421708
    // 0x0045A6F8: nop

    entry_00421708(rdram, ctx);
    return;
    // 0x0045A6F8: nop

L_0045A6FC:
    // 0x0045A6FC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045A700: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x0045A704: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045A708: beq         $v1, $v0, L_0045A788
    if (ctx->r3 == ctx->r2) {
        // 0x0045A70C: nop
    
            goto L_0045A788;
    }
    // 0x0045A70C: nop

    // 0x0045A710: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A714: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A718: beq         $v0, $zero, L_0045A730
    if (ctx->r2 == 0) {
        // 0x0045A71C: nop
    
            goto L_0045A730;
    }
    // 0x0045A71C: nop

    // 0x0045A720: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045A724: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045A728: j           L_00421738
    // 0x0045A72C: nop

    entry_00421738(rdram, ctx);
    return;
    // 0x0045A72C: nop

L_0045A730:
    // 0x0045A730: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045A734: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045A738: jal         0x0028591C
    // 0x0045A73C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0045A73C: nop

    after_0:
    // 0x0045A740: beq         $v0, $zero, L_0045A788
    if (ctx->r2 == 0) {
        // 0x0045A744: nop
    
            goto L_0045A788;
    }
    // 0x0045A744: nop

    // 0x0045A748: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A74C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A750: beq         $v0, $zero, L_0045A768
    if (ctx->r2 == 0) {
        // 0x0045A754: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045A768;
    }
    // 0x0045A754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045A758: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045A75C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045A760: j           L_00421770
    // 0x0045A764: nop

    entry_00421770(rdram, ctx);
    return;
    // 0x0045A764: nop

L_0045A768:
    // 0x0045A768: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045A76C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045A770: jal         0x0041DCB0
    // 0x0045A774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_1;
    // 0x0045A774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0045A778: beq         $v0, $zero, L_0045A788
    if (ctx->r2 == 0) {
        // 0x0045A77C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045A788;
    }
    // 0x0045A77C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A784: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_0045A788:
    // 0x0045A788: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A78C: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0045A790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045A794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045A798: jr          $ra
    // 0x0045A79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045A79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042F1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F1C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F1C8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0042F1CC: addiu       $v1, $v1, 0x56B0
    ctx->r3 = ADD32(ctx->r3, 0X56B0);
    // 0x0042F1D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042F1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042F1D8: lwc1        $f0, 0x1C0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C0);
    // 0x0042F1DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042F1E0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0042F1E4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0042F1E8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0042F1EC: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x0042F1F0: bne         $v0, $zero, L_0042F248
    if (ctx->r2 != 0) {
        // 0x0042F1F4: swc1        $f0, 0x1C0($v1)
        MEM_W(0X1C0, ctx->r3) = ctx->f0.u32l;
            goto L_0042F248;
    }
    // 0x0042F1F4: swc1        $f0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->f0.u32l;
    // 0x0042F1F8: lw          $v0, 0x1BC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1BC);
    // 0x0042F1FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0042F200: blez        $v0, L_0042F218
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042F204: sw          $v0, 0x1BC($v1)
        MEM_W(0X1BC, ctx->r3) = ctx->r2;
            goto L_0042F218;
    }
    // 0x0042F204: sw          $v0, 0x1BC($v1)
    MEM_W(0X1BC, ctx->r3) = ctx->r2;
    // 0x0042F208: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042F20C: lw          $v0, 0x5D2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D2C);
    // 0x0042F210: beq         $v0, $zero, L_0042F248
    if (ctx->r2 == 0) {
        // 0x0042F214: nop
    
            goto L_0042F248;
    }
    // 0x0042F214: nop

L_0042F218:
    // 0x0042F218: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0042F21C: addiu       $s0, $s0, 0x6CB0
    ctx->r16 = ADD32(ctx->r16, 0X6CB0);
    // 0x0042F220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042F224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042F228: jal         0x00430330
    // 0x0042F22C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    func_00430330(rdram, ctx);
        goto after_0;
    // 0x0042F22C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    after_0:
    // 0x0042F230: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042F234: lw          $v0, 0x5D2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D2C);
    // 0x0042F238: beq         $v0, $zero, L_0042F248
    if (ctx->r2 == 0) {
        // 0x0042F23C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042F248;
    }
    // 0x0042F23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042F240: jal         0x00288C5C
    // 0x0042F244: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_00288C5C(rdram, ctx);
        goto after_1;
    // 0x0042F244: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
L_0042F248:
    // 0x0042F248: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0042F24C: addiu       $a2, $a2, 0x56B0
    ctx->r6 = ADD32(ctx->r6, 0X56B0);
    // 0x0042F250: lw          $v0, 0x1B4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1B4);
    // 0x0042F254: blez        $v0, L_0042F304
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042F258: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0042F304;
    }
    // 0x0042F258: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042F25C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0042F260: lw          $a3, 0x6D20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D20);
    // 0x0042F264: lui         $t3, 0x1234
    ctx->r11 = S32(0X1234 << 16);
    // 0x0042F268: ori         $t3, $t3, 0x5678
    ctx->r11 = ctx->r11 | 0X5678;
    // 0x0042F26C: lui         $t2, 0x8765
    ctx->r10 = S32(0X8765 << 16);
    // 0x0042F270: ori         $t2, $t2, 0x4321
    ctx->r10 = ctx->r10 | 0X4321;
    // 0x0042F274: lui         $t1, 0x1234
    ctx->r9 = S32(0X1234 << 16);
    // 0x0042F278: ori         $t1, $t1, 0x8765
    ctx->r9 = ctx->r9 | 0X8765;
    // 0x0042F27C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x0042F280: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_0042F284:
    // 0x0042F284: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0042F288: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F28C: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F290: nop

    // 0x0042F294: nop

    // 0x0042F298: mult        $t4, $t3
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F29C: lw          $v1, 0x1C4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C4);
    // 0x0042F2A0: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F2A4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F2A8: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x0042F2AC: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x0042F2B0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F2B4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F2B8: nop

    // 0x0042F2BC: nop

    // 0x0042F2C0: mult        $t4, $t2
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F2C4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F2C8: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F2CC: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x0042F2D0: lw          $v0, 0x114($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X114);
    // 0x0042F2D4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F2D8: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F2DC: nop

    // 0x0042F2E0: nop

    // 0x0042F2E4: mult        $t4, $t1
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F2E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042F2EC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x0042F2F0: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042F2F4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F2F8: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F2FC: bne         $v0, $zero, L_0042F284
    if (ctx->r2 != 0) {
        // 0x0042F300: sw          $v1, 0x1C4($a2)
        MEM_W(0X1C4, ctx->r6) = ctx->r3;
            goto L_0042F284;
    }
    // 0x0042F300: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
L_0042F304:
    // 0x0042F304: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042F308: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0042F30C: lw          $v0, 0x194($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X194);
    // 0x0042F310: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F314: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F318: lui         $v0, 0x8765
    ctx->r2 = S32(0X8765 << 16);
    // 0x0042F31C: ori         $v0, $v0, 0x1234
    ctx->r2 = ctx->r2 | 0X1234;
    // 0x0042F320: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F324: lw          $v0, 0x1C4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C4);
    // 0x0042F328: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F32C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x0042F330: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
    // 0x0042F334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042F338: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042F33C: jr          $ra
    // 0x0042F340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041C798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C798: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041C79C: lwc1        $f0, 0x930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X930);
    // 0x0041C7A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041C7A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0041C7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041C7AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041C7B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041C7B4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0041C7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041C7BC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0041C7C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041C7C4: swc1        $f0, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->f0.u32l;
    // 0x0041C7C8: bc1f        L_0041C7D8
    if (!c1cs) {
        // 0x0041C7CC: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0041C7D8;
    }
    // 0x0041C7CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041C7D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041C7D4: swc1        $f1, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_0041C7D8:
    // 0x0041C7D8: jal         0x00266B80
    // 0x0041C7DC: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0041C7DC: nop

    after_0:
    // 0x0041C7E0: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0041C7E4: beq         $v0, $v1, L_0041C7F8
    if (ctx->r2 == ctx->r3) {
        // 0x0041C7E8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041C7F8;
    }
    // 0x0041C7E8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041C7EC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0041C7F0: j           L_0041C808
    // 0x0041C7F4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041C808;
    // 0x0041C7F4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041C7F8:
    // 0x0041C7F8: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041C7FC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0041C800: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041C804: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041C808:
    // 0x0041C808: jal         0x004245E0
    // 0x0041C80C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_004245E0(rdram, ctx);
        goto after_1;
    // 0x0041C80C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x0041C810: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041C814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041C818: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C81C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C820: jr          $ra
    // 0x0041C824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041C824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040B0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B0B0: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x0040B0B4: sw          $s3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r19;
    // 0x0040B0B8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0040B0BC: sw          $s2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r18;
    // 0x0040B0C0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0040B0C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B0C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B0CC: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
    // 0x0040B0D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0040B0D4: sw          $ra, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r31;
    // 0x0040B0D8: sw          $s1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r17;
    // 0x0040B0DC: jal         0x00246108
    // 0x0040B0E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B0E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0040B0E4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0040B0E8: beq         $v0, $zero, L_0040B11C
    if (ctx->r2 == 0) {
        // 0x0040B0EC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0040B11C;
    }
    // 0x0040B0EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040B0F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040B0F4: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x0040B0F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B0FC: jal         0x00246108
    // 0x0040B100: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x0040B100: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x0040B104: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040B108: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B10C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B110: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B114: jal         0x00245BAC
    // 0x0040B118: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x0040B118: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
L_0040B11C:
    // 0x0040B11C: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0040B120: beq         $v0, $zero, L_0040B164
    if (ctx->r2 == 0) {
        // 0x0040B124: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0040B164;
    }
    // 0x0040B124: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0040B128: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040B12C: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x0040B130: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0040B134:
    // 0x0040B134: lw          $a0, 0x630($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X630);
    // 0x0040B138: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0040B13C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0040B140: jal         0x00243414
    // 0x0040B144: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0040B144: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_3:
    // 0x0040B148: slti        $v0, $s1, 0x6
    ctx->r2 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x0040B14C: bne         $v0, $zero, L_0040B134
    if (ctx->r2 != 0) {
        // 0x0040B150: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0040B134;
    }
    // 0x0040B150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040B154: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040B158: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040B15C: jal         0x00243414
    // 0x0040B160: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0040B160: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
L_0040B164:
    // 0x0040B164: lw          $ra, 0x138($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X138);
    // 0x0040B168: lw          $s3, 0x134($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X134);
    // 0x0040B16C: lw          $s2, 0x130($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X130);
    // 0x0040B170: lw          $s1, 0x12C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X12C);
    // 0x0040B174: lw          $s0, 0x128($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X128);
    // 0x0040B178: jr          $ra
    // 0x0040B17C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x0040B17C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_0029BFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00281D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281D1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00281D20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281D24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00281D28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00281D2C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00281D30: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x00281D34: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x00281D38: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00281D3C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00281D40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00281D44: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00281D48: lw          $a1, 0x58($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X58);
    // 0x00281D4C: jal         0x0022425C
    // 0x00281D50: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00281D50: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    after_0:
    // 0x00281D54: bne         $v0, $zero, L_00281D6C
    if (ctx->r2 != 0) {
        // 0x00281D58: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_00281D6C;
    }
    // 0x00281D58: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00281D5C: swc1        $f21, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
    // 0x00281D60: swc1        $f21, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
    // 0x00281D64: j           L_00281E28
    // 0x00281D68: swc1        $f21, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
        goto L_00281E28;
    // 0x00281D68: swc1        $f21, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
L_00281D6C:
    // 0x00281D6C: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x00281D70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00281D74: beq         $v0, $zero, L_00281D8C
    if (ctx->r2 == 0) {
        // 0x00281D78: nop
    
            goto L_00281D8C;
    }
    // 0x00281D78: nop

    // 0x00281D7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281D80: lwc1        $f20, -0x63C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X63C8);
    // 0x00281D84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281D88: lwc1        $f21, -0x63C4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X63C4);
L_00281D8C:
    // 0x00281D8C: lwc1        $f1, 0xE8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XE8);
    // 0x00281D90: sub.s       $f0, $f20, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00281D94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281D98: lwc1        $f2, -0x63C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X63C0);
    // 0x00281D9C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00281DA0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00281DA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281DA8: lwc1        $f20, -0x63BC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X63BC);
    // 0x00281DAC: swc1        $f1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281DB0: mov.s       $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    ctx->f14.fl = ctx->f1.fl;
    // 0x00281DB4: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x00281DB8: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00281DBC: nop

    // 0x00281DC0: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x00281DC4: lwc1        $f1, 0xEC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XEC);
    // 0x00281DC8: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x00281DCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281DD0: lwc1        $f2, -0x63B8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X63B8);
    // 0x00281DD4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00281DD8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00281DDC: jal         0x002119FC
    // 0x00281DE0: swc1        $f1, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00281DE0: swc1        $f1, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x00281DE4: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00281DE8: lwc1        $f0, 0xEC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x00281DEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281DF0: lwc1        $f14, -0x63B4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X63B4);
    // 0x00281DF4: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x00281DF8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00281DFC: jal         0x002119FC
    // 0x00281E00: nop

    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00281E00: nop

    after_2:
    // 0x00281E04: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x00281E08: lwc1        $f14, 0xE8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x00281E0C: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x00281E10: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00281E14: nop

    // 0x00281E18: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x00281E1C: jal         0x002119FC
    // 0x00281E20: nop

    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00281E20: nop

    after_3:
    // 0x00281E24: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_00281E28:
    // 0x00281E28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00281E2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281E30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281E34: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00281E38: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00281E3C: jr          $ra
    // 0x00281E40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00281E40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00288D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288D80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288D84: lwc1        $f0, -0x621C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X621C);
    // 0x00288D88: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00288D8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288D90: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288D94: lwc1        $f1, 0x3FD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FD0);
    // 0x00288D98: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00288D9C: nop

    // 0x00288DA0: bc1t        L_00288DB0
    if (c1cs) {
            // 0x00288DA4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    func_00288DB0(rdram, ctx);
    return;
    }
    // 0x00288DA4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00288DA8: jr          $ra
    // 0x00288DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00288DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00289108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289108: jr          $ra
    // 0x0028910C: nop

    return;
    // 0x0028910C: nop

;}
RECOMP_FUNC void func_0043E958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405AA8:
    // 0x0043E958: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x0043E95C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0043E960: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0043E964: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x0043E968: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0043E96C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0043E970: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0043E974: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043E978: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043E97C: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x0043E980: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0043E984: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x0043E988: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0043E98C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E990: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x0043E994: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0043E998: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043E99C: jal         0x00246108
    // 0x0043E9A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0043E9A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x0043E9A4: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x0043E9A8: ori         $a0, $a0, 0x7FFF
    ctx->r4 = ctx->r4 | 0X7FFF;
    // 0x0043E9AC: addiu       $a1, $zero, 0x4B00
    ctx->r5 = ADD32(0, 0X4B00);
    // 0x0043E9B0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043E9B4: addiu       $s1, $s1, -0x9F8
    ctx->r17 = ADD32(ctx->r17, -0X9F8);
    // 0x0043E9B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043E9BC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0043E9C0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0043E9C4: bne         $v1, $zero, L_0043E9D0
    if (ctx->r3 != 0) {
        // 0x0043E9C8: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0043E9D0;
    }
    // 0x0043E9C8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043E9CC: addiu       $a1, $zero, 0x2580
    ctx->r5 = ADD32(0, 0X2580);
L_0043E9D0:
    // 0x0043E9D0: lw          $v0, 0x3E4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3E4);
    // 0x0043E9D4: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0043E9D8: bne         $v0, $zero, L_0043EA1C
    if (ctx->r2 != 0) {
        // 0x0043E9DC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043EA1C;
    }
    // 0x0043E9DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043E9E0: jal         0x00246918
    // 0x0043E9E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00246918(rdram, ctx);
        goto after_1;
    // 0x0043E9E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0043E9E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043E9EC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0043E9F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0043E9F4: lw          $v1, 0x3C0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C0);
    // 0x0043E9F8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0043E9FC: sllv        $v1, $s4, $v1
    ctx->r3 = S32(ctx->r20 << (ctx->r3 & 31));
    // 0x0043EA00: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0043EA04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0043EA08: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x0043EA0C: jal         0x00243414
    // 0x0043EA10: sb          $zero, 0x3C9($s1)
    MEM_B(0X3C9, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0043EA10: sb          $zero, 0x3C9($s1)
    MEM_B(0X3C9, ctx->r17) = 0;
    after_2:
    // 0x0043EA14: j           L_00405AA8
    // 0x0043EA18: nop

    entry_00405AA8(rdram, ctx);
    return;
    // 0x0043EA18: nop

L_0043EA1C:
    // 0x0043EA1C: lwc1        $f1, 0x3E8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X3E8);
    // 0x0043EA20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043EA24: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043EA28: nop

    // 0x0043EA2C: bc1f        L_0043EA98
    if (!c1cs) {
        // 0x0043EA30: nop
    
            goto L_0043EA98;
    }
    // 0x0043EA30: nop

    // 0x0043EA34: jal         0x00246918
    // 0x0043EA38: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00246918(rdram, ctx);
        goto after_3;
    // 0x0043EA38: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0043EA3C: lw          $v0, 0x3C0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C0);
    // 0x0043EA40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043EA44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EA48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0043EA4C: lw          $v1, -0x658($at)
    ctx->r3 = MEM_W(ctx->r1, -0X658);
    // 0x0043EA50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043EA54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043EA58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0043EA5C: sw          $v1, -0x678($at)
    MEM_W(-0X678, ctx->r1) = ctx->r3;
    // 0x0043EA60: lw          $v1, 0x3C0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C0);
    // 0x0043EA64: lw          $v0, 0x3C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C4);
    // 0x0043EA68: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0043EA6C: sb          $zero, 0x3C9($s1)
    MEM_B(0X3C9, ctx->r17) = 0;
    // 0x0043EA70: sllv        $v1, $s4, $v1
    ctx->r3 = S32(ctx->r20 << (ctx->r3 & 31));
    // 0x0043EA74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0043EA78: sw          $v0, 0x3C4($s1)
    MEM_W(0X3C4, ctx->r17) = ctx->r2;
    // 0x0043EA7C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0043EA80: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0043EA84: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0043EA88: jal         0x00243414
    // 0x0043EA8C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0043EA8C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    after_4:
    // 0x0043EA90: j           L_00405AA8
    // 0x0043EA94: nop

    entry_00405AA8(rdram, ctx);
    return;
    // 0x0043EA94: nop

L_0043EA98:
    // 0x0043EA98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043EA9C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043EAA0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043EAA4: swc1        $f0, 0x3E8($s1)
    MEM_W(0X3E8, ctx->r17) = ctx->f0.u32l;
    // 0x0043EAA8: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x0043EAAC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x0043EAB0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x0043EAB4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0043EAB8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0043EABC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0043EAC0: jr          $ra
    // 0x0043EAC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x0043EAC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00235F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235F8C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00235F90: lw          $v1, 0x2580($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X2580);
    // 0x00235F94: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00235F98: bne         $v0, $zero, L_00235FBC
    if (ctx->r2 != 0) {
            // 0x00235F9C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    func_00235FBC(rdram, ctx);
    return;
    }
    // 0x00235F9C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x00235FA0: lw          $v0, 0x2584($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X2584);
    // 0x00235FA4: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
    // 0x00235FA8: sw          $v1, 0x2580($a2)
    MEM_W(0X2580, ctx->r6) = ctx->r3;
    // 0x00235FAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00235FB0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00235FB4: jr          $ra
    // 0x00235FB8: sw          $v1, 0x2584($a2)
    MEM_W(0X2584, ctx->r6) = ctx->r3;
    return;
    // 0x00235FB8: sw          $v1, 0x2584($a2)
    MEM_W(0X2584, ctx->r6) = ctx->r3;
;}
RECOMP_FUNC void func_0041D2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D2C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041D2C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041D2CC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0041D2D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041D2D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041D2D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041D2DC: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x0041D2E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041D2E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041D2E8: jal         0x0025340C
    // 0x0041D2EC: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041D2EC: nop

    after_0:
    // 0x0041D2F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0041D2F4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x0041D2F8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0041D2FC: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
    // 0x0041D300: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D304: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D308: lwc1        $f1, 0x1FB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1FB4);
    // 0x0041D30C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041D310: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0041D314: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0041D318: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D31C: lwc1        $f1, 0x1348($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1348);
    // 0x0041D320: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041D324: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D328: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D32C: swc1        $f0, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = ctx->f0.u32l;
    // 0x0041D330: bc1f        L_0041D348
    if (!c1cs) {
        // 0x0041D334: nop
    
            goto L_0041D348;
    }
    // 0x0041D334: nop

    // 0x0041D338: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041D33C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D340: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D344: swc1        $f0, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = ctx->f0.u32l;
L_0041D348:
    // 0x0041D348: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x0041D34C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041D350: bne         $v1, $v0, L_0041D3F8
    if (ctx->r3 != ctx->r2) {
        // 0x0041D354: nop
    
            goto L_0041D3F8;
    }
    // 0x0041D354: nop

    // 0x0041D358: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x0041D35C: jal         0x00285628
    // 0x0041D360: nop

    func_00285628(rdram, ctx);
        goto after_1;
    // 0x0041D360: nop

    after_1:
    // 0x0041D364: beq         $v0, $zero, L_0041D3A0
    if (ctx->r2 == 0) {
        // 0x0041D368: nop
    
            goto L_0041D3A0;
    }
    // 0x0041D368: nop

    // 0x0041D36C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D370: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D374: lw          $v0, 0x1FB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D378: blez        $v0, L_0041D3A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041D37C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0041D3A0;
    }
    // 0x0041D37C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0041D380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D384: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D388: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D38C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D390: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D394: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D398: j           L_0041D3F8
    // 0x0041D39C: nop

        goto L_0041D3F8;
    // 0x0041D39C: nop

L_0041D3A0:
    // 0x0041D3A0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x0041D3A4: jal         0x00285670
    // 0x0041D3A8: nop

    func_00285670(rdram, ctx);
        goto after_2;
    // 0x0041D3A8: nop

    after_2:
    // 0x0041D3AC: beq         $v0, $zero, L_0041D3F8
    if (ctx->r2 == 0) {
        // 0x0041D3B0: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_0041D3F8;
    }
    // 0x0041D3B0: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x0041D3B4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0041D3B8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x0041D3BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3C0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3C4: lw          $a0, 0x1FB0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D3C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3D0: lw          $v0, 0x1FB8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1FB8);
    // 0x0041D3D4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041D3D8: beq         $v0, $zero, L_0041D3F8
    if (ctx->r2 == 0) {
        // 0x0041D3DC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_0041D3F8;
    }
    // 0x0041D3DC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0041D3E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3E4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3E8: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D3EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3F4: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
L_0041D3F8:
    // 0x0041D3F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041D3FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041D400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041D404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D408: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041D40C: jr          $ra
    // 0x0041D410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041D410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00460054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460054: addiu       $v0, $a0, -0x61
    ctx->r2 = ADD32(ctx->r4, -0X61);
    // 0x00460058: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x0046005C: bnel        $v0, $zero, L_00460064
    if (ctx->r2 != 0) {
        // 0x00460060: addiu       $a0, $a0, -0x20
        ctx->r4 = ADD32(ctx->r4, -0X20);
            goto L_00460064;
    }
    goto skip_0;
    // 0x00460060: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    skip_0:
L_00460064:
    // 0x00460064: jr          $ra
    // 0x00460068: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00460068: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
