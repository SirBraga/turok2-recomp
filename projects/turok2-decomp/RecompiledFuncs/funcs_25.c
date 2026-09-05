#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002A09E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A09E8: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x002A09EC: blez        $a1, L_002A0A6C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x002A09F0: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_002A0A6C;
    }
    // 0x002A09F0: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x002A09F4: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x002A09F8: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
L_002A09FC:
    // 0x002A09FC: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x002A0A00: slt         $v0, $t2, $v1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002A0A04: beql        $v0, $zero, L_002A0A5C
    if (ctx->r2 == 0) {
        // 0x002A0A08: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_002A0A5C;
    }
    goto skip_0;
    // 0x002A0A08: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    skip_0:
    // 0x002A0A0C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x002A0A10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0A14: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002A0A18: lwc1        $f3, 0x0($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X0);
    // 0x002A0A1C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x002A0A20: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x002A0A24: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002A0A28: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0A2C: swc1        $f3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f_odd[(3 - 1) * 2];
    // 0x002A0A30: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x002A0A34: lwc1        $f3, 0x4($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X4);
    // 0x002A0A38: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002A0A3C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0A40: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x002A0A44: swc1        $f0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f0.u32l;
    // 0x002A0A48: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x002A0A4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002A0A50: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0A54: swc1        $f3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f_odd[(3 - 1) * 2];
    // 0x002A0A58: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
L_002A0A5C:
    // 0x002A0A5C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x002A0A60: slt         $v0, $t2, $a1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x002A0A64: bne         $v0, $zero, L_002A09FC
    if (ctx->r2 != 0) {
        // 0x002A0A68: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_002A09FC;
    }
    // 0x002A0A68: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
L_002A0A6C:
    // 0x002A0A6C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x002A0A70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x002A0A74: srav        $t5, $a1, $t7
    ctx->r13 = S32(SIGNED(ctx->r5) >> (ctx->r15 & 31));
    // 0x002A0A78: blez        $t5, L_002A0B64
    if (SIGNED(ctx->r13) <= 0) {
        // 0x002A0A7C: sllv        $a1, $a1, $t7
        ctx->r5 = S32(ctx->r5 << (ctx->r15 & 31));
            goto L_002A0B64;
    }
    // 0x002A0A7C: sllv        $a1, $a1, $t7
    ctx->r5 = S32(ctx->r5 << (ctx->r15 & 31));
L_002A0A80:
    // 0x002A0A80: blez        $t7, L_002A0B54
    if (SIGNED(ctx->r15) <= 0) {
        // 0x002A0A84: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_002A0B54;
    }
    // 0x002A0A84: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x002A0A88: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x002A0A8C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x002A0A90: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x002A0A94: addu        $t3, $t8, $zero
    ctx->r11 = ADD32(ctx->r24, 0);
    // 0x002A0A98: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    // 0x002A0A9C: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
L_002A0AA0:
    // 0x002A0AA0: slt         $v0, $t0, $a1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x002A0AA4: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x002A0AA8: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x002A0AAC: mul.s       $f5, $f6, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x002A0AB0: beq         $v0, $zero, L_002A0B38
    if (ctx->r2 == 0) {
        // 0x002A0AB4: sll         $v0, $t1, 3
        ctx->r2 = S32(ctx->r9 << 3);
            goto L_002A0B38;
    }
    // 0x002A0AB4: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x002A0AB8: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0ABC: addu        $v0, $t0, $t6
    ctx->r2 = ADD32(ctx->r8, ctx->r14);
L_002A0AC0:
    // 0x002A0AC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0AC4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0AC8: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x002A0ACC: mul.s       $f3, $f4, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x002A0AD0: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x002A0AD4: mul.s       $f0, $f5, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x002A0AD8: nop

    // 0x002A0ADC: mul.s       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x002A0AE0: nop

    // 0x002A0AE4: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x002A0AE8: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x002A0AEC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x002A0AF0: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x002A0AF4: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002A0AF8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x002A0AFC: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x002A0B00: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x002A0B04: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x002A0B08: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x002A0B0C: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x002A0B10: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x002A0B14: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x002A0B18: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x002A0B1C: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x002A0B20: swc1        $f1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x002A0B24: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x002A0B28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A0B2C: slt         $v0, $t0, $a1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x002A0B30: bne         $v0, $zero, L_002A0AC0
    if (ctx->r2 != 0) {
        // 0x002A0B34: addu        $v0, $t0, $t6
        ctx->r2 = ADD32(ctx->r8, ctx->r14);
            goto L_002A0AC0;
    }
    // 0x002A0B34: addu        $v0, $t0, $t6
    ctx->r2 = ADD32(ctx->r8, ctx->r14);
L_002A0B38:
    // 0x002A0B38: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x002A0B3C: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x002A0B40: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x002A0B44: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x002A0B48: slt         $v0, $t1, $t7
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x002A0B4C: bnel        $v0, $zero, L_002A0AA0
    if (ctx->r2 != 0) {
        // 0x002A0B50: sll         $t0, $t1, 1
        ctx->r8 = S32(ctx->r9 << 1);
            goto L_002A0AA0;
    }
    goto skip_1;
    // 0x002A0B50: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    skip_1:
L_002A0B54:
    // 0x002A0B54: sra         $t5, $t5, 1
    ctx->r13 = S32(SIGNED(ctx->r13) >> 1);
    // 0x002A0B58: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x002A0B5C: bgtz        $t5, L_002A0A80
    if (SIGNED(ctx->r13) > 0) {
        // 0x002A0B60: sll         $t6, $t6, 1
        ctx->r14 = S32(ctx->r14 << 1);
            goto L_002A0A80;
    }
    // 0x002A0B60: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
L_002A0B64:
    // 0x002A0B64: jr          $ra
    // 0x002A0B68: nop

    return;
    // 0x002A0B68: nop

;}
RECOMP_FUNC void func_0026813C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026813C: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x00268140: jr          $ra
    // 0x00268144: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    return;
    // 0x00268144: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
;}
RECOMP_FUNC void func_00299A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299A40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00299A44: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00299A48: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00299A4C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00299A50: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00299A54: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00299A58: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x00299A5C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00299A60: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00299A64: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00299A68: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00299A6C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00299A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00299A74: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00299A78: beq         $v1, $v0, L_00299A98
    if (ctx->r3 == ctx->r2) {
        // 0x00299A7C: sw          $s3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r19;
            goto L_00299A98;
    }
    // 0x00299A7C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00299A80: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x00299A84: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x00299A88: beq         $v0, $zero, L_00299A98
    if (ctx->r2 == 0) {
        // 0x00299A8C: nop
    
            goto L_00299A98;
    }
    // 0x00299A8C: nop

    // 0x00299A90: bne         $v1, $zero, L_00299C3C
    if (ctx->r3 != 0) {
        // 0x00299A94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00299C3C;
    }
    // 0x00299A94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00299A98:
    // 0x00299A98: jal         0x00299FE4
    // 0x00299A9C: nop

    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x00299A9C: nop

    after_0:
    // 0x00299AA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00299AA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00299AA8: sb          $v0, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = ctx->r2;
    // 0x00299AAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00299AB0: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x00299AB4: jal         0x00299C60
    // 0x00299AB8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_00299C60(rdram, ctx);
        goto after_1;
    // 0x00299AB8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
    // 0x00299ABC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00299AC0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00299AC4: addiu       $s0, $s0, 0xE20
    ctx->r16 = ADD32(ctx->r16, 0XE20);
    // 0x00299AC8: jal         0x0029A080
    // 0x00299ACC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_2;
    // 0x00299ACC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00299AD0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00299AD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299AD8: jal         0x0029B6F0
    // 0x00299ADC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00299ADC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00299AE0: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
L_00299AE4:
    // 0x00299AE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00299AE8: jal         0x0029A080
    // 0x00299AEC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029A080(rdram, ctx);
        goto after_4;
    // 0x00299AEC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_4:
    // 0x00299AF0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00299AF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299AF8: jal         0x0029B6F0
    // 0x00299AFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00299AFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x00299B00: beq         $s1, $zero, L_00299B20
    if (ctx->r17 == 0) {
        // 0x00299B04: addu        $a1, $s3, $zero
        ctx->r5 = ADD32(ctx->r19, 0);
            goto L_00299B20;
    }
    // 0x00299B04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00299B08: blez        $s1, L_00299B20
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00299B0C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00299B20;
    }
    // 0x00299B0C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00299B10:
    // 0x00299B10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00299B14: slt         $v0, $v1, $s1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00299B18: bne         $v0, $zero, L_00299B10
    if (ctx->r2 != 0) {
        // 0x00299B1C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00299B10;
    }
    // 0x00299B1C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00299B20:
    // 0x00299B20: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00299B24: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x00299B28: beq         $v0, $zero, L_00299B88
    if (ctx->r2 == 0) {
        // 0x00299B2C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00299B88;
    }
    // 0x00299B2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00299B30: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_00299B34:
    // 0x00299B34: lwl         $t0, 0x0($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X0);
    // 0x00299B38: lwr         $t0, 0x3($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0X3);
    // 0x00299B3C: lwl         $t1, 0x4($v1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r3, 0X4);
    // 0x00299B40: lwr         $t1, 0x7($v1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r3, 0X7);
    // 0x00299B44: lwl         $t2, 0x8($v1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r3, 0X8);
    // 0x00299B48: lwr         $t2, 0xB($v1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r3, 0XB);
    // 0x00299B4C: lwl         $t3, 0xC($v1)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r3, 0XC);
    // 0x00299B50: lwr         $t3, 0xF($v1)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r3, 0XF);
    // 0x00299B54: swl         $t0, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r8);
    // 0x00299B58: swr         $t0, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r8);
    // 0x00299B5C: swl         $t1, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r9);
    // 0x00299B60: swr         $t1, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r9);
    // 0x00299B64: swl         $t2, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r10);
    // 0x00299B68: swr         $t2, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r10);
    // 0x00299B6C: swl         $t3, 0xC($a0)
    do_swl(rdram, 0XC, ctx->r4, ctx->r11);
    // 0x00299B70: swr         $t3, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r11);
    // 0x00299B74: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00299B78: bne         $v1, $v0, L_00299B34
    if (ctx->r3 != ctx->r2) {
        // 0x00299B7C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00299B34;
    }
    // 0x00299B7C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00299B80: j           L_00299BB8
    // 0x00299B84: nop

        goto L_00299BB8;
    // 0x00299B84: nop

L_00299B88:
    // 0x00299B88: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_00299B8C:
    // 0x00299B8C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00299B90: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00299B94: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00299B98: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x00299B9C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00299BA0: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00299BA4: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00299BA8: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x00299BAC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00299BB0: bne         $v1, $v0, L_00299B8C
    if (ctx->r3 != ctx->r2) {
        // 0x00299BB4: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00299B8C;
    }
    // 0x00299BB4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
L_00299BB8:
    // 0x00299BB8: lwl         $t0, 0x0($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X0);
    // 0x00299BBC: lwr         $t0, 0x3($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0X3);
    // 0x00299BC0: lwl         $t1, 0x4($v1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r3, 0X4);
    // 0x00299BC4: lwr         $t1, 0x7($v1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r3, 0X7);
    // 0x00299BC8: swl         $t0, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r8);
    // 0x00299BCC: swr         $t0, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r8);
    // 0x00299BD0: swl         $t1, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r9);
    // 0x00299BD4: swr         $t1, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r9);
    // 0x00299BD8: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x00299BDC: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00299BE0: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x00299BE4: bnel        $s0, $zero, L_00299C1C
    if (ctx->r16 != 0) {
        // 0x00299BE8: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00299C1C;
    }
    goto skip_0;
    // 0x00299BE8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_0:
    // 0x00299BEC: jal         0x00299E48
    // 0x00299BF0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00299E48(rdram, ctx);
        goto after_6;
    // 0x00299BF0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_6:
    // 0x00299BF4: lbu         $v1, 0x36($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X36);
    // 0x00299BF8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00299BFC: beq         $v0, $v1, L_00299C1C
    if (ctx->r2 == ctx->r3) {
        // 0x00299C00: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00299C1C;
    }
    // 0x00299C00: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00299C04: jal         0x00427F80
    // 0x00299C08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00427F80(rdram, ctx);
        goto after_7;
    // 0x00299C08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00299C0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00299C10: bne         $s0, $zero, L_00299C30
    if (ctx->r16 != 0) {
        // 0x00299C14: nop
    
            goto L_00299C30;
    }
    // 0x00299C14: nop

    // 0x00299C18: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_00299C1C:
    // 0x00299C1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00299C20: bne         $s0, $v0, L_00299C30
    if (ctx->r16 != ctx->r2) {
        // 0x00299C24: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_00299C30;
    }
    // 0x00299C24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00299C28: bgez        $v0, L_00299AE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00299C2C: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_00299AE4;
    }
    // 0x00299C2C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_00299C30:
    // 0x00299C30: jal         0x0029A050
    // 0x00299C34: nop

    func_0029A050(rdram, ctx);
        goto after_8;
    // 0x00299C34: nop

    after_8:
    // 0x00299C38: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00299C3C:
    // 0x00299C3C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00299C40: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00299C44: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00299C48: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00299C4C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00299C50: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00299C54: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00299C58: jr          $ra
    // 0x00299C5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00299C5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0044565C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044565C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00445660: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00445664: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x00445668: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0044566C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00445670: jal         0x00243414
    // 0x00445674: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00445674: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00445678: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044567C: jr          $ra
    // 0x00445680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00445680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A6DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A6E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A6E4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A6E8: lhu         $a3, 0x82($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X82);
    // 0x0025A6EC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A6F0: addiu       $a2, $a2, -0x88
    ctx->r6 = ADD32(ctx->r6, -0X88);
    // 0x0025A6F4: jal         0x00245A98
    // 0x0025A6F8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A6F8: nop

    after_0:
    // 0x0025A6FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A700: jr          $ra
    // 0x0025A704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00217B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217B44: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00217B48: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x00217B4C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00217B50: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00217B54: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x00217B58: srl         $a0, $a0, 3
    ctx->r4 = S32(U32(ctx->r4) >> 3);
    // 0x00217B5C: jr          $ra
    // 0x00217B60: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    return;
    // 0x00217B60: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
;}
RECOMP_FUNC void func_0028D814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D814: jr          $ra
    // 0x0028D818: nop

    return;
    // 0x0028D818: nop

;}
RECOMP_FUNC void func_00285980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285980: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00285984: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285988: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0028598C: lbu         $v0, 0x677A($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677A);
    // 0x00285990: jr          $ra
    // 0x00285994: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x00285994: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_00267E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267E68: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267E6C: jr          $ra
    // 0x00267E70: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    return;
    // 0x00267E70: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
;}
RECOMP_FUNC void func_0045AD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421D90:
    // 0x0045AD64: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AD68: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x0045AD6C: beq         $v0, $zero, L_0045AD84
    if (ctx->r2 == 0) {
        // 0x0045AD70: nop
    
            goto L_0045AD84;
    }
    // 0x0045AD70: nop

    // 0x0045AD74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AD78: addiu       $v0, $v0, 0x49C4
    ctx->r2 = ADD32(ctx->r2, 0X49C4);
    // 0x0045AD7C: j           L_00421D90
    // 0x0045AD80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00421D90(rdram, ctx);
    return;
    // 0x0045AD80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045AD84:
    // 0x0045AD84: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AD88: addiu       $v0, $v0, 0x49D0
    ctx->r2 = ADD32(ctx->r2, 0X49D0);
    // 0x0045AD8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045AD90: jr          $ra
    // 0x0045AD94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045AD94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021E6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E6AC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0021E6B0: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x0021E6B4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021E6B8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x0021E6BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021E6C0: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x0021E6C4: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0021E6C8: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x0021E6CC: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0021E6D0: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x0021E6D4: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x0021E6D8: lhu         $a1, 0x22($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X22);
    // 0x0021E6DC: jal         0x00225E88
    // 0x0021E6E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00225E88(rdram, ctx);
        goto after_0;
    // 0x0021E6E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0021E6E4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021E6E8: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x0021E6EC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0021E6F0: bne         $v1, $v0, L_0021E700
    if (ctx->r3 != ctx->r2) {
        // 0x0021E6F4: nop
    
            goto L_0021E700;
    }
    // 0x0021E6F4: nop

    // 0x0021E6F8: j           L_0021E710
    // 0x0021E6FC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
        goto L_0021E710;
    // 0x0021E6FC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0021E700:
    // 0x0021E700: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x0021E704: jal         0x002242F8
    // 0x0021E708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002242F8(rdram, ctx);
        goto after_1;
    // 0x0021E708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0021E70C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_0021E710:
    // 0x0021E710: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021E714: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0021E718: lh          $v0, 0x24($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X24);
    // 0x0021E71C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021E720: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E724: lwc1        $f1, 0x5CF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CF0);
    // 0x0021E728: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x0021E72C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x0021E730: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x0021E734: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021E738: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021E73C: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021E740: jal         0x00220408
    // 0x0021E744: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00220408(rdram, ctx);
        goto after_2;
    // 0x0021E744: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0021E748: lhu         $a1, 0x1C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X1C);
    // 0x0021E74C: lhu         $a2, 0x1E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1E);
    // 0x0021E750: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0021E754: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x0021E758: lbu         $v1, 0x27($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X27);
    // 0x0021E75C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0021E760: bne         $v1, $v0, L_0021E76C
    if (ctx->r3 != ctx->r2) {
        // 0x0021E764: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0021E76C;
    }
    // 0x0021E764: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0021E768: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0021E76C:
    // 0x0021E76C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021E770: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0021E774: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x0021E778: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0021E77C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0021E780: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0021E784: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0021E788: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0021E78C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0021E790: lbu         $v0, 0x26($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X26);
    // 0x0021E794: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0021E798: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x0021E79C: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x0021E7A0: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x0021E7A4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0021E7A8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0021E7AC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0021E7B0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0021E7B4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0021E7B8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x0021E7BC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x0021E7C0: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x0021E7C4: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x0021E7C8: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x0021E7CC: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x0021E7D0: jal         0x00219BC0
    // 0x0021E7D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00219BC0(rdram, ctx);
        goto after_3;
    // 0x0021E7D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0021E7D8: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0021E7DC: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x0021E7E0: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x0021E7E4: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0021E7E8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x0021E7EC: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x0021E7F0: jr          $ra
    // 0x0021E7F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0021E7F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0040D6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040D6A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040D6A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040D6AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040D6B0: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x0040D6B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040D6B8: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x0040D6BC: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D6C0: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x0040D6C4: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x0040D6C8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D6CC: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x0040D6D0: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x0040D6D4: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0040D6D8: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x0040D6DC: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0040D6E0: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D6E4: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D6E8: bne         $v1, $v0, L_0040D700
    if (ctx->r3 != ctx->r2) {
        // 0x0040D6EC: nop
    
            goto L_0040D700;
    }
    // 0x0040D6EC: nop

    // 0x0040D6F0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D6F4: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x0040D6F8: j           L_0040D70C
    // 0x0040D6FC: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
        goto L_0040D70C;
    // 0x0040D6FC: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040D700:
    // 0x0040D700: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D704: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x0040D708: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040D70C:
    // 0x0040D70C: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D710: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D714: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040D718: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040D71C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040D720: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D724: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D728: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040D72C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D730: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D734: bne         $v1, $v0, L_0040D748
    if (ctx->r3 != ctx->r2) {
        // 0x0040D738: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040D748;
    }
    // 0x0040D738: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040D73C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040D740: j           L_0040D754
    // 0x0040D744: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040D754;
    // 0x0040D744: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040D748:
    // 0x0040D748: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040D74C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040D750: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040D754:
    // 0x0040D754: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D75C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D760: beq         $v0, $zero, L_0040D77C
    if (ctx->r2 == 0) {
        // 0x0040D764: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D77C;
    }
    // 0x0040D764: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D768: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D76C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D770: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D774: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D778: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D77C:
    // 0x0040D77C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D780: jal         0x00243414
    // 0x0040D784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D788: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D78C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D790: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D794: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D79C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D7A0: jr          $ra
    // 0x0040D7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00294C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294C70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00294C74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294C78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294C7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00294C80: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00294C84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294C88: lui         $s0, 0x7FFF
    ctx->r16 = S32(0X7FFF << 16);
    // 0x00294C8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00294C90: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00294C94: bne         $v0, $zero, L_00294CB4
    if (ctx->r2 != 0) {
        // 0x00294C98: ori         $s0, $s0, 0xFFFF
        ctx->r16 = ctx->r16 | 0XFFFF;
            goto L_00294CB4;
    }
    // 0x00294C98: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x00294C9C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00294CA0: addiu       $a0, $a0, -0x5B50
    ctx->r4 = ADD32(ctx->r4, -0X5B50);
    // 0x00294CA4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00294CA8: addiu       $a1, $a1, -0x5B4C
    ctx->r5 = ADD32(ctx->r5, -0X5B4C);
    // 0x00294CAC: jal         0x0029B020
    // 0x00294CB0: addiu       $a2, $zero, 0x133
    ctx->r6 = ADD32(0, 0X133);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00294CB0: addiu       $a2, $zero, 0x133
    ctx->r6 = ADD32(0, 0X133);
    after_0:
L_00294CB4:
    // 0x00294CB4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x00294CB8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00294CBC: beq         $a0, $zero, L_00294CF8
    if (ctx->r4 == 0) {
        // 0x00294CC0: nop
    
            goto L_00294CF8;
    }
    // 0x00294CC0: nop

L_00294CC4:
    // 0x00294CC4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00294CC8: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00294CCC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00294CD0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00294CD4: beq         $v0, $zero, L_00294CEC
    if (ctx->r2 == 0) {
        // 0x00294CD8: nop
    
            goto L_00294CEC;
    }
    // 0x00294CD8: nop

    // 0x00294CDC: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x00294CE0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x00294CE4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00294CE8: subu        $s0, $v1, $v0
    ctx->r16 = SUB32(ctx->r3, ctx->r2);
L_00294CEC:
    // 0x00294CEC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00294CF0: bne         $a0, $zero, L_00294CC4
    if (ctx->r4 != 0) {
        // 0x00294CF4: nop
    
            goto L_00294CC4;
    }
    // 0x00294CF4: nop

L_00294CF8:
    // 0x00294CF8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00294CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00294D00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294D04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00294D08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294D0C: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x00294D10: jr          $ra
    // 0x00294D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00294D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045B044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00422098:
    // 0x0045B044: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045B048: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045B04C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B050: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x0045B054: beq         $v0, $zero, L_0045B080
    if (ctx->r2 == 0) {
        // 0x0045B058: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_0045B080;
    }
    // 0x0045B058: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0045B05C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045B060: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045B064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045B068: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x0045B06C: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x0045B070: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045B074: addiu       $a1, $a1, -0x49F0
    ctx->r5 = ADD32(ctx->r5, -0X49F0);
    // 0x0045B078: j           L_00422098
    // 0x0045B07C: nop

    entry_00422098(rdram, ctx);
    return;
    // 0x0045B07C: nop

L_0045B080:
    // 0x0045B080: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045B084: lw          $a1, 0x24($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X24);
    // 0x0045B088: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x0045B08C: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x0045B090: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045B094: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045B098: jal         0x00416644
    // 0x0045B09C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0045B09C: nop

    after_0:
    // 0x0045B0A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045B0A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045B0A8: jr          $ra
    // 0x0045B0AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045B0AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00265CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265CC8: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00265CCC: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00265CD0: beq         $v0, $zero, L_00265CFC
    if (ctx->r2 == 0) {
        // 0x00265CD4: nop
    
            goto L_00265CFC;
    }
    // 0x00265CD4: nop

    // 0x00265CD8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00265CDC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00265CE0: beq         $v0, $zero, L_00265CFC
    if (ctx->r2 == 0) {
        // 0x00265CE4: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00265CFC;
    }
    // 0x00265CE4: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00265CE8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00265CEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265CF0: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00265CF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265CF8: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00265CFC:
    // 0x00265CFC: jr          $ra
    // 0x00265D00: nop

    return;
    // 0x00265D00: nop

;}
RECOMP_FUNC void func_0041A32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A32C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A330: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A334: jal         0x00285304
    // 0x0041A338: nop

    func_00285304(rdram, ctx);
        goto after_0;
    // 0x0041A338: nop

    after_0:
    // 0x0041A33C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041A340: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_0041A344:
    // 0x0041A344: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A348: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A34C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041A350: lw          $v0, 0x910($at)
    ctx->r2 = MEM_W(ctx->r1, 0X910);
    // 0x0041A354: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041A358: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0041A35C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0041A360: sw          $v0, 0x5F8C($at)
    MEM_W(0X5F8C, ctx->r1) = ctx->r2;
    // 0x0041A364: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0041A368: bne         $v0, $zero, L_0041A344
    if (ctx->r2 != 0) {
        // 0x0041A36C: addiu       $a0, $a0, 0x224
        ctx->r4 = ADD32(ctx->r4, 0X224);
            goto L_0041A344;
    }
    // 0x0041A36C: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    // 0x0041A370: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A374: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x0041A378: jal         0x0026EDA8
    // 0x0041A37C: nop

    func_0026EDA8(rdram, ctx);
        goto after_1;
    // 0x0041A37C: nop

    after_1:
    // 0x0041A380: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A384: jr          $ra
    // 0x0041A388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256168: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025616C: jal         0x00251698
    // 0x00256170: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256170: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x00256174: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256178: jr          $ra
    // 0x0025617C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025617C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A2FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2FA8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x002A2FAC: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // turok2: reconnected split function: a stray ELF symbol at 0x002A2FB0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002A2FB0(rdram, ctx);
;}
RECOMP_FUNC void func_0045FB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FB2C: jr          $ra
    // 0x0045FB30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045FB30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040DCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DCCC: jr          $ra
    // 0x0040DCD0: nop

    return;
    // 0x0040DCD0: nop

;}
RECOMP_FUNC void func_0026C844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C848: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C84C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026C850: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C854: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C858: jal         0x0022425C
    // 0x0026C85C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C85C: nop

    after_0:
    // 0x0026C860: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0026C864: beq         $a0, $zero, L_0026C87C
    if (ctx->r4 == 0) {
        // 0x0026C868: lui         $v1, 0xFFFB
        ctx->r3 = S32(0XFFFB << 16);
            goto L_0026C87C;
    }
    // 0x0026C868: lui         $v1, 0xFFFB
    ctx->r3 = S32(0XFFFB << 16);
    // 0x0026C86C: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0026C870: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0026C874: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026C878: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
L_0026C87C:
    // 0x0026C87C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C880: jr          $ra
    // 0x0026C884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275E98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00275E9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00275EA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275EA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275EA8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x00275EAC: bne         $v0, $zero, L_00275EE8
    if (ctx->r2 != 0) {
        // 0x00275EB0: nop
    
            goto L_00275EE8;
    }
    // 0x00275EB0: nop

    // 0x00275EB4: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x00275EB8: beq         $s0, $zero, L_00275EE8
    if (ctx->r16 == 0) {
        // 0x00275EBC: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00275EE8;
    }
    // 0x00275EBC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_00275EC0:
    // 0x00275EC0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00275EC4: jal         0x002757E4
    // 0x00275EC8: nop

    func_002757E4(rdram, ctx);
        goto after_0;
    // 0x00275EC8: nop

    after_0:
    // 0x00275ECC: bne         $v0, $zero, L_00275EDC
    if (ctx->r2 != 0) {
        // 0x00275ED0: nop
    
            goto L_00275EDC;
    }
    // 0x00275ED0: nop

    // 0x00275ED4: sw          $s1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r17;
    // 0x00275ED8: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
L_00275EDC:
    // 0x00275EDC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00275EE0: bne         $s0, $zero, L_00275EC0
    if (ctx->r16 != 0) {
        // 0x00275EE4: nop
    
            goto L_00275EC0;
    }
    // 0x00275EE4: nop

L_00275EE8:
    // 0x00275EE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00275EEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00275EF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275EF4: jr          $ra
    // 0x00275EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00275EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00225EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225EBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00225EC0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00225EC4: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00225EC8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00225ECC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00225ED0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00225ED4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00225ED8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225EDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00225EE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225EE4: lw          $v0, 0x64($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X64);
    // 0x00225EE8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00225EEC: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x00225EF0: blez        $s1, L_00225F44
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00225EF4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00225F44;
    }
    // 0x00225EF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00225EF8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_00225EFC:
    // 0x00225EFC: lw          $a0, 0x64($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X64);
    // 0x00225F00: jal         0x002017D4
    // 0x00225F04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00225F04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00225F08: beq         $s3, $s2, L_00225F1C
    if (ctx->r19 == ctx->r18) {
        // 0x00225F0C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00225F1C;
    }
    // 0x00225F0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00225F10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00225F14: bnel        $v0, $s3, L_00225F38
    if (ctx->r2 != ctx->r19) {
        // 0x00225F18: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00225F38;
    }
    goto skip_0;
    // 0x00225F18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
L_00225F1C:
    // 0x00225F1C: beq         $s4, $s2, L_00225F48
    if (ctx->r20 == ctx->r18) {
        // 0x00225F20: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00225F48;
    }
    // 0x00225F20: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00225F24: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x00225F28: bne         $v0, $s4, L_00225F38
    if (ctx->r2 != ctx->r20) {
        // 0x00225F2C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00225F38;
    }
    // 0x00225F2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00225F30: j           L_00225F48
    // 0x00225F34: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_00225F48;
    // 0x00225F34: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00225F38:
    // 0x00225F38: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00225F3C: bne         $v0, $zero, L_00225EFC
    if (ctx->r2 != 0) {
        // 0x00225F40: nop
    
            goto L_00225EFC;
    }
    // 0x00225F40: nop

L_00225F44:
    // 0x00225F44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00225F48:
    // 0x00225F48: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00225F4C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00225F50: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00225F54: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225F58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225F5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225F60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225F64: jr          $ra
    // 0x00225F68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00225F68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00461C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428F98:
    // 0x00461C0C: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
L_00429014:
    // 0x00461C10: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x00461C14: sw          $s2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r18;
    // 0x00461C18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00461C1C: sw          $fp, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r30;
    // 0x00461C20: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00461C24: sw          $s0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r16;
    // 0x00461C28: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00461C2C: sw          $s5, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r21;
    // 0x00461C30: sw          $ra, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r31;
    // 0x00461C34: sw          $s7, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r23;
    // 0x00461C38: sw          $s6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r22;
    // 0x00461C3C: sw          $s4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r20;
    // 0x00461C40: sw          $s3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r19;
    // 0x00461C44: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x00461C48: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00461C4C: lw          $s6, 0x178($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X178);
    // 0x00461C50: slt         $v0, $fp, $v0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00461C54: beq         $v0, $zero, L_00461D10
    if (ctx->r2 == 0) {
        // 0x00461C58: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_00461D10;
    }
    // 0x00461C58: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00461C5C: bltz        $fp, L_00462014
    if (SIGNED(ctx->r30) < 0) {
        // 0x00461C60: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00462014;
    }
    // 0x00461C60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00461C64: blez        $s6, L_00461D10
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00461C68: andi        $v0, $s6, 0x1F
        ctx->r2 = ctx->r22 & 0X1F;
            goto L_00461D10;
    }
    // 0x00461C68: andi        $v0, $s6, 0x1F
    ctx->r2 = ctx->r22 & 0X1F;
    // 0x00461C6C: bne         $v0, $zero, L_00462014
    if (ctx->r2 != 0) {
        // 0x00461C70: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00462014;
    }
    // 0x00461C70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00461C74: bltz        $s0, L_00461D10
    if (SIGNED(ctx->r16) < 0) {
        // 0x00461C78: andi        $v0, $s0, 0x1F
        ctx->r2 = ctx->r16 & 0X1F;
            goto L_00461D10;
    }
    // 0x00461C78: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x00461C7C: bne         $v0, $zero, L_00462014
    if (ctx->r2 != 0) {
        // 0x00461C80: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00462014;
    }
    // 0x00461C80: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00461C84: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00461C88: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00461C8C: beq         $v0, $zero, L_00462014
    if (ctx->r2 == 0) {
        // 0x00461C90: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00462014;
    }
    // 0x00461C90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00461C94: jal         0x00429D1C
    // 0x00461C98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429D1C(rdram, ctx);
        goto after_0;
    // 0x00461C98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00461C9C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00461CA0: bne         $v0, $v1, L_00461CB0
    if (ctx->r2 != ctx->r3) {
        // 0x00461CA4: nop
    
            goto L_00461CB0;
    }
    // 0x00461CA4: nop

L_00461CA8:
    // 0x00461CA8: j           L_00429014
    // 0x00461CAC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    entry_00429014(rdram, ctx);
    return;
    // 0x00461CAC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00461CB0:
    // 0x00461CB0: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00461CB4: beq         $v0, $zero, L_00461CD4
    if (ctx->r2 == 0) {
        // 0x00461CB8: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_00461CD4;
    }
    // 0x00461CB8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00461CBC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00461CC0: jal         0x00429DE4
    // 0x00461CC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_1;
    // 0x00461CC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00461CC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461CCC: bne         $v1, $zero, L_00462014
    if (ctx->r3 != 0) {
        // 0x00461CD0: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_00462014;
    }
    // 0x00461CD0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
L_00461CD4:
    // 0x00461CD4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00461CD8: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00461CDC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00461CE0: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x00461CE4: jal         0x00299680
    // 0x00461CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00461CE8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00461CEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461CF0: bne         $v1, $zero, L_00462014
    if (ctx->r3 != 0) {
        // 0x00461CF4: nop
    
            goto L_00462014;
    }
    // 0x00461CF4: nop

    // 0x00461CF8: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x00461CFC: beq         $v0, $zero, L_00462014
    if (ctx->r2 == 0) {
        // 0x00461D00: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00462014;
    }
    // 0x00461D00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00461D04: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00461D08: bne         $v0, $zero, L_00461D18
    if (ctx->r2 != 0) {
        // 0x00461D0C: nop
    
            goto L_00461D18;
    }
    // 0x00461D0C: nop

L_00461D10:
    // 0x00461D10: j           L_00429014
    // 0x00461D14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    entry_00429014(rdram, ctx);
    return;
    // 0x00461D14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00461D18:
    // 0x00461D18: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00461D1C: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00461D20: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00461D24: bne         $v0, $zero, L_00461D54
    if (ctx->r2 != 0) {
        // 0x00461D28: nop
    
            goto L_00461D54;
    }
    // 0x00461D28: nop

    // 0x00461D2C: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x00461D30: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00461D34: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00461D38: beq         $v0, $zero, L_00461D54
    if (ctx->r2 == 0) {
        // 0x00461D3C: nop
    
            goto L_00461D54;
    }
    // 0x00461D3C: nop

    // 0x00461D40: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x00461D44: beq         $v0, $zero, L_00461D54
    if (ctx->r2 == 0) {
        // 0x00461D48: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00461D54;
    }
    // 0x00461D48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00461D4C: bgez        $v0, L_00461D6C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00461D50: andi        $v0, $s5, 0xFF
        ctx->r2 = ctx->r21 & 0XFF;
            goto L_00461D6C;
    }
    // 0x00461D50: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
L_00461D54:
    // 0x00461D54: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x00461D58: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00461D5C: beq         $a0, $v1, L_00462014
    if (ctx->r4 == ctx->r3) {
        // 0x00461D60: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00462014;
    }
    // 0x00461D60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00461D64: j           L_00429014
    // 0x00461D68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    entry_00429014(rdram, ctx);
    return;
    // 0x00461D68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00461D6C:
    // 0x00461D6C: bne         $v0, $zero, L_00461D8C
    if (ctx->r2 != 0) {
        // 0x00461D70: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00461D8C;
    }
    // 0x00461D70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00461D74: lbu         $v0, 0x20($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X20);
    // 0x00461D78: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00461D7C: bne         $v0, $zero, L_00461D8C
    if (ctx->r2 != 0) {
        // 0x00461D80: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00461D8C;
    }
    // 0x00461D80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00461D84: j           L_00429014
    // 0x00461D88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    entry_00429014(rdram, ctx);
    return;
    // 0x00461D88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_00461D8C:
    // 0x00461D8C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00461D90: bgez        $a3, L_00461D9C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00461D94: sb          $v0, 0x138($sp)
        MEM_B(0X138, ctx->r29) = ctx->r2;
            goto L_00461D9C;
    }
    // 0x00461D94: sb          $v0, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r2;
    // 0x00461D98: addiu       $a3, $a3, 0x1F
    ctx->r7 = ADD32(ctx->r7, 0X1F);
L_00461D9C:
    // 0x00461D9C: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00461DA0: sra         $s1, $a3, 5
    ctx->r17 = S32(SIGNED(ctx->r7) >> 5);
    // 0x00461DA4: sh          $v0, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r2;
    // 0x00461DA8: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00461DAC: bne         $v0, $zero, L_00461E64
    if (ctx->r2 != 0) {
        // 0x00461DB0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00461E64;
    }
    // 0x00461DB0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00461DB4: addiu       $s3, $sp, 0x138
    ctx->r19 = ADD32(ctx->r29, 0X138);
    // 0x00461DB8: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x00461DBC: addiu       $s0, $sp, 0x13A
    ctx->r16 = ADD32(ctx->r29, 0X13A);
    // 0x00461DC0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_00461DC4:
    // 0x00461DC4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00461DC8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x00461DCC: beq         $v1, $v0, L_00461DF0
    if (ctx->r3 == ctx->r2) {
        // 0x00461DD0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00461DF0;
    }
    // 0x00461DD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461DD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00461DD8: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x00461DDC: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x00461DE0: jal         0x004299C4
    // 0x00461DE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_004299C4(rdram, ctx);
        goto after_3;
    // 0x00461DE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x00461DE8: bne         $v0, $zero, L_00461E50
    if (ctx->r2 != 0) {
        // 0x00461DEC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00461E50;
    }
    // 0x00461DEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00461DF0:
    // 0x00461DF0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00461DF4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00461DF8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00461DFC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00461E00: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x00461E04: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00461E08: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00461E0C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00461E10: bne         $v0, $zero, L_00461E40
    if (ctx->r2 != 0) {
        // 0x00461E14: nop
    
            goto L_00461E40;
    }
    // 0x00461E14: nop

    // 0x00461E18: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00461E1C: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00461E20: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00461E24: beq         $v0, $zero, L_00461E40
    if (ctx->r2 == 0) {
        // 0x00461E28: nop
    
            goto L_00461E40;
    }
    // 0x00461E28: nop

    // 0x00461E2C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00461E30: beq         $v0, $zero, L_00461E40
    if (ctx->r2 == 0) {
        // 0x00461E34: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00461E40;
    }
    // 0x00461E34: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00461E38: bgez        $v0, L_00461E50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00461E3C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00461E50;
    }
    // 0x00461E3C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00461E40:
    // 0x00461E40: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00461E44: bne         $v0, $s7, L_00461E50
    if (ctx->r2 != ctx->r23) {
        // 0x00461E48: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00461E50;
    }
    // 0x00461E48: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00461E4C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_00461E50:
    // 0x00461E50: bne         $v1, $zero, L_00461CA8
    if (ctx->r3 != 0) {
        // 0x00461E54: addiu       $s1, $s1, -0x8
        ctx->r17 = ADD32(ctx->r17, -0X8);
            goto L_00461CA8;
    }
    // 0x00461E54: addiu       $s1, $s1, -0x8
    ctx->r17 = ADD32(ctx->r17, -0X8);
    // 0x00461E58: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00461E5C: beq         $v0, $zero, L_00461DC4
    if (ctx->r2 == 0) {
        // 0x00461E60: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00461DC4;
    }
    // 0x00461E60: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_00461E64:
    // 0x00461E64: bltzl       $v0, L_00461E6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x00461E68: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_00461E6C;
    }
    goto skip_0;
    // 0x00461E68: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_0:
L_00461E6C:
    // 0x00461E6C: sra         $s4, $v0, 5
    ctx->r20 = S32(SIGNED(ctx->r2) >> 5);
    // 0x00461E70: lw          $s3, 0x17C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X17C);
    // 0x00461E74: blez        $s4, L_00461FB0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00461E78: andi        $v1, $s5, 0xFF
        ctx->r3 = ctx->r21 & 0XFF;
            goto L_00461FB0;
    }
    // 0x00461E78: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x00461E7C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_00461E80:
    // 0x00461E80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00461E84: bne         $s1, $v0, L_00461F28
    if (ctx->r17 != ctx->r2) {
        // 0x00461E88: nop
    
            goto L_00461F28;
    }
    // 0x00461E88: nop

    // 0x00461E8C: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x00461E90: lbu         $v1, 0x13A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13A);
    // 0x00461E94: lbu         $v0, 0x138($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X138);
    // 0x00461E98: beq         $v1, $v0, L_00461EC0
    if (ctx->r3 == ctx->r2) {
        // 0x00461E9C: addiu       $s0, $sp, 0x13A
        ctx->r16 = ADD32(ctx->r29, 0X13A);
            goto L_00461EC0;
    }
    // 0x00461E9C: addiu       $s0, $sp, 0x13A
    ctx->r16 = ADD32(ctx->r29, 0X13A);
    // 0x00461EA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461EA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00461EA8: sb          $v1, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r3;
    // 0x00461EAC: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x00461EB0: jal         0x004299C4
    // 0x00461EB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_004299C4(rdram, ctx);
        goto after_4;
    // 0x00461EB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x00461EB8: bne         $v0, $zero, L_00461F20
    if (ctx->r2 != 0) {
        // 0x00461EBC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00461F20;
    }
    // 0x00461EBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00461EC0:
    // 0x00461EC0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00461EC4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00461EC8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00461ECC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00461ED0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x00461ED4: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00461ED8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00461EDC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00461EE0: bne         $v0, $zero, L_00461F10
    if (ctx->r2 != 0) {
        // 0x00461EE4: nop
    
            goto L_00461F10;
    }
    // 0x00461EE4: nop

    // 0x00461EE8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00461EEC: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00461EF0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00461EF4: beq         $v0, $zero, L_00461F10
    if (ctx->r2 == 0) {
        // 0x00461EF8: nop
    
            goto L_00461F10;
    }
    // 0x00461EF8: nop

    // 0x00461EFC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00461F00: beq         $v0, $zero, L_00461F10
    if (ctx->r2 == 0) {
        // 0x00461F04: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00461F10;
    }
    // 0x00461F04: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00461F08: bgez        $v0, L_00461F20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00461F0C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00461F20;
    }
    // 0x00461F0C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00461F10:
    // 0x00461F10: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00461F14: bne         $v0, $s6, L_00461F20
    if (ctx->r2 != ctx->r22) {
        // 0x00461F18: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00461F20;
    }
    // 0x00461F18: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00461F1C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_00461F20:
    // 0x00461F20: bne         $v1, $zero, L_00461CA8
    if (ctx->r3 != 0) {
        // 0x00461F24: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00461CA8;
    }
    // 0x00461F24: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00461F28:
    // 0x00461F28: lbu         $v1, 0x13A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13A);
    // 0x00461F2C: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00461F30: beq         $v0, $v1, L_00461F50
    if (ctx->r2 == ctx->r3) {
        // 0x00461F34: nop
    
            goto L_00461F50;
    }
    // 0x00461F34: nop

    // 0x00461F38: sb          $v1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r3;
    // 0x00461F3C: jal         0x00429DE4
    // 0x00461F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_5;
    // 0x00461F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00461F44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461F48: bne         $v1, $zero, L_00462014
    if (ctx->r3 != 0) {
        // 0x00461F4C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00462014;
    }
    // 0x00461F4C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00461F50:
    // 0x00461F50: lbu         $v0, 0x13B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X13B);
    // 0x00461F54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00461F58: addu        $a2, $v0, $s1
    ctx->r6 = ADD32(ctx->r2, ctx->r17);
    // 0x00461F5C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x00461F60: bne         $v0, $zero, L_00461F80
    if (ctx->r2 != 0) {
        // 0x00461F64: andi        $a2, $a2, 0xFFFF
        ctx->r6 = ctx->r6 & 0XFFFF;
            goto L_00461F80;
    }
    // 0x00461F64: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x00461F68: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00461F6C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00461F70: jal         0x00299680
    // 0x00461F74: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_6;
    // 0x00461F74: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_6:
    // 0x00461F78: j           L_00428F98
    // 0x00461F7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    entry_00428F98(rdram, ctx);
    return;
    // 0x00461F7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00461F80:
    // 0x00461F80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00461F84: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00461F88: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00461F8C: jal         0x00299A40
    // 0x00461F90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299A40(rdram, ctx);
        goto after_7;
    // 0x00461F90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00461F94: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461F98: bne         $v1, $zero, L_00461CA8
    if (ctx->r3 != 0) {
        // 0x00461F9C: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_00461CA8;
    }
    // 0x00461F9C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
    // 0x00461FA0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x00461FA4: bgtz        $s4, L_00461E80
    if (SIGNED(ctx->r20) > 0) {
        // 0x00461FA8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00461E80;
    }
    // 0x00461FA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00461FAC: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
L_00461FB0:
    // 0x00461FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00461FB4: bne         $v1, $v0, L_00462014
    if (ctx->r3 != ctx->r2) {
        // 0x00461FB8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00462014;
    }
    // 0x00461FB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00461FBC: lbu         $v1, 0x20($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X20);
    // 0x00461FC0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00461FC4: bne         $v0, $zero, L_00462014
    if (ctx->r2 != 0) {
        // 0x00461FC8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00462014;
    }
    // 0x00461FC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00461FCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461FD0: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x00461FD4: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x00461FD8: jal         0x00429DE4
    // 0x00461FDC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_8;
    // 0x00461FDC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_8:
    // 0x00461FE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00461FE4: bne         $v1, $zero, L_00462014
    if (ctx->r3 != 0) {
        // 0x00461FE8: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_00462014;
    }
    // 0x00461FE8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00461FEC: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00461FF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00461FF4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00461FF8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00461FFC: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x00462000: jal         0x00299A40
    // 0x00462004: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_9;
    // 0x00462004: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_9:
    // 0x00462008: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046200C: beql        $v1, $zero, L_00462014
    if (ctx->r3 == 0) {
        // 0x00462010: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00462014;
    }
    goto skip_1;
    // 0x00462010: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
L_00462014:
    // 0x00462014: lw          $ra, 0x164($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X164);
    // 0x00462018: lw          $fp, 0x160($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X160);
    // 0x0046201C: lw          $s7, 0x15C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X15C);
    // 0x00462020: lw          $s6, 0x158($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X158);
    // 0x00462024: lw          $s5, 0x154($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X154);
    // 0x00462028: lw          $s4, 0x150($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X150);
    // 0x0046202C: lw          $s3, 0x14C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14C);
    // 0x00462030: lw          $s2, 0x148($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X148);
    // 0x00462034: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x00462038: lw          $s0, 0x140($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X140);
    // 0x0046203C: jr          $ra
    // 0x00462040: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x00462040: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_0021B95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021B95C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x0021B960: sw          $s5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r21;
    // 0x0021B964: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0021B968: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x0021B96C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0021B970: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0021B974: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0021B978: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x0021B97C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0021B980: sw          $ra, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r31;
    // 0x0021B984: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0021B988: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0021B98C: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x0021B990: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x0021B994: jal         0x002017D4
    // 0x0021B998: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021B998: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0021B99C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021B9A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021B9A4: jal         0x002017D4
    // 0x0021B9A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021B9A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0021B9AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021B9B0: sw          $v0, 0x6864($at)
    MEM_W(0X6864, ctx->r1) = ctx->r2;
    // 0x0021B9B4: lbu         $v1, 0x65($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X65);
    // 0x0021B9B8: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
    // 0x0021B9BC: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x0021B9C0: sw          $s1, 0x90($s4)
    MEM_W(0X90, ctx->r20) = ctx->r17;
    // 0x0021B9C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021B9C8: sb          $v1, 0x6868($at)
    MEM_B(0X6868, ctx->r1) = ctx->r3;
    // 0x0021B9CC: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0021B9D0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021B9D4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x0021B9D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021B9DC: bne         $a1, $v0, L_0021BA1C
    if (ctx->r5 != ctx->r2) {
        // 0x0021B9E0: addiu       $s0, $s4, 0x20
        ctx->r16 = ADD32(ctx->r20, 0X20);
            goto L_0021BA1C;
    }
    // 0x0021B9E0: addiu       $s0, $s4, 0x20
    ctx->r16 = ADD32(ctx->r20, 0X20);
    // 0x0021B9E4: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
    // 0x0021B9E8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021B9EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021B9F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021B9F4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x0021B9F8: addiu       $t3, $t3, 0x6810
    ctx->r11 = ADD32(ctx->r11, 0X6810);
    // 0x0021B9FC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0021BA00: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0021BA04: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0021BA08: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0021BA0C: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0021BA10: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0021BA14: j           L_0021BA98
    // 0x0021BA18: nop

        goto L_0021BA98;
    // 0x0021BA18: nop

L_0021BA1C:
    // 0x0021BA1C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0021BA20: jal         0x002017D4
    // 0x0021BA24: nop

    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0021BA24: nop

    after_2:
    // 0x0021BA28: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0021BA2C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0021BA30: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021BA34: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x0021BA38: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021BA3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021BA40: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0021BA44: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021BA48: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BA4C: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0021BA50: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BA54: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BA58: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BA5C: swc1        $f1, 0x6810($at)
    MEM_W(0X6810, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BA60: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0021BA64: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021BA68: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BA6C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BA70: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BA74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BA78: swc1        $f1, 0x6814($at)
    MEM_W(0X6814, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BA7C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0021BA80: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0021BA84: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BA88: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BA8C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021BA90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BA94: swc1        $f1, 0x6818($at)
    MEM_W(0X6818, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_0021BA98:
    // 0x0021BA98: lw          $v0, 0x70($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X70);
    // 0x0021BA9C: beq         $v0, $zero, L_0021BAF8
    if (ctx->r2 == 0) {
        // 0x0021BAA0: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_0021BAF8;
    }
    // 0x0021BAA0: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0021BAA4: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x0021BAA8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BAAC: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x0021BAB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021BAB4: beq         $a1, $v0, L_0021BB10
    if (ctx->r5 == ctx->r2) {
        // 0x0021BAB8: addiu       $s0, $s4, 0x20
        ctx->r16 = ADD32(ctx->r20, 0X20);
            goto L_0021BB10;
    }
    // 0x0021BAB8: addiu       $s0, $s4, 0x20
    ctx->r16 = ADD32(ctx->r20, 0X20);
    // 0x0021BABC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021BAC0: jal         0x002017D4
    // 0x0021BAC4: nop

    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0021BAC4: nop

    after_3:
    // 0x0021BAC8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0021BACC: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    // 0x0021BAD0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x0021BAD4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x0021BAD8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x0021BADC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0021BAE0: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x0021BAE4: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x0021BAE8: jal         0x0020DAA4
    // 0x0021BAEC: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_0020DAA4(rdram, ctx);
        goto after_4;
    // 0x0021BAEC: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_4:
    // 0x0021BAF0: j           L_0021BC28
    // 0x0021BAF4: nop

        goto L_0021BC28;
    // 0x0021BAF4: nop

L_0021BAF8:
    // 0x0021BAF8: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x0021BAFC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BB00: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x0021BB04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021BB08: bne         $a1, $v0, L_0021BB90
    if (ctx->r5 != ctx->r2) {
        // 0x0021BB0C: addiu       $s0, $s4, 0x20
        ctx->r16 = ADD32(ctx->r20, 0X20);
            goto L_0021BB90;
    }
    // 0x0021BB0C: addiu       $s0, $s4, 0x20
    ctx->r16 = ADD32(ctx->r20, 0X20);
L_0021BB10:
    // 0x0021BB10: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
    // 0x0021BB14: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021BB18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021BB1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BB20: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x0021BB24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021BB28: lwc1        $f1, 0x5B64($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B64);
    // 0x0021BB2C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BB30: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BB34: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BB38: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BB3C: swc1        $f0, 0x6840($at)
    MEM_W(0X6840, ctx->r1) = ctx->f0.u32l;
    // 0x0021BB40: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x0021BB44: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BB48: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BB4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BB50: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BB54: swc1        $f0, 0x6844($at)
    MEM_W(0X6844, ctx->r1) = ctx->f0.u32l;
    // 0x0021BB58: lh          $v0, 0x10($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X10);
    // 0x0021BB5C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BB60: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BB64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BB68: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BB6C: swc1        $f0, 0x6848($at)
    MEM_W(0X6848, ctx->r1) = ctx->f0.u32l;
    // 0x0021BB70: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x0021BB74: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BB78: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BB7C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BB80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BB84: swc1        $f0, 0x684C($at)
    MEM_W(0X684C, ctx->r1) = ctx->f0.u32l;
    // 0x0021BB88: j           L_0021BC28
    // 0x0021BB8C: nop

        goto L_0021BC28;
    // 0x0021BB8C: nop

L_0021BB90:
    // 0x0021BB90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021BB94: jal         0x002017D4
    // 0x0021BB98: nop

    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0021BB98: nop

    after_5:
    // 0x0021BB9C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0021BBA0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0021BBA4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021BBA8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x0021BBAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021BBB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021BBB4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0021BBB8: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021BBBC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BBC0: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0021BBC4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BBC8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BBCC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BBD0: swc1        $f1, 0x6840($at)
    MEM_W(0X6840, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BBD4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0021BBD8: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021BBDC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BBE0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BBE4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BBE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BBEC: swc1        $f1, 0x6844($at)
    MEM_W(0X6844, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BBF0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0021BBF4: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0021BBF8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BBFC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BC00: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BC04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BC08: swc1        $f1, 0x6848($at)
    MEM_W(0X6848, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BC0C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0021BC10: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0021BC14: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BC18: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BC1C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021BC20: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BC24: swc1        $f1, 0x684C($at)
    MEM_W(0X684C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_0021BC28:
    // 0x0021BC28: lw          $v0, 0x6C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X6C);
    // 0x0021BC2C: beq         $v0, $zero, L_0021BF2C
    if (ctx->r2 == 0) {
        // 0x0021BC30: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_0021BF2C;
    }
    // 0x0021BC30: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0021BC34: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x0021BC38: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BC3C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x0021BC40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021BC44: bne         $a1, $v0, L_0021BC84
    if (ctx->r5 != ctx->r2) {
        // 0x0021BC48: addiu       $s0, $s4, 0x44
        ctx->r16 = ADD32(ctx->r20, 0X44);
            goto L_0021BC84;
    }
    // 0x0021BC48: addiu       $s0, $s4, 0x44
    ctx->r16 = ADD32(ctx->r20, 0X44);
    // 0x0021BC4C: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
    // 0x0021BC50: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021BC54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021BC58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021BC5C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x0021BC60: addiu       $t3, $t3, 0x6820
    ctx->r11 = ADD32(ctx->r11, 0X6820);
    // 0x0021BC64: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0021BC68: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0021BC6C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0021BC70: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0021BC74: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0021BC78: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0021BC7C: j           L_0021BD00
    // 0x0021BC80: nop

        goto L_0021BD00;
    // 0x0021BC80: nop

L_0021BC84:
    // 0x0021BC84: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0021BC88: jal         0x002017D4
    // 0x0021BC8C: nop

    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0021BC8C: nop

    after_6:
    // 0x0021BC90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0021BC94: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0021BC98: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021BC9C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x0021BCA0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021BCA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021BCA8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0021BCAC: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021BCB0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BCB4: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0021BCB8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BCBC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BCC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BCC4: swc1        $f1, 0x6820($at)
    MEM_W(0X6820, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BCC8: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0021BCCC: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021BCD0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BCD4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BCD8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BCDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BCE0: swc1        $f1, 0x6824($at)
    MEM_W(0X6824, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BCE4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0021BCE8: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0021BCEC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BCF0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BCF4: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021BCF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BCFC: swc1        $f1, 0x6828($at)
    MEM_W(0X6828, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_0021BD00:
    // 0x0021BD00: lw          $v0, 0x70($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X70);
    // 0x0021BD04: beq         $v0, $zero, L_0021BD60
    if (ctx->r2 == 0) {
        // 0x0021BD08: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_0021BD60;
    }
    // 0x0021BD08: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x0021BD0C: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x0021BD10: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BD14: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x0021BD18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021BD1C: beq         $a1, $v0, L_0021BD78
    if (ctx->r5 == ctx->r2) {
        // 0x0021BD20: addiu       $s0, $s4, 0x44
        ctx->r16 = ADD32(ctx->r20, 0X44);
            goto L_0021BD78;
    }
    // 0x0021BD20: addiu       $s0, $s4, 0x44
    ctx->r16 = ADD32(ctx->r20, 0X44);
    // 0x0021BD24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021BD28: jal         0x002017D4
    // 0x0021BD2C: nop

    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0021BD2C: nop

    after_7:
    // 0x0021BD30: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0021BD34: addiu       $a0, $a0, 0x6850
    ctx->r4 = ADD32(ctx->r4, 0X6850);
    // 0x0021BD38: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x0021BD3C: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x0021BD40: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x0021BD44: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0021BD48: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x0021BD4C: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x0021BD50: jal         0x0020DAA4
    // 0x0021BD54: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_0020DAA4(rdram, ctx);
        goto after_8;
    // 0x0021BD54: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_8:
    // 0x0021BD58: j           L_0021BE90
    // 0x0021BD5C: nop

        goto L_0021BE90;
    // 0x0021BD5C: nop

L_0021BD60:
    // 0x0021BD60: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x0021BD64: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BD68: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x0021BD6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021BD70: bne         $a1, $v0, L_0021BDF8
    if (ctx->r5 != ctx->r2) {
        // 0x0021BD74: addiu       $s0, $s4, 0x44
        ctx->r16 = ADD32(ctx->r20, 0X44);
            goto L_0021BDF8;
    }
    // 0x0021BD74: addiu       $s0, $s4, 0x44
    ctx->r16 = ADD32(ctx->r20, 0X44);
L_0021BD78:
    // 0x0021BD78: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
    // 0x0021BD7C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021BD80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021BD84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0021BD88: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x0021BD8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021BD90: lwc1        $f1, 0x5B68($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B68);
    // 0x0021BD94: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BD98: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BD9C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BDA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BDA4: swc1        $f0, 0x6850($at)
    MEM_W(0X6850, ctx->r1) = ctx->f0.u32l;
    // 0x0021BDA8: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x0021BDAC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BDB0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BDB4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BDB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BDBC: swc1        $f0, 0x6854($at)
    MEM_W(0X6854, ctx->r1) = ctx->f0.u32l;
    // 0x0021BDC0: lh          $v0, 0x10($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X10);
    // 0x0021BDC4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BDC8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BDCC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BDD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BDD4: swc1        $f0, 0x6858($at)
    MEM_W(0X6858, ctx->r1) = ctx->f0.u32l;
    // 0x0021BDD8: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x0021BDDC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021BDE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021BDE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BDE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BDEC: swc1        $f0, 0x685C($at)
    MEM_W(0X685C, ctx->r1) = ctx->f0.u32l;
    // 0x0021BDF0: j           L_0021BE90
    // 0x0021BDF4: nop

        goto L_0021BE90;
    // 0x0021BDF4: nop

L_0021BDF8:
    // 0x0021BDF8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021BDFC: jal         0x002017D4
    // 0x0021BE00: nop

    func_002017D4(rdram, ctx);
        goto after_9;
    // 0x0021BE00: nop

    after_9:
    // 0x0021BE04: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0021BE08: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0021BE0C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021BE10: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x0021BE14: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021BE18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021BE1C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0021BE20: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0021BE24: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BE28: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0021BE2C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BE30: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BE34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BE38: swc1        $f1, 0x6850($at)
    MEM_W(0X6850, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BE3C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0021BE40: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021BE44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BE48: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BE4C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BE50: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BE54: swc1        $f1, 0x6854($at)
    MEM_W(0X6854, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BE58: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0021BE5C: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0021BE60: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BE64: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BE68: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021BE6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BE70: swc1        $f1, 0x6858($at)
    MEM_W(0X6858, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021BE74: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0021BE78: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0021BE7C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021BE80: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021BE84: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021BE88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BE8C: swc1        $f1, 0x685C($at)
    MEM_W(0X685C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_0021BE90:
    // 0x0021BE90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BE94: lwc1        $f3, 0x6810($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6810);
    // 0x0021BE98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BE9C: lwc1        $f6, 0x6820($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6820);
    // 0x0021BEA0: sub.s       $f3, $f3, $f6
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f6.fl;
    // 0x0021BEA4: lwc1        $f4, 0x104($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X104);
    // 0x0021BEA8: mul.s       $f3, $f4, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f4.fl, ctx->f3.fl);
    // 0x0021BEAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BEB0: lwc1        $f1, 0x6814($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6814);
    // 0x0021BEB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BEB8: lwc1        $f5, 0x6824($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6824);
    // 0x0021BEBC: sub.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f5.fl;
    // 0x0021BEC0: mul.s       $f1, $f4, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0021BEC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BEC8: lwc1        $f0, 0x6818($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6818);
    // 0x0021BECC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BED0: lwc1        $f2, 0x6828($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6828);
    // 0x0021BED4: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0021BED8: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0021BEDC: add.s       $f6, $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f3.fl;
    // 0x0021BEE0: add.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f1.fl;
    // 0x0021BEE4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0021BEE8: addiu       $a0, $a0, 0x6830
    ctx->r4 = ADD32(ctx->r4, 0X6830);
    // 0x0021BEEC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0021BEF0: addiu       $a2, $a2, 0x6850
    ctx->r6 = ADD32(ctx->r6, 0X6850);
    // 0x0021BEF4: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x0021BEF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BEFC: swc1        $f6, 0x6800($at)
    MEM_W(0X6800, ctx->r1) = ctx->f6.u32l;
    // 0x0021BF00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BF04: swc1        $f5, 0x6804($at)
    MEM_W(0X6804, ctx->r1) = ctx->f_odd[(5 - 1) * 2];
    // 0x0021BF08: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BF0C: swc1        $f2, 0x6808($at)
    MEM_W(0X6808, ctx->r1) = ctx->f2.u32l;
    // 0x0021BF10: lw          $a1, 0x104($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X104);
    // 0x0021BF14: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0021BF18: addiu       $a3, $a3, 0x6840
    ctx->r7 = ADD32(ctx->r7, 0X6840);
    // 0x0021BF1C: jal         0x0020DAA4
    // 0x0021BF20: nop

    func_0020DAA4(rdram, ctx);
        goto after_10;
    // 0x0021BF20: nop

    after_10:
    // 0x0021BF24: j           L_0021BF84
    // 0x0021BF28: nop

        goto L_0021BF84;
    // 0x0021BF28: nop

L_0021BF2C:
    // 0x0021BF2C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x0021BF30: addiu       $t3, $t3, 0x6810
    ctx->r11 = ADD32(ctx->r11, 0X6810);
    // 0x0021BF34: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x0021BF38: addiu       $t2, $t2, 0x6800
    ctx->r10 = ADD32(ctx->r10, 0X6800);
    // 0x0021BF3C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0021BF40: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0021BF44: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x0021BF48: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x0021BF4C: lw          $t0, 0x8($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X8);
    // 0x0021BF50: sw          $t0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r8;
    // 0x0021BF54: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x0021BF58: addiu       $t3, $t3, 0x6840
    ctx->r11 = ADD32(ctx->r11, 0X6840);
    // 0x0021BF5C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x0021BF60: addiu       $t2, $t2, 0x6830
    ctx->r10 = ADD32(ctx->r10, 0X6830);
    // 0x0021BF64: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0021BF68: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0021BF6C: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x0021BF70: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x0021BF74: lw          $t0, 0x8($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X8);
    // 0x0021BF78: lw          $t1, 0xC($t3)
    ctx->r9 = MEM_W(ctx->r11, 0XC);
    // 0x0021BF7C: sw          $t0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r8;
    // 0x0021BF80: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
L_0021BF84:
    // 0x0021BF84: bne         $s1, $zero, L_0021BFAC
    if (ctx->r17 != 0) {
        // 0x0021BF88: nop
    
            goto L_0021BFAC;
    }
    // 0x0021BF88: nop

    // 0x0021BF8C: lw          $v0, 0x68($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X68);
    // 0x0021BF90: beq         $v0, $zero, L_0021BFAC
    if (ctx->r2 == 0) {
        // 0x0021BF94: nop
    
            goto L_0021BFAC;
    }
    // 0x0021BF94: nop

    // 0x0021BF98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021BF9C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021BFA0: addiu       $v0, $v0, 0x6800
    ctx->r2 = ADD32(ctx->r2, 0X6800);
    // 0x0021BFA4: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x0021BFA8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_0021BFAC:
    // 0x0021BFAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BFB0: lwc1        $f3, 0x6830($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6830);
    // 0x0021BFB4: mul.s       $f11, $f3, $f3
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f11.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0021BFB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BFBC: lwc1        $f2, 0x6834($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6834);
    // 0x0021BFC0: mul.s       $f9, $f2, $f2
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f9.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0021BFC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BFC8: lwc1        $f1, 0x6838($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6838);
    // 0x0021BFCC: mul.s       $f10, $f1, $f1
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0021BFD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021BFD4: lwc1        $f0, 0x683C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X683C);
    // 0x0021BFD8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021BFDC: add.s       $f5, $f3, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f3.fl + ctx->f3.fl;
    // 0x0021BFE0: mul.s       $f8, $f5, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x0021BFE4: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x0021BFE8: mul.s       $f6, $f0, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021BFEC: nop

    // 0x0021BFF0: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0021BFF4: nop

    // 0x0021BFF8: mul.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0021BFFC: nop

    // 0x0021C000: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021C004: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x0021C008: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0021C00C: add.s       $f7, $f4, $f11
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f7.fl = ctx->f4.fl + ctx->f11.fl;
    // 0x0021C010: sub.s       $f4, $f4, $f11
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f11.fl;
    // 0x0021C014: sub.s       $f7, $f7, $f9
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f7.fl = ctx->f7.fl - ctx->f9.fl;
    // 0x0021C018: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x0021C01C: sub.s       $f13, $f5, $f14
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f13.fl = ctx->f5.fl - ctx->f14.fl;
    // 0x0021C020: sub.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x0021C024: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0021C028: addiu       $s0, $s0, 0x67C0
    ctx->r16 = ADD32(ctx->r16, 0X67C0);
    // 0x0021C02C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C030: sw          $zero, 0x67CC($at)
    MEM_W(0X67CC, ctx->r1) = 0;
    // 0x0021C034: add.s       $f6, $f4, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f9.fl;
    // 0x0021C038: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C03C: sw          $zero, 0x67DC($at)
    MEM_W(0X67DC, ctx->r1) = 0;
    // 0x0021C040: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C044: lwc1        $f3, 0x6808($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6808);
    // 0x0021C048: sub.s       $f4, $f4, $f9
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f9.fl;
    // 0x0021C04C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C050: swc1        $f3, 0x67F8($at)
    MEM_W(0X67F8, ctx->r1) = ctx->f_odd[(3 - 1) * 2];
    // 0x0021C054: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C058: lwc1        $f1, 0x6800($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6800);
    // 0x0021C05C: add.s       $f5, $f5, $f14
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f14.fl;
    // 0x0021C060: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C064: swc1        $f1, 0x67F0($at)
    MEM_W(0X67F0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021C068: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C06C: lwc1        $f1, 0x6804($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6804);
    // 0x0021C070: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x0021C074: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C078: swc1        $f1, 0x67F4($at)
    MEM_W(0X67F4, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021C07C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C080: lwc1        $f1, 0x5B6C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B6C);
    // 0x0021C084: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0021C088: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C08C: sw          $zero, 0x67EC($at)
    MEM_W(0X67EC, ctx->r1) = 0;
    // 0x0021C090: swc1        $f1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021C094: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0021C098: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C09C: swc1        $f12, 0x67C4($at)
    MEM_W(0X67C4, ctx->r1) = ctx->f12.u32l;
    // 0x0021C0A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0A4: swc1        $f13, 0x67C8($at)
    MEM_W(0X67C8, ctx->r1) = ctx->f_odd[(13 - 1) * 2];
    // 0x0021C0A8: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x0021C0AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0B0: swc1        $f3, 0x67D8($at)
    MEM_W(0X67D8, ctx->r1) = ctx->f_odd[(3 - 1) * 2];
    // 0x0021C0B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0B8: swc1        $f2, 0x67E4($at)
    MEM_W(0X67E4, ctx->r1) = ctx->f2.u32l;
    // 0x0021C0BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0C0: swc1        $f6, 0x67D4($at)
    MEM_W(0X67D4, ctx->r1) = ctx->f6.u32l;
    // 0x0021C0C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0C8: swc1        $f4, 0x67E8($at)
    MEM_W(0X67E8, ctx->r1) = ctx->f4.u32l;
    // 0x0021C0CC: lw          $v0, 0x248($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X248);
    // 0x0021C0D0: sub.s       $f7, $f7, $f10
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f7.fl = ctx->f7.fl - ctx->f10.fl;
    // 0x0021C0D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0D8: swc1        $f8, 0x67D0($at)
    MEM_W(0X67D0, ctx->r1) = ctx->f8.u32l;
    // 0x0021C0DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0E0: swc1        $f5, 0x67E0($at)
    MEM_W(0X67E0, ctx->r1) = ctx->f_odd[(5 - 1) * 2];
    // 0x0021C0E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C0E8: swc1        $f7, 0x67C0($at)
    MEM_W(0X67C0, ctx->r1) = ctx->f_odd[(7 - 1) * 2];
    // 0x0021C0EC: beq         $v0, $zero, L_0021C0FC
    if (ctx->r2 == 0) {
        // 0x0021C0F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0021C0FC;
    }
    // 0x0021C0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021C0F4: jalr        $v0
    // 0x0021C0F8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x0021C0F8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_11:
L_0021C0FC:
    // 0x0021C0FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021C100: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0021C104: lw          $v1, 0x8($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X8);
    // 0x0021C108: sll         $v0, $s1, 6
    ctx->r2 = S32(ctx->r17 << 6);
    // 0x0021C10C: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x0021C110: jal         0x0020C618
    // 0x0021C114: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020C618(rdram, ctx);
        goto after_12;
    // 0x0021C114: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x0021C118: bne         $s1, $zero, L_0021C26C
    if (ctx->r17 != 0) {
        // 0x0021C11C: nop
    
            goto L_0021C26C;
    }
    // 0x0021C11C: nop

    // 0x0021C120: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x0021C124: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021C128: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0021C12C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C130: sw          $v1, 0x6860($at)
    MEM_W(0X6860, ctx->r1) = ctx->r3;
    // 0x0021C134: beq         $v1, $v0, L_0021C168
    if (ctx->r3 == ctx->r2) {
        // 0x0021C138: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0021C168;
    }
    // 0x0021C138: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0021C13C: beq         $v0, $zero, L_0021C154
    if (ctx->r2 == 0) {
        // 0x0021C140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021C154;
    }
    // 0x0021C140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021C144: beq         $v1, $v0, L_0021C178
    if (ctx->r3 == ctx->r2) {
        // 0x0021C148: nop
    
            goto L_0021C178;
    }
    // 0x0021C148: nop

    // 0x0021C14C: j           L_0021C26C
    // 0x0021C150: sw          $zero, 0x54($s5)
    MEM_W(0X54, ctx->r21) = 0;
        goto L_0021C26C;
    // 0x0021C150: sw          $zero, 0x54($s5)
    MEM_W(0X54, ctx->r21) = 0;
L_0021C154:
    // 0x0021C154: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0021C158: beq         $v1, $v0, L_0021C178
    if (ctx->r3 == ctx->r2) {
        // 0x0021C15C: nop
    
            goto L_0021C178;
    }
    // 0x0021C15C: nop

    // 0x0021C160: j           L_0021C26C
    // 0x0021C164: sw          $zero, 0x54($s5)
    MEM_W(0X54, ctx->r21) = 0;
        goto L_0021C26C;
    // 0x0021C164: sw          $zero, 0x54($s5)
    MEM_W(0X54, ctx->r21) = 0;
L_0021C168:
    // 0x0021C168: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x0021C16C: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x0021C170: j           L_0021C26C
    // 0x0021C174: swc1        $f0, 0x54($s5)
    MEM_W(0X54, ctx->r21) = ctx->f0.u32l;
        goto L_0021C26C;
    // 0x0021C174: swc1        $f0, 0x54($s5)
    MEM_W(0X54, ctx->r21) = ctx->f0.u32l;
L_0021C178:
    // 0x0021C178: jal         0x002671B4
    // 0x0021C17C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_002671B4(rdram, ctx);
        goto after_13;
    // 0x0021C17C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_13:
    // 0x0021C180: lwc1        $f1, 0x34($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X34);
    // 0x0021C184: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C188: lwc1        $f2, 0x5B70($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5B70);
    // 0x0021C18C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0021C190: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C194: lwc1        $f3, 0x5B74($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X5B74);
    // 0x0021C198: mul.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021C19C: lwc1        $f2, 0x8($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X8);
    // 0x0021C1A0: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0021C1A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0021C1A8: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x0021C1AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C1B0: swc1        $f0, 0x6874($at)
    MEM_W(0X6874, ctx->r1) = ctx->f0.u32l;
    // 0x0021C1B4: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x0021C1B8: nop

    // 0x0021C1BC: bc1f        L_0021C1C8
    if (!c1cs) {
        // 0x0021C1C0: swc1        $f1, 0x54($s5)
        MEM_W(0X54, ctx->r21) = ctx->f_odd[(1 - 1) * 2];
            goto L_0021C1C8;
    }
    // 0x0021C1C0: swc1        $f1, 0x54($s5)
    MEM_W(0X54, ctx->r21) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021C1C4: swc1        $f20, 0x54($s5)
    MEM_W(0X54, ctx->r21) = ctx->f20.u32l;
L_0021C1C8:
    // 0x0021C1C8: lw          $v0, 0xD4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XD4);
    // 0x0021C1CC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0021C1D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021C1D4: beq         $v0, $zero, L_0021C26C
    if (ctx->r2 == 0) {
        // 0x0021C1D8: nop
    
            goto L_0021C26C;
    }
    // 0x0021C1D8: nop

    // 0x0021C1DC: lw          $a0, 0x10($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X10);
    // 0x0021C1E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C1E4: sw          $a0, 0x686C($at)
    MEM_W(0X686C, ctx->r1) = ctx->r4;
    // 0x0021C1E8: beq         $a0, $zero, L_0021C26C
    if (ctx->r4 == 0) {
        // 0x0021C1EC: nop
    
            goto L_0021C26C;
    }
    // 0x0021C1EC: nop

    // 0x0021C1F0: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0021C1F4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0021C1F8: beq         $v0, $zero, L_0021C26C
    if (ctx->r2 == 0) {
        // 0x0021C1FC: nop
    
            goto L_0021C26C;
    }
    // 0x0021C1FC: nop

    // 0x0021C200: lw          $a1, 0x4($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X4);
    // 0x0021C204: lw          $a2, 0xC($s5)
    ctx->r6 = MEM_W(ctx->r21, 0XC);
    // 0x0021C208: jal         0x00269C3C
    // 0x0021C20C: nop

    func_00269C3C(rdram, ctx);
        goto after_14;
    // 0x0021C20C: nop

    after_14:
    // 0x0021C210: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0021C214: lwc1        $f2, 0x54($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X54);
    // 0x0021C218: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021C21C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C220: lwc1        $f2, 0x6874($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6874);
    // 0x0021C224: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0021C228: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0021C22C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C230: swc1        $f0, 0x6870($at)
    MEM_W(0X6870, ctx->r1) = ctx->f0.u32l;
    // 0x0021C234: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x0021C238: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C23C: swc1        $f2, 0x6878($at)
    MEM_W(0X6878, ctx->r1) = ctx->f2.u32l;
    // 0x0021C240: bc1f        L_0021C26C
    if (!c1cs) {
        // 0x0021C244: nop
    
            goto L_0021C26C;
    }
    // 0x0021C244: nop

    // 0x0021C248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C24C: lwc1        $f0, 0x5B78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B78);
    // 0x0021C250: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021C254: lwc1        $f1, 0x34($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X34);
    // 0x0021C258: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0021C25C: swc1        $f1, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021C260: lwc1        $f0, 0x54($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X54);
    // 0x0021C264: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0021C268: swc1        $f0, 0x54($s5)
    MEM_W(0X54, ctx->r21) = ctx->f0.u32l;
L_0021C26C:
    // 0x0021C26C: lb          $v0, 0x152($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X152);
    // 0x0021C270: beq         $v0, $zero, L_0021C3D8
    if (ctx->r2 == 0) {
        // 0x0021C274: nop
    
            goto L_0021C3D8;
    }
    // 0x0021C274: nop

    // 0x0021C278: lb          $v0, 0x154($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X154);
    // 0x0021C27C: lb          $v1, 0x155($s5)
    ctx->r3 = MEM_B(ctx->r21, 0X155);
    // 0x0021C280: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x0021C284: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0021C288: bne         $v1, $s1, L_0021C294
    if (ctx->r3 != ctx->r17) {
        // 0x0021C28C: sll         $a0, $v0, 2
        ctx->r4 = S32(ctx->r2 << 2);
            goto L_0021C294;
    }
    // 0x0021C28C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x0021C290: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_0021C294:
    // 0x0021C294: lb          $v0, 0x156($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X156);
    // 0x0021C298: beql        $v0, $s1, L_0021C2A0
    if (ctx->r2 == ctx->r17) {
        // 0x0021C29C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_0021C2A0;
    }
    goto skip_0;
    // 0x0021C29C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_0:
L_0021C2A0:
    // 0x0021C2A0: lb          $v0, 0x157($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X157);
    // 0x0021C2A4: beql        $v0, $s1, L_0021C2AC
    if (ctx->r2 == ctx->r17) {
        // 0x0021C2A8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0021C2AC;
    }
    goto skip_1;
    // 0x0021C2A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
L_0021C2AC:
    // 0x0021C2AC: beq         $a0, $zero, L_0021C3D8
    if (ctx->r4 == 0) {
        // 0x0021C2B0: nop
    
            goto L_0021C3D8;
    }
    // 0x0021C2B0: nop

    // 0x0021C2B4: lw          $v0, 0x248($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X248);
    // 0x0021C2B8: beq         $v0, $zero, L_0021C3D8
    if (ctx->r2 == 0) {
        // 0x0021C2BC: nop
    
            goto L_0021C3D8;
    }
    // 0x0021C2BC: nop

    // 0x0021C2C0: beq         $s1, $zero, L_0021C3D8
    if (ctx->r17 == 0) {
        // 0x0021C2C4: addiu       $s0, $s5, 0x140
        ctx->r16 = ADD32(ctx->r21, 0X140);
            goto L_0021C3D8;
    }
    // 0x0021C2C4: addiu       $s0, $s5, 0x140
    ctx->r16 = ADD32(ctx->r21, 0X140);
    // 0x0021C2C8: lwc1        $f0, 0x30($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X30);
    // 0x0021C2CC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0021C2D0: lwc1        $f0, 0x34($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X34);
    // 0x0021C2D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0021C2D8: lwc1        $f0, 0x38($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X38);
    // 0x0021C2DC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x0021C2E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0021C2E4: lw          $t0, 0x158($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X158);
    // 0x0021C2E8: lw          $t1, 0x15C($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X15C);
    // 0x0021C2EC: lw          $t2, 0x160($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X160);
    // 0x0021C2F0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0021C2F4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0021C2F8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0021C2FC: lb          $v1, 0x12($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X12);
    // 0x0021C300: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C304: lwc1        $f0, 0x5B7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B7C);
    // 0x0021C308: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021C30C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021C310: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021C314: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021C318: lwc1        $f20, -0x3468($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X3468);
    // 0x0021C31C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0021C320: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0021C324: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C328: lwc1        $f0, 0x5B80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B80);
    // 0x0021C32C: beq         $a0, $v0, L_0021C33C
    if (ctx->r4 == ctx->r2) {
        // 0x0021C330: nop
    
            goto L_0021C33C;
    }
    // 0x0021C330: nop

    // 0x0021C334: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x0021C338: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
L_0021C33C:
    // 0x0021C33C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0021C340: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x0021C344: jal         0x0020FF80
    // 0x0021C348: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020FF80(rdram, ctx);
        goto after_15;
    // 0x0021C348: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_15:
    // 0x0021C34C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0021C350: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x0021C354: jal         0x0020EF60
    // 0x0021C358: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_16;
    // 0x0021C358: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_16:
    // 0x0021C35C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0021C360: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0021C364: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0021C368: jal         0x00210318
    // 0x0021C36C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    func_00210318(rdram, ctx);
        goto after_17;
    // 0x0021C36C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_17:
    // 0x0021C370: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0021C374: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0021C378: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0021C37C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0021C380: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x0021C384: jal         0x0020FCC4
    // 0x0021C388: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_0020FCC4(rdram, ctx);
        goto after_18;
    // 0x0021C388: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_18:
    // 0x0021C38C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021C390: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x0021C394: jal         0x0020C618
    // 0x0021C398: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_0020C618(rdram, ctx);
        goto after_19;
    // 0x0021C398: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_19:
    // 0x0021C39C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0021C3A0: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x0021C3A4: jal         0x0020EF60
    // 0x0021C3A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_20;
    // 0x0021C3A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_20:
    // 0x0021C3AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0021C3B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0021C3B4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0021C3B8: jal         0x00210318
    // 0x0021C3BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00210318(rdram, ctx);
        goto after_21;
    // 0x0021C3BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_21:
    // 0x0021C3C0: lb          $v0, 0x14($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X14);
    // 0x0021C3C4: bne         $v0, $s1, L_0021C3D8
    if (ctx->r2 != ctx->r17) {
        // 0x0021C3C8: nop
    
            goto L_0021C3D8;
    }
    // 0x0021C3C8: nop

    // 0x0021C3CC: lbu         $v0, 0x12($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X12);
    // 0x0021C3D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_flinch_s0(rdram, ctx);

    // 0x0021C3D4: sb          $v0, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r2;
L_0021C3D8:
    // 0x0021C3D8: lw          $v0, 0xD4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XD4);
    // 0x0021C3DC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0021C3E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021C3E4: beq         $v0, $zero, L_0021C3FC
    if (ctx->r2 == 0) {
        // 0x0021C3E8: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0021C3FC;
    }
    // 0x0021C3E8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021C3EC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0021C3F0: lbu         $a1, 0x6868($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X6868);
    // 0x0021C3F4: jal         0x0021B59C
    // 0x0021C3F8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0021B59C(rdram, ctx);
        goto after_22;
    // 0x0021C3F8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_22:
L_0021C3FC:
    // 0x0021C3FC: lw          $v0, 0x78($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X78);
    // 0x0021C400: beq         $v0, $zero, L_0021C430
    if (ctx->r2 == 0) {
        // 0x0021C404: addiu       $v1, $zero, 0xC3
        ctx->r3 = ADD32(0, 0XC3);
            goto L_0021C430;
    }
    // 0x0021C404: addiu       $v1, $zero, 0xC3
    ctx->r3 = ADD32(0, 0XC3);
    // 0x0021C408: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021C40C: lbu         $v0, 0x6868($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6868);
    // 0x0021C410: andi        $v0, $v0, 0xC7
    ctx->r2 = ctx->r2 & 0XC7;
    // 0x0021C414: bne         $v0, $v1, L_0021C430
    if (ctx->r2 != ctx->r3) {
        // 0x0021C418: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021C430;
    }
    // 0x0021C418: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021C41C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C420: lwc1        $f0, 0x5B84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B84);
    // 0x0021C424: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021C428: j           L_0021C4FC
    // 0x0021C42C: sw          $zero, 0x78($s4)
    MEM_W(0X78, ctx->r20) = 0;
        goto L_0021C4FC;
    // 0x0021C42C: sw          $zero, 0x78($s4)
    MEM_W(0X78, ctx->r20) = 0;
L_0021C430:
    // 0x0021C430: lw          $v0, 0x7C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X7C);
    // 0x0021C434: beq         $v0, $zero, L_0021C464
    if (ctx->r2 == 0) {
        // 0x0021C438: addiu       $v1, $zero, 0xC7
        ctx->r3 = ADD32(0, 0XC7);
            goto L_0021C464;
    }
    // 0x0021C438: addiu       $v1, $zero, 0xC7
    ctx->r3 = ADD32(0, 0XC7);
    // 0x0021C43C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021C440: lbu         $v0, 0x6868($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6868);
    // 0x0021C444: andi        $v0, $v0, 0xC7
    ctx->r2 = ctx->r2 & 0XC7;
    // 0x0021C448: bne         $v0, $v1, L_0021C464
    if (ctx->r2 != ctx->r3) {
        // 0x0021C44C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021C464;
    }
    // 0x0021C44C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021C450: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C454: lwc1        $f0, 0x5B88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B88);
    // 0x0021C458: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021C45C: j           L_0021C4FC
    // 0x0021C460: sw          $zero, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = 0;
        goto L_0021C4FC;
    // 0x0021C460: sw          $zero, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = 0;
L_0021C464:
    // 0x0021C464: lw          $v0, 0x80($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X80);
    // 0x0021C468: beq         $v0, $zero, L_0021C498
    if (ctx->r2 == 0) {
        // 0x0021C46C: addiu       $v1, $zero, 0xC2
        ctx->r3 = ADD32(0, 0XC2);
            goto L_0021C498;
    }
    // 0x0021C46C: addiu       $v1, $zero, 0xC2
    ctx->r3 = ADD32(0, 0XC2);
    // 0x0021C470: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021C474: lbu         $v0, 0x6868($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6868);
    // 0x0021C478: andi        $v0, $v0, 0xC7
    ctx->r2 = ctx->r2 & 0XC7;
    // 0x0021C47C: bne         $v0, $v1, L_0021C498
    if (ctx->r2 != ctx->r3) {
        // 0x0021C480: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021C498;
    }
    // 0x0021C480: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021C484: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C488: lwc1        $f0, 0x5B8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B8C);
    // 0x0021C48C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021C490: j           L_0021C4FC
    // 0x0021C494: sw          $zero, 0x80($s4)
    MEM_W(0X80, ctx->r20) = 0;
        goto L_0021C4FC;
    // 0x0021C494: sw          $zero, 0x80($s4)
    MEM_W(0X80, ctx->r20) = 0;
L_0021C498:
    // 0x0021C498: lw          $v0, 0x84($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X84);
    // 0x0021C49C: beq         $v0, $zero, L_0021C4CC
    if (ctx->r2 == 0) {
        // 0x0021C4A0: addiu       $v1, $zero, 0xC6
        ctx->r3 = ADD32(0, 0XC6);
            goto L_0021C4CC;
    }
    // 0x0021C4A0: addiu       $v1, $zero, 0xC6
    ctx->r3 = ADD32(0, 0XC6);
    // 0x0021C4A4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021C4A8: lbu         $v0, 0x6868($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6868);
    // 0x0021C4AC: andi        $v0, $v0, 0xC7
    ctx->r2 = ctx->r2 & 0XC7;
    // 0x0021C4B0: bne         $v0, $v1, L_0021C4CC
    if (ctx->r2 != ctx->r3) {
        // 0x0021C4B4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021C4CC;
    }
    // 0x0021C4B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021C4B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C4BC: lwc1        $f0, 0x5B90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B90);
    // 0x0021C4C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021C4C4: j           L_0021C4FC
    // 0x0021C4C8: sw          $zero, 0x84($s4)
    MEM_W(0X84, ctx->r20) = 0;
        goto L_0021C4FC;
    // 0x0021C4C8: sw          $zero, 0x84($s4)
    MEM_W(0X84, ctx->r20) = 0;
L_0021C4CC:
    // 0x0021C4CC: lw          $v0, 0x74($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X74);
    // 0x0021C4D0: beq         $v0, $zero, L_0021C508
    if (ctx->r2 == 0) {
        // 0x0021C4D4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0021C508;
    }
    // 0x0021C4D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0021C4D8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0021C4DC: lbu         $v0, 0x6868($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6868);
    // 0x0021C4E0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0021C4E4: bne         $v0, $v1, L_0021C508
    if (ctx->r2 != ctx->r3) {
        // 0x0021C4E8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0021C508;
    }
    // 0x0021C4E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021C4EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C4F0: lwc1        $f0, 0x5B94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B94);
    // 0x0021C4F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021C4F8: sw          $zero, 0x74($s4)
    MEM_W(0X74, ctx->r20) = 0;
L_0021C4FC:
    // 0x0021C4FC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0021C500: jal         0x0021034C
    // 0x0021C504: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_23;
    // 0x0021C504: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_23:
L_0021C508:
    // 0x0021C508: lw          $v0, 0x88($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X88);
    // 0x0021C50C: beq         $v0, $zero, L_0021C93C
    if (ctx->r2 == 0) {
        // 0x0021C510: sll         $v0, $s1, 6
        ctx->r2 = S32(ctx->r17 << 6);
            goto L_0021C93C;
    }
    // 0x0021C510: sll         $v0, $s1, 6
    ctx->r2 = S32(ctx->r17 << 6);
    // 0x0021C514: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0021C518: addiu       $s0, $s0, 0x67C0
    ctx->r16 = ADD32(ctx->r16, 0X67C0);
    // 0x0021C51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021C520: jal         0x0020FF80
    // 0x0021C524: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020FF80(rdram, ctx);
        goto after_24;
    // 0x0021C524: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_24:
    // 0x0021C528: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C52C: lwc1        $f0, 0x5B98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B98);
    // 0x0021C530: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021C534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021C538: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0021C53C: jal         0x0021034C
    // 0x0021C540: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_25;
    // 0x0021C540: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_25:
    // 0x0021C544: sll         $v0, $s1, 6
    ctx->r2 = S32(ctx->r17 << 6);
    // 0x0021C548: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x0021C54C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C550: lwc1        $f0, 0x67C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67C0);
    // 0x0021C554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C558: lwc1        $f1, 0x5B9C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5B9C);
    // 0x0021C55C: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
    // 0x0021C560: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C564: nop

    // 0x0021C568: bc1t        L_0021C580
    if (c1cs) {
        // 0x0021C56C: addiu       $a3, $a2, 0x20
        ctx->r7 = ADD32(ctx->r6, 0X20);
            goto L_0021C580;
    }
    // 0x0021C56C: addiu       $a3, $a2, 0x20
    ctx->r7 = ADD32(ctx->r6, 0X20);
    // 0x0021C570: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C574: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C578: j           L_0021C594
    // 0x0021C57C: nop

        goto L_0021C594;
    // 0x0021C57C: nop

L_0021C580:
    // 0x0021C580: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C584: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C588: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C58C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C590: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021C594:
    // 0x0021C594: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C598: lwc1        $f0, 0x67C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67C4);
    // 0x0021C59C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C5A0: lwc1        $f1, 0x5BA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BA0);
    // 0x0021C5A4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C5A8: nop

    // 0x0021C5AC: bc1tl       L_0021C5C4
    if (c1cs) {
        // 0x0021C5B0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021C5C4;
    }
    goto skip_2;
    // 0x0021C5B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0021C5B4: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C5B8: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C5BC: j           L_0021C5D8
    // 0x0021C5C0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C5D8;
    // 0x0021C5C0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C5C4:
    // 0x0021C5C4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C5C8: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C5CC: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C5D0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021C5D4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C5D8:
    // 0x0021C5D8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C5DC: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021C5E0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C5E4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C5E8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C5EC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C5F0: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021C5F4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C5F8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C5FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C600: lwc1        $f0, 0x67C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67C8);
    // 0x0021C604: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C608: lwc1        $f1, 0x5BA4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BA4);
    // 0x0021C60C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C610: nop

    // 0x0021C614: bc1t        L_0021C62C
    if (c1cs) {
        // 0x0021C618: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021C62C;
    }
    // 0x0021C618: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C61C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C620: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C624: j           L_0021C644
    // 0x0021C628: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C644;
    // 0x0021C628: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C62C:
    // 0x0021C62C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C630: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C634: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C638: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C63C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021C640: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C644:
    // 0x0021C644: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C648: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C64C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C650: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C654: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C658: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C65C: lwc1        $f0, 0x67D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67D0);
    // 0x0021C660: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C664: lwc1        $f1, 0x5BA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BA8);
    // 0x0021C668: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C66C: nop

    // 0x0021C670: bc1t        L_0021C688
    if (c1cs) {
        // 0x0021C674: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021C688;
    }
    // 0x0021C674: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C678: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C67C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C680: j           L_0021C69C
    // 0x0021C684: nop

        goto L_0021C69C;
    // 0x0021C684: nop

L_0021C688:
    // 0x0021C688: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C68C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C690: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C694: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C698: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021C69C:
    // 0x0021C69C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C6A0: lwc1        $f0, 0x67D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67D4);
    // 0x0021C6A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C6A8: lwc1        $f1, 0x5BAC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BAC);
    // 0x0021C6AC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C6B0: nop

    // 0x0021C6B4: bc1tl       L_0021C6CC
    if (c1cs) {
        // 0x0021C6B8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021C6CC;
    }
    goto skip_3;
    // 0x0021C6B8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x0021C6BC: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C6C0: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C6C4: j           L_0021C6E0
    // 0x0021C6C8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C6E0;
    // 0x0021C6C8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C6CC:
    // 0x0021C6CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C6D0: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C6D4: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C6D8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021C6DC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C6E0:
    // 0x0021C6E0: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C6E4: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021C6E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C6EC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C6F0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C6F4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C6F8: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021C6FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C700: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C704: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C708: lwc1        $f0, 0x67D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67D8);
    // 0x0021C70C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C710: lwc1        $f1, 0x5BB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BB0);
    // 0x0021C714: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C718: nop

    // 0x0021C71C: bc1t        L_0021C734
    if (c1cs) {
        // 0x0021C720: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021C734;
    }
    // 0x0021C720: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C724: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C728: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C72C: j           L_0021C74C
    // 0x0021C730: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C74C;
    // 0x0021C730: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C734:
    // 0x0021C734: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C738: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C73C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C740: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C744: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021C748: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C74C:
    // 0x0021C74C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C750: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C754: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C758: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C75C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C760: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C764: lwc1        $f0, 0x67E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67E0);
    // 0x0021C768: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C76C: lwc1        $f1, 0x5BB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BB4);
    // 0x0021C770: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C774: nop

    // 0x0021C778: bc1t        L_0021C790
    if (c1cs) {
        // 0x0021C77C: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021C790;
    }
    // 0x0021C77C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C780: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C784: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C788: j           L_0021C7A4
    // 0x0021C78C: nop

        goto L_0021C7A4;
    // 0x0021C78C: nop

L_0021C790:
    // 0x0021C790: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C794: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C798: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C79C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C7A0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021C7A4:
    // 0x0021C7A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C7A8: lwc1        $f0, 0x67E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67E4);
    // 0x0021C7AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C7B0: lwc1        $f1, 0x5BB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BB8);
    // 0x0021C7B4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C7B8: nop

    // 0x0021C7BC: bc1tl       L_0021C7D4
    if (c1cs) {
        // 0x0021C7C0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021C7D4;
    }
    goto skip_4;
    // 0x0021C7C0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_4:
    // 0x0021C7C4: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C7C8: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C7CC: j           L_0021C7E8
    // 0x0021C7D0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C7E8;
    // 0x0021C7D0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C7D4:
    // 0x0021C7D4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C7D8: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C7DC: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C7E0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021C7E4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C7E8:
    // 0x0021C7E8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C7EC: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021C7F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C7F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C7F8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C7FC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C800: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021C804: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C808: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C80C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C810: lwc1        $f0, 0x67E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67E8);
    // 0x0021C814: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C818: lwc1        $f1, 0x5BBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BBC);
    // 0x0021C81C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C820: nop

    // 0x0021C824: bc1t        L_0021C83C
    if (c1cs) {
        // 0x0021C828: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021C83C;
    }
    // 0x0021C828: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C82C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C830: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C834: j           L_0021C854
    // 0x0021C838: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C854;
    // 0x0021C838: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C83C:
    // 0x0021C83C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C840: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C844: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C848: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C84C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021C850: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C854:
    // 0x0021C854: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C858: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C85C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C860: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C864: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C868: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C86C: lwc1        $f0, 0x67F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67F0);
    // 0x0021C870: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C874: lwc1        $f1, 0x5BC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BC0);
    // 0x0021C878: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C87C: nop

    // 0x0021C880: bc1t        L_0021C898
    if (c1cs) {
        // 0x0021C884: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021C898;
    }
    // 0x0021C884: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C888: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C88C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C890: j           L_0021C8AC
    // 0x0021C894: nop

        goto L_0021C8AC;
    // 0x0021C894: nop

L_0021C898:
    // 0x0021C898: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C89C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C8A0: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C8A4: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C8A8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021C8AC:
    // 0x0021C8AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C8B0: lwc1        $f0, 0x67F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67F4);
    // 0x0021C8B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C8B8: lwc1        $f1, 0x5BC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BC4);
    // 0x0021C8BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C8C0: nop

    // 0x0021C8C4: bc1tl       L_0021C8DC
    if (c1cs) {
        // 0x0021C8C8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021C8DC;
    }
    goto skip_5;
    // 0x0021C8C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_5:
    // 0x0021C8CC: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C8D0: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C8D4: j           L_0021C8F0
    // 0x0021C8D8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C8F0;
    // 0x0021C8D8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C8DC:
    // 0x0021C8DC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C8E0: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C8E4: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C8E8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021C8EC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C8F0:
    // 0x0021C8F0: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C8F4: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021C8F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C8FC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C900: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C904: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C908: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021C90C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C910: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C914: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021C918: lwc1        $f0, 0x67F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67F8);
    // 0x0021C91C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C920: lwc1        $f1, 0x5BC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BC8);
    // 0x0021C924: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C928: nop

    // 0x0021C92C: bc1f        L_0021CCF8
    if (!c1cs) {
        // 0x0021C930: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CCF8;
    }
    // 0x0021C930: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021C934: j           L_0021CD0C
    // 0x0021C938: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_0021CD0C;
    // 0x0021C938: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0021C93C:
    // 0x0021C93C: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x0021C940: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x0021C944: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C948: lwc1        $f1, 0x5BCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BCC);
    // 0x0021C94C: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
    // 0x0021C950: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C954: nop

    // 0x0021C958: bc1t        L_0021C970
    if (c1cs) {
        // 0x0021C95C: addiu       $a3, $a2, 0x20
        ctx->r7 = ADD32(ctx->r6, 0X20);
            goto L_0021C970;
    }
    // 0x0021C95C: addiu       $a3, $a2, 0x20
    ctx->r7 = ADD32(ctx->r6, 0X20);
    // 0x0021C960: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C964: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C968: j           L_0021C984
    // 0x0021C96C: nop

        goto L_0021C984;
    // 0x0021C96C: nop

L_0021C970:
    // 0x0021C970: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021C974: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C978: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C97C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C980: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021C984:
    // 0x0021C984: lwc1        $f0, 0x4($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X4);
    // 0x0021C988: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C98C: lwc1        $f1, 0x5BD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BD0);
    // 0x0021C990: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C994: nop

    // 0x0021C998: bc1tl       L_0021C9B0
    if (c1cs) {
        // 0x0021C99C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021C9B0;
    }
    goto skip_6;
    // 0x0021C99C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_6:
    // 0x0021C9A0: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C9A4: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C9A8: j           L_0021C9C4
    // 0x0021C9AC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021C9C4;
    // 0x0021C9AC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C9B0:
    // 0x0021C9B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021C9B4: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021C9B8: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021C9BC: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021C9C0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021C9C4:
    // 0x0021C9C4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021C9C8: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021C9CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C9D0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021C9D4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021C9D8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021C9DC: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021C9E0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021C9E4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021C9E8: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0021C9EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021C9F0: lwc1        $f1, 0x5BD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BD4);
    // 0x0021C9F4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021C9F8: nop

    // 0x0021C9FC: bc1t        L_0021CA14
    if (c1cs) {
        // 0x0021CA00: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CA14;
    }
    // 0x0021CA00: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021CA04: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CA08: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CA0C: j           L_0021CA2C
    // 0x0021CA10: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CA2C;
    // 0x0021CA10: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CA14:
    // 0x0021CA14: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021CA18: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CA1C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CA20: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CA24: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021CA28: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CA2C:
    // 0x0021CA2C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CA30: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CA34: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021CA38: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CA3C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CA40: lwc1        $f0, 0x10($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X10);
    // 0x0021CA44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CA48: lwc1        $f1, 0x5BD8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BD8);
    // 0x0021CA4C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CA50: nop

    // 0x0021CA54: bc1t        L_0021CA6C
    if (c1cs) {
        // 0x0021CA58: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CA6C;
    }
    // 0x0021CA58: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021CA5C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CA60: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CA64: j           L_0021CA80
    // 0x0021CA68: nop

        goto L_0021CA80;
    // 0x0021CA68: nop

L_0021CA6C:
    // 0x0021CA6C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021CA70: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CA74: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CA78: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CA7C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021CA80:
    // 0x0021CA80: lwc1        $f0, 0x14($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X14);
    // 0x0021CA84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CA88: lwc1        $f1, 0x5BDC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BDC);
    // 0x0021CA8C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CA90: nop

    // 0x0021CA94: bc1tl       L_0021CAAC
    if (c1cs) {
        // 0x0021CA98: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021CAAC;
    }
    goto skip_7;
    // 0x0021CA98: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_7:
    // 0x0021CA9C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CAA0: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CAA4: j           L_0021CAC0
    // 0x0021CAA8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CAC0;
    // 0x0021CAA8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CAAC:
    // 0x0021CAAC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CAB0: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CAB4: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CAB8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021CABC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CAC0:
    // 0x0021CAC0: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CAC4: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021CAC8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021CACC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CAD0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021CAD4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CAD8: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021CADC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021CAE0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CAE4: lwc1        $f0, 0x18($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X18);
    // 0x0021CAE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CAEC: lwc1        $f1, 0x5BE0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BE0);
    // 0x0021CAF0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CAF4: nop

    // 0x0021CAF8: bc1t        L_0021CB10
    if (c1cs) {
        // 0x0021CAFC: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CB10;
    }
    // 0x0021CAFC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021CB00: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CB04: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CB08: j           L_0021CB28
    // 0x0021CB0C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CB28;
    // 0x0021CB0C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CB10:
    // 0x0021CB10: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021CB14: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CB18: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CB1C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CB20: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021CB24: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CB28:
    // 0x0021CB28: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CB2C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CB30: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021CB34: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CB38: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CB3C: lwc1        $f0, 0x20($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X20);
    // 0x0021CB40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CB44: lwc1        $f1, 0x5BE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BE4);
    // 0x0021CB48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CB4C: nop

    // 0x0021CB50: bc1t        L_0021CB68
    if (c1cs) {
        // 0x0021CB54: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CB68;
    }
    // 0x0021CB54: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021CB58: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CB5C: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CB60: j           L_0021CB7C
    // 0x0021CB64: nop

        goto L_0021CB7C;
    // 0x0021CB64: nop

L_0021CB68:
    // 0x0021CB68: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021CB6C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CB70: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CB74: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CB78: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021CB7C:
    // 0x0021CB7C: lwc1        $f0, 0x24($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X24);
    // 0x0021CB80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CB84: lwc1        $f1, 0x5BE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BE8);
    // 0x0021CB88: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CB8C: nop

    // 0x0021CB90: bc1tl       L_0021CBA8
    if (c1cs) {
        // 0x0021CB94: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021CBA8;
    }
    goto skip_8;
    // 0x0021CB94: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_8:
    // 0x0021CB98: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CB9C: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CBA0: j           L_0021CBBC
    // 0x0021CBA4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CBBC;
    // 0x0021CBA4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CBA8:
    // 0x0021CBA8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CBAC: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CBB0: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CBB4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021CBB8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CBBC:
    // 0x0021CBBC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CBC0: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021CBC4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021CBC8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CBCC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021CBD0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CBD4: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021CBD8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021CBDC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CBE0: lwc1        $f0, 0x28($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28);
    // 0x0021CBE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CBE8: lwc1        $f1, 0x5BEC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BEC);
    // 0x0021CBEC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CBF0: nop

    // 0x0021CBF4: bc1t        L_0021CC0C
    if (c1cs) {
        // 0x0021CBF8: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CC0C;
    }
    // 0x0021CBF8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021CBFC: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CC00: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CC04: j           L_0021CC24
    // 0x0021CC08: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CC24;
    // 0x0021CC08: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CC0C:
    // 0x0021CC0C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021CC10: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CC14: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CC18: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CC1C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021CC20: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CC24:
    // 0x0021CC24: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CC28: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CC2C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021CC30: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CC34: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CC38: lwc1        $f0, 0x30($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X30);
    // 0x0021CC3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CC40: lwc1        $f1, 0x5BF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BF0);
    // 0x0021CC44: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CC48: nop

    // 0x0021CC4C: bc1t        L_0021CC64
    if (c1cs) {
        // 0x0021CC50: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CC64;
    }
    // 0x0021CC50: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021CC54: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CC58: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CC5C: j           L_0021CC78
    // 0x0021CC60: nop

        goto L_0021CC78;
    // 0x0021CC60: nop

L_0021CC64:
    // 0x0021CC64: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021CC68: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CC6C: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CC70: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CC74: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021CC78:
    // 0x0021CC78: lwc1        $f0, 0x34($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X34);
    // 0x0021CC7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CC80: lwc1        $f1, 0x5BF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BF4);
    // 0x0021CC84: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CC88: nop

    // 0x0021CC8C: bc1tl       L_0021CCA4
    if (c1cs) {
        // 0x0021CC90: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021CCA4;
    }
    goto skip_9;
    // 0x0021CC90: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_9:
    // 0x0021CC94: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CC98: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CC9C: j           L_0021CCB8
    // 0x0021CCA0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CCB8;
    // 0x0021CCA0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CCA4:
    // 0x0021CCA4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CCA8: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CCAC: mfc1        $a1, $f15
    ctx->r5 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CCB0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0021CCB4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CCB8:
    // 0x0021CCB8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CCBC: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x0021CCC0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021CCC4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CCC8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0021CCCC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CCD0: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x0021CCD4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021CCD8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CCDC: lwc1        $f0, 0x38($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X38);
    // 0x0021CCE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021CCE4: lwc1        $f1, 0x5BF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5BF8);
    // 0x0021CCE8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021CCEC: nop

    // 0x0021CCF0: bc1t        L_0021CD08
    if (c1cs) {
        // 0x0021CCF4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021CD08;
    }
    // 0x0021CCF4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_0021CCF8:
    // 0x0021CCF8: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CCFC: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CD00: j           L_0021CD20
    // 0x0021CD04: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021CD20;
    // 0x0021CD04: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CD08:
    // 0x0021CD08: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0021CD0C:
    // 0x0021CD0C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021CD10: trunc.w.s   $f15, $f0
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(15 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021CD14: mfc1        $a0, $f15
    ctx->r4 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x0021CD18: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021CD1C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021CD20:
    // 0x0021CD20: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021CD24: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0021CD28: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0021CD2C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021CD30: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021CD34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021CD38: jal         0x002017D4
    // 0x0021CD3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_26;
    // 0x0021CD3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_26:
    // 0x0021CD40: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x0021CD44: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021CD48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021CD4C: sw          $v0, 0x67B0($at)
    MEM_W(0X67B0, ctx->r1) = ctx->r2;
    // 0x0021CD50: beq         $s2, $zero, L_0021CD84
    if (ctx->r18 == 0) {
        // 0x0021CD54: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_0021CD84;
    }
    // 0x0021CD54: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0021CD58: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021CD5C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_0021CD60:
    // 0x0021CD60: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0021CD64: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x0021CD68: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0021CD6C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0021CD70: jal         0x0021B95C
    // 0x0021CD74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0021B95C(rdram, ctx);
        goto after_27;
    // 0x0021CD74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_27:
    // 0x0021CD78: sltu        $v0, $s0, $s2
    ctx->r2 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x0021CD7C: bne         $v0, $zero, L_0021CD60
    if (ctx->r2 != 0) {
        // 0x0021CD80: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0021CD60;
    }
    // 0x0021CD80: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_0021CD84:
    // 0x0021CD84: lw          $ra, 0xD0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD0);
    // 0x0021CD88: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x0021CD8C: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x0021CD90: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x0021CD94: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x0021CD98: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0021CD9C: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x0021CDA0: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x0021CDA4: jr          $ra
    // 0x0021CDA8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x0021CDA8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_0025AB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AB54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AB58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AB5C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AB60: lhu         $a3, 0x7C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025AB64: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AB68: addiu       $a2, $a2, 0x480
    ctx->r6 = ADD32(ctx->r6, 0X480);
    // 0x0025AB6C: jal         0x00245A98
    // 0x0025AB70: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AB70: nop

    after_0:
    // 0x0025AB74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AB78: jr          $ra
    // 0x0025AB7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AB7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423B48: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423B4C: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423B50: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423B54: beq         $v0, $zero, L_00423B70
    if (ctx->r2 == 0) {
        // 0x00423B58: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423B70;
    }
    // 0x00423B58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423B5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423B60: addu        $at, $at, $v0
    gpr jr_addend_00423B68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423B64: lw          $v0, 0x1688($at)
    ctx->r2 = ADD32(ctx->r1, 0X1688);
    // 0x00423B68: jr          $v0
    // 0x00423B6C: nop

    switch (jr_addend_00423B68 >> 2) {
        case 0: goto L_00423B70; break;
        case 1: goto L_00423B80; break;
        case 2: goto L_00423B90; break;
        case 3: goto L_00423BA0; break;
        case 4: goto L_00423BB0; break;
        default: switch_error(__func__, 0x00423B68, 0x800C1688);
    }
    // 0x00423B6C: nop

L_00423B70:
    // 0x00423B70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B74: addiu       $v0, $v0, 0x5140
    ctx->r2 = ADD32(ctx->r2, 0X5140);
    // 0x00423B78: j           L_00423BBC
    // 0x00423B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B80:
    // 0x00423B80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B84: addiu       $v0, $v0, 0x519C
    ctx->r2 = ADD32(ctx->r2, 0X519C);
    // 0x00423B88: j           L_00423BBC
    // 0x00423B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B90:
    // 0x00423B90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B94: addiu       $v0, $v0, 0x51D8
    ctx->r2 = ADD32(ctx->r2, 0X51D8);
    // 0x00423B98: j           L_00423BBC
    // 0x00423B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BA0:
    // 0x00423BA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423BA4: addiu       $v0, $v0, 0x5228
    ctx->r2 = ADD32(ctx->r2, 0X5228);
    // 0x00423BA8: j           L_00423BBC
    // 0x00423BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BB0:
    // 0x00423BB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423BB4: addiu       $v0, $v0, 0x5284
    ctx->r2 = ADD32(ctx->r2, 0X5284);
    // 0x00423BB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BBC:
    // 0x00423BBC: jr          $ra
    // 0x00423BC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423BC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00292DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292DB0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00292DB4: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00292DB8: beql        $v0, $zero, L_00292DD8
    if (ctx->r2 == 0) {
            // 0x00292DBC: addiu       $v0, $zero, 0x1E8
    ctx->r2 = ADD32(0, 0X1E8);
    func_00292DD8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00292DBC: addiu       $v0, $zero, 0x1E8
    ctx->r2 = ADD32(0, 0X1E8);
    skip_0:
    // 0x00292DC0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x00292DC4: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00292DC8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00292DCC: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x00292DD0: jr          $ra
    // 0x00292DD4: nop

    return;
    // 0x00292DD4: nop

;}
RECOMP_FUNC void func_00467C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00467C08: jr          $ra
    // 0x00467C0C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x00467C0C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00258754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00258758: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025875C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00258760: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00258764: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258768: lw          $a0, 0x1A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1A8);
    // 0x0025876C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00258770: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00258774: lh          $a2, 0xB14($a0)
    ctx->r6 = MEM_H(ctx->r4, 0XB14);
    // 0x00258778: lhu         $a1, 0xB14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XB14);
    // 0x0025877C: bne         $v0, $a2, L_00258798
    if (ctx->r2 != ctx->r6) {
        // 0x00258780: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258798;
    }
    // 0x00258780: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00258784: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00258788: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x0025878C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00258790: beq         $v1, $v0, L_00258818
    if (ctx->r3 == ctx->r2) {
        // 0x00258794: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_00258818;
    }
    // 0x00258794: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
L_00258798:
    // 0x00258798: sh          $a1, 0x996($a0)
    MEM_H(0X996, ctx->r4) = ctx->r5;
    // 0x0025879C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002587A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002587A4: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002587A8: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x002587AC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x002587B0: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x002587B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002587B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002587BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002587C0: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002587C4: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x002587C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002587CC: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x002587D0: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x002587D4: bne         $v0, $zero, L_00258808
    if (ctx->r2 != 0) {
        // 0x002587D8: sw          $v1, 0x108($s0)
        MEM_W(0X108, ctx->r16) = ctx->r3;
            goto L_00258808;
    }
    // 0x002587D8: sw          $v1, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->r3;
    // 0x002587DC: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x002587E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002587E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002587E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002587EC: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002587F0: lw          $a1, 0x51C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X51C);
    // 0x002587F4: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x002587F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002587FC: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00258800: jal         0x0027FC2C
    // 0x00258804: nop

    func_0027FC2C(rdram, ctx);
        goto after_0;
    // 0x00258804: nop

    after_0:
L_00258808:
    // 0x00258808: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    // 0x0025880C: sw          $zero, 0x110($s0)
    MEM_W(0X110, ctx->r16) = 0;
    // 0x00258810: sw          $zero, 0x128($s0)
    MEM_W(0X128, ctx->r16) = 0;
    // 0x00258814: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
L_00258818:
    // 0x00258818: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025881C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00258820: jal         0x00243414
    // 0x00258824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00258824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00258828: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025882C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258830: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258834: jr          $ra
    // 0x00258838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00258838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422204: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422208: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x0042220C: beq         $v0, $zero, L_00422224
    if (ctx->r2 == 0) {
        // 0x00422210: nop
    
            goto L_00422224;
    }
    // 0x00422210: nop

    // 0x00422214: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422218: addiu       $v0, $v0, 0x4AE0
    ctx->r2 = ADD32(ctx->r2, 0X4AE0);
    // 0x0042221C: j           L_00422250
    // 0x00422220: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422250;
    // 0x00422220: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422224:
    // 0x00422224: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422228: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x0042222C: beq         $v0, $zero, L_00422244
    if (ctx->r2 == 0) {
        // 0x00422230: nop
    
            goto L_00422244;
    }
    // 0x00422230: nop

    // 0x00422234: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422238: addiu       $v0, $v0, 0x4AF8
    ctx->r2 = ADD32(ctx->r2, 0X4AF8);
    // 0x0042223C: j           L_00422250
    // 0x00422240: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422250;
    // 0x00422240: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422244:
    // 0x00422244: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422248: addiu       $v0, $v0, 0x4AEC
    ctx->r2 = ADD32(ctx->r2, 0X4AEC);
    // 0x0042224C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422250:
    // 0x00422250: jr          $ra
    // 0x00422254: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422254: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00453C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AC78:
    // 0x00453C38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_0041ACB4:
    // 0x00453C3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00453C40: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00453C44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00453C48: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00453C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00453C50: jal         0x0029E4C0
    // 0x00453C54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E4C0(rdram, ctx);
        goto after_0;
    // 0x00453C54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00453C58: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00453C5C: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, 0X1F8C);
    // 0x00453C60: jal         0x0029E4C0
    // 0x00453C64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029E4C0(rdram, ctx);
        goto after_1;
    // 0x00453C64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00453C68: beq         $s0, $v0, L_00453C78
    if (ctx->r16 == ctx->r2) {
        // 0x00453C6C: nop
    
            goto L_00453C78;
    }
    // 0x00453C6C: nop

L_00453C70:
    // 0x00453C70: j           L_0041ACB4
    // 0x00453C74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041ACB4(rdram, ctx);
    return;
    // 0x00453C74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00453C78:
    // 0x00453C78: jal         0x0029E4C0
    // 0x00453C7C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_2;
    // 0x00453C7C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00453C80: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00453C84: beq         $v0, $zero, L_00453CB0
    if (ctx->r2 == 0) {
        // 0x00453C88: addu        $v0, $s2, $s1
        ctx->r2 = ADD32(ctx->r18, ctx->r17);
            goto L_00453CB0;
    }
    // 0x00453C88: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x00453C8C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00453C90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453C94: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x00453C98: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x00453C9C: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x00453CA0: bne         $v0, $v1, L_00453C70
    if (ctx->r2 != ctx->r3) {
        // 0x00453CA4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00453C70;
    }
    // 0x00453CA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00453CA8: j           L_0041AC78
    // 0x00453CAC: nop

    entry_0041AC78(rdram, ctx);
    return;
    // 0x00453CAC: nop

L_00453CB0:
    // 0x00453CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00453CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00453CB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00453CBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00453CC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00453CC4: jr          $ra
    // 0x00453CC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00453CC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002065F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002065F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002065FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206600: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00206604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00206608: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0020660C: beq         $v0, $zero, L_00206648
    if (ctx->r2 == 0) {
        // 0x00206610: nop
    
            goto L_00206648;
    }
    // 0x00206610: nop

    // 0x00206614: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x00206618: jal         0x00202A08
    // 0x0020661C: nop

    entry_00202A08(rdram, ctx);
        goto after_0;
    // 0x0020661C: nop

    after_0:
    // 0x00206620: lw          $s0, 0x14($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X14);
    // 0x00206624: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206628: addiu       $a0, $a0, -0x7284
    ctx->r4 = ADD32(ctx->r4, -0X7284);
    // 0x0020662C: jal         0x00200738
    // 0x00206630: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00206630: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00206634: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206638: addiu       $a0, $a0, -0x7298
    ctx->r4 = ADD32(ctx->r4, -0X7298);
    // 0x0020663C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00206640: jal         0x00200518
    // 0x00206644: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00206644: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    after_2:
L_00206648:
    // 0x00206648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020664C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206650: jr          $ra
    // 0x00206654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00206654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004415A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408690:
    // 0x004415A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
L_00408750:
    // 0x004415A4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
L_004087D0:
    // 0x004415A8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00408880:
    // 0x004415AC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
L_00408888:
    // 0x004415B0: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
L_00408898:
    // 0x004415B4: addiu       $s2, $s2, -0x4B0
    ctx->r18 = ADD32(ctx->r18, -0X4B0);
    // 0x004415B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x004415BC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x004415C0: lw          $v0, 0xF4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF4);
    // 0x004415C4: lui         $v1, 0x41
    ctx->r3 = S32(0X41 << 16);
    // 0x004415C8: addiu       $v1, $v1, -0x7620
    ctx->r3 = ADD32(ctx->r3, -0X7620);
    // 0x004415CC: bnel        $v0, $v1, L_004415D4
    if (ctx->r2 != ctx->r3) {
        // 0x004415D0: sw          $v1, 0xF4($s1)
        MEM_W(0XF4, ctx->r17) = ctx->r3;
            goto L_004415D4;
    }
    goto skip_0;
    // 0x004415D0: sw          $v1, 0xF4($s1)
    MEM_W(0XF4, ctx->r17) = ctx->r3;
    skip_0:
L_004415D4:
    // 0x004415D4: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x004415D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004415DC: beq         $v1, $v0, L_0044161C
    if (ctx->r3 == ctx->r2) {
        // 0x004415E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0044161C;
    }
    // 0x004415E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004415E4: beql        $v0, $zero, L_004415FC
    if (ctx->r2 == 0) {
        // 0x004415E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004415FC;
    }
    goto skip_1;
    // 0x004415E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x004415EC: beq         $v1, $zero, L_0044160C
    if (ctx->r3 == 0) {
        // 0x004415F0: nop
    
            goto L_0044160C;
    }
    // 0x004415F0: nop

    // 0x004415F4: j           L_00408750
    // 0x004415F8: nop

    entry_00408750(rdram, ctx);
    return;
    // 0x004415F8: nop

L_004415FC:
    // 0x004415FC: beq         $v1, $v0, L_00441718
    if (ctx->r3 == ctx->r2) {
        // 0x00441600: nop
    
            goto L_00441718;
    }
    // 0x00441600: nop

    // 0x00441604: j           L_00408750
    // 0x00441608: nop

    entry_00408750(rdram, ctx);
    return;
    // 0x00441608: nop

L_0044160C:
    // 0x0044160C: jal         0x004082A0
    // 0x00441610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_004082A0(rdram, ctx);
        goto after_0;
    // 0x00441610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00441614: j           L_00408750
    // 0x00441618: nop

    entry_00408750(rdram, ctx);
    return;
    // 0x00441618: nop

L_0044161C:
    // 0x0044161C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00441620: lwc1        $f1, -0x4A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4A4);
    // 0x00441624: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00441628: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0044162C: nop

    // 0x00441630: bc1f        L_00441654
    if (!c1cs) {
        // 0x00441634: nop
    
            goto L_00441654;
    }
    // 0x00441634: nop

    // 0x00441638: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044163C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00441640: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00441644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00441648: swc1        $f0, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = ctx->f0.u32l;
    // 0x0044164C: j           L_00408750
    // 0x00441650: nop

    entry_00408750(rdram, ctx);
    return;
    // 0x00441650: nop

L_00441654:
    // 0x00441654: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441658: lwc1        $f12, 0x598($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X598);
    // 0x0044165C: jal         0x0021149C
    // 0x00441660: nop

    func_0021149C(rdram, ctx);
        goto after_1;
    // 0x00441660: nop

    after_1:
    // 0x00441664: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441668: lwc1        $f1, 0x59C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59C);
    // 0x0044166C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00441670: nop

    // 0x00441674: bc1t        L_00441750
    if (c1cs) {
        // 0x00441678: nop
    
            goto L_00441750;
    }
    // 0x00441678: nop

    // 0x0044167C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00441680: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00441684: beq         $s0, $zero, L_00441750
    if (ctx->r16 == 0) {
        // 0x00441688: nop
    
            goto L_00441750;
    }
    // 0x00441688: nop

    // 0x0044168C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00441690: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00441694: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441698: bne         $v0, $v1, L_004416AC
    if (ctx->r2 != ctx->r3) {
        // 0x0044169C: nop
    
            goto L_004416AC;
    }
    // 0x0044169C: nop

    // 0x004416A0: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x004416A4: bnel        $v0, $zero, L_004416C0
    if (ctx->r2 != 0) {
        // 0x004416A8: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_004416C0;
    }
    goto skip_2;
    // 0x004416A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    skip_2:
L_004416AC:
    // 0x004416AC: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x004416B0: beq         $s0, $zero, L_00441750
    if (ctx->r16 == 0) {
        // 0x004416B4: nop
    
            goto L_00441750;
    }
    // 0x004416B4: nop

    // 0x004416B8: j           L_00408690
    // 0x004416BC: nop

    entry_00408690(rdram, ctx);
    return;
    // 0x004416BC: nop

L_004416C0:
    // 0x004416C0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x004416C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004416C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004416CC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x004416D0: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x004416D4: jal         0x00246690
    // 0x004416D8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x004416D8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_2:
    // 0x004416DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004416E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004416E4: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x004416E8: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x004416EC: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x004416F0: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x004416F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004416F8: jal         0x00245828
    // 0x004416FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_3;
    // 0x004416FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x00441700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441704: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00441708: jal         0x0025B2D4
    // 0x0044170C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_4;
    // 0x0044170C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00441710: j           L_00408750
    // 0x00441714: nop

    entry_00408750(rdram, ctx);
    return;
    // 0x00441714: nop

L_00441718:
    // 0x00441718: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0044171C: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00441720: beq         $v1, $zero, L_00441750
    if (ctx->r3 == 0) {
        // 0x00441724: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00441750;
    }
    // 0x00441724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00441728:
    // 0x00441728: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0044172C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441730: bne         $v0, $a0, L_00441744
    if (ctx->r2 != ctx->r4) {
        // 0x00441734: nop
    
            goto L_00441744;
    }
    // 0x00441734: nop

    // 0x00441738: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x0044173C: bne         $v0, $zero, L_00441750
    if (ctx->r2 != 0) {
        // 0x00441740: nop
    
            goto L_00441750;
    }
    // 0x00441740: nop

L_00441744:
    // 0x00441744: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00441748: bne         $v1, $zero, L_00441728
    if (ctx->r3 != 0) {
        // 0x0044174C: nop
    
            goto L_00441728;
    }
    // 0x0044174C: nop

L_00441750:
    // 0x00441750: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x00441754: bne         $a0, $zero, L_00441764
    if (ctx->r4 != 0) {
        // 0x00441758: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00441764;
    }
    // 0x00441758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044175C: j           L_00408898
    // 0x00441760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    entry_00408898(rdram, ctx);
    return;
    // 0x00441760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_00441764:
    // 0x00441764: bne         $a0, $v0, L_004417C4
    if (ctx->r4 != ctx->r2) {
        // 0x00441768: nop
    
            goto L_004417C4;
    }
    // 0x00441768: nop

    // 0x0044176C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00441770: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00441774: beql        $v1, $zero, L_004417A8
    if (ctx->r3 == 0) {
        // 0x00441778: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004417A8;
    }
    goto skip_3;
    // 0x00441778: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x0044177C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00441780:
    // 0x00441780: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00441784: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441788: bne         $v0, $a0, L_0044179C
    if (ctx->r2 != ctx->r4) {
        // 0x0044178C: nop
    
            goto L_0044179C;
    }
    // 0x0044178C: nop

    // 0x00441790: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00441794: bne         $v0, $zero, L_004417A8
    if (ctx->r2 != 0) {
        // 0x00441798: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004417A8;
    }
    // 0x00441798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0044179C:
    // 0x0044179C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x004417A0: bne         $v1, $zero, L_00441780
    if (ctx->r3 != 0) {
        // 0x004417A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00441780;
    }
    // 0x004417A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004417A8:
    // 0x004417A8: bnel        $v0, $zero, L_00441898
    if (ctx->r2 != 0) {
        // 0x004417AC: sw          $zero, 0x40($s1)
        MEM_W(0X40, ctx->r17) = 0;
            goto L_00441898;
    }
    goto skip_4;
    // 0x004417AC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    skip_4:
    // 0x004417B0: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004417B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004417B8: lwc1        $f0, 0x5A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A0);
    // 0x004417BC: j           L_004087D0
    // 0x004417C0: nop

    entry_004087D0(rdram, ctx);
    return;
    // 0x004417C0: nop

L_004417C4:
    // 0x004417C4: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004417C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004417CC: lwc1        $f0, 0x5A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A4);
    // 0x004417D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004417D4: nop

    // 0x004417D8: bc1t        L_00441898
    if (c1cs) {
        // 0x004417DC: nop
    
            goto L_00441898;
    }
    // 0x004417DC: nop

    // 0x004417E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004417E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004417E8: jal         0x002532A8
    // 0x004417EC: nop

    func_002532A8(rdram, ctx);
        goto after_5;
    // 0x004417EC: nop

    after_5:
    // 0x004417F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004417F4: beq         $a0, $zero, L_00441898
    if (ctx->r4 == 0) {
        // 0x004417F8: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00441898;
    }
    // 0x004417F8: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x004417FC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00441800: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00441804: beq         $v1, $v0, L_00441850
    if (ctx->r3 == ctx->r2) {
        // 0x00441808: slti        $v0, $v1, 0x1C85
        ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
            goto L_00441850;
    }
    // 0x00441808: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x0044180C: beq         $v0, $zero, L_0044182C
    if (ctx->r2 == 0) {
        // 0x00441810: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0044182C;
    }
    // 0x00441810: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00441814: beq         $v1, $v0, L_00441848
    if (ctx->r3 == ctx->r2) {
        // 0x00441818: addiu       $v0, $zero, 0x1C20
        ctx->r2 = ADD32(0, 0X1C20);
            goto L_00441848;
    }
    // 0x00441818: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0044181C: beq         $v1, $v0, L_00441888
    if (ctx->r3 == ctx->r2) {
        // 0x00441820: addiu       $a1, $zero, 0xBB7
        ctx->r5 = ADD32(0, 0XBB7);
            goto L_00441888;
    }
    // 0x00441820: addiu       $a1, $zero, 0xBB7
    ctx->r5 = ADD32(0, 0XBB7);
    // 0x00441824: j           L_00408880
    // 0x00441828: nop

    entry_00408880(rdram, ctx);
    return;
    // 0x00441828: nop

L_0044182C:
    // 0x0044182C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00441830: beq         $v1, $v0, L_00441858
    if (ctx->r3 == ctx->r2) {
        // 0x00441834: addiu       $v0, $zero, 0x1D4C
        ctx->r2 = ADD32(0, 0X1D4C);
            goto L_00441858;
    }
    // 0x00441834: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x00441838: beq         $v1, $v0, L_0044186C
    if (ctx->r3 == ctx->r2) {
        // 0x0044183C: nop
    
            goto L_0044186C;
    }
    // 0x0044183C: nop

    // 0x00441840: j           L_00408880
    // 0x00441844: nop

    entry_00408880(rdram, ctx);
    return;
    // 0x00441844: nop

L_00441848:
    // 0x00441848: j           L_00408888
    // 0x0044184C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
    entry_00408888(rdram, ctx);
    return;
    // 0x0044184C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
L_00441850:
    // 0x00441850: j           L_00408888
    // 0x00441854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
    entry_00408888(rdram, ctx);
    return;
    // 0x00441854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
L_00441858:
    // 0x00441858: lw          $v0, 0x9E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E4);
    // 0x0044185C: beq         $v0, $zero, L_00441888
    if (ctx->r2 == 0) {
        // 0x00441860: addiu       $a1, $zero, 0x1CE9
        ctx->r5 = ADD32(0, 0X1CE9);
            goto L_00441888;
    }
    // 0x00441860: addiu       $a1, $zero, 0x1CE9
    ctx->r5 = ADD32(0, 0X1CE9);
    // 0x00441864: j           L_00408888
    // 0x00441868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
    entry_00408888(rdram, ctx);
    return;
    // 0x00441868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
L_0044186C:
    // 0x0044186C: lw          $v0, 0x9E8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E8);
    // 0x00441870: beq         $v0, $zero, L_00441888
    if (ctx->r2 == 0) {
        // 0x00441874: addiu       $a1, $zero, 0x1D4D
        ctx->r5 = ADD32(0, 0X1D4D);
            goto L_00441888;
    }
    // 0x00441874: addiu       $a1, $zero, 0x1D4D
    ctx->r5 = ADD32(0, 0X1D4D);
    // 0x00441878: j           L_00408888
    // 0x0044187C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
    entry_00408888(rdram, ctx);
    return;
    // 0x0044187C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
    // 0x00441880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00441884: lw          $a1, 0x48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X48);
L_00441888:
    // 0x00441888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0044188C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00441890: jal         0x00248BA8
    // 0x00441894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_6;
    // 0x00441894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_00441898:
    // 0x00441898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0044189C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004418A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004418A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004418A8: jr          $ra
    // 0x004418AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004418AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00202860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00202864: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00202868: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0020286C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x00202870: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00202874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00202878: sllv        $v0, $a1, $v1
    ctx->r2 = S32(ctx->r5 << (ctx->r3 & 31));
L_0020287C:
    // 0x0020287C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00202880: beql        $v0, $zero, L_00202894
    if (ctx->r2 == 0) {
        // 0x00202884: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00202894;
    }
    goto skip_0;
    // 0x00202884: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x00202888: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0020288C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00202890: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00202894:
    // 0x00202894: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x00202898: bne         $v0, $zero, L_0020287C
    if (ctx->r2 != 0) {
        // 0x0020289C: sllv        $v0, $a1, $v1
        ctx->r2 = S32(ctx->r5 << (ctx->r3 & 31));
            goto L_0020287C;
    }
    // 0x0020289C: sllv        $v0, $a1, $v1
    ctx->r2 = S32(ctx->r5 << (ctx->r3 & 31));
    // 0x002028A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002028A4: bnel        $a2, $a1, L_002028AC
    if (ctx->r6 != ctx->r5) {
        // 0x002028A8: addu        $a3, $a3, $a1
        ctx->r7 = ADD32(ctx->r7, ctx->r5);
            goto L_002028AC;
    }
    goto skip_1;
    // 0x002028A8: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    skip_1:
L_002028AC:
    // 0x002028AC: sllv        $a1, $a1, $a3
    ctx->r5 = S32(ctx->r5 << (ctx->r7 & 31));
    // 0x002028B0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x002028B4: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x002028B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002028BC: sw          $v0, -0x4F4C($at)
    MEM_W(-0X4F4C, ctx->r1) = ctx->r2;
    // 0x002028C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002028C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002028C8: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x002028CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002028D0: sw          $a1, -0x4F50($at)
    MEM_W(-0X4F50, ctx->r1) = ctx->r5;
    // 0x002028D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002028D8: sw          $v1, -0x7E40($at)
    MEM_W(-0X7E40, ctx->r1) = ctx->r3;
    // 0x002028DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002028E0: sw          $v0, -0x7E38($at)
    MEM_W(-0X7E38, ctx->r1) = ctx->r2;
    // 0x002028E4: jal         0x002024E0
    // 0x002028E8: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    func_002024E0(rdram, ctx);
        goto after_0;
    // 0x002028E8: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    after_0:
    // 0x002028EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002028F0: lw          $a1, -0x4F4C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4F4C);
    // 0x002028F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002028F8: sw          $v0, -0x7E3C($at)
    MEM_W(-0X7E3C, ctx->r1) = ctx->r2;
    // 0x002028FC: beq         $a1, $zero, L_00202928
    if (ctx->r5 == 0) {
        // 0x00202900: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00202928;
    }
    // 0x00202900: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00202904: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00202908:
    // 0x00202908: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0020290C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x00202910: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x00202914: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x00202918: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0020291C: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00202920: bne         $v0, $zero, L_00202908
    if (ctx->r2 != 0) {
        // 0x00202924: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00202908;
    }
    // 0x00202924: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_00202928:
    // 0x00202928: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020292C: jr          $ra
    // 0x00202930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00202930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00447284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447288: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044728C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00447290: beq         $v0, $zero, L_004472A0
    if (ctx->r2 == 0) {
        // 0x00447294: nop
    
            goto L_004472A0;
    }
    // 0x00447294: nop

    // 0x00447298: jal         0x00243414
    // 0x0044729C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0044729C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_004472A0:
    // 0x004472A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004472A4: jr          $ra
    // 0x004472A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004472A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002572C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_002572B8:
    // 0x002572C8: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002572CC: j           L_002572B8
    // 0x002572D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    entry_002572B8(rdram, ctx);
    return;
    // 0x002572D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002572D4: lh          $v1, 0xC($a2)
    ctx->r3 = MEM_H(ctx->r6, 0XC);
    // 0x002572D8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x002572DC: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x002572E0: beq         $v0, $zero, L_002572F0
    if (ctx->r2 == 0) {
        // 0x002572E4: slt         $v1, $a1, $v1
        ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_002572F0;
    }
    // 0x002572E4: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002572E8: bne         $v1, $zero, L_002572F4
    if (ctx->r3 != 0) {
        // 0x002572EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002572F4;
    }
    // 0x002572EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002572F0:
    // 0x002572F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002572F4:
    // 0x002572F4: jr          $ra
    // 0x002572F8: nop

    return;
    // 0x002572F8: nop

;}
RECOMP_FUNC void func_00267E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267E4C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267E50: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00267E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267E58: beq         $v1, $v0, L_00267E68
    if (ctx->r3 == ctx->r2) {
            // 0x00267E5C: nop

    func_00267E68(rdram, ctx);
    return;
    }
    // 0x00267E5C: nop

    // 0x00267E60: jr          $ra
    // 0x00267E64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267E64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00205D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205D7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205D80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00205D84: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00205D88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00205D8C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00205D90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00205D94: jal         0x0029DFF0
    // 0x00205D98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205D98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00205D9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00205DA0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205DA4: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205DAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205DB0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205DB4: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205DB8: beq         $v1, $v0, L_00205DE4
    if (ctx->r3 == ctx->r2) {
        // 0x00205DBC: nop
    
            goto L_00205DE4;
    }
    // 0x00205DBC: nop

    // 0x00205DC0: jal         0x0029E010
    // 0x00205DC4: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00205DC4: nop

    after_1:
    // 0x00205DC8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205DCC: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205DD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205DD4: jal         0x0029B6F0
    // 0x00205DD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00205DD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205DDC: j           L_00205DEC
    // 0x00205DE0: nop

        goto L_00205DEC;
    // 0x00205DE0: nop

L_00205DE4:
    // 0x00205DE4: jal         0x0029E010
    // 0x00205DE8: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00205DE8: nop

    after_3:
L_00205DEC:
    // 0x00205DEC: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x00205DF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205DF4: jal         0x002031E8
    // 0x00205DF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002031E8(rdram, ctx);
        goto after_4;
    // 0x00205DF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00205DFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00205E00: beq         $s0, $zero, L_00205E90
    if (ctx->r16 == 0) {
        // 0x00205E04: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00205E90;
    }
    // 0x00205E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205E08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00205E0C: srl         $a2, $s1, 5
    ctx->r6 = S32(U32(ctx->r17) >> 5);
    // 0x00205E10: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    // 0x00205E14: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00205E18: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00205E1C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00205E20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00205E24: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00205E28: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205E2C: jal         0x002063B4
    // 0x00205E30: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    func_002063B4(rdram, ctx);
        goto after_5;
    // 0x00205E30: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    after_5:
    // 0x00205E34: beq         $v0, $zero, L_00205E60
    if (ctx->r2 == 0) {
        // 0x00205E38: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00205E60;
    }
    // 0x00205E38: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00205E3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205E40: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205E44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00205E48: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x00205E4C: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x00205E50: jal         0x00206498
    // 0x00205E54: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_00206498(rdram, ctx);
        goto after_6;
    // 0x00205E54: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_6:
    // 0x00205E58: j           L_00205E90
    // 0x00205E5C: nop

        goto L_00205E90;
    // 0x00205E5C: nop

L_00205E60:
    // 0x00205E60: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00205E64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00205E68: bne         $v0, $zero, L_00205E80
    if (ctx->r2 != 0) {
        // 0x00205E6C: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_00205E80;
    }
    // 0x00205E6C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205E70: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205E74: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00205E78: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00205E7C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00205E80:
    // 0x00205E80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205E84: jal         0x002062F8
    // 0x00205E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_7;
    // 0x00205E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00205E8C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00205E90:
    // 0x00205E90: jal         0x0029DFF0
    // 0x00205E94: nop

    func_0029DFF0(rdram, ctx);
        goto after_8;
    // 0x00205E94: nop

    after_8:
    // 0x00205E98: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205E9C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205EA0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00205EA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205EA8: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205EAC: beq         $v1, $zero, L_00205ED8
    if (ctx->r3 == 0) {
        // 0x00205EB0: nop
    
            goto L_00205ED8;
    }
    // 0x00205EB0: nop

    // 0x00205EB4: jal         0x0029E010
    // 0x00205EB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x00205EB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x00205EBC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205EC0: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205EC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205EC8: jal         0x0029B820
    // 0x00205ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x00205ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x00205ED0: j           L_00205EE4
    // 0x00205ED4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00205EE4;
    // 0x00205ED4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00205ED8:
    // 0x00205ED8: jal         0x0029E010
    // 0x00205EDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_11;
    // 0x00205EDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_11:
    // 0x00205EE0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00205EE4:
    // 0x00205EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00205EE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00205EEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00205EF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00205EF4: jr          $ra
    // 0x00205EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00260D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260D54: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x00260D58: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x00260D5C: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
;}
RECOMP_FUNC void func_0044F760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041686C:
    // 0x0044F760: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0044F764: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0044F768: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044F76C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0044F770: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0044F774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044F778: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0044F77C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0044F780: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0044F784: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0044F788: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0044F78C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0044F790: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x0044F794: lw          $s3, 0x18($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X18);
    // 0x0044F798: lw          $s4, 0x1C($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X1C);
    // 0x0044F79C: lw          $s5, 0x20($a1)
    ctx->r21 = MEM_W(ctx->r5, 0X20);
    // 0x0044F7A0: lw          $s6, 0x24($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X24);
    // 0x0044F7A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044F7A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044F7AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0044F7B0: blez        $v1, L_0044F7E8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0044F7B4: addiu       $a3, $v0, 0x1D8
        ctx->r7 = ADD32(ctx->r2, 0X1D8);
            goto L_0044F7E8;
    }
    // 0x0044F7B4: addiu       $a3, $v0, 0x1D8
    ctx->r7 = ADD32(ctx->r2, 0X1D8);
    // 0x0044F7B8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0044F7BC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0044F7C0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_0044F7C4:
    // 0x0044F7C4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0044F7C8: bne         $v0, $t0, L_0044F7D4
    if (ctx->r2 != ctx->r8) {
        // 0x0044F7CC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044F7D4;
    }
    // 0x0044F7CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044F7D0: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0044F7D4:
    // 0x0044F7D4: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x0044F7D8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0044F7DC: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0044F7E0: bne         $v0, $zero, L_0044F7C4
    if (ctx->r2 != 0) {
        // 0x0044F7E4: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_0044F7C4;
    }
    // 0x0044F7E4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_0044F7E8:
    // 0x0044F7E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044F7EC: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x0044F7F0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0044F7F4: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0044F7F8: jal         0x00204EDC
    // 0x0044F7FC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0044F7FC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x0044F800: beql        $v0, $zero, L_0044F86C
    if (ctx->r2 == 0) {
        // 0x0044F804: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044F86C;
    }
    goto skip_0;
    // 0x0044F804: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0044F808: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0044F80C: bne         $s0, $zero, L_0044F81C
    if (ctx->r16 != 0) {
        // 0x0044F810: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044F81C;
    }
    // 0x0044F810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044F814: j           L_0041686C
    // 0x0044F818: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041686C(rdram, ctx);
    return;
    // 0x0044F818: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044F81C:
    // 0x0044F81C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044F820: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0044F824: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044F828: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0044F82C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0044F830: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x0044F834: jal         0x00414EA8
    // 0x0044F838: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0044F838: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_1:
    // 0x0044F83C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044F840: jal         0x00200518
    // 0x0044F844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x0044F844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044F848: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x0044F84C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0044F850: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x0044F854: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044F858: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0044F85C: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x0044F860: beql        $v0, $zero, L_0044F868
    if (ctx->r2 == 0) {
        // 0x0044F864: sh          $zero, 0x14($s1)
        MEM_H(0X14, ctx->r17) = 0;
            goto L_0044F868;
    }
    goto skip_1;
    // 0x0044F864: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    skip_1:
L_0044F868:
    // 0x0044F868: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F86C:
    // 0x0044F86C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0044F870: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0044F874: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0044F878: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0044F87C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0044F880: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0044F884: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0044F888: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0044F88C: jr          $ra
    // 0x0044F890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0044F890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00283730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00283734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00283738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028373C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00283740: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00283744: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00283748: jal         0x00200738
    // 0x0028374C: addiu       $a0, $s0, 0x8B4
    ctx->r4 = ADD32(ctx->r16, 0X8B4);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x0028374C: addiu       $a0, $s0, 0x8B4
    ctx->r4 = ADD32(ctx->r16, 0X8B4);
    after_0:
    // 0x00283750: addiu       $a0, $s0, 0x8A0
    ctx->r4 = ADD32(ctx->r16, 0X8A0);
    // 0x00283754: jal         0x00200518
    // 0x00283758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00283758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0028375C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00283760: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00283764: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00283768: jr          $ra
    // 0x0028376C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028376C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026E9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E9F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026E9F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026E9FC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026EA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026EA04: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0026EA08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026EA0C: jal         0x0026EE40
    // 0x0026EA10: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    func_0026EE40(rdram, ctx);
        goto after_0;
    // 0x0026EA10: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    after_0:
    // 0x0026EA14: bnel        $v0, $zero, L_0026EA30
    if (ctx->r2 != 0) {
        // 0x0026EA18: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0026EA30;
    }
    goto skip_0;
    // 0x0026EA18: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_0:
    // 0x0026EA1C: jal         0x0026EE40
    // 0x0026EA20: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    func_0026EE40(rdram, ctx);
        goto after_1;
    // 0x0026EA20: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    after_1:
    // 0x0026EA24: beq         $v0, $zero, L_0026EA34
    if (ctx->r2 == 0) {
        // 0x0026EA28: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0026EA34;
    }
    // 0x0026EA28: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0026EA2C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0026EA30:
    // 0x0026EA30: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0026EA34:
    // 0x0026EA34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026EA38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026EA3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EA40: jr          $ra
    // 0x0026EA44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026EA44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00450BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450BB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00450BB4: lwc1        $f0, 0xEE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XEE0);
    // 0x00450BB8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00450BBC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00450BC0: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00450BC4: sw          $a2, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r6;
    // 0x00450BC8: sw          $a3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r7;
    // 0x00450BCC: sw          $a1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r5;
    // 0x00450BD0: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x00450BD4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00450BD8: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x00450BDC: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x00450BE0: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x00450BE4: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x00450BE8: c.eq.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl == ctx->f1.fl;
    // 0x00450BEC: nop

    // 0x00450BF0: bc1f        L_00450C04
    if (!c1cs) {
        // 0x00450BF4: swc1        $f12, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
            goto L_00450C04;
    }
    // 0x00450BF4: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x00450BF8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00450BFC: lwc1        $f0, 0xEE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XEE4);
    // 0x00450C00: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
L_00450C04:
    // 0x00450C04: jr          $ra
    // 0x00450C08: nop

    return;
    // 0x00450C08: nop

;}
RECOMP_FUNC void func_00256E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256E6C: addiu       $v0, $zero, 0x2DA
    ctx->r2 = ADD32(0, 0X2DA);
    // 0x00256E70: bne         $a1, $v0, L_00256EC8
    if (ctx->r5 != ctx->r2) {
            // 0x00256E74: nop

    func_00256EC8(rdram, ctx);
    return;
    }
    // 0x00256E74: nop

    // 0x00256E78: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00256E7C: addiu       $v1, $v1, -0x550F
    ctx->r3 = ADD32(ctx->r3, -0X550F);
    // 0x00256E80: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00256E84: beq         $v0, $zero, L_00256EC8
    if (ctx->r2 == 0) {
            // 0x00256E88: addiu       $a0, $v1, 0x1BF
    ctx->r4 = ADD32(ctx->r3, 0X1BF);
    func_00256EC8(rdram, ctx);
    return;
    }
    // 0x00256E88: addiu       $a0, $v1, 0x1BF
    ctx->r4 = ADD32(ctx->r3, 0X1BF);
    // 0x00256E8C: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x00256E90: bne         $v0, $zero, L_00256EBC
    if (ctx->r2 != 0) {
            // 0x00256E94: nop

    func_00256EBC(rdram, ctx);
    return;
    }
    // 0x00256E94: nop

    // 0x00256E98: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x00256E9C: beq         $v0, $zero, L_00256EB0
    if (ctx->r2 == 0) {
            // 0x00256EA0: nop

    func_00256EB0(rdram, ctx);
    return;
    }
    // 0x00256EA0: nop

    // 0x00256EA4: lbu         $v0, 0x15($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X15);
    // 0x00256EA8: jr          $ra
    // 0x00256EAC: nop

    return;
    // 0x00256EAC: nop

;}
RECOMP_FUNC void func_0023EF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023EF98: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0023EF9C: addiu       $v1, $v1, -0x2898
    ctx->r3 = ADD32(ctx->r3, -0X2898);
    // 0x0023EFA0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0023EFA4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_0023EFA8:
    // 0x0023EFA8: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x0023EFAC: bne         $v0, $a0, L_0023EFBC
    if (ctx->r2 != ctx->r4) {
        // 0x0023EFB0: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0023EFBC;
    }
    // 0x0023EFB0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0023EFB4: jr          $ra
    // 0x0023EFB8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0023EFB8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0023EFBC:
    // 0x0023EFBC: bne         $a1, $a2, L_0023EFA8
    if (ctx->r5 != ctx->r6) {
        // 0x0023EFC0: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_0023EFA8;
    }
    // 0x0023EFC0: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x0023EFC4: jr          $ra
    // 0x0023EFC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023EFC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002333C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002333C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002333C4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002333C8: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002333CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002333D0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002333D4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002333D8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002333DC: jal         0x00235FF4
    // 0x002333E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_00235FF4(rdram, ctx);
        goto after_0;
    // 0x002333E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x002333E4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x002333E8: beq         $s2, $zero, L_0023351C
    if (ctx->r18 == 0) {
        // 0x002333EC: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0023351C;
    }
    // 0x002333EC: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x002333F0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x002333F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002333F8: sw          $zero, 0x50($s3)
    MEM_W(0X50, ctx->r19) = 0;
    // 0x002333FC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00233400: addiu       $a1, $s2, 0x10
    ctx->r5 = ADD32(ctx->r18, 0X10);
    // 0x00233404: sw          $zero, 0xB0($s2)
    MEM_W(0XB0, ctx->r18) = 0;
    // 0x00233408: jal         0x002101A0
    // 0x0023340C: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    func_002101A0(rdram, ctx);
        goto after_1;
    // 0x0023340C: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    after_1:
    // 0x00233410: lw          $v0, 0x3C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X3C);
    // 0x00233414: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00233418: beq         $v0, $zero, L_00233430
    if (ctx->r2 == 0) {
        // 0x0023341C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00233430;
    }
    // 0x0023341C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00233420: jal         0x002101BC
    // 0x00233424: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_002101BC(rdram, ctx);
        goto after_2;
    // 0x00233424: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x00233428: j           L_00233444
    // 0x0023342C: nop

        goto L_00233444;
    // 0x0023342C: nop

L_00233430:
    // 0x00233430: jal         0x0020D274
    // 0x00233434: addiu       $a1, $s2, 0x28
    ctx->r5 = ADD32(ctx->r18, 0X28);
    func_0020D274(rdram, ctx);
        goto after_3;
    // 0x00233434: addiu       $a1, $s2, 0x28
    ctx->r5 = ADD32(ctx->r18, 0X28);
    after_3:
    // 0x00233438: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023343C: jal         0x0020D274
    // 0x00233440: addiu       $a1, $s2, 0x68
    ctx->r5 = ADD32(ctx->r18, 0X68);
    func_0020D274(rdram, ctx);
        goto after_4;
    // 0x00233440: addiu       $a1, $s2, 0x68
    ctx->r5 = ADD32(ctx->r18, 0X68);
    after_4:
L_00233444:
    // 0x00233444: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00233448: sw          $zero, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = 0;
    // 0x0023344C: beq         $s1, $zero, L_00233498
    if (ctx->r17 == 0) {
        // 0x00233450: sw          $zero, 0xA8($s0)
        MEM_W(0XA8, ctx->r16) = 0;
            goto L_00233498;
    }
    // 0x00233450: sw          $zero, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = 0;
    // 0x00233454: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00233458: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x0023345C: jal         0x0020EF2C
    // 0x00233460: addiu       $a2, $s1, 0x10
    ctx->r6 = ADD32(ctx->r17, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00233460: addiu       $a2, $s1, 0x10
    ctx->r6 = ADD32(ctx->r17, 0X10);
    after_5:
    // 0x00233464: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00233468: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023346C: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00233470: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00233474: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00233478: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023347C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233480: jal         0x00298470
    // 0x00233484: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_6;
    // 0x00233484: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_6:
    // 0x00233488: swc1        $f0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->f0.u32l;
    // 0x0023348C: lwc1        $f1, 0x4C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4C);
    // 0x00233490: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233494: swc1        $f1, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_00233498:
    // 0x00233498: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0023349C: lbu         $v0, 0x1C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1C);
    // 0x002334A0: bne         $v0, $zero, L_002334F0
    if (ctx->r2 != 0) {
        // 0x002334A4: nop
    
            goto L_002334F0;
    }
    // 0x002334A4: nop

    // 0x002334A8: lwc1        $f0, 0x4C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x002334AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002334B0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002334B4: nop

    // 0x002334B8: bc1f        L_00233520
    if (!c1cs) {
        // 0x002334BC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_00233520;
    }
    // 0x002334BC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x002334C0: lw          $s0, 0x40($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X40);
    // 0x002334C4: beq         $s0, $zero, L_00233520
    if (ctx->r16 == 0) {
        // 0x002334C8: nop
    
            goto L_00233520;
    }
    // 0x002334C8: nop

L_002334CC:
    // 0x002334CC: lwc1        $f0, 0x4C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x002334D0: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002334D4: swc1        $f0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f0.u32l;
    // 0x002334D8: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x002334DC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x002334E0: bne         $s0, $zero, L_002334CC
    if (ctx->r16 != 0) {
        // 0x002334E4: add.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_002334CC;
    }
    // 0x002334E4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002334E8: j           L_00233520
    // 0x002334EC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_00233520;
    // 0x002334EC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002334F0:
    // 0x002334F0: beq         $s1, $zero, L_00233514
    if (ctx->r17 == 0) {
        // 0x002334F4: nop
    
            goto L_00233514;
    }
    // 0x002334F4: nop

    // 0x002334F8: lwc1        $f0, 0xAC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAC);
    // 0x002334FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233500: lwc1        $f1, 0x6440($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6440);
    // 0x00233504: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00233508: lwc1        $f1, 0x28($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X28);
        turok2_patch_scale_swoosh_uv(rdram, ctx);

    // 0x0023350C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00233510: swc1        $f1, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_00233514:
    // 0x00233514: lwc1        $f0, 0x28($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28);
    // 0x00233518: swc1        $f0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f0.u32l;
L_0023351C:
    // 0x0023351C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_00233520:
    // 0x00233520: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00233524: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00233528: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023352C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00233530: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00233534: jr          $ra
    // 0x00233538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00233538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002322C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002322C0: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x002322C4: beq         $a0, $v1, L_002322D0
    if (ctx->r4 == ctx->r3) {
        // 0x002322C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002322D0;
    }
    // 0x002322C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002322CC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_002322D0:
    // 0x002322D0: jr          $ra
    // 0x002322D4: nop

    return;
    // 0x002322D4: nop

;}
RECOMP_FUNC void func_00266C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266C5C: beq         $a2, $zero, L_00266C78
    if (ctx->r6 == 0) {
        // 0x00266C60: addiu       $v0, $a2, -0x1
        ctx->r2 = ADD32(ctx->r6, -0X1);
            goto L_00266C78;
    }
    // 0x00266C60: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x00266C64: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_00266C68:
    // 0x00266C68: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x00266C6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00266C70: bne         $v0, $v1, L_00266C68
    if (ctx->r2 != ctx->r3) {
        // 0x00266C74: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00266C68;
    }
    // 0x00266C74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00266C78:
    // 0x00266C78: jr          $ra
    // 0x00266C7C: nop

    return;
    // 0x00266C7C: nop

;}
RECOMP_FUNC void func_00292804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292804: lbu         $v1, 0x31($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X31);
    // 0x00292808: lw          $v0, 0x60($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X60);
    // 0x0029280C: lw          $a0, 0x20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20);
    // 0x00292810: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x00292814: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00292818: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x0029281C: lbu         $v1, 0x7($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7);
    // 0x00292820: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00292824: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00292828: bltzl       $v1, L_00292830
    if (SIGNED(ctx->r3) < 0) {
        // 0x0029282C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00292830;
    }
    goto skip_0;
    // 0x0029282C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
L_00292830:
    // 0x00292830: slti        $v0, $v1, 0x80
    ctx->r2 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x00292834: beql        $v0, $zero, L_0029283C
    if (ctx->r2 == 0) {
        // 0x00292838: addiu       $v1, $zero, 0x7F
        ctx->r3 = ADD32(0, 0X7F);
            goto L_0029283C;
    }
    goto skip_1;
    // 0x00292838: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    skip_1:
L_0029283C:
    // 0x0029283C: jr          $ra
    // 0x00292840: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x00292840: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
