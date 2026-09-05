#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00278188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00278188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027818C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00278190: jal         0x0027B4EC
    // 0x00278194: nop

    func_0027B4EC(rdram, ctx);
        goto after_0;
    // 0x00278194: nop

    after_0:
    // 0x00278198: addu        $t4, $v0, $zero
    ctx->r12 = ADD32(ctx->r2, 0);
    // 0x0027819C: beq         $t4, $zero, L_0027826C
    if (ctx->r12 == 0) {
        // 0x002781A0: lui         $a3, 0xF590
        ctx->r7 = S32(0XF590 << 16);
            goto L_0027826C;
    }
    // 0x002781A0: lui         $a3, 0xF590
    ctx->r7 = S32(0XF590 << 16);
    // 0x002781A4: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x002781A8: lui         $a2, 0x701
    ctx->r6 = S32(0X701 << 16);
    // 0x002781AC: ori         $a2, $a2, 0x40
    ctx->r6 = ctx->r6 | 0X40;
    // 0x002781B0: lui         $t0, 0x703
    ctx->r8 = S32(0X703 << 16);
    // 0x002781B4: ori         $t0, $t0, 0xF800
    ctx->r8 = ctx->r8 | 0XF800;
    // 0x002781B8: lui         $t2, 0xF580
    ctx->r10 = S32(0XF580 << 16);
    // 0x002781BC: ori         $t2, $t2, 0x300
    ctx->r10 = ctx->r10 | 0X300;
    // 0x002781C0: lui         $t1, 0x1
    ctx->r9 = S32(0X1 << 16);
    // 0x002781C4: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x002781C8: lui         $t3, 0x3
    ctx->r11 = S32(0X3 << 16);
    // 0x002781CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002781D0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002781D4: ori         $t3, $t3, 0xC03C
    ctx->r11 = ctx->r11 | 0XC03C;
    // 0x002781D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002781DC: lui         $v1, 0xFD90
    ctx->r3 = S32(0XFD90 << 16);
    // 0x002781E0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002781E4: sw          $zero, 0x56A8($at)
    MEM_W(0X56A8, ctx->r1) = 0;
    // 0x002781E8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002781EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002781F0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002781F4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002781F8: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x002781FC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00278200: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00278204: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x00278208: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x0027820C: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x00278210: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x00278214: addiu       $a3, $v0, 0x18
    ctx->r7 = ADD32(ctx->r2, 0X18);
    // 0x00278218: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0027821C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x00278220: lui         $v1, 0xF300
    ctx->r3 = S32(0XF300 << 16);
    // 0x00278224: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00278228: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x0027822C: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x00278230: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x00278234: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00278238: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x0027823C: addiu       $a2, $v0, 0x28
    ctx->r6 = ADD32(ctx->r2, 0X28);
    // 0x00278240: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00278244: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x00278248: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x0027824C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x00278250: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00278254: sw          $t2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r10;
    // 0x00278258: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x0027825C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00278260: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x00278264: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x00278268: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
L_0027826C:
    // 0x0027826C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00278270: jr          $ra
    // 0x00278274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00278274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00261A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261A18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00261A1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00261A20: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00261A24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00261A28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00261A2C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00261A30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00261A34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261A38: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x00261A3C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00261A40: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00261A44: lw          $s0, 0x88($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X88);
    // 0x00261A48: beq         $s0, $zero, L_00261B10
    if (ctx->r16 == 0) {
        // 0x00261A4C: addiu       $s2, $v0, 0x14
        ctx->r18 = ADD32(ctx->r2, 0X14);
            goto L_00261B10;
    }
    // 0x00261A4C: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // 0x00261A50: lbu         $v1, 0x4E($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4E);
    // 0x00261A54: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00261A58: beq         $v1, $v0, L_00261B18
    if (ctx->r3 == ctx->r2) {
        // 0x00261A5C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00261B18;
    }
    // 0x00261A5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00261A60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261A64: lwc1        $f12, 0x7AF0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7AF0);
    // 0x00261A68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261A6C: lwc1        $f14, 0x7AF4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7AF4);
    // 0x00261A70: jal         0x002119FC
    // 0x00261A74: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00261A74: nop

    after_0:
    // 0x00261A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261A7C: lwc1        $f12, 0x7AF8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7AF8);
    // 0x00261A80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261A84: lwc1        $f1, 0x7AFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7AFC);
    // 0x00261A88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261A8C: lwc1        $f14, 0x7B00($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B00);
    // 0x00261A90: jal         0x002119FC
    // 0x00261A94: add.s       $f21, $f0, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f0.fl + ctx->f1.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00261A94: add.s       $f21, $f0, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f0.fl + ctx->f1.fl;
    after_1:
    // 0x00261A98: lwc1        $f20, 0x50($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00261A9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261AA0: lwc1        $f1, 0x7B04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B04);
    // 0x00261AA4: add.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f1.fl;
    // 0x00261AA8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00261AAC: jal         0x002982F0
    // 0x00261AB0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x00261AB0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x00261AB4: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00261AB8: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00261ABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261AC0: lwc1        $f12, 0x7B08($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B08);
    // 0x00261AC4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00261AC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261ACC: lwc1        $f14, 0x7B0C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B0C);
    // 0x00261AD0: jal         0x002119FC
    // 0x00261AD4: swc1        $f1, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00261AD4: swc1        $f1, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_3:
    // 0x00261AD8: lwc1        $f1, 0xB0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XB0);
    // 0x00261ADC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00261AE0: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00261AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261AE8: lwc1        $f2, 0x7B10($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7B10);
    // 0x00261AEC: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00261AF0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00261AF4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00261AF8: jal         0x002974C0
    // 0x00261AFC: swc1        $f1, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x00261AFC: swc1        $f1, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x00261B00: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00261B04: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00261B08: add.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x00261B0C: swc1        $f0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->f0.u32l;
L_00261B10:
    // 0x00261B10: lbu         $v1, 0x4E($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4E);
    // 0x00261B14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00261B18:
    // 0x00261B18: bne         $v1, $v0, L_00261B2C
    if (ctx->r3 != ctx->r2) {
        // 0x00261B1C: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_00261B2C;
    }
    // 0x00261B1C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x00261B20: lb          $v1, 0x36($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X36);
    // 0x00261B24: bne         $v1, $v0, L_00261B48
    if (ctx->r3 != ctx->r2) {
        // 0x00261B28: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00261B48;
    }
    // 0x00261B28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00261B2C:
    // 0x00261B2C: lbu         $v1, 0x4E($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4E);
    // 0x00261B30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00261B34: bne         $v1, $v0, L_00261B54
    if (ctx->r3 != ctx->r2) {
        // 0x00261B38: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_00261B54;
    }
    // 0x00261B38: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00261B3C: lb          $v1, 0x36($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X36);
    // 0x00261B40: beq         $v1, $v0, L_00261B54
    if (ctx->r3 == ctx->r2) {
        // 0x00261B44: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00261B54;
    }
    // 0x00261B44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00261B48:
    // 0x00261B48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00261B4C: jal         0x00243414
    // 0x00261B50: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x00261B50: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_5:
L_00261B54:
    // 0x00261B54: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00261B58: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00261B5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00261B60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00261B64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261B68: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00261B6C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00261B70: jr          $ra
    // 0x00261B74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00261B74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0025A78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A78C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A790: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A794: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A798: lhu         $a3, 0x80($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X80);
    // 0x0025A79C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A7A0: addiu       $a2, $a2, -0xE8
    ctx->r6 = ADD32(ctx->r6, -0XE8);
    // 0x0025A7A4: jal         0x00245A98
    // 0x0025A7A8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A7A8: nop

    after_0:
    // 0x0025A7AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A7B0: jr          $ra
    // 0x0025A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040B75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B75C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0040B760: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0040B764: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0040B768: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040B76C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0040B770: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040B774: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040B778: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040B77C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040B780: lb          $v0, 0xC7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XC7);
    // 0x0040B784: beq         $v0, $zero, L_0040B7E8
    if (ctx->r2 == 0) {
        // 0x0040B788: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_0040B7E8;
    }
    // 0x0040B788: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0040B78C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0040B790: lw          $s2, 0x1D0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1D0);
    // 0x0040B794: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x0040B798: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x0040B79C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040B7A0: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040B7A4:
    // 0x0040B7A4: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040B7A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040B7AC: beql        $v0, $zero, L_0040B7CC
    if (ctx->r2 == 0) {
        // 0x0040B7B0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040B7CC;
    }
    goto skip_0;
    // 0x0040B7B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040B7B4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040B7B8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040B7BC: addiu       $a1, $a1, 0x1EE4
    ctx->r5 = ADD32(ctx->r5, 0X1EE4);
    // 0x0040B7C0: jal         0x00236314
    // 0x0040B7C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040B7C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040B7C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040B7CC:
    // 0x0040B7CC: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040B7D0: bne         $v0, $zero, L_0040B7A4
    if (ctx->r2 != 0) {
        // 0x0040B7D4: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040B7A4;
    }
    // 0x0040B7D4: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040B7D8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040B7DC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040B7E0: jal         0x00243414
    // 0x0040B7E4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040B7E4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_1:
L_0040B7E8:
    // 0x0040B7E8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040B7EC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040B7F0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040B7F4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040B7F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040B7FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040B800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040B804: jr          $ra
    // 0x0040B808: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040B808: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029FE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029FE6C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_0020F260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F260: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0020F264: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0020F268: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0020F26C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0020F270: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0020F274: lwc1        $f12, 0x4($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020F278: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x0020F27C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0020F280: lwc1        $f1, 0x4($a3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r7, 0X4);
    // 0x0020F284: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020F288: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F28C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x0020F290: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x0020F294: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020F298: lwc1        $f3, 0x8($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020F29C: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x0020F2A0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F2A4: lwc1        $f1, 0x8($a3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r7, 0X8);
    // 0x0020F2A8: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0020F2AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F2B0: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0020F2B4: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0020F2B8: swc1        $f3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020F2BC: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0020F2C0: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0020F2C4: lwc1        $f1, 0x4($a3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r7, 0X4);
    // 0x0020F2C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F2CC: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020F2D0: lwc1        $f1, 0x0($a3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r7, 0X0);
    // 0x0020F2D4: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020F2D8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020F2DC: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F2E0: add.s       $f12, $f12, $f3
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f3.fl;
    // 0x0020F2E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0020F2E8: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020F2EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0020F2F0: jal         0x00298470
    // 0x0020F2F4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F2F4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x0020F2F8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020F2FC: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x0020F300: c.eq.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl == ctx->f1.fl;
    // 0x0020F304: nop

    // 0x0020F308: bc1t        L_0020F340
    if (c1cs) {
        // 0x0020F30C: nop
    
            goto L_0020F340;
    }
    // 0x0020F30C: nop

    // 0x0020F310: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020F314: lwc1        $f2, 0x55D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X55D4);
    // 0x0020F318: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020F31C: div.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0020F320: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020F324: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020F328: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020F32C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020F330: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F334: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020F338: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F33C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0020F340:
    // 0x0020F340: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020F344: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020F348: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0020F34C: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020F350: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0020F354: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F358: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0020F35C: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020F360: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F364: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0020F368: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F36C: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x0020F370: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x0020F374: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F378: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020F37C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0020F380: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F384: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020F388: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0020F38C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0020F390: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0020F394: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0020F398: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x0020F39C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0020F3A0: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x0020F3A4: sw          $t1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r9;
    // 0x0020F3A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0020F3AC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0020F3B0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0020F3B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0020F3B8: jr          $ra
    // 0x0020F3BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0020F3BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00403F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403F3C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00403F40: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00403F44: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00403F48: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00403F4C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00403F50: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00403F54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00403F58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00403F5C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00403F60: jal         0x0025AD90
    // 0x00403F64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0025AD90(rdram, ctx);
        goto after_0;
    // 0x00403F64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00403F68: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x00403F6C: beq         $v0, $zero, L_00403F8C
    if (ctx->r2 == 0) {
        // 0x00403F70: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00403F8C;
    }
    // 0x00403F70: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00403F74: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00403F78: beq         $v0, $zero, L_00403F8C
    if (ctx->r2 == 0) {
        // 0x00403F7C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00403F8C;
    }
    // 0x00403F7C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00403F80: jalr        $v0
    // 0x00403F84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00403F84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00403F88: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00403F8C:
    // 0x00403F8C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00403F90: addiu       $s0, $s0, -0x9D4
    ctx->r16 = ADD32(ctx->r16, -0X9D4);
L_00403F94:
    // 0x00403F94: jal         0x00235510
    // 0x00403F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00235510(rdram, ctx);
        goto after_2;
    // 0x00403F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00403F9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00403FA0: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00403FA4: bne         $v0, $zero, L_00403F94
    if (ctx->r2 != 0) {
        // 0x00403FA8: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00403F94;
    }
    // 0x00403FA8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    // 0x00403FAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00403FB0: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00403FB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00403FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00403FBC: bne         $v0, $a1, L_00403FDC
    if (ctx->r2 != ctx->r5) {
        // 0x00403FC0: nop
    
            goto L_00403FDC;
    }
    // 0x00403FC0: nop

    // 0x00403FC4: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x00403FC8: swc1        $f0, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f0.u32l;
    // 0x00403FCC: lwc1        $f0, 0x68($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X68);
    // 0x00403FD0: swc1        $f0, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f0.u32l;
    // 0x00403FD4: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x00403FD8: swc1        $f0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f0.u32l;
L_00403FDC:
    // 0x00403FDC: lwc1        $f1, -0x70($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, -0X70);
    // 0x00403FE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00403FE4: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00403FE8: nop

    // 0x00403FEC: bc1f        L_00404004
    if (!c1cs) {
        // 0x00403FF0: nop
    
            goto L_00404004;
    }
    // 0x00403FF0: nop

    // 0x00403FF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00403FF8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00403FFC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00404000: swc1        $f0, -0x70($a0)
    MEM_W(-0X70, ctx->r4) = ctx->f0.u32l;
L_00404004:
    // 0x00404004: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x00404008: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0040400C: nop

    // 0x00404010: bc1f        L_00404028
    if (!c1cs) {
        // 0x00404014: nop
    
            goto L_00404028;
    }
    // 0x00404014: nop

    // 0x00404018: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040401C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00404020: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00404024: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_00404028:
    // 0x00404028: lwc1        $f1, 0x30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0040402C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00404030: nop

    // 0x00404034: bc1f        L_0040404C
    if (!c1cs) {
        // 0x00404038: nop
    
            goto L_0040404C;
    }
    // 0x00404038: nop

    // 0x0040403C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00404040: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00404044: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00404048: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
L_0040404C:
    // 0x0040404C: lwc1        $f1, 0x44($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X44);
    // 0x00404050: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00404054: nop

    // 0x00404058: bc1f        L_00404070
    if (!c1cs) {
        // 0x0040405C: nop
    
            goto L_00404070;
    }
    // 0x0040405C: nop

    // 0x00404060: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00404064: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00404068: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0040406C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_00404070:
    // 0x00404070: lwc1        $f1, -0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, -0X7C);
    // 0x00404074: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00404078: nop

    // 0x0040407C: bc1f        L_00404094
    if (!c1cs) {
        // 0x00404080: nop
    
            goto L_00404094;
    }
    // 0x00404080: nop

    // 0x00404084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00404088: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040408C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00404090: swc1        $f0, -0x7C($a0)
    MEM_W(-0X7C, ctx->r4) = ctx->f0.u32l;
L_00404094:
    // 0x00404094: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x00404098: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0040409C: nop

    // 0x004040A0: bc1f        L_004040B8
    if (!c1cs) {
        // 0x004040A4: nop
    
            goto L_004040B8;
    }
    // 0x004040A4: nop

    // 0x004040A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004040AC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004040B0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004040B4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
L_004040B8:
    // 0x004040B8: lwc1        $f1, -0x6C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, -0X6C);
    // 0x004040BC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x004040C0: nop

    // 0x004040C4: bc1f        L_004040DC
    if (!c1cs) {
        // 0x004040C8: nop
    
            goto L_004040DC;
    }
    // 0x004040C8: nop

    // 0x004040CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004040D0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004040D4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004040D8: swc1        $f0, -0x6C($a0)
    MEM_W(-0X6C, ctx->r4) = ctx->f0.u32l;
L_004040DC:
    // 0x004040DC: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x004040E0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x004040E4: nop

    // 0x004040E8: bc1f        L_00404100
    if (!c1cs) {
        // 0x004040EC: nop
    
            goto L_00404100;
    }
    // 0x004040EC: nop

    // 0x004040F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004040F4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004040F8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004040FC: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_00404100:
    // 0x00404100: lw          $v1, -0x3D0($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X3D0);
    // 0x00404104: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404108: bne         $v1, $v0, L_0040417C
    if (ctx->r3 != ctx->r2) {
        // 0x0040410C: ori         $v0, $zero, 0x95FF
        ctx->r2 = 0 | 0X95FF;
            goto L_0040417C;
    }
    // 0x0040410C: ori         $v0, $zero, 0x95FF
    ctx->r2 = 0 | 0X95FF;
    // 0x00404110: lw          $v1, -0x4C($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X4C);
    // 0x00404114: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00404118: bne         $v0, $zero, L_0040412C
    if (ctx->r2 != 0) {
        // 0x0040411C: nop
    
            goto L_0040412C;
    }
    // 0x0040411C: nop

    // 0x00404120: lw          $v0, -0x3B4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X3B4);
    // 0x00404124: beql        $v0, $zero, L_0040412C
    if (ctx->r2 == 0) {
        // 0x00404128: sw          $a1, -0x3B4($a0)
        MEM_W(-0X3B4, ctx->r4) = ctx->r5;
            goto L_0040412C;
    }
    goto skip_0;
    // 0x00404128: sw          $a1, -0x3B4($a0)
    MEM_W(-0X3B4, ctx->r4) = ctx->r5;
    skip_0:
L_0040412C:
    // 0x0040412C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404130: addiu       $a0, $a0, -0x674
    ctx->r4 = ADD32(ctx->r4, -0X674);
    // 0x00404134: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00404138: slti        $v0, $v0, 0x6400
    ctx->r2 = SIGNED(ctx->r2) < 0X6400 ? 1 : 0;
    // 0x0040413C: beq         $v0, $zero, L_0040415C
    if (ctx->r2 == 0) {
        // 0x00404140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0040415C;
    }
    // 0x00404140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404144: lw          $v1, -0x368($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X368);
    // 0x00404148: bne         $v1, $v0, L_0040415C
    if (ctx->r3 != ctx->r2) {
        // 0x0040414C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040415C;
    }
    // 0x0040414C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00404150: sw          $v0, -0x368($a0)
    MEM_W(-0X368, ctx->r4) = ctx->r2;
    // 0x00404154: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404158: addiu       $a0, $a0, -0x674
    ctx->r4 = ADD32(ctx->r4, -0X674);
L_0040415C:
    // 0x0040415C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00404160: slti        $v0, $v0, 0x3200
    ctx->r2 = SIGNED(ctx->r2) < 0X3200 ? 1 : 0;
    // 0x00404164: beq         $v0, $zero, L_0040417C
    if (ctx->r2 == 0) {
        // 0x00404168: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040417C;
    }
    // 0x00404168: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0040416C: lw          $v1, -0x368($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X368);
    // 0x00404170: bne         $v1, $v0, L_0040417C
    if (ctx->r3 != ctx->r2) {
        // 0x00404174: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0040417C;
    }
    // 0x00404174: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404178: sw          $v0, -0x368($a0)
    MEM_W(-0X368, ctx->r4) = ctx->r2;
L_0040417C:
    // 0x0040417C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404180: addiu       $v0, $v0, -0x60C
    ctx->r2 = ADD32(ctx->r2, -0X60C);
    // 0x00404184: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00404188: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0040418C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00404190: nop

    // 0x00404194: bc1f        L_00404380
    if (!c1cs) {
        // 0x00404198: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00404380;
    }
    // 0x00404198: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040419C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004041A0: lwc1        $f0, 0x398($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X398);
    // 0x004041A4: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x004041A8: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x004041AC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004041B0: lw          $v1, -0x3EC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3EC);
    // 0x004041B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004041B8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x004041BC: addiu       $a0, $a0, 0x1CD4
    ctx->r4 = ADD32(ctx->r4, 0X1CD4);
    // 0x004041C0: bne         $v1, $v0, L_004041D0
    if (ctx->r3 != ctx->r2) {
        // 0x004041C4: nop
    
            goto L_004041D0;
    }
    // 0x004041C4: nop

    // 0x004041C8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x004041CC: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
L_004041D0:
    // 0x004041D0: jal         0x0026D518
    // 0x004041D4: nop

    func_0026D518(rdram, ctx);
        goto after_3;
    // 0x004041D4: nop

    after_3:
    // 0x004041D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004041DC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004041E0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x004041E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004041E8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x004041EC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x004041F0: jal         0x00406FE4
    // 0x004041F4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_4;
    // 0x004041F4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_4:
    // 0x004041F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004041FC: lwc1        $f0, 0x39C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X39C);
    // 0x00404200: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404204: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404208: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0040420C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00404210: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00404214: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x00404218: addiu       $a0, $a0, 0x1CD4
    ctx->r4 = ADD32(ctx->r4, 0X1CD4);
    // 0x0040421C: bne         $v1, $v0, L_0040422C
    if (ctx->r3 != ctx->r2) {
        // 0x00404220: swc1        $f0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
            goto L_0040422C;
    }
    // 0x00404220: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00404224: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x00404228: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
L_0040422C:
    // 0x0040422C: jal         0x0026D518
    // 0x00404230: nop

    func_0026D518(rdram, ctx);
        goto after_5;
    // 0x00404230: nop

    after_5:
    // 0x00404234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00404238: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040423C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00404240: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00404244: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00404248: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0040424C: jal         0x00406FE4
    // 0x00404250: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_6;
    // 0x00404250: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_6:
    // 0x00404254: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404258: lwc1        $f0, 0x3A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A0);
    // 0x0040425C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404260: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x00404264: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404268: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0040426C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00404270: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x00404274: addiu       $a0, $a0, 0x1D0C
    ctx->r4 = ADD32(ctx->r4, 0X1D0C);
    // 0x00404278: bne         $v1, $v0, L_00404288
    if (ctx->r3 != ctx->r2) {
        // 0x0040427C: swc1        $f0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
            goto L_00404288;
    }
    // 0x0040427C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00404280: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x00404284: addiu       $a0, $a0, 0x1D14
    ctx->r4 = ADD32(ctx->r4, 0X1D14);
L_00404288:
    // 0x00404288: jal         0x0026D518
    // 0x0040428C: nop

    func_0026D518(rdram, ctx);
        goto after_7;
    // 0x0040428C: nop

    after_7:
    // 0x00404290: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00404294: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00404298: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0040429C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004042A0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x004042A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x004042A8: jal         0x00406FE4
    // 0x004042AC: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_8;
    // 0x004042AC: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_8:
    // 0x004042B0: lui         $s0, 0x43
    ctx->r16 = S32(0X43 << 16);
    // 0x004042B4: addiu       $s0, $s0, 0x1CD4
    ctx->r16 = ADD32(ctx->r16, 0X1CD4);
    // 0x004042B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004042BC: lwc1        $f20, 0x3A4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X3A4);
    // 0x004042C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004042C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x004042C8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x004042CC: jal         0x0026D518
    // 0x004042D0: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    func_0026D518(rdram, ctx);
        goto after_9;
    // 0x004042D0: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x004042D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004042D8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x004042DC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004042E0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004042E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x004042E8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x004042EC: jal         0x00406FE4
    // 0x004042F0: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_10;
    // 0x004042F0: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_10:
    // 0x004042F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004042F8: lwc1        $f0, 0x3A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A8);
    // 0x004042FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00404300: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00404304: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00404308: jal         0x0026D518
    // 0x0040430C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0026D518(rdram, ctx);
        goto after_11;
    // 0x0040430C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x00404310: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00404314: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00404318: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040431C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00404320: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00404324: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x00404328: jal         0x00406FE4
    // 0x0040432C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_12;
    // 0x0040432C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_12:
    // 0x00404330: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404334: lwc1        $f0, 0x3AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3AC);
    // 0x00404338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040433C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00404340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00404344: jal         0x0026D518
    // 0x00404348: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_0026D518(rdram, ctx);
        goto after_13;
    // 0x00404348: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x0040434C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00404350: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00404354: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00404358: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0040435C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00404360: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x00404364: jal         0x00406FE4
    // 0x00404368: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_14;
    // 0x00404368: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_14:
    // 0x0040436C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404370: lwc1        $f0, 0x3B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3B0);
    // 0x00404374: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00404378: swc1        $f0, -0x60C($at)
    MEM_W(-0X60C, ctx->r1) = ctx->f0.u32l;
    // 0x0040437C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00404380:
    // 0x00404380: jal         0x00404450
    // 0x00404384: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00404450(rdram, ctx);
        goto after_15;
    // 0x00404384: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_15:
    // 0x00404388: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0040438C: jal         0x0040457C
    // 0x00404390: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0040457C(rdram, ctx);
        goto after_16;
    // 0x00404390: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_16:
    // 0x00404394: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404398: addiu       $s0, $s0, -0x9F4
    ctx->r16 = ADD32(ctx->r16, -0X9F4);
    // 0x0040439C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004043A0: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x004043A4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x004043A8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x004043AC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x004043B0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x004043B4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x004043B8: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x004043BC: bne         $v0, $zero, L_004043C8
    if (ctx->r2 != 0) {
        // 0x004043C0: nop
    
            goto L_004043C8;
    }
    // 0x004043C0: nop

    // 0x004043C4: break       7
    do_break(4211652);
L_004043C8:
    // 0x004043C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x004043CC: bne         $v0, $at, L_004043E0
    if (ctx->r2 != ctx->r1) {
        // 0x004043D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_004043E0;
    }
    // 0x004043D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x004043D4: bne         $a1, $at, L_004043E0
    if (ctx->r5 != ctx->r1) {
        // 0x004043D8: nop
    
            goto L_004043E0;
    }
    // 0x004043D8: nop

    // 0x004043DC: break       6
    do_break(4211676);
L_004043E0:
    // 0x004043E0: mflo        $a1
    ctx->r5 = lo;
    // 0x004043E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004043E8: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x004043EC: jal         0x0027AD88
    // 0x004043F0: nop

    func_0027AD88(rdram, ctx);
        goto after_17;
    // 0x004043F0: nop

    after_17:
    // 0x004043F4: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x004043F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004043FC: lwc1        $f0, 0x3B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3B4);
    // 0x00404400: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00404404: nop

    // 0x00404408: bc1f        L_00404430
    if (!c1cs) {
        // 0x0040440C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00404430;
    }
    // 0x0040440C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00404410: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00404414: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x00404418: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0040441C: sw          $v0, 0x3D0($s0)
    MEM_W(0X3D0, ctx->r16) = ctx->r2;
    // 0x00404420: sw          $zero, 0x424($s0)
    MEM_W(0X424, ctx->r16) = 0;
    // 0x00404424: sw          $zero, 0x428($s0)
    MEM_W(0X428, ctx->r16) = 0;
    // 0x00404428: jal         0x00243414
    // 0x0040442C: sw          $zero, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = 0;
    func_00243414(rdram, ctx);
        goto after_18;
    // 0x0040442C: sw          $zero, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = 0;
    after_18:
L_00404430:
    // 0x00404430: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00404434: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00404438: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0040443C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00404440: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00404444: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00404448: jr          $ra
    // 0x0040444C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0040444C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00275B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275B34: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x00275B38: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275B3C: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275B40: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275B44: jal         0x00271A10
    // 0x00275B48: nop

    func_00271A10(rdram, ctx);
        goto after_0;
    // 0x00275B48: nop

    after_0:
    // 0x00275B4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275B50: jr          $ra
    // 0x00275B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004639A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004639A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004639A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004639A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004639AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004639B0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004639B4: addiu       $a1, $a1, -0x4F30
    ctx->r5 = ADD32(ctx->r5, -0X4F30);
    // 0x004639B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_004639BC:
    // 0x004639BC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004639C0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004639C4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x004639C8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x004639CC: lbu         $v0, 0xD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XD);
    // 0x004639D0: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x004639D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x004639D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004639DC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004639E0: sb          $v0, -0x4F2C($at)
    MEM_B(-0X4F2C, ctx->r1) = ctx->r2;
    // 0x004639E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004639E8: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004639EC: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x004639F0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x004639F4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x004639F8: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x004639FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00463A00: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00463A04: sb          $v0, -0x4F24($at)
    MEM_B(-0X4F24, ctx->r1) = ctx->r2;
    // 0x00463A08: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463A0C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463A10: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00463A14: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00463A18: lbu         $v0, 0x11($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X11);
    // 0x00463A1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00463A20: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00463A24: sb          $v0, -0x4F20($at)
    MEM_B(-0X4F20, ctx->r1) = ctx->r2;
    // 0x00463A28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00463A2C: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x00463A30: bne         $v0, $zero, L_004639BC
    if (ctx->r2 != 0) {
        // 0x00463A34: nop
    
            goto L_004639BC;
    }
    // 0x00463A34: nop

    // 0x00463A38: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463A3C: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463A40: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00463A44: lb          $v0, 0x11($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X11);
    // 0x00463A48: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00463A4C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00463A50: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x00463A54: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463A58: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463A5C: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00463A60: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00463A64: lb          $v0, 0x12($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X12);
    // 0x00463A68: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00463A6C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00463A70: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00463A74: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463A78: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463A7C: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00463A80: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00463A84: lb          $v0, 0x13($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X13);
    // 0x00463A88: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00463A8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00463A90: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00463A94: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00463A98: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x00463A9C: jal         0x00298470
    // 0x00463AA0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00463AA0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00463AA4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00463AA8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00463AAC: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x00463AB0: nop

    // 0x00463AB4: bc1t        L_00463B1C
    if (c1cs) {
        // 0x00463AB8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00463B1C;
    }
    // 0x00463AB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00463ABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00463AC0: lwc1        $f0, 0x5EB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5EB0);
    // 0x00463AC4: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00463AC8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00463ACC: jal         0x0020EF60
    // 0x00463AD0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x00463AD0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x00463AD4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00463AD8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00463ADC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00463AE0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463AE4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463AE8: sh          $v0, -0x71AC($at)
    MEM_H(-0X71AC, ctx->r1) = ctx->r2;
    // 0x00463AEC: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00463AF0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00463AF4: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00463AF8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463AFC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463B00: sh          $v0, -0x71AA($at)
    MEM_H(-0X71AA, ctx->r1) = ctx->r2;
    // 0x00463B04: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00463B08: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00463B0C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00463B10: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463B14: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00463B18: sh          $v0, -0x71A8($at)
    MEM_H(-0X71A8, ctx->r1) = ctx->r2;
L_00463B1C:
    // 0x00463B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00463B20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00463B24: jr          $ra
    // 0x00463B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00463B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025A0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A0F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A0F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A0FC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A100: lhu         $a3, 0x7A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7A);
    // 0x0025A104: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A108: addiu       $a2, $a2, -0x5B0
    ctx->r6 = ADD32(ctx->r6, -0X5B0);
    // 0x0025A10C: jal         0x00245A98
    // 0x0025A110: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A110: nop

    after_0:
    // 0x0025A114: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A118: jr          $ra
    // 0x0025A11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004199AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004199AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004199B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004199B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004199B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004199BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004199C0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004199C4: addiu       $s0, $s0, -0x5510
    ctx->r16 = ADD32(ctx->r16, -0X5510);
    // 0x004199C8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004199CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004199D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004199D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004199D8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x004199DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004199E0: jal         0x0041648C
    // 0x004199E4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004199E4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004199E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x004199EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004199F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004199F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004199F8: jr          $ra
    // 0x004199FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004199FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00225DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225DB0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00225DB4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00225DB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00225DBC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00225DC0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00225DC4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x00225DC8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00225DCC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00225DD0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00225DD4: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x00225DD8: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00225DDC: lw          $v0, 0x88($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X88);
    // 0x00225DE0: lwc1        $f21, 0x60($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x00225DE4: lwc1        $f20, 0x64($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00225DE8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00225DEC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00225DF0: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x00225DF4: jal         0x00266D8C
    // 0x00225DF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00225DF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00225DFC: beq         $v0, $zero, L_00225E68
    if (ctx->r2 == 0) {
        // 0x00225E00: nop
    
            goto L_00225E68;
    }
    // 0x00225E00: nop

    // 0x00225E04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00225E08: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x00225E0C: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00225E10: bne         $v0, $zero, L_00225E68
    if (ctx->r2 != 0) {
        // 0x00225E14: nop
    
            goto L_00225E68;
    }
    // 0x00225E14: nop

L_00225E18:
    // 0x00225E18: lw          $v1, 0x8C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8C);
    // 0x00225E1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00225E20: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00225E24: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x00225E28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00225E2C: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00225E30: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x00225E34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00225E38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00225E3C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x00225E40: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00225E44: mflo        $t0
    ctx->r8 = lo;
    // 0x00225E48: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x00225E4C: jal         0x0026EBDC
    // 0x00225E50: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    func_0026EBDC(rdram, ctx);
        goto after_1;
    // 0x00225E50: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    after_1:
    // 0x00225E54: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x00225E58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00225E5C: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00225E60: beq         $v0, $zero, L_00225E18
    if (ctx->r2 == 0) {
        // 0x00225E64: nop
    
            goto L_00225E18;
    }
    // 0x00225E64: nop

L_00225E68:
    // 0x00225E68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00225E6C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00225E70: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00225E74: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00225E78: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00225E7C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00225E80: jr          $ra
    // 0x00225E84: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00225E84: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0041B9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B9B0: addiu       $v0, $v0, 0x5AD8
    ctx->r2 = ADD32(ctx->r2, 0X5AD8);
    // 0x0041B9B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B9B8: jr          $ra
    // 0x0041B9BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B9BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042C3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C3BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C3C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042C3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042C3C8: jal         0x0042C418
    // 0x0042C3CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0042C418(rdram, ctx);
        goto after_0;
    // 0x0042C3CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0042C3D0: jal         0x0042C46C
    // 0x0042C3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042C46C(rdram, ctx);
        goto after_1;
    // 0x0042C3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042C3D8: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x0042C3DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C3E0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042C3E4: sw          $zero, -0x7020($at)
    MEM_W(-0X7020, ctx->r1) = 0;
    // 0x0042C3E8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C3EC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042C3F0: sw          $v0, -0x701C($at)
    MEM_W(-0X701C, ctx->r1) = ctx->r2;
    // 0x0042C3F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042C3F8: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0042C3FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C400: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042C404: sw          $v0, -0x7018($at)
    MEM_W(-0X7018, ctx->r1) = ctx->r2;
    // 0x0042C408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042C40C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C410: jr          $ra
    // turok2: restored delay slot: a stray ELF symbol at 0x0042C414 sits on this
    // jump's delay slot, so the recompiler stopped at the jump and
    // dropped the instruction. On the hardware it runs before the
    // jump takes effect.
    // 0x0042C414: addiu $r29, $r29, 0X18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
;}
RECOMP_FUNC void func_0026CB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CB2C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0026CB30: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0026CB34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026CB38: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0026CB3C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026CB40: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0026CB44: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0026CB48: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0026CB4C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0026CB50: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026CB54: jal         0x0020EEF8
    // 0x0026CB58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020EEF8(rdram, ctx);
        goto after_0;
    // 0x0026CB58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0026CB5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026CB60: lwc1        $f20, -0x7FF0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X7FF0);
    // 0x0026CB64: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026CB68: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0026CB6C: jal         0x0020EF60
    // 0x0026CB70: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x0026CB70: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x0026CB74: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x0026CB78: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026CB7C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x0026CB80: jal         0x0020EEF8
    // 0x0026CB84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x0026CB84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0026CB88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026CB8C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0026CB90: jal         0x0020EF60
    // 0x0026CB94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0026CB94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0026CB98: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026CB9C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026CBA0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0026CBA4: jal         0x0020EEF8
    // 0x0026CBA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_4;
    // 0x0026CBA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0026CBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026CBB0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0026CBB4: jal         0x0020EF60
    // 0x0026CBB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0026CBB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0026CBBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026CBC0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0026CBC4: jal         0x0020EEF8
    // 0x0026CBC8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_6;
    // 0x0026CBC8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0026CBCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026CBD0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026CBD4: jal         0x0020EEF8
    // 0x0026CBD8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x0026CBD8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0026CBDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026CBE0: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0026CBE4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0026CBE8: jal         0x0020EF60
    // 0x0026CBEC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x0026CBEC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_8:
    // 0x0026CBF0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0026CBF4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0026CBF8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0026CBFC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0026CC00: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0026CC04: jr          $ra
    // 0x0026CC08: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0026CC08: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00266524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266528: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026652C: jal         0x00243414
    // 0x00266530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00266530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00266534: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00266538: jr          $ra
    // 0x0026653C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026653C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423178: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042317C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00423180: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00423184: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00423188: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0042318C: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x00423190: jal         0x00284174
    // 0x00423194: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00423194: nop

    after_0:
    // 0x00423198: beq         $v0, $zero, L_004231B4
    if (ctx->r2 == 0) {
        // 0x0042319C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004231B4;
    }
    // 0x0042319C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004231A0: jal         0x00284240
    // 0x004231A4: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x004231A4: nop

    after_1:
    // 0x004231A8: beq         $v0, $zero, L_004231B4
    if (ctx->r2 == 0) {
        // 0x004231AC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_004231B4;
    }
    // 0x004231AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004231B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004231B4:
    // 0x004231B4: bne         $v1, $zero, L_004231FC
    if (ctx->r3 != 0) {
        // 0x004231B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004231FC;
    }
    // 0x004231B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004231BC: bne         $s1, $zero, L_004231CC
    if (ctx->r17 != 0) {
        // 0x004231C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004231CC;
    }
    // 0x004231C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004231C4: j           L_004231FC
    // 0x004231C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_004231FC;
    // 0x004231C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004231CC:
    // 0x004231CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004231D0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004231D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004231D8: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004231DC: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004231E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004231E4: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x004231E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004231EC: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
    // 0x004231F0: jal         0x00416644
    // 0x004231F4: nop

    func_00416644(rdram, ctx);
        goto after_2;
    // 0x004231F4: nop

    after_2:
    // 0x004231F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004231FC:
    // 0x004231FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00423200: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00423204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423208: jr          $ra
    // 0x0042320C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042320C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0027EA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027EA88: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0027EA8C: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0027EA90: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x0027EA94: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x0027EA98: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x0027EA9C: sdc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X30, ctx->r29);
    // 0x0027EAA0: mtc1        $a3, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r7;
    // 0x0027EAA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027EAA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027EAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0027EAB0: sdc1        $f25, 0x40($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X40, ctx->r29);
    // 0x0027EAB4: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x0027EAB8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0027EABC: lwc1        $f20, 0x288($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0027EAC0: lwc1        $f25, 0x58($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x0027EAC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EAC8: lwc1        $f24, -0x65E4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X65E4);
    // 0x0027EACC: jal         0x0028D0E0
    // 0x0027EAD0: nop

    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x0027EAD0: nop

    after_0:
    // 0x0027EAD4: bnel        $v0, $zero, L_0027EADC
    if (ctx->r2 != 0) {
        // 0x0027EAD8: mov.s       $f20, $f21
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
            goto L_0027EADC;
    }
    goto skip_0;
    // 0x0027EAD8: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    skip_0:
L_0027EADC:
    // 0x0027EADC: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
    // 0x0027EAE0: nop

    // 0x0027EAE4: bc1f        L_0027EB0C
    if (!c1cs) {
        // 0x0027EAE8: nop
    
            goto L_0027EB0C;
    }
    // 0x0027EAE8: nop

    // 0x0027EAEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EAF0: lwc1        $f0, -0x65E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65E0);
    // 0x0027EAF4: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x0027EAF8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EAFC: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EB00: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x0027EB04: j           L_0027EB34
    // 0x0027EB08: nop

        goto L_0027EB34;
    // 0x0027EB08: nop

L_0027EB0C:
    // 0x0027EB0C: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x0027EB10: nop

    // 0x0027EB14: bc1f        L_0027EB40
    if (!c1cs) {
        // 0x0027EB18: nop
    
            goto L_0027EB40;
    }
    // 0x0027EB18: nop

    // 0x0027EB1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EB20: lwc1        $f0, -0x65DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65DC);
    // 0x0027EB24: sub.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x0027EB28: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EB2C: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EB30: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
L_0027EB34:
    // 0x0027EB34: nop

    // 0x0027EB38: bc1tl       L_0027EB40
    if (c1cs) {
        // 0x0027EB3C: mov.s       $f20, $f21
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
            goto L_0027EB40;
    }
    goto skip_1;
    // 0x0027EB3C: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    skip_1:
L_0027EB40:
    // 0x0027EB40: lwc1        $f21, 0x28C($s0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x0027EB44: swc1        $f20, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f20.u32l;
    // 0x0027EB48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EB4C: lwc1        $f20, -0x65D8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X65D8);
    // 0x0027EB50: jal         0x0028D0E0
    // 0x0027EB54: nop

    func_0028D0E0(rdram, ctx);
        goto after_1;
    // 0x0027EB54: nop

    after_1:
    // 0x0027EB58: bnel        $v0, $zero, L_0027EB60
    if (ctx->r2 != 0) {
        // 0x0027EB5C: mov.s       $f21, $f22
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
            goto L_0027EB60;
    }
    goto skip_2;
    // 0x0027EB5C: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
    skip_2:
L_0027EB60:
    // 0x0027EB60: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x0027EB64: nop

    // 0x0027EB68: bc1f        L_0027EB90
    if (!c1cs) {
        // 0x0027EB6C: nop
    
            goto L_0027EB90;
    }
    // 0x0027EB6C: nop

    // 0x0027EB70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EB74: lwc1        $f0, -0x65D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65D4);
    // 0x0027EB78: add.s       $f21, $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f20.fl;
    // 0x0027EB7C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EB80: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EB84: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x0027EB88: j           L_0027EBB8
    // 0x0027EB8C: nop

        goto L_0027EBB8;
    // 0x0027EB8C: nop

L_0027EB90:
    // 0x0027EB90: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x0027EB94: nop

    // 0x0027EB98: bc1f        L_0027EBC4
    if (!c1cs) {
        // 0x0027EB9C: nop
    
            goto L_0027EBC4;
    }
    // 0x0027EB9C: nop

    // 0x0027EBA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EBA4: lwc1        $f0, -0x65D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65D0);
    // 0x0027EBA8: sub.s       $f21, $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f20.fl;
    // 0x0027EBAC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EBB0: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EBB4: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
L_0027EBB8:
    // 0x0027EBB8: nop

    // 0x0027EBBC: bc1tl       L_0027EBC4
    if (c1cs) {
        // 0x0027EBC0: mov.s       $f21, $f22
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
            goto L_0027EBC4;
    }
    goto skip_3;
    // 0x0027EBC0: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
    skip_3:
L_0027EBC4:
    // 0x0027EBC4: lwc1        $f22, 0x290($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X290);
    // 0x0027EBC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EBCC: lwc1        $f20, -0x65CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X65CC);
    // 0x0027EBD0: jal         0x0028D0E0
    // 0x0027EBD4: swc1        $f21, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    func_0028D0E0(rdram, ctx);
        goto after_2;
    // 0x0027EBD4: swc1        $f21, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    after_2:
    // 0x0027EBD8: bnel        $v0, $zero, L_0027EBE0
    if (ctx->r2 != 0) {
        // 0x0027EBDC: mov.s       $f22, $f23
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
            goto L_0027EBE0;
    }
    goto skip_4;
    // 0x0027EBDC: mov.s       $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
    skip_4:
L_0027EBE0:
    // 0x0027EBE0: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x0027EBE4: nop

    // 0x0027EBE8: bc1f        L_0027EC10
    if (!c1cs) {
        // 0x0027EBEC: nop
    
            goto L_0027EC10;
    }
    // 0x0027EBEC: nop

    // 0x0027EBF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EBF4: lwc1        $f0, -0x65C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65C8);
    // 0x0027EBF8: add.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x0027EBFC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EC00: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EC04: c.lt.s      $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f23.fl < ctx->f22.fl;
    // 0x0027EC08: j           L_0027EC38
    // 0x0027EC0C: nop

        goto L_0027EC38;
    // 0x0027EC0C: nop

L_0027EC10:
    // 0x0027EC10: c.lt.s      $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f23.fl < ctx->f22.fl;
    // 0x0027EC14: nop

    // 0x0027EC18: bc1f        L_0027EC44
    if (!c1cs) {
        // 0x0027EC1C: nop
    
            goto L_0027EC44;
    }
    // 0x0027EC1C: nop

    // 0x0027EC20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EC24: lwc1        $f0, -0x65C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65C4);
    // 0x0027EC28: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
    // 0x0027EC2C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EC30: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EC34: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
L_0027EC38:
    // 0x0027EC38: nop

    // 0x0027EC3C: bc1tl       L_0027EC44
    if (c1cs) {
        // 0x0027EC40: mov.s       $f22, $f23
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
            goto L_0027EC44;
    }
    goto skip_5;
    // 0x0027EC40: mov.s       $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
    skip_5:
L_0027EC44:
    // 0x0027EC44: lwc1        $f20, 0x294($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X294);
    // 0x0027EC48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EC4C: lwc1        $f21, -0x65C0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X65C0);
    // 0x0027EC50: jal         0x0028D0E0
    // 0x0027EC54: swc1        $f22, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f22.u32l;
    func_0028D0E0(rdram, ctx);
        goto after_3;
    // 0x0027EC54: swc1        $f22, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f22.u32l;
    after_3:
    // 0x0027EC58: bnel        $v0, $zero, L_0027EC60
    if (ctx->r2 != 0) {
        // 0x0027EC5C: mov.s       $f20, $f25
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    ctx->f20.fl = ctx->f25.fl;
            goto L_0027EC60;
    }
    goto skip_6;
    // 0x0027EC5C: mov.s       $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    ctx->f20.fl = ctx->f25.fl;
    skip_6:
L_0027EC60:
    // 0x0027EC60: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x0027EC64: nop

    // 0x0027EC68: bc1f        L_0027EC90
    if (!c1cs) {
        // 0x0027EC6C: nop
    
            goto L_0027EC90;
    }
    // 0x0027EC6C: nop

    // 0x0027EC70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EC74: lwc1        $f0, -0x65BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65BC);
    // 0x0027EC78: add.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f21.fl;
    // 0x0027EC7C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027EC80: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027EC84: c.lt.s      $f25, $f20
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f25.fl < ctx->f20.fl;
    // 0x0027EC88: j           L_0027ECB8
    // 0x0027EC8C: nop

        goto L_0027ECB8;
    // 0x0027EC8C: nop

L_0027EC90:
    // 0x0027EC90: c.lt.s      $f25, $f20
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f25.fl < ctx->f20.fl;
    // 0x0027EC94: nop

    // 0x0027EC98: bc1fl       L_0027ECC8
    if (!c1cs) {
        // 0x0027EC9C: swc1        $f20, 0x294($s0)
        MEM_W(0X294, ctx->r16) = ctx->f20.u32l;
            goto L_0027ECC8;
    }
    goto skip_7;
    // 0x0027EC9C: swc1        $f20, 0x294($s0)
    MEM_W(0X294, ctx->r16) = ctx->f20.u32l;
    skip_7:
    // 0x0027ECA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027ECA4: lwc1        $f0, -0x65B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65B8);
    // 0x0027ECA8: sub.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0027ECAC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027ECB0: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x0027ECB4: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
L_0027ECB8:
    // 0x0027ECB8: nop

    // 0x0027ECBC: bc1tl       L_0027ECC4
    if (c1cs) {
        // 0x0027ECC0: mov.s       $f20, $f25
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    ctx->f20.fl = ctx->f25.fl;
            goto L_0027ECC4;
    }
    goto skip_8;
    // 0x0027ECC0: mov.s       $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    ctx->f20.fl = ctx->f25.fl;
    skip_8:
L_0027ECC4:
    // 0x0027ECC4: swc1        $f20, 0x294($s0)
    MEM_W(0X294, ctx->r16) = ctx->f20.u32l;
L_0027ECC8:
    // 0x0027ECC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0027ECCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027ECD0: ldc1        $f25, 0x40($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X40);
    // 0x0027ECD4: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x0027ECD8: ldc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X30);
    // 0x0027ECDC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x0027ECE0: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0027ECE4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0027ECE8: jr          $ra
    // 0x0027ECEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0027ECEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00284CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00284CE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00284CE8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00284CEC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00284CF0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00284CF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00284CF8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00284CFC: addiu       $s1, $s1, 0x5EA8
    ctx->r17 = ADD32(ctx->r17, 0X5EA8);
    // 0x00284D00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284D04: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00284D08: addiu       $s0, $s0, 0x67B0
    ctx->r16 = ADD32(ctx->r16, 0X67B0);
    // 0x00284D0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00284D10: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x00284D14: addiu       $s3, $s3, 0x6788
    ctx->r19 = ADD32(ctx->r19, 0X6788);
    // 0x00284D18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_00284D1C:
    // 0x00284D1C: jal         0x00285A54
    // 0x00284D20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00285A54(rdram, ctx);
        goto after_0;
    // 0x00284D20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00284D24: beql        $v0, $zero, L_00284D6C
    if (ctx->r2 == 0) {
        // 0x00284D28: sw          $zero, 0x0($s3)
        MEM_W(0X0, ctx->r19) = 0;
            goto L_00284D6C;
    }
    goto skip_0;
    // 0x00284D28: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    skip_0:
    // 0x00284D2C: jal         0x00285980
    // 0x00284D30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00285980(rdram, ctx);
        goto after_1;
    // 0x00284D30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00284D34: beq         $v0, $zero, L_00284D58
    if (ctx->r2 == 0) {
        // 0x00284D38: nop
    
            goto L_00284D58;
    }
    // 0x00284D38: nop

    // 0x00284D3C: sw          $s4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r20;
    // 0x00284D40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00284D44: beql        $v0, $zero, L_00284D78
    if (ctx->r2 == 0) {
        // 0x00284D48: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00284D78;
    }
    goto skip_1;
    // 0x00284D48: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_1:
    // 0x00284D4C: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x00284D50: j           L_00284D74
    // 0x00284D54: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_00284D74;
    // 0x00284D54: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_00284D58:
    // 0x00284D58: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00284D5C: bnel        $v0, $zero, L_00284D74
    if (ctx->r2 != 0) {
        // 0x00284D60: sw          $s4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r20;
            goto L_00284D74;
    }
    goto skip_2;
    // 0x00284D60: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
    skip_2:
    // 0x00284D64: j           L_00284D78
    // 0x00284D68: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
        goto L_00284D78;
    // 0x00284D68: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00284D6C:
    // 0x00284D6C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00284D70: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_00284D74:
    // 0x00284D74: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00284D78:
    // 0x00284D78: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00284D7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00284D80: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00284D84: bne         $v0, $zero, L_00284D1C
    if (ctx->r2 != 0) {
        // 0x00284D88: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_00284D1C;
    }
    // 0x00284D88: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00284D8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00284D90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00284D94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00284D98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00284D9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00284DA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284DA4: jr          $ra
    // 0x00284DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00284DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026FEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026FEA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FEA4: lw          $v0, 0x2664($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2664);
    // 0x0026FEA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026FEAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0026FEB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0026FEB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0026FEB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0026FEBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0026FEC0: beq         $v0, $zero, L_0026FEF4
    if (ctx->r2 == 0) {
        // 0x0026FEC4: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0026FEF4;
    }
    // 0x0026FEC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0026FEC8:
    // 0x0026FEC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026FECC: addiu       $a0, $a0, 0x2778
    ctx->r4 = ADD32(ctx->r4, 0X2778);
    // 0x0026FED0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0026FED4: jal         0x0029B6F0
    // 0x0026FED8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0026FED8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0026FEDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FEE0: lw          $v0, 0x2664($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2664);
    // 0x0026FEE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0026FEE8: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x0026FEEC: bne         $v0, $zero, L_0026FEC8
    if (ctx->r2 != 0) {
        // 0x0026FEF0: nop
    
            goto L_0026FEC8;
    }
    // 0x0026FEF0: nop

L_0026FEF4:
    // 0x0026FEF4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026FEF8: addiu       $v0, $v0, 0x2794
    ctx->r2 = ADD32(ctx->r2, 0X2794);
    // 0x0026FEFC: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0026FF00: beq         $s0, $zero, L_0026FF6C
    if (ctx->r16 == 0) {
        // 0x0026FF04: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0026FF6C;
    }
    // 0x0026FF04: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_0026FF08:
    // 0x0026FF08: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026FF0C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0026FF10: lw          $v1, 0x2660($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2660);
    // 0x0026FF14: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x0026FF18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026FF1C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0026FF20: beql        $v0, $zero, L_0026FF64
    if (ctx->r2 == 0) {
        // 0x0026FF24: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0026FF64;
    }
    goto skip_0;
    // 0x0026FF24: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x0026FF28: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026FF2C: beql        $v0, $s0, L_0026FF34
    if (ctx->r2 == ctx->r16) {
        // 0x0026FF30: sw          $s1, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r17;
            goto L_0026FF34;
    }
    goto skip_1;
    // 0x0026FF30: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    skip_1:
L_0026FF34:
    // 0x0026FF34: jal         0x002933B0
    // 0x0026FF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x0026FF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0026FF3C: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0026FF40: beql        $a1, $zero, L_0026FF58
    if (ctx->r5 == 0) {
        // 0x0026FF44: sw          $s0, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r16;
            goto L_0026FF58;
    }
    goto skip_2;
    // 0x0026FF44: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    skip_2:
    // 0x0026FF48: jal         0x002933E0
    // 0x0026FF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x0026FF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0026FF50: j           L_0026FF64
    // 0x0026FF54: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
        goto L_0026FF64;
    // 0x0026FF54: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0026FF58:
    // 0x0026FF58: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0026FF5C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0026FF60: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0026FF64:
    // 0x0026FF64: bne         $s0, $zero, L_0026FF08
    if (ctx->r16 != 0) {
        // 0x0026FF68: nop
    
            goto L_0026FF08;
    }
    // 0x0026FF68: nop

L_0026FF6C:
    // 0x0026FF6C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FF70: lw          $v0, 0x2660($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2660);
    // 0x0026FF74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0026FF78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0026FF7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0026FF80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0026FF84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026FF88: sw          $zero, 0x2664($at)
    MEM_W(0X2664, ctx->r1) = 0;
    // 0x0026FF8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026FF90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026FF94: sw          $v0, 0x2660($at)
    MEM_W(0X2660, ctx->r1) = ctx->r2;
    // 0x0026FF98: jr          $ra
    // 0x0026FF9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026FF9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002604E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002604E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002604EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002604F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002604F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002604F8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002604FC: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x00260500: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00260504: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00260508: bne         $v0, $zero, L_00260544
    if (ctx->r2 != 0) {
        // 0x0026050C: nop
    
            goto L_00260544;
    }
    // 0x0026050C: nop

    // 0x00260510: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00260514: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00260518: bne         $v0, $zero, L_00260538
    if (ctx->r2 != 0) {
        // 0x0026051C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00260538;
    }
    // 0x0026051C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00260520: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00260524: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00260528: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026052C: jal         0x00220260
    // 0x00260530: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x00260530: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00260534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00260538:
    // 0x00260538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0026053C: jal         0x0026E110
    // 0x00260540: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x00260540: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_1:
L_00260544:
    // 0x00260544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00260548: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026054C: jr          $ra
    // 0x00260550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00260550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004228B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004228B0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004228B4: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x004228B8: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x004228BC: beq         $v0, $zero, L_004228D8
    if (ctx->r2 == 0) {
        // 0x004228C0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004228D8;
    }
    // 0x004228C0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004228C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004228C8: addu        $at, $at, $v0
    gpr jr_addend_004228D0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004228CC: lw          $v0, 0x14F0($at)
    ctx->r2 = ADD32(ctx->r1, 0X14F0);
    // 0x004228D0: jr          $v0
    // 0x004228D4: nop

    switch (jr_addend_004228D0 >> 2) {
        case 0: goto L_004228D8; break;
        case 1: goto L_004228E8; break;
        case 2: goto L_004228F8; break;
        case 3: goto L_00422908; break;
        case 4: goto L_00422918; break;
        case 5: goto L_00422928; break;
        case 6: goto L_00422938; break;
        case 7: goto L_00422948; break;
        case 8: goto L_00422958; break;
        case 9: goto L_00422968; break;
        case 10: goto L_00422978; break;
        case 11: goto L_00422988; break;
        case 12: goto L_00422998; break;
        case 13: goto L_004229A8; break;
        case 14: goto L_004229B8; break;
        case 15: goto L_004229C8; break;
        default: switch_error(__func__, 0x004228D0, 0x800C14F0);
    }
    // 0x004228D4: nop

L_004228D8:
    // 0x004228D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004228DC: addiu       $v0, $v0, 0x4BB8
    ctx->r2 = ADD32(ctx->r2, 0X4BB8);
    // 0x004228E0: j           L_004229D4
    // 0x004228E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004228E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004228E8:
    // 0x004228E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004228EC: addiu       $v0, $v0, 0x4BFC
    ctx->r2 = ADD32(ctx->r2, 0X4BFC);
    // 0x004228F0: j           L_004229D4
    // 0x004228F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004228F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004228F8:
    // 0x004228F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004228FC: addiu       $v0, $v0, 0x4C48
    ctx->r2 = ADD32(ctx->r2, 0X4C48);
    // 0x00422900: j           L_004229D4
    // 0x00422904: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422904: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422908:
    // 0x00422908: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042290C: addiu       $v0, $v0, 0x4D1C
    ctx->r2 = ADD32(ctx->r2, 0X4D1C);
    // 0x00422910: j           L_004229D4
    // 0x00422914: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422914: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422918:
    // 0x00422918: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042291C: addiu       $v0, $v0, 0x4CB4
    ctx->r2 = ADD32(ctx->r2, 0X4CB4);
    // 0x00422920: j           L_004229D4
    // 0x00422924: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422924: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422928:
    // 0x00422928: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042292C: addiu       $v0, $v0, 0x4D84
    ctx->r2 = ADD32(ctx->r2, 0X4D84);
    // 0x00422930: j           L_004229D4
    // 0x00422934: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422934: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422938:
    // 0x00422938: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042293C: addiu       $v0, $v0, 0x4DEC
    ctx->r2 = ADD32(ctx->r2, 0X4DEC);
    // 0x00422940: j           L_004229D4
    // 0x00422944: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422944: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422948:
    // 0x00422948: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042294C: addiu       $v0, $v0, 0x4E38
    ctx->r2 = ADD32(ctx->r2, 0X4E38);
    // 0x00422950: j           L_004229D4
    // 0x00422954: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422954: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422958:
    // 0x00422958: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042295C: addiu       $v0, $v0, 0x4E70
    ctx->r2 = ADD32(ctx->r2, 0X4E70);
    // 0x00422960: j           L_004229D4
    // 0x00422964: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422964: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422968:
    // 0x00422968: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042296C: addiu       $v0, $v0, 0x4E90
    ctx->r2 = ADD32(ctx->r2, 0X4E90);
    // 0x00422970: j           L_004229D4
    // 0x00422974: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422974: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422978:
    // 0x00422978: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042297C: addiu       $v0, $v0, 0x4EF8
    ctx->r2 = ADD32(ctx->r2, 0X4EF8);
    // 0x00422980: j           L_004229D4
    // 0x00422984: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422984: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422988:
    // 0x00422988: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042298C: addiu       $v0, $v0, 0x4F1C
    ctx->r2 = ADD32(ctx->r2, 0X4F1C);
    // 0x00422990: j           L_004229D4
    // 0x00422994: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422994: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422998:
    // 0x00422998: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042299C: addiu       $v0, $v0, 0x4F68
    ctx->r2 = ADD32(ctx->r2, 0X4F68);
    // 0x004229A0: j           L_004229D4
    // 0x004229A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004229A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004229A8:
    // 0x004229A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004229AC: addiu       $v0, $v0, 0x4F98
    ctx->r2 = ADD32(ctx->r2, 0X4F98);
    // 0x004229B0: j           L_004229D4
    // 0x004229B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004229B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004229B8:
    // 0x004229B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004229BC: addiu       $v0, $v0, 0x4FD4
    ctx->r2 = ADD32(ctx->r2, 0X4FD4);
    // 0x004229C0: j           L_004229D4
    // 0x004229C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004229C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004229C8:
    // 0x004229C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004229CC: addiu       $v0, $v0, 0x5010
    ctx->r2 = ADD32(ctx->r2, 0X5010);
    // 0x004229D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004229D4:
    // 0x004229D4: jr          $ra
    // 0x004229D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004229D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042C620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C620: blez        $s1, L_0042C66C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x0042C624: addiu       $s4, $v0, 0x8
        ctx->r20 = ADD32(ctx->r2, 0X8);
            goto L_0042C66C;
    }
    // 0x0042C624: addiu       $s4, $v0, 0x8
    ctx->r20 = ADD32(ctx->r2, 0X8);
    // 0x0042C628: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
L_0042C62C:
    // 0x0042C62C: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x0042C630: bnel        $v0, $fp, L_0042C660
    if (ctx->r2 != ctx->r30) {
        // 0x0042C634: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042C660;
    }
    goto skip_0;
    // 0x0042C634: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x0042C638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042C63C: jal         0x0020F6BC
    // 0x0042C640: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_0020F6BC(rdram, ctx);
        goto after_0;
    // 0x0042C640: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_0:
    // 0x0042C644: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0042C648: nop

    // 0x0042C64C: bc1fl       L_0042C660
    if (!c1cs) {
        // 0x0042C650: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042C660;
    }
    goto skip_1;
    // 0x0042C650: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0042C654: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0042C658: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x0042C65C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0042C660:
    // 0x0042C660: slt         $v0, $s2, $s1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0042C664: bne         $v0, $zero, L_0042C62C
    if (ctx->r2 != 0) {
        // 0x0042C668: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0042C62C;
    }
    // 0x0042C668: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_0042C66C:
    // 0x0042C66C: beq         $s3, $zero, L_0042C6AC
    if (ctx->r19 == 0) {
        // 0x0042C670: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_0042C6AC;
    }
    // 0x0042C670: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0042C674: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0042C678: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042C67C: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x0042C680: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0042C684: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0042C688: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0042C68C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0042C690: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0042C694: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0042C698: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x0042C69C: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x0042C6A0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x0042C6A4: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x0042C6A8: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
L_0042C6AC:
    // 0x0042C6AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C6B0: jal         0x002052D8
    // 0x0042C6B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0042C6B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_1:
    // 0x0042C6B8: beq         $s3, $zero, L_0042C6CC
    if (ctx->r19 == 0) {
        // 0x0042C6BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0042C6CC;
    }
    // 0x0042C6BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042C6C0: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x0042C6C4: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x0042C6C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_0042C6CC:
    // 0x0042C6CC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0042C6D0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0042C6D4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x0042C6D8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0042C6DC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0042C6E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0042C6E4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0042C6E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0042C6EC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0042C6F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0042C6F4: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0042C6F8: jr          $ra
    // 0x0042C6FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0042C6FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_002694A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002694A8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x002694AC: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x002694B0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002694B4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002694B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002694BC: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x002694C0: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x002694C4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x002694C8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002694CC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002694D0: jal         0x00267F64
    // 0x002694D4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_00267F64(rdram, ctx);
        goto after_0;
    // 0x002694D4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x002694D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002694DC: jal         0x00267F10
    // 0x002694E0: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
    func_00267F10(rdram, ctx);
        goto after_1;
    // 0x002694E0: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
    after_1:
    // 0x002694E4: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x002694E8: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x002694EC: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x002694F0: jal         0x0026BE60
    // 0x002694F4: sltiu       $s3, $v0, 0x1
    ctx->r19 = ctx->r2 < 0X1 ? 1 : 0;
    func_0026BE60(rdram, ctx);
        goto after_2;
    // 0x002694F4: sltiu       $s3, $v0, 0x1
    ctx->r19 = ctx->r2 < 0X1 ? 1 : 0;
    after_2:
    // 0x002694F8: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002694FC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00269500: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00269504: addiu       $v1, $v1, 0x1BE0
    ctx->r3 = ADD32(ctx->r3, 0X1BE0);
    // 0x00269508: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x0026950C: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x00269510: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x00269514: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00269518: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0026951C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00269520: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00269524: swc1        $f1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00269528: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026952C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x00269530: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00269534: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00269538: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026953C: lw          $s2, 0x0($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X0);
    // 0x00269540: beq         $s0, $zero, L_00269558
    if (ctx->r16 == 0) {
        // 0x00269544: sub.s       $f20, $f2, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_00269558;
    }
    // 0x00269544: sub.s       $f20, $f2, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00269548: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x0026954C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00269550: j           L_00269560
    // 0x00269554: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
        goto L_00269560;
    // 0x00269554: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_00269558:
    // 0x00269558: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0026955C: or          $v0, $s2, $v0
    ctx->r2 = ctx->r18 | ctx->r2;
L_00269560:
    // 0x00269560: beq         $s3, $zero, L_00269588
    if (ctx->r19 == 0) {
        // 0x00269564: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00269588;
    }
    // 0x00269564: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00269568: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x0026956C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00269570: addiu       $v1, $v1, 0x1BE0
    ctx->r3 = ADD32(ctx->r3, 0X1BE0);
    // 0x00269574: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00269578: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0026957C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00269580: j           L_002695A0
    // 0x00269584: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_002695A0;
    // 0x00269584: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_00269588:
    // 0x00269588: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026958C: addiu       $v0, $v0, 0x1BE0
    ctx->r2 = ADD32(ctx->r2, 0X1BE0);
    // 0x00269590: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00269594: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x00269598: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0026959C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_002695A0:
    // 0x002695A0: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x002695A4: addiu       $s0, $s0, 0x1BE0
    ctx->r16 = ADD32(ctx->r16, 0X1BE0);
    // 0x002695A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002695AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x002695B0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x002695B4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x002695B8: jal         0x00239F00
    // 0x002695BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00239F00(rdram, ctx);
        goto after_3;
    // 0x002695BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x002695C0: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x002695C4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x002695C8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x002695CC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x002695D0: sw          $t0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r8;
    // 0x002695D4: sw          $t1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r9;
    // 0x002695D8: sw          $t2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r10;
    // 0x002695DC: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x002695E0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x002695E4: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x002695E8: jal         0x0026BE60
    // 0x002695EC: nop

    func_0026BE60(rdram, ctx);
        goto after_4;
    // 0x002695EC: nop

    after_4:
    // 0x002695F0: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x002695F4: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x002695F8: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x002695FC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00269600: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00269604: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00269608: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0026960C: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x00269610: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00269614: jr          $ra
    // 0x00269618: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00269618: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00241854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241854: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00241858: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024185C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00241860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00241864: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00241868: addiu       $v0, $v0, 0x1CE0
    ctx->r2 = ADD32(ctx->r2, 0X1CE0);
    // 0x0024186C: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x00241870: addiu       $a0, $a0, -0x2AF0
    ctx->r4 = ADD32(ctx->r4, -0X2AF0);
    // 0x00241874: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00241878: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0024187C: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x00241880: jal         0x002418C0
    // 0x00241884: nop

    func_002418C0(rdram, ctx);
        goto after_0;
    // 0x00241884: nop

    after_0:
    // 0x00241888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0024188C: jr          $ra
    // 0x00241890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00241890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00468550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00468554: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00468558: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0046855C: jalr        $v0
    // 0x00468560: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00468560: nop

    after_0:
    // 0x00468564: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00468568: jr          $ra
    // 0x0046856C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0046856C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002435AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002435AC: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x002435B0: sdc1        $f21, 0x108($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X108, ctx->r29);
    // 0x002435B4: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x002435B8: sdc1        $f23, 0x118($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X118, ctx->r29);
    // 0x002435BC: mtc1        $a3, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r7;
    // 0x002435C0: sw          $s1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r17;
    // 0x002435C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002435C8: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    // 0x002435CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002435D0: sw          $ra, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r31;
    // 0x002435D4: sdc1        $f24, 0x120($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X120, ctx->r29);
    // 0x002435D8: sdc1        $f22, 0x110($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X110, ctx->r29);
    // 0x002435DC: sdc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X100, ctx->r29);
    // 0x002435E0: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x002435E4: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x002435E8: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x002435EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x002435F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x002435F4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x002435F8: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002435FC: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00243600: lwc1        $f24, 0x138($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X138);
    // 0x00243604: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00243608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024360C: lwc1        $f20, 0x68C0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X68C0);
    // 0x00243610: jal         0x002671B4
    // 0x00243614: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x00243614: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x00243618: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0024361C: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00243620: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00243624: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00243628: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0024362C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x00243630: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x00243634: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x00243638: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0024363C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00243640: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00243644: lwc1        $f1, 0x54($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X54);
    // 0x00243648: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024364C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00243650: jal         0x002671B4
    // 0x00243654: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00243654: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00243658: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0024365C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00243660: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x00243664: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00243668: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0024366C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00243670: jal         0x0020EF2C
    // 0x00243674: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00243674: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x00243678: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0024367C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00243680: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00243684: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00243688: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0024368C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00243690: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00243694: jal         0x00298470
    // 0x00243698: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x00243698: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0024369C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x002436A0: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x002436A4: nop

    // 0x002436A8: bc1t        L_00243898
    if (c1cs) {
        // 0x002436AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00243898;
    }
    // 0x002436AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002436B0: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x002436B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002436B8: jal         0x0021AE6C
    // 0x002436BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021AE6C(rdram, ctx);
        goto after_4;
    // 0x002436BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x002436C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002436C4: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x002436C8: jal         0x00211114
    // 0x002436CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_5;
    // 0x002436CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002436D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002436D4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x002436D8: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x002436DC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x002436E0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x002436E4: jal         0x0020F85C
    // 0x002436E8: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    func_0020F85C(rdram, ctx);
        goto after_6;
    // 0x002436E8: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x002436EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002436F0: lwc1        $f0, 0x68C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X68C4);
    // 0x002436F4: mul.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x002436F8: nop

    // 0x002436FC: mul.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x00243700: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x00243704: mul.s       $f12, $f1, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00243708: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0024370C: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00243710: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x00243714: lwc1        $f22, 0x64($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00243718: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x0024371C: swc1        $f1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00243720: jal         0x00298470
    // 0x00243724: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_7;
    // 0x00243724: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x00243728: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0024372C: c.eq.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl == ctx->f22.fl;
    // 0x00243730: nop

    // 0x00243734: bc1t        L_00243754
    if (c1cs) {
        // 0x00243738: nop
    
            goto L_00243754;
    }
    // 0x00243738: nop

    // 0x0024373C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00243740: lwc1        $f1, 0x68($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x00243744: div.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00243748: div.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0024374C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x00243750: swc1        $f1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00243754:
    // 0x00243754: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x00243758: mul.s       $f2, $f1, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0024375C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00243760: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00243764: swc1        $f22, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f22.u32l;
    // 0x00243768: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x0024376C: swc1        $f1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00243770: jal         0x00298470
    // 0x00243774: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_8;
    // 0x00243774: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x00243778: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0024377C: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x00243780: nop

    // 0x00243784: bc1t        L_002437A4
    if (c1cs) {
        // 0x00243788: nop
    
            goto L_002437A4;
    }
    // 0x00243788: nop

    // 0x0024378C: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x00243790: lwc1        $f1, 0x78($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X78);
    // 0x00243794: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00243798: div.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0024379C: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x002437A0: swc1        $f1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_002437A4:
    // 0x002437A4: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x002437A8: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x002437AC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002437B0: lwc1        $f1, 0x64($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x002437B4: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x002437B8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002437BC: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x002437C0: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x002437C4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x002437C8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002437CC: jal         0x0021153C
    // 0x002437D0: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_9;
    // 0x002437D0: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_9:
    // 0x002437D4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x002437D8: nop

    // 0x002437DC: bc1tl       L_002437E4
    if (c1cs) {
        // 0x002437E0: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_002437E4;
    }
    goto skip_0;
    // 0x002437E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
L_002437E4:
    // 0x002437E4: c.lt.s      $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f23.fl < ctx->f0.fl;
    // 0x002437E8: nop

    // 0x002437EC: bc1t        L_00243898
    if (c1cs) {
        // 0x002437F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00243898;
    }
    // 0x002437F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002437F4: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x002437F8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x002437FC: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x00243800: swc1        $f21, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x00243804: jal         0x0020F040
    // 0x00243808: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_10;
    // 0x00243808: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x0024380C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00243810: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x00243814: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x00243818: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x0024381C: jal         0x0020F040
    // 0x00243820: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_11;
    // 0x00243820: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x00243824: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x00243828: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x0024382C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00243830: lwc1        $f1, 0x84($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X84);
    // 0x00243834: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x00243838: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024383C: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00243840: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x00243844: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00243848: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0024384C: jal         0x0021153C
    // 0x00243850: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_12;
    // 0x00243850: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_12:
    // 0x00243854: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00243858: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024385C: nop

    // 0x00243860: bc1f        L_00243884
    if (!c1cs) {
        // 0x00243864: nop
    
            goto L_00243884;
    }
    // 0x00243864: nop

    // 0x00243868: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024386C: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x00243870: nop

    // 0x00243874: bc1t        L_00243898
    if (c1cs) {
        // 0x00243878: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00243898;
    }
    // 0x00243878: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024387C: j           L_00243898
    // 0x00243880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00243898;
    // 0x00243880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00243884:
    // 0x00243884: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x00243888: nop

    // 0x0024388C: bc1t        L_00243898
    if (c1cs) {
        // 0x00243890: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00243898;
    }
    // 0x00243890: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00243894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00243898:
    // 0x00243898: lw          $ra, 0xF8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF8);
    // 0x0024389C: lw          $s1, 0xF4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XF4);
    // 0x002438A0: lw          $s0, 0xF0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF0);
    // 0x002438A4: ldc1        $f24, 0x120($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X120);
    // 0x002438A8: ldc1        $f23, 0x118($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X118);
    // 0x002438AC: ldc1        $f22, 0x110($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X110);
    // 0x002438B0: ldc1        $f21, 0x108($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X108);
    // 0x002438B4: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x002438B8: jr          $ra
    // 0x002438BC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x002438BC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_0044C0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C0EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044C0F0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044C0F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044C0F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044C0FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044C100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044C104: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044C108: jal         0x002017D4
    // 0x0044C10C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044C10C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044C110: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C114: jal         0x002017D4
    // 0x0044C118: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044C118: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044C11C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C120: jal         0x002017D4
    // 0x0044C124: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044C124: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x0044C128: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0044C12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044C130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044C134: jr          $ra
    // 0x0044C138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044C138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0046867C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046867C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00468680: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468684: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00468688: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0046868C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x00468690: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00468694: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
L_00468698:
    // 0x00468698: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x0046869C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004686A0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x004686A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004686A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004686AC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004686B0: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x004686B4: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x004686B8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x004686BC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x004686C0: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x004686C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004686C8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x004686CC: bne         $a2, $t0, L_00468698
    if (ctx->r6 != ctx->r8) {
        // 0x004686D0: or          $a1, $a1, $v0
        ctx->r5 = ctx->r5 | ctx->r2;
            goto L_00468698;
    }
    // 0x004686D0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x004686D4: jal         0x0042EB50
    // 0x004686D8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    func_0042EB50(rdram, ctx);
        goto after_0;
    // 0x004686D8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    after_0:
    // 0x004686DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004686E0: jr          $ra
    // 0x004686E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004686E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00427134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427134: addiu       $v0, $a0, -0x61
    ctx->r2 = ADD32(ctx->r4, -0X61);
    // 0x00427138: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x0042713C: bnel        $v0, $zero, L_00427144
    if (ctx->r2 != 0) {
        // 0x00427140: addiu       $a0, $a0, -0x20
        ctx->r4 = ADD32(ctx->r4, -0X20);
            goto L_00427144;
    }
    goto skip_0;
    // 0x00427140: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    skip_0:
L_00427144:
    // 0x00427144: jr          $ra
    // 0x00427148: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00427148: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0021ED04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021ED04: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0021ED08: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x0021ED0C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0021ED10: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x0021ED14: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0021ED18: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x0021ED1C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0021ED20: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x0021ED24: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x0021ED28: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x0021ED2C: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x0021ED30: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x0021ED34: lw          $v0, 0x98($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X98);
    // 0x0021ED38: beq         $v0, $zero, L_0021EE1C
    if (ctx->r2 == 0) {
        // 0x0021ED3C: addu        $s6, $a3, $zero
        ctx->r22 = ADD32(ctx->r7, 0);
            goto L_0021EE1C;
    }
    // 0x0021ED3C: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x0021ED40: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021ED44: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    // 0x0021ED48: jal         0x00206950
    // 0x0021ED4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    entry_00206950(rdram, ctx);
        goto after_0;
    // 0x0021ED4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0021ED50: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0021ED54: beq         $s3, $zero, L_0021EE1C
    if (ctx->r19 == 0) {
        // 0x0021ED58: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0021EE1C;
    }
    // 0x0021ED58: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0021ED5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021ED60: lui         $s2, 0xDA38
    ctx->r18 = S32(0XDA38 << 16);
    // 0x0021ED64: lw          $s1, 0x8($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X8);
    // 0x0021ED68: ori         $s2, $s2, 0x7
    ctx->r18 = ctx->r18 | 0X7;
    // 0x0021ED6C: jal         0x0020C890
    // 0x0021ED70: addiu       $a2, $s1, 0x1CC
    ctx->r6 = ADD32(ctx->r17, 0X1CC);
    func_0020C890(rdram, ctx);
        goto after_1;
    // 0x0021ED70: addiu       $a2, $s1, 0x1CC
    ctx->r6 = ADD32(ctx->r17, 0X1CC);
    after_1:
    // 0x0021ED74: jal         0x0020F7EC
    // 0x0021ED78: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x0021ED78: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0021ED7C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0021ED80: jal         0x0020CC94
    // 0x0021ED84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020CC94(rdram, ctx);
        goto after_3;
    // 0x0021ED84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0021ED88: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0021ED8C: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0021ED90: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0021ED94: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0021ED98: lw          $a0, 0x6D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D1C);
    // 0x0021ED9C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0021EDA0: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x0021EDA4: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x0021EDA8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x0021EDAC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0021EDB0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021EDB4: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x0021EDB8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0021EDBC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021EDC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021EDC4: lw          $v0, 0x1C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X1C);
    // 0x0021EDC8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0021EDCC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0021EDD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021EDD4: lb          $v0, 0x151($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X151);
    // 0x0021EDD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0021EDDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021EDE0: lw          $a1, 0xC($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XC);
    // 0x0021EDE4: lw          $a2, 0x98($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X98);
    // 0x0021EDE8: jal         0x0020AF08
    // 0x0021EDEC: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    func_0020AF08(rdram, ctx);
        goto after_4;
    // 0x0021EDEC: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    after_4:
    // 0x0021EDF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0021EDF4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0021EDF8: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0021EDFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021EE00: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0021EE04: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x0021EE08: addiu       $v1, $v1, 0x368
    ctx->r3 = ADD32(ctx->r3, 0X368);
    // 0x0021EE0C: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x0021EE10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0021EE14: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x0021EE18: sw          $s1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r17;
L_0021EE1C:
    // 0x0021EE1C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x0021EE20: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x0021EE24: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x0021EE28: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x0021EE2C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x0021EE30: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x0021EE34: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0021EE38: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x0021EE3C: jr          $ra
    // 0x0021EE40: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0021EE40: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00297C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297C1C: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00297C20: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x00297C24: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x00297C28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297C2C: lwc1        $f2, -0x5834($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5834);
    // 0x00297C30: lui         $t4, 0xFFFF
    ctx->r12 = S32(0XFFFF << 16);
    // 0x00297C34: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
L_00297C38:
    // 0x00297C38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00297C3C: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
L_00297C40:
    // 0x00297C40: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x00297C44: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00297C48: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00297C4C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00297C50: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00297C54: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00297C58: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00297C5C: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297C60: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00297C64: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00297C68: and         $v0, $a0, $t4
    ctx->r2 = ctx->r4 & ctx->r12;
    // 0x00297C6C: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x00297C70: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00297C74: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00297C78: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x00297C7C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00297C80: and         $a0, $a0, $t4
    ctx->r4 = ctx->r4 & ctx->r12;
    // 0x00297C84: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x00297C88: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x00297C8C: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00297C90: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x00297C94: bne         $v0, $zero, L_00297C40
    if (ctx->r2 != 0) {
        // 0x00297C98: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_00297C40;
    }
    // 0x00297C98: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x00297C9C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x00297CA0: slti        $v0, $t3, 0x4
    ctx->r2 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x00297CA4: bne         $v0, $zero, L_00297C38
    if (ctx->r2 != 0) {
        // 0x00297CA8: addiu       $t2, $t2, 0x10
        ctx->r10 = ADD32(ctx->r10, 0X10);
            goto L_00297C38;
    }
    // 0x00297CA8: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x00297CAC: jr          $ra
    // 0x00297CB0: nop

    return;
    // 0x00297CB0: nop

;}
RECOMP_FUNC void func_0024F658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024F658: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x0024F65C: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0024F660: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024F664: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x0024F668: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0024F66C: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0024F670: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0024F674: sw          $s5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r21;
    // 0x0024F678: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0024F67C: sw          $ra, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r31;
    // 0x0024F680: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x0024F684: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0024F688: lwc1        $f1, 0xA94($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA94);
    // 0x0024F68C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F690: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0024F694: nop

    // 0x0024F698: bc1t        L_0024F6B4
    if (c1cs) {
        // 0x0024F69C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0024F6B4;
    }
    // 0x0024F69C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024F6A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024F6A4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024F6A8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024F6AC: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x0024F6B0: swc1        $f0, 0xA94($s1)
    MEM_W(0XA94, ctx->r17) = ctx->f0.u32l;
L_0024F6B4:
    // 0x0024F6B4: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x0024F6B8: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0024F6BC: beq         $v1, $v0, L_0024F6CC
    if (ctx->r3 == ctx->r2) {
        // 0x0024F6C0: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_0024F6CC;
    }
    // 0x0024F6C0: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x0024F6C4: bne         $v1, $v0, L_0024F70C
    if (ctx->r3 != ctx->r2) {
        // 0x0024F6C8: nop
    
            goto L_0024F70C;
    }
    // 0x0024F6C8: nop

L_0024F6CC:
    // 0x0024F6CC: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x0024F6D0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0024F6D4: beq         $v0, $zero, L_0024F70C
    if (ctx->r2 == 0) {
        // 0x0024F6D8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0024F70C;
    }
    // 0x0024F6D8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0024F6DC: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024F6E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F6E4: lwc1        $f14, 0x6E04($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E04);
    // 0x0024F6E8: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F6EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F6F0: lwc1        $f1, 0x6E08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E08);
    // 0x0024F6F4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F6F8: lwc1        $f12, 0xA78($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024F6FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0024F700: jal         0x0021160C
    // 0x0024F704: nop

    func_0021160C(rdram, ctx);
        goto after_0;
    // 0x0024F704: nop

    after_0:
    // 0x0024F708: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
L_0024F70C:
    // 0x0024F70C: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x0024F710: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F714: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024F718: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F71C: nop

    // 0x0024F720: bc1f        L_0024F744
    if (!c1cs) {
        // 0x0024F724: nop
    
            goto L_0024F744;
    }
    // 0x0024F724: nop

    // 0x0024F728: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F72C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0024F730: nop

    // 0x0024F734: bc1f        L_0024F770
    if (!c1cs) {
        // 0x0024F738: nop
    
            goto L_0024F770;
    }
    // 0x0024F738: nop

    // 0x0024F73C: j           L_0024F754
    // 0x0024F740: nop

        goto L_0024F754;
    // 0x0024F740: nop

L_0024F744:
    // 0x0024F744: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024F748: nop

    // 0x0024F74C: bc1f        L_0024F770
    if (!c1cs) {
        // 0x0024F750: nop
    
            goto L_0024F770;
    }
    // 0x0024F750: nop

L_0024F754:
    // 0x0024F754: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0024F758: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F75C: lwc1        $f14, 0x6E0C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E0C);
    // 0x0024F760: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F764: lwc1        $f12, 0xA78($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024F768: j           L_0024F7D4
    // 0x0024F76C: nop

        goto L_0024F7D4;
    // 0x0024F76C: nop

L_0024F770:
    // 0x0024F770: lwc1        $f1, 0xA60($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA60);
    // 0x0024F774: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F778: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0024F77C: nop

    // 0x0024F780: bc1t        L_0024F7CC
    if (c1cs) {
        // 0x0024F784: nop
    
            goto L_0024F7CC;
    }
    // 0x0024F784: nop

    // 0x0024F788: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F78C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0024F790: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024F794: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F798: bc1f        L_0024F7B0
    if (!c1cs) {
        // 0x0024F79C: nop
    
            goto L_0024F7B0;
    }
    // 0x0024F79C: nop

    // 0x0024F7A0: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F7A4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024F7A8: j           L_0024F7B4
    // 0x0024F7AC: nop

        goto L_0024F7B4;
    // 0x0024F7AC: nop

L_0024F7B0:
    // 0x0024F7B0: mul.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
L_0024F7B4:
    // 0x0024F7B4: lwc1        $f12, 0xA78($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024F7B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0024F7BC: jal         0x0021160C
    // 0x0024F7C0: nop

    func_0021160C(rdram, ctx);
        goto after_1;
    // 0x0024F7C0: nop

    after_1:
    // 0x0024F7C4: j           L_0024F7E0
    // 0x0024F7C8: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
        goto L_0024F7E0;
    // 0x0024F7C8: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
L_0024F7CC:
    // 0x0024F7CC: lwc1        $f12, 0xA78($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024F7D0: lwc1        $f14, 0x8($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X8);
L_0024F7D4:
    // 0x0024F7D4: jal         0x0021170C
    // 0x0024F7D8: nop

    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x0024F7D8: nop

    after_2:
    // 0x0024F7DC: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
L_0024F7E0:
    // 0x0024F7E0: lwc1        $f1, 0xA7C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA7C);
    // 0x0024F7E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F7E8: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024F7EC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F7F0: nop

    // 0x0024F7F4: bc1f        L_0024F818
    if (!c1cs) {
        // 0x0024F7F8: nop
    
            goto L_0024F818;
    }
    // 0x0024F7F8: nop

    // 0x0024F7FC: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F800: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0024F804: nop

    // 0x0024F808: bc1f        L_0024F844
    if (!c1cs) {
        // 0x0024F80C: nop
    
            goto L_0024F844;
    }
    // 0x0024F80C: nop

    // 0x0024F810: j           L_0024F828
    // 0x0024F814: nop

        goto L_0024F828;
    // 0x0024F814: nop

L_0024F818:
    // 0x0024F818: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024F81C: nop

    // 0x0024F820: bc1f        L_0024F844
    if (!c1cs) {
        // 0x0024F824: nop
    
            goto L_0024F844;
    }
    // 0x0024F824: nop

L_0024F828:
    // 0x0024F828: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0024F82C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F830: lwc1        $f14, 0x6E10($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E10);
    // 0x0024F834: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F838: lwc1        $f12, 0xA7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024F83C: j           L_0024F8BC
    // 0x0024F840: nop

        goto L_0024F8BC;
    // 0x0024F840: nop

L_0024F844:
    // 0x0024F844: lwc1        $f1, 0xA5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA5C);
    // 0x0024F848: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024F84C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0024F850: nop

    // 0x0024F854: bc1t        L_0024F8B4
    if (c1cs) {
        // 0x0024F858: nop
    
            goto L_0024F8B4;
    }
    // 0x0024F858: nop

    // 0x0024F85C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024F860: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0024F864: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024F868: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F86C: bc1f        L_0024F88C
    if (!c1cs) {
        // 0x0024F870: nop
    
            goto L_0024F88C;
    }
    // 0x0024F870: nop

    // 0x0024F874: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x0024F878: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024F87C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F880: lwc1        $f1, 0x6E14($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E14);
    // 0x0024F884: j           L_0024F898
    // 0x0024F888: nop

        goto L_0024F898;
    // 0x0024F888: nop

L_0024F88C:
    // 0x0024F88C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0024F890: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F894: lwc1        $f0, 0x6E18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E18);
L_0024F898:
    // 0x0024F898: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024F89C: lwc1        $f12, 0xA7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024F8A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0024F8A4: jal         0x0021160C
    // 0x0024F8A8: nop

    func_0021160C(rdram, ctx);
        goto after_3;
    // 0x0024F8A8: nop

    after_3:
    // 0x0024F8AC: j           L_0024F8C8
    // 0x0024F8B0: swc1        $f0, 0xA7C($s1)
    MEM_W(0XA7C, ctx->r17) = ctx->f0.u32l;
        goto L_0024F8C8;
    // 0x0024F8B0: swc1        $f0, 0xA7C($s1)
    MEM_W(0XA7C, ctx->r17) = ctx->f0.u32l;
L_0024F8B4:
    // 0x0024F8B4: lwc1        $f12, 0xA7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024F8B8: lwc1        $f14, 0x8($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X8);
L_0024F8BC:
    // 0x0024F8BC: jal         0x0021170C
    // 0x0024F8C0: nop

    func_0021170C(rdram, ctx);
        goto after_4;
    // 0x0024F8C0: nop

    after_4:
    // 0x0024F8C4: swc1        $f0, 0xA7C($s1)
    MEM_W(0XA7C, ctx->r17) = ctx->f0.u32l;
L_0024F8C8:
    // 0x0024F8C8: beq         $s0, $zero, L_0024F910
    if (ctx->r16 == 0) {
        // 0x0024F8CC: nop
    
            goto L_0024F910;
    }
    // 0x0024F8CC: nop

    // 0x0024F8D0: lw          $v1, 0xA68($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA68);
    // 0x0024F8D4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x0024F8D8: beq         $v0, $zero, L_0024F8EC
    if (ctx->r2 == 0) {
        // 0x0024F8DC: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_0024F8EC;
    }
    // 0x0024F8DC: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0024F8E0: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0024F8E4: j           L_0024F920
    // 0x0024F8E8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_0024F920;
    // 0x0024F8E8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_0024F8EC:
    // 0x0024F8EC: beq         $v0, $zero, L_0024F910
    if (ctx->r2 == 0) {
        // 0x0024F8F0: nop
    
            goto L_0024F910;
    }
    // 0x0024F8F0: nop

    // 0x0024F8F4: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0024F8F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F8FC: lwc1        $f1, 0x6E1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E1C);
    // 0x0024F900: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F904: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F908: j           L_0024F920
    // 0x0024F90C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_0024F920;
    // 0x0024F90C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_0024F910:
    // 0x0024F910: lwc1        $f12, 0xA8C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA8C);
    // 0x0024F914: lwc1        $f14, 0x10($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X10);
    // 0x0024F918: jal         0x0021170C
    // 0x0024F91C: nop

    func_0021170C(rdram, ctx);
        goto after_5;
    // 0x0024F91C: nop

    after_5:
L_0024F920:
    // 0x0024F920: beq         $s0, $zero, L_0024F974
    if (ctx->r16 == 0) {
        // 0x0024F924: swc1        $f0, 0xA8C($s1)
        MEM_W(0XA8C, ctx->r17) = ctx->f0.u32l;
            goto L_0024F974;
    }
    // 0x0024F924: swc1        $f0, 0xA8C($s1)
    MEM_W(0XA8C, ctx->r17) = ctx->f0.u32l;
    // 0x0024F928: lw          $v1, 0xA70($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA70);
    // 0x0024F92C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0024F930: beq         $v0, $zero, L_0024F950
    if (ctx->r2 == 0) {
        // 0x0024F934: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_0024F950;
    }
    // 0x0024F934: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0024F938: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0024F93C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F940: lwc1        $f1, 0x6E20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E20);
    // 0x0024F944: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F948: j           L_0024F990
    // 0x0024F94C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_0024F990;
    // 0x0024F94C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_0024F950:
    // 0x0024F950: beq         $v0, $zero, L_0024F974
    if (ctx->r2 == 0) {
        // 0x0024F954: nop
    
            goto L_0024F974;
    }
    // 0x0024F954: nop

    // 0x0024F958: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0024F95C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F960: lwc1        $f1, 0x6E24($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E24);
    // 0x0024F964: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024F968: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024F96C: j           L_0024F990
    // 0x0024F970: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_0024F990;
    // 0x0024F970: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_0024F974:
    // 0x0024F974: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x0024F978: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024F97C: lwc1        $f14, 0x6E28($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E28);
    // 0x0024F980: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x0024F984: lwc1        $f12, 0xA90($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA90);
    // 0x0024F988: jal         0x0021170C
    // 0x0024F98C: nop

    func_0021170C(rdram, ctx);
        goto after_6;
    // 0x0024F98C: nop

    after_6:
L_0024F990:
    // 0x0024F990: beq         $s0, $zero, L_0024F9BC
    if (ctx->r16 == 0) {
        // 0x0024F994: swc1        $f0, 0xA90($s1)
        MEM_W(0XA90, ctx->r17) = ctx->f0.u32l;
            goto L_0024F9BC;
    }
    // 0x0024F994: swc1        $f0, 0xA90($s1)
    MEM_W(0XA90, ctx->r17) = ctx->f0.u32l;
    // 0x0024F998: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x0024F99C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024F9A0: beq         $v0, $zero, L_0024F9BC
    if (ctx->r2 == 0) {
        // 0x0024F9A4: nop
    
            goto L_0024F9BC;
    }
    // 0x0024F9A4: nop

    // 0x0024F9A8: lwc1        $f0, 0x1C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x0024F9AC: lwc1        $f1, 0x1C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X1C);
    // 0x0024F9B0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024F9B4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0024F9B8: swc1        $f0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f0.u32l;
L_0024F9BC:
    // 0x0024F9BC: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x0024F9C0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024F9C4: beql        $v0, $zero, L_0024F9FC
    if (ctx->r2 == 0) {
        // 0x0024F9C8: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_0024F9FC;
    }
    goto skip_0;
    // 0x0024F9C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    skip_0:
    // 0x0024F9CC: lwc1        $f12, 0x1C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x0024F9D0: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x0024F9D4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x0024F9D8: nop

    // 0x0024F9DC: bc1fl       L_0024F9FC
    if (!c1cs) {
        // 0x0024F9E0: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_0024F9FC;
    }
    goto skip_1;
    // 0x0024F9E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    skip_1:
    // 0x0024F9E4: lwc1        $f14, 0x14($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X14);
    // 0x0024F9E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0024F9EC: jal         0x0021160C
    // 0x0024F9F0: nop

    func_0021160C(rdram, ctx);
        goto after_7;
    // 0x0024F9F0: nop

    after_7:
    // 0x0024F9F4: swc1        $f0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f0.u32l;
    // 0x0024F9F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_0024F9FC:
    // 0x0024F9FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0024FA00: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x0024FA04: lwc1        $f0, 0xA8C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA8C);
    // 0x0024FA08: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024FA0C: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x0024FA10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024FA14: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024FA18: lwc1        $f0, 0xA7C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024FA1C: lwc1        $f1, 0xA90($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA90);
    // 0x0024FA20: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0024FA24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024FA28: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x0024FA2C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0024FA30: jal         0x0021AE6C
    // 0x0024FA34: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0021AE6C(rdram, ctx);
        goto after_8;
    // 0x0024FA34: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x0024FA38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024FA3C: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x0024FA40: jal         0x00211114
    // 0x0024FA44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_9;
    // 0x0024FA44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0024FA48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024FA4C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0024FA50: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x0024FA54: jal         0x0020F85C
    // 0x0024FA58: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020F85C(rdram, ctx);
        goto after_10;
    // 0x0024FA58: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_10:
    // 0x0024FA5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024FA60: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0024FA64: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x0024FA68: jal         0x0020F85C
    // 0x0024FA6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_11;
    // 0x0024FA6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0024FA70: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0024FA74: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0024FA78: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024FA7C: lwc1        $f0, 0xA24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA24);
    // 0x0024FA80: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FA84: lwc1        $f0, 0xAA0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAA0);
    // 0x0024FA88: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024FA8C: swc1        $f0, 0xAA0($s1)
    MEM_W(0XAA0, ctx->r17) = ctx->f0.u32l;
    // 0x0024FA90: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0024FA94: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0024FA98: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024FA9C: lwc1        $f0, 0xA24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA24);
    // 0x0024FAA0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FAA4: lwc1        $f0, 0xAA4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAA4);
    // 0x0024FAA8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024FAAC: swc1        $f0, 0xAA4($s1)
    MEM_W(0XAA4, ctx->r17) = ctx->f0.u32l;
    // 0x0024FAB0: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0024FAB4: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0024FAB8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024FABC: lwc1        $f0, 0xA24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA24);
    // 0x0024FAC0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FAC4: lwc1        $f0, 0xAA8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAA8);
    // 0x0024FAC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024FACC: swc1        $f0, 0xAA8($s1)
    MEM_W(0XAA8, ctx->r17) = ctx->f0.u32l;
    // 0x0024FAD0: lwc1        $f1, 0x1C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X1C);
    // 0x0024FAD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024FAD8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024FADC: nop

    // 0x0024FAE0: bc1f        L_0024FB64
    if (!c1cs) {
        // 0x0024FAE4: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_0024FB64;
    }
    // 0x0024FAE4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x0024FAE8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024FAEC: jal         0x0020EEF8
    // 0x0024FAF0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_12;
    // 0x0024FAF0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0024FAF4: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x0024FAF8: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0024FAFC: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0024FB00: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0024FB04: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x0024FB08: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0024FB0C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024FB10: jal         0x00298470
    // 0x0024FB14: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_13;
    // 0x0024FB14: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_13:
    // 0x0024FB18: lh          $v1, 0xA08($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA08);
    // 0x0024FB1C: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024FB20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FB24: lwc1        $f1, 0x6E2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E2C);
    // 0x0024FB28: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024FB2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024FB30: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0024FB34: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024FB38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024FB3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024FB40: lw          $v0, -0x20A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20A4);
    // 0x0024FB44: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0024FB48: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024FB4C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FB50: lwc1        $f0, 0xA24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA24);
    // 0x0024FB54: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FB58: lwc1        $f0, 0x1C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x0024FB5C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024FB60: swc1        $f0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->f0.u32l;
L_0024FB64:
    // 0x0024FB64: lwc1        $f2, 0xA7C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024FB68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FB6C: lwc1        $f0, 0x6E30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E30);
    // 0x0024FB70: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024FB74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FB78: lwc1        $f1, 0x6E34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E34);
    // 0x0024FB7C: lwc1        $f0, 0xA54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA54);
    // 0x0024FB80: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FB84: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0024FB88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FB8C: lwc1        $f0, 0x6E38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E38);
    // 0x0024FB90: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024FB94: lui         $a2, 0x3D23
    ctx->r6 = S32(0X3D23 << 16);
    // 0x0024FB98: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x0024FB9C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x0024FBA0: jal         0x002117DC
    // 0x0024FBA4: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_14;
    // 0x0024FBA4: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    after_14:
    // 0x0024FBA8: beq         $s5, $zero, L_0024FBE4
    if (ctx->r21 == 0) {
        // 0x0024FBAC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0024FBE4;
    }
    // 0x0024FBAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024FBB0: lwc1        $f0, 0xA94($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA94);
    // 0x0024FBB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FBB8: lwc1        $f1, 0x6E3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E3C);
    // 0x0024FBBC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024FBC0: swc1        $f0, 0xA94($s1)
    MEM_W(0XA94, ctx->r17) = ctx->f0.u32l;
    // 0x0024FBC4: lh          $a0, 0x22($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X22);
    // 0x0024FBC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0024FBCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0024FBD0: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x0024FBD4: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x0024FBD8: lw          $a3, 0xC($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XC);
    // 0x0024FBDC: jal         0x00275544
    // 0x0024FBE0: nop

    func_00275544(rdram, ctx);
        goto after_15;
    // 0x0024FBE0: nop

    after_15:
L_0024FBE4:
    // 0x0024FBE4: lw          $ra, 0xD0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD0);
    // 0x0024FBE8: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x0024FBEC: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x0024FBF0: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x0024FBF4: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x0024FBF8: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0024FBFC: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x0024FC00: jr          $ra
    // 0x0024FC04: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x0024FC04: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_0041CDA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CDA4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0041CDA8: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0041CDAC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041CDB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041CDB4: jr          $ra
    // 0x0041CDB8: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    return;
    // 0x0041CDB8: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00254CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00254CC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00254CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00254CCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00254CD0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00254CD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00254CD8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00254CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00254CE0: jal         0x00279028
    // 0x00254CE4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_00279028(rdram, ctx);
        goto after_0;
    // 0x00254CE4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_0:
    // 0x00254CE8: lui         $v0, 0xE300
    ctx->r2 = S32(0XE300 << 16);
    // 0x00254CEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00254CF0: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00254CF4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00254CF8: ori         $v0, $v0, 0x1201
    ctx->r2 = ctx->r2 | 0X1201;
    // 0x00254CFC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00254D00: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00254D04: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00254D08: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00254D0C: lw          $v0, 0x380($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X380);
    // 0x00254D10: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00254D14: beq         $v0, $zero, L_00254D34
    if (ctx->r2 == 0) {
        // 0x00254D18: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_00254D34;
    }
    // 0x00254D18: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00254D1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00254D20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00254D24: jal         0x00254D5C
    // 0x00254D28: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00254D5C(rdram, ctx);
        goto after_1;
    // 0x00254D28: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00254D2C: j           L_00254D44
    // 0x00254D30: nop

        goto L_00254D44;
    // 0x00254D30: nop

L_00254D34:
    // 0x00254D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00254D38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00254D3C: jal         0x0024B3E4
    // 0x00254D40: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0024B3E4(rdram, ctx);
        goto after_2;
    // 0x00254D40: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
L_00254D44:
    // 0x00254D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00254D48: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00254D4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00254D50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00254D54: jr          $ra
    // 0x00254D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00254D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00281444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281444: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00281448: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0028144C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00281450: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00281454: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00281458: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x0028145C: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x00281460: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00281464: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00281468: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028146C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00281470: jal         0x0020F510
    // 0x00281474: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020F510(rdram, ctx);
        goto after_0;
    // 0x00281474: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00281478: lw          $v0, 0x11E8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X11E8);
    // 0x0028147C: bne         $v0, $zero, L_002814F8
    if (ctx->r2 != 0) {
        // 0x00281480: addiu       $v0, $s2, 0x40
        ctx->r2 = ADD32(ctx->r18, 0X40);
            goto L_002814F8;
    }
    // 0x00281480: addiu       $v0, $s2, 0x40
    ctx->r2 = ADD32(ctx->r18, 0X40);
    // 0x00281484: lw          $s0, 0x20($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X20);
    // 0x00281488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028148C: lwc1        $f20, -0x63F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X63F8);
    // 0x00281490: beq         $s0, $zero, L_002814EC
    if (ctx->r16 == 0) {
        // 0x00281494: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002814EC;
    }
    // 0x00281494: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00281498: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0028149C:
    // 0x0028149C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002814A0: jal         0x0020EF2C
    // 0x002814A4: addiu       $a2, $s0, 0x114
    ctx->r6 = ADD32(ctx->r16, 0X114);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x002814A4: addiu       $a2, $s0, 0x114
    ctx->r6 = ADD32(ctx->r16, 0X114);
    after_1:
    // 0x002814A8: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x002814AC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002814B0: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002814B4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002814B8: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002814BC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002814C0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002814C4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002814C8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x002814CC: nop

    // 0x002814D0: bc1f        L_002814E0
    if (!c1cs) {
        // 0x002814D4: nop
    
            goto L_002814E0;
    }
    // 0x002814D4: nop

    // 0x002814D8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x002814DC: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_002814E0:
    // 0x002814E0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x002814E4: bne         $s0, $zero, L_0028149C
    if (ctx->r16 != 0) {
        // 0x002814E8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0028149C;
    }
    // 0x002814E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_002814EC:
    // 0x002814EC: bne         $s1, $zero, L_002814F8
    if (ctx->r17 != 0) {
        // 0x002814F0: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_002814F8;
    }
    // 0x002814F0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x002814F4: addiu       $v0, $s2, 0x40
    ctx->r2 = ADD32(ctx->r18, 0X40);
L_002814F8:
    // 0x002814F8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002814FC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00281500: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00281504: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00281508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028150C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00281510: jr          $ra
    // 0x00281514: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00281514: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00256A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256A68: lw          $v0, 0x524($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X524);
    // 0x00256A6C: slti        $v0, $v0, 0x6400
    ctx->r2 = SIGNED(ctx->r2) < 0X6400 ? 1 : 0;
    // 0x00256A70: bne         $v0, $zero, L_00256A80
    if (ctx->r2 != 0) {
            // 0x00256A74: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
    func_00256A80(rdram, ctx);
    return;
    }
    // 0x00256A74: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
    // 0x00256A78: jr          $ra
    // 0x00256A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00256A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00443418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040A55C:
    // 0x00443418: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
L_0040A560:
    // 0x0044341C: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x00443420: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00443424: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x00443428: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0044342C: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x00443430: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00443434: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    // 0x00443438: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x0044343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00443440: sw          $ra, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r31;
    // 0x00443444: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x00443448: sdc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE0, ctx->r29);
    // 0x0044344C: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x00443450: jal         0x00246108
    // 0x00443454: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00443454: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00443458: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0044345C: addiu       $s1, $s1, -0x490
    ctx->r17 = ADD32(ctx->r17, -0X490);
    // 0x00443460: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x00443464: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00443468: lwc1        $f20, 0x848($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X848);
    // 0x0044346C: beq         $a0, $zero, L_0044348C
    if (ctx->r4 == 0) {
        // 0x00443470: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0044348C;
    }
    // 0x00443470: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00443474: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00443478: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044347C: beq         $v0, $zero, L_0044348C
    if (ctx->r2 == 0) {
        // 0x00443480: nop
    
            goto L_0044348C;
    }
    // 0x00443480: nop

    // 0x00443484: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x00443488: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
L_0044348C:
    // 0x0044348C: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x00443490: beq         $v0, $zero, L_00443594
    if (ctx->r2 == 0) {
        // 0x00443494: nop
    
            goto L_00443594;
    }
    // 0x00443494: nop

    // 0x00443498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044349C: lwc1        $f0, 0x84C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X84C);
    // 0x004434A0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x004434A4: nop

    // 0x004434A8: bc1f        L_004434F4
    if (!c1cs) {
        // 0x004434AC: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_004434F4;
    }
    // 0x004434AC: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x004434B0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004434B4: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x004434B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004434BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x004434C0: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x004434C4: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    // 0x004434C8: lw          $v1, 0x66C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X66C);
    // 0x004434CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004434D0: bne         $v1, $v0, L_00443560
    if (ctx->r3 != ctx->r2) {
        // 0x004434D4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00443560;
    }
    // 0x004434D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004434D8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x004434DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004434E0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x004434E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x004434E8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x004434EC: j           L_0040A560
    // 0x004434F0: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    entry_0040A560(rdram, ctx);
    return;
    // 0x004434F0: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
L_004434F4:
    // 0x004434F4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004434F8: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x004434FC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00443500: beq         $a0, $zero, L_00443514
    if (ctx->r4 == 0) {
        // 0x00443504: sw          $zero, 0x668($s1)
        MEM_W(0X668, ctx->r17) = 0;
            goto L_00443514;
    }
    // 0x00443504: sw          $zero, 0x668($s1)
    MEM_W(0X668, ctx->r17) = 0;
L_00443508:
    // 0x00443508: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x0044350C: bne         $a0, $zero, L_00443508
    if (ctx->r4 != 0) {
        // 0x00443510: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00443508;
    }
    // 0x00443510: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00443514:
    // 0x00443514: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00443518: beq         $v0, $zero, L_0044353C
    if (ctx->r2 == 0) {
        // 0x0044351C: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0044353C;
    }
    // 0x0044351C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00443520: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443524: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00443528: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044352C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00443530: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00443534: j           L_0040A55C
    // 0x00443538: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    entry_0040A55C(rdram, ctx);
    return;
    // 0x00443538: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
L_0044353C:
    // 0x0044353C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00443540: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00443544: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00443548: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044354C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x00443550: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x00443554: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x00443558: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x0044355C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_00443560:
    // 0x00443560: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00443564: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x00443568: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044356C: jal         0x0026D518
    // 0x00443570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x00443570: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_1:
    // 0x00443574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00443578: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044357C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00443580: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x00443584: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00443588: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0044358C: jal         0x00243414
    // 0x00443590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00443590: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_2:
L_00443594:
    // 0x00443594: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x00443598: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0044359C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x004435A0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x004435A4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x004435A8: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x004435AC: jr          $ra
    // 0x004435B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x004435B0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_00454100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454100: jr          $ra
    // 0x00454104: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    return;
    // 0x00454104: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
;}
RECOMP_FUNC void func_004556C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004556C4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x004556C8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004556CC: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x004556D0: beq         $v0, $zero, L_004556DC
    if (ctx->r2 == 0) {
        // 0x004556D4: nop
    
            goto L_004556DC;
    }
    // 0x004556D4: nop

    // 0x004556D8: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
L_004556DC:
    // 0x004556DC: lbu         $v0, 0x31($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X31);
    // 0x004556E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004556E4: bnel        $v0, $a0, L_004556F0
    if (ctx->r2 != ctx->r4) {
        // 0x004556E8: sb          $a0, 0x31($v1)
        MEM_B(0X31, ctx->r3) = ctx->r4;
            goto L_004556F0;
    }
    goto skip_0;
    // 0x004556E8: sb          $a0, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r4;
    skip_0:
    // 0x004556EC: sb          $zero, 0x31($v1)
    MEM_B(0X31, ctx->r3) = 0;
L_004556F0:
    // 0x004556F0: jr          $ra
    // 0x004556F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004556F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041DA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DA28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DA2C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041DA30: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0041DA34: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x0041DA38: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0041DA3C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x0041DA40: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x0041DA44: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x0041DA48: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x0041DA4C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x0041DA50: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x0041DA54: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x0041DA58: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0041DA5C: beq         $v0, $zero, L_0041DA74
    if (ctx->r2 == 0) {
        // 0x0041DA60: sw          $s0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r16;
            goto L_0041DA74;
    }
    // 0x0041DA60: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0041DA64: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x0041DA68: lw          $s6, 0x2028($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X2028);
    // 0x0041DA6C: j           L_0041DA80
    // 0x0041DA70: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
        goto L_0041DA80;
    // 0x0041DA70: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_0041DA74:
    // 0x0041DA74: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x0041DA78: lb          $s6, 0x4($v0)
    ctx->r22 = MEM_B(ctx->r2, 0X4);
    // 0x0041DA7C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_0041DA80:
    // 0x0041DA80: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x0041DA84: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    // 0x0041DA88: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x0041DA8C: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
L_0041DA90:
    // 0x0041DA90: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0041DA94: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0041DA98: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x0041DA9C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041DAA0: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x0041DAA4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x0041DAA8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x0041DAAC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041DAB0: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x0041DAB4: jal         0x00425E74
    // 0x0041DAB8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_00425E74(rdram, ctx);
        goto after_0;
    // 0x0041DAB8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
    // 0x0041DABC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DAC0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0041DBDC;
    }
    // 0x0041DAC0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0041DAC4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0041DAC8: beq         $v0, $zero, L_0041DBDC
    if (ctx->r2 == 0) {
        // 0x0041DACC: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DACC: nop

    // 0x0041DAD0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041DAD4: lw          $s0, 0x2024($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2024);
    // 0x0041DAD8: beq         $s0, $s1, L_0041DAFC
    if (ctx->r16 == ctx->r17) {
        // 0x0041DADC: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_0041DAFC;
    }
    // 0x0041DADC: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x0041DAE0: bnel        $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DAE4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_0;
    // 0x0041DAE4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
    // 0x0041DAE8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0041DAEC: beq         $s0, $t0, L_0041DB64
    if (ctx->r16 == ctx->r8) {
        // 0x0041DAF0: nop
    
            goto L_0041DB64;
    }
    // 0x0041DAF0: nop

    // 0x0041DAF4: j           L_0041DBDC
    // 0x0041DAF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
        goto L_0041DBDC;
    // 0x0041DAF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0041DAFC:
    // 0x0041DAFC: jal         0x00426D8C
    // 0x0041DB00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_1;
    // 0x0041DB00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041DB04: bne         $v0, $fp, L_0041DB54
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB08: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB0C: jal         0x00426D8C
    // 0x0041DB10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_2;
    // 0x0041DB10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0041DB14: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0041DB18: bne         $v0, $t0, L_0041DB54
    if (ctx->r2 != ctx->r8) {
        // 0x0041DB1C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB20: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB24: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB28: jal         0x00426D54
    // 0x0041DB2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_3;
    // 0x0041DB2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041DB30: bne         $v0, $zero, L_0041DB54
    if (ctx->r2 != 0) {
        // 0x0041DB34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB3C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DB40: jal         0x00426D54
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_4;
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0041DB48: beq         $v0, $zero, L_0041DB54
    if (ctx->r2 == 0) {
        // 0x0041DB4C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DB54;
    }
    // 0x0041DB4C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DB50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DB54:
    // 0x0041DB54: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB58: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041DB5C: j           L_0041DBC4
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
        goto L_0041DBC4;
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_0041DB64:
    // 0x0041DB64: jal         0x00426D8C
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_5;
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041DB6C: bnel        $v0, $fp, L_0041DBB8
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB70: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_1;
    // 0x0041DB70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x0041DB74: jal         0x00426D8C
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_6;
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x0041DB7C: bnel        $v0, $s0, L_0041DBB8
    if (ctx->r2 != ctx->r16) {
        // 0x0041DB80: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_2;
    // 0x0041DB80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
    // 0x0041DB84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB88: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB8C: jal         0x00426D54
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_7;
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0041DB94: bne         $v0, $zero, L_0041DBB8
    if (ctx->r2 != 0) {
        // 0x0041DB98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    // 0x0041DB98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBA0: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DBA4: jal         0x00426D54
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_8;
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x0041DBAC: beq         $v0, $zero, L_0041DBB8
    if (ctx->r2 == 0) {
        // 0x0041DBB0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DBB8;
    }
    // 0x0041DBB0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DBB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DBB8:
    // 0x0041DBB8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DBBC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBC0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
L_0041DBC4:
    // 0x0041DBC4: jal         0x00426D54
    // 0x0041DBC8: nop

    func_00426D54(rdram, ctx);
        goto after_9;
    // 0x0041DBC8: nop

    after_9:
    // 0x0041DBCC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DBD0: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DBD0: nop

    // 0x0041DBD4: bnel        $s0, $zero, L_0041DBDC
    if (ctx->r16 != 0) {
        // 0x0041DBD8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_3;
    // 0x0041DBD8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_3:
L_0041DBDC:
    // 0x0041DBDC: beq         $s1, $zero, L_0041DC00
    if (ctx->r17 == 0) {
        // 0x0041DBE0: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_0041DC00;
    }
    // 0x0041DBE0: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041DBE4: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DBE8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DBEC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DBF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DBF4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041DBF8: j           L_0041DC18
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_0041DC18;
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_0041DC00:
    // 0x0041DC00: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DC04: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DC08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DC0C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DC10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041DC14: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_0041DC18:
    // 0x0041DC18: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0041DC1C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0041DC20: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x0041DC24: bne         $v0, $zero, L_0041DA90
    if (ctx->r2 != 0) {
        // 0x0041DC28: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_0041DA90;
    }
    // 0x0041DC28: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x0041DC2C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x0041DC30: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x0041DC34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041DC38: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041DC3C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041DC40: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041DC44: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041DC48: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041DC4C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041DC50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041DC54: jr          $ra
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_002A2858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2858: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002A285C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x002A2860: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002A2864: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2868: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x002A286C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002A2870: jal         0x002A24B4
    // 0x002A2874: sw          $v0, -0x3CFC($v1)
    MEM_W(-0X3CFC, ctx->r3) = ctx->r2;
    func_002A24B4(rdram, ctx);
        goto after_0;
    // 0x002A2874: sw          $v0, -0x3CFC($v1)
    MEM_W(-0X3CFC, ctx->r3) = ctx->r2;
    after_0:
    // 0x002A2878: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002A287C: ori         $v0, $v0, 0x101
    ctx->r2 = ctx->r2 | 0X101;
    // 0x002A2880: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2884: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A2888: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A288C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2890: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002A2894: addiu       $s0, $s0, -0x7AC0
    ctx->r16 = ADD32(ctx->r16, -0X7AC0);
    // 0x002A2898: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002A289C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x002A28A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x002A28A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x002A28A8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002A28AC: jal         0x0029B820
    // 0x002A28B0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A28B0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_1:
    // 0x002A28B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A28B8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A28BC: jal         0x0029B6F0
    // 0x002A28C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002A28C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002A28C4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A28C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002A28CC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A28D0: jr          $ra
    // 0x002A28D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002A28D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0046849C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046849C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004684A0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x004684A4: sw          $v0, 0x56B0($at)
    MEM_W(0X56B0, ctx->r1) = ctx->r2;
    // 0x004684A8: jr          $ra
    // 0x004684AC: nop

    return;
    // 0x004684AC: nop

;}
RECOMP_FUNC void func_00276B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276B10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00276B14: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00276B18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00276B1C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00276B20: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00276B24: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00276B28: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00276B2C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00276B30: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00276B34: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x00276B38: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00276B3C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00276B40: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00276B44: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00276B48: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x00276B4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00276B50: lw          $a0, 0x2B60($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B60);
    // 0x00276B54: lw          $a1, 0x2B64($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X2B64);
    // 0x00276B58: jal         0x00266D8C
    // 0x00276B5C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00276B5C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00276B60: beq         $v0, $zero, L_00276C08
    if (ctx->r2 == 0) {
        // 0x00276B64: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00276C08;
    }
    // 0x00276B64: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00276B68: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00276B6C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x00276B70: beq         $v0, $a0, L_00276C04
    if (ctx->r2 == ctx->r4) {
        // 0x00276B74: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00276C04;
    }
    // 0x00276B74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00276B78: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00276B7C: bne         $v0, $zero, L_00276B94
    if (ctx->r2 != 0) {
        // 0x00276B80: nop
    
            goto L_00276B94;
    }
    // 0x00276B80: nop

L_00276B84:
    // 0x00276B84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276B88: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00276B8C: beq         $v0, $zero, L_00276B84
    if (ctx->r2 == 0) {
        // 0x00276B90: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00276B84;
    }
    // 0x00276B90: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276B94:
    // 0x00276B94: jal         0x002113A4
    // 0x00276B98: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00276B98: nop

    after_1:
    // 0x00276B9C: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x00276BA0: bne         $s0, $zero, L_00276BAC
    if (ctx->r16 != 0) {
        // 0x00276BA4: nop
    
            goto L_00276BAC;
    }
    // 0x00276BA4: nop

    // 0x00276BA8: break       7
    do_break(2583464);
L_00276BAC:
    // 0x00276BAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00276BB0: bne         $s0, $at, L_00276BC4
    if (ctx->r16 != ctx->r1) {
        // 0x00276BB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00276BC4;
    }
    // 0x00276BB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00276BB8: bne         $v0, $at, L_00276BC4
    if (ctx->r2 != ctx->r1) {
        // 0x00276BBC: nop
    
            goto L_00276BC4;
    }
    // 0x00276BBC: nop

    // 0x00276BC0: break       6
    do_break(2583488);
L_00276BC4:
    // 0x00276BC4: mfhi        $a1
    ctx->r5 = hi;
    // 0x00276BC8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00276BCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x00276BD0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00276BD4: beq         $v0, $zero, L_00276BFC
    if (ctx->r2 == 0) {
        // 0x00276BD8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00276BFC;
    }
    // 0x00276BD8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00276BDC: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276BE0:
    // 0x00276BE0: slt         $v0, $s0, $a1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00276BE4: beq         $v0, $zero, L_00276C08
    if (ctx->r2 == 0) {
        // 0x00276BE8: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_00276C08;
    }
    // 0x00276BE8: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x00276BEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276BF0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00276BF4: bne         $v0, $zero, L_00276BE0
    if (ctx->r2 != 0) {
        // 0x00276BF8: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00276BE0;
    }
    // 0x00276BF8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276BFC:
    // 0x00276BFC: j           L_00276C08
    // 0x00276C00: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
        goto L_00276C08;
    // 0x00276C00: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_00276C04:
    // 0x00276C04: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00276C08:
    // 0x00276C08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00276C0C: beq         $s1, $v0, L_00276D78
    if (ctx->r17 == ctx->r2) {
        // 0x00276C10: nop
    
            goto L_00276D78;
    }
    // 0x00276C10: nop

    // 0x00276C14: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00276C18: jal         0x002718F4
    // 0x00276C1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_002718F4(rdram, ctx);
        goto after_2;
    // 0x00276C1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_2:
    // 0x00276C20: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00276C24: jal         0x002714B0
    // 0x00276C28: nop

    func_002714B0(rdram, ctx);
        goto after_3;
    // 0x00276C28: nop

    after_3:
    // 0x00276C2C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x00276C30: sw          $s3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r19;
    // 0x00276C34: lh          $a2, 0xE($s2)
    ctx->r6 = MEM_H(ctx->r18, 0XE);
    // 0x00276C38: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00276C3C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00276C40: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x00276C44: sw          $s1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r17;
    // 0x00276C48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276C4C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x00276C50: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00276C54: lw          $a0, 0x2B60($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2B60);
    // 0x00276C58: lw          $a1, 0x2B64($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B64);
    // 0x00276C5C: jal         0x00266D8C
    // 0x00276C60: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    func_00266D8C(rdram, ctx);
        goto after_4;
    // 0x00276C60: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    after_4:
    // 0x00276C64: beq         $v0, $zero, L_00276CFC
    if (ctx->r2 == 0) {
        // 0x00276C68: nop
    
            goto L_00276CFC;
    }
    // 0x00276C68: nop

    // 0x00276C6C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00276C70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x00276C74: beq         $v0, $a0, L_00276CFC
    if (ctx->r2 == ctx->r4) {
        // 0x00276C78: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00276CFC;
    }
    // 0x00276C78: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00276C7C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00276C80: bne         $v0, $zero, L_00276C98
    if (ctx->r2 != 0) {
        // 0x00276C84: nop
    
            goto L_00276C98;
    }
    // 0x00276C84: nop

L_00276C88:
    // 0x00276C88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276C8C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00276C90: beq         $v0, $zero, L_00276C88
    if (ctx->r2 == 0) {
        // 0x00276C94: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00276C88;
    }
    // 0x00276C94: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276C98:
    // 0x00276C98: jal         0x002113A4
    // 0x00276C9C: nop

    func_002113A4(rdram, ctx);
        goto after_5;
    // 0x00276C9C: nop

    after_5:
    // 0x00276CA0: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x00276CA4: bne         $s0, $zero, L_00276CB0
    if (ctx->r16 != 0) {
        // 0x00276CA8: nop
    
            goto L_00276CB0;
    }
    // 0x00276CA8: nop

    // 0x00276CAC: break       7
    do_break(2583724);
L_00276CB0:
    // 0x00276CB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00276CB4: bne         $s0, $at, L_00276CC8
    if (ctx->r16 != ctx->r1) {
        // 0x00276CB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00276CC8;
    }
    // 0x00276CB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00276CBC: bne         $v0, $at, L_00276CC8
    if (ctx->r2 != ctx->r1) {
        // 0x00276CC0: nop
    
            goto L_00276CC8;
    }
    // 0x00276CC0: nop

    // 0x00276CC4: break       6
    do_break(2583748);
L_00276CC8:
    // 0x00276CC8: mfhi        $a1
    ctx->r5 = hi;
    // 0x00276CCC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00276CD0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x00276CD4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00276CD8: beq         $v0, $zero, L_00276CFC
    if (ctx->r2 == 0) {
        // 0x00276CDC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00276CFC;
    }
    // 0x00276CDC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00276CE0: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276CE4:
    // 0x00276CE4: slt         $v0, $s0, $a1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00276CE8: beq         $v0, $zero, L_00276CFC
    if (ctx->r2 == 0) {
        // 0x00276CEC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00276CFC;
    }
    // 0x00276CEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276CF0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00276CF4: bnel        $v0, $zero, L_00276CE4
    if (ctx->r2 != 0) {
        // 0x00276CF8: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00276CE4;
    }
    goto skip_0;
    // 0x00276CF8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_0:
L_00276CFC:
    // 0x00276CFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00276D00: lwc1        $f0, -0x7DDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7DDC);
    // 0x00276D04: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00276D08: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00276D0C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x00276D10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00276D14: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x00276D18: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00276D1C: swc1        $f1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00276D20: beq         $v1, $v0, L_00276D30
    if (ctx->r3 == ctx->r2) {
        // 0x00276D24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00276D30;
    }
    // 0x00276D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00276D28: bnel        $v1, $v0, L_00276D68
    if (ctx->r3 != ctx->r2) {
        // 0x00276D2C: sw          $v0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r2;
            goto L_00276D68;
    }
    goto skip_1;
    // 0x00276D2C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    skip_1:
L_00276D30:
    // 0x00276D30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00276D34: beq         $v1, $v0, L_00276D68
    if (ctx->r3 == ctx->r2) {
        // 0x00276D38: nop
    
            goto L_00276D68;
    }
    // 0x00276D38: nop

    // 0x00276D3C: beq         $v1, $zero, L_00276D68
    if (ctx->r3 == 0) {
        // 0x00276D40: nop
    
            goto L_00276D68;
    }
    // 0x00276D40: nop

    // 0x00276D44: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00276D48: jal         0x002718F4
    // 0x00276D4C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    func_002718F4(rdram, ctx);
        goto after_6;
    // 0x00276D4C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    after_6:
    // 0x00276D50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00276D54: lh          $a1, 0x1E($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X1E);
    // 0x00276D58: jal         0x00293E60
    // 0x00276D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_7;
    // 0x00276D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00276D60: jal         0x00293EC0
    // 0x00276D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_8;
    // 0x00276D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_00276D68:
    // 0x00276D68: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00276D6C: jal         0x00271514
    // 0x00276D70: nop

    func_00271514(rdram, ctx);
        goto after_9;
    // 0x00276D70: nop

    after_9:
    // 0x00276D74: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_00276D78:
    // 0x00276D78: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00276D7C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00276D80: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00276D84: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00276D88: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00276D8C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00276D90: jr          $ra
    // 0x00276D94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00276D94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00419BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419BA4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419BA8: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419BAC: addiu       $a2, $a2, -0x6C6C
    ctx->r6 = ADD32(ctx->r6, -0X6C6C);
    // 0x00419BB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419BB4: jal         0x00416894
    // 0x00419BB8: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419BB8: nop

    after_0:
    // 0x00419BBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419BC4: jr          $ra
    // 0x00419BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045C4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042350C:
    // 0x0045C4E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C4E4: lw          $v0, 0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X964);
    // 0x0045C4E8: beq         $v0, $zero, L_0045C500
    if (ctx->r2 == 0) {
        // 0x0045C4EC: nop
    
            goto L_0045C500;
    }
    // 0x0045C4EC: nop

    // 0x0045C4F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C4F4: addiu       $v0, $v0, 0x509C
    ctx->r2 = ADD32(ctx->r2, 0X509C);
    // 0x0045C4F8: j           L_0042350C
    // 0x0045C4FC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0042350C(rdram, ctx);
    return;
    // 0x0045C4FC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045C500:
    // 0x0045C500: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C504: addiu       $v0, $v0, 0x50D4
    ctx->r2 = ADD32(ctx->r2, 0X50D4);
    // 0x0045C508: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045C50C: jr          $ra
    // 0x0045C510: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045C510: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00211CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211CC4: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00211CC8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00211CCC: sub.s       $f6, $f1, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00211CD0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00211CD4: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x00211CD8: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00211CDC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00211CE0: sub.s       $f5, $f1, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00211CE4: swc1        $f5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x00211CE8: lwc1        $f1, 0x18($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x00211CEC: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x00211CF0: mul.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f4.fl);
    // 0x00211CF4: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x00211CF8: lwc1        $f2, 0x38($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X38);
    // 0x00211CFC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00211D00: add.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00211D04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211D08: c.eq.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl == ctx->f0.fl;
    // 0x00211D0C: nop

    // 0x00211D10: bc1t        L_00211D38
    if (c1cs) {
        // 0x00211D14: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00211D38;
    }
    // 0x00211D14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00211D18: mul.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x00211D1C: nop

    // 0x00211D20: mul.s       $f1, $f5, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x00211D24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00211D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00211D2C: neg.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = -ctx->f3.fl;
    // 0x00211D30: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211D34: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
L_00211D38:
    // 0x00211D38: jr          $ra
    // 0x00211D3C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00211D3C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_00295688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00295688: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029568C: lb          $v0, 0xCB($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XCB);
    // 0x00295690: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00295694: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00295698: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x0029569C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x002956A0: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x002956A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002956A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002956AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002956B0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x002956B4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x002956B8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x002956BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002956C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002956C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002956C8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x002956CC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002956D0: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x002956D4: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x002956D8: beq         $v0, $zero, L_00295B70
    if (ctx->r2 == 0) {
        // 0x002956DC: sh          $zero, 0x18($sp)
        MEM_H(0X18, ctx->r29) = 0;
            goto L_00295B70;
    }
    // 0x002956DC: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x002956E0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x002956E4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x002956E8: addiu       $s5, $s5, 0x7900
    ctx->r21 = ADD32(ctx->r21, 0X7900);
    // 0x002956EC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002956F0: addu        $v1, $fp, $zero
    ctx->r3 = ADD32(ctx->r30, 0);
L_002956F4:
    // 0x002956F4: lw          $fp, 0x4($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X4);
    // 0x002956F8: subu        $s2, $fp, $v1
    ctx->r18 = SUB32(ctx->r30, ctx->r3);
    // 0x002956FC: slt         $v0, $s6, $s2
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00295700: bne         $v0, $zero, L_00295B74
    if (ctx->r2 != 0) {
        // 0x00295704: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00295B74;
    }
    // 0x00295704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295708: bgez        $s2, L_0029572C
    if (SIGNED(ctx->r18) >= 0) {
        // 0x0029570C: slti        $v0, $s2, 0xA1
        ctx->r2 = SIGNED(ctx->r18) < 0XA1 ? 1 : 0;
            goto L_0029572C;
    }
    // 0x0029570C: slti        $v0, $s2, 0xA1
    ctx->r2 = SIGNED(ctx->r18) < 0XA1 ? 1 : 0;
    // 0x00295710: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295714: addiu       $a0, $a0, -0x5AC0
    ctx->r4 = ADD32(ctx->r4, -0X5AC0);
    // 0x00295718: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029571C: addiu       $a1, $a1, -0x5ABC
    ctx->r5 = ADD32(ctx->r5, -0X5ABC);
    // 0x00295720: jal         0x0029B020
    // 0x00295724: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00295724: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    after_0:
    // 0x00295728: slti        $v0, $s2, 0xA1
    ctx->r2 = SIGNED(ctx->r18) < 0XA1 ? 1 : 0;
L_0029572C:
    // 0x0029572C: bne         $v0, $zero, L_0029574C
    if (ctx->r2 != 0) {
        // 0x00295730: nop
    
            goto L_0029574C;
    }
    // 0x00295730: nop

    // 0x00295734: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295738: addiu       $a0, $a0, -0x5AC0
    ctx->r4 = ADD32(ctx->r4, -0X5AC0);
    // 0x0029573C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00295740: addiu       $a1, $a1, -0x5ABC
    ctx->r5 = ADD32(ctx->r5, -0X5ABC);
    // 0x00295744: jal         0x0029B020
    // 0x00295748: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    func_0029B020(rdram, ctx);
        goto after_1;
    // 0x00295748: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    after_1:
L_0029574C:
    // 0x0029574C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00295750: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x00295754: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x00295758: beq         $v0, $zero, L_00295AF4
    if (ctx->r2 == 0) {
        // 0x0029575C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00295AF4;
    }
    // 0x0029575C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00295760: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295764: addu        $at, $at, $v0
    gpr jr_addend_0029576C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00295768: lw          $v0, -0x5AB0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5AB0);
    // 0x0029576C: jr          $v0
    // 0x00295770: nop

    switch (jr_addend_0029576C >> 2) {
        case 0: goto L_00295ACC; break;
        case 1: goto L_00295AF4; break;
        case 2: goto L_00295AF4; break;
        case 3: goto L_00295AF4; break;
        case 4: goto L_00295AF4; break;
        case 5: goto L_00295AF4; break;
        case 6: goto L_00295AF4; break;
        case 7: goto L_00295AF4; break;
        case 8: goto L_00295AF4; break;
        case 9: goto L_00295AF4; break;
        case 10: goto L_00295AF4; break;
        case 11: goto L_002958A0; break;
        case 12: goto L_002958A0; break;
        case 13: goto L_00295774; break;
        case 14: goto L_00295A4C; break;
        case 15: goto L_00295A94; break;
        case 16: goto L_002958A0; break;
        default: switch_error(__func__, 0x0029576C, 0x800AA550);
    }
    // 0x00295770: nop

L_00295774:
    // 0x00295774: lw          $s1, 0x3C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X3C);
    // 0x00295778: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x0029577C: beq         $v0, $zero, L_00295798
    if (ctx->r2 == 0) {
        // 0x00295780: addu        $s4, $s0, $zero
        ctx->r20 = ADD32(ctx->r16, 0);
            goto L_00295798;
    }
    // 0x00295780: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x00295784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295788: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0029578C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295790: jalr        $v0
    // 0x00295794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00295794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_00295798:
    // 0x00295798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029579C: lw          $a2, 0x18($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X18);
    // 0x002957A0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002957A4: jalr        $v0
    // 0x002957A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x002957A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x002957AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002957B0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x002957B4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002957B8: jalr        $v0
    // 0x002957BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x002957BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x002957C0: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
    // 0x002957C4: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x002957C8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002957CC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x002957D0: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x002957D4: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002957D8: mflo        $t0
    ctx->r8 = lo;
    // 0x002957DC: sra         $v0, $t0, 15
    ctx->r2 = S32(SIGNED(ctx->r8) >> 15);
    // 0x002957E0: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x002957E4: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x002957E8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x002957EC: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x002957F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002957F4: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x002957F8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x002957FC: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x00295800: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x00295804: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x00295808: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x0029580C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295810: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295814: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00295818: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x0029581C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00295820: beq         $v0, $zero, L_00295834
    if (ctx->r2 == 0) {
        // 0x00295824: nop
    
            goto L_00295834;
    }
    // 0x00295824: nop

    // 0x00295828: sh          $s7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r23;
    // 0x0029582C: j           L_00295884
    // 0x00295830: sh          $s7, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r23;
        goto L_00295884;
    // 0x00295830: sh          $s7, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r23;
L_00295834:
    // 0x00295834: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x00295838: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x0029583C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295840: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295844: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00295848: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0029584C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x00295850: mflo        $t0
    ctx->r8 = lo;
    // 0x00295854: sra         $v1, $t0, 15
    ctx->r3 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295858: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x0029585C: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x00295860: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295864: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295868: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x0029586C: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x00295870: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00295874: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00295878: mflo        $t0
    ctx->r8 = lo;
    // 0x0029587C: sra         $v0, $t0, 15
    ctx->r2 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295880: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
L_00295884:
    // 0x00295884: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x00295888: beq         $a0, $zero, L_00295B34
    if (ctx->r4 == 0) {
        // 0x0029588C: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_00295B34;
    }
    // 0x0029588C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x00295890: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00295894: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00295898: j           L_00295B2C
    // 0x0029589C: nop

        goto L_00295B2C;
    // 0x0029589C: nop

L_002958A0:
    // 0x002958A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002958A4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x002958A8: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x002958AC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x002958B0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x002958B4: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x002958B8: jal         0x00295BDC
    // 0x002958BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_5;
    // 0x002958BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x002958C0: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x002958C4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x002958C8: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002958CC: bne         $v1, $zero, L_00295940
    if (ctx->r3 != 0) {
        // 0x002958D0: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00295940;
    }
    // 0x002958D0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002958D4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x002958D8: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x002958DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002958E0: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x002958E4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x002958E8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002958EC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x002958F0: mflo        $t0
    ctx->r8 = lo;
    // 0x002958F4: sra         $v1, $t0, 15
    ctx->r3 = S32(SIGNED(ctx->r8) >> 15);
    // 0x002958F8: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x002958FC: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x00295900: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295904: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295908: sh          $v1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r3;
    // 0x0029590C: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x00295910: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00295914: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00295918: lhu         $v1, 0x28($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X28);
    // 0x0029591C: mflo        $t0
    ctx->r8 = lo;
    // 0x00295920: sra         $v0, $t0, 15
    ctx->r2 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295924: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x00295928: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x0029592C: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x00295930: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x00295934: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x00295938: j           L_00295990
    // 0x0029593C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
        goto L_00295990;
    // 0x0029593C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
L_00295940:
    // 0x00295940: lh          $a2, 0x26($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X26);
    // 0x00295944: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x00295948: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x0029594C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00295950: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00295954: jal         0x002961E8
    // 0x00295958: nop

    func_002961E8(rdram, ctx);
        goto after_6;
    // 0x00295958: nop

    after_6:
    // 0x0029595C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x00295960: lh          $a2, 0x2C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2C);
    // 0x00295964: lhu         $a3, 0x2A($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X2A);
    // 0x00295968: lh          $v1, 0x1E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1E);
    // 0x0029596C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00295970: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00295974: mtc1        $v1, $f12
    ctx->f12.u32l = ctx->r3;
    // 0x00295978: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0029597C: jal         0x002961E8
    // 0x00295980: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    func_002961E8(rdram, ctx);
        goto after_7;
    // 0x00295980: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    after_7:
    // 0x00295984: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00295988: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0029598C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
L_00295990:
    // 0x00295990: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x00295994: beql        $v0, $zero, L_0029599C
    if (ctx->r2 == 0) {
        // 0x00295998: sh          $s7, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r23;
            goto L_0029599C;
    }
    goto skip_0;
    // 0x00295998: sh          $s7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r23;
    skip_0:
L_0029599C:
    // 0x0029599C: lh          $v0, 0x1E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1E);
    // 0x002959A0: beql        $v0, $zero, L_002959A8
    if (ctx->r2 == 0) {
        // 0x002959A4: sh          $s7, 0x1E($s0)
        MEM_H(0X1E, ctx->r16) = ctx->r23;
            goto L_002959A8;
    }
    goto skip_1;
    // 0x002959A4: sh          $s7, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r23;
    skip_1:
L_002959A8:
    // 0x002959A8: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x002959AC: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x002959B0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x002959B4: bne         $v1, $v0, L_002959C4
    if (ctx->r3 != ctx->r2) {
        // 0x002959B8: nop
    
            goto L_002959C4;
    }
    // 0x002959B8: nop

    // 0x002959BC: lhu         $v0, 0xE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE);
    // 0x002959C0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_002959C4:
    // 0x002959C4: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002959C8: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x002959CC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x002959D0: bne         $v1, $v0, L_002959FC
    if (ctx->r3 != ctx->r2) {
        // 0x002959D4: nop
    
            goto L_002959FC;
    }
    // 0x002959D4: nop

    // 0x002959D8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002959DC: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x002959E0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x002959E4: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002959E8: mflo        $t0
    ctx->r8 = lo;
    // 0x002959EC: sra         $v1, $t0, 15
    ctx->r3 = S32(SIGNED(ctx->r8) >> 15);
    // 0x002959F0: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x002959F4: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x002959F8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_002959FC:
    // 0x002959FC: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x00295A00: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x00295A04: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00295A08: bnel        $v1, $v0, L_00295B34
    if (ctx->r3 != ctx->r2) {
        // 0x00295A0C: sw          $s7, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r23;
            goto L_00295B34;
    }
    goto skip_2;
    // 0x00295A0C: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
    skip_2:
    // 0x00295A10: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00295A14: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295A18: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295A1C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00295A20: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00295A24: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x00295A28: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x00295A2C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x00295A30: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x00295A34: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295A38: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295A3C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00295A40: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x00295A44: j           L_00295B34
    // 0x00295A48: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
        goto L_00295B34;
    // 0x00295A48: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
L_00295A4C:
    // 0x00295A4C: lw          $s1, 0x3C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X3C);
    // 0x00295A50: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x00295A54: beq         $v0, $zero, L_00295A6C
    if (ctx->r2 == 0) {
        // 0x00295A58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00295A6C;
    }
    // 0x00295A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A5C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x00295A60: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295A64: jalr        $v0
    // 0x00295A68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x00295A68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
L_00295A6C:
    // 0x00295A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A70: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00295A74: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295A78: jalr        $v0
    // 0x00295A7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x00295A7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x00295A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A84: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x00295A88: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295A8C: j           L_00295B2C
    // 0x00295A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00295B2C;
    // 0x00295A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00295A94:
    // 0x00295A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A98: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00295A9C: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x00295AA0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00295AA4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00295AA8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00295AAC: jal         0x00295BDC
    // 0x00295AB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_10;
    // 0x00295AB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_10:
    // 0x00295AB4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00295AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295ABC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00295AC0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295AC4: j           L_00295B2C
    // 0x00295AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00295B2C;
    // 0x00295AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00295ACC:
    // 0x00295ACC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00295AD0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295AD4: lw          $a0, 0x7760($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7760);
    // 0x00295AD8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00295ADC: sw          $zero, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = 0;
    // 0x00295AE0: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x00295AE4: jal         0x00294B9C
    // 0x00295AE8: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    func_00294B9C(rdram, ctx);
        goto after_11;
    // 0x00295AE8: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    after_11:
    // 0x00295AEC: j           L_00295B3C
    // 0x00295AF0: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
        goto L_00295B3C;
    // 0x00295AF0: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
L_00295AF4:
    // 0x00295AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295AF8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00295AFC: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x00295B00: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00295B04: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00295B08: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00295B0C: jal         0x00295BDC
    // 0x00295B10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_12;
    // 0x00295B10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_12:
    // 0x00295B14: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00295B18: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x00295B1C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295B20: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x00295B24: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x00295B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00295B2C:
    // 0x00295B2C: jalr        $v0
    // 0x00295B30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x00295B30: nop

    after_13:
L_00295B34:
    // 0x00295B34: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    // 0x00295B38: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
L_00295B3C:
    // 0x00295B3C: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x00295B40: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x00295B44: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00295B48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00295B4C: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x00295B50: bne         $a0, $zero, L_00295B5C
    if (ctx->r4 != 0) {
        // 0x00295B54: sw          $a0, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r4;
            goto L_00295B5C;
    }
    // 0x00295B54: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
    // 0x00295B58: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_00295B5C:
    // 0x00295B5C: jal         0x00294B84
    // 0x00295B60: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_00294B84(rdram, ctx);
        goto after_14;
    // 0x00295B60: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_14:
    // 0x00295B64: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00295B68: bne         $v0, $zero, L_002956F4
    if (ctx->r2 != 0) {
        // 0x00295B6C: addu        $v1, $fp, $zero
        ctx->r3 = ADD32(ctx->r30, 0);
            goto L_002956F4;
    }
    // 0x00295B6C: addu        $v1, $fp, $zero
    ctx->r3 = ADD32(ctx->r30, 0);
L_00295B70:
    // 0x00295B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00295B74:
    // 0x00295B74: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00295B78: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x00295B7C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00295B80: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x00295B84: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00295B88: jal         0x00295BDC
    // 0x00295B8C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_15;
    // 0x00295B8C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_15:
    // 0x00295B90: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x00295B94: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x00295B98: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00295B9C: beq         $v1, $zero, L_00295BA8
    if (ctx->r3 == 0) {
        // 0x00295BA0: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00295BA8;
    }
    // 0x00295BA0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00295BA4: sw          $a0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r4;
L_00295BA8:
    // 0x00295BA8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00295BAC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00295BB0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00295BB4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00295BB8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00295BBC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00295BC0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00295BC4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00295BC8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00295BCC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00295BD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00295BD4: jr          $ra
    // 0x00295BD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00295BD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00275270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00275274: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275278: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027527C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00275280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275284: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00275288: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0027528C: lw          $a0, 0x2B60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B60);
    // 0x00275290: lw          $a1, 0x2B64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B64);
    // 0x00275294: jal         0x00266D24
    // 0x00275298: nop

    func_00266D24(rdram, ctx);
        goto after_0;
    // 0x00275298: nop

    after_0:
    // 0x0027529C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002752A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002752A4: beq         $s0, $v0, L_0027530C
    if (ctx->r16 == ctx->r2) {
        // 0x002752A8: sll         $s0, $s0, 1
        ctx->r16 = S32(ctx->r16 << 1);
            goto L_0027530C;
    }
    // 0x002752A8: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x002752AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002752B0: lw          $a0, 0x2B50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B50);
    // 0x002752B4: jal         0x002017D4
    // 0x002752B8: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002752B8: ori         $a1, $s0, 0x1
    ctx->r5 = ctx->r16 | 0X1;
    after_1:
    // 0x002752BC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x002752C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002752C4: lw          $a0, 0x2B50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B50);
    // 0x002752C8: jal         0x002017D4
    // 0x002752CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002752CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x002752D0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002752D4: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x002752D8: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x002752DC: jal         0x0026D210
    // 0x002752E0: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x002752E0: nop

    after_3:
    // 0x002752E4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002752E8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002752EC: nop

    // 0x002752F0: bc1f        L_00275304
    if (!c1cs) {
        // 0x002752F4: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_00275304;
    }
    // 0x002752F4: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x002752F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002752FC: lwc1        $f0, -0x7E14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E14);
    // 0x00275300: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
L_00275304:
    // 0x00275304: j           L_00275310
    // 0x00275308: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00275310;
    // 0x00275308: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0027530C:
    // 0x0027530C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00275310:
    // 0x00275310: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00275314: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00275318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027531C: jr          $ra
    // 0x00275320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00275320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021A344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021A344: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0021A348: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0021A34C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0021A350: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x0021A354: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x0021A358: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x0021A35C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x0021A360: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0021A364: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0021A368: lw          $a1, 0xD4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XD4);
    // 0x0021A36C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0021A370: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x0021A374: beq         $v0, $zero, L_0021A4DC
    if (ctx->r2 == 0) {
        // 0x0021A378: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0021A4DC;
    }
    // 0x0021A378: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0021A37C: lui         $s5, 0x800F
    ctx->r21 = S32(0X800F << 16);
    // 0x0021A380: addiu       $s5, $s5, 0x7078
    ctx->r21 = ADD32(ctx->r21, 0X7078);
    // 0x0021A384: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x0021A388: bne         $v1, $v0, L_0021A39C
    if (ctx->r3 != ctx->r2) {
        // 0x0021A38C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0021A39C;
    }
    // 0x0021A38C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021A390: andi        $v0, $a1, 0x2000
    ctx->r2 = ctx->r5 & 0X2000;
    // 0x0021A394: beq         $v0, $zero, L_0021A4DC
    if (ctx->r2 == 0) {
        // 0x0021A398: nop
    
            goto L_0021A4DC;
    }
    // 0x0021A398: nop

L_0021A39C:
    // 0x0021A39C: lui         $s0, 0x30
    ctx->r16 = S32(0X30 << 16);
    // 0x0021A3A0: and         $s0, $a1, $s0
    ctx->r16 = ctx->r5 & ctx->r16;
    // 0x0021A3A4: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0021A3A8: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0021A3AC: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x0021A3B0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0021A3B4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0021A3B8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0021A3BC: jal         0x0021A7EC
    // 0x0021A3C0: addiu       $s4, $s2, 0x4
    ctx->r20 = ADD32(ctx->r18, 0X4);
    func_0021A7EC(rdram, ctx);
        goto after_0;
    // 0x0021A3C0: addiu       $s4, $s2, 0x4
    ctx->r20 = ADD32(ctx->r18, 0X4);
    after_0:
    // 0x0021A3C4: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x0021A3C8: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0021A3CC: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0021A3D0: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x0021A3D4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0021A3D8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0021A3DC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0021A3E0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0021A3E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0021A3E8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0021A3EC: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x0021A3F0: sw          $t1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r9;
    // 0x0021A3F4: sw          $t2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r10;
    // 0x0021A3F8: bne         $s0, $zero, L_0021A45C
    if (ctx->r16 != 0) {
        // 0x0021A3FC: addiu       $s1, $sp, 0x30
        ctx->r17 = ADD32(ctx->r29, 0X30);
            goto L_0021A45C;
    }
    // 0x0021A3FC: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0021A400: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0021A404: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0021A408: beq         $v0, $zero, L_0021A45C
    if (ctx->r2 == 0) {
        // 0x0021A40C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0021A45C;
    }
    // 0x0021A40C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021A410: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021A414: jal         0x0020EF2C
    // 0x0021A418: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0021A418: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0021A41C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021A420: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021A424: jal         0x0020EEF8
    // 0x0021A428: addiu       $a2, $s2, 0x194
    ctx->r6 = ADD32(ctx->r18, 0X194);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x0021A428: addiu       $a2, $s2, 0x194
    ctx->r6 = ADD32(ctx->r18, 0X194);
    after_2:
    // 0x0021A42C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021A430: jal         0x0021A658
    // 0x0021A434: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021A658(rdram, ctx);
        goto after_3;
    // 0x0021A434: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0021A438: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0021A43C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021A440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A444: bne         $v1, $v0, L_0021A45C
    if (ctx->r3 != ctx->r2) {
        // 0x0021A448: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0021A45C;
    }
    // 0x0021A448: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021A44C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0021A450: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0021A454: jal         0x002233A8
    // 0x0021A458: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_002233A8(rdram, ctx);
        goto after_4;
    // 0x0021A458: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_4:
L_0021A45C:
    // 0x0021A45C: jal         0x0021A500
    // 0x0021A460: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021A500(rdram, ctx);
        goto after_5;
    // 0x0021A460: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0021A464: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A468: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021A46C: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x0021A470: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021A474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A478: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021A47C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021A480: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021A484: lw          $a1, 0xA4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XA4);
    // 0x0021A488: lw          $a2, 0xB0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XB0);
    // 0x0021A48C: jal         0x0020367C
    // 0x0021A490: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_6;
    // 0x0021A490: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_6:
    // 0x0021A494: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021A498: beq         $s1, $zero, L_0021A4DC
    if (ctx->r17 == 0) {
        // 0x0021A49C: nop
    
            goto L_0021A4DC;
    }
    // 0x0021A49C: nop

    // 0x0021A4A0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0021A4A4: jal         0x002017D4
    // 0x0021A4A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0021A4A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x0021A4AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021A4B0: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    // 0x0021A4B4: lw          $v1, 0x244($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X244);
    // 0x0021A4B8: jalr        $v1
    // 0x0021A4BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x0021A4BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_8:
    // 0x0021A4C0: addiu       $a0, $s2, 0x58
    ctx->r4 = ADD32(ctx->r18, 0X58);
    // 0x0021A4C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021A4C8: jal         0x0020C0D0
    // 0x0021A4CC: addiu       $a2, $s2, 0xBC
    ctx->r6 = ADD32(ctx->r18, 0XBC);
    func_0020C0D0(rdram, ctx);
        goto after_9;
    // 0x0021A4CC: addiu       $a2, $s2, 0xBC
    ctx->r6 = ADD32(ctx->r18, 0XBC);
    after_9:
    // 0x0021A4D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A4D4: jal         0x002051F4
    // 0x0021A4D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_10;
    // 0x0021A4D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
L_0021A4DC:
    // 0x0021A4DC: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x0021A4E0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0021A4E4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0021A4E8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0021A4EC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0021A4F0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0021A4F4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0021A4F8: jr          $ra
    // 0x0021A4FC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0021A4FC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
