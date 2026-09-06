#include "recomp.h"
#include "funcs.h"

extern void turok2_patch_scene_draw_emit(uint8_t* rdram, recomp_context* ctx);

RECOMP_FUNC void func_00264DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264DCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00264DD0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00264DD4: sb          $v0, 0x1F94($at)
    MEM_B(0X1F94, ctx->r1) = ctx->r2;
    // 0x00264DD8: jr          $ra
    // 0x00264DDC: nop

    return;
    // 0x00264DDC: nop

;}
RECOMP_FUNC void func_004541D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B204:
    // 0x004541D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B238:
    // 0x004541D8: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x004541DC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x004541E0: beq         $v0, $zero, L_004541F4
    if (ctx->r2 == 0) {
        // 0x004541E4: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004541F4;
    }
    // 0x004541E4: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004541E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004541EC: j           L_0041B204
    // 0x004541F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B204(rdram, ctx);
    return;
    // 0x004541F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_004541F4:
    // 0x004541F4: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004541F8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004541FC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454200: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454204: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454208: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045420C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454210: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00454214: beq         $v0, $zero, L_0045422C
    if (ctx->r2 == 0) {
        // 0x00454218: nop
    
            goto L_0045422C;
    }
    // 0x00454218: nop

    // 0x0045421C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454220: addiu       $v0, $v0, 0x57E4
    ctx->r2 = ADD32(ctx->r2, 0X57E4);
    // 0x00454224: j           L_0041B238
    // 0x00454228: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B238(rdram, ctx);
    return;
    // 0x00454228: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045422C:
    // 0x0045422C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454230: addiu       $v0, $v0, 0x5800
    ctx->r2 = ADD32(ctx->r2, 0X5800);
    // 0x00454234: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454238: jr          $ra
    // 0x0045423C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045423C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002712E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002712E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002712EC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002712F0: addiu       $v1, $v1, -0x5513
    ctx->r3 = ADD32(ctx->r3, -0X5513);
    // 0x002712F4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x002712F8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002712FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00271300: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00271304: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271308: lwc1        $f1, -0x7F30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F30);
    // 0x0027130C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00271310: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00271314: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00271318: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027131C: swc1        $f0, 0x2BA0($s1)
    MEM_W(0X2BA0, ctx->r17) = ctx->f0.u32l;
    // 0x00271320: lbu         $v0, -0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X1);
    // 0x00271324: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00271328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027132C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00271330: swc1        $f0, 0x2BA4($s1)
    MEM_W(0X2BA4, ctx->r17) = ctx->f0.u32l;
    // 0x00271334: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x00271338: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027133C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00271340: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00271344: swc1        $f0, 0x2BA8($s1)
    MEM_W(0X2BA8, ctx->r17) = ctx->f0.u32l;
    // 0x00271348: lbu         $v0, -0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X2);
    // 0x0027134C: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x00271350: jal         0x0029DFF0
    // 0x00271354: sw          $v0, 0x2BB0($s1)
    MEM_W(0X2BB0, ctx->r17) = ctx->r2;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00271354: sw          $v0, 0x2BB0($s1)
    MEM_W(0X2BB0, ctx->r17) = ctx->r2;
    after_0:
    // 0x00271358: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0027135C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00271360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00271364: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00271368: beq         $v1, $v0, L_00271390
    if (ctx->r3 == ctx->r2) {
        // 0x0027136C: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00271390;
    }
    // 0x0027136C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00271370: jal         0x0029E010
    // 0x00271374: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00271374: nop

    after_1:
    // 0x00271378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027137C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00271380: jal         0x0029B6F0
    // 0x00271384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00271384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00271388: j           L_00271398
    // 0x0027138C: nop

        goto L_00271398;
    // 0x0027138C: nop

L_00271390:
    // 0x00271390: jal         0x0029E010
    // 0x00271394: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00271394: nop

    after_3:
L_00271398:
    // 0x00271398: jal         0x0027403C
    // 0x0027139C: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    func_0027403C(rdram, ctx);
        goto after_4;
    // 0x0027139C: addiu       $a0, $s1, 0x1DB8
    ctx->r4 = ADD32(ctx->r17, 0X1DB8);
    after_4:
    // 0x002713A0: jal         0x0029DFF0
    // 0x002713A4: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x002713A4: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    after_5:
    // 0x002713A8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x002713AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002713B0: beq         $v1, $zero, L_002713D8
    if (ctx->r3 == 0) {
        // 0x002713B4: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_002713D8;
    }
    // 0x002713B4: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x002713B8: jal         0x0029E010
    // 0x002713BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x002713BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x002713C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002713C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002713C8: jal         0x0029B820
    // 0x002713CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x002713CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x002713D0: j           L_002713E0
    // 0x002713D4: nop

        goto L_002713E0;
    // 0x002713D4: nop

L_002713D8:
    // 0x002713D8: jal         0x0029E010
    // 0x002713DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x002713DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_002713E0:
    // 0x002713E0: jal         0x00276180
    // 0x002713E4: addiu       $a0, $s1, 0x138
    ctx->r4 = ADD32(ctx->r17, 0X138);
    func_00276180(rdram, ctx);
        goto after_9;
    // 0x002713E4: addiu       $a0, $s1, 0x138
    ctx->r4 = ADD32(ctx->r17, 0X138);
    after_9:
    // 0x002713E8: jal         0x002768D0
    // 0x002713EC: addiu       $a0, $s1, 0x2BC0
    ctx->r4 = ADD32(ctx->r17, 0X2BC0);
    func_002768D0(rdram, ctx);
        goto after_10;
    // 0x002713EC: addiu       $a0, $s1, 0x2BC0
    ctx->r4 = ADD32(ctx->r17, 0X2BC0);
    after_10:
    // 0x002713F0: addiu       $s0, $s1, 0x1D64
    ctx->r16 = ADD32(ctx->r17, 0X1D64);
    // 0x002713F4: jal         0x00275018
    // 0x002713F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00275018(rdram, ctx);
        goto after_11;
    // 0x002713F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x002713FC: jal         0x00274B40
    // 0x00271400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00274B40(rdram, ctx);
        goto after_12;
    // 0x00271400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00271404: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00271408: lw          $v0, 0x2680($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2680);
    // 0x0027140C: beq         $v0, $zero, L_00271490
    if (ctx->r2 == 0) {
        // 0x00271410: nop
    
            goto L_00271490;
    }
    // 0x00271410: nop

    // 0x00271414: lw          $v0, 0x2BB4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2BB4);
    // 0x00271418: beq         $v0, $zero, L_00271490
    if (ctx->r2 == 0) {
        // 0x0027141C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_00271490;
    }
    // 0x0027141C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00271420: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00271424: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x00271428: bne         $v1, $v0, L_00271490
    if (ctx->r3 != ctx->r2) {
        // 0x0027142C: nop
    
            goto L_00271490;
    }
    // 0x0027142C: nop

    // 0x00271430: lw          $v0, 0x134($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X134);
    // 0x00271434: blez        $v0, L_00271490
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00271438: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_00271490;
    }
    // 0x00271438: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0027143C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00271440: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00271444: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00271448: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0027144C: jal         0x00281444
    // 0x00271450: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_00281444(rdram, ctx);
        goto after_13;
    // 0x00271450: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_13:
    // 0x00271454: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00271458: lw          $v0, 0x104($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X104);
    // 0x0027145C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00271460: bne         $v0, $zero, L_00271490
    if (ctx->r2 != 0) {
        // 0x00271464: addiu       $a0, $v1, 0x114
        ctx->r4 = ADD32(ctx->r3, 0X114);
            goto L_00271490;
    }
    // 0x00271464: addiu       $a0, $v1, 0x114
    ctx->r4 = ADD32(ctx->r3, 0X114);
    // 0x00271468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027146C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00271470: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00271474: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00271478: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027147C: lw          $a2, 0x114($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X114);
    // 0x00271480: lw          $a1, 0x134($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X134);
    // 0x00271484: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x00271488: jal         0x00270C80
    // 0x0027148C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00270C80(rdram, ctx);
        goto after_14;
    // 0x0027148C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
L_00271490:
    // 0x00271490: lw          $v0, 0x104($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X104);
    // 0x00271494: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00271498: sw          $v0, 0x104($s1)
    MEM_W(0X104, ctx->r17) = ctx->r2;
    // 0x0027149C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x002714A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002714A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002714A8: jr          $ra
    // 0x002714AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002714AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00426FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426FB4: bne         $a2, $zero, L_00426FD8
    if (ctx->r6 != 0) {
        // 0x00426FB8: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00426FD8;
    }
    // 0x00426FB8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426FBC: jr          $ra
    // 0x00426FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00426FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00426FC4:
    // 0x00426FC4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426FC8: bne         $v1, $v0, L_00426FEC
    if (ctx->r3 != ctx->r2) {
        // 0x00426FCC: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00426FEC;
    }
    // 0x00426FCC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426FD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426FD4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00426FD8:
    // 0x00426FD8: beq         $a2, $zero, L_00426FEC
    if (ctx->r6 == 0) {
        // 0x00426FDC: nop
    
            goto L_00426FEC;
    }
    // 0x00426FDC: nop

    // 0x00426FE0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426FE4: bne         $v1, $zero, L_00426FC4
    if (ctx->r3 != 0) {
        // 0x00426FE8: nop
    
            goto L_00426FC4;
    }
    // 0x00426FE8: nop

L_00426FEC:
    // 0x00426FEC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426FF0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426FF4: jr          $ra
    // 0x00426FF8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x00426FF8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_004226C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004226C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004226CC: sw          $zero, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = 0;
    // 0x004226D0: jr          $ra
    // 0x004226D4: nop

    return;
    // 0x004226D4: nop

;}
RECOMP_FUNC void func_00421E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421E78: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421E7C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00421E80: lw          $v1, 0x508($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X508);
    // 0x00421E84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00421E88: beq         $v1, $v0, L_00421EB0
    if (ctx->r3 == ctx->r2) {
        // 0x00421E8C: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_00421EB0;
    }
    // 0x00421E8C: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x00421E90: bne         $v0, $zero, L_00421EA0
    if (ctx->r2 != 0) {
        // 0x00421E94: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00421EA0;
    }
    // 0x00421E94: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00421E98: beq         $v1, $v0, L_00421EC0
    if (ctx->r3 == ctx->r2) {
        // 0x00421E9C: nop
    
            goto L_00421EC0;
    }
    // 0x00421E9C: nop

L_00421EA0:
    // 0x00421EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421EA4: addiu       $v0, $v0, 0x49DC
    ctx->r2 = ADD32(ctx->r2, 0X49DC);
    // 0x00421EA8: j           L_00421ECC
    // 0x00421EAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421ECC;
    // 0x00421EAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421EB0:
    // 0x00421EB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421EB4: addiu       $v0, $v0, 0x49F0
    ctx->r2 = ADD32(ctx->r2, 0X49F0);
    // 0x00421EB8: j           L_00421ECC
    // 0x00421EBC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421ECC;
    // 0x00421EBC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421EC0:
    // 0x00421EC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421EC4: addiu       $v0, $v0, 0x4A04
    ctx->r2 = ADD32(ctx->r2, 0X4A04);
    // 0x00421EC8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421ECC:
    // 0x00421ECC: jr          $ra
    // 0x00421ED0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421ED0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021B39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021B39C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0021B3A0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x0021B3A4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0021B3A8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x0021B3AC: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x0021B3B0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0021B3B4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x0021B3B8: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x0021B3BC: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0021B3C0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0021B3C4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0021B3C8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x0021B3CC: lb          $v0, 0x34($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X34);
    // 0x0021B3D0: lw          $s0, 0x84($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X84);
    // 0x0021B3D4: beq         $v0, $v1, L_0021B574
    if (ctx->r2 == ctx->r3) {
        // 0x0021B3D8: addu        $s6, $a2, $zero
        ctx->r22 = ADD32(ctx->r6, 0);
            goto L_0021B574;
    }
    // 0x0021B3D8: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0021B3DC: lb          $v0, 0x12($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X12);
    // 0x0021B3E0: slti        $v0, $v0, 0x17
    ctx->r2 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x0021B3E4: beq         $v0, $zero, L_0021B574
    if (ctx->r2 == 0) {
        // 0x0021B3E8: nop
    
            goto L_0021B574;
    }
    // 0x0021B3E8: nop

    // 0x0021B3EC: jal         0x0021F358
    // 0x0021B3F0: nop

    func_0021F358(rdram, ctx);
        goto after_0;
    // 0x0021B3F0: nop

    after_0:
    // 0x0021B3F4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0021B3F8: beq         $s3, $zero, L_0021B574
    if (ctx->r19 == 0) {
        // 0x0021B3FC: nop
    
            goto L_0021B574;
    }
    // 0x0021B3FC: nop

    // 0x0021B400: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x0021B404: jal         0x002017D4
    // 0x0021B408: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021B408: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x0021B40C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021B410: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021B414: jal         0x002017D4
    // 0x0021B418: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0021B418: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0021B41C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021B420: jal         0x002017D4
    // 0x0021B424: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0021B424: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x0021B428: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021B42C: lbu         $v0, 0x65($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X65);
    // 0x0021B430: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0021B434: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0021B438: bne         $v0, $v1, L_0021B454
    if (ctx->r2 != ctx->r3) {
        // 0x0021B43C: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_0021B454;
    }
    // 0x0021B43C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0021B440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021B444: jal         0x002051F4
    // 0x0021B448: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x0021B448: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0021B44C: j           L_0021B574
    // 0x0021B450: nop

        goto L_0021B574;
    // 0x0021B450: nop

L_0021B454:
    // 0x0021B454: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021B458: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x0021B45C: addu        $v0, $s5, $s0
    ctx->r2 = ADD32(ctx->r21, ctx->r16);
L_0021B460:
    // 0x0021B460: sb          $s1, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r17;
    // 0x0021B464: lb          $s1, 0x64($a0)
    ctx->r17 = MEM_B(ctx->r4, 0X64);
    // 0x0021B468: beql        $s1, $s4, L_0021B490
    if (ctx->r17 == ctx->r20) {
        // 0x0021B46C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0021B490;
    }
    goto skip_0;
    // 0x0021B46C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0021B470: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021B474: jal         0x002017D4
    // 0x0021B478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0021B478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0021B47C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021B480: jal         0x002017D4
    // 0x0021B484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0021B484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x0021B488: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021B48C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0021B490:
    // 0x0021B490: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0021B494: bne         $v0, $zero, L_0021B460
    if (ctx->r2 != 0) {
        // 0x0021B498: addu        $v0, $s5, $s0
        ctx->r2 = ADD32(ctx->r21, ctx->r16);
            goto L_0021B460;
    }
    // 0x0021B498: addu        $v0, $s5, $s0
    ctx->r2 = ADD32(ctx->r21, ctx->r16);
    // 0x0021B49C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021B4A0: jal         0x002051F4
    // 0x0021B4A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x0021B4A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0021B4A8: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x0021B4AC: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x0021B4B0: sb          $v0, 0x12($s5)
    MEM_B(0X12, ctx->r21) = ctx->r2;
    // 0x0021B4B4: lwc1        $f0, 0x30($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X30);
    // 0x0021B4B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B4BC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0021B4C0: lwc1        $f0, 0x34($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X34);
    // 0x0021B4C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021B4C8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0021B4CC: lwc1        $f0, 0x38($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X38);
    // 0x0021B4D0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0021B4D4: jal         0x0020EF2C
    // 0x0021B4D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x0021B4D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x0021B4DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021B4E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021B4E4: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x0021B4E8: jal         0x0020EFDC
    // 0x0021B4EC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EFDC(rdram, ctx);
        goto after_9;
    // 0x0021B4EC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0021B4F0: jal         0x0020F040
    // 0x0021B4F4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F040(rdram, ctx);
        goto after_10;
    // 0x0021B4F4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_10:
    // 0x0021B4F8: jal         0x0020F040
    // 0x0021B4FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_11;
    // 0x0021B4FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0021B500: jal         0x0020F040
    // 0x0021B504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_12;
    // 0x0021B504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0021B508: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0021B50C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0021B510: jal         0x0020EFDC
    // 0x0021B514: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EFDC(rdram, ctx);
        goto after_13;
    // 0x0021B514: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0021B518: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0021B51C: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0021B520: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0021B524: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0021B528: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x0021B52C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021B530: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x0021B534: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0021B538: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021B53C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0021B540: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0021B544: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021B548: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021B54C: jal         0x0020EF60
    // 0x0021B550: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_14;
    // 0x0021B550: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_14:
    // 0x0021B554: jal         0x0020F040
    // 0x0021B558: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F040(rdram, ctx);
        goto after_15;
    // 0x0021B558: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_15:
    // 0x0021B55C: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x0021B560: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0021B564: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x0021B568: sw          $t0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r8;
    // 0x0021B56C: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x0021B570: sw          $t2, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r10;
L_0021B574:
    // 0x0021B574: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0021B578: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0021B57C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0021B580: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0021B584: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0021B588: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0021B58C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0021B590: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0021B594: jr          $ra
    // 0x0021B598: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0021B598: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_004472AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004472AC: jr          $ra
    // 0x004472B0: nop

    return;
    // 0x004472B0: nop

;}
RECOMP_FUNC void func_0045B620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B620: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045B624: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B628: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B62C: jr          $ra
    // 0x0045B630: nop

    return;
    // 0x0045B630: nop

;}
RECOMP_FUNC void func_0041313C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041313C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00413140: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00413144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00413148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041314C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00413150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00413154: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00413158: jal         0x002017D4
    // 0x0041315C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0041315C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00413160: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413164: jal         0x002017D4
    // 0x00413168: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00413168: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041316C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413170: jal         0x002017D4
    // 0x00413174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00413174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00413178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041317C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00413180: jr          $ra
    // 0x00413184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00413184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00210C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210C3C: lwc1        $f3, 0x10($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x00210C40: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00210C44: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x00210C48: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x00210C4C: swc1        $f3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210C50: lwc1        $f3, 0x14($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x00210C54: swc1        $f3, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210C58: lwc1        $f3, 0x18($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x00210C5C: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x00210C60: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210C64: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x00210C68: jr          $ra
    // 0x00210C6C: swc1        $f3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    return;
    // 0x00210C6C: swc1        $f3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
;}
RECOMP_FUNC void func_002A10CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A10CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A10D0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x002A10D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002A10D8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002A10DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x002A10E0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x002A10E4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x002A10E8: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x002A10EC: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x002A10F0: jal         0x002A09E8
    // 0x002A10F4: nop

    func_002A09E8(rdram, ctx);
        goto after_0;
    // 0x002A10F4: nop

    after_0:
    // 0x002A10F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002A10FC: jr          $ra
    // 0x002A1100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A1100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026F56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F56C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0026F570: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_0026F574:
    // 0x0026F574: beql        $t0, $t2, L_0026F5F8
    if (ctx->r8 == ctx->r10) {
        // 0x0026F578: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0026F5F8;
    }
    goto skip_0;
    // 0x0026F578: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x0026F57C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026F580: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x0026F584: sll         $v0, $t0, 4
    ctx->r2 = S32(ctx->r8 << 4);
    // 0x0026F588: blez        $a1, L_0026F5E0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0026F58C: addu        $v0, $a0, $v0
        ctx->r2 = ADD32(ctx->r4, ctx->r2);
            goto L_0026F5E0;
    }
    // 0x0026F58C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0026F590: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0026F594: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026F598: lwc1        $f5, 0x4($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0026F59C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026F5A0: lwc1        $f3, 0xC($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0XC);
L_0026F5A4:
    // 0x0026F5A4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026F5A8: mul.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x0026F5AC: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026F5B0: mul.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x0026F5B4: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026F5B8: mul.s       $f1, $f4, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0026F5BC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026F5C0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026F5C4: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0026F5C8: nop

    // 0x0026F5CC: bc1t        L_0026F5F0
    if (c1cs) {
        // 0x0026F5D0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0026F5F0;
    }
    // 0x0026F5D0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0026F5D4: slt         $v0, $a3, $a1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0026F5D8: bne         $v0, $zero, L_0026F5A4
    if (ctx->r2 != 0) {
        // 0x0026F5DC: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_0026F5A4;
    }
    // 0x0026F5DC: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_0026F5E0:
    // 0x0026F5E0: bne         $t1, $zero, L_0026F5F8
    if (ctx->r9 != 0) {
        // 0x0026F5E4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0026F5F8;
    }
    // 0x0026F5E4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0026F5E8: jr          $ra
    // 0x0026F5EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026F5EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026F5F0:
    // 0x0026F5F0: j           L_0026F5E0
    // 0x0026F5F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_0026F5E0;
    // 0x0026F5F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_0026F5F8:
    // 0x0026F5F8: slti        $v0, $t0, 0x6
    ctx->r2 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x0026F5FC: bne         $v0, $zero, L_0026F574
    if (ctx->r2 != 0) {
        // 0x0026F600: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026F574;
    }
    // 0x0026F600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026F604: jr          $ra
    // 0x0026F608: nop

    return;
    // 0x0026F608: nop

;}
RECOMP_FUNC void func_0025F29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F29C: lbu         $v0, 0x34($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X34);
    // 0x0025F2A0: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x0025F2A4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025F2A8: beq         $v0, $zero, L_0025F2E4
    if (ctx->r2 == 0) {
        // 0x0025F2AC: lui         $v1, 0xFBFF
        ctx->r3 = S32(0XFBFF << 16);
            goto L_0025F2E4;
    }
    // 0x0025F2AC: lui         $v1, 0xFBFF
    ctx->r3 = S32(0XFBFF << 16);
    // 0x0025F2B0: lbu         $v0, 0xC8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025F2B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F2B8: lwc1        $f0, 0x78D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78D8);
    // 0x0025F2BC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025F2C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025F2C4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F2C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F2CC: lwc1        $f0, 0x78DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78DC);
    // 0x0025F2D0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F2D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F2D8: lwc1        $f1, 0x78E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X78E0);
    // 0x0025F2DC: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025F2E0: swc1        $f1, 0x120($a1)
    MEM_W(0X120, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_0025F2E4:
    // 0x0025F2E4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0025F2E8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025F2EC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025F2F0: jr          $ra
    // 0x0025F2F4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    return;
    // 0x0025F2F4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00401B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00401B34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00401B38: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x00401B3C: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x00401B40: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x00401B44: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x00401B48: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x00401B4C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x00401B50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00401B54: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x00401B58: sw          $t0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r8;
    // 0x00401B5C: jal         0x00401B70
    // 0x00401B60: nop

    func_00401B70(rdram, ctx);
        goto after_0;
    // 0x00401B60: nop

    after_0:
    // 0x00401B64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00401B68: jr          $ra
    // 0x00401B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00401B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026800C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026800C: jr          $ra
    // 0x00268010: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00268010: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0025FDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FDB8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025FDBC: lh          $v0, 0x6A($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6A);
    // 0x0025FDC0: jr          $ra
    // 0x0025FDC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    return;
    // 0x0025FDC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
;}
RECOMP_FUNC void func_002A3AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A3AD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A3AD8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x002A3ADC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x002A3AE0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002A3AE0(rdram, ctx);
;}
RECOMP_FUNC void func_0028CF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CF80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028CF84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028CF88: jal         0x0027BC34
    // 0x0028CF8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x0028CF8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0028CF90: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028CF94: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028CF98: addiu       $s0, $s0, -0xD70
    ctx->r16 = ADD32(ctx->r16, -0XD70);
    // 0x0028CF9C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028CFA0: addiu       $a1, $a1, -0x5378
    ctx->r5 = ADD32(ctx->r5, -0X5378);
    // 0x0028CFA4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0028CFA8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0028CFAC: bnel        $v1, $v0, L_0028CFB4
    if (ctx->r3 != ctx->r2) {
        // 0x0028CFB0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028CFB4;
    }
    goto skip_0;
    // 0x0028CFB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
L_0028CFB4:
    // 0x0028CFB4: lw          $v0, -0x13E8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X13E8);
    // 0x0028CFB8: beql        $v0, $zero, L_0028CFC0
    if (ctx->r2 == 0) {
        // 0x0028CFBC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028CFC0;
    }
    goto skip_1;
    // 0x0028CFBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
L_0028CFC0:
    // 0x0028CFC0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0028CFC4: addiu       $v0, $v0, 0x7078
    ctx->r2 = ADD32(ctx->r2, 0X7078);
    // 0x0028CFC8: beql        $v0, $zero, L_0028CFD0
    if (ctx->r2 == 0) {
        // 0x0028CFCC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028CFD0;
    }
    goto skip_2;
    // 0x0028CFCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_2:
L_0028CFD0:
    // 0x0028CFD0: beq         $a0, $zero, L_0028D080
    if (ctx->r4 == 0) {
        // 0x0028CFD4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0028D080;
    }
    // 0x0028CFD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0028CFD8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0028CFDC: beq         $v1, $a0, L_0028CFFC
    if (ctx->r3 == ctx->r4) {
        // 0x0028CFE0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0028CFFC;
    }
    // 0x0028CFE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0028CFE4: beql        $v0, $zero, L_0028D004
    if (ctx->r2 == 0) {
        // 0x0028CFE8: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_0028D004;
    }
    goto skip_3;
    // 0x0028CFE8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    skip_3:
    // 0x0028CFEC: bnel        $v1, $zero, L_0028D004
    if (ctx->r3 != 0) {
        // 0x0028CFF0: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_0028D004;
    }
    goto skip_4;
    // 0x0028CFF0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    skip_4:
    // 0x0028CFF4: j           L_0028D004
    // 0x0028CFF8: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
        goto L_0028D004;
    // 0x0028CFF8: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
L_0028CFFC:
    // 0x0028CFFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028D000: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_0028D004:
    // 0x0028D004: jal         0x0028D264
    // 0x0028D008: nop

    func_0028D264(rdram, ctx);
        goto after_1;
    // 0x0028D008: nop

    after_1:
    // 0x0028D00C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028D010: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0028D014: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0028D018: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x0028D01C: lbu         $v1, 0x19($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X19);
    // 0x0028D020: bne         $v1, $zero, L_0028D084
    if (ctx->r3 != 0) {
        // 0x0028D024: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_0028D084;
    }
    // 0x0028D024: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0028D028: jal         0x002532A8
    // 0x0028D02C: addiu       $a0, $a0, -0x1268
    ctx->r4 = ADD32(ctx->r4, -0X1268);
    func_002532A8(rdram, ctx);
        goto after_2;
    // 0x0028D02C: addiu       $a0, $a0, -0x1268
    ctx->r4 = ADD32(ctx->r4, -0X1268);
    after_2:
    // 0x0028D030: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0028D034: beq         $a0, $zero, L_0028D084
    if (ctx->r4 == 0) {
        // 0x0028D038: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028D084;
    }
    // 0x0028D038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028D03C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0028D040: bne         $v1, $v0, L_0028D074
    if (ctx->r3 != ctx->r2) {
        // 0x0028D044: nop
    
            goto L_0028D074;
    }
    // 0x0028D044: nop

    // 0x0028D048: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0028D04C: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x0028D050: lw          $v0, 0x92C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X92C);
    // 0x0028D054: bne         $v1, $v0, L_0028D070
    if (ctx->r3 != ctx->r2) {
        // 0x0028D058: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0028D070;
    }
    // 0x0028D058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028D05C: lhu         $v0, 0xA08($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA08);
    // 0x0028D060: addiu       $v0, $v0, -0x13
    ctx->r2 = ADD32(ctx->r2, -0X13);
    // 0x0028D064: sltiu       $v0, $v0, 0xC
    ctx->r2 = ctx->r2 < 0XC ? 1 : 0;
    // 0x0028D068: beq         $v0, $zero, L_0028D074
    if (ctx->r2 == 0) {
        // 0x0028D06C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0028D074;
    }
    // 0x0028D06C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0028D070:
    // 0x0028D070: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_0028D074:
    // 0x0028D074: lw          $v0, 0x92C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X92C);
    // 0x0028D078: j           L_0028D084
    // 0x0028D07C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_0028D084;
    // 0x0028D07C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0028D080:
    // 0x0028D080: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_0028D084:
    // 0x0028D084: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028D088: beq         $v0, $zero, L_0028D0A0
    if (ctx->r2 == 0) {
        // 0x0028D08C: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_0028D0A0;
    }
    // 0x0028D08C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x0028D090: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0028D094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028D098: j           L_0028D0A8
    // 0x0028D09C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_0028D0A8;
    // 0x0028D09C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_0028D0A0:
    // 0x0028D0A0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0028D0A4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0028D0A8:
    // 0x0028D0A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028D0AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028D0B0: jr          $ra
    // 0x0028D0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028D0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040DD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DD30: jr          $ra
    // 0x0040DD34: nop

    return;
    // 0x0040DD34: nop

;}
RECOMP_FUNC void func_002152AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
        turok2_patch_scene_draw_emit(rdram, ctx);
    // 0x002152AC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x002152B0: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x002152B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002152B8: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x002152BC: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x002152C0: jal         0x00215944
    // 0x002152C4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    func_00215944(rdram, ctx);
        goto after_0;
    // 0x002152C4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    after_0:
    // 0x002152C8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x002152CC: beq         $s2, $zero, L_002154C4
    if (ctx->r18 == 0) {
        // 0x002152D0: nop
    
            goto L_002154C4;
    }
    // 0x002152D0: nop

    // 0x002152D4: lbu         $v1, 0x194($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X194);
    // 0x002152D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002152DC: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
        turok2_patch_frame_lsb_dirty(rdram, ctx);

    // 0x002152E0: beq         $v1, $v0, L_00215388
    if (ctx->r3 == ctx->r2) {
        // 0x002152E4: nop
    
            goto L_00215388;
    }
    // 0x002152E4: nop

    // 0x002152E8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002152EC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002152F0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x002152F4: bne         $v1, $v0, L_00215314
    if (ctx->r3 != ctx->r2) {
        // 0x002152F8: nop
    
            goto L_00215314;
    }
    // 0x002152F8: nop

    // 0x002152FC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00215300: addiu       $a0, $a0, -0xE0
    ctx->r4 = ADD32(ctx->r4, -0XE0);
    // 0x00215304: jal         0x00211114
    // 0x00215308: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00211114(rdram, ctx);
        goto after_1;
    // 0x00215308: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x0021530C: j           L_00215320
    // 0x00215310: nop

        goto L_00215320;
    // 0x00215310: nop

L_00215314:
    // 0x00215314: lw          $a1, 0x144($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X144);
    // 0x00215318: jal         0x002105A4
    // 0x0021531C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_002105A4(rdram, ctx);
        goto after_2;
    // 0x0021531C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
L_00215320:
    // 0x00215320: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    // 0x00215324: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00215328: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0021532C: jal         0x0021034C
    // 0x00215330: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_3;
    // 0x00215330: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_3:
    // 0x00215334: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x00215338: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x0021533C: jal         0x0020F510
    // 0x00215340: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_0020F510(rdram, ctx);
        goto after_4;
    // 0x00215340: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_4:
    // 0x00215344: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00215348: lwc1        $f0, 0x168($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X168);
    // 0x0021534C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00215350: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00215354: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00215358: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0021535C: jal         0x00210318
    // 0x00215360: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210318(rdram, ctx);
        goto after_5;
    // 0x00215360: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x00215364: jal         0x00210C3C
    // 0x00215368: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210C3C(rdram, ctx);
        goto after_6;
    // 0x00215368: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x0021536C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00215370: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00215374: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00215378: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0021537C: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    // 0x00215380: jal         0x0020D274
    // 0x00215384: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_7;
    // 0x00215384: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_7:
L_00215388:
    // 0x00215388: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x0021538C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00215390: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00215394: bne         $v1, $v0, L_002153E4
    if (ctx->r3 != ctx->r2) {
        // 0x00215398: nop
    
            goto L_002153E4;
    }
    // 0x00215398: nop

    // 0x0021539C: lbu         $v1, 0x194($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X194);
    // 0x002153A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002153A4: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x002153A8: beq         $v1, $v0, L_002153C0
    if (ctx->r3 == ctx->r2) {
        // 0x002153AC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002153C0;
    }
    // 0x002153AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002153B0: lw          $a1, 0x174($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X174);
    // 0x002153B4: jal         0x0020B4F0
    // 0x002153B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0020B4F0(rdram, ctx);
        goto after_8;
    // 0x002153B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x002153BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002153C0:
    // 0x002153C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002153C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002153C8: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x002153CC: addiu       $a3, $s0, 0x178
    ctx->r7 = ADD32(ctx->r16, 0X178);
    // 0x002153D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002153D4: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x002153D8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002153DC: j           L_00215498
    // 0x002153E0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
        goto L_00215498;
    // 0x002153E0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
L_002153E4:
    // 0x002153E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002153E8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002153EC: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    // 0x002153F0: lb          $s1, 0xE($a2)
    ctx->r17 = MEM_B(ctx->r6, 0XE);
    // 0x002153F4: jal         0x002241C0
    // 0x002153F8: nop

    func_002241C0(rdram, ctx);
        goto after_9;
    // 0x002153F8: nop

    after_9:
    // 0x002153FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00215400: slti        $v0, $v1, 0x6AB
    ctx->r2 = SIGNED(ctx->r3) < 0X6AB ? 1 : 0;
    // 0x00215404: beq         $v0, $zero, L_00215474
    if (ctx->r2 == 0) {
        // 0x00215408: slti        $v0, $v1, 0x6A9
        ctx->r2 = SIGNED(ctx->r3) < 0X6A9 ? 1 : 0;
            goto L_00215474;
    }
    // 0x00215408: slti        $v0, $v1, 0x6A9
    ctx->r2 = SIGNED(ctx->r3) < 0X6A9 ? 1 : 0;
    // 0x0021540C: bne         $v0, $zero, L_00215478
    if (ctx->r2 != 0) {
        // 0x00215410: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00215478;
    }
    // 0x00215410: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00215414: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00215418: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0021541C: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00215420: beq         $v0, $zero, L_00215444
    if (ctx->r2 == 0) {
        // 0x00215424: nop
    
            goto L_00215444;
    }
    // 0x00215424: nop

    // 0x00215428: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0021542C: jal         0x002017D4
    // 0x00215430: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00215430: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x00215434: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00215438: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x0021543C: beql        $v0, $zero, L_00215444
    if (ctx->r2 == 0) {
        // 0x00215440: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00215444;
    }
    goto skip_0;
    // 0x00215440: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
L_00215444:
    // 0x00215444: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00215448: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0021544C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00215450: beq         $v0, $zero, L_00215478
    if (ctx->r2 == 0) {
        // 0x00215454: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00215478;
    }
    // 0x00215454: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00215458: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0021545C: jal         0x002017D4
    // 0x00215460: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x00215460: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x00215464: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00215468: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0021546C: beql        $v0, $zero, L_00215474
    if (ctx->r2 == 0) {
        // 0x00215470: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_00215474;
    }
    goto skip_1;
    // 0x00215470: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    skip_1:
L_00215474:
    // 0x00215474: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00215478:
    // 0x00215478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0021547C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00215480: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00215484: addiu       $a3, $s0, 0x178
    ctx->r7 = ADD32(ctx->r16, 0X178);
    // 0x00215488: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021548C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00215490: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00215494: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
L_00215498:
    // 0x00215498: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    // 0x0021549C: lb          $v0, 0x12($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X12);
    // 0x002154A0: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x002154A4: jal         0x0020B6A0
    // 0x002154A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0020B6A0(rdram, ctx);
        goto after_12;
    // 0x002154A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x002154AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002154B0: jal         0x002051F4
    // 0x002154B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x002154B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_13:
    // 0x002154B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002154BC: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x002154C0: sb          $v0, 0x194($s0)
    MEM_B(0X194, ctx->r16) = ctx->r2;
L_002154C4:
    // 0x002154C4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x002154C8: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x002154CC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x002154D0: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x002154D4: jr          $ra
    // 0x002154D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x002154D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0025D308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025D308: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025D30C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025D310: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0025D314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025D318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025D31C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025D320: lb          $v1, 0x133($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X133);
    // 0x0025D324: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025D328: bne         $v1, $zero, L_0025D344
    if (ctx->r3 != 0) {
        // 0x0025D32C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_0025D344;
    }
    // 0x0025D32C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0025D330: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025D334: lhu         $v0, 0x7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025D338: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025D33C: bne         $v0, $zero, L_0025D380
    if (ctx->r2 != 0) {
        // 0x0025D340: nop
    
            goto L_0025D380;
    }
    // 0x0025D340: nop

L_0025D344:
    // 0x0025D344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025D348: bne         $v1, $v0, L_0025D364
    if (ctx->r3 != ctx->r2) {
        // 0x0025D34C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025D364;
    }
    // 0x0025D34C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025D350: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025D354: lhu         $v0, 0x7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025D358: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025D35C: bne         $v0, $zero, L_0025D380
    if (ctx->r2 != 0) {
        // 0x0025D360: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025D380;
    }
    // 0x0025D360: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0025D364:
    // 0x0025D364: bne         $a0, $v0, L_0025D45C
    if (ctx->r4 != ctx->r2) {
        // 0x0025D368: nop
    
            goto L_0025D45C;
    }
    // 0x0025D368: nop

    // 0x0025D36C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025D370: lhu         $v0, 0x7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025D374: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025D378: beq         $v0, $zero, L_0025D45C
    if (ctx->r2 == 0) {
        // 0x0025D37C: nop
    
            goto L_0025D45C;
    }
    // 0x0025D37C: nop

L_0025D380:
    // 0x0025D380: lbu         $v0, 0xC8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC8);
    // 0x0025D384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D388: lwc1        $f0, 0x7630($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7630);
    // 0x0025D38C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025D390: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025D394: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025D398: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D39C: lwc1        $f0, 0x7634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7634);
    // 0x0025D3A0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025D3A4: nop

    // 0x0025D3A8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025D3AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025D3B0: lwc1        $f0, 0x7638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7638);
    // 0x0025D3B4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025D3B8: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0025D3BC: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x0025D3C0: jal         0x002113A4
    // 0x0025D3C4: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0025D3C4: nop

    after_0:
    // 0x0025D3C8: lui         $v1, 0x68DB
    ctx->r3 = S32(0X68DB << 16);
    // 0x0025D3CC: ori         $v1, $v1, 0x8BAD
    ctx->r3 = ctx->r3 | 0X8BAD;
    // 0x0025D3D0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025D3D4: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025D3D8: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025D3DC: sra         $a0, $t0, 12
    ctx->r4 = S32(SIGNED(ctx->r8) >> 12);
    // 0x0025D3E0: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025D3E4: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0025D3E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025D3EC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025D3F0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025D3F4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0025D3F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025D3FC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0025D400: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025D404: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x0025D408: beq         $v0, $zero, L_0025D45C
    if (ctx->r2 == 0) {
        // 0x0025D40C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025D45C;
    }
    // 0x0025D40C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025D410: lw          $a2, 0x80($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X80);
    // 0x0025D414: lui         $a3, 0x3E86
    ctx->r7 = S32(0X3E86 << 16);
    // 0x0025D418: ori         $a3, $a3, 0xA93
    ctx->r7 = ctx->r7 | 0XA93;
    // 0x0025D41C: jal         0x002451AC
    // 0x0025D420: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002451AC(rdram, ctx);
        goto after_1;
    // 0x0025D420: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0025D424: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0025D428: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025D42C: bne         $v1, $v0, L_0025D444
    if (ctx->r3 != ctx->r2) {
        // 0x0025D430: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025D444;
    }
    // 0x0025D430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025D434: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025D438: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0025D43C: j           L_0025D454
    // 0x0025D440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_0025D454;
    // 0x0025D440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_0025D444:
    // 0x0025D444: bne         $v1, $v0, L_0025D45C
    if (ctx->r3 != ctx->r2) {
        // 0x0025D448: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025D45C;
    }
    // 0x0025D448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025D44C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0025D450: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_0025D454:
    // 0x0025D454: jal         0x00243414
    // 0x0025D458: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025D458: nop

    after_2:
L_0025D45C:
    // 0x0025D45C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025D460: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025D464: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025D468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025D46C: jr          $ra
    // 0x0025D470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025D470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040EC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EC14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EC18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040EC1C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040EC20: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EC24: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x0040EC28: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0040EC2C: blez        $v0, L_0040EC54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EC30: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_0040EC54;
    }
    // 0x0040EC30: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x0040EC34: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_0040EC38:
    // 0x0040EC38: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0040EC3C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EC40: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040EC44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EC48: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EC4C: bne         $v0, $zero, L_0040EC38
    if (ctx->r2 != 0) {
        // 0x0040EC50: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040EC38;
    }
    // 0x0040EC50: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0040EC54:
    // 0x0040EC54: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040EC58: blez        $v0, L_0040EC80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EC5C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040EC80;
    }
    // 0x0040EC5C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EC60: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_0040EC64:
    // 0x0040EC64: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    // 0x0040EC68: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EC6C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040EC70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EC74: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EC78: bne         $v0, $zero, L_0040EC64
    if (ctx->r2 != 0) {
        // 0x0040EC7C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040EC64;
    }
    // 0x0040EC7C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0040EC80:
    // 0x0040EC80: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040EC84: blez        $v0, L_0040ECAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EC88: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040ECAC;
    }
    // 0x0040EC88: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EC8C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_0040EC90:
    // 0x0040EC90: lw          $v0, 0x30($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X30);
    // 0x0040EC94: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EC98: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040EC9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040ECA0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040ECA4: bne         $v0, $zero, L_0040EC90
    if (ctx->r2 != 0) {
        // 0x0040ECA8: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040EC90;
    }
    // 0x0040ECA8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0040ECAC:
    // 0x0040ECAC: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040ECB0: sw          $a1, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r5;
    // 0x0040ECB4: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040ECB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040ECBC: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040ECC0: beq         $v0, $zero, L_0040ECD0
    if (ctx->r2 == 0) {
        // 0x0040ECC4: nop
    
            goto L_0040ECD0;
    }
    // 0x0040ECC4: nop

    // 0x0040ECC8: jalr        $v0
    // 0x0040ECCC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040ECCC: nop

    after_0:
L_0040ECD0:
    // 0x0040ECD0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040ECD4: jr          $ra
    // 0x0040ECD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040ECD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00409500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409500: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x00409504: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x00409508: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0040950C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00409510: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x00409514: sdc1        $f24, 0xB8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XB8, ctx->r29);
    // 0x00409518: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040951C: lwc1        $f24, 0x5D4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5D4);
    // 0x00409520: sdc1        $f23, 0xB0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XB0, ctx->r29);
    // 0x00409524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409528: lwc1        $f23, 0x5D8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X5D8);
    // 0x0040952C: sdc1        $f22, 0xA8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XA8, ctx->r29);
    // 0x00409530: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409534: lwc1        $f22, 0x5DC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5DC);
    // 0x00409538: sdc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XA0, ctx->r29);
    // 0x0040953C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409540: lwc1        $f21, 0x5E0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5E0);
    // 0x00409544: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x00409548: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0040954C: sdc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X98, ctx->r29);
    // 0x00409550: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409554: lwc1        $f20, 0x5E4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5E4);
    // 0x00409558: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x0040955C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x00409560: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
    // 0x00409564: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x00409568: lui         $s6, 0x43
    ctx->r22 = S32(0X43 << 16);
    // 0x0040956C: addiu       $s6, $s6, 0x1D20
    ctx->r22 = ADD32(ctx->r22, 0X1D20);
    // 0x00409570: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x00409574: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
    // 0x00409578: sw          $ra, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r31;
    // 0x0040957C: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x00409580: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00409584: jal         0x0040BD60
    // 0x00409588: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    func_0040BD60(rdram, ctx);
        goto after_0;
    // 0x00409588: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    after_0:
L_0040958C:
    // 0x0040958C: jal         0x0026D518
    // 0x00409590: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x00409590: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_1:
    // 0x00409594: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x00409598: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    // 0x0040959C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004095A0: jal         0x002119FC
    // 0x004095A4: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x004095A4: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    after_2:
    // 0x004095A8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004095AC: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004095B0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x004095B4: jal         0x002119FC
    // 0x004095B8: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x004095B8: mov.s       $f14, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 23);
    ctx->f14.fl = ctx->f23.fl;
    after_3:
    // 0x004095BC: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x004095C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004095C4: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x004095C8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004095CC: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004095D0: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x004095D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004095D8: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x004095DC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x004095E0: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x004095E4: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004095E8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004095EC: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004095F0: beq         $a1, $zero, L_00409640
    if (ctx->r5 == 0) {
        // 0x004095F4: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_00409640;
    }
    // 0x004095F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x004095F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x004095FC: jal         0x0020EF2C
    // 0x00409600: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x00409600: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00409604: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00409608: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0040960C: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00409610: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00409614: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00409618: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0040961C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00409620: jal         0x00298470
    // 0x00409624: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_5;
    // 0x00409624: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_5:
    // 0x00409628: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040962C: lwc1        $f1, 0x5E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5E8);
    // 0x00409630: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00409634: nop

    // 0x00409638: bc1fl       L_00409734
    if (!c1cs) {
        // 0x0040963C: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_00409734;
    }
    goto skip_0;
    // 0x0040963C: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    skip_0:
L_00409640:
    // 0x00409640: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00409644: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00409648: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0040964C: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00409650: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00409654: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x00409658: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0040965C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00409660: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00409664: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00409668: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040966C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00409670: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x00409674: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x00409678: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040967C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00409680: swc1        $f21, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00409684: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x00409688: swc1        $f1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040968C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x00409690: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x00409694: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x00409698: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x0040969C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x004096A0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x004096A4: jal         0x00220A1C
    // 0x004096A8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_6;
    // 0x004096A8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x004096AC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x004096B0: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x004096B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004096B8: mtc1        $s5, $f0
    ctx->f0.u32l = ctx->r21;
    // 0x004096BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004096C0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004096C4: swc1        $f20, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f20.u32l;
    // 0x004096C8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x004096CC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x004096D0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x004096D4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x004096D8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x004096DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x004096E0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x004096E4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004096E8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004096EC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x004096F0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x004096F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004096F8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x004096FC: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00409700: jal         0x00227240
    // 0x00409704: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00227240(rdram, ctx);
        goto after_7;
    // 0x00409704: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00409708: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040970C: beql        $a0, $zero, L_00409734
    if (ctx->r4 == 0) {
        // 0x00409710: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_00409734;
    }
    goto skip_1;
    // 0x00409710: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    skip_1:
    // 0x00409714: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00409718: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x0040971C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409720: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00409724: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00409728: jal         0x00246690
    // 0x0040972C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_8;
    // 0x0040972C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_8:
    // 0x00409730: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_00409734:
    // 0x00409734: addiu       $v0, $s6, 0x50
    ctx->r2 = ADD32(ctx->r22, 0X50);
    // 0x00409738: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040973C: bne         $v0, $zero, L_0040958C
    if (ctx->r2 != 0) {
        // 0x00409740: nop
    
            goto L_0040958C;
    }
    // 0x00409740: nop

    // 0x00409744: lw          $ra, 0x90($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X90);
    // 0x00409748: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x0040974C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x00409750: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x00409754: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x00409758: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x0040975C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x00409760: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00409764: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00409768: ldc1        $f24, 0xB8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XB8);
    // 0x0040976C: ldc1        $f23, 0xB0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XB0);
    // 0x00409770: ldc1        $f22, 0xA8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XA8);
    // 0x00409774: ldc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XA0);
    // 0x00409778: ldc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X98);
    // 0x0040977C: jr          $ra
    // 0x00409780: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x00409780: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_00412E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412E1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412E20: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412E28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00412E2C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412E30: jal         0x002017D4
    // 0x00412E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00412E38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00412E3C: jr          $ra
    // 0x00412E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A5DC: jal         0x00211774
    // 0x0029A5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x0029A5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    after_0:
    // 0x0029A5E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029A5E8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0029A5EC: addiu       $s0, $s0, 0x7A60
    ctx->r16 = ADD32(ctx->r16, 0X7A60);
    // 0x0029A5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029A5F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029A5F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029A5FC: jal         0x00266C5C
    // 0x0029A600: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x0029A600: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_1:
    // 0x0029A604: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x0029A608: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x0029A60C: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x0029A610: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029A614: sw          $v0, 0x7AC4($at)
    MEM_W(0X7AC4, ctx->r1) = ctx->r2;
    // 0x0029A618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029A61C: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    // 0x0029A620: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x0029A624: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0029A628: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029A62C: sw          $s0, 0x7AC0($at)
    MEM_W(0X7AC0, ctx->r1) = ctx->r16;
    // 0x0029A630: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x0029A634: bne         $v1, $zero, L_0029A64C
    if (ctx->r3 != 0) {
        // 0x0029A638: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0029A64C;
    }
    // 0x0029A638: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0029A63C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029A640: addiu       $v0, $v0, 0x7B40
    ctx->r2 = ADD32(ctx->r2, 0X7B40);
    // 0x0029A644: j           L_0029A674
    // 0x0029A648: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
        goto L_0029A674;
    // 0x0029A648: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_0029A64C:
    // 0x0029A64C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029A650: bne         $v1, $v0, L_0029A668
    if (ctx->r3 != ctx->r2) {
        // 0x0029A654: nop
    
            goto L_0029A668;
    }
    // 0x0029A654: nop

    // 0x0029A658: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029A65C: addiu       $v0, $v0, 0x7B90
    ctx->r2 = ADD32(ctx->r2, 0X7B90);
    // 0x0029A660: j           L_0029A674
    // 0x0029A664: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
        goto L_0029A674;
    // 0x0029A664: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_0029A668:
    // 0x0029A668: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029A66C: addiu       $v0, $v0, 0x7AF0
    ctx->r2 = ADD32(ctx->r2, 0X7AF0);
    // 0x0029A670: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_0029A674:
    // 0x0029A674: lui         $a1, 0xA440
    ctx->r5 = S32(0XA440 << 16);
    // 0x0029A678: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0029A67C: lw          $v1, 0x7AC4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7AC4);
    // 0x0029A680: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x0029A684: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x0029A688: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0029A68C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0029A690: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0029A694: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x0029A698: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0029A69C: bne         $v0, $zero, L_0029A6BC
    if (ctx->r2 != 0) {
        // 0x0029A6A0: sw          $a0, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r4;
            goto L_0029A6BC;
    }
    // 0x0029A6A0: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x0029A6A4: lui         $v1, 0xA440
    ctx->r3 = S32(0XA440 << 16);
    // 0x0029A6A8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_0029A6AC:
    // 0x0029A6AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029A6B0: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0029A6B4: beq         $v0, $zero, L_0029A6AC
    if (ctx->r2 == 0) {
        // 0x0029A6B8: nop
    
            goto L_0029A6AC;
    }
    // 0x0029A6B8: nop

L_0029A6BC:
    // 0x0029A6BC: lui         $v0, 0xA440
    ctx->r2 = S32(0XA440 << 16);
    // 0x0029A6C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0029A6C4: jal         0x0029ACE0
    // 0x0029A6C8: nop

    func_0029ACE0(rdram, ctx);
        goto after_2;
    // 0x0029A6C8: nop

    after_2:
    // 0x0029A6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029A6D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029A6D4: jr          $ra
    // 0x0029A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028FB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028FB80: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0028FB84: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0028FB88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028FB8C: lwc1        $f20, -0x5D58($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5D58);
    // 0x0028FB90: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0028FB94: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028FB98: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0028FB9C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x0028FBA0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0028FBA4: addiu       $s5, $s2, 0x48
    ctx->r21 = ADD32(ctx->r18, 0X48);
    // 0x0028FBA8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0028FBAC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0028FBB0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0028FBB4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0028FBB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
L_0028FBBC:
    // 0x0028FBBC: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x0028FBC0: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x0028FBC4: beq         $v0, $zero, L_00290060
    if (ctx->r2 == 0) {
        // 0x0028FBC8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00290060;
    }
    // 0x0028FBC8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028FBCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028FBD0: addu        $at, $at, $v0
    gpr jr_addend_0028FBD8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028FBD4: lw          $v0, -0x5D50($at)
    ctx->r2 = ADD32(ctx->r1, -0X5D50);
    // 0x0028FBD8: jr          $v0
    // 0x0028FBDC: nop

    switch (jr_addend_0028FBD8 >> 2) {
        case 0: goto L_0028FBE0; break;
        case 1: goto L_00290048; break;
        case 2: goto L_0028FDEC; break;
        case 3: goto L_00290048; break;
        case 4: goto L_00290048; break;
        case 5: goto L_0028FC10; break;
        case 6: goto L_0028FC58; break;
        case 7: goto L_0028FE00; break;
        case 8: goto L_00290060; break;
        case 9: goto L_0028FBF0; break;
        case 10: goto L_0028FE14; break;
        case 11: goto L_00290060; break;
        case 12: goto L_0028FF98; break;
        case 13: goto L_0028FFB4; break;
        case 14: goto L_0029000C; break;
        case 15: goto L_0028FE6C; break;
        case 16: goto L_0028FE8C; break;
        case 17: goto L_0028FEF8; break;
        case 18: goto L_00290060; break;
        case 19: goto L_00290060; break;
        case 20: goto L_00290060; break;
        case 21: goto L_0028FDEC; break;
        case 22: goto L_0028FCB4; break;
        case 23: goto L_0028FD68; break;
        default: switch_error(__func__, 0x0028FBD8, 0x800AA2B0);
    }
    // 0x0028FBDC: nop

L_0028FBE0:
    // 0x0028FBE0: jal         0x002900B0
    // 0x0028FBE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002900B0(rdram, ctx);
        goto after_0;
    // 0x0028FBE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0028FBE8: j           L_00290064
    // 0x0028FBEC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FBEC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FBF0:
    // 0x0028FBF0: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FBF4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0028FBF8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x0028FBFC: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x0028FC00: jal         0x00291034
    // 0x0028FC04: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_1;
    // 0x0028FC04: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x0028FC08: j           L_00290064
    // 0x0028FC0C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FC0C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FC10:
    // 0x0028FC10: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x0028FC14: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FC18: jal         0x00294650
    // 0x0028FC1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294650(rdram, ctx);
        goto after_2;
    // 0x0028FC1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0028FC20: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FC24: jal         0x00294160
    // 0x0028FC28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294160(rdram, ctx);
        goto after_3;
    // 0x0028FC28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0028FC2C: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x0028FC30: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x0028FC34: beq         $v0, $zero, L_0028FC44
    if (ctx->r2 == 0) {
        // 0x0028FC38: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0028FC44;
    }
    // 0x0028FC38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FC3C: jal         0x00292B94
    // 0x0028FC40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00292B94(rdram, ctx);
        goto after_4;
    // 0x0028FC40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_0028FC44:
    // 0x0028FC44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FC48: jal         0x002924CC
    // 0x0028FC4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002924CC(rdram, ctx);
        goto after_5;
    // 0x0028FC4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0028FC50: j           L_00290064
    // 0x0028FC54: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FC54: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FC58:
    // 0x0028FC58: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x0028FC5C: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x0028FC60: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0028FC64: bne         $v0, $zero, L_0028FC70
    if (ctx->r2 != 0) {
        // 0x0028FC68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028FC70;
    }
    // 0x0028FC68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028FC6C: sb          $v0, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r2;
L_0028FC70:
    // 0x0028FC70: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    // 0x0028FC74: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0028FC78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028FC7C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0028FC80: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x0028FC84: lbu         $v0, 0x44($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X44);
    // 0x0028FC88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0028FC8C: jal         0x00292774
    // 0x0028FC90: sb          $v0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r2;
    func_00292774(rdram, ctx);
        goto after_6;
    // 0x0028FC90: sb          $v0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r2;
    after_6:
    // 0x0028FC94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028FC98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0028FC9C: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0028FCA0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FCA4: jal         0x002943E0
    // 0x0028FCA8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_002943E0(rdram, ctx);
        goto after_7;
    // 0x0028FCA8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0028FCAC: j           L_00290064
    // 0x0028FCB0: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FCB0: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FCB4:
    // 0x0028FCB4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0028FCB8: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x0028FCBC: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x0028FCC0: lw          $v0, 0x74($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X74);
    // 0x0028FCC4: jalr        $v0
    // 0x0028FCC8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x0028FCC8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_8:
    // 0x0028FCCC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0028FCD0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0028FCD4: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0028FCD8: nop

    // 0x0028FCDC: bc1t        L_0028FCF4
    if (c1cs) {
        // 0x0028FCE0: addiu       $a2, $s1, 0x36
        ctx->r6 = ADD32(ctx->r17, 0X36);
            goto L_0028FCF4;
    }
    // 0x0028FCE0: addiu       $a2, $s1, 0x36
    ctx->r6 = ADD32(ctx->r17, 0X36);
    // 0x0028FCE4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0028FCE8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0028FCEC: j           L_0028FD0C
    // 0x0028FCF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0028FD0C;
    // 0x0028FCF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0028FCF4:
    // 0x0028FCF4: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0028FCF8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0028FCFC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0028FD00: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0028FD04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0028FD08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0028FD0C:
    // 0x0028FD0C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0028FD10: jal         0x00292774
    // 0x0028FD14: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    func_00292774(rdram, ctx);
        goto after_9;
    // 0x0028FD14: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    after_9:
    // 0x0028FD18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028FD1C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x0028FD20: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x0028FD24: jal         0x002927E8
    // 0x0028FD28: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_10;
    // 0x0028FD28: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_10:
    // 0x0028FD2C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0028FD30: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0028FD34: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FD38: jal         0x002943E0
    // 0x0028FD3C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_11;
    // 0x0028FD3C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_11:
    // 0x0028FD40: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FD44: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028FD48: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0028FD4C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x0028FD50: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x0028FD54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028FD58: jal         0x00291034
    // 0x0028FD5C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    func_00291034(rdram, ctx);
        goto after_12;
    // 0x0028FD5C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_12:
    // 0x0028FD60: j           L_00290064
    // 0x0028FD64: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FD64: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FD68:
    // 0x0028FD68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0028FD6C: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x0028FD70: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x0028FD74: lw          $v0, 0x74($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X74);
    // 0x0028FD78: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x0028FD7C: jalr        $v0
    // 0x0028FD80: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x0028FD80: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
    // 0x0028FD84: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0028FD88: lwc1        $f1, 0x28($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X28);
    // 0x0028FD8C: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x0028FD90: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028FD94: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x0028FD98: lw          $a0, 0x60($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X60);
    // 0x0028FD9C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0028FDA0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0028FDA4: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0028FDA8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028FDAC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0028FDB0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FDB4: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0028FDB8: jal         0x00294340
    // 0x0028FDBC: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00294340(rdram, ctx);
        goto after_14;
    // 0x0028FDBC: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_14:
    // 0x0028FDC0: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FDC4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028FDC8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0028FDCC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x0028FDD0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x0028FDD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028FDD8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x0028FDDC: jal         0x00291034
    // 0x0028FDE0: sb          $s0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r16;
    func_00291034(rdram, ctx);
        goto after_15;
    // 0x0028FDE0: sb          $s0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r16;
    after_15:
    // 0x0028FDE4: j           L_00290064
    // 0x0028FDE8: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FDE8: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FDEC:
    // 0x0028FDEC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FDF0: jal         0x00290240
    // 0x0028FDF4: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    func_00290240(rdram, ctx);
        goto after_16;
    // 0x0028FDF4: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    after_16:
    // 0x0028FDF8: j           L_00290064
    // 0x0028FDFC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FDFC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FE00:
    // 0x0028FE00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FE04: jal         0x00290ACC
    // 0x0028FE08: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    func_00290ACC(rdram, ctx);
        goto after_17;
    // 0x0028FE08: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    after_17:
    // 0x0028FE0C: j           L_00290064
    // 0x0028FE10: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FE10: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FE14:
    // 0x0028FE14: lhu         $v0, 0x3C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3C);
    // 0x0028FE18: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x0028FE1C: beq         $s1, $zero, L_00290060
    if (ctx->r17 == 0) {
        // 0x0028FE20: sh          $v0, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r2;
            goto L_00290060;
    }
    // 0x0028FE20: sh          $v0, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r2;
    // 0x0028FE24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0028FE28:
    // 0x0028FE28: jal         0x00292774
    // 0x0028FE2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00292774(rdram, ctx);
        goto after_18;
    // 0x0028FE2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_18:
    // 0x0028FE30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028FE34: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x0028FE38: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x0028FE3C: jal         0x002927E8
    // 0x0028FE40: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_19;
    // 0x0028FE40: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_19:
    // 0x0028FE44: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0028FE48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0028FE4C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FE50: jal         0x002943E0
    // 0x0028FE54: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_20;
    // 0x0028FE54: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_20:
    // 0x0028FE58: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x0028FE5C: bne         $s1, $zero, L_0028FE28
    if (ctx->r17 != 0) {
        // 0x0028FE60: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028FE28;
    }
    // 0x0028FE60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028FE64: j           L_00290064
    // 0x0028FE68: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FE68: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FE6C:
    // 0x0028FE6C: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x0028FE70: beq         $v0, $s6, L_00290064
    if (ctx->r2 == ctx->r22) {
        // 0x0028FE74: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00290064;
    }
    // 0x0028FE74: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FE78: sw          $s6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r22;
    // 0x0028FE7C: jal         0x00290C60
    // 0x0028FE80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00290C60(rdram, ctx);
        goto after_21;
    // 0x0028FE80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_21:
    // 0x0028FE84: j           L_00290064
    // 0x0028FE88: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FE88: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FE8C:
    // 0x0028FE8C: lw          $v1, 0x2C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2C);
    // 0x0028FE90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028FE94: bne         $v1, $v0, L_00290064
    if (ctx->r3 != ctx->r2) {
        // 0x0028FE98: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00290064;
    }
    // 0x0028FE98: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FE9C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x0028FEA0: beql        $s1, $zero, L_00290064
    if (ctx->r17 == 0) {
        // 0x0028FEA4: sw          $zero, 0x2C($s2)
        MEM_W(0X2C, ctx->r18) = 0;
            goto L_00290064;
    }
    goto skip_0;
    // 0x0028FEA4: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
    skip_0:
    // 0x0028FEA8: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_0028FEAC:
    // 0x0028FEAC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FEB0: jal         0x00294650
    // 0x0028FEB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294650(rdram, ctx);
        goto after_22;
    // 0x0028FEB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_22:
    // 0x0028FEB8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0028FEBC: jal         0x00294160
    // 0x0028FEC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294160(rdram, ctx);
        goto after_23;
    // 0x0028FEC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_23:
    // 0x0028FEC4: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x0028FEC8: beq         $v0, $zero, L_0028FED8
    if (ctx->r2 == 0) {
        // 0x0028FECC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0028FED8;
    }
    // 0x0028FECC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FED0: jal         0x00292B94
    // 0x0028FED4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00292B94(rdram, ctx);
        goto after_24;
    // 0x0028FED4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_24:
L_0028FED8:
    // 0x0028FED8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FEDC: jal         0x002924CC
    // 0x0028FEE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002924CC(rdram, ctx);
        goto after_25;
    // 0x0028FEE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_25:
    // 0x0028FEE4: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x0028FEE8: bne         $s1, $zero, L_0028FEAC
    if (ctx->r17 != 0) {
        // 0x0028FEEC: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_0028FEAC;
    }
    // 0x0028FEEC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x0028FEF0: j           L_00290060
    // 0x0028FEF4: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_00290060;
    // 0x0028FEF4: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_0028FEF8:
    // 0x0028FEF8: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x0028FEFC: bne         $v0, $s6, L_00290064
    if (ctx->r2 != ctx->r22) {
        // 0x0028FF00: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00290064;
    }
    // 0x0028FF00: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FF04: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0028FF08: jal         0x002911B8
    // 0x0028FF0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002911B8(rdram, ctx);
        goto after_26;
    // 0x0028FF0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_26:
    // 0x0028FF10: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0028FF14: jal         0x002911B8
    // 0x0028FF18: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_002911B8(rdram, ctx);
        goto after_27;
    // 0x0028FF18: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_27:
    // 0x0028FF1C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0028FF20: jal         0x002911B8
    // 0x0028FF24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002911B8(rdram, ctx);
        goto after_28;
    // 0x0028FF24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_28:
    // 0x0028FF28: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x0028FF2C: beq         $s1, $zero, L_0028FF70
    if (ctx->r17 == 0) {
        // 0x0028FF30: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_0028FF70;
    }
    // 0x0028FF30: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FF34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0028FF38:
    // 0x0028FF38: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x0028FF3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028FF40: jal         0x00292530
    // 0x0028FF44: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_00292530(rdram, ctx);
        goto after_29;
    // 0x0028FF44: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_29:
    // 0x0028FF48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0028FF4C: beq         $v0, $zero, L_0028FF60
    if (ctx->r2 == 0) {
        // 0x0028FF50: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0028FF60;
    }
    // 0x0028FF50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FF54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028FF58: jal         0x00292A74
    // 0x0028FF5C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_00292A74(rdram, ctx);
        goto after_30;
    // 0x0028FF5C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_30:
L_0028FF60:
    // 0x0028FF60: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x0028FF64: bne         $s1, $zero, L_0028FF38
    if (ctx->r17 != 0) {
        // 0x0028FF68: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0028FF38;
    }
    // 0x0028FF68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FF6C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FF70:
    // 0x0028FF70: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028FF74: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x0028FF78: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0028FF7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028FF80: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x0028FF84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0028FF88: jal         0x00291034
    // 0x0028FF8C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_31;
    // 0x0028FF8C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_31:
    // 0x0028FF90: j           L_00290064
    // 0x0028FF94: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x0028FF94: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0028FF98:
    // 0x0028FF98: lbu         $v0, 0x3C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3C);
    // 0x0028FF9C: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x0028FFA0: lbu         $a0, 0x3D($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3D);
    // 0x0028FFA4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028FFA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028FFAC: j           L_00290060
    // 0x0028FFB0: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
        goto L_00290060;
    // 0x0028FFB0: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
L_0028FFB4:
    // 0x0028FFB4: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x0028FFB8: bne         $v0, $s6, L_0028FFD8
    if (ctx->r2 != ctx->r22) {
        // 0x0028FFBC: nop
    
            goto L_0028FFD8;
    }
    // 0x0028FFBC: nop

    // 0x0028FFC0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028FFC4: addiu       $a0, $a0, -0x5D70
    ctx->r4 = ADD32(ctx->r4, -0X5D70);
    // 0x0028FFC8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0028FFCC: addiu       $a1, $a1, -0x5D6C
    ctx->r5 = ADD32(ctx->r5, -0X5D6C);
    // 0x0028FFD0: jal         0x0029B020
    // 0x0028FFD4: addiu       $a2, $zero, 0x127
    ctx->r6 = ADD32(0, 0X127);
    func_0029B020(rdram, ctx);
        goto after_32;
    // 0x0028FFD4: addiu       $a2, $zero, 0x127
    ctx->r6 = ADD32(0, 0X127);
    after_32:
L_0028FFD8:
    // 0x0028FFD8: lui         $a1, 0x48F4
    ctx->r5 = S32(0X48F4 << 16);
    // 0x0028FFDC: ori         $a1, $a1, 0x2400
    ctx->r5 = ctx->r5 | 0X2400;
    // 0x0028FFE0: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x0028FFE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028FFE8: jal         0x00290D5C
    // 0x0028FFEC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    func_00290D5C(rdram, ctx);
        goto after_33;
    // 0x0028FFEC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    after_33:
    // 0x0028FFF0: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x0028FFF4: beq         $a1, $zero, L_00290064
    if (ctx->r5 == 0) {
        // 0x0028FFF8: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00290064;
    }
    // 0x0028FFF8: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0028FFFC: jal         0x00292844
    // 0x00290000: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00292844(rdram, ctx);
        goto after_34;
    // 0x00290000: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_34:
    // 0x00290004: j           L_00290064
    // 0x00290008: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x00290008: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0029000C:
    // 0x0029000C: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x00290010: beq         $v0, $zero, L_00290030
    if (ctx->r2 == 0) {
        // 0x00290014: nop
    
            goto L_00290030;
    }
    // 0x00290014: nop

    // 0x00290018: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029001C: addiu       $a0, $a0, -0x5D70
    ctx->r4 = ADD32(ctx->r4, -0X5D70);
    // 0x00290020: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00290024: addiu       $a1, $a1, -0x5D6C
    ctx->r5 = ADD32(ctx->r5, -0X5D6C);
    // 0x00290028: jal         0x0029B020
    // 0x0029002C: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    func_0029B020(rdram, ctx);
        goto after_35;
    // 0x0029002C: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    after_35:
L_00290030:
    // 0x00290030: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x00290034: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00290038: jal         0x00292844
    // 0x0029003C: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    func_00292844(rdram, ctx);
        goto after_36;
    // 0x0029003C: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_36:
    // 0x00290040: j           L_00290064
    // 0x00290044: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_00290064;
    // 0x00290044: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00290048:
    // 0x00290048: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029004C: addiu       $a0, $a0, -0x5D70
    ctx->r4 = ADD32(ctx->r4, -0X5D70);
    // 0x00290050: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00290054: addiu       $a1, $a1, -0x5D6C
    ctx->r5 = ADD32(ctx->r5, -0X5D6C);
    // 0x00290058: jal         0x0029B020
    // 0x0029005C: addiu       $a2, $zero, 0x13A
    ctx->r6 = ADD32(0, 0X13A);
    func_0029B020(rdram, ctx);
        goto after_37;
    // 0x0029005C: addiu       $a2, $zero, 0x13A
    ctx->r6 = ADD32(0, 0X13A);
    after_37:
L_00290060:
    // 0x00290060: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00290064:
    // 0x00290064: jal         0x00290F9C
    // 0x00290068: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    func_00290F9C(rdram, ctx);
        goto after_38;
    // 0x00290068: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    after_38:
    // 0x0029006C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00290070: beq         $a0, $zero, L_0028FBBC
    if (ctx->r4 == 0) {
        // 0x00290074: sw          $a0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r4;
            goto L_0028FBBC;
    }
    // 0x00290074: sw          $a0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r4;
    // 0x00290078: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x0029007C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00290080: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x00290084: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00290088: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0029008C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00290090: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00290094: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00290098: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0029009C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002900A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002900A4: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x002900A8: jr          $ra
    // 0x002900AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002900AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002021F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002021F0: addiu       $a2, $a2, 0x2F
    ctx->r6 = ADD32(ctx->r6, 0X2F);
    // 0x002021F4: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x002021F8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x002021FC: beq         $v1, $zero, L_00202338
    if (ctx->r3 == 0) {
            // 0x00202200: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    func_00202338(rdram, ctx);
    return;
    }
    // 0x00202200: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x00202204: j           L_00202220
    // 0x00202208: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
        goto L_00202220;
    // 0x00202208: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0020220C:
    // 0x0020220C: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x00202210: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x00202214: beq         $v0, $zero, L_0020222C
    if (ctx->r2 == 0) {
        // 0x00202218: nop
    
            goto L_0020222C;
    }
    // 0x00202218: nop

    // 0x0020221C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_00202220:
    // 0x00202220: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x00202224: bne         $v0, $zero, L_0020220C
    if (ctx->r2 != 0) {
        // 0x00202228: nop
    
            goto L_0020220C;
    }
    // 0x00202228: nop

L_0020222C:
    // 0x0020222C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x00202230: lw          $v1, 0x14($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X14);
    // 0x00202234: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x00202238: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x0020223C: addiu       $v1, $a1, -0x20
    ctx->r3 = ADD32(ctx->r5, -0X20);
    // 0x00202240: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x00202244: bne         $v0, $zero, L_00202338
    if (ctx->r2 != 0) {
            // 0x00202248: addu        $t0, $v1, $a2
    ctx->r8 = ADD32(ctx->r3, ctx->r6);
    func_00202338(rdram, ctx);
    return;
    }
    // 0x00202248: addu        $t0, $v1, $a2
    ctx->r8 = ADD32(ctx->r3, ctx->r6);
    // 0x0020224C: sltu        $v0, $t1, $t0
    ctx->r2 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x00202250: bne         $v0, $zero, L_00202338
    if (ctx->r2 != 0) {
            // 0x00202254: subu        $v0, $t1, $t0
    ctx->r2 = SUB32(ctx->r9, ctx->r8);
    func_00202338(rdram, ctx);
    return;
    }
    // 0x00202254: subu        $v0, $t1, $t0
    ctx->r2 = SUB32(ctx->r9, ctx->r8);
    // 0x00202258: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x0020225C: beq         $v0, $zero, L_00202294
    if (ctx->r2 == 0) {
        // 0x00202260: sw          $v0, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r2;
            goto L_00202294;
    }
    // 0x00202260: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x00202264: sw          $a3, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r7;
    // 0x00202268: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x0020226C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x00202270: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x00202274: bnel        $v0, $zero, L_0020227C
    if (ctx->r2 != 0) {
        // 0x00202278: sw          $v1, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r3;
            goto L_0020227C;
    }
    goto skip_0;
    // 0x00202278: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    skip_0:
L_0020227C:
    // 0x0020227C: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00202280: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00202284: beql        $v0, $a3, L_0020229C
    if (ctx->r2 == ctx->r7) {
        // 0x00202288: sw          $v1, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r3;
            goto L_0020229C;
    }
    goto skip_1;
    // 0x00202288: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    skip_1:
    // 0x0020228C: j           L_0020229C
    // 0x00202290: nop

        goto L_0020229C;
    // 0x00202290: nop

L_00202294:
    // 0x00202294: sw          $zero, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = 0;
    // 0x00202298: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_0020229C:
    // 0x0020229C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x002022A0: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x002022A4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x002022A8: bne         $v0, $zero, L_00202314
    if (ctx->r2 != 0) {
        // 0x002022AC: sw          $v0, 0x14($a3)
        MEM_W(0X14, ctx->r7) = ctx->r2;
            goto L_00202314;
    }
    // 0x002022AC: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x002022B0: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x002022B4: beq         $a2, $zero, L_002022C4
    if (ctx->r6 == 0) {
        // 0x002022B8: nop
    
            goto L_002022C4;
    }
    // 0x002022B8: nop

    // 0x002022BC: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x002022C0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_002022C4:
    // 0x002022C4: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x002022C8: beq         $a2, $zero, L_002022D8
    if (ctx->r6 == 0) {
        // 0x002022CC: nop
    
            goto L_002022D8;
    }
    // 0x002022CC: nop

    // 0x002022D0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x002022D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_002022D8:
    // 0x002022D8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002022DC: bne         $v0, $a3, L_002022EC
    if (ctx->r2 != ctx->r7) {
        // 0x002022E0: nop
    
            goto L_002022EC;
    }
    // 0x002022E0: nop

    // 0x002022E4: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x002022E8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_002022EC:
    // 0x002022EC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002022F0: bnel        $v0, $a3, L_00202310
    if (ctx->r2 != ctx->r7) {
        // 0x002022F4: sw          $zero, 0x0($a3)
        MEM_W(0X0, ctx->r7) = 0;
            goto L_00202310;
    }
    goto skip_2;
    // 0x002022F4: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    skip_2:
    // 0x002022F8: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x002022FC: bnel        $v0, $zero, L_0020230C
    if (ctx->r2 != 0) {
        // 0x00202300: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0020230C;
    }
    goto skip_3;
    // 0x00202300: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    skip_3:
    // 0x00202304: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00202308: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_0020230C:
    // 0x0020230C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_00202310:
    // 0x00202310: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
L_00202314:
    // 0x00202314: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00202318: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x0020231C: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x00202320: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x00202324: bnel        $v0, $zero, L_0020232C
    if (ctx->r2 != 0) {
        // 0x00202328: sw          $v1, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r3;
            goto L_0020232C;
    }
    goto skip_4;
    // 0x00202328: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    skip_4:
L_0020232C:
    // 0x0020232C: sw          $v1, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r3;
    // 0x00202330: jr          $ra
    // 0x00202334: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x00202334: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_002365F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002365F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002365FC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00236600: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00236604: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00236608: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023660C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00236610: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00236614: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00236618: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0023661C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00236624: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x00236628: addu        $at, $s5, $at
    ctx->r1 = ADD32(ctx->r21, ctx->r1);
    // 0x0023662C: lw          $v1, -0x6A50($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6A50);
    // 0x00236630: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x00236634: beq         $v1, $v0, L_0023669C
    if (ctx->r3 == ctx->r2) {
        // 0x00236638: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0023669C;
    }
    // 0x00236638: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0023663C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00236640: ori         $s6, $zero, 0x95A0
    ctx->r22 = 0 | 0X95A0;
    // 0x00236644: ori         $s3, $zero, 0x94D8
    ctx->r19 = 0 | 0X94D8;
L_00236648:
    // 0x00236648: addu        $s2, $s5, $s3
    ctx->r18 = ADD32(ctx->r21, ctx->r19);
    // 0x0023664C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00236650: beql        $s0, $zero, L_00236690
    if (ctx->r16 == 0) {
        // 0x00236654: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_00236690;
    }
    goto skip_0;
    // 0x00236654: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
L_00236658:
    // 0x00236658: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x0023665C: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x00236660: bnel        $v0, $s7, L_00236684
    if (ctx->r2 != ctx->r23) {
        // 0x00236664: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00236684;
    }
    goto skip_1;
    // 0x00236664: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x00236668: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023666C: jal         0x00200738
    // 0x00236670: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00236670: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00236674: addu        $a0, $s5, $s6
    ctx->r4 = ADD32(ctx->r21, ctx->r22);
    // 0x00236678: jal         0x00200574
    // 0x0023667C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x0023667C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00236680: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00236684:
    // 0x00236684: bne         $s0, $zero, L_00236658
    if (ctx->r16 != 0) {
        // 0x00236688: nop
    
            goto L_00236658;
    }
    // 0x00236688: nop

    // 0x0023668C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_00236690:
    // 0x00236690: slti        $v0, $s4, 0xA
    ctx->r2 = SIGNED(ctx->r20) < 0XA ? 1 : 0;
    // 0x00236694: bne         $v0, $zero, L_00236648
    if (ctx->r2 != 0) {
        // 0x00236698: addiu       $s3, $s3, 0x14
        ctx->r19 = ADD32(ctx->r19, 0X14);
            goto L_00236648;
    }
    // 0x00236698: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
L_0023669C:
    // 0x0023669C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002366A0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x002366A4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002366A8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002366AC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002366B0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002366B4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002366B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002366BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002366C0: jr          $ra
    // 0x002366C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002366C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0020548C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020548C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205490: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00205494: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00205498: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0020549C: jal         0x0029DFF0
    // 0x002054A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002054A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002054A4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002054A8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002054AC: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002054B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002054B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002054B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002054BC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002054C0: beq         $v1, $v0, L_002054EC
    if (ctx->r3 == ctx->r2) {
        // 0x002054C4: nop
    
            goto L_002054EC;
    }
    // 0x002054C4: nop

    // 0x002054C8: jal         0x0029E010
    // 0x002054CC: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002054CC: nop

    after_1:
    // 0x002054D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002054D4: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002054D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002054DC: jal         0x0029B6F0
    // 0x002054E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002054E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002054E4: j           L_002054F4
    // 0x002054E8: nop

        goto L_002054F4;
    // 0x002054E8: nop

L_002054EC:
    // 0x002054EC: jal         0x0029E010
    // 0x002054F0: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x002054F0: nop

    after_3:
L_002054F4:
    // 0x002054F4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002054F8: addiu       $s0, $s0, -0x7DE8
    ctx->r16 = ADD32(ctx->r16, -0X7DE8);
    // 0x002054FC: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x00205500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205504: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x00205508: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020550C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00205510: sw          $v0, -0x7DF8($at)
    MEM_W(-0X7DF8, ctx->r1) = ctx->r2;
    // 0x00205514: jal         0x0029DFF0
    // 0x00205518: nop

    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x00205518: nop

    after_4:
    // 0x0020551C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205520: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205524: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00205528: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020552C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205530: beq         $v1, $zero, L_00205558
    if (ctx->r3 == 0) {
        // 0x00205534: nop
    
            goto L_00205558;
    }
    // 0x00205534: nop

    // 0x00205538: jal         0x0029E010
    // 0x0020553C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x0020553C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00205540: addiu       $a0, $s0, 0xB98
    ctx->r4 = ADD32(ctx->r16, 0XB98);
    // 0x00205544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205548: jal         0x0029B820
    // 0x0020554C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x0020554C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x00205550: j           L_00205560
    // 0x00205554: nop

        goto L_00205560;
    // 0x00205554: nop

L_00205558:
    // 0x00205558: jal         0x0029E010
    // 0x0020555C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x0020555C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
L_00205560:
    // 0x00205560: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00205564: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00205568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020556C: jr          $ra
    // 0x00205570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00467B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467B4C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00467B50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00467B54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00467B58: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x00467B5C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x00467B60: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_00467B64:
    // 0x00467B64: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x00467B68: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00467B6C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00467B70: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00467B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00467B78: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00467B7C: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x00467B80: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00467B84: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00467B88: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467B8C: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x00467B90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00467B94: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467B98: bne         $a1, $t0, L_00467B64
    if (ctx->r5 != ctx->r8) {
        // 0x00467B9C: or          $a3, $a3, $v0
        ctx->r7 = ctx->r7 | ctx->r2;
            goto L_00467B64;
    }
    // 0x00467B9C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x00467BA0: beq         $a3, $zero, L_00467C04
    if (ctx->r7 == 0) {
            // 0x00467BA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00467C04(rdram, ctx);
    return;
    }
    // 0x00467BA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00467BA8: beq         $a3, $zero, L_00467BF8
    if (ctx->r7 == 0) {
        // 0x00467BAC: addiu       $a1, $a3, -0x1
        ctx->r5 = ADD32(ctx->r7, -0X1);
            goto L_00467BF8;
    }
    // 0x00467BAC: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x00467BB0: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x00467BB4: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x00467BB8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_00467BBC:
    // 0x00467BBC: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x00467BC0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00467BC4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00467BC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00467BCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00467BD0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00467BD4: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x00467BD8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x00467BDC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00467BE0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467BE4: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x00467BE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00467BEC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467BF0: bne         $a1, $t0, L_00467BBC
    if (ctx->r5 != ctx->r8) {
        // 0x00467BF4: or          $a2, $a2, $v0
        ctx->r6 = ctx->r6 | ctx->r2;
            goto L_00467BBC;
    }
    // 0x00467BF4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
L_00467BF8:
    // 0x00467BF8: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x00467BFC: jr          $ra
    // 0x00467C00: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x00467C00: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00201DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201DBC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00201DC0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00201DC4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00201DC8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00201DCC: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00201DD0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00201DD4: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00201DD8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00201DDC: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x00201DE0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00201DE4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x00201DE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00201DEC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00201DF0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00201DF4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00201DF8: jal         0x0029B030
    // 0x00201DFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00201DFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00201E00: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x00201E04: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
L_00201E08:
    // 0x00201E08: jal         0x0020205C
    // 0x00201E0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020205C(rdram, ctx);
        goto after_1;
    // 0x00201E0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00201E10: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00201E14: beq         $a1, $zero, L_00201E6C
    if (ctx->r5 == 0) {
        // 0x00201E18: addiu       $s1, $zero, 0x2000
        ctx->r17 = ADD32(0, 0X2000);
            goto L_00201E6C;
    }
    // 0x00201E18: addiu       $s1, $zero, 0x2000
    ctx->r17 = ADD32(0, 0X2000);
    // 0x00201E1C: subu        $v0, $s4, $s0
    ctx->r2 = SUB32(ctx->r20, ctx->r16);
    // 0x00201E20: addu        $v1, $s5, $v0
    ctx->r3 = ADD32(ctx->r21, ctx->r2);
    // 0x00201E24: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x00201E28: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00201E2C: sltiu       $v0, $s0, 0x2001
    ctx->r2 = ctx->r16 < 0X2001 ? 1 : 0;
    // 0x00201E30: beq         $v0, $zero, L_00201E3C
    if (ctx->r2 == 0) {
        // 0x00201E34: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_00201E3C;
    }
    // 0x00201E34: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00201E38: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00201E3C:
    // 0x00201E3C: addiu       $a0, $s3, 0x230
    ctx->r4 = ADD32(ctx->r19, 0X230);
    // 0x00201E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00201E44: sw          $s1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r17;
    // 0x00201E48: jal         0x0029B5B0
    // 0x00201E4C: sw          $s2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r18;
    osJamMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00201E4C: sw          $s2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r18;
    after_2:
    // 0x00201E50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00201E54: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x00201E58: jal         0x0029B6F0
    // 0x00201E5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00201E5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00201E60: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x00201E64: bne         $s0, $zero, L_00201E08
    if (ctx->r16 != 0) {
        // 0x00201E68: nop
    
            goto L_00201E08;
    }
    // 0x00201E68: nop

L_00201E6C:
    // 0x00201E6C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00201E70: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00201E74: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00201E78: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00201E7C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00201E80: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00201E84: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00201E88: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00201E8C: jr          $ra
    // 0x00201E90: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00201E90: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002664F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002664F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002664F8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002664FC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266500: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266504: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00266508: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x0026650C: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x00266510: jal         0x002245BC
    // 0x00266514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x00266514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x00266518: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026651C: jr          $ra
    // 0x00266520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004551D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C23C:
    // 0x004551D4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
L_0041C240:
    // 0x004551D8: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x004551DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004551E0: beq         $v1, $v0, L_00455220
    if (ctx->r3 == ctx->r2) {
        // 0x004551E4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00455220;
    }
    // 0x004551E4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004551E8: beq         $v0, $zero, L_00455200
    if (ctx->r2 == 0) {
        // 0x004551EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00455200;
    }
    // 0x004551EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004551F0: beq         $v1, $zero, L_00455210
    if (ctx->r3 == 0) {
        // 0x004551F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00455210;
    }
    // 0x004551F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004551F8: j           L_0041C240
    // 0x004551FC: nop

    entry_0041C240(rdram, ctx);
    return;
    // 0x004551FC: nop

L_00455200:
    // 0x00455200: beq         $v1, $v0, L_00455230
    if (ctx->r3 == ctx->r2) {
        // 0x00455204: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00455230;
    }
    // 0x00455204: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455208: j           L_0041C240
    // 0x0045520C: nop

    entry_0041C240(rdram, ctx);
    return;
    // 0x0045520C: nop

L_00455210:
    // 0x00455210: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455214: addiu       $v0, $v0, 0x3F90
    ctx->r2 = ADD32(ctx->r2, 0X3F90);
    // 0x00455218: j           L_0041C23C
    // 0x0045521C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041C23C(rdram, ctx);
    return;
    // 0x0045521C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00455220:
    // 0x00455220: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455224: addiu       $v0, $v0, 0x3FA8
    ctx->r2 = ADD32(ctx->r2, 0X3FA8);
    // 0x00455228: j           L_0041C23C
    // 0x0045522C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041C23C(rdram, ctx);
    return;
    // 0x0045522C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00455230:
    // 0x00455230: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455234: addiu       $v0, $v0, 0x3FC0
    ctx->r2 = ADD32(ctx->r2, 0X3FC0);
    // 0x00455238: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045523C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455240: jr          $ra
    // 0x00455244: nop

    return;
    // 0x00455244: nop

;}
RECOMP_FUNC void func_00401CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401CA8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00401CAC: beq         $v0, $zero, L_00401CBC
    if (ctx->r2 == 0) {
        // 0x00401CB0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00401CBC;
    }
    // 0x00401CB0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00401CB4: bnel        $v0, $v1, L_00401CBC
    if (ctx->r2 != ctx->r3) {
        // 0x00401CB8: sw          $v1, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r3;
            goto L_00401CBC;
    }
    goto skip_0;
    // 0x00401CB8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    skip_0:
L_00401CBC:
    // 0x00401CBC: jr          $ra
    // 0x00401CC0: nop

    return;
    // 0x00401CC0: nop

;}
RECOMP_FUNC void func_00224984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224984: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224988: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022498C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00224990: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00224994: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00224998: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0022499C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x002249A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002249A4: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x002249A8: jal         0x002017D4
    // 0x002249AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002249AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x002249B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002249B4: jal         0x002017D4
    // 0x002249B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002249B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002249BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002249C0: jal         0x002017D4
    // 0x002249C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002249C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x002249C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002249CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002249D0: jal         0x002017D4
    // 0x002249D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002249D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002249D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002249DC: jal         0x00201818
    // 0x002249E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x002249E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x002249E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002249E8: jal         0x002017D4
    // 0x002249EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002249EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x002249F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002249F4: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x002249F8: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x002249FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00224A00: beq         $s1, $zero, L_00224A2C
    if (ctx->r17 == 0) {
        // 0x00224A04: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00224A2C;
    }
    // 0x00224A04: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224A08: bgez        $s2, L_00224A14
    if (SIGNED(ctx->r18) >= 0) {
        // 0x00224A0C: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_00224A14;
    }
    // 0x00224A0C: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x00224A10: addiu       $v1, $s2, 0x7
    ctx->r3 = ADD32(ctx->r18, 0X7);
L_00224A14:
    // 0x00224A14: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x00224A18: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x00224A1C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00224A20: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00224A24: j           L_00224A50
    // 0x00224A28: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_00224A50;
    // 0x00224A28: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_00224A2C:
    // 0x00224A2C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00224A30: bltzl       $a2, L_00224A38
    if (SIGNED(ctx->r6) < 0) {
        // 0x00224A34: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_00224A38;
    }
    goto skip_0;
    // 0x00224A34: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_0:
L_00224A38:
    // 0x00224A38: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00224A3C: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x00224A40: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00224A44: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x00224A48: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00224A4C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_00224A50:
    // 0x00224A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00224A54: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00224A58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224A5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224A60: jr          $ra
    // 0x00224A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040E55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E55C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E560: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E564: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x0040E568: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0040E56C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0040E570: swc1        $f1, 0x500($a0)
    MEM_W(0X500, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040E574: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0040E578: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0040E57C: swc1        $f1, 0x508($a0)
    MEM_W(0X508, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040E580: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040E584: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040E588: jal         0x00225C84
    // 0x0040E58C: nop

    func_00225C84(rdram, ctx);
        goto after_0;
    // 0x0040E58C: nop

    after_0:
    // 0x0040E590: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E594: jr          $ra
    // 0x0040E598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00446D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446D60: jr          $ra
    // 0x00446D64: nop

    return;
    // 0x00446D64: nop

;}
RECOMP_FUNC void func_0029A574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A574: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0029A578: lwc1        $f14, 0x7A8C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7A8C);
    // 0x0029A57C: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
;}
RECOMP_FUNC void func_0027BC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BC34: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0027BC38: addiu       $v1, $v1, 0x56B0
    ctx->r3 = ADD32(ctx->r3, 0X56B0);
    // 0x0027BC3C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0027BC40: bne         $v0, $zero, L_0027BC54
    if (ctx->r2 != 0) {
        // 0x0027BC44: nop
    
            goto L_0027BC54;
    }
    // 0x0027BC44: nop

    // 0x0027BC48: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0027BC4C: beq         $v0, $zero, L_0027BC60
    if (ctx->r2 == 0) {
            // 0x0027BC50: nop

    func_0027BC60(rdram, ctx);
    return;
    }
    // 0x0027BC50: nop

L_0027BC54:
    // 0x0027BC54: lw          $v0, 0x1B4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1B4);
    // 0x0027BC58: jr          $ra
    // 0x0027BC5C: nop

    return;
    // 0x0027BC5C: nop

;}
RECOMP_FUNC void func_00456364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00456364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00456368: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045636C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00456370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00456374: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00456378: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045637C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00456380: jal         0x0025340C
    // 0x00456384: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00456384: nop

    after_0:
    // 0x00456388: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0045638C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00456390: sll         $a1, $v1, 3
    ctx->r5 = S32(ctx->r3 << 3);
    // 0x00456394: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456398: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0045639C: lw          $v1, 0x1FB8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB8);
    // 0x004563A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004563A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004563A8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x004563AC: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x004563B0: beq         $v1, $v0, L_00456424
    if (ctx->r3 == ctx->r2) {
        // 0x004563B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00456424;
    }
    // 0x004563B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004563B8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x004563BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004563C0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x004563C4: lw          $v1, 0x1FB0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB0);
    // 0x004563C8: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x004563CC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x004563D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004563D4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004563D8: sb          $a0, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = ctx->r4;
    // 0x004563DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004563E0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x004563E4: lw          $v1, 0x1FB0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB0);
    // 0x004563E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004563EC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x004563F0: lw          $a0, 0x1FB8($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB8);
    // 0x004563F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004563F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004563FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456400: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456404: sw          $a0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r4;
    // 0x00456408: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0045640C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456410: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456414: sw          $v1, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r3;
    // 0x00456418: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045641C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00456420: sb          $zero, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = 0;
L_00456424:
    // 0x00456424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00456428: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045642C: jr          $ra
    // 0x00456430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00456430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A4BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A4BD4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x002A4BD8: addu        $a0, $a3, $a0
    ctx->r4 = ADD32(ctx->r7, ctx->r4);
    // 0x002A4BDC: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
;}
RECOMP_FUNC void func_0044FAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FAF8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0044FAFC: beq         $a0, $zero, L_0044FB20
    if (ctx->r4 == 0) {
        // 0x0044FB00: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044FB20;
    }
    // 0x0044FB00: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044FB04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_0044FB08:
    // 0x0044FB08: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x0044FB0C: bnel        $v0, $a1, L_0044FB14
    if (ctx->r2 != ctx->r5) {
        // 0x0044FB10: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0044FB14;
    }
    goto skip_0;
    // 0x0044FB10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_0044FB14:
    // 0x0044FB14: lw          $a0, 0x1D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D4);
    // 0x0044FB18: bne         $a0, $zero, L_0044FB08
    if (ctx->r4 != 0) {
        // 0x0044FB1C: nop
    
            goto L_0044FB08;
    }
    // 0x0044FB1C: nop

L_0044FB20:
    // 0x0044FB20: jr          $ra
    // 0x0044FB24: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0044FB24: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_002A1170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A1174: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x002A1178: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002A117C: addiu       $v1, $v1, 0x5C38
    ctx->r3 = ADD32(ctx->r3, 0X5C38);
    // 0x002A1180: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
        turok2_patch_rax_open(rdram, ctx);

    // 0x002A1184: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x002A1188: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
    // 0x002A118C: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x002A1190: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x002A1194: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x002A1198: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x002A119C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002A11A0: lui         $t2, 0xF42
    ctx->r10 = S32(0XF42 << 16);
    // 0x002A11A4: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x002A11A8: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x002A11AC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x002A11B0: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x002A11B4: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x002A11B8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002A11BC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x002A11C0: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
    // 0x002A11C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002A11C8: sh          $zero, -0x7452($at)
    MEM_H(-0X7452, ctx->r1) = 0;
    // 0x002A11CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002A11D0: sh          $zero, -0x7450($at)
    MEM_H(-0X7450, ctx->r1) = 0;
    // 0x002A11D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002A11D8: sh          $zero, -0x7458($at)
    MEM_H(-0X7458, ctx->r1) = 0;
    // 0x002A11DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002A11E0: sh          $zero, -0x7456($at)
    MEM_H(-0X7456, ctx->r1) = 0;
    // 0x002A11E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002A11E8: sh          $zero, -0x7454($at)
    MEM_H(-0X7454, ctx->r1) = 0;
    // 0x002A11EC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x002A11F0: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x002A11F4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x002A11F8: ori         $t2, $t2, 0x4000
    ctx->r10 = ctx->r10 | 0X4000;
    // 0x002A11FC: mult        $v0, $t2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A1200: addu        $t1, $t0, $zero
    ctx->r9 = ADD32(ctx->r8, 0);
    // 0x002A1204: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x002A1208: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x002A120C: mfhi        $a0
    ctx->r4 = hi;
    // 0x002A1210: mflo        $a1
    ctx->r5 = lo;
    // 0x002A1214: jal         0x002A4650
    // 0x002A1218: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    func_002A4650(rdram, ctx);
        goto after_0;
    // 0x002A1218: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    after_0:
    // 0x002A121C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002A1220: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002A1224: jr          $ra
    // 0x002A1228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A1228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00447100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447100: jr          $ra
    // 0x00447104: nop

    return;
    // 0x00447104: nop

;}
RECOMP_FUNC void func_002763AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002763AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002763B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002763B4: sw          $a0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r4;
    // 0x002763B8: sw          $a0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r4;
    // 0x002763BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x002763C0: jal         0x00273A34
    // 0x002763C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00273A34(rdram, ctx);
        goto after_0;
    // 0x002763C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x002763C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002763CC: jr          $ra
    // 0x002763D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002763D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040C2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C2C4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0040C2C8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0040C2CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040C2D0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0040C2D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040C2D8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040C2DC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040C2E0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x0040C2E4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x0040C2E8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x0040C2EC: jal         0x00220A1C
    // 0x0040C2F0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_00220A1C(rdram, ctx);
        goto after_0;
    // 0x0040C2F0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x0040C2F4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0040C2F8: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0040C2FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C300: lwc1        $f0, 0x8B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8B4);
    // 0x0040C304: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040C308: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0040C30C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x0040C310: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0040C314: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0040C318: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040C31C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x0040C320: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x0040C324: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x0040C328: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0040C32C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0040C330: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0040C334: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0040C338: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0040C33C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x0040C340: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x0040C344: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0040C348: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0040C34C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x0040C350: jal         0x00227240
    // 0x0040C354: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00227240(rdram, ctx);
        goto after_1;
    // 0x0040C354: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0040C358: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040C35C: beq         $a0, $zero, L_0040C380
    if (ctx->r4 == 0) {
        // 0x0040C360: nop
    
            goto L_0040C380;
    }
    // 0x0040C360: nop

    // 0x0040C364: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0040C368: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x0040C36C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040C370: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x0040C374: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x0040C378: jal         0x00246690
    // 0x0040C37C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x0040C37C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_2:
L_0040C380:
    // 0x0040C380: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0040C384: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0040C388: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0040C38C: jr          $ra
    // 0x0040C390: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0040C390: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00297D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297D50: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x00297D54: sdc1        $f23, 0x78($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X78, ctx->r29);
    // 0x00297D58: mtc1        $a1, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r5;
    // 0x00297D5C: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x00297D60: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00297D64: sdc1        $f24, 0x80($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X80, ctx->r29);
    // 0x00297D68: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x00297D6C: sdc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X68, ctx->r29);
    // 0x00297D70: lwc1        $f21, 0xA8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0XA8);
    // 0x00297D74: sdc1        $f25, 0x88($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X88, ctx->r29);
    // 0x00297D78: lwc1        $f25, 0xAC($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0XAC);
    // 0x00297D7C: sdc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X70, ctx->r29);
    // 0x00297D80: lwc1        $f22, 0xB0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x00297D84: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00297D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00297D8C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00297D90: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00297D94: sdc1        $f26, 0x90($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X90, ctx->r29);
    // 0x00297D98: lwc1        $f26, 0xB4($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x00297D9C: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x00297DA0: jal         0x00297BCC
    // 0x00297DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x00297DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00297DA8: sub.s       $f2, $f20, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f23.fl;
    // 0x00297DAC: sub.s       $f4, $f21, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f21.fl - ctx->f24.fl;
    // 0x00297DB0: sub.s       $f3, $f22, $f25
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f3.fl = ctx->f22.fl - ctx->f25.fl;
    // 0x00297DB4: add.s       $f20, $f20, $f23
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f23.fl;
    // 0x00297DB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00297DBC: add.s       $f21, $f21, $f24
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f24.fl;
    // 0x00297DC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297DC4: lwc1        $f0, -0x5820($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5820);
    // 0x00297DC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297DCC: lwc1        $f1, -0x581C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X581C);
    // 0x00297DD0: add.s       $f22, $f22, $f25
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f25.fl;
    // 0x00297DD4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x00297DD8: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00297DDC: div.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f4.fl);
    // 0x00297DE0: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x00297DE4: div.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f2.fl);
    // 0x00297DE8: neg.s       $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = -ctx->f21.fl;
    // 0x00297DEC: div.s       $f21, $f21, $f4
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f21.fl = DIV_S(ctx->f21.fl, ctx->f4.fl);
    // 0x00297DF0: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x00297DF4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00297DF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297DFC: lwc1        $f0, -0x5818($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5818);
    // 0x00297E00: div.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x00297E04: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00297E08: swc1        $f20, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f20.u32l;
    // 0x00297E0C: swc1        $f21, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00297E10: swc1        $f22, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f22.u32l;
    // 0x00297E14: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00297E18: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
L_00297E1C:
    // 0x00297E1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00297E20: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00297E24:
    // 0x00297E24: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00297E28: mul.s       $f0, $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x00297E2C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00297E30: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00297E34: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x00297E38: bne         $v0, $zero, L_00297E24
    if (ctx->r2 != 0) {
        // 0x00297E3C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00297E24;
    }
    // 0x00297E3C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00297E40: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00297E44: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x00297E48: bne         $v0, $zero, L_00297E1C
    if (ctx->r2 != 0) {
        // 0x00297E4C: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_00297E1C;
    }
    // 0x00297E4C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x00297E50: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00297E54: jal         0x00297C1C
    // 0x00297E58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00297C1C(rdram, ctx);
        goto after_1;
    // 0x00297E58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00297E5C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x00297E60: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00297E64: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00297E68: ldc1        $f26, 0x90($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X90);
    // 0x00297E6C: ldc1        $f25, 0x88($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X88);
    // 0x00297E70: ldc1        $f24, 0x80($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X80);
    // 0x00297E74: ldc1        $f23, 0x78($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X78);
    // 0x00297E78: ldc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X70);
    // 0x00297E7C: ldc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X68);
    // 0x00297E80: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x00297E84: jr          $ra
    // 0x00297E88: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x00297E88: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_0041309C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041309C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004130A0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004130A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004130A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004130AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004130B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004130B4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004130B8: jal         0x002017D4
    // 0x004130BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004130BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x004130C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004130C4: jal         0x002017D4
    // 0x004130C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004130C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004130CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004130D0: jal         0x002017D4
    // 0x004130D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x004130D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x004130D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004130DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004130E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004130E4: jr          $ra
    // 0x004130E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004130E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044AEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00411F78:
    // 0x0044AEF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_00411FB4:
    // 0x0044AEFC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
L_00412014:
    // 0x0044AF00: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
L_00412074:
    // 0x0044AF04: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
L_00412180:
    // 0x0044AF08: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
L_004121F0:
    // 0x0044AF0C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
L_00412260:
    // 0x0044AF10: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
L_004122CC:
    // 0x0044AF14: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
L_004122F0:
    // 0x0044AF18: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x0044AF1C: bne         $v0, $zero, L_0044AF3C
    if (ctx->r2 != 0) {
        // 0x0044AF20: nop
    
            goto L_0044AF3C;
    }
    // 0x0044AF20: nop

    // 0x0044AF24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044AF28: lw          $v0, 0x1BC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BC4);
    // 0x0044AF2C: beq         $v0, $zero, L_0044B2F8
    if (ctx->r2 == 0) {
        // 0x0044AF30: nop
    
            goto L_0044B2F8;
    }
    // 0x0044AF30: nop

    // 0x0044AF34: j           L_004122F0
    // 0x0044AF38: nop

    entry_004122F0(rdram, ctx);
    return;
    // 0x0044AF38: nop

L_0044AF3C:
    // 0x0044AF3C: lwc1        $f0, 0x290($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X290);
    // 0x0044AF40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AF44: lwc1        $f1, 0xA84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA84);
    // 0x0044AF48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AF4C: nop

    // 0x0044AF50: bc1tl       L_0044AF68
    if (c1cs) {
        // 0x0044AF54: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044AF68;
    }
    goto skip_0;
    // 0x0044AF54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0044AF58: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AF5C: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x0044AF60: j           L_00411F78
    // 0x0044AF64: nop

    entry_00411F78(rdram, ctx);
    return;
    // 0x0044AF64: nop

L_0044AF68:
    // 0x0044AF68: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AF6C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AF70: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x0044AF74: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
    // 0x0044AF78: lwc1        $f0, 0x294($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X294);
    // 0x0044AF7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AF80: lwc1        $f1, 0xA88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA88);
    // 0x0044AF84: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AF88: nop

    // 0x0044AF8C: bc1tl       L_0044AFA4
    if (c1cs) {
        // 0x0044AF90: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044AFA4;
    }
    goto skip_1;
    // 0x0044AF90: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0044AF94: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AF98: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x0044AF9C: j           L_00411FB4
    // 0x0044AFA0: nop

    entry_00411FB4(rdram, ctx);
    return;
    // 0x0044AFA0: nop

L_0044AFA4:
    // 0x0044AFA4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AFA8: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AFAC: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x0044AFB0: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x0044AFB4: mtc1        $s1, $f2
    ctx->f2.u32l = ctx->r17;
    // 0x0044AFB8: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0044AFBC: bgez        $s1, L_0044AFD0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x0044AFC0: nop
    
            goto L_0044AFD0;
    }
    // 0x0044AFC0: nop

    // 0x0044AFC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AFC8: ldc1        $f0, 0xA90($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XA90);
    // 0x0044AFCC: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0044AFD0:
    // 0x0044AFD0: lwc1        $f1, 0x288($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X288);
    // 0x0044AFD4: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x0044AFD8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044AFDC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AFE0: lwc1        $f1, 0xA98($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA98);
    // 0x0044AFE4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AFE8: nop

    // 0x0044AFEC: bc1tl       L_0044B004
    if (c1cs) {
        // 0x0044AFF0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044B004;
    }
    goto skip_2;
    // 0x0044AFF0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0044AFF4: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AFF8: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x0044AFFC: j           L_00412014
    // 0x0044B000: nop

    entry_00412014(rdram, ctx);
    return;
    // 0x0044B000: nop

L_0044B004:
    // 0x0044B004: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044B008: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B00C: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x0044B010: or          $s3, $s3, $v0
    ctx->r19 = ctx->r19 | ctx->r2;
    // 0x0044B014: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x0044B018: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0044B01C: bgez        $s0, L_0044B030
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0044B020: nop
    
            goto L_0044B030;
    }
    // 0x0044B020: nop

    // 0x0044B024: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B028: ldc1        $f0, 0xAA0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XAA0);
    // 0x0044B02C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0044B030:
    // 0x0044B030: lwc1        $f1, 0x28C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28C);
    // 0x0044B034: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x0044B038: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044B03C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B040: lwc1        $f1, 0xAA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAA8);
    // 0x0044B044: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B048: nop

    // 0x0044B04C: bc1tl       L_0044B064
    if (c1cs) {
        // 0x0044B050: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044B064;
    }
    goto skip_3;
    // 0x0044B050: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x0044B054: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B058: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x0044B05C: j           L_00412074
    // 0x0044B060: nop

    entry_00412074(rdram, ctx);
    return;
    // 0x0044B060: nop

L_0044B064:
    // 0x0044B064: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044B068: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B06C: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x0044B070: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
    // 0x0044B074: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B078: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B07C: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x0044B080: jal         0x004108CC
    // 0x0044B084: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_004108CC(rdram, ctx);
        goto after_0;
    // 0x0044B084: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x0044B088: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B08C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B090: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0044B094: jal         0x00410A74
    // 0x0044B098: nop

    func_00410A74(rdram, ctx);
        goto after_1;
    // 0x0044B098: nop

    after_1:
    // 0x0044B09C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044B0A0: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044B0A4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0044B0A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x0044B0AC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x0044B0B0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0044B0B4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0044B0B8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0044B0BC: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
    // 0x0044B0C0: beq         $v0, $zero, L_0044B114
    if (ctx->r2 == 0) {
        // 0x0044B0C4: mov.s       $f5, $f0
        CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f5.fl = ctx->f0.fl;
            goto L_0044B114;
    }
    // 0x0044B0C4: mov.s       $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f5.fl = ctx->f0.fl;
    // 0x0044B0C8: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x0044B0CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0044B0D0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x0044B0D4: nop

    // 0x0044B0D8: bc1tl       L_0044B0E0
    if (c1cs) {
        // 0x0044B0DC: mov.s       $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
            goto L_0044B0E0;
    }
    goto skip_4;
    // 0x0044B0DC: mov.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
    skip_4:
L_0044B0E0:
    // 0x0044B0E0: lwc1        $f3, 0x28($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x0044B0E4: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x0044B0E8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x0044B0EC: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0044B0F0: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0044B0F4: mul.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f4.fl);
    // 0x0044B0F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B0FC: lwc1        $f0, 0xAAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAAC);
    // 0x0044B100: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x0044B104: add.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f0.fl;
    // 0x0044B108: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0044B10C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x0044B110: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_0044B114:
    // 0x0044B114: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0044B118: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B11C: lwc1        $f1, 0xAB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAB0);
    // 0x0044B120: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044B124: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044B128: nop

    // 0x0044B12C: bc1fl       L_0044B134
    if (!c1cs) {
        // 0x0044B130: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0044B134;
    }
    goto skip_5;
    // 0x0044B130: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_0044B134:
    // 0x0044B134: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044B138: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B13C: nop

    // 0x0044B140: bc1fl       L_0044B148
    if (!c1cs) {
        // 0x0044B144: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0044B148;
    }
    goto skip_6;
    // 0x0044B144: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_6:
L_0044B148:
    // 0x0044B148: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B14C: lwc1        $f1, 0xAB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAB4);
    // 0x0044B150: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B154: nop

    // 0x0044B158: bc1tl       L_0044B170
    if (c1cs) {
        // 0x0044B15C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044B170;
    }
    goto skip_7;
    // 0x0044B15C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_7:
    // 0x0044B160: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B164: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B168: j           L_00412180
    // 0x0044B16C: nop

    entry_00412180(rdram, ctx);
    return;
    // 0x0044B16C: nop

L_0044B170:
    // 0x0044B170: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044B174: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B178: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B17C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044B180: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0044B184: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B188: lwc1        $f1, 0xAB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAB8);
    // 0x0044B18C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044B190: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044B194: nop

    // 0x0044B198: bc1t        L_0044B1A4
    if (c1cs) {
        // 0x0044B19C: sb          $v1, 0x38($sp)
        MEM_B(0X38, ctx->r29) = ctx->r3;
            goto L_0044B1A4;
    }
    // 0x0044B19C: sb          $v1, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r3;
    // 0x0044B1A0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0044B1A4:
    // 0x0044B1A4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044B1A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B1AC: nop

    // 0x0044B1B0: bc1fl       L_0044B1B8
    if (!c1cs) {
        // 0x0044B1B4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0044B1B8;
    }
    goto skip_8;
    // 0x0044B1B4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_8:
L_0044B1B8:
    // 0x0044B1B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B1BC: lwc1        $f1, 0xABC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XABC);
    // 0x0044B1C0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B1C4: nop

    // 0x0044B1C8: bc1tl       L_0044B1E0
    if (c1cs) {
        // 0x0044B1CC: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044B1E0;
    }
    goto skip_9;
    // 0x0044B1CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_9:
    // 0x0044B1D0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B1D4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B1D8: j           L_004121F0
    // 0x0044B1DC: nop

    entry_004121F0(rdram, ctx);
    return;
    // 0x0044B1DC: nop

L_0044B1E0:
    // 0x0044B1E0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044B1E4: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B1E8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B1EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044B1F0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0044B1F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B1F8: lwc1        $f1, 0xAC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAC0);
    // 0x0044B1FC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044B200: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044B204: nop

    // 0x0044B208: bc1t        L_0044B214
    if (c1cs) {
        // 0x0044B20C: sb          $v1, 0x39($sp)
        MEM_B(0X39, ctx->r29) = ctx->r3;
            goto L_0044B214;
    }
    // 0x0044B20C: sb          $v1, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r3;
    // 0x0044B210: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0044B214:
    // 0x0044B214: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044B218: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B21C: nop

    // 0x0044B220: bc1fl       L_0044B228
    if (!c1cs) {
        // 0x0044B224: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0044B228;
    }
    goto skip_10;
    // 0x0044B224: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_10:
L_0044B228:
    // 0x0044B228: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B22C: lwc1        $f1, 0xAC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAC4);
    // 0x0044B230: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B234: nop

    // 0x0044B238: bc1tl       L_0044B250
    if (c1cs) {
        // 0x0044B23C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044B250;
    }
    goto skip_11;
    // 0x0044B23C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_11:
    // 0x0044B240: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B244: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B248: j           L_00412260
    // 0x0044B24C: nop

    entry_00412260(rdram, ctx);
    return;
    // 0x0044B24C: nop

L_0044B250:
    // 0x0044B250: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044B254: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B258: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B25C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044B260: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B264: lwc1        $f1, 0xAC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XAC8);
    // 0x0044B268: mul.s       $f0, $f5, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0044B26C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044B270: nop

    // 0x0044B274: bc1t        L_0044B280
    if (c1cs) {
        // 0x0044B278: sb          $v1, 0x3A($sp)
        MEM_B(0X3A, ctx->r29) = ctx->r3;
            goto L_0044B280;
    }
    // 0x0044B278: sb          $v1, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r3;
    // 0x0044B27C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0044B280:
    // 0x0044B280: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044B284: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B288: nop

    // 0x0044B28C: bc1fl       L_0044B294
    if (!c1cs) {
        // 0x0044B290: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0044B294;
    }
    goto skip_12;
    // 0x0044B290: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_12:
L_0044B294:
    // 0x0044B294: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B298: lwc1        $f1, 0xACC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XACC);
    // 0x0044B29C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B2A0: nop

    // 0x0044B2A4: bc1tl       L_0044B2BC
    if (c1cs) {
        // 0x0044B2A8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044B2BC;
    }
    goto skip_13;
    // 0x0044B2A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_13:
    // 0x0044B2AC: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B2B0: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B2B4: j           L_004122CC
    // 0x0044B2B8: nop

    entry_004122CC(rdram, ctx);
    return;
    // 0x0044B2B8: nop

L_0044B2BC:
    // 0x0044B2BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044B2C0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044B2C4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x0044B2C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044B2CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044B2D0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0044B2D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0044B2D8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0044B2DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0044B2E0: sb          $v1, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r3;
    // 0x0044B2E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0044B2E8: jal         0x002883E0
    // 0x0044B2EC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_002883E0(rdram, ctx);
        goto after_2;
    // 0x0044B2EC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_2:
    // 0x0044B2F0: jal         0x00411C94
    // 0x0044B2F4: nop

    func_00411C94(rdram, ctx);
        goto after_3;
    // 0x0044B2F4: nop

    after_3:
L_0044B2F8:
    // 0x0044B2F8: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0044B2FC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0044B300: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0044B304: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0044B308: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0044B30C: jr          $ra
    // 0x0044B310: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0044B310: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
