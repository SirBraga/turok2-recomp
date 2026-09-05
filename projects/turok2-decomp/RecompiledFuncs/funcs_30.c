#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0026F470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F470: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026F474: lwc1        $f0, -0x7F70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F70);
    // 0x0026F478: jr          $ra
    // 0x0026F47C: nop

    return;
    // 0x0026F47C: nop

;}
RECOMP_FUNC void func_00416DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416DDC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00416DE0: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
    // 0x00416DE4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00416DE8: sh          $v0, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r2;
    // 0x00416DEC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00416DF0: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x00416DF4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00416DF8: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x00416DFC: lhu         $v0, 0x8($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8);
    // 0x00416E00: sh          $v0, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r2;
    // 0x00416E04: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x00416E08: sh          $v0, 0xE($t0)
    MEM_H(0XE, ctx->r8) = ctx->r2;
    // 0x00416E0C: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x00416E10: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00416E14: sb          $v0, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r2;
    // 0x00416E18: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x00416E1C: sb          $v0, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r2;
    // 0x00416E20: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x00416E24: sb          $v0, 0x12($t0)
    MEM_B(0X12, ctx->r8) = ctx->r2;
    // 0x00416E28: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x00416E2C: sb          $v0, 0x13($t0)
    MEM_B(0X13, ctx->r8) = ctx->r2;
    // 0x00416E30: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x00416E34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00416E38: sw          $a1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r5;
    // 0x00416E3C: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x00416E40: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    // 0x00416E44: sw          $v1, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r3;
    // 0x00416E48: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x00416E4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x00416E50: bne         $v0, $a0, L_00416E5C
    if (ctx->r2 != ctx->r4) {
        // 0x00416E54: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00416E5C;
    }
    // 0x00416E54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00416E58: addiu       $a3, $zero, 0x330
    ctx->r7 = ADD32(0, 0X330);
L_00416E5C:
    // 0x00416E5C: beq         $a3, $zero, L_00416EA0
    if (ctx->r7 == 0) {
        // 0x00416E60: nop
    
            goto L_00416EA0;
    }
    // 0x00416E60: nop

    // 0x00416E64: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00416E68: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x00416E6C: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x00416E70: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00416E74: bne         $v0, $a0, L_00416E88
    if (ctx->r2 != ctx->r4) {
        // 0x00416E78: nop
    
            goto L_00416E88;
    }
    // 0x00416E78: nop

    // 0x00416E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00416E80: sw          $v0, 0x328($v1)
    MEM_W(0X328, ctx->r3) = ctx->r2;
    // 0x00416E84: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
L_00416E88:
    // 0x00416E88: bne         $v0, $a0, L_00416E94
    if (ctx->r2 != ctx->r4) {
        // 0x00416E8C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00416E94;
    }
    // 0x00416E8C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00416E90: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_00416E94:
    // 0x00416E94: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00416E98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00416E9C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_00416EA0:
    // 0x00416EA0: jr          $ra
    // 0x00416EA4: nop

    return;
    // 0x00416EA4: nop

;}
RECOMP_FUNC void func_00226EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226EBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00226EC0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00226EC4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00226EC8: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x00226ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226ED0: bne         $v1, $v0, L_00226F2C
    if (ctx->r3 != ctx->r2) {
        // 0x00226ED4: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_00226F2C;
    }
    // 0x00226ED4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00226ED8: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x00226EDC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00226EE0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00226EE4: bne         $v1, $v0, L_00226F2C
    if (ctx->r3 != ctx->r2) {
        // 0x00226EE8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00226F2C;
    }
    // 0x00226EE8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00226EEC: jal         0x0020EF2C
    // 0x00226EF0: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00226EF0: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    after_0:
    // 0x00226EF4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00226EF8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00226EFC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00226F00: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00226F04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00226F08: lwc1        $f2, 0x604C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X604C);
    // 0x00226F0C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00226F10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00226F14: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00226F18: nop

    // 0x00226F1C: bc1t        L_00226F80
    if (c1cs) {
        // 0x00226F20: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_00226F80;
    }
    // 0x00226F20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_00226F24:
    // 0x00226F24: j           L_00226F80
    // 0x00226F28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_00226F80;
    // 0x00226F28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_00226F2C:
    // 0x00226F2C: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x00226F30: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00226F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226F38: bne         $v1, $v0, L_00226F80
    if (ctx->r3 != ctx->r2) {
        // 0x00226F3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00226F80;
    }
    // 0x00226F3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00226F40: lhu         $a0, 0xB8($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0XB8);
    // 0x00226F44: addiu       $v0, $zero, 0x44E
    ctx->r2 = ADD32(0, 0X44E);
    // 0x00226F48: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F4C: addiu       $v0, $zero, 0x453
        ctx->r2 = ADD32(0, 0X453);
            goto L_00226F24;
    }
    // 0x00226F4C: addiu       $v0, $zero, 0x453
    ctx->r2 = ADD32(0, 0X453);
    // 0x00226F50: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F54: addiu       $v0, $zero, 0x451
        ctx->r2 = ADD32(0, 0X451);
            goto L_00226F24;
    }
    // 0x00226F54: addiu       $v0, $zero, 0x451
    ctx->r2 = ADD32(0, 0X451);
    // 0x00226F58: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F5C: addiu       $v0, $zero, 0x450
        ctx->r2 = ADD32(0, 0X450);
            goto L_00226F24;
    }
    // 0x00226F5C: addiu       $v0, $zero, 0x450
    ctx->r2 = ADD32(0, 0X450);
    // 0x00226F60: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F64: addiu       $v0, $zero, 0x454
        ctx->r2 = ADD32(0, 0X454);
            goto L_00226F24;
    }
    // 0x00226F64: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x00226F68: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F6C: addiu       $v0, $zero, 0x455
        ctx->r2 = ADD32(0, 0X455);
            goto L_00226F24;
    }
    // 0x00226F6C: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x00226F70: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F74: addiu       $v0, $zero, 0x456
        ctx->r2 = ADD32(0, 0X456);
            goto L_00226F24;
    }
    // 0x00226F74: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00226F78: beq         $a0, $v0, L_00226F24
    if (ctx->r4 == ctx->r2) {
        // 0x00226F7C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00226F24;
    }
    // 0x00226F7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00226F80:
    // 0x00226F80: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00226F84: jr          $ra
    // 0x00226F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00226F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00446A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446A90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00446A94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00446A98: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00446A9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00446AA0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00446AA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00446AA8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00446AAC: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00446AB0: addiu       $s2, $s2, 0x200
    ctx->r18 = ADD32(ctx->r18, 0X200);
    // 0x00446AB4: beq         $v0, $zero, L_00446AD0
    if (ctx->r2 == 0) {
        // 0x00446AB8: nop
    
            goto L_00446AD0;
    }
    // 0x00446AB8: nop

    // 0x00446ABC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00446AC0: beq         $v0, $zero, L_00446AD0
    if (ctx->r2 == 0) {
        // 0x00446AC4: nop
    
            goto L_00446AD0;
    }
    // 0x00446AC4: nop

    // 0x00446AC8: jalr        $v0
    // 0x00446ACC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00446ACC: nop

    after_0:
L_00446AD0:
    // 0x00446AD0: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x00446AD4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00446AD8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00446ADC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00446AE0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00446AE4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00446AE8: nop

    // 0x00446AEC: bc1tl       L_00446AF4
    if (c1cs) {
        // 0x00446AF0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00446AF4;
    }
    goto skip_0;
    // 0x00446AF0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_00446AF4:
    // 0x00446AF4: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x00446AF8: lw          $v0, 0x4FC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4FC);
    // 0x00446AFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00446B00: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00446B04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00446B08: lw          $v0, 0x2330($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2330);
    // 0x00446B0C: beq         $v0, $zero, L_00446B1C
    if (ctx->r2 == 0) {
        // 0x00446B10: nop
    
            goto L_00446B1C;
    }
    // 0x00446B10: nop

    // 0x00446B14: jalr        $v0
    // 0x00446B18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00446B18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_00446B1C:
    // 0x00446B1C: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00446B20: blez        $v0, L_00446B48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446B24: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00446B48;
    }
    // 0x00446B24: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00446B28: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_00446B2C:
    // 0x00446B2C: jal         0x00235510
    // 0x00446B30: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    func_00235510(rdram, ctx);
        goto after_2;
    // 0x00446B30: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    after_2:
    // 0x00446B34: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00446B38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00446B3C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446B40: bne         $v0, $zero, L_00446B2C
    if (ctx->r2 != 0) {
        // 0x00446B44: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_00446B2C;
    }
    // 0x00446B44: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
L_00446B48:
    // 0x00446B48: jal         0x0040C850
    // 0x00446B4C: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    func_0040C850(rdram, ctx);
        goto after_3;
    // 0x00446B4C: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    after_3:
    // 0x00446B50: jal         0x0040C850
    // 0x00446B54: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    func_0040C850(rdram, ctx);
        goto after_4;
    // 0x00446B54: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    after_4:
    // 0x00446B58: jal         0x0040C850
    // 0x00446B5C: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    func_0040C850(rdram, ctx);
        goto after_5;
    // 0x00446B5C: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    after_5:
    // 0x00446B60: jal         0x0040CB28
    // 0x00446B64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0040CB28(rdram, ctx);
        goto after_6;
    // 0x00446B64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x00446B68: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00446B6C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00446B70: jal         0x0027AD88
    // 0x00446B74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0027AD88(rdram, ctx);
        goto after_7;
    // 0x00446B74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00446B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00446B7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00446B80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00446B84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00446B88: jr          $ra
    // 0x00446B8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00446B8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00253AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253AD4: addu        $t1, $t2, $zero
    ctx->r9 = ADD32(ctx->r10, 0);
L_00253AD8:
    // 0x00253AD8: beq         $a2, $zero, L_00253AEC
    if (ctx->r6 == 0) {
        // 0x00253ADC: addu        $v0, $a0, $t1
        ctx->r2 = ADD32(ctx->r4, ctx->r9);
            goto L_00253AEC;
    }
    // 0x00253ADC: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x00253AE0: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x00253AE4: beql        $v0, $zero, L_00253B40
    if (ctx->r2 == 0) {
        // 0x00253AE8: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_00253B40;
    }
    goto skip_0;
    // 0x00253AE8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_0:
L_00253AEC:
    // 0x00253AEC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00253AF0: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x00253AF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00253AF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00253AFC: lw          $a3, -0x9E8($at)
    ctx->r7 = MEM_W(ctx->r1, -0X9E8);
L_00253B00:
    // 0x00253B00: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x00253B04: beql        $v1, $zero, L_00253B40
    if (ctx->r3 == 0) {
        // 0x00253B08: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_00253B40;
    }
    goto skip_1;
    // 0x00253B08: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_1:
    // 0x00253B0C: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00253B10: bnel        $v0, $a1, L_00253B30
    if (ctx->r2 != ctx->r5) {
        // 0x00253B14: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_00253B30;
    }
    goto skip_2;
    // 0x00253B14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_2:
    // 0x00253B18: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x00253B1C: slt         $v0, $v1, $t2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x00253B20: bnel        $v0, $zero, L_00253B28
    if (ctx->r2 != 0) {
        // 0x00253B24: addu        $v1, $t2, $zero
        ctx->r3 = ADD32(ctx->r10, 0);
            goto L_00253B28;
    }
    goto skip_3;
    // 0x00253B24: addu        $v1, $t2, $zero
    ctx->r3 = ADD32(ctx->r10, 0);
    skip_3:
L_00253B28:
    // 0x00253B28: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x00253B2C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00253B30:
    // 0x00253B30: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x00253B34: bne         $v0, $zero, L_00253B00
    if (ctx->r2 != 0) {
        // 0x00253B38: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00253B00;
    }
    // 0x00253B38: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x00253B3C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_00253B40:
    // 0x00253B40: slti        $v0, $t1, 0x23
    ctx->r2 = SIGNED(ctx->r9) < 0X23 ? 1 : 0;
    // 0x00253B44: bne         $v0, $zero, L_00253AD8
    if (ctx->r2 != 0) {
        // 0x00253B48: addu        $v0, $t2, $zero
        ctx->r2 = ADD32(ctx->r10, 0);
            goto L_00253AD8;
    }
    // 0x00253B48: addu        $v0, $t2, $zero
    ctx->r2 = ADD32(ctx->r10, 0);
    // 0x00253B4C: jr          $ra
    // 0x00253B50: nop

    return;
    // 0x00253B50: nop

;}
RECOMP_FUNC void func_002079D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002079D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002079DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002079E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002079E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002079E8: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x002079EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002079F0: beq         $v0, $zero, L_00207A34
    if (ctx->r2 == 0) {
        // 0x002079F4: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00207A34;
    }
    // 0x002079F4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002079F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002079FC: jal         0x002017D4
    // 0x00207A00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00207A00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00207A04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00207A08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00207A0C: jal         0x002017D4
    // 0x00207A10: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00207A10: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    after_1:
    // 0x00207A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00207A18: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00207A1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00207A20: jal         0x002017D4
    // 0x00207A24: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00207A24: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_2:
    // 0x00207A28: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00207A2C: j           L_00207A40
    // 0x00207A30: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
        goto L_00207A40;
    // 0x00207A30: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_00207A34:
    // 0x00207A34: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x00207A38: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x00207A3C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
L_00207A40:
    // 0x00207A40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00207A44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00207A48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00207A4C: jr          $ra
    // 0x00207A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00207A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00293DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293DDC: sdc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X70, ctx->r29);
;}
RECOMP_FUNC void func_0023D4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023D4D4: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x0023D4D8: sw          $ra, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r31;
    // 0x0023D4DC: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x0023D4E0: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x0023D4E4: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x0023D4E8: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x0023D4EC: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x0023D4F0: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x0023D4F4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0023D4F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0023D4FC: lwc1        $f3, 0x0($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023D500: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0023D504: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023D508: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0023D50C: sub.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f1.fl;
    // 0x0023D510: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023D514: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0023D518: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023D51C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0023D520: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0023D524: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0023D528: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0023D52C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023D530: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0023D534: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023D538: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023D53C: nop

    // 0x0023D540: bc1t        L_0023D7A8
    if (c1cs) {
        // 0x0023D544: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_0023D7A8;
    }
    // 0x0023D544: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0023D548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0023D54C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0023D550: mov.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
    // 0x0023D554: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x0023D558: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_0023D55C:
    // 0x0023D55C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0023D560: beq         $a0, $t0, L_0023D56C
    if (ctx->r4 == ctx->r8) {
        // 0x0023D564: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_0023D56C;
    }
    // 0x0023D564: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023D568: addu        $v0, $a1, $a3
    ctx->r2 = ADD32(ctx->r5, ctx->r7);
L_0023D56C:
    // 0x0023D56C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0023D570: lwc1        $f3, 0x4($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0023D574: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023D578: sub.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f1.fl;
    // 0x0023D57C: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0023D580: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0023D584: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0023D588: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0023D58C: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0023D590: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023D594: c.lt.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl < ctx->f4.fl;
    // 0x0023D598: nop

    // 0x0023D59C: bc1t        L_0023D7A8
    if (c1cs) {
        // 0x0023D5A0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0023D7A8;
    }
    // 0x0023D5A0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0023D5A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0023D5A8: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x0023D5AC: bne         $v0, $zero, L_0023D55C
    if (ctx->r2 != 0) {
        // 0x0023D5B0: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0023D55C;
    }
    // 0x0023D5B0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0023D5B4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0023D5B8: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0023D5BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023D5C0: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
L_0023D5C4:
    // 0x0023D5C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0023D5C8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0023D5CC: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x0023D5D0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0023D5D4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x0023D5D8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0023D5DC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023D5E0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023D5E4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0023D5E8: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x0023D5EC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0023D5F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023D5F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023D5F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0023D5FC: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x0023D600: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0023D604: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023D608: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023D60C: jal         0x0020F85C
    // 0x0023D610: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_0;
    // 0x0023D610: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0023D614: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x0023D618: bne         $v0, $zero, L_0023D5C4
    if (ctx->r2 != 0) {
        // 0x0023D61C: addiu       $a0, $s4, 0x54
        ctx->r4 = ADD32(ctx->r20, 0X54);
            goto L_0023D5C4;
    }
    // 0x0023D61C: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
    // 0x0023D620: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x0023D624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023D628: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x0023D62C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023D630: addiu       $s5, $sp, 0x30
    ctx->r21 = ADD32(ctx->r29, 0X30);
    // 0x0023D634: jal         0x0020EF2C
    // 0x0023D638: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023D638: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
    // 0x0023D63C: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x0023D640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023D644: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x0023D648: jal         0x0020EF2C
    // 0x0023D64C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0023D64C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0023D650: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x0023D654: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023D658: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023D65C: jal         0x0020EFDC
    // 0x0023D660: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EFDC(rdram, ctx);
        goto after_3;
    // 0x0023D660: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0023D664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023D668: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x0023D66C: lw          $v1, 0x50($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X50);
    // 0x0023D670: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x0023D674: beq         $v1, $v0, L_0023D694
    if (ctx->r3 == ctx->r2) {
        // 0x0023D678: nop
    
            goto L_0023D694;
    }
    // 0x0023D678: nop

    // 0x0023D67C: blez        $v1, L_0023D720
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0023D680: slti        $v0, $v1, 0x9
        ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
            goto L_0023D720;
    }
    // 0x0023D680: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x0023D684: beq         $v0, $zero, L_0023D720
    if (ctx->r2 == 0) {
        // 0x0023D688: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_0023D720;
    }
    // 0x0023D688: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x0023D68C: bne         $v0, $zero, L_0023D724
    if (ctx->r2 != 0) {
        // 0x0023D690: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0023D724;
    }
    // 0x0023D690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0023D694:
    // 0x0023D694: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0023D698: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0023D69C: beq         $v0, $zero, L_0023D7A8
    if (ctx->r2 == 0) {
        // 0x0023D6A0: nop
    
            goto L_0023D7A8;
    }
    // 0x0023D6A0: nop

    // 0x0023D6A4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023D6A8: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x0023D6AC: lw          $v0, 0xC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC4);
    // 0x0023D6B0: bne         $v0, $zero, L_0023D7A8
    if (ctx->r2 != 0) {
        // 0x0023D6B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0023D7A8;
    }
    // 0x0023D6B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023D6B8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0023D6BC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0023D6C0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0023D6C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023D6C8: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0023D6CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0023D6D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023D6D4: jal         0x0023AB18
    // 0x0023D6D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0023AB18(rdram, ctx);
        goto after_4;
    // 0x0023D6D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x0023D6DC: beq         $v0, $zero, L_0023D7A8
    if (ctx->r2 == 0) {
        // 0x0023D6E0: nop
    
            goto L_0023D7A8;
    }
    // 0x0023D6E0: nop

    // 0x0023D6E4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023D6E8: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x0023D6EC: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x0023D6F0: addiu       $v0, $v1, 0xC8
    ctx->r2 = ADD32(ctx->r3, 0XC8);
    // 0x0023D6F4: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x0023D6F8: addiu       $v0, $v1, 0xD4
    ctx->r2 = ADD32(ctx->r3, 0XD4);
    // 0x0023D6FC: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x0023D700: lw          $v0, 0x50($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X50);
    // 0x0023D704: addiu       $v1, $v1, 0xC4
    ctx->r3 = ADD32(ctx->r3, 0XC4);
    // 0x0023D708: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    // 0x0023D70C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0023D710: lw          $v0, 0x4C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4C);
    // 0x0023D714: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0023D718: j           L_0023D7A8
    // 0x0023D71C: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
        goto L_0023D7A8;
    // 0x0023D71C: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
L_0023D720:
    // 0x0023D720: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0023D724:
    // 0x0023D724: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x0023D728: lb          $v0, 0x5($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5);
    // 0x0023D72C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x0023D730: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023D734: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0023D738: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0023D73C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023D740: jal         0x0023AB18
    // 0x0023D744: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0023AB18(rdram, ctx);
        goto after_5;
    // 0x0023D744: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x0023D748: beq         $v0, $zero, L_0023D7A8
    if (ctx->r2 == 0) {
        // 0x0023D74C: nop
    
            goto L_0023D7A8;
    }
    // 0x0023D74C: nop

    // 0x0023D750: lwc1        $f0, 0x44($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X44);
    // 0x0023D754: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0023D758: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023D75C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023D760: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x0023D764: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0023D768: swc1        $f0, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->f0.u32l;
    // 0x0023D76C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x0023D770: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    // 0x0023D774: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x0023D778: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023D77C: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x0023D780: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0023D784: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    // 0x0023D788: lw          $v0, 0x4C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4C);
    // 0x0023D78C: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x0023D790: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0023D794: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0023D798: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023D79C: beq         $v0, $zero, L_0023D7A8
    if (ctx->r2 == 0) {
        // 0x0023D7A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023D7A8;
    }
    // 0x0023D7A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023D7A4: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
L_0023D7A8:
    // 0x0023D7A8: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x0023D7AC: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x0023D7B0: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x0023D7B4: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x0023D7B8: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x0023D7BC: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x0023D7C0: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0023D7C4: jr          $ra
    // 0x0023D7C8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0023D7C8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_0045679C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045679C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004567A0: lw          $v0, -0x5334($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5334);
    // 0x004567A4: jr          $ra
    // 0x004567A8: nop

    return;
    // 0x004567A8: nop

;}
RECOMP_FUNC void func_004218C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004218C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004218C8: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x004218CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004218D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004218D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004218D8: bne         $v0, $zero, L_00421934
    if (ctx->r2 != 0) {
        // 0x004218DC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00421934;
    }
    // 0x004218DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004218E0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004218E4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004218E8: jal         0x002886AC
    // 0x004218EC: nop

    func_002886AC(rdram, ctx);
        goto after_0;
    // 0x004218EC: nop

    after_0:
    // 0x004218F0: jal         0x00284CE0
    // 0x004218F4: nop

    func_00284CE0(rdram, ctx);
        goto after_1;
    // 0x004218F4: nop

    after_1:
    // 0x004218F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004218FC: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x00421900: bne         $v0, $zero, L_00421934
    if (ctx->r2 != 0) {
        // 0x00421904: nop
    
            goto L_00421934;
    }
    // 0x00421904: nop

    // 0x00421908: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042190C: lw          $v0, -0xEBC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEBC);
    // 0x00421910: beq         $v0, $zero, L_00421920
    if (ctx->r2 == 0) {
        // 0x00421914: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421920;
    }
    // 0x00421914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421918: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042191C: sw          $v0, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r2;
L_00421920:
    // 0x00421920: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421924: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421928: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0042192C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421930: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421934:
    // 0x00421934: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421938: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0042193C: bne         $v0, $zero, L_00421998
    if (ctx->r2 != 0) {
        // 0x00421940: nop
    
            goto L_00421998;
    }
    // 0x00421940: nop

    // 0x00421944: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00421948: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0042194C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00421950: beq         $a0, $v0, L_00421990
    if (ctx->r4 == ctx->r2) {
        // 0x00421954: nop
    
            goto L_00421990;
    }
    // 0x00421954: nop

    // 0x00421958: jal         0x0028591C
    // 0x0042195C: nop

    func_0028591C(rdram, ctx);
        goto after_2;
    // 0x0042195C: nop

    after_2:
    // 0x00421960: beq         $v0, $zero, L_00421990
    if (ctx->r2 == 0) {
        // 0x00421964: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421990;
    }
    // 0x00421964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421968: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042196C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421970: jal         0x0041DD90
    // 0x00421974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_3;
    // 0x00421974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x00421978: beq         $v0, $zero, L_00421990
    if (ctx->r2 == 0) {
        // 0x0042197C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421990;
    }
    // 0x0042197C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421980: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00421984: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x00421988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042198C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421990:
    // 0x00421990: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421994: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
L_00421998:
    // 0x00421998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042199C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004219A0: jr          $ra
    // 0x004219A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004219A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004513B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004513B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004513B8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x004513BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004513C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004513C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004513C8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004513CC: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x004513D0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004513D4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x004513D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004513DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004513E0: lb          $v0, 0x25($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X25);
    // 0x004513E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004513E8: jal         0x0041648C
    // 0x004513EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004513EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004513F0: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x004513F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004513F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004513FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451400: jr          $ra
    // 0x00451404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041AB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AB78: jr          $ra
    // 0x0041AB7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041AB7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002117DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002117DC: mtc1        $a1, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r5;
    // 0x002117E0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x002117E4: sub.s       $f0, $f5, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x002117E8: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    // 0x002117EC: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x002117F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002117F4: lwc1        $f1, 0x568C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X568C);
    // 0x002117F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002117FC: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00211800: c.eq.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl == ctx->f1.fl;
    // 0x00211804: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00211808: bc1tl       L_00211858
    if (c1cs) {
        // 0x0021180C: swc1        $f5, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
            goto L_00211858;
    }
    goto skip_0;
    // 0x0021180C: swc1        $f5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    skip_0:
    // 0x00211810: c.lt.s      $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl < ctx->f5.fl;
    // 0x00211814: nop

    // 0x00211818: bc1f        L_00211830
    if (!c1cs) {
        // 0x0021181C: nop
    
            goto L_00211830;
    }
    // 0x0021181C: nop

    // 0x00211820: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x00211824: c.lt.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl < ctx->f0.fl;
    // 0x00211828: j           L_0021184C
    // 0x0021182C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
        goto L_0021184C;
    // 0x0021182C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_00211830:
    // 0x00211830: c.lt.s      $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f5.fl < ctx->f4.fl;
    // 0x00211834: nop

    // 0x00211838: bc1f        L_00211858
    if (!c1cs) {
        // 0x0021183C: nop
    
            goto L_00211858;
    }
    // 0x0021183C: nop

    // 0x00211840: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x00211844: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00211848: c.lt.s      $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f0.fl < ctx->f5.fl;
L_0021184C:
    // 0x0021184C: nop

    // 0x00211850: bc1tl       L_00211858
    if (c1cs) {
        // 0x00211854: swc1        $f5, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
            goto L_00211858;
    }
    goto skip_1;
    // 0x00211854: swc1        $f5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    skip_1:
L_00211858:
    // 0x00211858: jr          $ra
    // 0x0021185C: nop

    return;
    // 0x0021185C: nop

;}
RECOMP_FUNC void func_0026C8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C8B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026C8B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026C8B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026C8BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026C8C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C8C4: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x0026C8C8: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x0026C8CC: bne         $s0, $a1, L_0026C920
    if (ctx->r16 != ctx->r5) {
        // 0x0026C8D0: nop
    
            goto L_0026C920;
    }
    // 0x0026C8D0: nop

    // 0x0026C8D4: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0026C8D8: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0026C8DC: bne         $v0, $zero, L_0026C920
    if (ctx->r2 != 0) {
        // 0x0026C8E0: ori         $v0, $v1, 0x4
        ctx->r2 = ctx->r3 | 0X4;
            goto L_0026C920;
    }
    // 0x0026C8E0: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x0026C8E4: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0026C8E8: beq         $a0, $zero, L_0026C8F8
    if (ctx->r4 == 0) {
        // 0x0026C8EC: sh          $v0, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r2;
            goto L_0026C8F8;
    }
    // 0x0026C8EC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x0026C8F0: jal         0x0026C8B0
    // 0x0026C8F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C8B0(rdram, ctx);
        goto after_0;
    // 0x0026C8F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0026C8F8:
    // 0x0026C8F8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0026C8FC: beq         $a0, $zero, L_0026C90C
    if (ctx->r4 == 0) {
        // 0x0026C900: nop
    
            goto L_0026C90C;
    }
    // 0x0026C900: nop

    // 0x0026C904: jal         0x0026C8B0
    // 0x0026C908: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C8B0(rdram, ctx);
        goto after_1;
    // 0x0026C908: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0026C90C:
    // 0x0026C90C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x0026C910: beq         $a0, $zero, L_0026C920
    if (ctx->r4 == 0) {
        // 0x0026C914: nop
    
            goto L_0026C920;
    }
    // 0x0026C914: nop

    // 0x0026C918: jal         0x0026C8B0
    // 0x0026C91C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C8B0(rdram, ctx);
        goto after_2;
    // 0x0026C91C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0026C920:
    // 0x0026C920: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026C924: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026C928: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026C92C: jr          $ra
    // 0x0026C930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026C930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00450D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450D78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00450D7C: lwc1        $f0, 0x8FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8FC);
    // 0x00450D80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00450D84: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00450D88: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00450D8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00450D90: lwc1        $f1, 0xEE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XEE8);
    // 0x00450D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00450D98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00450D9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00450DA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00450DA4: swc1        $f0, 0x8FC($at)
    MEM_W(0X8FC, ctx->r1) = ctx->f0.u32l;
    // 0x00450DA8: bc1f        L_00450DC8
    if (!c1cs) {
        // 0x00450DAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00450DC8;
    }
    // 0x00450DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00450DB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00450DB4: addiu       $a0, $a0, -0x5350
    ctx->r4 = ADD32(ctx->r4, -0X5350);
    // 0x00450DB8: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x00450DBC: jal         0x002534E0
    // 0x00450DC0: addiu       $a0, $a0, -0x1440
    ctx->r4 = ADD32(ctx->r4, -0X1440);
    func_002534E0(rdram, ctx);
        goto after_0;
    // 0x00450DC0: addiu       $a0, $a0, -0x1440
    ctx->r4 = ADD32(ctx->r4, -0X1440);
    after_0:
    // 0x00450DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00450DC8:
    // 0x00450DC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00450DCC: jr          $ra
    // 0x00450DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00450DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026C9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C9B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026C9BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026C9C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026C9C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026C9C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C9CC: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x0026C9D0: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x0026C9D4: bne         $s0, $a1, L_0026CA28
    if (ctx->r16 != ctx->r5) {
        // 0x0026C9D8: nop
    
            goto L_0026CA28;
    }
    // 0x0026C9D8: nop

    // 0x0026C9DC: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0026C9E0: andi        $v0, $v1, 0x4000
    ctx->r2 = ctx->r3 & 0X4000;
    // 0x0026C9E4: bne         $v0, $zero, L_0026CA28
    if (ctx->r2 != 0) {
        // 0x0026C9E8: ori         $v0, $v1, 0x4000
        ctx->r2 = ctx->r3 | 0X4000;
            goto L_0026CA28;
    }
    // 0x0026C9E8: ori         $v0, $v1, 0x4000
    ctx->r2 = ctx->r3 | 0X4000;
    // 0x0026C9EC: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0026C9F0: beq         $a0, $zero, L_0026CA00
    if (ctx->r4 == 0) {
        // 0x0026C9F4: sh          $v0, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r2;
            goto L_0026CA00;
    }
    // 0x0026C9F4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x0026C9F8: jal         0x0026C9B8
    // 0x0026C9FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C9B8(rdram, ctx);
        goto after_0;
    // 0x0026C9FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0026CA00:
    // 0x0026CA00: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0026CA04: beq         $a0, $zero, L_0026CA14
    if (ctx->r4 == 0) {
        // 0x0026CA08: nop
    
            goto L_0026CA14;
    }
    // 0x0026CA08: nop

    // 0x0026CA0C: jal         0x0026C9B8
    // 0x0026CA10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C9B8(rdram, ctx);
        goto after_1;
    // 0x0026CA10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0026CA14:
    // 0x0026CA14: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x0026CA18: beq         $a0, $zero, L_0026CA28
    if (ctx->r4 == 0) {
        // 0x0026CA1C: nop
    
            goto L_0026CA28;
    }
    // 0x0026CA1C: nop

    // 0x0026CA20: jal         0x0026C9B8
    // 0x0026CA24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C9B8(rdram, ctx);
        goto after_2;
    // 0x0026CA24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0026CA28:
    // 0x0026CA28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026CA2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026CA30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026CA34: jr          $ra
    // 0x0026CA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026CA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00232B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00232B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00232B48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00232B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00232B50: lw          $v0, 0x1B8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1B8);
    // 0x00232B54: beq         $v0, $zero, L_00232B74
    if (ctx->r2 == 0) {
        // 0x00232B58: nop
    
            goto L_00232B74;
    }
    // 0x00232B58: nop

    // 0x00232B5C: jal         0x00275F7C
    // 0x00232B60: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x00232B60: nop

    after_0:
    // 0x00232B64: lw          $a1, 0x1B8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1B8);
    // 0x00232B68: jal         0x00275D34
    // 0x00232B6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x00232B6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00232B70: sw          $zero, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = 0;
L_00232B74:
    // 0x00232B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00232B78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00232B7C: jr          $ra
    // 0x00232B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00232B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00279158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00279158: addu        $t4, $a0, $zero
    ctx->r12 = ADD32(ctx->r4, 0);
    // 0x0027915C: lui         $t1, 0xF590
    ctx->r9 = S32(0XF590 << 16);
    // 0x00279160: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00279164: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00279168: ori         $t1, $t1, 0x100
    ctx->r9 = ctx->r9 | 0X100;
    // 0x0027916C: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x00279170: addu        $t7, $a2, $zero
    ctx->r15 = ADD32(ctx->r6, 0);
    // 0x00279174: addu        $t8, $a3, $zero
    ctx->r24 = ADD32(ctx->r7, 0);
    // 0x00279178: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0027917C: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x00279180: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x00279184: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00279188: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027918C: addu        $t3, $t2, $zero
    ctx->r11 = ADD32(ctx->r10, 0);
    // 0x00279190: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00279194: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x00279198: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x0027919C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x002791A0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002791A4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x002791A8: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x002791AC: addiu       $t0, $v1, 0x10
    ctx->r8 = ADD32(ctx->r3, 0X10);
    // 0x002791B0: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x002791B4: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002791B8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x002791BC: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x002791C0: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x002791C4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x002791C8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002791CC: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x002791D0: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x002791D4: bgez        $t2, L_002791E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x002791D8: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_002791E0;
    }
    // 0x002791D8: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x002791DC: addiu       $t3, $t2, 0xF
    ctx->r11 = ADD32(ctx->r10, 0XF);
L_002791E0:
    // 0x002791E0: sra         $a1, $t3, 4
    ctx->r5 = S32(SIGNED(ctx->r11) >> 4);
    // 0x002791E4: blez        $a1, L_002791F0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x002791E8: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_002791F0;
    }
    // 0x002791E8: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x002791EC: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_002791F0:
    // 0x002791F0: mult        $t2, $t6
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002791F4: mflo        $t9
    ctx->r25 = lo;
    // 0x002791F8: addiu       $v0, $t9, 0x3
    ctx->r2 = ADD32(ctx->r25, 0X3);
    // 0x002791FC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x00279200: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x00279204: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x00279208: beql        $v0, $zero, L_00279210
    if (ctx->r2 == 0) {
        // 0x0027920C: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_00279210;
    }
    goto skip_0;
    // 0x0027920C: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_0:
L_00279210:
    // 0x00279210: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x00279214: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279218: blez        $a1, L_0027925C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027921C: or          $a0, $v0, $t1
        ctx->r4 = ctx->r2 | ctx->r9;
            goto L_0027925C;
    }
    // 0x0027921C: or          $a0, $v0, $t1
    ctx->r4 = ctx->r2 | ctx->r9;
    // 0x00279220: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x00279224: bne         $a1, $zero, L_00279230
    if (ctx->r5 != 0) {
        // 0x00279228: nop
    
            goto L_00279230;
    }
    // 0x00279228: nop

    // 0x0027922C: break       7
    do_break(2593324);
L_00279230:
    // 0x00279230: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00279234: bne         $a1, $at, L_00279248
    if (ctx->r5 != ctx->r1) {
        // 0x00279238: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00279248;
    }
    // 0x00279238: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027923C: bne         $v1, $at, L_00279248
    if (ctx->r3 != ctx->r1) {
        // 0x00279240: nop
    
            goto L_00279248;
    }
    // 0x00279240: nop

    // 0x00279244: break       6
    do_break(2593348);
L_00279248:
    // 0x00279248: mflo        $v0
    ctx->r2 = lo;
    // 0x0027924C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279250: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279254: j           L_00279268
    // 0x00279258: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_00279268;
    // 0x00279258: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0027925C:
    // 0x0027925C: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00279260: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279264: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_00279268:
    // 0x00279268: lui         $a2, 0xF580
    ctx->r6 = S32(0XF580 << 16);
    // 0x0027926C: ori         $a2, $a2, 0x100
    ctx->r6 = ctx->r6 | 0X100;
    // 0x00279270: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00279274: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00279278: addu        $t1, $t2, $zero
    ctx->r9 = ADD32(ctx->r10, 0);
    // 0x0027927C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00279280: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00279284: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x00279288: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0027928C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00279290: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x00279294: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00279298: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027929C: sra         $v0, $t2, 1
    ctx->r2 = S32(SIGNED(ctx->r10) >> 1);
    // 0x002792A0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x002792A4: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x002792A8: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x002792AC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x002792B0: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x002792B4: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x002792B8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002792BC: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x002792C0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002792C4: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x002792C8: addiu       $v1, $t2, -0x1
    ctx->r3 = ADD32(ctx->r10, -0X1);
    // 0x002792CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002792D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x002792D4: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x002792D8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x002792DC: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x002792E0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x002792E4: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x002792E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002792EC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002792F0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002792F4: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x002792F8: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x002792FC: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x00279300: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00279304: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00279308: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x0027930C: addiu       $a2, $a0, 0x20
    ctx->r6 = ADD32(ctx->r4, 0X20);
    // 0x00279310: lui         $v0, 0xF510
    ctx->r2 = S32(0XF510 << 16);
    // 0x00279314: addiu       $a3, $a0, 0x28
    ctx->r7 = ADD32(ctx->r4, 0X28);
    // 0x00279318: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027931C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x00279320: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00279324: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x00279328: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x0027932C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x00279330: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x00279334: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00279338: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027933C: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00279340: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00279344: bgez        $t2, L_00279350
    if (SIGNED(ctx->r10) >= 0) {
        // 0x00279348: sw          $v0, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r2;
            goto L_00279350;
    }
    // 0x00279348: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x0027934C: addiu       $t1, $t2, 0x3
    ctx->r9 = ADD32(ctx->r10, 0X3);
L_00279350:
    // 0x00279350: sra         $a1, $t1, 2
    ctx->r5 = S32(SIGNED(ctx->r9) >> 2);
    // 0x00279354: blez        $a1, L_00279360
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00279358: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_00279360;
    }
    // 0x00279358: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x0027935C: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_00279360:
    // 0x00279360: mult        $t2, $t6
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279364: mflo        $t9
    ctx->r25 = lo;
    // 0x00279368: addiu       $a0, $t9, -0x1
    ctx->r4 = ADD32(ctx->r25, -0X1);
    // 0x0027936C: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x00279370: beql        $v0, $zero, L_00279378
    if (ctx->r2 == 0) {
        // 0x00279374: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_00279378;
    }
    goto skip_1;
    // 0x00279374: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_1:
L_00279378:
    // 0x00279378: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x0027937C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279380: blez        $a1, L_002793C4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00279384: or          $a0, $v0, $t0
        ctx->r4 = ctx->r2 | ctx->r8;
            goto L_002793C4;
    }
    // 0x00279384: or          $a0, $v0, $t0
    ctx->r4 = ctx->r2 | ctx->r8;
    // 0x00279388: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x0027938C: bne         $a1, $zero, L_00279398
    if (ctx->r5 != 0) {
        // 0x00279390: nop
    
            goto L_00279398;
    }
    // 0x00279390: nop

    // 0x00279394: break       7
    do_break(2593684);
L_00279398:
    // 0x00279398: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027939C: bne         $a1, $at, L_002793B0
    if (ctx->r5 != ctx->r1) {
        // 0x002793A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002793B0;
    }
    // 0x002793A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002793A4: bne         $v1, $at, L_002793B0
    if (ctx->r3 != ctx->r1) {
        // 0x002793A8: nop
    
            goto L_002793B0;
    }
    // 0x002793A8: nop

    // 0x002793AC: break       6
    do_break(2593708);
L_002793B0:
    // 0x002793B0: mflo        $v0
    ctx->r2 = lo;
    // 0x002793B4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002793B8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002793BC: j           L_002793D0
    // 0x002793C0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_002793D0;
    // 0x002793C0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_002793C4:
    // 0x002793C4: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x002793C8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002793CC: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_002793D0:
    // 0x002793D0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x002793D4: addiu       $t1, $t1, -0x71DC
    ctx->r9 = ADD32(ctx->r9, -0X71DC);
    // 0x002793D8: addu        $t4, $t2, $zero
    ctx->r12 = ADD32(ctx->r10, 0);
    // 0x002793DC: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x002793E0: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x002793E4: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x002793E8: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002793EC: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x002793F0: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    // 0x002793F4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x002793F8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002793FC: sll         $v0, $t2, 1
    ctx->r2 = S32(ctx->r10 << 1);
    // 0x00279400: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00279404: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00279408: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x0027940C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00279410: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00279414: lui         $v1, 0xF510
    ctx->r3 = S32(0XF510 << 16);
    // 0x00279418: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027941C: addiu       $a2, $t0, 0x10
    ctx->r6 = ADD32(ctx->r8, 0X10);
    // 0x00279420: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00279424: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00279428: addiu       $v0, $t2, -0x1
    ctx->r2 = ADD32(ctx->r10, -0X1);
    // 0x0027942C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279430: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279434: sll         $t3, $v0, 12
    ctx->r11 = S32(ctx->r2 << 12);
    // 0x00279438: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x0027943C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279440: andi        $a1, $v0, 0xFFF
    ctx->r5 = ctx->r2 & 0XFFF;
    // 0x00279444: or          $v0, $t3, $a1
    ctx->r2 = ctx->r11 | ctx->r5;
    // 0x00279448: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x0027944C: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x00279450: sw          $t5, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r13;
    // 0x00279454: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00279458: addiu       $a0, $t0, 0x18
    ctx->r4 = ADD32(ctx->r8, 0X18);
    // 0x0027945C: bgez        $t2, L_00279468
    if (SIGNED(ctx->r10) >= 0) {
        // 0x00279460: sw          $a0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r4;
            goto L_00279468;
    }
    // 0x00279460: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x00279464: addiu       $t4, $t2, 0xF
    ctx->r12 = ADD32(ctx->r10, 0XF);
L_00279468:
    // 0x00279468: lui         $v1, 0xF580
    ctx->r3 = S32(0XF580 << 16);
    // 0x0027946C: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00279470: lui         $a3, 0x400
    ctx->r7 = S32(0X400 << 16);
    // 0x00279474: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x00279478: sra         $v0, $t4, 4
    ctx->r2 = S32(SIGNED(ctx->r12) >> 4);
    // 0x0027947C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279480: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00279484: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00279488: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x0027948C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00279490: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00279494: addiu       $a2, $t0, 0x20
    ctx->r6 = ADD32(ctx->r8, 0X20);
    // 0x00279498: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x0027949C: or          $v0, $t3, $v0
    ctx->r2 = ctx->r11 | ctx->r2;
    // 0x002794A0: addiu       $a1, $t0, 0x28
    ctx->r5 = ADD32(ctx->r8, 0X28);
    // 0x002794A4: addu        $v1, $t7, $t2
    ctx->r3 = ADD32(ctx->r15, ctx->r10);
    // 0x002794A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002794AC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x002794B0: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x002794B4: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x002794B8: sw          $t5, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r13;
    // 0x002794BC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002794C0: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x002794C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002794C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002794CC: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x002794D0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002794D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002794D8: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x002794DC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002794E0: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x002794E4: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x002794E8: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x002794EC: sll         $v1, $t8, 2
    ctx->r3 = S32(ctx->r24 << 2);
    // 0x002794F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x002794F4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002794F8: addiu       $v1, $t0, 0x30
    ctx->r3 = ADD32(ctx->r8, 0X30);
    // 0x002794FC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00279500: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x00279504: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x00279508: sw          $v0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r2;
    // 0x0027950C: addiu       $v0, $t0, 0x38
    ctx->r2 = ADD32(ctx->r8, 0X38);
    // 0x00279510: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00279514: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x00279518: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x0027951C: sw          $v0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r2;
    // 0x00279520: jr          $ra
    // 0x00279524: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    return;
    // 0x00279524: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
;}
RECOMP_FUNC void func_0029A4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A4A0: lui         $v0, 0xA404
    ctx->r2 = S32(0XA404 << 16);
    // 0x0029A4A4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029A4A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029A4AC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0029A4B0: beq         $v0, $zero, L_0029A4C4
    if (ctx->r2 == 0) {
            // 0x0029A4B4: lui         $v0, 0xA408
    ctx->r2 = S32(0XA408 << 16);
    func_0029A4C4(rdram, ctx);
    return;
    }
    // 0x0029A4B4: lui         $v0, 0xA408
    ctx->r2 = S32(0XA408 << 16);
    // 0x0029A4B8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x0029A4BC: jr          $ra
    // 0x0029A4C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0029A4C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00456624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D6B0:
    // 0x00456624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00456628: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045662C: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00456630: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00456634: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00456638: jal         0x0025340C
    // 0x0045663C: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0045663C: nop

    after_0:
    // 0x00456640: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00456644: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00456648: sll         $a1, $v1, 3
    ctx->r5 = S32(ctx->r3 << 3);
    // 0x0045664C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456650: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456654: lw          $a0, 0x1FB8($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB8);
    // 0x00456658: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045665C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456660: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x00456664: beq         $a0, $zero, L_004566AC
    if (ctx->r4 == 0) {
        // 0x00456668: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_004566AC;
    }
    // 0x00456668: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0045666C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456670: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456674: lw          $v1, 0x1FB0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB0);
    // 0x00456678: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045667C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456680: sw          $a0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r4;
    // 0x00456684: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00456688: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045668C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456690: sw          $v1, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r3;
    // 0x00456694: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00456698: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045669C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x004566A0: sb          $zero, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = 0;
    // 0x004566A4: j           L_0041D6B0
    // 0x004566A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041D6B0(rdram, ctx);
    return;
    // 0x004566A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004566AC:
    // 0x004566AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004566B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004566B4: jr          $ra
    // 0x004566B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004566B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00294340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294340: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00294344: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294348: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029434C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00294350: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00294354: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00294358: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029435C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00294360: beq         $v0, $zero, L_002943B4
    if (ctx->r2 == 0) {
        // 0x00294364: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002943B4;
    }
    // 0x00294364: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294368: jal         0x00294B58
    // 0x0029436C: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x0029436C: nop

    after_0:
    // 0x00294370: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00294374: beq         $a2, $zero, L_002943B4
    if (ctx->r6 == 0) {
        // 0x00294378: nop
    
            goto L_002943B4;
    }
    // 0x00294378: nop

    // 0x0029437C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00294380: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x00294384: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x00294388: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0029438C: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x00294390: swc1        $f20, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f20.u32l;
    // 0x00294394: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00294398: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029439C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x002943A0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002943A4: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x002943A8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002943AC: jalr        $v0
    // 0x002943B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x002943B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_002943B4:
    // 0x002943B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002943B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002943BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002943C0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002943C4: jr          $ra
    // 0x002943C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002943C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A24B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A24B4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002A24B8: lw          $v0, -0x3D00($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X3D00);
    // 0x002A24BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002A24C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002A24C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A24C8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002A24CC: bne         $v0, $zero, L_002A2588
    if (ctx->r2 != 0) {
        // 0x002A24D0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_002A2588;
    }
    // 0x002A24D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002A24D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A24D8: addiu       $a0, $a0, -0x7F10
    ctx->r4 = ADD32(ctx->r4, -0X7F10);
    // 0x002A24DC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x002A24E0: addiu       $a1, $a1, -0x7F1C
    ctx->r5 = ADD32(ctx->r5, -0X7F1C);
    // 0x002A24E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A24E8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002A24EC: sw          $v0, -0x3D00($v1)
    MEM_W(-0X3D00, ctx->r3) = ctx->r2;
    // 0x002A24F0: jal         0x0029B030
    // 0x002A24F4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x002A24F4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    after_0:
    // 0x002A24F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A24FC: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A2500: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x002A2504: addiu       $a1, $a1, -0x7F20
    ctx->r5 = ADD32(ctx->r5, -0X7F20);
    // 0x002A2508: jal         0x0029B030
    // 0x002A250C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x002A250C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x002A2510: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2514: addiu       $a0, $a0, -0x7AC0
    ctx->r4 = ADD32(ctx->r4, -0X7AC0);
    // 0x002A2518: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x002A251C: addiu       $a1, $a1, -0x7C78
    ctx->r5 = ADD32(ctx->r5, -0X7C78);
    // 0x002A2520: jal         0x0029B030
    // 0x002A2524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x002A2524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002A2528: addiu       $s0, $s0, 0x70C0
    ctx->r16 = ADD32(ctx->r16, 0X70C0);
    // 0x002A252C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A2530: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x002A2534: addiu       $a1, $a1, 0x70B4
    ctx->r5 = ADD32(ctx->r5, 0X70B4);
    // 0x002A2538: jal         0x0029B030
    // 0x002A253C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x002A253C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x002A2540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002A2544: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A2548: jal         0x0029B950
    // 0x002A254C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x002A254C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x002A2550: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002A2554: addiu       $s0, $s0, -0x7C70
    ctx->r16 = ADD32(ctx->r16, -0X7C70);
    // 0x002A2558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A255C: addiu       $a1, $zero, 0x4653
    ctx->r5 = ADD32(0, 0X4653);
    // 0x002A2560: lui         $a2, 0x2A
    ctx->r6 = S32(0X2A << 16);
    // 0x002A2564: addiu       $a2, $a2, 0x2650
    ctx->r6 = ADD32(ctx->r6, 0X2650);
    // 0x002A2568: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A256C: addiu       $v0, $v0, -0x7F20
    ctx->r2 = ADD32(ctx->r2, -0X7F20);
    // 0x002A2570: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A2574: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002A2578: jal         0x0029B060
    // 0x002A257C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    osCreateThread_recomp(rdram, ctx);
        goto after_5;
    // 0x002A257C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_5:
    // 0x002A2580: jal         0x0029BB10
    // 0x002A2584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_6;
    // 0x002A2584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_002A2588:
    // 0x002A2588: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002A258C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002A2590: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002A2594: jr          $ra
    // 0x002A2598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002A2598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004558B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004558B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x004558B8: jal         0x00210318
    // 0x004558BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210318(rdram, ctx);
        goto after_0;
    // 0x004558BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x004558C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004558C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004558C8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x004558CC: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x004558D0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004558D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004558D8: lw          $s0, 0x1C($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X1C);
    // 0x004558DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004558E0: jal         0x0025340C
    // 0x004558E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_1;
    // 0x004558E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004558E8: jal         0x00421170
    // 0x004558EC: nop

    entry_00421170(rdram, ctx);
        goto after_2;
    // 0x004558EC: nop

    after_2:
    // 0x004558F0: addiu       $a0, $s1, 0x5BC
    ctx->r4 = ADD32(ctx->r17, 0X5BC);
    // 0x004558F4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004558F8: addiu       $a1, $a1, -0x4A14
    ctx->r5 = ADD32(ctx->r5, -0X4A14);
    // 0x004558FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00455900: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x00455904: jal         0x00416644
    // 0x00455908: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00416644(rdram, ctx);
        goto after_3;
    // 0x00455908: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0045590C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00455910: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00455914: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00455918: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045591C: jr          $ra
    // 0x00455920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00455920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004680E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004680E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004680E8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x004680EC: addiu       $v1, $v1, 0x56B0
    ctx->r3 = ADD32(ctx->r3, 0X56B0);
    // 0x004680F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004680F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004680F8: lwc1        $f0, 0x1C0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C0);
    // 0x004680FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00468100: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00468104: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x00468108: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0046810C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x00468110: bne         $v0, $zero, L_00468168
    if (ctx->r2 != 0) {
        // 0x00468114: swc1        $f0, 0x1C0($v1)
        MEM_W(0X1C0, ctx->r3) = ctx->f0.u32l;
            goto L_00468168;
    }
    // 0x00468114: swc1        $f0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->f0.u32l;
    // 0x00468118: lw          $v0, 0x1BC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1BC);
    // 0x0046811C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00468120: blez        $v0, L_00468138
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468124: sw          $v0, 0x1BC($v1)
        MEM_W(0X1BC, ctx->r3) = ctx->r2;
            goto L_00468138;
    }
    // 0x00468124: sw          $v0, 0x1BC($v1)
    MEM_W(0X1BC, ctx->r3) = ctx->r2;
    // 0x00468128: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0046812C: lw          $v0, 0x5D2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D2C);
    // 0x00468130: beq         $v0, $zero, L_00468168
    if (ctx->r2 == 0) {
        // 0x00468134: nop
    
            goto L_00468168;
    }
    // 0x00468134: nop

L_00468138:
    // 0x00468138: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0046813C: addiu       $s0, $s0, 0x6CB0
    ctx->r16 = ADD32(ctx->r16, 0X6CB0);
    // 0x00468140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00468144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00468148: jal         0x00430250
    // 0x0046814C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    func_00430250(rdram, ctx);
        goto after_0;
    // 0x0046814C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    after_0:
    // 0x00468150: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00468154: lw          $v0, 0x5D2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D2C);
    // 0x00468158: beq         $v0, $zero, L_00468168
    if (ctx->r2 == 0) {
        // 0x0046815C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00468168;
    }
    // 0x0046815C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00468160: jal         0x00288C5C
    // 0x00468164: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_00288C5C(rdram, ctx);
        goto after_1;
    // 0x00468164: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
L_00468168:
    // 0x00468168: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0046816C: addiu       $a2, $a2, 0x56B0
    ctx->r6 = ADD32(ctx->r6, 0X56B0);
    // 0x00468170: lw          $v0, 0x1B4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1B4);
    // 0x00468174: blez        $v0, L_00468224
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468178: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00468224;
    }
    // 0x00468178: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0046817C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00468180: lw          $a3, 0x6D20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D20);
    // 0x00468184: lui         $t3, 0x1234
    ctx->r11 = S32(0X1234 << 16);
    // 0x00468188: ori         $t3, $t3, 0x5678
    ctx->r11 = ctx->r11 | 0X5678;
    // 0x0046818C: lui         $t2, 0x8765
    ctx->r10 = S32(0X8765 << 16);
    // 0x00468190: ori         $t2, $t2, 0x4321
    ctx->r10 = ctx->r10 | 0X4321;
    // 0x00468194: lui         $t1, 0x1234
    ctx->r9 = S32(0X1234 << 16);
    // 0x00468198: ori         $t1, $t1, 0x8765
    ctx->r9 = ctx->r9 | 0X8765;
    // 0x0046819C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x004681A0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_004681A4:
    // 0x004681A4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004681A8: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004681AC: mflo        $t4
    ctx->r12 = lo;
    // 0x004681B0: nop

    // 0x004681B4: nop

    // 0x004681B8: mult        $t4, $t3
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004681BC: lw          $v1, 0x1C4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C4);
    // 0x004681C0: mflo        $t4
    ctx->r12 = lo;
    // 0x004681C4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x004681C8: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x004681CC: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x004681D0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004681D4: mflo        $t4
    ctx->r12 = lo;
    // 0x004681D8: nop

    // 0x004681DC: nop

    // 0x004681E0: mult        $t4, $t2
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004681E4: mflo        $t4
    ctx->r12 = lo;
    // 0x004681E8: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x004681EC: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x004681F0: lw          $v0, 0x114($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X114);
    // 0x004681F4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004681F8: mflo        $t4
    ctx->r12 = lo;
    // 0x004681FC: nop

    // 0x00468200: nop

    // 0x00468204: mult        $t4, $t1
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468208: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0046820C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x00468210: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00468214: mflo        $t4
    ctx->r12 = lo;
    // 0x00468218: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0046821C: bne         $v0, $zero, L_004681A4
    if (ctx->r2 != 0) {
        // 0x00468220: sw          $v1, 0x1C4($a2)
        MEM_W(0X1C4, ctx->r6) = ctx->r3;
            goto L_004681A4;
    }
    // 0x00468220: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
L_00468224:
    // 0x00468224: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00468228: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0046822C: lw          $v0, 0x194($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X194);
    // 0x00468230: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468234: mflo        $t4
    ctx->r12 = lo;
    // 0x00468238: lui         $v0, 0x8765
    ctx->r2 = S32(0X8765 << 16);
    // 0x0046823C: ori         $v0, $v0, 0x1234
    ctx->r2 = ctx->r2 | 0X1234;
    // 0x00468240: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468244: lw          $v0, 0x1C4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C4);
    // 0x00468248: mflo        $t4
    ctx->r12 = lo;
    // 0x0046824C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x00468250: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
    // 0x00468254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00468258: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0046825C: jr          $ra
    // 0x00468260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00468260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00265B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265B2C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00265B30: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x00265B34: bne         $v1, $zero, L_00265B40
    if (ctx->r3 != 0) {
        // 0x00265B38: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00265B40;
    }
    // 0x00265B38: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00265B3C: addiu       $v0, $zero, 0x5334
    ctx->r2 = ADD32(0, 0X5334);
L_00265B40:
    // 0x00265B40: jr          $ra
    // 0x00265B44: nop

    return;
    // 0x00265B44: nop

;}
RECOMP_FUNC void func_00258EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258EA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00258EA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258EA8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00258EAC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00258EB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00258EB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00258EB8: lb          $v0, 0x34($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X34);
    // 0x00258EBC: lw          $s1, 0x1A8($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X1A8);
    // 0x00258EC0: beq         $v0, $v1, L_00258EE0
    if (ctx->r2 == ctx->r3) {
        // 0x00258EC4: nop
    
            goto L_00258EE0;
    }
    // 0x00258EC4: nop

    // 0x00258EC8: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00258ECC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258ED0: lwc1        $f14, 0x72A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X72A8);
    // 0x00258ED4: jal         0x0021170C
    // 0x00258ED8: nop

    func_0021170C(rdram, ctx);
        goto after_0;
    // 0x00258ED8: nop

    after_0:
    // 0x00258EDC: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
L_00258EE0:
    // 0x00258EE0: lwc1        $f0, 0x110($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00258EE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258EE8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00258EEC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00258EF0: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00258EF4: lwc1        $f1, 0x10C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10C);
    // 0x00258EF8: lwc1        $f2, 0x110($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00258EFC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00258F00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00258F04: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00258F08: swc1        $f1, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00258F0C: lw          $v0, 0xA50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA50);
    // 0x00258F10: bc1f        L_00258F3C
    if (!c1cs) {
        // 0x00258F14: nop
    
            goto L_00258F3C;
    }
    // 0x00258F14: nop

    // 0x00258F18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258F1C: lwc1        $f0, 0x72AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72AC);
    // 0x00258F20: neg.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = -ctx->f2.fl;
    // 0x00258F24: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00258F28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258F2C: lwc1        $f0, 0x72B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72B0);
    // 0x00258F30: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00258F34: j           L_00258F54
    // 0x00258F38: nop

        goto L_00258F54;
    // 0x00258F38: nop

L_00258F3C:
    // 0x00258F3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258F40: lwc1        $f0, 0x72B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72B4);
    // 0x00258F44: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00258F48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258F4C: lwc1        $f1, 0x72B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X72B8);
    // 0x00258F50: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_00258F54:
    // 0x00258F54: nop

    // 0x00258F58: bc1t        L_00258FA4
    if (c1cs) {
        // 0x00258F5C: nop
    
            goto L_00258FA4;
    }
    // 0x00258F5C: nop

    // 0x00258F60: lwc1        $f2, 0x110($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X110);
    // 0x00258F64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00258F68: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00258F6C: nop

    // 0x00258F70: bc1f        L_00258F90
    if (!c1cs) {
        // 0x00258F74: nop
    
            goto L_00258F90;
    }
    // 0x00258F74: nop

    // 0x00258F78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258F7C: lwc1        $f1, 0x72BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X72BC);
    // 0x00258F80: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00258F84: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00258F88: j           L_00258FB0
    // 0x00258F8C: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
        goto L_00258FB0;
    // 0x00258F8C: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
L_00258F90:
    // 0x00258F90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258F94: lwc1        $f0, 0x72C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72C0);
    // 0x00258F98: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00258F9C: j           L_00258FB0
    // 0x00258FA0: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
        goto L_00258FB0;
    // 0x00258FA0: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
L_00258FA4:
    // 0x00258FA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258FA8: lwc1        $f0, 0x72C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72C4);
    // 0x00258FAC: swc1        $f0, 0x168($v0)
    MEM_W(0X168, ctx->r2) = ctx->f0.u32l;
L_00258FB0:
    // 0x00258FB0: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00258FB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00258FB8: beq         $v1, $v0, L_00258FE4
    if (ctx->r3 == ctx->r2) {
        // 0x00258FBC: nop
    
            goto L_00258FE4;
    }
    // 0x00258FBC: nop

    // 0x00258FC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00258FC4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00258FC8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00258FCC: beq         $v0, $zero, L_00258FE4
    if (ctx->r2 == 0) {
        // 0x00258FD0: nop
    
            goto L_00258FE4;
    }
    // 0x00258FD0: nop

    // 0x00258FD4: jal         0x0027588C
    // 0x00258FD8: addiu       $a0, $zero, 0x1A7
    ctx->r4 = ADD32(0, 0X1A7);
    func_0027588C(rdram, ctx);
        goto after_1;
    // 0x00258FD8: addiu       $a0, $zero, 0x1A7
    ctx->r4 = ADD32(0, 0X1A7);
    after_1:
    // 0x00258FDC: jal         0x0027588C
    // 0x00258FE0: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    func_0027588C(rdram, ctx);
        goto after_2;
    // 0x00258FE0: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    after_2:
L_00258FE4:
    // 0x00258FE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00258FE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258FEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258FF0: jr          $ra
    // 0x00258FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00258FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004171D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004171D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004171D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x004171D8: addiu       $a3, $a3, -0x4F18
    ctx->r7 = ADD32(ctx->r7, -0X4F18);
    // 0x004171DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004171E0: jal         0x0021ECA0
    // 0x004171E4: nop

    func_0021ECA0(rdram, ctx);
        goto after_0;
    // 0x004171E4: nop

    after_0:
    // 0x004171E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004171EC: jr          $ra
    // 0x004171F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004171F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E3A8: lwc1        $f1, 0x64($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X64);
    // 0x0029E3AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
;}
RECOMP_FUNC void func_002274A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002274A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002274A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002274AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002274B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002274B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002274B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002274BC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x002274C0: lw          $s0, 0x3604($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3604);
    // 0x002274C4: beq         $s0, $zero, L_00227648
    if (ctx->r16 == 0) {
        // 0x002274C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00227648;
    }
    // 0x002274C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002274CC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x002274D0: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x002274D4: addiu       $s2, $s2, 0x5A1C
    ctx->r18 = ADD32(ctx->r18, 0X5A1C);
L_002274D8:
    // 0x002274D8: lwc1        $f1, 0x198($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X198);
    // 0x002274DC: lw          $s0, 0x1AC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1AC);
    // 0x002274E0: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x002274E4: nop

    // 0x002274E8: bc1f        L_00227510
    if (!c1cs) {
        // 0x002274EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00227510;
    }
    // 0x002274EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002274F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002274F4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002274F8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002274FC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00227500: nop

    // 0x00227504: bc1f        L_00227510
    if (!c1cs) {
        // 0x00227508: swc1        $f0, 0x198($a0)
        MEM_W(0X198, ctx->r4) = ctx->f0.u32l;
            goto L_00227510;
    }
    // 0x00227508: swc1        $f0, 0x198($a0)
    MEM_W(0X198, ctx->r4) = ctx->f0.u32l;
    // 0x0022750C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00227510:
    // 0x00227510: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00227514: lwc1        $f0, 0x14C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x00227518: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022751C: nop

    // 0x00227520: bc1fl       L_002275A0
    if (!c1cs) {
        // 0x00227524: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002275A0;
    }
    goto skip_0;
    // 0x00227524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x00227528: lwc1        $f1, -0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0XC);
    // 0x0022752C: lwc1        $f0, 0x158($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X158);
    // 0x00227530: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00227534: nop

    // 0x00227538: bc1fl       L_002275A0
    if (!c1cs) {
        // 0x0022753C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002275A0;
    }
    goto skip_1;
    // 0x0022753C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x00227540: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00227544: lwc1        $f0, 0x154($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X154);
    // 0x00227548: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022754C: nop

    // 0x00227550: bc1fl       L_002275A0
    if (!c1cs) {
        // 0x00227554: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002275A0;
    }
    goto skip_2;
    // 0x00227554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x00227558: lwc1        $f1, -0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X4);
    // 0x0022755C: lwc1        $f0, 0x160($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X160);
    // 0x00227560: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00227564: nop

    // 0x00227568: bc1fl       L_002275A0
    if (!c1cs) {
        // 0x0022756C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002275A0;
    }
    goto skip_3;
    // 0x0022756C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x00227570: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00227574: lwc1        $f0, 0x150($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X150);
    // 0x00227578: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022757C: nop

    // 0x00227580: bc1fl       L_002275A0
    if (!c1cs) {
        // 0x00227584: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002275A0;
    }
    goto skip_4;
    // 0x00227584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_4:
    // 0x00227588: lwc1        $f1, -0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X8);
    // 0x0022758C: lwc1        $f0, 0x15C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X15C);
    // 0x00227590: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00227594: nop

    // 0x00227598: bc1fl       L_002275A0
    if (!c1cs) {
        // 0x0022759C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002275A0;
    }
    goto skip_5;
    // 0x0022759C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_5:
L_002275A0:
    // 0x002275A0: beq         $v0, $zero, L_00227638
    if (ctx->r2 == 0) {
        // 0x002275A4: nop
    
            goto L_00227638;
    }
    // 0x002275A4: nop

    // 0x002275A8: lw          $a1, 0x1A0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1A0);
    // 0x002275AC: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x002275B0: beq         $v0, $zero, L_00227640
    if (ctx->r2 == 0) {
        // 0x002275B4: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00227640;
    }
    // 0x002275B4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x002275B8: lw          $v1, 0x1A4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1A4);
    // 0x002275BC: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x002275C0: beq         $v1, $zero, L_002275D4
    if (ctx->r3 == 0) {
        // 0x002275C4: sw          $v0, 0x1A0($a0)
        MEM_W(0X1A0, ctx->r4) = ctx->r2;
            goto L_002275D4;
    }
    // 0x002275C4: sw          $v0, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r2;
    // 0x002275C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002275CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002275D0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002275D4:
    // 0x002275D4: lw          $v1, 0x1A8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1A8);
    // 0x002275D8: beq         $v1, $zero, L_002275E8
    if (ctx->r3 == 0) {
        // 0x002275DC: nop
    
            goto L_002275E8;
    }
    // 0x002275DC: nop

    // 0x002275E0: lw          $v0, 0x1AC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1AC);
    // 0x002275E4: sw          $v0, 0x1AC($v1)
    MEM_W(0X1AC, ctx->r3) = ctx->r2;
L_002275E8:
    // 0x002275E8: lw          $v1, 0x1AC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1AC);
    // 0x002275EC: beq         $v1, $zero, L_002275FC
    if (ctx->r3 == 0) {
        // 0x002275F0: nop
    
            goto L_002275FC;
    }
    // 0x002275F0: nop

    // 0x002275F4: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x002275F8: sw          $v0, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = ctx->r2;
L_002275FC:
    // 0x002275FC: lw          $v0, 0x3604($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3604);
    // 0x00227600: bne         $v0, $a0, L_00227610
    if (ctx->r2 != ctx->r4) {
        // 0x00227604: nop
    
            goto L_00227610;
    }
    // 0x00227604: nop

    // 0x00227608: lw          $v0, 0x1AC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1AC);
    // 0x0022760C: sw          $v0, 0x3604($s1)
    MEM_W(0X3604, ctx->r17) = ctx->r2;
L_00227610:
    // 0x00227610: lw          $v0, 0x3608($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3608);
    // 0x00227614: bne         $v0, $a0, L_00227624
    if (ctx->r2 != ctx->r4) {
        // 0x00227618: nop
    
            goto L_00227624;
    }
    // 0x00227618: nop

    // 0x0022761C: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x00227620: sw          $v0, 0x3608($s1)
    MEM_W(0X3608, ctx->r17) = ctx->r2;
L_00227624:
    // 0x00227624: lw          $v0, 0x3600($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3600);
    // 0x00227628: sw          $zero, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = 0;
    // 0x0022762C: sw          $v0, 0x1AC($a0)
    MEM_W(0X1AC, ctx->r4) = ctx->r2;
    // 0x00227630: j           L_00227640
    // 0x00227634: sw          $a0, 0x3600($s1)
    MEM_W(0X3600, ctx->r17) = ctx->r4;
        goto L_00227640;
    // 0x00227634: sw          $a0, 0x3600($s1)
    MEM_W(0X3600, ctx->r17) = ctx->r4;
L_00227638:
    // 0x00227638: jal         0x00227680
    // 0x0022763C: nop

    func_00227680(rdram, ctx);
        goto after_0;
    // 0x0022763C: nop

    after_0:
L_00227640:
    // 0x00227640: bne         $s0, $zero, L_002274D8
    if (ctx->r16 != 0) {
        // 0x00227644: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002274D8;
    }
    // 0x00227644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00227648:
    // 0x00227648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0022764C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00227650: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00227654: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00227658: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0022765C: jr          $ra
    // 0x00227660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00227660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004089C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004089C8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004089CC: addiu       $v1, $v1, -0x4A0
    ctx->r3 = ADD32(ctx->r3, -0X4A0);
    // 0x004089D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x004089D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004089D8: jr          $ra
    // 0x004089DC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x004089DC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_00226B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00226B38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226B3C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00226B40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226B44: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00226B48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00226B4C: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00226B50: jal         0x002017D4
    // 0x00226B54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226B54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00226B58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226B5C: jal         0x002017D4
    // 0x00226B60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226B60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00226B64: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226B68: jal         0x002017D4
    // 0x00226B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00226B70: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226B78: jal         0x002017D4
    // 0x00226B7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00226B7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00226B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226B84: jal         0x00201818
    // 0x00226B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00226B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00226B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226B90: jal         0x002017D4
    // 0x00226B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00226B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00226B98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226B9C: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00226BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226BA4: bgez        $s1, L_00226BB0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00226BA8: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00226BB0;
    }
    // 0x00226BA8: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00226BAC: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00226BB0:
    // 0x00226BB0: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00226BB4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00226BB8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00226BBC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00226BC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226BC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226BC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00226BCC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00226BD0: jr          $ra
    // 0x00226BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00266C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266C2C: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00266C30: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00266C34: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00266C38: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
L_00266C3C:
    // 0x00266C3C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00266C40: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x00266C44: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00266C48: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00266C4C: bne         $a2, $zero, L_00266C3C
    if (ctx->r6 != 0) {
        // 0x00266C50: addiu       $a0, $a0, -0x4
        ctx->r4 = ADD32(ctx->r4, -0X4);
            goto L_00266C3C;
    }
    // 0x00266C50: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x00266C54: jr          $ra
    // 0x00266C58: nop

    return;
    // 0x00266C58: nop

;}
RECOMP_FUNC void func_00421DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421DFC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421E00: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421E04: beq         $v0, $zero, L_00421E18
    if (ctx->r2 == 0) {
        // 0x00421E08: nop
    
            goto L_00421E18;
    }
    // 0x00421E08: nop

    // 0x00421E0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421E10: addiu       $v0, $v0, 0x490C
    ctx->r2 = ADD32(ctx->r2, 0X490C);
    // 0x00421E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421E18:
    // 0x00421E18: jr          $ra
    // 0x00421E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002A31AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00200574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200574: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00200578: beq         $v1, $zero, L_002005A0
    if (ctx->r3 == 0) {
        // 0x0020057C: nop
    
            goto L_002005A0;
    }
    // 0x0020057C: nop

    // 0x00200580: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200584: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200588: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0020058C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00200590: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x00200594: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00200598: j           L_002005B0
    // 0x0020059C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_002005B0;
    // 0x0020059C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_002005A0:
    // 0x002005A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002005A4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002005A8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002005AC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_002005B0:
    // 0x002005B0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002005B4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002005B8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002005BC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002005C0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x002005C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002005C8: jr          $ra
    // 0x002005CC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x002005CC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00427180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427180: addiu       $sp, $sp, -0x298
    ctx->r29 = ADD32(ctx->r29, -0X298);
    // 0x00427184: sw          $s7, 0x28C($sp)
    MEM_W(0X28C, ctx->r29) = ctx->r23;
    // 0x00427188: lw          $s7, 0x2A8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2A8);
    // 0x0042718C: sw          $s1, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r17;
    // 0x00427190: lw          $s1, 0x2AC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2AC);
    // 0x00427194: sw          $s3, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r19;
    // 0x00427198: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042719C: sw          $s6, 0x288($sp)
    MEM_W(0X288, ctx->r29) = ctx->r22;
    // 0x004271A0: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x004271A4: sw          $fp, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r30;
    // 0x004271A8: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x004271AC: sw          $s0, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r16;
    // 0x004271B0: sh          $a1, 0x250($sp)
    MEM_H(0X250, ctx->r29) = ctx->r5;
    // 0x004271B4: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x004271B8: sw          $ra, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r31;
    // 0x004271BC: sw          $s5, 0x284($sp)
    MEM_W(0X284, ctx->r29) = ctx->r21;
    // 0x004271C0: sw          $s4, 0x280($sp)
    MEM_W(0X280, ctx->r29) = ctx->r20;
    // 0x004271C4: sw          $s2, 0x278($sp)
    MEM_W(0X278, ctx->r29) = ctx->r18;
    // 0x004271C8: sw          $zero, 0x254($sp)
    MEM_W(0X254, ctx->r29) = 0;
    // 0x004271CC: sb          $zero, 0x258($sp)
    MEM_B(0X258, ctx->r29) = 0;
    // 0x004271D0: beq         $s0, $zero, L_004274F0
    if (ctx->r16 == 0) {
        // 0x004271D4: sw          $a2, 0x2A0($sp)
        MEM_W(0X2A0, ctx->r29) = ctx->r6;
            goto L_004274F0;
    }
    // 0x004271D4: sw          $a2, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->r6;
    // 0x004271D8: beq         $a2, $zero, L_004274F0
    if (ctx->r6 == 0) {
        // 0x004271DC: addiu       $a2, $s1, 0xFF
        ctx->r6 = ADD32(ctx->r17, 0XFF);
            goto L_004274F0;
    }
    // 0x004271DC: addiu       $a2, $s1, 0xFF
    ctx->r6 = ADD32(ctx->r17, 0XFF);
    // 0x004271E0: bltzl       $a2, L_004271E8
    if (SIGNED(ctx->r6) < 0) {
        // 0x004271E4: addiu       $a2, $s1, 0x1FE
        ctx->r6 = ADD32(ctx->r17, 0X1FE);
            goto L_004271E8;
    }
    goto skip_0;
    // 0x004271E4: addiu       $a2, $s1, 0x1FE
    ctx->r6 = ADD32(ctx->r17, 0X1FE);
    skip_0:
L_004271E8:
    // 0x004271E8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x004271EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004271F0: beq         $v0, $zero, L_004274F0
    if (ctx->r2 == 0) {
        // 0x004271F4: sra         $s2, $a2, 8
        ctx->r18 = S32(SIGNED(ctx->r6) >> 8);
            goto L_004274F0;
    }
    // 0x004271F4: sra         $s2, $a2, 8
    ctx->r18 = S32(SIGNED(ctx->r6) >> 8);
    // 0x004271F8: jal         0x00429DFC
    // 0x004271FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x004271FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00427200: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00427204: beq         $v0, $v1, L_004274E8
    if (ctx->r2 == ctx->r3) {
        // 0x00427208: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_004274E8;
    }
    // 0x00427208: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042720C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00427210: lw          $a2, 0x2A0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2A0);
    // 0x00427214: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x00427218: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x0042721C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x00427220: jal         0x004292E0
    // 0x00427224: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_004292E0(rdram, ctx);
        goto after_1;
    // 0x00427224: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x00427228: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042722C: beq         $v1, $zero, L_0042723C
    if (ctx->r3 == 0) {
        // 0x00427230: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0042723C;
    }
    // 0x00427230: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00427234: bne         $v1, $v0, L_004274F4
    if (ctx->r3 != ctx->r2) {
        // 0x00427238: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004274F4;
    }
    // 0x00427238: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0042723C:
    // 0x0042723C: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x00427240: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x00427244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00427248: bne         $v1, $v0, L_004274F4
    if (ctx->r3 != ctx->r2) {
        // 0x0042724C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_004274F4;
    }
    // 0x0042724C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00427250: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427254: jal         0x00427E60
    // 0x00427258: addiu       $a1, $sp, 0x240
    ctx->r5 = ADD32(ctx->r29, 0X240);
    func_00427E60(rdram, ctx);
        goto after_2;
    // 0x00427258: addiu       $a1, $sp, 0x240
    ctx->r5 = ADD32(ctx->r29, 0X240);
    after_2:
    // 0x0042725C: lw          $v0, 0x240($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X240);
    // 0x00427260: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00427264: bne         $v0, $zero, L_004274F4
    if (ctx->r2 != 0) {
        // 0x00427268: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_004274F4;
    }
    // 0x00427268: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0042726C: beq         $s2, $zero, L_004274F0
    if (ctx->r18 == 0) {
        // 0x00427270: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_004274F0;
    }
    // 0x00427270: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427274: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00427278: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0042727C: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x00427280: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00427284: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00427288: jal         0x004292E0
    // 0x0042728C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_004292E0(rdram, ctx);
        goto after_3;
    // 0x0042728C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x00427290: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427294: beq         $v1, $zero, L_004272A4
    if (ctx->r3 == 0) {
        // 0x00427298: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004272A4;
    }
    // 0x00427298: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0042729C: bne         $v1, $v0, L_004274F4
    if (ctx->r3 != ctx->r2) {
        // 0x004272A0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004274F4;
    }
    // 0x004272A0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004272A4:
    // 0x004272A4: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004272A8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x004272AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004272B0: bne         $v1, $v0, L_004272C8
    if (ctx->r3 != ctx->r2) {
        // 0x004272B4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_004272C8;
    }
    // 0x004272B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004272B8: j           L_004274F4
    // 0x004272BC: nop

        goto L_004274F4;
    // 0x004272BC: nop

L_004272C0:
    // 0x004272C0: j           L_004273F8
    // 0x004272C4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_004273F8;
    // 0x004272C4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_004272C8:
    // 0x004272C8: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x004272CC: beq         $v0, $zero, L_004273F8
    if (ctx->r2 == 0) {
        // 0x004272D0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004273F8;
    }
    // 0x004272D0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004272D4: addiu       $s5, $sp, 0x244
    ctx->r21 = ADD32(ctx->r29, 0X244);
    // 0x004272D8: addiu       $s4, $sp, 0x120
    ctx->r20 = ADD32(ctx->r29, 0X120);
    // 0x004272DC: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x004272E0: sw          $t0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r8;
    // 0x004272E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_004272E8:
    // 0x004272E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004272EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004272F0: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x004272F4: jal         0x00429AA4
    // 0x004272F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_4;
    // 0x004272F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004272FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427300: bne         $v1, $zero, L_004274E8
    if (ctx->r3 != 0) {
        // 0x00427304: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_004274E8;
    }
    // 0x00427304: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427308: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0042730C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00427310: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x00427314: addiu       $v0, $sp, 0x248
    ctx->r2 = ADD32(ctx->r29, 0X248);
    // 0x00427318: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042731C: addiu       $v0, $sp, 0x24C
    ctx->r2 = ADD32(ctx->r29, 0X24C);
    // 0x00427320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00427324: jal         0x00427524
    // 0x00427328: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00427524(rdram, ctx);
        goto after_5;
    // 0x00427328: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x0042732C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427330: bne         $v1, $zero, L_004274E8
    if (ctx->r3 != 0) {
        // 0x00427334: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004274E8;
    }
    // 0x00427334: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00427338: lw          $v1, 0x244($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X244);
    // 0x0042733C: beql        $v1, $v0, L_004273E4
    if (ctx->r3 == ctx->r2) {
        // 0x00427340: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004273E4;
    }
    goto skip_1;
    // 0x00427340: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00427344: beq         $fp, $zero, L_00427388
    if (ctx->r30 == 0) {
        // 0x00427348: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00427388;
    }
    // 0x00427348: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042734C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427350: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x00427354: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00427358: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0042735C: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x00427360: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x00427364: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00427368: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0042736C: jal         0x00429AA4
    // 0x00427370: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    func_00429AA4(rdram, ctx);
        goto after_6;
    // 0x00427370: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    after_6:
    // 0x00427374: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427378: beq         $v1, $zero, L_0042739C
    if (ctx->r3 == 0) {
        // 0x0042737C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0042739C;
    }
    // 0x0042737C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00427380: j           L_004274F4
    // 0x00427384: nop

        goto L_004274F4;
    // 0x00427384: nop

L_00427388:
    // 0x00427388: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x0042738C: sll         $v0, $s1, 8
    ctx->r2 = S32(ctx->r17 << 8);
    // 0x00427390: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00427394: sh          $v0, 0x266($sp)
    MEM_H(0X266, ctx->r29) = ctx->r2;
    // 0x00427398: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0042739C:
    // 0x0042739C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004273A0: lw          $v1, 0x26C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X26C);
L_004273A4:
    // 0x004273A4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x004273A8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x004273AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004273B0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x004273B4: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x004273B8: bne         $v0, $zero, L_004273A4
    if (ctx->r2 != 0) {
        // 0x004273BC: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_004273A4;
    }
    // 0x004273BC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x004273C0: lw          $v1, 0x248($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X248);
    // 0x004273C4: lw          $t0, 0x24C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24C);
    // 0x004273C8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x004273CC: sb          $s1, 0x258($sp)
    MEM_B(0X258, ctx->r29) = ctx->r17;
    // 0x004273D0: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x004273D4: beq         $v0, $zero, L_004272C0
    if (ctx->r2 == 0) {
        // 0x004273D8: sw          $t0, 0x254($sp)
        MEM_W(0X254, ctx->r29) = ctx->r8;
            goto L_004272C0;
    }
    // 0x004273D8: sw          $t0, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r8;
    // 0x004273DC: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
    // 0x004273E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004273E4:
    // 0x004273E4: lbu         $v1, 0x64($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X64);
    // 0x004273E8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x004273EC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x004273F0: bnel        $v0, $zero, L_004272E8
    if (ctx->r2 != 0) {
        // 0x004273F4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_004272E8;
    }
    goto skip_2;
    // 0x004273F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_2:
L_004273F8:
    // 0x004273F8: bgtz        $s2, L_004274F4
    if (SIGNED(ctx->r18) > 0) {
        // 0x004273FC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004274F4;
    }
    // 0x004273FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00427400: lw          $v1, 0x244($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X244);
    // 0x00427404: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00427408: bne         $v1, $v0, L_00427418
    if (ctx->r3 != ctx->r2) {
        // 0x0042740C: addiu       $a1, $sp, 0x120
        ctx->r5 = ADD32(ctx->r29, 0X120);
            goto L_00427418;
    }
    // 0x0042740C: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x00427410: j           L_004274F4
    // 0x00427414: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_004274F4;
    // 0x00427414: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00427418:
    // 0x00427418: lw          $t0, 0x254($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X254);
    // 0x0042741C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00427420: sllv        $v0, $t0, $a2
    ctx->r2 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x00427424: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00427428: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x0042742C: lbu         $v0, 0x247($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X247);
    // 0x00427430: lbu         $a3, 0x258($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X258);
    // 0x00427434: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427438: jal         0x00429AA4
    // 0x0042743C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    func_00429AA4(rdram, ctx);
        goto after_7;
    // 0x0042743C: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    after_7:
    // 0x00427440: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00427444: bne         $v1, $zero, L_004274F4
    if (ctx->r3 != 0) {
        // 0x00427448: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004274F4;
    }
    // 0x00427448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042744C: lhu         $t0, 0x266($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X266);
    // 0x00427450: sh          $t0, 0x226($sp)
    MEM_H(0X226, ctx->r29) = ctx->r8;
    // 0x00427454: lhu         $t0, 0x250($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X250);
    // 0x00427458: sh          $t0, 0x224($sp)
    MEM_H(0X224, ctx->r29) = ctx->r8;
    // 0x0042745C: lw          $t0, 0x2A0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A0);
    // 0x00427460: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
    // 0x00427464: sh          $zero, 0x22A($sp)
    MEM_H(0X22A, ctx->r29) = 0;
    // 0x00427468: sw          $t0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r8;
L_0042746C:
    // 0x0042746C: lbu         $v1, 0x0($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X0);
    // 0x00427470: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427474: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00427478: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x0042747C: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x00427480: bne         $v0, $zero, L_0042746C
    if (ctx->r2 != 0) {
        // 0x00427484: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_0042746C;
    }
    // 0x00427484: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00427488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042748C: addiu       $a0, $sp, 0x220
    ctx->r4 = ADD32(ctx->r29, 0X220);
L_00427490:
    // 0x00427490: lbu         $v1, 0x0($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X0);
    // 0x00427494: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00427498: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042749C: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x004274A0: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x004274A4: bne         $v0, $zero, L_00427490
    if (ctx->r2 != 0) {
        // 0x004274A8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_00427490;
    }
    // 0x004274A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x004274AC: lw          $t0, 0x2B0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2B0);
    // 0x004274B0: lhu         $a2, 0x5E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X5E);
    // 0x004274B4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x004274B8: addiu       $a3, $sp, 0x220
    ctx->r7 = ADD32(ctx->r29, 0X220);
    // 0x004274BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004274C0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004274C4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004274C8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x004274CC: jal         0x00299A40
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299A40(rdram, ctx);
        goto after_8;
    // 0x004274D0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_8:
    // 0x004274D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004274D8: beql        $v1, $zero, L_004274F4
    if (ctx->r3 == 0) {
        // 0x004274DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004274F4;
    }
    goto skip_3;
    // 0x004274DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x004274E0: j           L_004274F4
    // 0x004274E4: nop

        goto L_004274F4;
    // 0x004274E4: nop

L_004274E8:
    // 0x004274E8: j           L_004274F4
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004274F4;
    // 0x004274EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004274F0:
    // 0x004274F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004274F4:
    // 0x004274F4: lw          $ra, 0x294($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X294);
    // 0x004274F8: lw          $fp, 0x290($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X290);
    // 0x004274FC: lw          $s7, 0x28C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X28C);
    // 0x00427500: lw          $s6, 0x288($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X288);
    // 0x00427504: lw          $s5, 0x284($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X284);
    // 0x00427508: lw          $s4, 0x280($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X280);
    // 0x0042750C: lw          $s3, 0x27C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X27C);
    // 0x00427510: lw          $s2, 0x278($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X278);
    // 0x00427514: lw          $s1, 0x274($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X274);
    // 0x00427518: lw          $s0, 0x270($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X270);
    // 0x0042751C: jr          $ra
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    return;
    // 0x00427520: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
RECOMP_FUNC void func_00430454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430454: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00430458: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0043045C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00430460: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00430464: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00430468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043046C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00430470: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00430474: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00430478: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0043047C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00430480: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00430484: jal         0x0042C194
    // 0x00430488: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0042C194(rdram, ctx);
        goto after_0;
    // 0x00430488: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0043048C: beql        $v0, $zero, L_00430494
    if (ctx->r2 == 0) {
        // 0x00430490: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00430494;
    }
    goto skip_0;
    // 0x00430490: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_00430494:
    // 0x00430494: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00430498: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0043049C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x004304A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x004304A4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x004304A8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x004304AC: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x004304B0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004304B4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004304B8: sw          $zero, 0x3FFC($at)
    MEM_W(0X3FFC, ctx->r1) = 0;
    // 0x004304BC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004304C0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004304C4: sw          $s1, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r17;
    // 0x004304C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004304CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004304D0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004304D4: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x004304D8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004304DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004304E0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004304E4: sw          $v0, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r2;
    // 0x004304E8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x004304EC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004304F0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004304F4: jr          $ra
    // 0x004304F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004304F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0046538C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046538C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00465390: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00465394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00465398: jal         0x0028D0E0
    // 0x0046539C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x0046539C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x004653A0: bne         $v0, $zero, L_004653C8
    if (ctx->r2 != 0) {
        // 0x004653A4: nop
    
            goto L_004653C8;
    }
    // 0x004653A4: nop

    // 0x004653A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x004653AC: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x004653B0: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x004653B4: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x004653B8: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x004653BC: addiu       $a3, $a3, 0x6AC0
    ctx->r7 = ADD32(ctx->r7, 0X6AC0);
    // 0x004653C0: jal         0x00201DBC
    // 0x004653C4: nop

    func_00201DBC(rdram, ctx);
        goto after_1;
    // 0x004653C4: nop

    after_1:
L_004653C8:
    // 0x004653C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004653CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004653D0: jr          $ra
    // 0x004653D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004653D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004556F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C768:
    // 0x004556F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004556FC: lwc1        $f0, 0x930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X930);
    // 0x00455700: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00455704: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00455708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045570C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455710: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00455714: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00455718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045571C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00455720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00455724: swc1        $f0, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->f0.u32l;
    // 0x00455728: bc1f        L_00455738
    if (!c1cs) {
        // 0x0045572C: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00455738;
    }
    // 0x0045572C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455730: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00455734: swc1        $f1, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_00455738:
    // 0x00455738: jal         0x00266B80
    // 0x0045573C: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0045573C: nop

    after_0:
    // 0x00455740: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00455744: beq         $v0, $v1, L_00455758
    if (ctx->r2 == ctx->r3) {
        // 0x00455748: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00455758;
    }
    // 0x00455748: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0045574C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00455750: j           L_0041C768
    // 0x00455754: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041C768(rdram, ctx);
    return;
    // 0x00455754: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00455758:
    // 0x00455758: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0045575C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00455760: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00455764: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00455768: jal         0x00424500
    // 0x0045576C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_00424500(rdram, ctx);
        goto after_1;
    // 0x0045576C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x00455770: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00455774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00455778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045577C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455780: jr          $ra
    // 0x00455784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00455784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238258: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0023825C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00238260: beq         $v0, $zero, L_00238270
    if (ctx->r2 == 0) {
        // 0x00238264: nop
    
            goto L_00238270;
    }
    // 0x00238264: nop

L_00238268:
    // 0x00238268: jr          $ra
    // 0x0023826C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0023826C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00238270:
    // 0x00238270: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x00238274: lhu         $v0, 0xB8($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XB8);
    // 0x00238278: beq         $v1, $v0, L_002382B8
    if (ctx->r3 == ctx->r2) {
        // 0x0023827C: lui         $v0, 0x31
        ctx->r2 = S32(0X31 << 16);
            goto L_002382B8;
    }
    // 0x0023827C: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x00238280: lw          $a2, 0xD4($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XD4);
    // 0x00238284: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x00238288: beq         $v0, $zero, L_002382B8
    if (ctx->r2 == 0) {
        // 0x0023828C: nop
    
            goto L_002382B8;
    }
    // 0x0023828C: nop

    // 0x00238290: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00238294: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00238298: beq         $v0, $zero, L_002382C0
    if (ctx->r2 == 0) {
        // 0x0023829C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_002382C0;
    }
    // 0x0023829C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002382A0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002382A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002382A8: bne         $v0, $zero, L_002382C0
    if (ctx->r2 != 0) {
        // 0x002382AC: and         $v0, $a2, $v1
        ctx->r2 = ctx->r6 & ctx->r3;
            goto L_002382C0;
    }
    // 0x002382AC: and         $v0, $a2, $v1
    ctx->r2 = ctx->r6 & ctx->r3;
    // 0x002382B0: bne         $v0, $zero, L_002382C0
    if (ctx->r2 != 0) {
        // 0x002382B4: nop
    
            goto L_002382C0;
    }
    // 0x002382B4: nop

L_002382B8:
    // 0x002382B8: jr          $ra
    // 0x002382BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002382BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002382C0:
    // 0x002382C0: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x002382C4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002382C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002382CC: beq         $v1, $v0, L_00238268
    if (ctx->r3 == ctx->r2) {
        // 0x002382D0: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00238268;
    }
    // 0x002382D0: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x002382D4: bne         $v0, $zero, L_002382E8
    if (ctx->r2 != 0) {
        // 0x002382D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002382E8;
    }
    // 0x002382D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002382DC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x002382E0: beq         $v1, $v0, L_00238268
    if (ctx->r3 == ctx->r2) {
        // 0x002382E4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00238268;
    }
    // 0x002382E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_002382E8:
    // 0x002382E8: beq         $v1, $v0, L_00238268
    if (ctx->r3 == ctx->r2) {
        // 0x002382EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00238268;
    }
    // 0x002382EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002382F0: jr          $ra
    // 0x002382F4: nop

    return;
    // 0x002382F4: nop

;}
RECOMP_FUNC void func_0020F510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0020F514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020F518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020F51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020F520: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0020F524: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020F528: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0020F52C: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020F530: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020F534: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020F538: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F53C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0020F540: mul.s       $f3, $f20, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0020F544: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0020F548: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F54C: c.lt.s      $f3, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f3.fl < ctx->f12.fl;
    // 0x0020F550: nop

    // 0x0020F554: bc1f        L_0020F5A4
    if (!c1cs) {
        // 0x0020F558: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0020F5A4;
    }
    // 0x0020F558: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0020F55C: jal         0x00298470
    // 0x0020F560: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F560: nop

    after_0:
    // 0x0020F564: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020F568: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0020F56C: nop

    // 0x0020F570: bc1t        L_0020F5A4
    if (c1cs) {
        // 0x0020F574: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0020F5A4;
    }
    // 0x0020F574: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0020F578: lwc1        $f3, 0x0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0020F57C: div.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0020F580: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0020F584: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020F588: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F58C: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0020F590: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020F594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0020F598: swc1        $f3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020F59C: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
    // 0x0020F5A0: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0020F5A4:
    // 0x0020F5A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0020F5A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020F5AC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0020F5B0: jr          $ra
    // 0x0020F5B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020F5B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00447D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447D8C: jr          $ra
    // 0x00447D90: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x00447D90: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0042F7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F7C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F7CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042F7D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042F7D4: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0042F7D8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x0042F7DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042F7E0: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
L_0042F7E4:
    // 0x0042F7E4: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x0042F7E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042F7EC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0042F7F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042F7F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042F7F8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042F7FC: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x0042F800: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0042F804: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0042F808: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042F80C: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x0042F810: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042F814: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042F818: bne         $a2, $t0, L_0042F7E4
    if (ctx->r6 != ctx->r8) {
        // 0x0042F81C: or          $a1, $a1, $v0
        ctx->r5 = ctx->r5 | ctx->r2;
            goto L_0042F7E4;
    }
    // 0x0042F81C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0042F820: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x0042F824: jal         0x0042EC30
    // 0x0042F828: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    func_0042EC30(rdram, ctx);
        goto after_0;
    // 0x0042F828: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    after_0:
    // 0x0042F82C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042F830: jr          $ra
    // 0x0042F834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00253774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253778: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025377C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00253780: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00253784: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x00253788: beq         $v0, $zero, L_00253850
    if (ctx->r2 == 0) {
        // 0x0025378C: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_00253850;
    }
    // 0x0025378C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00253790: jal         0x002548FC
    // 0x00253794: nop

    func_002548FC(rdram, ctx);
        goto after_0;
    // 0x00253794: nop

    after_0:
    // 0x00253798: bne         $v0, $zero, L_00253850
    if (ctx->r2 != 0) {
        // 0x0025379C: addiu       $v0, $zero, 0x128
        ctx->r2 = ADD32(0, 0X128);
            goto L_00253850;
    }
    // 0x0025379C: addiu       $v0, $zero, 0x128
    ctx->r2 = ADD32(0, 0X128);
    // 0x002537A0: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x002537A4: beq         $v1, $v0, L_002537BC
    if (ctx->r3 == ctx->r2) {
        // 0x002537A8: addiu       $v0, $zero, 0x129
        ctx->r2 = ADD32(0, 0X129);
            goto L_002537BC;
    }
    // 0x002537A8: addiu       $v0, $zero, 0x129
    ctx->r2 = ADD32(0, 0X129);
    // 0x002537AC: beq         $v1, $v0, L_00253828
    if (ctx->r3 == ctx->r2) {
        // 0x002537B0: nop
    
            goto L_00253828;
    }
    // 0x002537B0: nop

    // 0x002537B4: j           L_00253850
    // 0x002537B8: nop

        goto L_00253850;
    // 0x002537B8: nop

L_002537BC:
    // 0x002537BC: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x002537C0: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x002537C4: beq         $v1, $v0, L_00253850
    if (ctx->r3 == ctx->r2) {
        // 0x002537C8: nop
    
            goto L_00253850;
    }
    // 0x002537C8: nop

    // 0x002537CC: lwc1        $f1, 0x1298($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1298);
    // 0x002537D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002537D4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002537D8: nop

    // 0x002537DC: bc1f        L_00253810
    if (!c1cs) {
        // 0x002537E0: nop
    
            goto L_00253810;
    }
    // 0x002537E0: nop

    // 0x002537E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002537E8: lwc1        $f0, 0x70DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70DC);
    // 0x002537EC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002537F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002537F4: lwc1        $f1, 0x70E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X70E0);
    // 0x002537F8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002537FC: nop

    // 0x00253800: bc1fl       L_00253818
    if (!c1cs) {
        // 0x00253804: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00253818;
    }
    goto skip_0;
    // 0x00253804: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
    // 0x00253808: j           L_0025381C
    // 0x0025380C: swc1        $f0, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = ctx->f0.u32l;
        goto L_0025381C;
    // 0x0025380C: swc1        $f0, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = ctx->f0.u32l;
L_00253810:
    // 0x00253810: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253814: lwc1        $f0, 0x70E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70E4);
L_00253818:
    // 0x00253818: swc1        $f0, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = ctx->f0.u32l;
L_0025381C:
    // 0x0025381C: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x00253820: j           L_00253850
    // 0x00253824: sw          $v0, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = ctx->r2;
        goto L_00253850;
    // 0x00253824: sw          $v0, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = ctx->r2;
L_00253828:
    // 0x00253828: lw          $v0, 0x12A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12A8);
    // 0x0025382C: bnel        $v0, $zero, L_00253840
    if (ctx->r2 != 0) {
        // 0x00253830: sw          $zero, 0x1298($s0)
        MEM_W(0X1298, ctx->r16) = 0;
            goto L_00253840;
    }
    goto skip_1;
    // 0x00253830: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    skip_1:
    // 0x00253834: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x00253838: sw          $v0, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = ctx->r2;
    // 0x0025383C: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
L_00253840:
    // 0x00253840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253844: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00253848: jal         0x0024E5F0
    // 0x0025384C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x0025384C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_1:
L_00253850:
    // 0x00253850: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00253854: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253858: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025385C: jr          $ra
    // 0x00253860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00253860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002668D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002668D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002668D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002668DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002668E0: lhu         $a2, 0x6($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X6);
    // 0x002668E4: jal         0x002666B0
    // 0x002668E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x002668E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002668EC: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002668F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002668F4: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x002668F8: jal         0x0021A7EC
    // 0x002668FC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_0021A7EC(rdram, ctx);
        goto after_1;
    // 0x002668FC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_1:
    // 0x00266900: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266904: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266908: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026690C: jal         0x00220260
    // 0x00266910: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_2;
    // 0x00266910: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00266914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00266918: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026691C: jr          $ra
    // 0x00266920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00226390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226390: sw          $zero, 0x8EC($a0)
    MEM_W(0X8EC, ctx->r4) = 0;
    // 0x00226394: sw          $zero, 0xAF0($a0)
    MEM_W(0XAF0, ctx->r4) = 0;
    // 0x00226398: sw          $zero, 0xBF4($a0)
    MEM_W(0XBF4, ctx->r4) = 0;
    // 0x0022639C: sw          $zero, 0xDF8($a0)
    MEM_W(0XDF8, ctx->r4) = 0;
    // 0x002263A0: sw          $zero, 0xEFC($a0)
    MEM_W(0XEFC, ctx->r4) = 0;
    // 0x002263A4: sw          $zero, 0xF84($a0)
    MEM_W(0XF84, ctx->r4) = 0;
    // 0x002263A8: sw          $zero, 0xFC8($a0)
    MEM_W(0XFC8, ctx->r4) = 0;
    // 0x002263AC: sw          $zero, 0x104C($a0)
    MEM_W(0X104C, ctx->r4) = 0;
    // 0x002263B0: sw          $zero, 0x1060($a0)
    MEM_W(0X1060, ctx->r4) = 0;
    // 0x002263B4: sw          $zero, 0x1064($a0)
    MEM_W(0X1064, ctx->r4) = 0;
    // 0x002263B8: jr          $ra
    // 0x002263BC: sw          $zero, 0x14A8($a0)
    MEM_W(0X14A8, ctx->r4) = 0;
    return;
    // 0x002263BC: sw          $zero, 0x14A8($a0)
    MEM_W(0X14A8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_002154DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002154DC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x002154E0: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x002154E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002154E8: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x002154EC: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x002154F0: sdc1        $f24, 0xA0($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XA0, ctx->r29);
    // 0x002154F4: sdc1        $f23, 0x98($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X98, ctx->r29);
    // 0x002154F8: sdc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X90, ctx->r29);
    // 0x002154FC: sdc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X88, ctx->r29);
    // 0x00215500: sdc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X80, ctx->r29);
    // 0x00215504: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x00215508: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0021550C: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00215510: jal         0x0026BE60
    // 0x00215514: nop

    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x00215514: nop

    after_0:
    // 0x00215518: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021551C: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00215520: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x00215524: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215528: lwc1        $f22, 0x584C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X584C);
    // 0x0021552C: jal         0x00268304
    // 0x00215530: sub.s       $f23, $f1, $f24
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f23.fl = ctx->f1.fl - ctx->f24.fl;
    func_00268304(rdram, ctx);
        goto after_1;
    // 0x00215530: sub.s       $f23, $f1, $f24
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f23.fl = ctx->f1.fl - ctx->f24.fl;
    after_1:
    // 0x00215534: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00215538: jal         0x00268304
    // 0x0021553C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_2;
    // 0x0021553C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00215540: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00215544: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215548: lwc1        $f1, 0x5850($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5850);
    // 0x0021554C: mul.s       $f21, $f23, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f23.fl, ctx->f1.fl);
    // 0x00215550: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00215554: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00215558: nop

    // 0x0021555C: bc1f        L_00215578
    if (!c1cs) {
        // 0x00215560: nop
    
            goto L_00215578;
    }
    // 0x00215560: nop

    // 0x00215564: jal         0x00268304
    // 0x00215568: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_3;
    // 0x00215568: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0021556C: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00215570: j           L_00215588
    // 0x00215574: nop

        goto L_00215588;
    // 0x00215574: nop

L_00215578:
    // 0x00215578: jal         0x00268304
    // 0x0021557C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_4;
    // 0x0021557C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00215580: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00215584: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
L_00215588:
    // 0x00215588: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0021558C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00215590: nop

    // 0x00215594: bc1t        L_00215604
    if (c1cs) {
        // 0x00215598: nop
    
            goto L_00215604;
    }
    // 0x00215598: nop

    // 0x0021559C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002155A0: lwc1        $f22, 0x5854($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5854);
    // 0x002155A4: jal         0x00268304
    // 0x002155A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_5;
    // 0x002155A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x002155AC: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x002155B0: jal         0x00268304
    // 0x002155B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_6;
    // 0x002155B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x002155B8: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x002155BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002155C0: lwc1        $f1, 0x5858($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5858);
    // 0x002155C4: mul.s       $f21, $f23, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f23.fl, ctx->f1.fl);
    // 0x002155C8: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x002155CC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002155D0: nop

    // 0x002155D4: bc1f        L_002155F0
    if (!c1cs) {
        // 0x002155D8: nop
    
            goto L_002155F0;
    }
    // 0x002155D8: nop

    // 0x002155DC: jal         0x00268304
    // 0x002155E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_7;
    // 0x002155E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x002155E4: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x002155E8: j           L_0021560C
    // 0x002155EC: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
        goto L_0021560C;
    // 0x002155EC: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
L_002155F0:
    // 0x002155F0: jal         0x00268304
    // 0x002155F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268304(rdram, ctx);
        goto after_8;
    // 0x002155F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x002155F8: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x002155FC: j           L_00215608
    // 0x00215600: sub.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f21.fl;
        goto L_00215608;
    // 0x00215600: sub.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f21.fl;
L_00215604:
    // 0x00215604: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_00215608:
    // 0x00215608: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
L_0021560C:
    // 0x0021560C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00215610: jal         0x00267944
    // 0x00215614: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00267944(rdram, ctx);
        goto after_9;
    // 0x00215614: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00215618: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0021561C: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x00215620: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x00215624: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x00215628: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0021562C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00215630: swc1        $f24, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f24.u32l;
    // 0x00215634: jal         0x0020F510
    // 0x00215638: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_0020F510(rdram, ctx);
        goto after_10;
    // 0x00215638: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x0021563C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00215640: jal         0x00211114
    // 0x00215644: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211114(rdram, ctx);
        goto after_11;
    // 0x00215644: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_11:
    // 0x00215648: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021564C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00215650: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x00215654: jal         0x0021034C
    // 0x00215658: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_12;
    // 0x00215658: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_12:
    // 0x0021565C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00215660: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x00215664: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00215668: jal         0x00210318
    // 0x0021566C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_13;
    // 0x0021566C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_13:
    // 0x00215670: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00215674: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00215678: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021567C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00215680: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    // 0x00215684: jal         0x0020D274
    // 0x00215688: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_14;
    // 0x00215688: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_14:
    // 0x0021568C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00215690: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00215694: lw          $a0, 0x6D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D1C);
    // 0x00215698: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x0021569C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x002156A0: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    // 0x002156A4: jal         0x002086BC
    // 0x002156A8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_002086BC(rdram, ctx);
        goto after_15;
    // 0x002156A8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_15:
    // 0x002156AC: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x002156B0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x002156B4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x002156B8: ldc1        $f24, 0xA0($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XA0);
    // 0x002156BC: ldc1        $f23, 0x98($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X98);
    // 0x002156C0: ldc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X90);
    // 0x002156C4: ldc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X88);
    // 0x002156C8: ldc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X80);
    // 0x002156CC: jr          $ra
    // 0x002156D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x002156D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_00461B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00461B58: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00461B5C: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00461B60: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00461B64: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00461B68: addiu       $a3, $a3, 0xE20
    ctx->r7 = ADD32(ctx->r7, 0XE20);
    // 0x00461B6C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00461B70: addiu       $v1, $v1, 0x13DC
    ctx->r3 = ADD32(ctx->r3, 0X13DC);
    // 0x00461B74: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00461B78: beq         $v0, $zero, L_00461C00
    if (ctx->r2 == 0) {
        // 0x00461B7C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00461C00;
    }
    // 0x00461B7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00461B80: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x00461B84: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x00461B88: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_00461B8C:
    // 0x00461B8C: lwl         $t4, 0x0($a3)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r7, 0X0);
    // 0x00461B90: lwr         $t4, 0x3($a3)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r7, 0X3);
    // 0x00461B94: lwl         $t5, 0x4($a3)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r7, 0X4);
    // 0x00461B98: lwr         $t5, 0x7($a3)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r7, 0X7);
    // 0x00461B9C: swl         $t4, 0x0($sp)
    do_swl(rdram, 0X0, ctx->r29, ctx->r12);
    // 0x00461BA0: swr         $t4, 0x3($sp)
    do_swr(rdram, 0X3, ctx->r29, ctx->r12);
    // 0x00461BA4: swl         $t5, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r13);
    // 0x00461BA8: swr         $t5, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r13);
    // 0x00461BAC: lbu         $v0, 0x2($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2);
    // 0x00461BB0: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00461BB4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x00461BB8: bne         $v0, $zero, L_00461BE4
    if (ctx->r2 != 0) {
        // 0x00461BBC: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_00461BE4;
    }
    // 0x00461BBC: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x00461BC0: lbu         $v0, 0x5($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X5);
    // 0x00461BC4: lbu         $v1, 0x4($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X4);
    // 0x00461BC8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00461BCC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00461BD0: sllv        $v0, $t3, $a2
    ctx->r2 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x00461BD4: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x00461BD8: lbu         $v1, 0x6($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6);
    // 0x00461BDC: or          $t1, $t1, $v0
    ctx->r9 = ctx->r9 | ctx->r2;
    // 0x00461BE0: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_00461BE4:
    // 0x00461BE4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00461BE8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x00461BEC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00461BF0: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x00461BF4: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00461BF8: bne         $v0, $zero, L_00461B8C
    if (ctx->r2 != 0) {
        // 0x00461BFC: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_00461B8C;
    }
    // 0x00461BFC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_00461C00:
    // 0x00461C00: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x00461C04: jr          $ra
    // 0x00461C08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00461C08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_002A31E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002584DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002584DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002584E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002584E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002584E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002584EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002584F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002584F4: lw          $s0, 0x1A8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A8);
    // 0x002584F8: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x002584FC: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00258500: beq         $v0, $zero, L_0025851C
    if (ctx->r2 == 0) {
        // 0x00258504: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0025851C;
    }
    // 0x00258504: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00258508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025850C: jal         0x0024E700
    // 0x00258510: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00258510: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x00258514: bne         $v0, $zero, L_00258584
    if (ctx->r2 != 0) {
        // 0x00258518: nop
    
            goto L_00258584;
    }
    // 0x00258518: nop

L_0025851C:
    // 0x0025851C: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x00258520: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258524: lwc1        $f0, 0x7280($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7280);
    // 0x00258528: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025852C: nop

    // 0x00258530: bc1f        L_00258564
    if (!c1cs) {
        // 0x00258534: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00258564;
    }
    // 0x00258534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00258538: jal         0x0025398C
    // 0x0025853C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_0025398C(rdram, ctx);
        goto after_1;
    // 0x0025853C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_1:
    // 0x00258540: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00258544: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00258548: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x0025854C: addu        $v1, $s0, $v0
    ctx->r3 = ADD32(ctx->r16, ctx->r2);
    // 0x00258550: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00258554: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00258558: bltzl       $v0, L_00258560
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025855C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00258560;
    }
    goto skip_0;
    // 0x0025855C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00258560:
    // 0x00258560: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_00258564:
    // 0x00258564: jal         0x00253F40
    // 0x00258568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253F40(rdram, ctx);
        goto after_2;
    // 0x00258568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0025856C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258570: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00258574: jal         0x00243414
    // 0x00258578: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00258578: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x0025857C: j           L_00258634
    // 0x00258580: nop

        goto L_00258634;
    // 0x00258580: nop

L_00258584:
    // 0x00258584: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x00258588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025858C: lwc1        $f0, 0x7284($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7284);
    // 0x00258590: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00258594: nop

    // 0x00258598: bc1f        L_002585AC
    if (!c1cs) {
        // 0x0025859C: nop
    
            goto L_002585AC;
    }
    // 0x0025859C: nop

    // 0x002585A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002585A4: lwc1        $f0, 0x7288($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7288);
    // 0x002585A8: swc1        $f0, 0xAAC($s0)
    MEM_W(0XAAC, ctx->r16) = ctx->f0.u32l;
L_002585AC:
    // 0x002585AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002585B0: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x002585B4: beq         $v0, $zero, L_002585DC
    if (ctx->r2 == 0) {
        // 0x002585B8: nop
    
            goto L_002585DC;
    }
    // 0x002585B8: nop

    // 0x002585BC: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x002585C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002585C4: lwc1        $f1, 0x728C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X728C);
    // 0x002585C8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002585CC: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    // 0x002585D0: lw          $a0, 0x1A8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1A8);
    // 0x002585D4: jal         0x00248720
    // 0x002585D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_00248720(rdram, ctx);
        goto after_4;
    // 0x002585D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_4:
L_002585DC:
    // 0x002585DC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x002585E0: lw          $a0, 0x6D20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D20);
    // 0x002585E4: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x002585E8: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x002585EC: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002585F0: mfhi        $a3
    ctx->r7 = hi;
    // 0x002585F4: srl         $v1, $a3, 1
    ctx->r3 = S32(U32(ctx->r7) >> 1);
    // 0x002585F8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002585FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00258600: bne         $a0, $v0, L_00258634
    if (ctx->r4 != ctx->r2) {
        // 0x00258604: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00258634;
    }
    // 0x00258604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00258608: jal         0x0025398C
    // 0x0025860C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_0025398C(rdram, ctx);
        goto after_5;
    // 0x0025860C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_5:
    // 0x00258610: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00258614: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00258618: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x0025861C: addu        $v1, $s0, $v0
    ctx->r3 = ADD32(ctx->r16, ctx->r2);
    // 0x00258620: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00258624: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00258628: bltzl       $v0, L_00258630
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025862C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00258630;
    }
    goto skip_1;
    // 0x0025862C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
L_00258630:
    // 0x00258630: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_00258634:
    // 0x00258634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00258638: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025863C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258644: jr          $ra
    // 0x00258648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00258648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
