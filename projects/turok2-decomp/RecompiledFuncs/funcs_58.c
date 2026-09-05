#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0044BE98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BE98: addu        $v0, $v1, $a3
    ctx->r2 = ADD32(ctx->r3, ctx->r7);
    // 0x0044BE9C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0044BEA0: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x0044BEA4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0044BEA8: jr          $ra
    // 0x0044BEAC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    return;
    // 0x0044BEAC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_0040BD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BD10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040BD14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040BD18: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x0040BD1C: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x0040BD20: beq         $s0, $zero, L_0040BD50
    if (ctx->r16 == 0) {
        // 0x0040BD24: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0040BD50;
    }
    // 0x0040BD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_0040BD28:
    // 0x0040BD28: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x0040BD2C: blez        $v0, L_0040BD44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040BD30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040BD44;
    }
    // 0x0040BD30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040BD34: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x0040BD38: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x0040BD3C: jal         0x00243414
    // 0x0040BD40: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040BD40: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_0:
L_0040BD44:
    // 0x0040BD44: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x0040BD48: bne         $s0, $zero, L_0040BD28
    if (ctx->r16 != 0) {
        // 0x0040BD4C: nop
    
            goto L_0040BD28;
    }
    // 0x0040BD4C: nop

L_0040BD50:
    // 0x0040BD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040BD54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040BD58: jr          $ra
    // 0x0040BD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040BD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00280AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280AA0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00280AA4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00280AA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00280AAC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x00280AB0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00280AB4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00280AB8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00280ABC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00280AC0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00280AC4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00280AC8: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x00280ACC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00280AD0: jal         0x00279028
    // 0x00280AD4: sllv        $s4, $v0, $v1
    ctx->r20 = S32(ctx->r2 << (ctx->r3 & 31));
    func_00279028(rdram, ctx);
        goto after_0;
    // 0x00280AD4: sllv        $s4, $v0, $v1
    ctx->r20 = S32(ctx->r2 << (ctx->r3 & 31));
    after_0:
    // 0x00280AD8: jal         0x00207FEC
    // 0x00280ADC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x00280ADC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_1:
    // 0x00280AE0: lui         $v0, 0xE300
    ctx->r2 = S32(0XE300 << 16);
    // 0x00280AE4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00280AE8: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00280AEC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00280AF0: ori         $v0, $v0, 0x1201
    ctx->r2 = ctx->r2 | 0X1201;
    // 0x00280AF4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00280AF8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00280AFC: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00280B00: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00280B04: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x00280B08: lw          $s0, 0x753C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X753C);
    // 0x00280B0C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00280B10: beq         $s0, $zero, L_00280C04
    if (ctx->r16 == 0) {
        // 0x00280B14: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_00280C04;
    }
    // 0x00280B14: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00280B18: lui         $s5, 0x8
    ctx->r21 = S32(0X8 << 16);
    // 0x00280B1C: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x00280B20: addiu       $s2, $sp, 0x2C
    ctx->r18 = ADD32(ctx->r29, 0X2C);
L_00280B24:
    // 0x00280B24: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00280B28: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x00280B2C: beq         $v0, $zero, L_00280BF8
    if (ctx->r2 == 0) {
        // 0x00280B30: nop
    
            goto L_00280BF8;
    }
    // 0x00280B30: nop

    // 0x00280B34: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00280B38: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00280B3C: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00280B40: beq         $v0, $zero, L_00280BF8
    if (ctx->r2 == 0) {
        // 0x00280B44: addiu       $a0, $s1, 0x1CC
        ctx->r4 = ADD32(ctx->r17, 0X1CC);
            goto L_00280BF8;
    }
    // 0x00280B44: addiu       $a0, $s1, 0x1CC
    ctx->r4 = ADD32(ctx->r17, 0X1CC);
    // 0x00280B48: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00280B4C: jal         0x0020F9D4
    // 0x00280B50: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020F9D4(rdram, ctx);
        goto after_2;
    // 0x00280B50: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00280B54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00280B58: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00280B5C: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00280B60: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00280B64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00280B68: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00280B6C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00280B70: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00280B74: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00280B78: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00280B7C: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
    // 0x00280B80: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00280B84: lw          $a0, 0x2034($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2034);
    // 0x00280B88: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00280B8C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x00280B90: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00280B94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00280B98: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00280B9C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00280BA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280BA4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00280BA8: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x00280BAC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00280BB0: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x00280BB4: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x00280BB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280BBC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00280BC0: swc1        $f1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00280BC4: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00280BC8: lwc1        $f2, 0x174($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X174);
    // 0x00280BCC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00280BD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280BD4: lwc1        $f0, -0x6430($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6430);
    // 0x00280BD8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00280BDC: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00280BE0: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00280BE4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x00280BE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00280BEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00280BF0: jal         0x002803E8
    // 0x00280BF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_002803E8(rdram, ctx);
        goto after_3;
    // 0x00280BF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_00280BF8:
    // 0x00280BF8: lw          $s0, 0x1D0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1D0);
    // 0x00280BFC: bne         $s0, $zero, L_00280B24
    if (ctx->r16 != 0) {
        // 0x00280C00: nop
    
            goto L_00280B24;
    }
    // 0x00280C00: nop

L_00280C04:
    // 0x00280C04: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00280C08: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00280C0C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00280C10: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00280C14: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00280C18: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00280C1C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00280C20: jr          $ra
    // 0x00280C24: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00280C24: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002A5120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A5120: jr          $ra
    // 0x002A5124: nop

    return;
    // 0x002A5124: nop

;}
RECOMP_FUNC void func_00270C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00270C80: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00270C84: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00270C88: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    turok2_patch_play_sound(rdram, ctx);
    // 0x00270C8C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00270C90: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00270C94: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00270C98: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00270C9C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00270CA0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00270CA4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00270CA8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00270CAC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x00270CB0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x00270CB4: lw          $v0, 0x2BB8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2BB8);
    // 0x00270CB8: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x00270CBC: beq         $v0, $zero, L_00270CD0
    if (ctx->r2 == 0) {
        // 0x00270CC0: addu        $s6, $a1, $zero
        ctx->r22 = ADD32(ctx->r5, 0);
            goto L_00270CD0;
    }
    // 0x00270CC0: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00270CC4: addiu       $v0, $zero, 0x44C
    ctx->r2 = ADD32(0, 0X44C);
    // 0x00270CC8: beq         $s6, $v0, L_00270D20
    if (ctx->r22 == ctx->r2) {
        // 0x00270CCC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00270D20;
    }
    // 0x00270CCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00270CD0:
    // 0x00270CD0: lh          $v1, 0x102($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X102);
    // 0x00270CD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270CD8: bne         $v1, $v0, L_00270D20
    if (ctx->r3 != ctx->r2) {
        // 0x00270CDC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00270D20;
    }
    // 0x00270CDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00270CE0: slti        $v0, $s6, 0x100
    ctx->r2 = SIGNED(ctx->r22) < 0X100 ? 1 : 0;
    // 0x00270CE4: beq         $v0, $zero, L_00270D1C
    if (ctx->r2 == 0) {
        // 0x00270CE8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00270D1C;
    }
    // 0x00270CE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270CEC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00270CF0: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
L_00270CF4:
    // 0x00270CF4: lw          $v0, 0x1E64($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E64);
    // 0x00270CF8: beql        $v0, $s6, L_00270D00
    if (ctx->r2 == ctx->r22) {
        // 0x00270CFC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00270D00;
    }
    goto skip_0;
    // 0x00270CFC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
L_00270D00:
    // 0x00270D00: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00270D04: slti        $v0, $a0, 0x11
    ctx->r2 = SIGNED(ctx->r4) < 0X11 ? 1 : 0;
    // 0x00270D08: bne         $v0, $zero, L_00270CF4
    if (ctx->r2 != 0) {
        // 0x00270D0C: addiu       $v1, $v1, 0xCC
        ctx->r3 = ADD32(ctx->r3, 0XCC);
            goto L_00270CF4;
    }
    // 0x00270D0C: addiu       $v1, $v1, 0xCC
    ctx->r3 = ADD32(ctx->r3, 0XCC);
    // 0x00270D10: slti        $v0, $a1, 0x6
    ctx->r2 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x00270D14: beq         $v0, $zero, L_00270D20
    if (ctx->r2 == 0) {
        // 0x00270D18: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00270D20;
    }
    // 0x00270D18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00270D1C:
    // 0x00270D1C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00270D20:
    // 0x00270D20: bne         $v1, $zero, L_002710FC
    if (ctx->r3 != 0) {
        // 0x00270D24: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002710FC;
    }
    // 0x00270D24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270D28: slti        $v0, $s6, 0x100
    ctx->r2 = SIGNED(ctx->r22) < 0X100 ? 1 : 0;
    // 0x00270D2C: beq         $v0, $zero, L_00270E8C
    if (ctx->r2 == 0) {
        // 0x00270D30: nop
    
            goto L_00270E8C;
    }
    // 0x00270D30: nop

    // 0x00270D34: lw          $v0, 0x2B54($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2B54);
    // 0x00270D38: lhu         $s1, 0x132($s3)
    ctx->r17 = MEM_HU(ctx->r19, 0X132);
    // 0x00270D3C: beq         $v0, $zero, L_00270E68
    if (ctx->r2 == 0) {
        // 0x00270D40: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00270E68;
    }
    // 0x00270D40: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00270D44: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x00270D48: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00270D4C: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x00270D50: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00270D54: lw          $a0, 0x2B58($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2B58);
    // 0x00270D58: lw          $a1, 0x2B54($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X2B54);
    // 0x00270D5C: jal         0x00266D8C
    // 0x00270D60: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00270D60: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00270D64: beql        $v0, $zero, L_00270E6C
    if (ctx->r2 == 0) {
        // 0x00270D68: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00270E6C;
    }
    goto skip_1;
    // 0x00270D68: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    skip_1:
    // 0x00270D6C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00270D70: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x00270D74: beq         $a3, $a2, L_00270E60
    if (ctx->r7 == ctx->r6) {
        // 0x00270D78: slt         $v0, $a2, $a3
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_00270E60;
    }
    // 0x00270D78: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00270D7C: bne         $v0, $zero, L_00270DB4
    if (ctx->r2 != 0) {
        // 0x00270D80: addu        $a1, $a3, $zero
        ctx->r5 = ADD32(ctx->r7, 0);
            goto L_00270DB4;
    }
    // 0x00270D80: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00270D84: lw          $v1, 0x2B5C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2B5C);
    // 0x00270D88: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00270D8C: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
L_00270D90:
    // 0x00270D90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00270D94: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00270D98: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00270D9C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00270DA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00270DA4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00270DA8: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00270DAC: beq         $v0, $zero, L_00270D90
    if (ctx->r2 == 0) {
        // 0x00270DB0: addu        $s0, $s0, $v1
        ctx->r16 = ADD32(ctx->r16, ctx->r3);
            goto L_00270D90;
    }
    // 0x00270DB0: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_00270DB4:
    // 0x00270DB4: jal         0x002113A4
    // 0x00270DB8: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00270DB8: nop

    after_1:
    // 0x00270DBC: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x00270DC0: bne         $s0, $zero, L_00270DCC
    if (ctx->r16 != 0) {
        // 0x00270DC4: nop
    
            goto L_00270DCC;
    }
    // 0x00270DC4: nop

    // 0x00270DC8: break       7
    do_break(2559432);
L_00270DCC:
    // 0x00270DCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00270DD0: bne         $s0, $at, L_00270DE4
    if (ctx->r16 != ctx->r1) {
        // 0x00270DD4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00270DE4;
    }
    // 0x00270DD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00270DD8: bne         $v0, $at, L_00270DE4
    if (ctx->r2 != ctx->r1) {
        // 0x00270DDC: nop
    
            goto L_00270DE4;
    }
    // 0x00270DDC: nop

    // 0x00270DE0: break       6
    do_break(2559456);
L_00270DE4:
    // 0x00270DE4: mfhi        $a2
    ctx->r6 = hi;
    // 0x00270DE8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00270DEC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x00270DF0: slt         $v0, $a3, $a1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00270DF4: beq         $v0, $zero, L_00270E38
    if (ctx->r2 == 0) {
        // 0x00270DF8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00270E38;
    }
    // 0x00270DF8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00270DFC: lw          $v1, 0x2B5C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2B5C);
    // 0x00270E00: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00270E04: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
L_00270E08:
    // 0x00270E08: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00270E0C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00270E10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00270E14: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00270E18: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x00270E1C: slt         $v0, $s0, $a2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00270E20: beq         $v0, $zero, L_00270E3C
    if (ctx->r2 == 0) {
        // 0x00270E24: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_00270E3C;
    }
    // 0x00270E24: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x00270E28: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00270E2C: slt         $v0, $a3, $a1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00270E30: bne         $v0, $zero, L_00270E08
    if (ctx->r2 != 0) {
        // 0x00270E34: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00270E08;
    }
    // 0x00270E34: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00270E38:
    // 0x00270E38: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_00270E3C:
    // 0x00270E3C: beq         $v0, $zero, L_00270E6C
    if (ctx->r2 == 0) {
        // 0x00270E40: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_00270E6C;
    }
    // 0x00270E40: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00270E44: lw          $v0, 0x130($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X130);
    // 0x00270E48: bne         $a3, $v0, L_00270E6C
    if (ctx->r7 != ctx->r2) {
        // 0x00270E4C: nop
    
            goto L_00270E6C;
    }
    // 0x00270E4C: nop

    // 0x00270E50: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x00270E54: bnel        $a3, $v0, L_00270E60
    if (ctx->r7 != ctx->r2) {
        // 0x00270E58: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00270E60;
    }
    goto skip_2;
    // 0x00270E58: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_2:
    // 0x00270E5C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_00270E60:
    // 0x00270E60: j           L_00270E6C
    // 0x00270E64: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
        goto L_00270E6C;
    // 0x00270E64: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
L_00270E68:
    // 0x00270E68: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_00270E6C:
    // 0x00270E6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00270E70: lwc1        $f12, -0x7F34($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7F34);
    // 0x00270E74: jal         0x0021149C
    // 0x00270E78: nop

    func_0021149C(rdram, ctx);
        goto after_2;
    // 0x00270E78: nop

    after_2:
    // 0x00270E7C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00270E80: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00270E84: j           L_00270F98
    // 0x00270E88: sb          $v0, 0x2B94($s3)
    MEM_B(0X2B94, ctx->r19) = ctx->r2;
        goto L_00270F98;
    // 0x00270E88: sb          $v0, 0x2B94($s3)
    MEM_B(0X2B94, ctx->r19) = ctx->r2;
L_00270E8C:
    // 0x00270E8C: lw          $v0, 0x2B54($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2B54);
    // 0x00270E90: beq         $v0, $zero, L_00270F94
    if (ctx->r2 == 0) {
        // 0x00270E94: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00270F94;
    }
    // 0x00270E94: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00270E98: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x00270E9C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00270EA0: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x00270EA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00270EA8: lw          $a0, 0x2B58($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2B58);
    // 0x00270EAC: lw          $a1, 0x2B54($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X2B54);
    // 0x00270EB0: jal         0x00266D8C
    // 0x00270EB4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_00266D8C(rdram, ctx);
        goto after_3;
    // 0x00270EB4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x00270EB8: beq         $v0, $zero, L_00270F98
    if (ctx->r2 == 0) {
        // 0x00270EBC: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00270F98;
    }
    // 0x00270EBC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00270EC0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x00270EC4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x00270EC8: beq         $a3, $a2, L_00270F8C
    if (ctx->r7 == ctx->r6) {
        // 0x00270ECC: slt         $v0, $a2, $a3
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_00270F8C;
    }
    // 0x00270ECC: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00270ED0: bne         $v0, $zero, L_00270F08
    if (ctx->r2 != 0) {
        // 0x00270ED4: addu        $a1, $a3, $zero
        ctx->r5 = ADD32(ctx->r7, 0);
            goto L_00270F08;
    }
    // 0x00270ED4: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00270ED8: lw          $v1, 0x2B5C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2B5C);
    // 0x00270EDC: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00270EE0: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
L_00270EE4:
    // 0x00270EE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00270EE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00270EEC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00270EF0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00270EF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00270EF8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00270EFC: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00270F00: beq         $v0, $zero, L_00270EE4
    if (ctx->r2 == 0) {
        // 0x00270F04: addu        $s0, $s0, $v1
        ctx->r16 = ADD32(ctx->r16, ctx->r3);
            goto L_00270EE4;
    }
    // 0x00270F04: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_00270F08:
    // 0x00270F08: jal         0x002113A4
    // 0x00270F0C: nop

    func_002113A4(rdram, ctx);
        goto after_4;
    // 0x00270F0C: nop

    after_4:
    // 0x00270F10: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x00270F14: bne         $s0, $zero, L_00270F20
    if (ctx->r16 != 0) {
        // 0x00270F18: nop
    
            goto L_00270F20;
    }
    // 0x00270F18: nop

    // 0x00270F1C: break       7
    do_break(2559772);
L_00270F20:
    // 0x00270F20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00270F24: bne         $s0, $at, L_00270F38
    if (ctx->r16 != ctx->r1) {
        // 0x00270F28: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00270F38;
    }
    // 0x00270F28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00270F2C: bne         $v0, $at, L_00270F38
    if (ctx->r2 != ctx->r1) {
        // 0x00270F30: nop
    
            goto L_00270F38;
    }
    // 0x00270F30: nop

    // 0x00270F34: break       6
    do_break(2559796);
L_00270F38:
    // 0x00270F38: mfhi        $a2
    ctx->r6 = hi;
    // 0x00270F3C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x00270F40: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x00270F44: slt         $v0, $a3, $a1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00270F48: beq         $v0, $zero, L_00270F8C
    if (ctx->r2 == 0) {
        // 0x00270F4C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00270F8C;
    }
    // 0x00270F4C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00270F50: lw          $v1, 0x2B5C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2B5C);
    // 0x00270F54: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00270F58: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
L_00270F5C:
    // 0x00270F5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00270F60: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00270F64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00270F68: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00270F6C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x00270F70: slt         $v0, $s0, $a2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00270F74: beq         $v0, $zero, L_00270F98
    if (ctx->r2 == 0) {
        // 0x00270F78: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_00270F98;
    }
    // 0x00270F78: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00270F7C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00270F80: slt         $v0, $a3, $a1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00270F84: bne         $v0, $zero, L_00270F5C
    if (ctx->r2 != 0) {
        // 0x00270F88: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00270F5C;
    }
    // 0x00270F88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00270F8C:
    // 0x00270F8C: j           L_00270F98
    // 0x00270F90: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
        goto L_00270F98;
    // 0x00270F90: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
L_00270F94:
    // 0x00270F94: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_00270F98:
    // 0x00270F98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00270F9C: beq         $s1, $v0, L_002710FC
    if (ctx->r17 == ctx->r2) {
        // 0x00270FA0: sll         $s0, $s1, 16
        ctx->r16 = S32(ctx->r17 << 16);
            goto L_002710FC;
    }
    // 0x00270FA0: sll         $s0, $s1, 16
    ctx->r16 = S32(ctx->r17 << 16);
    // 0x00270FA4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x00270FA8: lw          $a0, 0x2B4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2B4C);
    // 0x00270FAC: jal         0x002017D4
    // 0x00270FB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00270FB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00270FB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00270FB8: jal         0x002017D4
    // 0x00270FBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00270FBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00270FC0: lw          $a0, 0x2B4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2B4C);
    // 0x00270FC4: sw          $v0, 0x2B88($s3)
    MEM_W(0X2B88, ctx->r19) = ctx->r2;
    // 0x00270FC8: sh          $s6, 0x2B8C($s3)
    MEM_H(0X2B8C, ctx->r19) = ctx->r22;
    // 0x00270FCC: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x00270FD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00270FD4: jal         0x002017D4
    // 0x00270FD8: sw          $v0, 0x2B90($s3)
    MEM_W(0X2B90, ctx->r19) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00270FD8: sw          $v0, 0x2B90($s3)
    MEM_W(0X2B90, ctx->r19) = ctx->r2;
    after_7:
    // 0x00270FDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00270FE0: jal         0x002017D4
    // 0x00270FE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x00270FE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x00270FE8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00270FEC: lw          $s5, 0x4($s4)
    ctx->r21 = MEM_W(ctx->r20, 0X4);
    // 0x00270FF0: beq         $s5, $zero, L_002710A4
    if (ctx->r21 == 0) {
        // 0x00270FF4: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_002710A4;
    }
    // 0x00270FF4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00270FF8: jal         0x0029DFF0
    // 0x00270FFC: addiu       $s0, $s3, 0x110
    ctx->r16 = ADD32(ctx->r19, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_9;
    // 0x00270FFC: addiu       $s0, $s3, 0x110
    ctx->r16 = ADD32(ctx->r19, 0X110);
    after_9:
    // 0x00271000: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00271004: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00271008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027100C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00271010: beq         $v1, $v0, L_00271038
    if (ctx->r3 == ctx->r2) {
        // 0x00271014: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271038;
    }
    // 0x00271014: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271018: jal         0x0029E010
    // 0x0027101C: nop

    func_0029E010(rdram, ctx);
        goto after_10;
    // 0x0027101C: nop

    after_10:
    // 0x00271020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271028: jal         0x0029B6F0
    // 0x0027102C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x0027102C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x00271030: j           L_00271040
    // 0x00271034: nop

        goto L_00271040;
    // 0x00271034: nop

L_00271038:
    // 0x00271038: jal         0x0029E010
    // 0x0027103C: nop

    func_0029E010(rdram, ctx);
        goto after_12;
    // 0x0027103C: nop

    after_12:
L_00271040:
    // 0x00271040: lw          $v0, 0x10C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10C);
    // 0x00271044: addiu       $s0, $s3, 0x110
    ctx->r16 = ADD32(ctx->r19, 0X110);
    // 0x00271048: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0027104C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00271050: jal         0x0029DFF0
    // 0x00271054: sw          $s2, 0x10C($s3)
    MEM_W(0X10C, ctx->r19) = ctx->r18;
    func_0029DFF0(rdram, ctx);
        goto after_13;
    // 0x00271054: sw          $s2, 0x10C($s3)
    MEM_W(0X10C, ctx->r19) = ctx->r18;
    after_13:
    // 0x00271058: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0027105C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00271060: beq         $v1, $zero, L_00271088
    if (ctx->r3 == 0) {
        // 0x00271064: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271088;
    }
    // 0x00271064: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271068: jal         0x0029E010
    // 0x0027106C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_14;
    // 0x0027106C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_14:
    // 0x00271070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271074: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271078: jal         0x0029B820
    // 0x0027107C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_15;
    // 0x0027107C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x00271080: j           L_00271094
    // 0x00271084: slti        $v0, $s6, 0x100
    ctx->r2 = SIGNED(ctx->r22) < 0X100 ? 1 : 0;
        goto L_00271094;
    // 0x00271084: slti        $v0, $s6, 0x100
    ctx->r2 = SIGNED(ctx->r22) < 0X100 ? 1 : 0;
L_00271088:
    // 0x00271088: jal         0x0029E010
    // 0x0027108C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_16;
    // 0x0027108C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_16:
    // 0x00271090: slti        $v0, $s6, 0x100
    ctx->r2 = SIGNED(ctx->r22) < 0X100 ? 1 : 0;
L_00271094:
    // 0x00271094: bnel        $v0, $zero, L_002710A4
    if (ctx->r2 != 0) {
        // 0x00271098: sw          $s1, 0x130($s3)
        MEM_W(0X130, ctx->r19) = ctx->r17;
            goto L_002710A4;
    }
    goto skip_3;
    // 0x00271098: sw          $s1, 0x130($s3)
    MEM_W(0X130, ctx->r19) = ctx->r17;
    skip_3:
    // 0x0027109C: j           L_002710A8
    // 0x002710A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_002710A8;
    // 0x002710A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_002710A4:
    // 0x002710A4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_002710A8:
    // 0x002710A8: beq         $s5, $zero, L_002710F4
    if (ctx->r21 == 0) {
        // 0x002710AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002710F4;
    }
    // 0x002710AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002710B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002710B4:
    // 0x002710B4: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x002710B8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x002710BC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x002710C0: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002710C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x002710C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002710CC: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x002710D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002710D4: mflo        $t0
    ctx->r8 = lo;
    // 0x002710D8: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x002710DC: jal         0x00270A60
    // 0x002710E0: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    func_00270A60(rdram, ctx);
        goto after_17;
    // 0x002710E0: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    after_17:
    // 0x002710E4: sltu        $v0, $s0, $s5
    ctx->r2 = ctx->r16 < ctx->r21 ? 1 : 0;
    // 0x002710E8: bne         $v0, $zero, L_002710B4
    if (ctx->r2 != 0) {
        // 0x002710EC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002710B4;
    }
    // 0x002710EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002710F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002710F4:
    // 0x002710F4: sw          $v0, 0x2B90($s3)
    MEM_W(0X2B90, ctx->r19) = ctx->r2;
    // 0x002710F8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002710FC:
    // 0x002710FC: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00271100: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00271104: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00271108: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0027110C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00271110: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00271114: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00271118: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0027111C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00271120: jr          $ra
    // 0x00271124: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00271124: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00281B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00281B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281B9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00281BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00281BA4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00281BA8: beq         $v1, $zero, L_00281BE0
    if (ctx->r3 == 0) {
        // 0x00281BAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00281BE0;
    }
    // 0x00281BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00281BB0: bne         $v1, $v0, L_00281BF4
    if (ctx->r3 != ctx->r2) {
        // 0x00281BB4: nop
    
            goto L_00281BF4;
    }
    // 0x00281BB4: nop

    // 0x00281BB8: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00281BBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281BC0: lwc1        $f0, -0x63D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63D4);
    // 0x00281BC4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00281BC8: jal         0x002982F0
    // 0x00281BCC: nop

    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00281BCC: nop

    after_0:
    // 0x00281BD0: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00281BD4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00281BD8: j           L_00281BF8
    // 0x00281BDC: nop

        goto L_00281BF8;
    // 0x00281BDC: nop

L_00281BE0:
    // 0x00281BE0: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00281BE4: jal         0x002119FC
    // 0x00281BE8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00281BE8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    after_1:
    // 0x00281BEC: j           L_00281BF8
    // 0x00281BF0: nop

        goto L_00281BF8;
    // 0x00281BF0: nop

L_00281BF4:
    // 0x00281BF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_00281BF8:
    // 0x00281BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00281BFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281C00: jr          $ra
    // 0x00281C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00281C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041E294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041E298: bne         $v0, $zero, L_0041E2B0
    if (ctx->r2 != 0) {
        // 0x0041E29C: nop
    
            goto L_0041E2B0;
    }
    // 0x0041E29C: nop

    // 0x0041E2A0: jal         0x0041DA28
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_0;
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0041E2A8: j           L_0041E35C
    // 0x0041E2AC: nop

        goto L_0041E35C;
    // 0x0041E2AC: nop

L_0041E2B0:
    // 0x0041E2B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E2B4: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041E2B8: jal         0x00426594
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_1;
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041E2C0: beq         $v0, $zero, L_0041E2F4
    if (ctx->r2 == 0) {
        // 0x0041E2C4: nop
    
            goto L_0041E2F4;
    }
    // 0x0041E2C4: nop

    // 0x0041E2C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E2CC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E2D0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E2D4: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E2D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E2DC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E2E0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E2E4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E2E8: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041E2EC: j           L_0041E354
    // 0x0041E2F0: nop

        goto L_0041E354;
    // 0x0041E2F0: nop

L_0041E2F4:
    // 0x0041E2F4: jal         0x00426BD8
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_2;
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041E2FC: beq         $v0, $zero, L_0041E330
    if (ctx->r2 == 0) {
        // 0x0041E300: nop
    
            goto L_0041E330;
    }
    // 0x0041E300: nop

    // 0x0041E304: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E308: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E30C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E310: addiu       $v0, $v0, -0x4958
    ctx->r2 = ADD32(ctx->r2, -0X4958);
    // 0x0041E314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E318: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E31C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E320: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E324: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E328: j           L_0041E354
    // 0x0041E32C: nop

        goto L_0041E354;
    // 0x0041E32C: nop

L_0041E330:
    // 0x0041E330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E334: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E338: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E33C: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E340: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E344: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E348: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E34C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E350: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E354:
    // 0x0041E354: jal         0x00416644
    // 0x0041E358: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x0041E358: nop

    after_3:
L_0041E35C:
    // 0x0041E35C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041E360: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041E364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041E368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041E36C: jr          $ra
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00408FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408FF0: jr          $ra
    // 0x00408FF4: nop

    return;
    // 0x00408FF4: nop

;}
RECOMP_FUNC void func_00268F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268F3C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00268F40: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00268F44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00268F48: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x00268F4C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00268F50: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x00268F54: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x00268F58: jal         0x0026BD20
    // 0x00268F5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026BD20(rdram, ctx);
        goto after_0;
    // 0x00268F5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00268F60: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00268F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00268F68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00268F6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00268F70: lwc1        $f0, 0x7EDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7EDC);
    // 0x00268F74: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00268F78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00268F7C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00268F80: jal         0x0020EFDC
    // 0x00268F84: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_1;
    // 0x00268F84: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00268F88: jal         0x0020F040
    // 0x00268F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x00268F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00268F90: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00268F94: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00268F98: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00268F9C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00268FA0: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00268FA4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00268FA8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00268FAC: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00268FB0: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00268FB4: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00268FB8: jal         0x0021153C
    // 0x00268FBC: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_3;
    // 0x00268FBC: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_3:
    // 0x00268FC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00268FC4: lwc1        $f1, 0x7EE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EE0);
    // 0x00268FC8: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00268FCC: jal         0x002982F0
    // 0x00268FD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00268FD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x00268FD4: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00268FD8: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00268FDC: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00268FE0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00268FE4: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x00268FE8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00268FEC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00268FF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00268FF4: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00268FF8: swc1        $f3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00268FFC: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x00269000: jal         0x002974C0
    // 0x00269004: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x00269004: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_5:
    // 0x00269008: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0026900C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x00269010: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x00269014: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00269018: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x0026901C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x00269020: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00269024: sw          $a3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r7;
    // 0x00269028: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x0026902C: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
    // 0x00269030: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x00269034: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00269038: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0026903C: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x00269040: jr          $ra
    // 0x00269044: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00269044: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00426DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426DB0: beq         $a2, $zero, L_00426DFC
    if (ctx->r6 == 0) {
        // 0x00426DB4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00426DFC;
    }
    // 0x00426DB4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00426DB8:
    // 0x00426DB8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426DBC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426DC0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x00426DC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426DC8: beq         $v0, $zero, L_00426DDC
    if (ctx->r2 == 0) {
        // 0x00426DCC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00426DDC;
    }
    // 0x00426DCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426DD0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426DD4: bne         $a2, $zero, L_00426DB8
    if (ctx->r6 != 0) {
        // 0x00426DD8: nop
    
            goto L_00426DB8;
    }
    // 0x00426DD8: nop

L_00426DDC:
    // 0x00426DDC: beq         $a2, $zero, L_00426DFC
    if (ctx->r6 == 0) {
        // 0x00426DE0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00426DFC;
    }
    // 0x00426DE0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426DE4: beq         $a2, $zero, L_00426DFC
    if (ctx->r6 == 0) {
        // 0x00426DE8: nop
    
            goto L_00426DFC;
    }
    // 0x00426DE8: nop

L_00426DEC:
    // 0x00426DEC: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x00426DF0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426DF4: bne         $a2, $zero, L_00426DEC
    if (ctx->r6 != 0) {
        // 0x00426DF8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00426DEC;
    }
    // 0x00426DF8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00426DFC:
    // 0x00426DFC: jr          $ra
    // 0x00426E00: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00426E00: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00296690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00296694: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00296698: addiu       $a3, $a1, -0x1
    ctx->r7 = ADD32(ctx->r5, -0X1);
    // 0x0029669C: sltiu       $v0, $a3, 0x9
    ctx->r2 = ctx->r7 < 0X9 ? 1 : 0;
    // 0x002966A0: beq         $v0, $zero, L_00296728
    if (ctx->r2 == 0) {
        // 0x002966A4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00296728;
    }
    // 0x002966A4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x002966A8: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x002966AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002966B0: addu        $at, $at, $v0
    gpr jr_addend_002966B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002966B4: lw          $v0, -0x5970($at)
    ctx->r2 = ADD32(ctx->r1, -0X5970);
    // 0x002966B8: jr          $v0
    // 0x002966BC: nop

    switch (jr_addend_002966B8 >> 2) {
        case 0: goto L_002966C0; break;
        case 1: goto L_00296728; break;
        case 2: goto L_00296728; break;
        case 3: goto L_002966C8; break;
        case 4: goto L_00296728; break;
        case 5: goto L_00296728; break;
        case 6: goto L_00296714; break;
        case 7: goto L_0029671C; break;
        case 8: goto L_002966F4; break;
        default: switch_error(__func__, 0x002966B8, 0x800AA690);
    }
    // 0x002966BC: nop

L_002966C0:
    // 0x002966C0: j           L_00296740
    // 0x002966C4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
        goto L_00296740;
    // 0x002966C4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_002966C8:
    // 0x002966C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002966CC: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x002966D0: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x002966D4: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x002966D8: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x002966DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x002966E0: beq         $a0, $zero, L_00296740
    if (ctx->r4 == 0) {
        // 0x002966E4: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_00296740;
    }
    // 0x002966E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x002966E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002966EC: j           L_00296738
    // 0x002966F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00296738;
    // 0x002966F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_002966F4:
    // 0x002966F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002966F8: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x002966FC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00296700: beq         $a0, $zero, L_00296740
    if (ctx->r4 == 0) {
        // 0x00296704: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_00296740;
    }
    // 0x00296704: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x00296708: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0029670C: j           L_00296738
    // 0x00296710: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00296738;
    // 0x00296710: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00296714:
    // 0x00296714: j           L_00296740
    // 0x00296718: sw          $a2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r6;
        goto L_00296740;
    // 0x00296718: sw          $a2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r6;
L_0029671C:
    // 0x0029671C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00296720: j           L_00296740
    // 0x00296724: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
        goto L_00296740;
    // 0x00296724: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
L_00296728:
    // 0x00296728: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0029672C: beq         $a0, $zero, L_00296740
    if (ctx->r4 == 0) {
        // 0x00296730: nop
    
            goto L_00296740;
    }
    // 0x00296730: nop

    // 0x00296734: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
L_00296738:
    // 0x00296738: jalr        $v0
    // 0x0029673C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0029673C: nop

    after_0:
L_00296740:
    // 0x00296740: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00296744: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00296748: jr          $ra
    // 0x0029674C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029674C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00289634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289638: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028963C: jal         0x002759C4
    // 0x00289640: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x00289640: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x00289644: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289648: jr          $ra
    // 0x0028964C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028964C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A09C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A0A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A0A4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A0A8: lhu         $a3, 0x98($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X98);
    // 0x0025A0AC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A0B0: addiu       $a2, $a2, -0x610
    ctx->r6 = ADD32(ctx->r6, -0X610);
    // 0x0025A0B4: jal         0x00245A98
    // 0x0025A0B8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A0B8: nop

    after_0:
    // 0x0025A0BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A0C0: jr          $ra
    // 0x0025A0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00254F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254F4C: sw          $v0, 0x37C($a0)
    MEM_W(0X37C, ctx->r4) = ctx->r2;
    // 0x00254F50: jr          $ra
    // 0x00254F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00254F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00412FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412FF8: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    // 0x00412FFC: mul.s       $f2, $f3, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00413000: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413004: lwc1        $f1, 0xAE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAE0);
    // 0x00413008: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x0041300C: mul.s       $f0, $f1, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00413010: nop

    // 0x00413014: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00413018: nop

    // 0x0041301C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00413020: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00413024: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00413028: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0041302C: mul.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x00413030: jr          $ra
    // 0x00413034: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
    return;
    // 0x00413034: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_0044730C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040E418:
    // 0x0044730C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00447310: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00447314: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00447318: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044731C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00447320: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x00447324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00447328: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044732C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00447330: lb          $v1, 0x174($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X174);
    // 0x00447334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00447338: beq         $v1, $v0, L_0044734C
    if (ctx->r3 == ctx->r2) {
        // 0x0044733C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0044734C;
    }
    // 0x0044733C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00447340: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00447344: jal         0x00243414
    // 0x00447348: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00447348: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
L_0044734C:
    // 0x0044734C: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x00447350: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00447354: sw          $v0, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->r2;
    // 0x00447358: lhu         $a0, 0xB8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XB8);
    // 0x0044735C: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x00447360: beq         $a0, $v0, L_004473A4
    if (ctx->r4 == ctx->r2) {
        // 0x00447364: slti        $v0, $a0, 0x456
        ctx->r2 = SIGNED(ctx->r4) < 0X456 ? 1 : 0;
            goto L_004473A4;
    }
    // 0x00447364: slti        $v0, $a0, 0x456
    ctx->r2 = SIGNED(ctx->r4) < 0X456 ? 1 : 0;
    // 0x00447368: beq         $v0, $zero, L_00447380
    if (ctx->r2 == 0) {
        // 0x0044736C: addiu       $v0, $zero, 0x454
        ctx->r2 = ADD32(0, 0X454);
            goto L_00447380;
    }
    // 0x0044736C: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x00447370: beq         $a0, $v0, L_00447394
    if (ctx->r4 == ctx->r2) {
        // 0x00447374: nop
    
            goto L_00447394;
    }
    // 0x00447374: nop

    // 0x00447378: j           L_0040E418
    // 0x0044737C: nop

    entry_0040E418(rdram, ctx);
    return;
    // 0x0044737C: nop

L_00447380:
    // 0x00447380: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00447384: beq         $a0, $v0, L_004473B4
    if (ctx->r4 == ctx->r2) {
        // 0x00447388: nop
    
            goto L_004473B4;
    }
    // 0x00447388: nop

    // 0x0044738C: j           L_0040E418
    // 0x00447390: nop

    entry_0040E418(rdram, ctx);
    return;
    // 0x00447390: nop

L_00447394:
    // 0x00447394: lw          $v0, 0x50C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50C);
    // 0x00447398: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0044739C: j           L_0040E418
    // 0x004473A0: sw          $v0, 0x50C($s0)
    MEM_W(0X50C, ctx->r16) = ctx->r2;
    entry_0040E418(rdram, ctx);
    return;
    // 0x004473A0: sw          $v0, 0x50C($s0)
    MEM_W(0X50C, ctx->r16) = ctx->r2;
L_004473A4:
    // 0x004473A4: lw          $v0, 0x510($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X510);
    // 0x004473A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004473AC: j           L_0040E418
    // 0x004473B0: sw          $v0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r2;
    entry_0040E418(rdram, ctx);
    return;
    // 0x004473B0: sw          $v0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r2;
L_004473B4:
    // 0x004473B4: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x004473B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004473BC: sw          $v0, 0x514($s0)
    MEM_W(0X514, ctx->r16) = ctx->r2;
    // 0x004473C0: lw          $v1, 0x110($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X110);
    // 0x004473C4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x004473C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004473CC: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x004473D0: bne         $v0, $zero, L_004473DC
    if (ctx->r2 != 0) {
        // 0x004473D4: nop
    
            goto L_004473DC;
    }
    // 0x004473D4: nop

    // 0x004473D8: break       7
    do_break(4486104);
L_004473DC:
    // 0x004473DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x004473E0: bne         $v0, $at, L_004473F4
    if (ctx->r2 != ctx->r1) {
        // 0x004473E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_004473F4;
    }
    // 0x004473E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x004473E8: bne         $v1, $at, L_004473F4
    if (ctx->r3 != ctx->r1) {
        // 0x004473EC: nop
    
            goto L_004473F4;
    }
    // 0x004473EC: nop

    // 0x004473F0: break       6
    do_break(4486128);
L_004473F4:
    // 0x004473F4: mfhi        $v0
    ctx->r2 = hi;
    // 0x004473F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004473FC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00447400: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    // 0x00447404: lw          $v0, 0x24C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24C);
    // 0x00447408: bne         $v0, $zero, L_00447418
    if (ctx->r2 != 0) {
        // 0x0044740C: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_00447418;
    }
    // 0x0044740C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00447410: jal         0x00243414
    // 0x00447414: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00447414: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_00447418:
    // 0x00447418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0044741C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00447420: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00447424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447428: jr          $ra
    // 0x0044742C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044742C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028E7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E7A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028E7A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028E7AC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028E7B0: addiu       $s0, $s0, 0xDC0
    ctx->r16 = ADD32(ctx->r16, 0XDC0);
    // 0x0028E7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E7B8: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x0028E7BC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x0028E7C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0028E7C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0028E7C8: jal         0x00266C5C
    // 0x0028E7CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0028E7CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x0028E7D0: addiu       $s1, $s0, -0x230
    ctx->r17 = ADD32(ctx->r16, -0X230);
    // 0x0028E7D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028E7D8: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x0028E7DC: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x0028E7E0: addiu       $a2, $a2, -0x175C
    ctx->r6 = ADD32(ctx->r6, -0X175C);
    // 0x0028E7E4: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x0028E7E8: addiu       $v0, $zero, 0x94
    ctx->r2 = ADD32(0, 0X94);
    // 0x0028E7EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028E7F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028E7F4: jal         0x0029B060
    // 0x0028E7F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x0028E7F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x0028E7FC: jal         0x0029BB10
    // 0x0028E800: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x0028E800: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0028E804: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0028E808: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x0028E80C: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_0028E810:
    // 0x0028E810: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028E814: addiu       $a0, $a0, 0x6C4
    ctx->r4 = ADD32(ctx->r4, 0X6C4);
    // 0x0028E818: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0028E81C: jal         0x0029B6F0
    // 0x0028E820: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0028E820: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0028E824: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0028E828: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x0028E82C: beq         $v1, $s2, L_0028E874
    if (ctx->r3 == ctx->r18) {
        // 0x0028E830: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0028E874;
    }
    // 0x0028E830: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0028E834: beq         $v0, $zero, L_0028E84C
    if (ctx->r2 == 0) {
        // 0x0028E838: nop
    
            goto L_0028E84C;
    }
    // 0x0028E838: nop

    // 0x0028E83C: beq         $v1, $zero, L_0028E864
    if (ctx->r3 == 0) {
        // 0x0028E840: nop
    
            goto L_0028E864;
    }
    // 0x0028E840: nop

    // 0x0028E844: j           L_0028E810
    // 0x0028E848: nop

        goto L_0028E810;
    // 0x0028E848: nop

L_0028E84C:
    // 0x0028E84C: beq         $v1, $s1, L_0028E894
    if (ctx->r3 == ctx->r17) {
        // 0x0028E850: nop
    
            goto L_0028E894;
    }
    // 0x0028E850: nop

    // 0x0028E854: beq         $v1, $s0, L_0028E884
    if (ctx->r3 == ctx->r16) {
        // 0x0028E858: nop
    
            goto L_0028E884;
    }
    // 0x0028E858: nop

    // 0x0028E85C: j           L_0028E810
    // 0x0028E860: nop

        goto L_0028E810;
    // 0x0028E860: nop

L_0028E864:
    // 0x0028E864: jal         0x0028E068
    // 0x0028E868: nop

    func_0028E068(rdram, ctx);
        goto after_4;
    // 0x0028E868: nop

    after_4:
    // 0x0028E86C: j           L_0028E810
    // 0x0028E870: nop

        goto L_0028E810;
    // 0x0028E870: nop

L_0028E874:
    // 0x0028E874: jal         0x0028ED10
    // 0x0028E878: nop

    func_0028ED10(rdram, ctx);
        goto after_5;
    // 0x0028E878: nop

    after_5:
    // 0x0028E87C: j           L_0028E810
    // 0x0028E880: nop

        goto L_0028E810;
    // 0x0028E880: nop

L_0028E884:
    // 0x0028E884: jal         0x0028EC54
    // 0x0028E888: nop

    func_0028EC54(rdram, ctx);
        goto after_6;
    // 0x0028E888: nop

    after_6:
    // 0x0028E88C: j           L_0028E810
    // 0x0028E890: nop

        goto L_0028E810;
    // 0x0028E890: nop

L_0028E894:
    // 0x0028E894: jal         0x0028EB54
    // 0x0028E898: nop

    func_0028EB54(rdram, ctx);
        goto after_7;
    // 0x0028E898: nop

    after_7:
    // 0x0028E89C: j           L_0028E810
    // 0x0028E8A0: nop

        goto L_0028E810;
    // 0x0028E8A0: nop

    // 0x0028E8A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0028E8A8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0028E8AC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0028E8B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E8B4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0028E8B8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0028E8BC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0028E8C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0028E8C4: jal         0x0029B030
    // 0x0028E8C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x0028E8C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_8:
    // 0x0028E8CC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0028E8D0: addiu       $s1, $s1, 0x1178
    ctx->r17 = ADD32(ctx->r17, 0X1178);
    // 0x0028E8D4: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x0028E8D8: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
    // 0x0028E8DC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0028E8E0: addiu       $s0, $s0, 0x2000
    ctx->r16 = ADD32(ctx->r16, 0X2000);
    // 0x0028E8E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0028E8E8:
    // 0x0028E8E8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x0028E8EC: jal         0x0029B6F0
    // 0x0028E8F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x0028E8F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x0028E8F4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E8F8: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x0028E8FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0028E900: bnel        $v0, $s3, L_0028E970
    if (ctx->r2 != ctx->r19) {
        // 0x0028E904: addiu       $a0, $s1, -0xAB4
        ctx->r4 = ADD32(ctx->r17, -0XAB4);
            goto L_0028E970;
    }
    goto skip_0;
    // 0x0028E904: addiu       $a0, $s1, -0xAB4
    ctx->r4 = ADD32(ctx->r17, -0XAB4);
    skip_0:
    // 0x0028E908: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0028E90C: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x0028E910: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x0028E914: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x0028E918: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0028E91C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028E920: lbu         $a3, 0xA($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0XA);
    // 0x0028E924: and         $a2, $a2, $s2
    ctx->r6 = ctx->r6 & ctx->r18;
    // 0x0028E928: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x0028E92C: jal         0x00201DBC
    // 0x0028E930: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    func_00201DBC(rdram, ctx);
        goto after_10;
    // 0x0028E930: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    after_10:
    // 0x0028E934: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E938: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0028E93C: lbu         $a0, 0xA($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XA);
    // 0x0028E940: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x0028E944: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x0028E948: jal         0x0029E030
    // 0x0028E94C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0029E030(rdram, ctx);
        goto after_11;
    // 0x0028E94C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_11:
    // 0x0028E950: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E954: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0028E958: lbu         $a0, 0xA($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XA);
    // 0x0028E95C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x0028E960: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x0028E964: jal         0x0029E0D0
    // 0x0028E968: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0029E0D0(rdram, ctx);
        goto after_12;
    // 0x0028E968: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_12:
    // 0x0028E96C: addiu       $a0, $s1, -0xAB4
    ctx->r4 = ADD32(ctx->r17, -0XAB4);
L_0028E970:
    // 0x0028E970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E974: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E978: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0028E97C: jal         0x0029B820
    // 0x0028E980: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    osSendMesg_recomp(rdram, ctx);
        goto after_13;
    // 0x0028E980: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    after_13:
    // 0x0028E984: j           L_0028E8E8
    // 0x0028E988: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0028E8E8;
    // 0x0028E988: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028E98C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0028E990: beq         $v1, $zero, L_0028E9A4
    if (ctx->r3 == 0) {
        // 0x0028E994: nop
    
            goto L_0028E9A4;
    }
    // 0x0028E994: nop

    // 0x0028E998: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028E99C: j           L_0028E9B4
    // 0x0028E9A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0028E9B4;
    // 0x0028E9A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0028E9A4:
    // 0x0028E9A4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028E9A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0028E9AC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028E9B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028E9B4:
    // 0x0028E9B4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0028E9B8: beq         $v1, $zero, L_0028E9CC
    if (ctx->r3 == 0) {
            // 0x0028E9BC: nop

    func_0028E9CC(rdram, ctx);
    return;
    }
    // 0x0028E9BC: nop

    // 0x0028E9C0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0028E9C4: jr          $ra
    // 0x0028E9C8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    return;
    // 0x0028E9C8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_00402E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00402E70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402E74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402E78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00402E7C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00402E80: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00402E84: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00402E88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00402E8C: jal         0x002532A8
    // 0x00402E90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00402E90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00402E94: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00402E98: addiu       $s1, $s1, -0xC60
    ctx->r17 = ADD32(ctx->r17, -0XC60);
    // 0x00402E9C: beq         $v0, $zero, L_00402EC4
    if (ctx->r2 == 0) {
        // 0x00402EA0: nop
    
            goto L_00402EC4;
    }
    // 0x00402EA0: nop

    // 0x00402EA4: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00402EA8: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x00402EAC: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x00402EB0: jal         0x00246310
    // 0x00402EB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246310(rdram, ctx);
        goto after_1;
    // 0x00402EB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00402EB8: lwc1        $f1, 0x50($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X50);
    // 0x00402EBC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00402EC0: swc1        $f1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00402EC4:
    // 0x00402EC4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00402EC8: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00402ECC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00402ED0: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00402ED4: beq         $v0, $zero, L_00402F34
    if (ctx->r2 == 0) {
        // 0x00402ED8: addiu       $a2, $zero, 0x5ADC
        ctx->r6 = ADD32(0, 0X5ADC);
            goto L_00402F34;
    }
    // 0x00402ED8: addiu       $a2, $zero, 0x5ADC
    ctx->r6 = ADD32(0, 0X5ADC);
    // 0x00402EDC: lw          $a0, 0x220($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X220);
    // 0x00402EE0: jal         0x002666B0
    // 0x00402EE4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_2;
    // 0x00402EE4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_2:
    // 0x00402EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402EEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00402EF0: jal         0x00243414
    // 0x00402EF4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00402EF4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_3:
    // 0x00402EF8: lw          $v0, 0x214($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X214);
    // 0x00402EFC: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x00402F00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00402F04: beq         $v1, $v0, L_00402F34
    if (ctx->r3 == ctx->r2) {
        // 0x00402F08: nop
    
            goto L_00402F34;
    }
    // 0x00402F08: nop

    // 0x00402F0C: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x00402F10: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00402F14: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00402F18: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00402F1C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00402F20: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00402F24: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00402F28: addiu       $a1, $a1, 0x954
    ctx->r5 = ADD32(ctx->r5, 0X954);
    // 0x00402F2C: jal         0x00236314
    // 0x00402F30: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_00236314(rdram, ctx);
        goto after_4;
    // 0x00402F30: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_4:
L_00402F34:
    // 0x00402F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00402F38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00402F3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00402F40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402F44: jr          $ra
    // 0x00402F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00402F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045C998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C998: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045C99C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C9A0: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x0045C9A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C9A8: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x0045C9AC: jr          $ra
    // 0x0045C9B0: nop

    return;
    // 0x0045C9B0: nop

;}
RECOMP_FUNC void func_0041B844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B844: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B848: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B84C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0041B850: beq         $v0, $zero, L_0041B864
    if (ctx->r2 == 0) {
        // 0x0041B854: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B864;
    }
    // 0x0041B854: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B858: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B85C: j           L_0041B874
    // 0x0041B860: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B874;
    // 0x0041B860: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B864:
    // 0x0041B864: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B868: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B86C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B870: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B874:
    // 0x0041B874: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B878: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B87C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B880: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0041B884: beq         $v0, $zero, L_0041B89C
    if (ctx->r2 == 0) {
        // 0x0041B888: nop
    
            goto L_0041B89C;
    }
    // 0x0041B888: nop

    // 0x0041B88C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B890: addiu       $v0, $v0, 0x5A4C
    ctx->r2 = ADD32(ctx->r2, 0X5A4C);
    // 0x0041B894: j           L_0041B8A8
    // 0x0041B898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B8A8;
    // 0x0041B898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B89C:
    // 0x0041B89C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B8A0: addiu       $v0, $v0, 0x5A68
    ctx->r2 = ADD32(ctx->r2, 0X5A68);
    // 0x0041B8A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B8A8:
    // 0x0041B8A8: jr          $ra
    // 0x0041B8AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B8AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00419534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419538: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x0041953C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419540: addiu       $a2, $a2, -0x708C
    ctx->r6 = ADD32(ctx->r6, -0X708C);
    // 0x00419544: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419548: jal         0x00416894
    // 0x0041954C: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x0041954C: nop

    after_0:
    // 0x00419550: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419558: jr          $ra
    // 0x0041955C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041955C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266A7C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00266A80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00266A84: jal         0x00412314
    // 0x00266A88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00412314(rdram, ctx);
        goto after_0;
    // 0x00266A88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00266A8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00266A90: jr          $ra
    // 0x00266A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B690: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B694: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B698: xori        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 ^ 0X200;
    // 0x0041B69C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B6A0: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B6A4: jr          $ra
    // 0x0041B6A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B6A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00450D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450D68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00450D6C: sw          $zero, 0x8FC($at)
    MEM_W(0X8FC, ctx->r1) = 0;
    // 0x00450D70: jr          $ra
    // 0x00450D74: nop

    return;
    // 0x00450D74: nop

;}
RECOMP_FUNC void func_00419B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419B4C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419B50: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419B54: addiu       $a2, $a2, -0x632C
    ctx->r6 = ADD32(ctx->r6, -0X632C);
    // 0x00419B58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419B5C: jal         0x00416894
    // 0x00419B60: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419B60: nop

    after_0:
    // 0x00419B64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419B6C: jr          $ra
    // 0x00419B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004489F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004489F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x004489F8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x004489FC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00448A00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00448A04: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00448A08: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00448A0C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00448A10: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00448A14: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00448A18: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00448A1C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00448A20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00448A24: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00448A28: jal         0x00200B00
    // 0x00448A2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00448A2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x00448A30: beq         $v0, $zero, L_00448D3C
    if (ctx->r2 == 0) {
        // 0x00448A34: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00448D3C;
    }
    // 0x00448A34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00448A38: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00448A3C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x00448A40: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00448A44: jal         0x002017D4
    // 0x00448A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00448A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00448A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448A50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00448A54: jal         0x002017D4
    // 0x00448A58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00448A58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x00448A5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00448A64: jal         0x002017D4
    // 0x00448A68: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00448A68: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    after_3:
    // 0x00448A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448A70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00448A74: jal         0x002017D4
    // 0x00448A78: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00448A78: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00448A7C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x00448A80: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00448A84: addiu       $a0, $zero, -0x8
    ctx->r4 = ADD32(0, -0X8);
    // 0x00448A88: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x00448A8C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00448A90: sll         $v1, $t0, 2
    ctx->r3 = S32(ctx->r8 << 2);
    // 0x00448A94: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    // 0x00448A98: and         $s1, $v1, $a0
    ctx->r17 = ctx->r3 & ctx->r4;
    // 0x00448A9C: blez        $t0, L_00448B0C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00448AA0: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_00448B0C;
    }
    // 0x00448AA0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_00448AA4:
    // 0x00448AA4: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x00448AA8: jal         0x002017D4
    // 0x00448AAC: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00448AAC: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_5:
    // 0x00448AB0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00448AB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448AB8: jal         0x002017D4
    // 0x00448ABC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00448ABC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00448AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448AC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00448AC8: jal         0x002017D4
    // 0x00448ACC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00448ACC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00448AD0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x00448AD4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00448AD8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00448ADC: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00448AE0: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x00448AE4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00448AE8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00448AEC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00448AF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00448AF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00448AF8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x00448AFC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x00448B00: slt         $v1, $fp, $v1
    ctx->r3 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00448B04: bne         $v1, $zero, L_00448AA4
    if (ctx->r3 != 0) {
        // 0x00448B08: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_00448AA4;
    }
    // 0x00448B08: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_00448B0C:
    // 0x00448B0C: jal         0x002018D8
    // 0x00448B10: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_002018D8(rdram, ctx);
        goto after_8;
    // 0x00448B10: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_8:
    // 0x00448B14: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00448B18: jal         0x002018D8
    // 0x00448B1C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_002018D8(rdram, ctx);
        goto after_9;
    // 0x00448B1C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_9:
    // 0x00448B20: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00448B24: jal         0x002018D8
    // 0x00448B28: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_002018D8(rdram, ctx);
        goto after_10;
    // 0x00448B28: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_10:
    // 0x00448B2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00448B30: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00448B34: addu        $a2, $s1, $s2
    ctx->r6 = ADD32(ctx->r17, ctx->r18);
    // 0x00448B38: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    // 0x00448B3C: addu        $a2, $a2, $s4
    ctx->r6 = ADD32(ctx->r6, ctx->r20);
    // 0x00448B40: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x00448B44: jal         0x00205D7C
    // 0x00448B48: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    func_00205D7C(rdram, ctx);
        goto after_11;
    // 0x00448B48: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    after_11:
    // 0x00448B4C: beq         $v0, $zero, L_00448D3C
    if (ctx->r2 == 0) {
        // 0x00448B50: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_00448D3C;
    }
    // 0x00448B50: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00448B54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00448B58: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00448B5C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x00448B60: jal         0x00218548
    // 0x00448B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00218548(rdram, ctx);
        goto after_12;
    // 0x00448B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00448B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448B6C: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x00448B70: jal         0x00218590
    // 0x00448B74: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00218590(rdram, ctx);
        goto after_13;
    // 0x00448B74: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_13:
    // 0x00448B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448B7C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00448B80: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00448B84: jal         0x00218590
    // 0x00448B88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00218590(rdram, ctx);
        goto after_14;
    // 0x00448B88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_14:
    // 0x00448B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448B90: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00448B94: jal         0x00218590
    // 0x00448B98: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00218590(rdram, ctx);
        goto after_15;
    // 0x00448B98: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_15:
    // 0x00448B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00448BA0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00448BA4: jal         0x00218590
    // 0x00448BA8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00218590(rdram, ctx);
        goto after_16;
    // 0x00448BA8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_16:
    // 0x00448BAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00448BB0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x00448BB4: jal         0x00218548
    // 0x00448BB8: nop

    func_00218548(rdram, ctx);
        goto after_17;
    // 0x00448BB8: nop

    after_17:
    // 0x00448BBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x00448BC0: blez        $t0, L_00448D2C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00448BC4: nop
    
            goto L_00448D2C;
    }
    // 0x00448BC4: nop

L_00448BC8:
    // 0x00448BC8: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x00448BCC: jal         0x002017D4
    // 0x00448BD0: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002017D4(rdram, ctx);
        goto after_18;
    // 0x00448BD0: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_18:
    // 0x00448BD4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00448BD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448BDC: jal         0x002017D4
    // 0x00448BE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x00448BE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_19:
    // 0x00448BE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448BE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00448BEC: jal         0x002017D4
    // 0x00448BF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_20;
    // 0x00448BF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_20:
    // 0x00448BF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00448BF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00448BFC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00448C00: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00448C04: sll         $v1, $a2, 3
    ctx->r3 = S32(ctx->r6 << 3);
    // 0x00448C08: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00448C0C: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
    // 0x00448C10: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00448C14: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x00448C18: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x00448C1C: jal         0x00218590
    // 0x00448C20: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    func_00218590(rdram, ctx);
        goto after_21;
    // 0x00448C20: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    after_21:
    // 0x00448C24: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00448C28: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00448C2C: jal         0x00218548
    // 0x00448C30: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_00218548(rdram, ctx);
        goto after_22;
    // 0x00448C30: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_22:
    // 0x00448C34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448C38: jal         0x002017D4
    // 0x00448C3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_23;
    // 0x00448C3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_23:
    // 0x00448C40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448C44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00448C48: jal         0x002017D4
    // 0x00448C4C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_24;
    // 0x00448C4C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_24:
    // 0x00448C50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448C54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00448C58: jal         0x002017D4
    // 0x00448C5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_25;
    // 0x00448C5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_25:
    // 0x00448C60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448C64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00448C68: jal         0x002017D4
    // 0x00448C6C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_26;
    // 0x00448C6C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_26:
    // 0x00448C70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448C74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00448C78: jal         0x002017D4
    // 0x00448C7C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_27;
    // 0x00448C7C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_27:
    // 0x00448C80: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00448C84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00448C88: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x00448C8C: lw          $s1, 0x4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X4);
    // 0x00448C90: lw          $s2, 0x4($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X4);
    // 0x00448C94: sll         $a2, $s1, 3
    ctx->r6 = S32(ctx->r17 << 3);
    // 0x00448C98: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x00448C9C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x00448CA0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00448CA4: sll         $s0, $s2, 3
    ctx->r16 = S32(ctx->r18 << 3);
    // 0x00448CA8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x00448CAC: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00448CB0: jal         0x00218590
    // 0x00448CB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    func_00218590(rdram, ctx);
        goto after_28;
    // 0x00448CB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_28:
    // 0x00448CB8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00448CBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00448CC0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00448CC4: jal         0x00218590
    // 0x00448CC8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00218590(rdram, ctx);
        goto after_29;
    // 0x00448CC8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_29:
    // 0x00448CCC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00448CD0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00448CD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00448CD8: jal         0x00218590
    // 0x00448CDC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    func_00218590(rdram, ctx);
        goto after_30;
    // 0x00448CDC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    after_30:
    // 0x00448CE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00448CE4: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x00448CE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00448CEC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00448CF0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00448CF4: jal         0x0040F5B8
    // 0x00448CF8: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    func_0040F5B8(rdram, ctx);
        goto after_31;
    // 0x00448CF8: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    after_31:
    // 0x00448CFC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00448D00: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x00448D04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00448D08: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x00448D0C: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x00448D10: jal         0x0040F5B8
    // 0x00448D14: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F5B8(rdram, ctx);
        goto after_32;
    // 0x00448D14: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_32:
    // 0x00448D18: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x00448D1C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x00448D20: slt         $v0, $fp, $t0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00448D24: bne         $v0, $zero, L_00448BC8
    if (ctx->r2 != 0) {
        // 0x00448D28: nop
    
            goto L_00448BC8;
    }
    // 0x00448D28: nop

L_00448D2C:
    // 0x00448D2C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x00448D30: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x00448D34: jal         0x002057B0
    // 0x00448D38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_33;
    // 0x00448D38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_33:
L_00448D3C:
    // 0x00448D3C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00448D40: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x00448D44: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00448D48: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00448D4C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00448D50: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00448D54: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00448D58: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00448D5C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00448D60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00448D64: jr          $ra
    // 0x00448D68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00448D68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00232AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232AC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00232AC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00232ACC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00232AD0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00232AD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00232AD8: lw          $v1, 0x1B8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1B8);
    // 0x00232ADC: beq         $v1, $zero, L_00232B04
    if (ctx->r3 == 0) {
        // 0x00232AE0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00232B04;
    }
    // 0x00232AE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00232AE4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x00232AE8: bne         $v0, $s1, L_00232AFC
    if (ctx->r2 != ctx->r17) {
        // 0x00232AEC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00232AFC;
    }
    // 0x00232AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00232AF0: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x00232AF4: bne         $v1, $v0, L_00232B2C
    if (ctx->r3 != ctx->r2) {
        // 0x00232AF8: nop
    
            goto L_00232B2C;
    }
    // 0x00232AF8: nop

L_00232AFC:
    // 0x00232AFC: jal         0x00232B40
    // 0x00232B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_0;
    // 0x00232B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_00232B04:
    // 0x00232B04: jal         0x00275F7C
    // 0x00232B08: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x00232B08: nop

    after_1:
    // 0x00232B0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00232B10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00232B14: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x00232B18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00232B1C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00232B20: jal         0x00275C6C
    // 0x00232B24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00275C6C(rdram, ctx);
        goto after_2;
    // 0x00232B24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00232B28: sw          $v0, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->r2;
L_00232B2C:
    // 0x00232B2C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00232B30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00232B34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00232B38: jr          $ra
    // 0x00232B3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00232B3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0023ECF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023ECF8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023ECFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023ED00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023ED04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023ED08: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023ED0C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0023ED10: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0023ED14: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0023ED18: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023ED1C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023ED20: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x0023ED24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023ED28: beq         $a1, $v0, L_0023ED7C
    if (ctx->r5 == ctx->r2) {
        // 0x0023ED2C: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0023ED7C;
    }
    // 0x0023ED2C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0023ED30: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x0023ED34: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0023ED38: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0023ED3C: beq         $v0, $zero, L_0023ED7C
    if (ctx->r2 == 0) {
        // 0x0023ED40: nop
    
            goto L_0023ED7C;
    }
    // 0x0023ED40: nop

    // 0x0023ED44: lh          $a2, 0x10($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X10);
    // 0x0023ED48: jal         0x00253B54
    // 0x0023ED4C: nop

    func_00253B54(rdram, ctx);
        goto after_0;
    // 0x0023ED4C: nop

    after_0:
    // 0x0023ED50: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0023ED54: bne         $s5, $zero, L_0023ED7C
    if (ctx->r21 != 0) {
        // 0x0023ED58: nop
    
            goto L_0023ED7C;
    }
    // 0x0023ED58: nop

    // 0x0023ED5C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0023ED60: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0023ED64: beq         $v0, $zero, L_0023EF0C
    if (ctx->r2 == 0) {
        // 0x0023ED68: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023EF0C;
    }
    // 0x0023ED68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023ED6C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0023ED70: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0023ED74: beq         $v0, $zero, L_0023EF0C
    if (ctx->r2 == 0) {
        // 0x0023ED78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023EF0C;
    }
    // 0x0023ED78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023ED7C:
    // 0x0023ED7C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0023ED80: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0023ED84: beq         $v0, $zero, L_0023EDB8
    if (ctx->r2 == 0) {
        // 0x0023ED88: nop
    
            goto L_0023EDB8;
    }
    // 0x0023ED88: nop

    // 0x0023ED8C: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x0023ED90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023ED94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023ED98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0023ED9C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0023EDA0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0023EDA4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0023EDA8: bne         $v0, $zero, L_0023EDDC
    if (ctx->r2 != 0) {
        // 0x0023EDAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023EDDC;
    }
    // 0x0023EDAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023EDB0: j           L_0023EF0C
    // 0x0023EDB4: nop

        goto L_0023EF0C;
    // 0x0023EDB4: nop

L_0023EDB8:
    // 0x0023EDB8: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x0023EDBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023EDC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023EDC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0023EDC8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0023EDCC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0023EDD0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0023EDD4: bne         $v0, $zero, L_0023EF0C
    if (ctx->r2 != 0) {
        // 0x0023EDD8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023EF0C;
    }
    // 0x0023EDD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023EDDC:
    // 0x0023EDDC: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x0023EDE0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0023EDE4: lb          $a1, 0x972($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X972);
    // 0x0023EDE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0023EDEC: sb          $v1, 0x972($v0)
    MEM_B(0X972, ctx->r2) = ctx->r3;
    // 0x0023EDF0: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x0023EDF4: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x0023EDF8: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x0023EDFC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0023EE00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023EE04: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0023EE08: lw          $v1, -0x9E8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X9E8);
    // 0x0023EE0C: beql        $v0, $zero, L_0023EE6C
    if (ctx->r2 == 0) {
        // 0x0023EE10: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023EE6C;
    }
    goto skip_0;
    // 0x0023EE10: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_0:
    // 0x0023EE14: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x0023EE18: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023EE1C: beq         $v0, $zero, L_0023EE3C
    if (ctx->r2 == 0) {
        // 0x0023EE20: nop
    
            goto L_0023EE3C;
    }
    // 0x0023EE20: nop

    // 0x0023EE24: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0023EE28: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0023EE2C: bne         $v0, $zero, L_0023EE4C
    if (ctx->r2 != 0) {
        // 0x0023EE30: nop
    
            goto L_0023EE4C;
    }
    // 0x0023EE30: nop

    // 0x0023EE34: j           L_0023EE6C
    // 0x0023EE38: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0023EE6C;
    // 0x0023EE38: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023EE3C:
    // 0x0023EE3C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0023EE40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0023EE44: beql        $v0, $zero, L_0023EE6C
    if (ctx->r2 == 0) {
        // 0x0023EE48: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023EE6C;
    }
    goto skip_1;
    // 0x0023EE48: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_1:
L_0023EE4C:
    // 0x0023EE4C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0023EE50: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0023EE54: bnel        $v0, $zero, L_0023EE6C
    if (ctx->r2 != 0) {
        // 0x0023EE58: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023EE6C;
    }
    goto skip_2;
    // 0x0023EE58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_2:
    // 0x0023EE5C: bne         $a1, $zero, L_0023EE6C
    if (ctx->r5 != 0) {
        // 0x0023EE60: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023EE6C;
    }
    // 0x0023EE60: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023EE64: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x0023EE68: sh          $v0, 0xB14($s0)
    MEM_H(0XB14, ctx->r16) = ctx->r2;
L_0023EE6C:
    // 0x0023EE6C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023EE70: lh          $s3, 0x6($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X6);
    // 0x0023EE74: lh          $s4, 0x8($s1)
    ctx->r20 = MEM_H(ctx->r17, 0X8);
    // 0x0023EE78: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x0023EE7C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023EE80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023EE84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023EE88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023EE8C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023EE90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023EE94: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0023EE98: jal         0x00281060
    // 0x0023EE9C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x0023EE9C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x0023EEA0: beq         $s2, $zero, L_0023EEBC
    if (ctx->r18 == 0) {
        // 0x0023EEA4: nop
    
            goto L_0023EEBC;
    }
    // 0x0023EEA4: nop

    // 0x0023EEA8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023EEAC: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023EEB0: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x0023EEB4: jal         0x0027FC2C
    // 0x0023EEB8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0027FC2C(rdram, ctx);
        goto after_2;
    // 0x0023EEB8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
L_0023EEBC:
    // 0x0023EEBC: beq         $s3, $zero, L_0023EEE0
    if (ctx->r19 == 0) {
        // 0x0023EEC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023EEE0;
    }
    // 0x0023EEC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023EEC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023EEC8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023EECC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0023EED0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0023EED4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0023EED8: jal         0x00275544
    // 0x0023EEDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0023EEDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
L_0023EEE0:
    // 0x0023EEE0: beq         $s4, $zero, L_0023EEF0
    if (ctx->r20 == 0) {
        // 0x0023EEE4: nop
    
            goto L_0023EEF0;
    }
    // 0x0023EEE4: nop

    // 0x0023EEE8: jal         0x0027580C
    // 0x0023EEEC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0027580C(rdram, ctx);
        goto after_4;
    // 0x0023EEEC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
L_0023EEF0:
    // 0x0023EEF0: bne         $s5, $zero, L_0023EF0C
    if (ctx->r21 != 0) {
        // 0x0023EEF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023EF0C;
    }
    // 0x0023EEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023EEF8: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x0023EEFC: lh          $a2, 0x10($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X10);
    // 0x0023EF00: jal         0x00253B54
    // 0x0023EF04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253B54(rdram, ctx);
        goto after_5;
    // 0x0023EF04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0023EF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023EF0C:
    // 0x0023EF0C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0023EF10: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0023EF14: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0023EF18: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023EF1C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023EF20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023EF24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023EF28: jr          $ra
    // 0x0023EF2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023EF2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0027392C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027392C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00273930: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00273934: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00273938: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0027393C: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00273940: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00273944: addiu       $s3, $s6, 0x4
    ctx->r19 = ADD32(ctx->r22, 0X4);
    // 0x00273948: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027394C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00273950: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00273954: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00273958: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0027395C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00273960: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00273964: addiu       $s1, $s6, 0x8
    ctx->r17 = ADD32(ctx->r22, 0X8);
    // 0x00273968: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0027396C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00273970:
    // 0x00273970: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00273974: beql        $v0, $s4, L_002739F8
    if (ctx->r2 == ctx->r20) {
        // 0x00273978: addiu       $s1, $s1, 0xCC
        ctx->r17 = ADD32(ctx->r17, 0XCC);
            goto L_002739F8;
    }
    goto skip_0;
    // 0x00273978: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
    skip_0:
    // 0x0027397C: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00273980: lh          $v0, 0x102($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X102);
    // 0x00273984: beql        $v0, $s2, L_002739F8
    if (ctx->r2 == ctx->r18) {
        // 0x00273988: addiu       $s1, $s1, 0xCC
        ctx->r17 = ADD32(ctx->r17, 0XCC);
            goto L_002739F8;
    }
    goto skip_1;
    // 0x00273988: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
    skip_1:
    // 0x0027398C: beq         $s7, $s4, L_002739A0
    if (ctx->r23 == ctx->r20) {
        // 0x00273990: nop
    
            goto L_002739A0;
    }
    // 0x00273990: nop

    // 0x00273994: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x00273998: beql        $v0, $s7, L_002739F8
    if (ctx->r2 == ctx->r23) {
        // 0x0027399C: addiu       $s1, $s1, 0xCC
        ctx->r17 = ADD32(ctx->r17, 0XCC);
            goto L_002739F8;
    }
    goto skip_2;
    // 0x0027399C: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
    skip_2:
L_002739A0:
    // 0x002739A0: lw          $a0, 0xAC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XAC);
    // 0x002739A4: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x002739A8: sw          $s5, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r21;
    // 0x002739AC: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x002739B0: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x002739B4: beql        $v1, $v0, L_002739F8
    if (ctx->r3 == ctx->r2) {
        // 0x002739B8: addiu       $s1, $s1, 0xCC
        ctx->r17 = ADD32(ctx->r17, 0XCC);
            goto L_002739F8;
    }
    goto skip_3;
    // 0x002739B8: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
    skip_3:
    // 0x002739BC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x002739C0: addiu       $s0, $a0, 0x84
    ctx->r16 = ADD32(ctx->r4, 0X84);
    // 0x002739C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002739C8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002739CC: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x002739D0: jal         0x00293E60
    // 0x002739D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x002739D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002739D8: jal         0x00293580
    // 0x002739DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x002739DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002739E0: beql        $v0, $zero, L_002739F4
    if (ctx->r2 == 0) {
        // 0x002739E4: sw          $s4, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r20;
            goto L_002739F4;
    }
    goto skip_4;
    // 0x002739E4: sw          $s4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r20;
    skip_4:
    // 0x002739E8: jal         0x00293EC0
    // 0x002739EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x002739EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002739F0: sw          $s4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r20;
L_002739F4:
    // 0x002739F4: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
L_002739F8:
    // 0x002739F8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002739FC: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x00273A00: bne         $v0, $zero, L_00273970
    if (ctx->r2 != 0) {
        // 0x00273A04: addiu       $s3, $s3, 0xCC
        ctx->r19 = ADD32(ctx->r19, 0XCC);
            goto L_00273970;
    }
    // 0x00273A04: addiu       $s3, $s3, 0xCC
    ctx->r19 = ADD32(ctx->r19, 0XCC);
    // 0x00273A08: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00273A0C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00273A10: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00273A14: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00273A18: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00273A1C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00273A20: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00273A24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00273A28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273A2C: jr          $ra
    // 0x00273A30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00273A30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00419A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419A90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419A94: jal         0x00275F7C
    // 0x00419A98: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x00419A98: nop

    after_0:
    // 0x00419A9C: jal         0x00275E1C
    // 0x00419AA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275E1C(rdram, ctx);
        goto after_1;
    // 0x00419AA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00419AA4: jal         0x00275A74
    // 0x00419AA8: nop

    func_00275A74(rdram, ctx);
        goto after_2;
    // 0x00419AA8: nop

    after_2:
    // 0x00419AAC: jal         0x00275ABC
    // 0x00419AB0: nop

    func_00275ABC(rdram, ctx);
        goto after_3;
    // 0x00419AB0: nop

    after_3:
    // 0x00419AB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419ABC: jr          $ra
    // 0x00419AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DD60: jr          $ra
    // 0x0040DD64: nop

    return;
    // 0x0040DD64: nop

;}
RECOMP_FUNC void func_004460F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004460F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004460F4: lwc1        $f12, 0x8E0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8E0);
    // 0x004460F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004460FC: lwc1        $f14, 0x8E4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8E4);
    // 0x00446100: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x00446104: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x00446108: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x0044610C: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x00446110: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x00446114: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x00446118: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0044611C: sdc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X98, ctx->r29);
    // 0x00446120: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
    // 0x00446124: jal         0x002119FC
    // 0x00446128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00446128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0044612C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446130: lwc1        $f12, 0x8E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8E8);
    // 0x00446134: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446138: lwc1        $f14, 0x8EC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8EC);
    // 0x0044613C: jal         0x002119FC
    // 0x00446140: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00446140: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x00446144: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x00446148: addiu       $s3, $s0, 0x504
    ctx->r19 = ADD32(ctx->r16, 0X504);
    // 0x0044614C: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x00446150: lw          $v1, 0x508($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X508);
    // 0x00446154: lw          $s4, 0x4F0($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X4F0);
    // 0x00446158: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x0044615C: beq         $s1, $zero, L_00446170
    if (ctx->r17 == 0) {
        // 0x00446160: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_00446170;
    }
    // 0x00446160: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00446164: lw          $v0, 0x500($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X500);
    // 0x00446168: beq         $v0, $zero, L_004462AC
    if (ctx->r2 == 0) {
        // 0x0044616C: nop
    
            goto L_004462AC;
    }
    // 0x0044616C: nop

L_00446170:
    // 0x00446170: beq         $s3, $zero, L_00446190
    if (ctx->r19 == 0) {
        // 0x00446174: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00446190;
    }
    // 0x00446174: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00446178: beq         $v1, $v0, L_00446190
    if (ctx->r3 == ctx->r2) {
        // 0x0044617C: nop
    
            goto L_00446190;
    }
    // 0x0044617C: nop

    // 0x00446180: lw          $v0, 0x504($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X504);
    // 0x00446184: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00446188: beq         $v0, $zero, L_004462A0
    if (ctx->r2 == 0) {
        // 0x0044618C: nop
    
            goto L_004462A0;
    }
    // 0x0044618C: nop

L_00446190:
    // 0x00446190: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446194: lwc1        $f0, 0x8F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8F0);
    // 0x00446198: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0044619C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x004461A0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004461A4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004461A8: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x004461AC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x004461B0: jal         0x002982F0
    // 0x004461B4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x004461B4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x004461B8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x004461BC: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x004461C0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004461C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x004461C8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x004461CC: jal         0x002974C0
    // 0x004461D0: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x004461D0: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_3:
    // 0x004461D4: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x004461D8: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x004461DC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004461E0: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x004461E4: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x004461E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004461EC: addiu       $v0, $sp, 0x70
    ctx->r2 = ADD32(ctx->r29, 0X70);
    // 0x004461F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004461F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x004461F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x004461FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00446200: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x00446204: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x00446208: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x0044620C: jal         0x002688C8
    // 0x00446210: nop

    func_002688C8(rdram, ctx);
        goto after_4;
    // 0x00446210: nop

    after_4:
    // 0x00446214: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00446218: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x0044621C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00446220: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x00446224: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x00446228: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x0044622C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00446230: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00446234: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00446238: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x0044623C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00446240: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00446244: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x00446248: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x0044624C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00446250: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00446254: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00446258: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0044625C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00446260: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00446264: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00446268: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x0044626C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00446270: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00446274: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x00446278: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0044627C: jal         0x00228108
    // 0x00446280: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    func_00228108(rdram, ctx);
        goto after_5;
    // 0x00446280: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    after_5:
    // 0x00446284: beq         $v0, $zero, L_004462A0
    if (ctx->r2 == 0) {
        // 0x00446288: nop
    
            goto L_004462A0;
    }
    // 0x00446288: nop

    // 0x0044628C: beq         $s1, $zero, L_004462A0
    if (ctx->r17 == 0) {
        // 0x00446290: nop
    
            goto L_004462A0;
    }
    // 0x00446290: nop

    // 0x00446294: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00446298: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0044629C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_004462A0:
    // 0x004462A0: lw          $v0, 0x500($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X500);
    // 0x004462A4: bne         $v0, $zero, L_00446380
    if (ctx->r2 != 0) {
        // 0x004462A8: nop
    
            goto L_00446380;
    }
    // 0x004462A8: nop

L_004462AC:
    // 0x004462AC: lw          $v0, 0x504($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X504);
    // 0x004462B0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x004462B4: beq         $v0, $zero, L_00446380
    if (ctx->r2 == 0) {
        // 0x004462B8: nop
    
            goto L_00446380;
    }
    // 0x004462B8: nop

    // 0x004462BC: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x004462C0: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x004462C4: sw          $v1, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r3;
    // 0x004462C8: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x004462CC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x004462D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004462D4: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x004462D8: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x004462DC: blez        $v0, L_00446304
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004462E0: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_00446304;
    }
    // 0x004462E0: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x004462E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004462E8:
    // 0x004462E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004462EC: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004462F0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x004462F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004462F8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004462FC: bne         $v0, $zero, L_004462E8
    if (ctx->r2 != 0) {
        // 0x00446300: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_004462E8;
    }
    // 0x00446300: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446304:
    // 0x00446304: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00446308: blez        $v0, L_00446330
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044630C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00446330;
    }
    // 0x0044630C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00446314:
    // 0x00446314: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00446318: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0044631C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00446320: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446324: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446328: bne         $v0, $zero, L_00446314
    if (ctx->r2 != 0) {
        // 0x0044632C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00446314;
    }
    // 0x0044632C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446330:
    // 0x00446330: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00446334: blez        $v0, L_0044635C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446338: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044635C;
    }
    // 0x00446338: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044633C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00446340:
    // 0x00446340: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x00446344: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00446348: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0044634C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446350: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446354: bne         $v0, $zero, L_00446340
    if (ctx->r2 != 0) {
        // 0x00446358: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00446340;
    }
    // 0x00446358: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0044635C:
    // 0x0044635C: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x00446360: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x00446364: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00446368: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0044636C: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00446370: beq         $v0, $zero, L_00446380
    if (ctx->r2 == 0) {
        // 0x00446374: nop
    
            goto L_00446380;
    }
    // 0x00446374: nop

    // 0x00446378: jalr        $v0
    // 0x0044637C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0044637C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_00446380:
    // 0x00446380: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x00446384: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x00446388: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0044638C: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x00446390: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x00446394: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x00446398: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x0044639C: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x004463A0: jr          $ra
    // 0x004463A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x004463A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00273EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00273EC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00273EC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00273ECC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00273ED0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00273ED4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00273ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00273EDC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00273EE0: jal         0x00271F6C
    // 0x00273EE4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_00271F6C(rdram, ctx);
        goto after_0;
    // 0x00273EE4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00273EE8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00273EEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00273EF0: jal         0x00272278
    // 0x00273EF4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00272278(rdram, ctx);
        goto after_1;
    // 0x00273EF4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00273EF8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00273EFC: sh          $v0, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r2;
    // 0x00273F00: lh          $a1, 0xC($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XC);
    // 0x00273F04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00273F08: beq         $a1, $v0, L_00273FA8
    if (ctx->r5 == ctx->r2) {
        // 0x00273F0C: nop
    
            goto L_00273FA8;
    }
    // 0x00273F0C: nop

    // 0x00273F10: lw          $a0, 0xB0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XB0);
    // 0x00273F14: jal         0x002717A8
    // 0x00273F18: nop

    func_002717A8(rdram, ctx);
        goto after_2;
    // 0x00273F18: nop

    after_2:
    // 0x00273F1C: lwl         $v1, 0x0($v0)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r2, 0X0);
    // 0x00273F20: lwr         $v1, 0x3($v0)
    ctx->r3 = do_lwr(rdram, ctx->r3, ctx->r2, 0X3);
    // 0x00273F24: lwl         $a3, 0x4($v0)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r2, 0X4);
    // 0x00273F28: lwr         $a3, 0x7($v0)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r2, 0X7);
    // 0x00273F2C: lwl         $t0, 0x8($v0)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r2, 0X8);
    // 0x00273F30: lwr         $t0, 0xB($v0)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r2, 0XB);
    // 0x00273F34: swl         $v1, 0x8C($s2)
    do_swl(rdram, 0X8C, ctx->r18, ctx->r3);
    // 0x00273F38: swr         $v1, 0x8F($s2)
    do_swr(rdram, 0X8F, ctx->r18, ctx->r3);
    // 0x00273F3C: swl         $a3, 0x90($s2)
    do_swl(rdram, 0X90, ctx->r18, ctx->r7);
    // 0x00273F40: swr         $a3, 0x93($s2)
    do_swr(rdram, 0X93, ctx->r18, ctx->r7);
    // 0x00273F44: swl         $t0, 0x94($s2)
    do_swl(rdram, 0X94, ctx->r18, ctx->r8);
    // 0x00273F48: swr         $t0, 0x97($s2)
    do_swr(rdram, 0X97, ctx->r18, ctx->r8);
    // 0x00273F4C: lhu         $a0, 0x8E($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8E);
    // 0x00273F50: jal         0x0026D210
    // 0x00273F54: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x00273F54: nop

    after_3:
    // 0x00273F58: lhu         $a0, 0x90($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X90);
    // 0x00273F5C: jal         0x0026D210
    // 0x00273F60: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x00273F60: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x00273F64: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00273F68: lh          $v0, 0x92($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X92);
    // 0x00273F6C: lhu         $a0, 0x8E($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8E);
    // 0x00273F70: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00273F74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00273F78: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00273F7C: jal         0x0026D210
    // 0x00273F80: swc1        $f20, 0x9C($s2)
    MEM_W(0X9C, ctx->r18) = ctx->f20.u32l;
    func_0026D210(rdram, ctx);
        goto after_5;
    // 0x00273F80: swc1        $f20, 0x9C($s2)
    MEM_W(0X9C, ctx->r18) = ctx->f20.u32l;
    after_5:
    // 0x00273F84: lhu         $a0, 0x8E($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8E);
    // 0x00273F88: jal         0x0026D210
    // 0x00273F8C: swc1        $f0, 0x98($s2)
    MEM_W(0X98, ctx->r18) = ctx->f0.u32l;
    func_0026D210(rdram, ctx);
        goto after_6;
    // 0x00273F8C: swc1        $f0, 0x98($s2)
    MEM_W(0X98, ctx->r18) = ctx->f0.u32l;
    after_6:
    // 0x00273F90: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00273F94: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00273F98: sh          $v0, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r2;
    // 0x00273F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00273FA0: j           L_00274020
    // 0x00273FA4: sw          $v0, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r2;
        goto L_00274020;
    // 0x00273FA4: sw          $v0, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r2;
L_00273FA8:
    // 0x00273FA8: lw          $v0, 0xA8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA8);
    // 0x00273FAC: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x00273FB0: beq         $v0, $zero, L_00273FEC
    if (ctx->r2 == 0) {
        // 0x00273FB4: sw          $zero, 0x88($s2)
        MEM_W(0X88, ctx->r18) = 0;
            goto L_00273FEC;
    }
    // 0x00273FB4: sw          $zero, 0x88($s2)
    MEM_W(0X88, ctx->r18) = 0;
    // 0x00273FB8: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x00273FBC: bne         $v0, $zero, L_00274020
    if (ctx->r2 != 0) {
        // 0x00273FC0: nop
    
            goto L_00274020;
    }
    // 0x00273FC0: nop

    // 0x00273FC4: lw          $a0, 0xB0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XB0);
    // 0x00273FC8: jal         0x002718E0
    // 0x00273FCC: nop

    func_002718E0(rdram, ctx);
        goto after_7;
    // 0x00273FCC: nop

    after_7:
    // 0x00273FD0: beq         $v0, $zero, L_00274020
    if (ctx->r2 == 0) {
        // 0x00273FD4: nop
    
            goto L_00274020;
    }
    // 0x00273FD4: nop

    // 0x00273FD8: lw          $v0, 0xB0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB0);
    // 0x00273FDC: lbu         $v0, 0x2B94($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2B94);
    // 0x00273FE0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00273FE4: j           L_0027401C
    // 0x00273FE8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
        goto L_0027401C;
    // 0x00273FE8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
L_00273FEC:
    // 0x00273FEC: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x00273FF0: bne         $v0, $zero, L_00274020
    if (ctx->r2 != 0) {
        // 0x00273FF4: nop
    
            goto L_00274020;
    }
    // 0x00273FF4: nop

    // 0x00273FF8: lw          $a0, 0xB0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XB0);
    // 0x00273FFC: jal         0x002718E0
    // 0x00274000: nop

    func_002718E0(rdram, ctx);
        goto after_8;
    // 0x00274000: nop

    after_8:
    // 0x00274004: beq         $v0, $zero, L_00274020
    if (ctx->r2 == 0) {
        // 0x00274008: nop
    
            goto L_00274020;
    }
    // 0x00274008: nop

    // 0x0027400C: lw          $v0, 0xB0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB0);
    // 0x00274010: lw          $a1, 0x2B98($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B98);
    // 0x00274014: jal         0x00271E20
    // 0x00274018: addiu       $a0, $s2, 0x44
    ctx->r4 = ADD32(ctx->r18, 0X44);
    func_00271E20(rdram, ctx);
        goto after_9;
    // 0x00274018: addiu       $a0, $s2, 0x44
    ctx->r4 = ADD32(ctx->r18, 0X44);
    after_9:
L_0027401C:
    // 0x0027401C: sh          $v0, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r2;
L_00274020:
    // 0x00274020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00274024: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00274028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027402C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274030: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00274034: jr          $ra
    // 0x00274038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00274038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004501F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004501F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004501F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004501FC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00450200: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00450204: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00450208: lwc1        $f0, 0xE60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XE60);
    // 0x0045020C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00450210: addiu       $a3, $a3, -0x474C
    ctx->r7 = ADD32(ctx->r7, -0X474C);
    // 0x00450214: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00450218: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0045021C: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x00450220: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00450224: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00450228: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0045022C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00450230: lw          $v1, 0x8E0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8E0);
    // 0x00450234: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00450238: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x0045023C: addiu       $t3, $t3, -0x4F18
    ctx->r11 = ADD32(ctx->r11, -0X4F18);
    // 0x00450240: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00450244: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00450248: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0045024C: sw          $t0, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r8;
    // 0x00450250: sw          $t1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r9;
    // 0x00450254: sw          $t2, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->r10;
    // 0x00450258: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x0045025C: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x00450260: lw          $t2, 0x14($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X14);
    // 0x00450264: sw          $t0, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r8;
    // 0x00450268: sw          $t1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r9;
    // 0x0045026C: sw          $t2, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->r10;
    // 0x00450270: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x00450274: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00450278: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x0045027C: sw          $zero, 0x10($a3)
    MEM_W(0X10, ctx->r7) = 0;
    // 0x00450280: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00450284: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00450288: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0045028C: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00450290: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00450294: jal         0x0021D928
    // 0x00450298: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x00450298: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    after_0:
    // 0x0045029C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004502A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004502A4: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x004502A8: jr          $ra
    // 0x004502AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004502AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00226D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226D54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00226D58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00226D5C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00226D60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00226D64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226D68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226D6C: lw          $v0, 0x14A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14A8);
    // 0x00226D70: blez        $v0, L_00226DB0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00226D74: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00226DB0;
    }
    // 0x00226D74: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00226D78: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00226D7C:
    // 0x00226D7C: lw          $v0, 0x14AC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14AC);
    // 0x00226D80: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00226D84: jal         0x002017D4
    // 0x00226D88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226D88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00226D8C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00226D90: beq         $v0, $zero, L_00226DA0
    if (ctx->r2 == 0) {
        // 0x00226D94: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00226DA0;
    }
    // 0x00226D94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00226D98: j           L_00226DB4
    // 0x00226D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00226DB4;
    // 0x00226D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00226DA0:
    // 0x00226DA0: lw          $v0, 0x14A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14A8);
    // 0x00226DA4: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00226DA8: bne         $v0, $zero, L_00226D7C
    if (ctx->r2 != 0) {
        // 0x00226DAC: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_00226D7C;
    }
    // 0x00226DAC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_00226DB0:
    // 0x00226DB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00226DB4:
    // 0x00226DB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00226DB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00226DBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226DC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226DC4: jr          $ra
    // 0x00226DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00411EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00411EF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00411EFC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00411F00: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00411F04: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00411F08: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x00411F0C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x00411F10: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00411F14: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00411F18: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00411F1C: bne         $v0, $zero, L_00411F3C
    if (ctx->r2 != 0) {
        // 0x00411F20: nop
    
            goto L_00411F3C;
    }
    // 0x00411F20: nop

    // 0x00411F24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00411F28: lw          $v0, 0x1BC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BC4);
    // 0x00411F2C: beq         $v0, $zero, L_004122F8
    if (ctx->r2 == 0) {
        // 0x00411F30: nop
    
            goto L_004122F8;
    }
    // 0x00411F30: nop

    // 0x00411F34: j           L_004122F0
    // 0x00411F38: nop

        goto L_004122F0;
    // 0x00411F38: nop

L_00411F3C:
    // 0x00411F3C: lwc1        $f0, 0x290($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X290);
    // 0x00411F40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411F44: lwc1        $f1, 0xA84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA84);
    // 0x00411F48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411F4C: nop

    // 0x00411F50: bc1tl       L_00411F68
    if (c1cs) {
        // 0x00411F54: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00411F68;
    }
    goto skip_0;
    // 0x00411F54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x00411F58: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00411F5C: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x00411F60: j           L_00411F78
    // 0x00411F64: nop

        goto L_00411F78;
    // 0x00411F64: nop

L_00411F68:
    // 0x00411F68: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411F6C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00411F70: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x00411F74: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
L_00411F78:
    // 0x00411F78: lwc1        $f0, 0x294($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X294);
    // 0x00411F7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411F80: lwc1        $f1, 0xA88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA88);
    // 0x00411F84: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411F88: nop

    // 0x00411F8C: bc1tl       L_00411FA4
    if (c1cs) {
        // 0x00411F90: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00411FA4;
    }
    goto skip_1;
    // 0x00411F90: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x00411F94: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00411F98: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x00411F9C: j           L_00411FB4
    // 0x00411FA0: nop

        goto L_00411FB4;
    // 0x00411FA0: nop

L_00411FA4:
    // 0x00411FA4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411FA8: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00411FAC: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x00411FB0: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
L_00411FB4:
    // 0x00411FB4: mtc1        $s1, $f2
    ctx->f2.u32l = ctx->r17;
    // 0x00411FB8: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x00411FBC: bgez        $s1, L_00411FD0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00411FC0: nop
    
            goto L_00411FD0;
    }
    // 0x00411FC0: nop

    // 0x00411FC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411FC8: ldc1        $f0, 0xA90($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XA90);
    // 0x00411FCC: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_00411FD0:
    // 0x00411FD0: lwc1        $f1, 0x288($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X288);
    // 0x00411FD4: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x00411FD8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00411FDC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411FE0: lwc1        $f1, 0xA98($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA98);
    // 0x00411FE4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411FE8: nop

    // 0x00411FEC: bc1tl       L_00412004
    if (c1cs) {
        // 0x00411FF0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00412004;
    }
    goto skip_2;
    // 0x00411FF0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x00411FF4: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00411FF8: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x00411FFC: j           L_00412014
    // 0x00412000: nop

        goto L_00412014;
    // 0x00412000: nop

L_00412004:
    // 0x00412004: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00412008: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041200C: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x00412010: or          $s3, $s3, $v0
    ctx->r19 = ctx->r19 | ctx->r2;
L_00412014:
    // 0x00412014: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x00412018: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0041201C: bgez        $s0, L_00412030
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00412020: nop
    
            goto L_00412030;
    }
    // 0x00412020: nop

    // 0x00412024: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412028: ldc1        $f0, 0xAA0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XAA0);
    // 0x0041202C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_00412030:
    // 0x00412030: lwc1        $f1, 0x28C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28C);
    // 0x00412034: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x00412038: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0041203C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412040: lwc1        $f1, 0xAA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAA8);
    // 0x00412044: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00412048: nop

    // 0x0041204C: bc1tl       L_00412064
    if (c1cs) {
        // 0x00412050: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00412064;
    }
    goto skip_3;
    // 0x00412050: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x00412054: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00412058: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x0041205C: j           L_00412074
    // 0x00412060: nop

        goto L_00412074;
    // 0x00412060: nop

L_00412064:
    // 0x00412064: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00412068: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0041206C: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x00412070: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
L_00412074:
    // 0x00412074: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412078: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0041207C: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x00412080: jal         0x004108CC
    // 0x00412084: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_004108CC(rdram, ctx);
        goto after_0;
    // 0x00412084: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x00412088: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041208C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412090: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00412094: jal         0x00410A74
    // 0x00412098: nop

    func_00410A74(rdram, ctx);
        goto after_1;
    // 0x00412098: nop

    after_1:
    // 0x0041209C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004120A0: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x004120A4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x004120A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x004120AC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x004120B0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x004120B4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x004120B8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x004120BC: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
    // 0x004120C0: beq         $v0, $zero, L_00412114
    if (ctx->r2 == 0) {
        // 0x004120C4: mov.s       $f5, $f0
        CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f5.fl = ctx->f0.fl;
            goto L_00412114;
    }
    // 0x004120C4: mov.s       $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f5.fl = ctx->f0.fl;
    // 0x004120C8: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x004120CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004120D0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x004120D4: nop

    // 0x004120D8: bc1tl       L_004120E0
    if (c1cs) {
        // 0x004120DC: mov.s       $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
            goto L_004120E0;
    }
    goto skip_4;
    // 0x004120DC: mov.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
    skip_4:
L_004120E0:
    // 0x004120E0: lwc1        $f3, 0x28($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x004120E4: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x004120E8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x004120EC: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x004120F0: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x004120F4: mul.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f4.fl);
    // 0x004120F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004120FC: lwc1        $f0, 0xAAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAAC);
    // 0x00412100: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x00412104: add.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f0.fl;
    // 0x00412108: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0041210C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x00412110: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00412114:
    // 0x00412114: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00412118: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041211C: lwc1        $f1, 0xAB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAB0);
    // 0x00412120: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00412124: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00412128: nop

    // 0x0041212C: bc1fl       L_00412134
    if (!c1cs) {
        // 0x00412130: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00412134;
    }
    goto skip_5;
    // 0x00412130: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_00412134:
    // 0x00412134: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00412138: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041213C: nop

    // 0x00412140: bc1fl       L_00412148
    if (!c1cs) {
        // 0x00412144: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00412148;
    }
    goto skip_6;
    // 0x00412144: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_6:
L_00412148:
    // 0x00412148: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041214C: lwc1        $f1, 0xAB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAB4);
    // 0x00412150: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00412154: nop

    // 0x00412158: bc1tl       L_00412170
    if (c1cs) {
        // 0x0041215C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00412170;
    }
    goto skip_7;
    // 0x0041215C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_7:
    // 0x00412160: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00412164: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x00412168: j           L_00412180
    // 0x0041216C: nop

        goto L_00412180;
    // 0x0041216C: nop

L_00412170:
    // 0x00412170: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00412174: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00412178: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0041217C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00412180:
    // 0x00412180: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00412184: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412188: lwc1        $f1, 0xAB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAB8);
    // 0x0041218C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00412190: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00412194: nop

    // 0x00412198: bc1t        L_004121A4
    if (c1cs) {
        // 0x0041219C: sb          $v1, 0x38($sp)
        MEM_B(0X38, ctx->r29) = ctx->r3;
            goto L_004121A4;
    }
    // 0x0041219C: sb          $v1, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r3;
    // 0x004121A0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_004121A4:
    // 0x004121A4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x004121A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004121AC: nop

    // 0x004121B0: bc1fl       L_004121B8
    if (!c1cs) {
        // 0x004121B4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_004121B8;
    }
    goto skip_8;
    // 0x004121B4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_8:
L_004121B8:
    // 0x004121B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004121BC: lwc1        $f1, 0xABC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XABC);
    // 0x004121C0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004121C4: nop

    // 0x004121C8: bc1tl       L_004121E0
    if (c1cs) {
        // 0x004121CC: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_004121E0;
    }
    goto skip_9;
    // 0x004121CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_9:
    // 0x004121D0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004121D4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x004121D8: j           L_004121F0
    // 0x004121DC: nop

        goto L_004121F0;
    // 0x004121DC: nop

L_004121E0:
    // 0x004121E0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004121E4: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004121E8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x004121EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_004121F0:
    // 0x004121F0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x004121F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004121F8: lwc1        $f1, 0xAC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAC0);
    // 0x004121FC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00412200: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00412204: nop

    // 0x00412208: bc1t        L_00412214
    if (c1cs) {
        // 0x0041220C: sb          $v1, 0x39($sp)
        MEM_B(0X39, ctx->r29) = ctx->r3;
            goto L_00412214;
    }
    // 0x0041220C: sb          $v1, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r3;
    // 0x00412210: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_00412214:
    // 0x00412214: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00412218: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041221C: nop

    // 0x00412220: bc1fl       L_00412228
    if (!c1cs) {
        // 0x00412224: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00412228;
    }
    goto skip_10;
    // 0x00412224: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_10:
L_00412228:
    // 0x00412228: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041222C: lwc1        $f1, 0xAC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAC4);
    // 0x00412230: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00412234: nop

    // 0x00412238: bc1tl       L_00412250
    if (c1cs) {
        // 0x0041223C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00412250;
    }
    goto skip_11;
    // 0x0041223C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_11:
    // 0x00412240: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00412244: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x00412248: j           L_00412260
    // 0x0041224C: nop

        goto L_00412260;
    // 0x0041224C: nop

L_00412250:
    // 0x00412250: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00412254: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00412258: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0041225C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00412260:
    // 0x00412260: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412264: lwc1        $f1, 0xAC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAC8);
    // 0x00412268: mul.s       $f0, $f5, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0041226C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00412270: nop

    // 0x00412274: bc1t        L_00412280
    if (c1cs) {
        // 0x00412278: sb          $v1, 0x3A($sp)
        MEM_B(0X3A, ctx->r29) = ctx->r3;
            goto L_00412280;
    }
    // 0x00412278: sb          $v1, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r3;
    // 0x0041227C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_00412280:
    // 0x00412280: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00412284: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00412288: nop

    // 0x0041228C: bc1fl       L_00412294
    if (!c1cs) {
        // 0x00412290: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00412294;
    }
    goto skip_12;
    // 0x00412290: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_12:
L_00412294:
    // 0x00412294: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412298: lwc1        $f1, 0xACC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XACC);
    // 0x0041229C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004122A0: nop

    // 0x004122A4: bc1tl       L_004122BC
    if (c1cs) {
        // 0x004122A8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_004122BC;
    }
    goto skip_13;
    // 0x004122A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_13:
    // 0x004122AC: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004122B0: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x004122B4: j           L_004122CC
    // 0x004122B8: nop

        goto L_004122CC;
    // 0x004122B8: nop

L_004122BC:
    // 0x004122BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004122C0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004122C4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x004122C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_004122CC:
    // 0x004122CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004122D0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004122D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x004122D8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x004122DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004122E0: sb          $v1, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r3;
    // 0x004122E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004122E8: jal         0x002883E0
    // 0x004122EC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_002883E0(rdram, ctx);
        goto after_2;
    // 0x004122EC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_2:
L_004122F0:
    // 0x004122F0: jal         0x00411C94
    // 0x004122F4: nop

    func_00411C94(rdram, ctx);
        goto after_3;
    // 0x004122F4: nop

    after_3:
L_004122F8:
    // 0x004122F8: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x004122FC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00412300: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00412304: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00412308: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0041230C: jr          $ra
    // 0x00412310: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00412310: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00245E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245E48: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00245E4C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00245E50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00245E54: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00245E58: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00245E5C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00245E60: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00245E64: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x00245E68: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x00245E6C: sdc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X70, ctx->r29);
L_00245E70:
    // 0x00245E70: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00245E74: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00245E78: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00245E7C: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00245E80: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00245E84: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00245E88: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00245E8C: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00245E90: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00245E94: bne         $v0, $a0, L_00245E70
    if (ctx->r2 != ctx->r4) {
        // 0x00245E98: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00245E70;
    }
    // 0x00245E98: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00245E9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00245EA0: lwc1        $f20, 0x6970($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6970);
    // 0x00245EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00245EA8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00245EAC: jal         0x002671B4
    // 0x00245EB0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x00245EB0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    after_0:
    // 0x00245EB4: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00245EB8: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00245EBC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245EC0: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00245EC4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245EC8: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00245ECC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00245ED0: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00245ED4: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x00245ED8: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00245EDC: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00245EE0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x00245EE4: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00245EE8: jal         0x002671B4
    // 0x00245EEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00245EEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00245EF0: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00245EF4: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x00245EF8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245EFC: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00245F00: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00245F04: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245F08: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00245F0C: addiu       $v0, $v0, 0x1AE0
    ctx->r2 = ADD32(ctx->r2, 0X1AE0);
    // 0x00245F10: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00245F14: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00245F18: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00245F1C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x00245F20: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00245F24: jal         0x00239F00
    // 0x00245F28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_2;
    // 0x00245F28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00245F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00245F30: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00245F34: addiu       $v1, $sp, 0x48
    ctx->r3 = ADD32(ctx->r29, 0X48);
L_00245F38:
    // 0x00245F38: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00245F3C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00245F40: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00245F44: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00245F48: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00245F4C: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00245F50: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00245F54: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x00245F58: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00245F5C: bne         $v0, $v1, L_00245F38
    if (ctx->r2 != ctx->r3) {
        // 0x00245F60: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00245F38;
    }
    // 0x00245F60: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00245F64: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00245F68: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00245F6C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00245F70: lw          $v0, 0x1D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D7C);
    // 0x00245F74: beq         $v0, $zero, L_00245F8C
    if (ctx->r2 == 0) {
        // 0x00245F78: nop
    
            goto L_00245F8C;
    }
    // 0x00245F78: nop

    // 0x00245F7C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x00245F80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00245F84: bne         $v0, $zero, L_00245FB0
    if (ctx->r2 != 0) {
        // 0x00245F88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00245FB0;
    }
    // 0x00245F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245F8C:
    // 0x00245F8C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00245F90: lw          $v0, 0x1D94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D94);
    // 0x00245F94: beql        $v0, $zero, L_00245FB0
    if (ctx->r2 == 0) {
        // 0x00245F98: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00245FB0;
    }
    goto skip_0;
    // 0x00245F98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00245F9C: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x00245FA0: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x00245FA4: bne         $v1, $zero, L_00245FB0
    if (ctx->r3 != 0) {
        // 0x00245FA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00245FB0;
    }
    // 0x00245FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00245FAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00245FB0:
    // 0x00245FB0: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00245FB4: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00245FB8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00245FBC: ldc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X70);
    // 0x00245FC0: jr          $ra
    // 0x00245FC4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00245FC4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_002A1CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1CB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002A1CB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1CBC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A1CC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1CC4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002A1CC8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A1CCC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002A1CD0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002A1CD4: beq         $s0, $zero, L_002A1D00
    if (ctx->r16 == 0) {
        // 0x002A1CD8: sw          $s2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r18;
            goto L_002A1D00;
    }
    // 0x002A1CD8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A1CDC: andi        $v0, $s1, 0x3
    ctx->r2 = ctx->r17 & 0X3;
L_002A1CE0:
    // 0x002A1CE0: beq         $v0, $zero, L_002A1D00
    if (ctx->r2 == 0) {
        // 0x002A1CE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1D00;
    }
    // 0x002A1CE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1CE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1CEC: jal         0x002A1954
    // 0x002A1CF0: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    func_002A1954(rdram, ctx);
        goto after_0;
    // 0x002A1CF0: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_0:
    // 0x002A1CF4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1CF8: bne         $s0, $zero, L_002A1CE0
    if (ctx->r16 != 0) {
        // 0x002A1CFC: andi        $v0, $s1, 0x3
        ctx->r2 = ctx->r17 & 0X3;
            goto L_002A1CE0;
    }
    // 0x002A1CFC: andi        $v0, $s1, 0x3
    ctx->r2 = ctx->r17 & 0X3;
L_002A1D00:
    // 0x002A1D00: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x002A1D04: bne         $v0, $zero, L_002A1D40
    if (ctx->r2 != 0) {
        // 0x002A1D08: andi        $a0, $s3, 0xFF
        ctx->r4 = ctx->r19 & 0XFF;
            goto L_002A1D40;
    }
    // 0x002A1D08: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x002A1D0C: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x002A1D10: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x002A1D14: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002A1D18: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x002A1D1C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002A1D20: or          $s2, $v0, $a0
    ctx->r18 = ctx->r2 | ctx->r4;
L_002A1D24:
    // 0x002A1D24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1D28: jal         0x002A1350
    // 0x002A1D2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002A1350(rdram, ctx);
        goto after_1;
    // 0x002A1D2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x002A1D30: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x002A1D34: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x002A1D38: beq         $v0, $zero, L_002A1D24
    if (ctx->r2 == 0) {
        // 0x002A1D3C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_002A1D24;
    }
    // 0x002A1D3C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_002A1D40:
    // 0x002A1D40: beq         $s0, $zero, L_002A1D60
    if (ctx->r16 == 0) {
        // 0x002A1D44: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1D60;
    }
    // 0x002A1D44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002A1D48:
    // 0x002A1D48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1D4C: jal         0x002A1954
    // 0x002A1D50: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    func_002A1954(rdram, ctx);
        goto after_2;
    // 0x002A1D50: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_2:
    // 0x002A1D54: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1D58: bne         $s0, $zero, L_002A1D48
    if (ctx->r16 != 0) {
        // 0x002A1D5C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1D48;
    }
    // 0x002A1D5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002A1D60:
    // 0x002A1D60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002A1D64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A1D68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1D6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1D70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1D74: jr          $ra
    // 0x002A1D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002A1D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00264C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264C8C: jr          $ra
    // 0x00264C90: sw          $a2, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = ctx->r6;
    return;
    // 0x00264C90: sw          $a2, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void func_0022BFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022BFA0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0022BFA4: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0022BFA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022BFAC: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0022BFB0: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0022BFB4: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0022BFB8: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0022BFBC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0022BFC0: jal         0x0026AFC0
    // 0x0022BFC4: nop

    func_0026AFC0(rdram, ctx);
        goto after_0;
    // 0x0022BFC4: nop

    after_0:
    // 0x0022BFC8: beq         $v0, $zero, L_0022BFE4
    if (ctx->r2 == 0) {
        // 0x0022BFCC: nop
    
            goto L_0022BFE4;
    }
    // 0x0022BFCC: nop

    // 0x0022BFD0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0022BFD4: jal         0x0026C114
    // 0x0022BFD8: nop

    func_0026C114(rdram, ctx);
        goto after_1;
    // 0x0022BFD8: nop

    after_1:
    // 0x0022BFDC: j           L_0022BFF4
    // 0x0022BFE0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_0022BFF4;
    // 0x0022BFE0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_0022BFE4:
    // 0x0022BFE4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0022BFE8: jal         0x0026C0E0
    // 0x0022BFEC: nop

    func_0026C0E0(rdram, ctx);
        goto after_2;
    // 0x0022BFEC: nop

    after_2:
    // 0x0022BFF0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_0022BFF4:
    // 0x0022BFF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0022BFF8: beql        $a0, $v0, L_0022C000
    if (ctx->r4 == ctx->r2) {
        // 0x0022BFFC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0022C000;
    }
    goto skip_0;
    // 0x0022BFFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
L_0022C000:
    // 0x0022C000: lw          $a2, 0xF8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF8);
    // 0x0022C004: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x0022C008: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022C00C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0022C010: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022C014: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x0022C018: lhu         $v1, 0x8C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022C01C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022C020: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022C024: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022C028: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x0022C02C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x0022C030: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022C034: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x0022C038: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022C03C: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022C040: beq         $v1, $s1, L_0022C088
    if (ctx->r3 == ctx->r17) {
        // 0x0022C044: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022C088;
    }
    // 0x0022C044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022C048: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022C04C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0022C050: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C054: addiu       $t3, $t3, 0x1D98
    ctx->r11 = ADD32(ctx->r11, 0X1D98);
    // 0x0022C058: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C05C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C060: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C064: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022C068: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022C06C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022C070: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0022C074: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0022C078: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022C07C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022C080: jal         0x00236EA0
    // 0x0022C084: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_3;
    // 0x0022C084: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_3:
L_0022C088:
    // 0x0022C088: beq         $s2, $s1, L_0022C198
    if (ctx->r18 == ctx->r17) {
        // 0x0022C08C: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_0022C198;
    }
    // 0x0022C08C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0022C090: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x0022C094: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022C098: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0022C09C: beq         $v0, $zero, L_0022C0CC
    if (ctx->r2 == 0) {
        // 0x0022C0A0: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_0022C0CC;
    }
    // 0x0022C0A0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x0022C0A4: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C0A8: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x0022C0AC: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C0B0: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C0B4: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C0B8: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022C0BC: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022C0C0: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x0022C0C4: j           L_0022C0E4
    // 0x0022C0C8: nop

        goto L_0022C0E4;
    // 0x0022C0C8: nop

L_0022C0CC:
    // 0x0022C0CC: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x0022C0D0: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0022C0D4: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x0022C0D8: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022C0DC: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022C0E0: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_0022C0E4:
    // 0x0022C0E4: jal         0x0020E810
    // 0x0022C0E8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_0020E810(rdram, ctx);
        goto after_4;
    // 0x0022C0E8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_4:
    // 0x0022C0EC: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x0022C0F0: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0022C0F4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0022C0F8: lw          $v1, 0x1D94($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D94);
    // 0x0022C0FC: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x0022C100: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0022C104: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022C108: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x0022C10C: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x0022C110: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x0022C114: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x0022C118: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0022C11C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0022C120: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0022C124: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x0022C128: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0022C12C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x0022C130: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x0022C134: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022C138: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0022C13C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0022C140: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0022C144: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C148: addiu       $t3, $t3, 0x1D98
    ctx->r11 = ADD32(ctx->r11, 0X1D98);
    // 0x0022C14C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C150: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C154: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C158: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0022C15C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0022C160: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0022C164: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x0022C168: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x0022C16C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022C170: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022C174: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022C178: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0022C17C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0022C180: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0022C184: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x0022C188: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x0022C18C: jal         0x0022F350
    // 0x0022C190: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_5;
    // 0x0022C190: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0022C194: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_0022C198:
    // 0x0022C198: beq         $s3, $v0, L_0022C1C8
    if (ctx->r19 == ctx->r2) {
        // 0x0022C19C: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_0022C1C8;
    }
    // 0x0022C19C: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x0022C1A0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022C1A4: addiu       $v0, $v0, 0x1D98
    ctx->r2 = ADD32(ctx->r2, 0X1D98);
    // 0x0022C1A8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0022C1AC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022C1B0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022C1B4: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022C1B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022C1BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022C1C0: jal         0x00275544
    // 0x0022C1C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00275544(rdram, ctx);
        goto after_6;
    // 0x0022C1C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_6:
L_0022C1C8:
    // 0x0022C1C8: addiu       $a0, $s0, 0x168
    ctx->r4 = ADD32(ctx->r16, 0X168);
    // 0x0022C1CC: lw          $a2, 0x1A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A0);
    // 0x0022C1D0: jal         0x0020EF60
    // 0x0022C1D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_7;
    // 0x0022C1D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_7:
    // 0x0022C1D8: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022C1DC: lb          $v1, 0x196($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X196);
    // 0x0022C1E0: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x0022C1E4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0022C1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022C1EC: bne         $v1, $v0, L_0022C20C
    if (ctx->r3 != ctx->r2) {
        // 0x0022C1F0: nop
    
            goto L_0022C20C;
    }
    // 0x0022C1F0: nop

    // 0x0022C1F4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022C1F8: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022C1FC: jal         0x0022F1C8
    // 0x0022C200: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_8;
    // 0x0022C200: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0022C204: jal         0x00232B40
    // 0x0022C208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_9;
    // 0x0022C208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_0022C20C:
    // 0x0022C20C: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0022C210: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0022C214: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0022C218: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0022C21C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0022C220: jr          $ra
    // 0x0022C224: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0022C224: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00280C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280C94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00280C98: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x00280C9C: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x00280CA0: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00280CA4: lwc1        $f3, 0x5C($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x00280CA8: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00280CAC: lwc1        $f5, 0x64($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x00280CB0: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x00280CB4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x00280CB8: lwc1        $f7, 0x80($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x00280CBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00280CC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00280CC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00280CC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00280CCC: sdc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X38, ctx->r29);
    // 0x00280CD0: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x00280CD4: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x00280CD8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00280CDC: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x00280CE0: sw          $a2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r6;
    // 0x00280CE4: sw          $a3, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r7;
    // 0x00280CE8: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x00280CEC: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00280CF0: swc1        $f2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f2.u32l;
    // 0x00280CF4: swc1        $f3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x00280CF8: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x00280CFC: swc1        $f5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x00280D00: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00280D04: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x00280D08: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00280D0C: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x00280D10: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x00280D14: sw          $t0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r8;
    // 0x00280D18: sw          $t1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r9;
    // 0x00280D1C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    // 0x00280D20: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x00280D24: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x00280D28: jal         0x00284188
    // 0x00280D2C: swc1        $f7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00280D2C: swc1        $f7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    after_0:
    // 0x00280D30: beq         $v0, $zero, L_00280D4C
    if (ctx->r2 == 0) {
        // 0x00280D34: nop
    
            goto L_00280D4C;
    }
    // 0x00280D34: nop

    // 0x00280D38: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00280D3C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00280D40: jal         0x00220A1C
    // 0x00280D44: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_00220A1C(rdram, ctx);
        goto after_1;
    // 0x00280D44: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
    // 0x00280D48: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
L_00280D4C:
    // 0x00280D4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00280D50: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00280D54: lw          $s1, 0x58($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X58);
    // 0x00280D58: lwc1        $f21, 0x38($s0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x00280D5C: lwc1        $f23, 0x3C($s0)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r16, 0X3C);
    // 0x00280D60: lwc1        $f20, 0x40($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X40);
    // 0x00280D64: lwc1        $f22, 0x44($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X44);
    // 0x00280D68: beq         $s1, $zero, L_00280DDC
    if (ctx->r17 == 0) {
        // 0x00280D6C: sw          $v0, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->r2;
            goto L_00280DDC;
    }
    // 0x00280D6C: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x00280D70: jal         0x00284188
    // 0x00280D74: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x00280D74: nop

    after_2:
    // 0x00280D78: bne         $v0, $zero, L_00280DDC
    if (ctx->r2 != 0) {
        // 0x00280D7C: nop
    
            goto L_00280DDC;
    }
    // 0x00280D7C: nop

    // 0x00280D80: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00280D84: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00280D88: jal         0x0026BE60
    // 0x00280D8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026BE60(rdram, ctx);
        goto after_3;
    // 0x00280D8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00280D90: add.s       $f1, $f23, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f23.fl + ctx->f22.fl;
    // 0x00280D94: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00280D98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280D9C: lwc1        $f0, -0x6424($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6424);
    // 0x00280DA0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00280DA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280DA8: lwc1        $f0, -0x6420($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6420);
    // 0x00280DAC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00280DB0: nop

    // 0x00280DB4: bc1f        L_00280DDC
    if (!c1cs) {
        // 0x00280DB8: nop
    
            goto L_00280DDC;
    }
    // 0x00280DB8: nop

    // 0x00280DBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280DC0: lwc1        $f0, -0x641C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X641C);
    // 0x00280DC4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00280DC8: nop

    // 0x00280DCC: bc1f        L_00280DDC
    if (!c1cs) {
        // 0x00280DD0: nop
    
            goto L_00280DDC;
    }
    // 0x00280DD0: nop

    // 0x00280DD4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00280DD8: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
L_00280DDC:
    // 0x00280DDC: jal         0x00284188
    // 0x00280DE0: nop

    func_00284188(rdram, ctx);
        goto after_4;
    // 0x00280DE0: nop

    after_4:
    // 0x00280DE4: beq         $v0, $zero, L_00280DF8
    if (ctx->r2 == 0) {
        // 0x00280DE8: nop
    
            goto L_00280DF8;
    }
    // 0x00280DE8: nop

    // 0x00280DEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00280DF0: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00280DF4: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
L_00280DF8:
    // 0x00280DF8: lwc1        $f1, 0x5C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X5C);
    // 0x00280DFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00280E00: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00280E04: nop

    // 0x00280E08: bc1f        L_00280E1C
    if (!c1cs) {
        // 0x00280E0C: nop
    
            goto L_00280E1C;
    }
    // 0x00280E0C: nop

    // 0x00280E10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00280E14: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00280E18: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
L_00280E1C:
    // 0x00280E1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00280E20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00280E24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00280E28: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x00280E2C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x00280E30: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00280E34: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00280E38: jr          $ra
    // 0x00280E3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00280E3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004441E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004441E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004441EC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004441F0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x004441F4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004441F8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004441FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00444200: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00444204: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00444208: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044420C: lb          $v0, 0xC7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XC7);
    // 0x00444210: blez        $v0, L_00444274
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00444214: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_00444274;
    }
    // 0x00444214: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00444218: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0044421C: lw          $s2, 0x1D0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1D0);
    // 0x00444220: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00444224: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x00444228: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044422C: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_00444230:
    // 0x00444230: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x00444234: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00444238: beql        $v0, $zero, L_00444258
    if (ctx->r2 == 0) {
        // 0x0044423C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00444258;
    }
    goto skip_0;
    // 0x0044423C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00444240: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x00444244: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00444248: addiu       $a1, $a1, 0x1E04
    ctx->r5 = ADD32(ctx->r5, 0X1E04);
    // 0x0044424C: jal         0x00236314
    // 0x00444250: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00444250: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x00444254: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00444258:
    // 0x00444258: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0044425C: bne         $v0, $zero, L_00444230
    if (ctx->r2 != 0) {
        // 0x00444260: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00444230;
    }
    // 0x00444260: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00444264: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00444268: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0044426C: jal         0x00243414
    // 0x00444270: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00444270: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_00444274:
    // 0x00444274: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00444278: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0044427C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00444280: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00444284: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00444288: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044428C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00444290: jr          $ra
    // 0x00444294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00444294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00454944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B974:
    // 0x00454944: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B9A8:
    // 0x00454948: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0045494C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00454950: beq         $v0, $zero, L_00454964
    if (ctx->r2 == 0) {
        // 0x00454954: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454964;
    }
    // 0x00454954: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454958: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045495C: j           L_0041B974
    // 0x00454960: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B974(rdram, ctx);
    return;
    // 0x00454960: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454964:
    // 0x00454964: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454968: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045496C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454970: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454974: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454978: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045497C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454980: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00454984: beq         $v0, $zero, L_0045499C
    if (ctx->r2 == 0) {
        // 0x00454988: nop
    
            goto L_0045499C;
    }
    // 0x00454988: nop

    // 0x0045498C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454990: addiu       $v0, $v0, 0x5AF4
    ctx->r2 = ADD32(ctx->r2, 0X5AF4);
    // 0x00454994: j           L_0041B9A8
    // 0x00454998: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B9A8(rdram, ctx);
    return;
    // 0x00454998: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045499C:
    // 0x0045499C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004549A0: addiu       $v0, $v0, 0x5B10
    ctx->r2 = ADD32(ctx->r2, 0X5B10);
    // 0x004549A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004549A8: jr          $ra
    // 0x004549AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004549AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0022AAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022AAE0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022AAE4: lw          $v0, 0x1D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D7C);
    // 0x0022AAE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0022AAEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022AAF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022AAF4: beq         $v0, $zero, L_0022ACC8
    if (ctx->r2 == 0) {
        // 0x0022AAF8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0022ACC8;
    }
    // 0x0022AAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0022AAFC: lw          $a0, 0x10C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10C);
    // 0x0022AB00: beq         $a0, $zero, L_0022AC5C
    if (ctx->r4 == 0) {
        // 0x0022AB04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022AC5C;
    }
    // 0x0022AB04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022AB08: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0022AB0C: bne         $v1, $v0, L_0022AC5C
    if (ctx->r3 != ctx->r2) {
        // 0x0022AB10: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0022AC5C;
    }
    // 0x0022AB10: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0022AB14: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0022AB18: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022AB1C: beq         $v0, $zero, L_0022AC5C
    if (ctx->r2 == 0) {
        // 0x0022AB20: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_0022AC5C;
    }
    // 0x0022AB20: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022AB24: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AB28: beq         $v1, $v0, L_0022AB5C
    if (ctx->r3 == ctx->r2) {
        // 0x0022AB2C: slti        $v0, $v1, 0x57
        ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
            goto L_0022AB5C;
    }
    // 0x0022AB2C: slti        $v0, $v1, 0x57
    ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
    // 0x0022AB30: beq         $v0, $zero, L_0022AB48
    if (ctx->r2 == 0) {
        // 0x0022AB34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022AB48;
    }
    // 0x0022AB34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022AB38: beq         $v1, $v0, L_0022AB5C
    if (ctx->r3 == ctx->r2) {
        // 0x0022AB3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AB5C;
    }
    // 0x0022AB3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AB40: j           L_0022AB60
    // 0x0022AB44: nop

        goto L_0022AB60;
    // 0x0022AB44: nop

L_0022AB48:
    // 0x0022AB48: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x0022AB4C: beq         $v1, $v0, L_0022AB5C
    if (ctx->r3 == ctx->r2) {
        // 0x0022AB50: addiu       $v0, $zero, 0x126
        ctx->r2 = ADD32(0, 0X126);
            goto L_0022AB5C;
    }
    // 0x0022AB50: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022AB54: bne         $v1, $v0, L_0022AB60
    if (ctx->r3 != ctx->r2) {
        // 0x0022AB58: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AB60;
    }
    // 0x0022AB58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AB5C:
    // 0x0022AB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AB60:
    // 0x0022AB60: beq         $v0, $zero, L_0022AB78
    if (ctx->r2 == 0) {
        // 0x0022AB64: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_0022AB78;
    }
    // 0x0022AB64: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0022AB68: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AB6C: lw          $a0, 0x1D7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D7C);
    // 0x0022AB70: jal         0x0026E19C
    // 0x0022AB74: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E19C(rdram, ctx);
        goto after_0;
    // 0x0022AB74: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
L_0022AB78:
    // 0x0022AB78: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AB7C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0022AB80: beq         $v1, $v0, L_0022ABF0
    if (ctx->r3 == ctx->r2) {
        // 0x0022AB84: slti        $v0, $v1, 0x12
        ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
            goto L_0022ABF0;
    }
    // 0x0022AB84: slti        $v0, $v1, 0x12
    ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x0022AB88: beq         $v0, $zero, L_0022ABB8
    if (ctx->r2 == 0) {
        // 0x0022AB8C: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0022ABB8;
    }
    // 0x0022AB8C: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0022AB90: bne         $v0, $zero, L_0022ABF4
    if (ctx->r2 != 0) {
        // 0x0022AB94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ABF4;
    }
    // 0x0022AB94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AB98: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0022AB9C: bne         $v0, $zero, L_0022ABF4
    if (ctx->r2 != 0) {
        // 0x0022ABA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022ABF4;
    }
    // 0x0022ABA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022ABA4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0022ABA8: beq         $v1, $v0, L_0022ABF0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ABAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ABF0;
    }
    // 0x0022ABAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022ABB0: j           L_0022ABF4
    // 0x0022ABB4: nop

        goto L_0022ABF4;
    // 0x0022ABB4: nop

L_0022ABB8:
    // 0x0022ABB8: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x0022ABBC: beq         $v1, $v0, L_0022ABF0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ABC0: slti        $v0, $v1, 0x1B
        ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
            goto L_0022ABF0;
    }
    // 0x0022ABC0: slti        $v0, $v1, 0x1B
    ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
    // 0x0022ABC4: beq         $v0, $zero, L_0022ABDC
    if (ctx->r2 == 0) {
        // 0x0022ABC8: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_0022ABDC;
    }
    // 0x0022ABC8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0022ABCC: beq         $v1, $v0, L_0022ABF0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ABD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ABF0;
    }
    // 0x0022ABD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022ABD4: j           L_0022ABF4
    // 0x0022ABD8: nop

        goto L_0022ABF4;
    // 0x0022ABD8: nop

L_0022ABDC:
    // 0x0022ABDC: addiu       $v0, $zero, 0x101
    ctx->r2 = ADD32(0, 0X101);
    // 0x0022ABE0: beq         $v1, $v0, L_0022ABF0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ABE4: addiu       $v0, $zero, 0x110
        ctx->r2 = ADD32(0, 0X110);
            goto L_0022ABF0;
    }
    // 0x0022ABE4: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x0022ABE8: bne         $v1, $v0, L_0022ABF4
    if (ctx->r3 != ctx->r2) {
        // 0x0022ABEC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ABF4;
    }
    // 0x0022ABEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022ABF0:
    // 0x0022ABF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022ABF4:
    // 0x0022ABF4: beq         $v0, $zero, L_0022AC0C
    if (ctx->r2 == 0) {
        // 0x0022ABF8: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_0022AC0C;
    }
    // 0x0022ABF8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0022ABFC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AC00: lw          $a0, 0x1D7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D7C);
    // 0x0022AC04: jal         0x0026E19C
    // 0x0022AC08: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E19C(rdram, ctx);
        goto after_1;
    // 0x0022AC08: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
L_0022AC0C:
    // 0x0022AC0C: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AC10: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0022AC14: beq         $v1, $v0, L_0022AC40
    if (ctx->r3 == ctx->r2) {
        // 0x0022AC18: slti        $v0, $v1, 0xE
        ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
            goto L_0022AC40;
    }
    // 0x0022AC18: slti        $v0, $v1, 0xE
    ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x0022AC1C: beq         $v0, $zero, L_0022AC34
    if (ctx->r2 == 0) {
        // 0x0022AC20: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0022AC34;
    }
    // 0x0022AC20: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0022AC24: beq         $v1, $v0, L_0022AC40
    if (ctx->r3 == ctx->r2) {
        // 0x0022AC28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AC40;
    }
    // 0x0022AC28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AC2C: j           L_0022AC44
    // 0x0022AC30: nop

        goto L_0022AC44;
    // 0x0022AC30: nop

L_0022AC34:
    // 0x0022AC34: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0022AC38: bne         $v1, $v0, L_0022AC44
    if (ctx->r3 != ctx->r2) {
        // 0x0022AC3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AC44;
    }
    // 0x0022AC3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AC40:
    // 0x0022AC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AC44:
    // 0x0022AC44: beq         $v0, $zero, L_0022ACC8
    if (ctx->r2 == 0) {
        // 0x0022AC48: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_0022ACC8;
    }
    // 0x0022AC48: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0022AC4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AC50: lw          $a0, 0x1D7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D7C);
    // 0x0022AC54: j           L_0022ACC0
    // 0x0022AC58: nop

        goto L_0022ACC0;
    // 0x0022AC58: nop

L_0022AC5C:
    // 0x0022AC5C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0022AC60: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0022AC64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022AC68: beq         $v1, $v0, L_0022AC78
    if (ctx->r3 == ctx->r2) {
        // 0x0022AC6C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0022AC78;
    }
    // 0x0022AC6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0022AC70: bne         $v1, $v0, L_0022ACC8
    if (ctx->r3 != ctx->r2) {
        // 0x0022AC74: nop
    
            goto L_0022ACC8;
    }
    // 0x0022AC74: nop

L_0022AC78:
    // 0x0022AC78: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AC7C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0022AC80: beq         $v1, $v0, L_0022ACAC
    if (ctx->r3 == ctx->r2) {
        // 0x0022AC84: slti        $v0, $v1, 0xE
        ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
            goto L_0022ACAC;
    }
    // 0x0022AC84: slti        $v0, $v1, 0xE
    ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x0022AC88: beq         $v0, $zero, L_0022ACA0
    if (ctx->r2 == 0) {
        // 0x0022AC8C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0022ACA0;
    }
    // 0x0022AC8C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0022AC90: beq         $v1, $v0, L_0022ACAC
    if (ctx->r3 == ctx->r2) {
        // 0x0022AC94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ACAC;
    }
    // 0x0022AC94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AC98: j           L_0022ACB0
    // 0x0022AC9C: nop

        goto L_0022ACB0;
    // 0x0022AC9C: nop

L_0022ACA0:
    // 0x0022ACA0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0022ACA4: bne         $v1, $v0, L_0022ACB0
    if (ctx->r3 != ctx->r2) {
        // 0x0022ACA8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ACB0;
    }
    // 0x0022ACA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022ACAC:
    // 0x0022ACAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022ACB0:
    // 0x0022ACB0: beq         $v0, $zero, L_0022ACC8
    if (ctx->r2 == 0) {
        // 0x0022ACB4: addiu       $a1, $zero, 0x200
        ctx->r5 = ADD32(0, 0X200);
            goto L_0022ACC8;
    }
    // 0x0022ACB4: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x0022ACB8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022ACBC: lw          $a0, 0x1D7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D7C);
L_0022ACC0:
    // 0x0022ACC0: jal         0x0026E19C
    // 0x0022ACC4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E19C(rdram, ctx);
        goto after_2;
    // 0x0022ACC4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_0022ACC8:
    // 0x0022ACC8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022ACCC: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x0022ACD0: beq         $v0, $zero, L_0022AFA4
    if (ctx->r2 == 0) {
        // 0x0022ACD4: nop
    
            goto L_0022AFA4;
    }
    // 0x0022ACD4: nop

    // 0x0022ACD8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x0022ACDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022ACE0: bne         $a0, $v0, L_0022AFA4
    if (ctx->r4 != ctx->r2) {
        // 0x0022ACE4: nop
    
            goto L_0022AFA4;
    }
    // 0x0022ACE4: nop

    // 0x0022ACE8: lw          $v1, 0x10C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10C);
    // 0x0022ACEC: beq         $v1, $zero, L_0022AE4C
    if (ctx->r3 == 0) {
        // 0x0022ACF0: nop
    
            goto L_0022AE4C;
    }
    // 0x0022ACF0: nop

    // 0x0022ACF4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0022ACF8: bne         $v0, $a0, L_0022AE4C
    if (ctx->r2 != ctx->r4) {
        // 0x0022ACFC: nop
    
            goto L_0022AE4C;
    }
    // 0x0022ACFC: nop

    // 0x0022AD00: lw          $v0, 0xD4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD4);
    // 0x0022AD04: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0022AD08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022AD0C: beq         $v0, $zero, L_0022AE4C
    if (ctx->r2 == 0) {
        // 0x0022AD10: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_0022AE4C;
    }
    // 0x0022AD10: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022AD14: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AD18: beq         $v1, $v0, L_0022AD4C
    if (ctx->r3 == ctx->r2) {
        // 0x0022AD1C: slti        $v0, $v1, 0x57
        ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
            goto L_0022AD4C;
    }
    // 0x0022AD1C: slti        $v0, $v1, 0x57
    ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
    // 0x0022AD20: beq         $v0, $zero, L_0022AD38
    if (ctx->r2 == 0) {
        // 0x0022AD24: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022AD38;
    }
    // 0x0022AD24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022AD28: beq         $v1, $v0, L_0022AD4C
    if (ctx->r3 == ctx->r2) {
        // 0x0022AD2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AD4C;
    }
    // 0x0022AD2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AD30: j           L_0022AD50
    // 0x0022AD34: nop

        goto L_0022AD50;
    // 0x0022AD34: nop

L_0022AD38:
    // 0x0022AD38: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x0022AD3C: beq         $v1, $v0, L_0022AD4C
    if (ctx->r3 == ctx->r2) {
        // 0x0022AD40: addiu       $v0, $zero, 0x126
        ctx->r2 = ADD32(0, 0X126);
            goto L_0022AD4C;
    }
    // 0x0022AD40: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022AD44: bne         $v1, $v0, L_0022AD50
    if (ctx->r3 != ctx->r2) {
        // 0x0022AD48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AD50;
    }
    // 0x0022AD48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AD4C:
    // 0x0022AD4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AD50:
    // 0x0022AD50: beq         $v0, $zero, L_0022AD68
    if (ctx->r2 == 0) {
        // 0x0022AD54: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_0022AD68;
    }
    // 0x0022AD54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0022AD58: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AD5C: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0022AD60: jal         0x0026E110
    // 0x0022AD64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_3;
    // 0x0022AD64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
L_0022AD68:
    // 0x0022AD68: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AD6C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0022AD70: beq         $v1, $v0, L_0022ADE0
    if (ctx->r3 == ctx->r2) {
        // 0x0022AD74: slti        $v0, $v1, 0x12
        ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
            goto L_0022ADE0;
    }
    // 0x0022AD74: slti        $v0, $v1, 0x12
    ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x0022AD78: beq         $v0, $zero, L_0022ADA8
    if (ctx->r2 == 0) {
        // 0x0022AD7C: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0022ADA8;
    }
    // 0x0022AD7C: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0022AD80: bne         $v0, $zero, L_0022ADE4
    if (ctx->r2 != 0) {
        // 0x0022AD84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ADE4;
    }
    // 0x0022AD84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AD88: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0022AD8C: bne         $v0, $zero, L_0022ADE4
    if (ctx->r2 != 0) {
        // 0x0022AD90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022ADE4;
    }
    // 0x0022AD90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022AD94: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0022AD98: beq         $v1, $v0, L_0022ADE0
    if (ctx->r3 == ctx->r2) {
        // 0x0022AD9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ADE0;
    }
    // 0x0022AD9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022ADA0: j           L_0022ADE4
    // 0x0022ADA4: nop

        goto L_0022ADE4;
    // 0x0022ADA4: nop

L_0022ADA8:
    // 0x0022ADA8: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x0022ADAC: beq         $v1, $v0, L_0022ADE0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ADB0: slti        $v0, $v1, 0x1B
        ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
            goto L_0022ADE0;
    }
    // 0x0022ADB0: slti        $v0, $v1, 0x1B
    ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
    // 0x0022ADB4: beq         $v0, $zero, L_0022ADCC
    if (ctx->r2 == 0) {
        // 0x0022ADB8: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_0022ADCC;
    }
    // 0x0022ADB8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0022ADBC: beq         $v1, $v0, L_0022ADE0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ADC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ADE0;
    }
    // 0x0022ADC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022ADC4: j           L_0022ADE4
    // 0x0022ADC8: nop

        goto L_0022ADE4;
    // 0x0022ADC8: nop

L_0022ADCC:
    // 0x0022ADCC: addiu       $v0, $zero, 0x101
    ctx->r2 = ADD32(0, 0X101);
    // 0x0022ADD0: beq         $v1, $v0, L_0022ADE0
    if (ctx->r3 == ctx->r2) {
        // 0x0022ADD4: addiu       $v0, $zero, 0x110
        ctx->r2 = ADD32(0, 0X110);
            goto L_0022ADE0;
    }
    // 0x0022ADD4: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x0022ADD8: bne         $v1, $v0, L_0022ADE4
    if (ctx->r3 != ctx->r2) {
        // 0x0022ADDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022ADE4;
    }
    // 0x0022ADDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022ADE0:
    // 0x0022ADE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022ADE4:
    // 0x0022ADE4: beq         $v0, $zero, L_0022ADFC
    if (ctx->r2 == 0) {
        // 0x0022ADE8: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_0022ADFC;
    }
    // 0x0022ADE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0022ADEC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022ADF0: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0022ADF4: jal         0x0026E110
    // 0x0022ADF8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_4;
    // 0x0022ADF8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
L_0022ADFC:
    // 0x0022ADFC: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AE00: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0022AE04: beq         $v1, $v0, L_0022AE30
    if (ctx->r3 == ctx->r2) {
        // 0x0022AE08: slti        $v0, $v1, 0xE
        ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
            goto L_0022AE30;
    }
    // 0x0022AE08: slti        $v0, $v1, 0xE
    ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x0022AE0C: beq         $v0, $zero, L_0022AE24
    if (ctx->r2 == 0) {
        // 0x0022AE10: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0022AE24;
    }
    // 0x0022AE10: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0022AE14: beq         $v1, $v0, L_0022AE30
    if (ctx->r3 == ctx->r2) {
        // 0x0022AE18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AE30;
    }
    // 0x0022AE18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AE1C: j           L_0022AE34
    // 0x0022AE20: nop

        goto L_0022AE34;
    // 0x0022AE20: nop

L_0022AE24:
    // 0x0022AE24: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0022AE28: bne         $v1, $v0, L_0022AE34
    if (ctx->r3 != ctx->r2) {
        // 0x0022AE2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AE34;
    }
    // 0x0022AE2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AE30:
    // 0x0022AE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AE34:
    // 0x0022AE34: beq         $v0, $zero, L_0022AFA4
    if (ctx->r2 == 0) {
        // 0x0022AE38: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_0022AFA4;
    }
    // 0x0022AE38: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0022AE3C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AE40: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0022AE44: j           L_0022AF9C
    // 0x0022AE48: nop

        goto L_0022AF9C;
    // 0x0022AE48: nop

L_0022AE4C:
    // 0x0022AE4C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0022AE50: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0022AE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022AE58: beq         $v1, $v0, L_0022AE68
    if (ctx->r3 == ctx->r2) {
        // 0x0022AE5C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0022AE68;
    }
    // 0x0022AE5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0022AE60: bne         $v1, $v0, L_0022AFA4
    if (ctx->r3 != ctx->r2) {
        // 0x0022AE64: nop
    
            goto L_0022AFA4;
    }
    // 0x0022AE64: nop

L_0022AE68:
    // 0x0022AE68: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AE6C: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022AE70: beq         $v1, $v0, L_0022AEA4
    if (ctx->r3 == ctx->r2) {
        // 0x0022AE74: slti        $v0, $v1, 0x57
        ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
            goto L_0022AEA4;
    }
    // 0x0022AE74: slti        $v0, $v1, 0x57
    ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
    // 0x0022AE78: beq         $v0, $zero, L_0022AE90
    if (ctx->r2 == 0) {
        // 0x0022AE7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022AE90;
    }
    // 0x0022AE7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022AE80: beq         $v1, $v0, L_0022AEA4
    if (ctx->r3 == ctx->r2) {
        // 0x0022AE84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AEA4;
    }
    // 0x0022AE84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AE88: j           L_0022AEA8
    // 0x0022AE8C: nop

        goto L_0022AEA8;
    // 0x0022AE8C: nop

L_0022AE90:
    // 0x0022AE90: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x0022AE94: beq         $v1, $v0, L_0022AEA4
    if (ctx->r3 == ctx->r2) {
        // 0x0022AE98: addiu       $v0, $zero, 0x126
        ctx->r2 = ADD32(0, 0X126);
            goto L_0022AEA4;
    }
    // 0x0022AE98: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022AE9C: bne         $v1, $v0, L_0022AEA8
    if (ctx->r3 != ctx->r2) {
        // 0x0022AEA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AEA8;
    }
    // 0x0022AEA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AEA4:
    // 0x0022AEA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AEA8:
    // 0x0022AEA8: beq         $v0, $zero, L_0022AEC0
    if (ctx->r2 == 0) {
        // 0x0022AEAC: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0022AEC0;
    }
    // 0x0022AEAC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0022AEB0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AEB4: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0022AEB8: jal         0x0026E110
    // 0x0022AEBC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_5;
    // 0x0022AEBC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
L_0022AEC0:
    // 0x0022AEC0: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AEC4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0022AEC8: beq         $v1, $v0, L_0022AF38
    if (ctx->r3 == ctx->r2) {
        // 0x0022AECC: slti        $v0, $v1, 0x12
        ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
            goto L_0022AF38;
    }
    // 0x0022AECC: slti        $v0, $v1, 0x12
    ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x0022AED0: beq         $v0, $zero, L_0022AF00
    if (ctx->r2 == 0) {
        // 0x0022AED4: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0022AF00;
    }
    // 0x0022AED4: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0022AED8: bne         $v0, $zero, L_0022AF3C
    if (ctx->r2 != 0) {
        // 0x0022AEDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AF3C;
    }
    // 0x0022AEDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AEE0: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0022AEE4: bne         $v0, $zero, L_0022AF3C
    if (ctx->r2 != 0) {
        // 0x0022AEE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022AF3C;
    }
    // 0x0022AEE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022AEEC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0022AEF0: beq         $v1, $v0, L_0022AF38
    if (ctx->r3 == ctx->r2) {
        // 0x0022AEF4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AF38;
    }
    // 0x0022AEF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AEF8: j           L_0022AF3C
    // 0x0022AEFC: nop

        goto L_0022AF3C;
    // 0x0022AEFC: nop

L_0022AF00:
    // 0x0022AF00: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x0022AF04: beq         $v1, $v0, L_0022AF38
    if (ctx->r3 == ctx->r2) {
        // 0x0022AF08: slti        $v0, $v1, 0x1B
        ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
            goto L_0022AF38;
    }
    // 0x0022AF08: slti        $v0, $v1, 0x1B
    ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
    // 0x0022AF0C: beq         $v0, $zero, L_0022AF24
    if (ctx->r2 == 0) {
        // 0x0022AF10: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_0022AF24;
    }
    // 0x0022AF10: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x0022AF14: beq         $v1, $v0, L_0022AF38
    if (ctx->r3 == ctx->r2) {
        // 0x0022AF18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AF38;
    }
    // 0x0022AF18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AF1C: j           L_0022AF3C
    // 0x0022AF20: nop

        goto L_0022AF3C;
    // 0x0022AF20: nop

L_0022AF24:
    // 0x0022AF24: addiu       $v0, $zero, 0x101
    ctx->r2 = ADD32(0, 0X101);
    // 0x0022AF28: beq         $v1, $v0, L_0022AF38
    if (ctx->r3 == ctx->r2) {
        // 0x0022AF2C: addiu       $v0, $zero, 0x110
        ctx->r2 = ADD32(0, 0X110);
            goto L_0022AF38;
    }
    // 0x0022AF2C: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x0022AF30: bne         $v1, $v0, L_0022AF3C
    if (ctx->r3 != ctx->r2) {
        // 0x0022AF34: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AF3C;
    }
    // 0x0022AF34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AF38:
    // 0x0022AF38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AF3C:
    // 0x0022AF3C: beq         $v0, $zero, L_0022AF54
    if (ctx->r2 == 0) {
        // 0x0022AF40: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_0022AF54;
    }
    // 0x0022AF40: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x0022AF44: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AF48: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0022AF4C: jal         0x0026E110
    // 0x0022AF50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_6;
    // 0x0022AF50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
L_0022AF54:
    // 0x0022AF54: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0022AF58: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0022AF5C: beq         $v1, $v0, L_0022AF88
    if (ctx->r3 == ctx->r2) {
        // 0x0022AF60: slti        $v0, $v1, 0xE
        ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
            goto L_0022AF88;
    }
    // 0x0022AF60: slti        $v0, $v1, 0xE
    ctx->r2 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x0022AF64: beq         $v0, $zero, L_0022AF7C
    if (ctx->r2 == 0) {
        // 0x0022AF68: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0022AF7C;
    }
    // 0x0022AF68: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0022AF6C: beq         $v1, $v0, L_0022AF88
    if (ctx->r3 == ctx->r2) {
        // 0x0022AF70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AF88;
    }
    // 0x0022AF70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022AF74: j           L_0022AF8C
    // 0x0022AF78: nop

        goto L_0022AF8C;
    // 0x0022AF78: nop

L_0022AF7C:
    // 0x0022AF7C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0022AF80: bne         $v1, $v0, L_0022AF8C
    if (ctx->r3 != ctx->r2) {
        // 0x0022AF84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022AF8C;
    }
    // 0x0022AF84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022AF88:
    // 0x0022AF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0022AF8C:
    // 0x0022AF8C: beq         $v0, $zero, L_0022AFA4
    if (ctx->r2 == 0) {
        // 0x0022AF90: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_0022AFA4;
    }
    // 0x0022AF90: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x0022AF94: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022AF98: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
L_0022AF9C:
    // 0x0022AF9C: jal         0x0026E110
    // 0x0022AFA0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_7;
    // 0x0022AFA0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
L_0022AFA4:
    // 0x0022AFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0022AFA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0022AFAC: jr          $ra
    // 0x0022AFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0022AFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042D408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D408: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0042D40C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
;}
RECOMP_FUNC void func_00284760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284764: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028476C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00284770: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284774: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00284778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028477C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00284780: jal         0x002261A8
    // 0x00284784: sb          $a1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r5;
    func_002261A8(rdram, ctx);
        goto after_0;
    // 0x00284784: sb          $a1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r5;
    after_0:
    // 0x00284788: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x0028478C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00284790: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284794: jr          $ra
    // 0x00284798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00284798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027AD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AD24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027AD28: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x0027AD2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027AD30: sw          $a1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r5;
    // 0x0027AD34: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0027AD38: addiu       $a1, $a1, 0x2C50
    ctx->r5 = ADD32(ctx->r5, 0X2C50);
    // 0x0027AD3C: sw          $a2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r6;
    // 0x0027AD40: jal         0x0027AD00
    // 0x0027AD44: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    func_0027AD00(rdram, ctx);
        goto after_0;
    // 0x0027AD44: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    after_0:
    // 0x0027AD48: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027AD4C: jr          $ra
    // 0x0027AD50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027AD50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00417C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417C0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00417C10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417C14: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00417C18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00417C1C: addiu       $v0, $v0, -0x5468
    ctx->r2 = ADD32(ctx->r2, -0X5468);
    // 0x00417C20: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00417C24: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00417C28: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00417C2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00417C30:
    // 0x00417C30: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x00417C34: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00417C38: bgez        $s0, L_00417C30
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00417C3C: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00417C30;
    }
    // 0x00417C3C: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00417C40: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00417C44: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00417C48: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00417C4C: addiu       $s1, $s1, -0x54A8
    ctx->r17 = ADD32(ctx->r17, -0X54A8);
    // 0x00417C50: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00417C54: addiu       $s2, $s2, 0x5EC0
    ctx->r18 = ADD32(ctx->r18, 0X5EC0);
L_00417C58:
    // 0x00417C58: jal         0x002855E8
    // 0x00417C5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00417C5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00417C60: beql        $v0, $zero, L_00417C74
    if (ctx->r2 == 0) {
        // 0x00417C64: addiu       $s1, $s1, 0x40
        ctx->r17 = ADD32(ctx->r17, 0X40);
            goto L_00417C74;
    }
    goto skip_0;
    // 0x00417C64: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    skip_0:
    // 0x00417C68: sb          $s3, 0x28($s1)
    MEM_B(0X28, ctx->r17) = ctx->r19;
    // 0x00417C6C: j           L_00417C84
    // 0x00417C70: sb          $s0, 0x2F($s1)
    MEM_B(0X2F, ctx->r17) = ctx->r16;
        goto L_00417C84;
    // 0x00417C70: sb          $s0, 0x2F($s1)
    MEM_B(0X2F, ctx->r17) = ctx->r16;
L_00417C74:
    // 0x00417C74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00417C78: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00417C7C: bne         $v0, $zero, L_00417C58
    if (ctx->r2 != 0) {
        // 0x00417C80: addiu       $s2, $s2, 0x224
        ctx->r18 = ADD32(ctx->r18, 0X224);
            goto L_00417C58;
    }
    // 0x00417C80: addiu       $s2, $s2, 0x224
    ctx->r18 = ADD32(ctx->r18, 0X224);
L_00417C84:
    // 0x00417C84: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00417C88: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00417C8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00417C90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417C98: jr          $ra
    // 0x00417C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00417C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00440C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440C20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00440C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00440C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00440C2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00440C30: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00440C34: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00440C38: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00440C3C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00440C40: addiu       $a2, $a2, 0x46C
    ctx->r6 = ADD32(ctx->r6, 0X46C);
    // 0x00440C44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00440C48: jal         0x0027AD24
    // 0x00440C4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0027AD24(rdram, ctx);
        goto after_0;
    // 0x00440C4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00440C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00440C54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00440C58: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00440C5C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00440C60: addiu       $v0, $v0, -0x5DC
    ctx->r2 = ADD32(ctx->r2, -0X5DC);
    // 0x00440C64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00440C68: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00440C6C: addiu       $v1, $v1, 0x15BC
    ctx->r3 = ADD32(ctx->r3, 0X15BC);
    // 0x00440C70: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x00440C74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00440C78: sb          $v1, -0xC($v0)
    MEM_B(-0XC, ctx->r2) = ctx->r3;
    // 0x00440C7C: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00440C80: addiu       $v1, $v1, 0x12D4
    ctx->r3 = ADD32(ctx->r3, 0X12D4);
    // 0x00440C84: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x00440C88: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00440C8C: sw          $a3, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->r7;
    // 0x00440C90: sw          $a3, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r7;
    // 0x00440C94: jal         0x00243414
    // 0x00440C98: sw          $v1, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r3;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00440C98: sw          $v1, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r3;
    after_1:
    // 0x00440C9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00440CA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00440CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00440CA8: jr          $ra
    // 0x00440CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00440CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045B6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B6EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0045B6F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B6F4: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B6F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045B6FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B700: sw          $v0, 0x98C($at)
    MEM_W(0X98C, ctx->r1) = ctx->r2;
    // 0x0045B704: jr          $ra
    // 0x0045B708: nop

    return;
    // 0x0045B708: nop

;}
