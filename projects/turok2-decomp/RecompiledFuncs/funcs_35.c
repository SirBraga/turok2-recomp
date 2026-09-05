#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00254760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254760: jr          $ra
    // 0x00254764: sh          $v0, 0x52A($a0)
    MEM_H(0X52A, ctx->r4) = ctx->r2;
    return;
    // 0x00254764: sh          $v0, 0x52A($a0)
    MEM_H(0X52A, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0040D4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D4C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040D4CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040D4D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040D4D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040D4D8: jal         0x00275624
    // 0x0040D4DC: addiu       $a0, $zero, 0x284F
    ctx->r4 = ADD32(0, 0X284F);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0040D4DC: addiu       $a0, $zero, 0x284F
    ctx->r4 = ADD32(0, 0X284F);
    after_0:
    // 0x0040D4E0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0040D4E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040D4E8: jal         0x00243414
    // 0x0040D4EC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040D4EC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x0040D4F0: lw          $v1, 0x4F8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4F8);
    // 0x0040D4F4: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x0040D4F8: sw          $v0, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r2;
    // 0x0040D4FC: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x0040D500: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040D504: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D508: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0040D50C: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x0040D510: blez        $v0, L_0040D538
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D514: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_0040D538;
    }
    // 0x0040D514: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x0040D518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D51C:
    // 0x0040D51C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040D520: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D524: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040D528: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D52C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D530: bne         $v0, $zero, L_0040D51C
    if (ctx->r2 != 0) {
        // 0x0040D534: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D51C;
    }
    // 0x0040D534: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D538:
    // 0x0040D538: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040D53C: blez        $v0, L_0040D564
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D540: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D564;
    }
    // 0x0040D540: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D548:
    // 0x0040D548: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0040D54C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D550: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040D554: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D558: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D55C: bne         $v0, $zero, L_0040D548
    if (ctx->r2 != 0) {
        // 0x0040D560: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D548;
    }
    // 0x0040D560: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D564:
    // 0x0040D564: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040D568: blez        $v0, L_0040D590
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040D56C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040D590;
    }
    // 0x0040D56C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040D570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040D574:
    // 0x0040D574: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0040D578: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040D57C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0040D580: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040D584: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040D588: bne         $v0, $zero, L_0040D574
    if (ctx->r2 != 0) {
        // 0x0040D58C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040D574;
    }
    // 0x0040D58C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040D590:
    // 0x0040D590: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040D594: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x0040D598: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040D59C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040D5A0: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040D5A4: beq         $v0, $zero, L_0040D5B4
    if (ctx->r2 == 0) {
        // 0x0040D5A8: nop
    
            goto L_0040D5B4;
    }
    // 0x0040D5A8: nop

    // 0x0040D5AC: jalr        $v0
    // 0x0040D5B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0040D5B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_0040D5B4:
    // 0x0040D5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D5B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D5BC: jr          $ra
    // 0x0040D5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002559E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002559E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002559E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002559E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002559EC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x002559F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002559F4: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x002559F8: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x002559FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00255A00: bne         $v0, $zero, L_00255A34
    if (ctx->r2 != 0) {
        // 0x00255A04: nop
    
            goto L_00255A34;
    }
    // 0x00255A04: nop

    // 0x00255A08: jal         0x00268A5C
    // 0x00255A0C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    func_00268A5C(rdram, ctx);
        goto after_0;
    // 0x00255A0C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    after_0:
    // 0x00255A10: lwc1        $f1, 0xAE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAE4);
    // 0x00255A14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255A18: lwc1        $f2, 0x719C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X719C);
    // 0x00255A1C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00255A20: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00255A24: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x00255A28: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00255A2C: jal         0x002117DC
    // 0x00255A30: addiu       $a0, $s0, 0xAA4
    ctx->r4 = ADD32(ctx->r16, 0XAA4);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x00255A30: addiu       $a0, $s0, 0xAA4
    ctx->r4 = ADD32(ctx->r16, 0XAA4);
    after_1:
L_00255A34:
    // 0x00255A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00255A38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255A3C: jr          $ra
    // 0x00255A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00255A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00200EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200EC0: and         $t0, $t6, $t0
    ctx->r8 = ctx->r14 & ctx->r8;
    // 0x00200EC4: sub         $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x00200EC8: bgez        $t7, L_00200EE0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x00200ECC: nop
    
            goto L_00200EE0;
    }
    // 0x00200ECC: nop

    // 0x00200ED0: addu        $t9, $ra, $zero
    ctx->r25 = ADD32(ctx->r31, 0);
    // 0x00200ED4: jal         0x00200EE8
    // 0x00200ED8: nop

    func_00200EE8(rdram, ctx);
        goto after_0;
    // 0x00200ED8: nop

    after_0:
    // 0x00200EDC: addu        $ra, $t9, $zero
    ctx->r31 = ADD32(ctx->r25, 0);
L_00200EE0:
    // 0x00200EE0: jr          $ra
    // 0x00200EE4: srlv        $t6, $t6, $t1
    ctx->r14 = S32(U32(ctx->r14) >> (ctx->r9 & 31));
    return;
    // 0x00200EE4: srlv        $t6, $t6, $t1
    ctx->r14 = S32(U32(ctx->r14) >> (ctx->r9 & 31));
;}
RECOMP_FUNC void func_0029321C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029321C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00293220: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00293224: lhu         $v0, 0xC($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XC);
    // 0x00293228: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x0029322C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00293230: jr          $ra
    // 0x00293234: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x00293234: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00293254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00293258: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029325C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00293260: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00293264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00293268: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029326C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00293270: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x00293274: lw          $s1, 0x8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X8);
    // 0x00293278: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029327C: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x00293280: beq         $v0, $zero, L_002932A0
    if (ctx->r2 == 0) {
        // 0x00293284: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_002932A0;
    }
    // 0x00293284: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00293288: jal         0x002932BC
    // 0x0029328C: nop

    func_002932BC(rdram, ctx);
        goto after_0;
    // 0x0029328C: nop

    after_0:
    // 0x00293290: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00293294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00293298: j           L_002932A4
    // 0x0029329C: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
        goto L_002932A4;
    // 0x0029329C: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
L_002932A0:
    // 0x002932A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002932A4:
    // 0x002932A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002932A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002932AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002932B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002932B4: jr          $ra
    // 0x002932B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002932B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041DC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DC5C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0041DC60: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DC64: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041DC68: beq         $v0, $zero, L_0041DD14
    if (ctx->r2 == 0) {
        // 0x0041DC6C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0041DD14;
    }
    // 0x0041DC6C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041DC70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DC74: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041DC78: beq         $v0, $zero, L_0041DD5C
    if (ctx->r2 == 0) {
        // 0x0041DC7C: nop
    
            goto L_0041DD5C;
    }
    // 0x0041DC7C: nop

    // 0x0041DC80: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DC84: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041DC88: beq         $v0, $zero, L_0041DCA0
    if (ctx->r2 == 0) {
        // 0x0041DC8C: nop
    
            goto L_0041DCA0;
    }
    // 0x0041DC8C: nop

    // 0x0041DC90: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041DC94: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0041DC98: j           L_0041DCAC
    // 0x0041DC9C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
        goto L_0041DCAC;
    // 0x0041DC9C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_0041DCA0:
    // 0x0041DCA0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0041DCA4: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0041DCA8: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_0041DCAC:
    // 0x0041DCAC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x0041DCB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DCB4: beq         $v1, $v0, L_0041DCE4
    if (ctx->r3 == ctx->r2) {
        // 0x0041DCB8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041DCE4;
    }
    // 0x0041DCB8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041DCBC: bne         $v0, $zero, L_0041DCD4
    if (ctx->r2 != 0) {
        // 0x0041DCC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041DCD4;
    }
    // 0x0041DCC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041DCC4: beq         $v1, $v0, L_0041DCF4
    if (ctx->r3 == ctx->r2) {
        // 0x0041DCC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041DCF4;
    }
    // 0x0041DCC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041DCCC: beq         $v1, $v0, L_0041DD04
    if (ctx->r3 == ctx->r2) {
        // 0x0041DCD0: nop
    
            goto L_0041DD04;
    }
    // 0x0041DCD0: nop

L_0041DCD4:
    // 0x0041DCD4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DCD8: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041DCDC: j           L_0041DD84
    // 0x0041DCE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DCE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DCE4:
    // 0x0041DCE4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DCE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041DCEC: j           L_0041DD84
    // 0x0041DCF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DCF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DCF4:
    // 0x0041DCF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DCF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041DCFC: j           L_0041DD84
    // 0x0041DD00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DD00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DD04:
    // 0x0041DD04: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DD08: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
    // 0x0041DD0C: j           L_0041DD84
    // 0x0041DD10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DD10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DD14:
    // 0x0041DD14: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD18: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041DD1C: beq         $v0, $zero, L_0041DD6C
    if (ctx->r2 == 0) {
        // 0x0041DD20: nop
    
            goto L_0041DD6C;
    }
    // 0x0041DD20: nop

    // 0x0041DD24: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD28: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041DD2C: beq         $v0, $zero, L_0041DD44
    if (ctx->r2 == 0) {
        // 0x0041DD30: nop
    
            goto L_0041DD44;
    }
    // 0x0041DD30: nop

    // 0x0041DD34: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD38: addiu       $v1, $v1, -0x77D4
    ctx->r3 = ADD32(ctx->r3, -0X77D4);
    // 0x0041DD3C: j           L_0041DD88
    // 0x0041DD40: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0041DD88;
    // 0x0041DD40: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD44:
    // 0x0041DD44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD48: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x0041DD4C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD50: addiu       $v1, $v1, -0x6E70
    ctx->r3 = ADD32(ctx->r3, -0X6E70);
    // 0x0041DD54: beq         $v0, $zero, L_0041DD88
    if (ctx->r2 == 0) {
        // 0x0041DD58: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0041DD88;
    }
    // 0x0041DD58: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD5C:
    // 0x0041DD5C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD60: addiu       $v1, $v1, -0x410C
    ctx->r3 = ADD32(ctx->r3, -0X410C);
    // 0x0041DD64: j           L_0041DD88
    // 0x0041DD68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0041DD88;
    // 0x0041DD68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD6C:
    // 0x0041DD6C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD70: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041DD74: beq         $v0, $zero, L_0041DD88
    if (ctx->r2 == 0) {
        // 0x0041DD78: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0041DD88;
    }
    // 0x0041DD78: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0041DD7C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD80: addiu       $v1, $v1, -0x48C8
    ctx->r3 = ADD32(ctx->r3, -0X48C8);
L_0041DD84:
    // 0x0041DD84: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD88:
    // 0x0041DD88: jr          $ra
    // 0x0041DD8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0041DD8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0029E3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002115DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002115DC: bne         $v1, $zero, L_002115F4
    if (ctx->r3 != 0) {
            // 0x002115E0: nop

    func_002115F4(rdram, ctx);
    return;
    }
    // 0x002115E0: nop

    // 0x002115E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002115E8: lwc1        $f0, -0x3734($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3734);
    // 0x002115EC: jr          $ra
    // 0x002115F0: nop

    return;
    // 0x002115F0: nop

;}
RECOMP_FUNC void func_002A3AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A3AE0: bgez        $a0, L_002A3B04
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002A3AE4: addu        $t8, $zero, $zero
        ctx->r24 = ADD32(0, 0);
            goto L_002A3B04;
    }
    // 0x002A3AE4: addu        $t8, $zero, $zero
    ctx->r24 = ADD32(0, 0);
    // 0x002A3AE8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x002A3AEC: negu        $t1, $a1
    ctx->r9 = SUB32(0, ctx->r5);
    // 0x002A3AF0: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x002A3AF4: sltu        $v0, $zero, $t1
    ctx->r2 = 0 < ctx->r9 ? 1 : 0;
    // 0x002A3AF8: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x002A3AFC: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x002A3B00: addu        $a1, $t1, $zero
    ctx->r5 = ADD32(ctx->r9, 0);
L_002A3B04:
    // 0x002A3B04: bgez        $a2, L_002A3B2C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002A3B08: addu        $t1, $a3, $zero
        ctx->r9 = ADD32(ctx->r7, 0);
            goto L_002A3B2C;
    }
    // 0x002A3B08: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x002A3B0C: nor         $t8, $zero, $t8
    ctx->r24 = ~(0 | ctx->r24);
    // 0x002A3B10: negu        $t3, $a3
    ctx->r11 = SUB32(0, ctx->r7);
    // 0x002A3B14: negu        $v1, $a2
    ctx->r3 = SUB32(0, ctx->r6);
    // 0x002A3B18: sltu        $v0, $zero, $t3
    ctx->r2 = 0 < ctx->r11 ? 1 : 0;
    // 0x002A3B1C: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x002A3B20: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
    // 0x002A3B24: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    // 0x002A3B28: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
L_002A3B2C:
    // 0x002A3B2C: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x002A3B30: bne         $t0, $zero, L_002A3ED4
    if (ctx->r8 != 0) {
        // 0x002A3B34: addu        $t3, $a1, $zero
        ctx->r11 = ADD32(ctx->r5, 0);
            goto L_002A3ED4;
    }
    // 0x002A3B34: addu        $t3, $a1, $zero
    ctx->r11 = ADD32(ctx->r5, 0);
    // 0x002A3B38: sltu        $v0, $a0, $t1
    ctx->r2 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x002A3B3C: beq         $v0, $zero, L_002A3C84
    if (ctx->r2 == 0) {
        // 0x002A3B40: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A3C84;
    }
    // 0x002A3B40: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A3B44: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A3B48: bne         $v0, $zero, L_002A3B60
    if (ctx->r2 != 0) {
        // 0x002A3B4C: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_002A3B60;
    }
    // 0x002A3B4C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x002A3B50: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x002A3B54: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A3B58: j           L_002A3B78
    // 0x002A3B5C: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
        goto L_002A3B78;
    // 0x002A3B5C: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
L_002A3B60:
    // 0x002A3B60: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A3B64: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A3B68: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A3B6C: bne         $v0, $zero, L_002A3B78
    if (ctx->r2 != 0) {
        // 0x002A3B70: addiu       $t0, $zero, 0x18
        ctx->r8 = ADD32(0, 0X18);
            goto L_002A3B78;
    }
    // 0x002A3B70: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x002A3B74: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_002A3B78:
    // 0x002A3B78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A3B7C: addiu       $v0, $v0, -0x5370
    ctx->r2 = ADD32(ctx->r2, -0X5370);
    // 0x002A3B80: srlv        $v1, $v1, $t0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r8 & 31));
    // 0x002A3B84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A3B88: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A3B8C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x002A3B90: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x002A3B94: subu        $a2, $a1, $v0
    ctx->r6 = SUB32(ctx->r5, ctx->r2);
    // 0x002A3B98: beq         $a2, $zero, L_002A3BB4
    if (ctx->r6 == 0) {
        // 0x002A3B9C: sllv        $v1, $a0, $a2
        ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
            goto L_002A3BB4;
    }
    // 0x002A3B9C: sllv        $v1, $a0, $a2
    ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x002A3BA0: sllv        $t1, $t1, $a2
    ctx->r9 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x002A3BA4: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x002A3BA8: srlv        $v0, $t3, $v0
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r2 & 31));
    // 0x002A3BAC: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002A3BB0: sllv        $t3, $t3, $a2
    ctx->r11 = S32(ctx->r11 << (ctx->r6 & 31));
L_002A3BB4:
    // 0x002A3BB4: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A3BB8: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x002A3BBC: bne         $a2, $zero, L_002A3BC8
    if (ctx->r6 != 0) {
        // 0x002A3BC0: nop
    
            goto L_002A3BC8;
    }
    // 0x002A3BC0: nop

    // 0x002A3BC4: break       7
    do_break(2767812);
L_002A3BC8:
    // 0x002A3BC8: mflo        $a3
    ctx->r7 = lo;
    // 0x002A3BCC: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3BD0: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
    // 0x002A3BD4: nop

    // 0x002A3BD8: mult        $a3, $t0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3BDC: srl         $v0, $t3, 16
    ctx->r2 = S32(U32(ctx->r11) >> 16);
    // 0x002A3BE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3BE4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3BE8: mflo        $a1
    ctx->r5 = lo;
    // 0x002A3BEC: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3BF0: beql        $v0, $zero, L_002A3C20
    if (ctx->r2 == 0) {
        // 0x002A3BF4: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A3C20;
    }
    goto skip_0;
    // 0x002A3BF4: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_0:
    // 0x002A3BF8: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A3BFC: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A3C00: bne         $v0, $zero, L_002A3C1C
    if (ctx->r2 != 0) {
        // 0x002A3C04: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_002A3C1C;
    }
    // 0x002A3C04: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A3C08: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3C0C: beql        $v0, $zero, L_002A3C20
    if (ctx->r2 == 0) {
        // 0x002A3C10: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A3C20;
    }
    goto skip_1;
    // 0x002A3C10: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_1:
    // 0x002A3C14: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A3C18: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A3C1C:
    // 0x002A3C1C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_002A3C20:
    // 0x002A3C20: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A3C24: bne         $a2, $zero, L_002A3C30
    if (ctx->r6 != 0) {
        // 0x002A3C28: nop
    
            goto L_002A3C30;
    }
    // 0x002A3C28: nop

    // 0x002A3C2C: break       7
    do_break(2767916);
L_002A3C30:
    // 0x002A3C30: mflo        $a0
    ctx->r4 = lo;
    // 0x002A3C34: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3C38: nop

    // 0x002A3C3C: nop

    // 0x002A3C40: mult        $a0, $t0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3C44: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x002A3C48: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3C4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3C50: mflo        $a1
    ctx->r5 = lo;
    // 0x002A3C54: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3C58: beq         $v0, $zero, L_002A3C78
    if (ctx->r2 == 0) {
        // 0x002A3C5C: addu        $v1, $v1, $t1
        ctx->r3 = ADD32(ctx->r3, ctx->r9);
            goto L_002A3C78;
    }
    // 0x002A3C5C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A3C60: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A3C64: bne         $v0, $zero, L_002A3C78
    if (ctx->r2 != 0) {
        // 0x002A3C68: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A3C78;
    }
    // 0x002A3C68: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A3C6C: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3C70: bnel        $v0, $zero, L_002A3C78
    if (ctx->r2 != 0) {
        // 0x002A3C74: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A3C78;
    }
    goto skip_2;
    // 0x002A3C74: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_2:
L_002A3C78:
    // 0x002A3C78: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A3C7C: j           L_002A4094
    // 0x002A3C80: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
        goto L_002A4094;
    // 0x002A3C80: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
L_002A3C84:
    // 0x002A3C84: bne         $t1, $zero, L_002A3CAC
    if (ctx->r9 != 0) {
        // 0x002A3C88: sltu        $v0, $v0, $t1
        ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
            goto L_002A3CAC;
    }
    // 0x002A3C88: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A3C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A3C90: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x002A3C94: bne         $t0, $zero, L_002A3CA0
    if (ctx->r8 != 0) {
        // 0x002A3C98: nop
    
            goto L_002A3CA0;
    }
    // 0x002A3C98: nop

    // 0x002A3C9C: break       7
    do_break(2768028);
L_002A3CA0:
    // 0x002A3CA0: mflo        $t1
    ctx->r9 = lo;
    // 0x002A3CA4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A3CA8: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
L_002A3CAC:
    // 0x002A3CAC: bne         $v0, $zero, L_002A3CC4
    if (ctx->r2 != 0) {
        // 0x002A3CB0: addu        $v1, $t1, $zero
        ctx->r3 = ADD32(ctx->r9, 0);
            goto L_002A3CC4;
    }
    // 0x002A3CB0: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x002A3CB4: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x002A3CB8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A3CBC: j           L_002A3CDC
    // 0x002A3CC0: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
        goto L_002A3CDC;
    // 0x002A3CC0: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
L_002A3CC4:
    // 0x002A3CC4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A3CC8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A3CCC: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A3CD0: bne         $v0, $zero, L_002A3CDC
    if (ctx->r2 != 0) {
        // 0x002A3CD4: addiu       $a2, $zero, 0x18
        ctx->r6 = ADD32(0, 0X18);
            goto L_002A3CDC;
    }
    // 0x002A3CD4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x002A3CD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_002A3CDC:
    // 0x002A3CDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A3CE0: addiu       $v0, $v0, -0x5370
    ctx->r2 = ADD32(ctx->r2, -0X5370);
    // 0x002A3CE4: srlv        $v1, $v1, $a2
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r6 & 31));
    // 0x002A3CE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A3CEC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A3CF0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A3CF4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A3CF8: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x002A3CFC: bne         $a2, $zero, L_002A3D10
    if (ctx->r6 != 0) {
        // 0x002A3D00: subu        $a1, $v1, $a2
        ctx->r5 = SUB32(ctx->r3, ctx->r6);
            goto L_002A3D10;
    }
    // 0x002A3D00: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    // 0x002A3D04: subu        $a0, $a0, $t1
    ctx->r4 = SUB32(ctx->r4, ctx->r9);
    // 0x002A3D08: j           L_002A3E04
    // 0x002A3D0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_002A3E04;
    // 0x002A3D0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_002A3D10:
    // 0x002A3D10: sllv        $t1, $t1, $a2
    ctx->r9 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x002A3D14: srlv        $a3, $a0, $a1
    ctx->r7 = S32(U32(ctx->r4) >> (ctx->r5 & 31));
    // 0x002A3D18: sllv        $v1, $a0, $a2
    ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x002A3D1C: srlv        $v0, $t3, $a1
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r5 & 31));
    // 0x002A3D20: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002A3D24: sllv        $t3, $t3, $a2
    ctx->r11 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x002A3D28: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A3D2C: divu        $zero, $a3, $a2
    lo = S32(U32(ctx->r7) / U32(ctx->r6)); hi = S32(U32(ctx->r7) % U32(ctx->r6));
    // 0x002A3D30: bne         $a2, $zero, L_002A3D3C
    if (ctx->r6 != 0) {
        // 0x002A3D34: nop
    
            goto L_002A3D3C;
    }
    // 0x002A3D34: nop

    // 0x002A3D38: break       7
    do_break(2768184);
L_002A3D3C:
    // 0x002A3D3C: mflo        $t0
    ctx->r8 = lo;
    // 0x002A3D40: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3D44: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x002A3D48: nop

    // 0x002A3D4C: mult        $t0, $a1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3D50: srl         $v0, $a0, 16
    ctx->r2 = S32(U32(ctx->r4) >> 16);
    // 0x002A3D54: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3D58: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3D5C: mflo        $a3
    ctx->r7 = lo;
    // 0x002A3D60: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A3D64: beql        $v0, $zero, L_002A3D94
    if (ctx->r2 == 0) {
        // 0x002A3D68: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A3D94;
    }
    goto skip_3;
    // 0x002A3D68: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_3:
    // 0x002A3D6C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A3D70: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A3D74: bne         $v0, $zero, L_002A3D90
    if (ctx->r2 != 0) {
        // 0x002A3D78: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_002A3D90;
    }
    // 0x002A3D78: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002A3D7C: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A3D80: beql        $v0, $zero, L_002A3D94
    if (ctx->r2 == 0) {
        // 0x002A3D84: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A3D94;
    }
    goto skip_4;
    // 0x002A3D84: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_4:
    // 0x002A3D88: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002A3D8C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A3D90:
    // 0x002A3D90: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
L_002A3D94:
    // 0x002A3D94: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A3D98: bne         $a2, $zero, L_002A3DA4
    if (ctx->r6 != 0) {
        // 0x002A3D9C: nop
    
            goto L_002A3DA4;
    }
    // 0x002A3D9C: nop

    // 0x002A3DA0: break       7
    do_break(2768288);
L_002A3DA4:
    // 0x002A3DA4: mflo        $a2
    ctx->r6 = lo;
    // 0x002A3DA8: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3DAC: nop

    // 0x002A3DB0: nop

    // 0x002A3DB4: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3DB8: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x002A3DBC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3DC0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3DC4: mflo        $a3
    ctx->r7 = lo;
    // 0x002A3DC8: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A3DCC: beq         $v0, $zero, L_002A3DFC
    if (ctx->r2 == 0) {
        // 0x002A3DD0: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_002A3DFC;
    }
    // 0x002A3DD0: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x002A3DD4: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A3DD8: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A3DDC: bne         $v0, $zero, L_002A3DF8
    if (ctx->r2 != 0) {
        // 0x002A3DE0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_002A3DF8;
    }
    // 0x002A3DE0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A3DE4: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A3DE8: beq         $v0, $zero, L_002A3DFC
    if (ctx->r2 == 0) {
        // 0x002A3DEC: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_002A3DFC;
    }
    // 0x002A3DEC: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x002A3DF0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A3DF4: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A3DF8:
    // 0x002A3DF8: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_002A3DFC:
    // 0x002A3DFC: or          $t2, $v0, $a2
    ctx->r10 = ctx->r2 | ctx->r6;
    // 0x002A3E00: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
L_002A3E04:
    // 0x002A3E04: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A3E08: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x002A3E0C: bne         $a2, $zero, L_002A3E18
    if (ctx->r6 != 0) {
        // 0x002A3E10: nop
    
            goto L_002A3E18;
    }
    // 0x002A3E10: nop

    // 0x002A3E14: break       7
    do_break(2768404);
L_002A3E18:
    // 0x002A3E18: mflo        $a3
    ctx->r7 = lo;
    // 0x002A3E1C: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3E20: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
    // 0x002A3E24: nop

    // 0x002A3E28: mult        $a3, $t0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3E2C: srl         $v0, $t3, 16
    ctx->r2 = S32(U32(ctx->r11) >> 16);
    // 0x002A3E30: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3E34: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3E38: mflo        $a1
    ctx->r5 = lo;
    // 0x002A3E3C: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3E40: beql        $v0, $zero, L_002A3E70
    if (ctx->r2 == 0) {
        // 0x002A3E44: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A3E70;
    }
    goto skip_5;
    // 0x002A3E44: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_5:
    // 0x002A3E48: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A3E4C: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A3E50: bne         $v0, $zero, L_002A3E6C
    if (ctx->r2 != 0) {
        // 0x002A3E54: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_002A3E6C;
    }
    // 0x002A3E54: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A3E58: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3E5C: beql        $v0, $zero, L_002A3E70
    if (ctx->r2 == 0) {
        // 0x002A3E60: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A3E70;
    }
    goto skip_6;
    // 0x002A3E60: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_6:
    // 0x002A3E64: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A3E68: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A3E6C:
    // 0x002A3E6C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_002A3E70:
    // 0x002A3E70: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A3E74: bne         $a2, $zero, L_002A3E80
    if (ctx->r6 != 0) {
        // 0x002A3E78: nop
    
            goto L_002A3E80;
    }
    // 0x002A3E78: nop

    // 0x002A3E7C: break       7
    do_break(2768508);
L_002A3E80:
    // 0x002A3E80: mflo        $a0
    ctx->r4 = lo;
    // 0x002A3E84: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3E88: nop

    // 0x002A3E8C: nop

    // 0x002A3E90: mult        $a0, $t0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3E94: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x002A3E98: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3E9C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3EA0: mflo        $a1
    ctx->r5 = lo;
    // 0x002A3EA4: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3EA8: beq         $v0, $zero, L_002A3EC8
    if (ctx->r2 == 0) {
        // 0x002A3EAC: addu        $v1, $v1, $t1
        ctx->r3 = ADD32(ctx->r3, ctx->r9);
            goto L_002A3EC8;
    }
    // 0x002A3EAC: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A3EB0: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A3EB4: bne         $v0, $zero, L_002A3EC8
    if (ctx->r2 != 0) {
        // 0x002A3EB8: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A3EC8;
    }
    // 0x002A3EB8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A3EBC: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A3EC0: bnel        $v0, $zero, L_002A3EC8
    if (ctx->r2 != 0) {
        // 0x002A3EC4: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A3EC8;
    }
    goto skip_7;
    // 0x002A3EC4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_7:
L_002A3EC8:
    // 0x002A3EC8: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A3ECC: j           L_002A4098
    // 0x002A3ED0: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
        goto L_002A4098;
    // 0x002A3ED0: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
L_002A3ED4:
    // 0x002A3ED4: sltu        $v0, $a0, $t0
    ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
    // 0x002A3ED8: beq         $v0, $zero, L_002A3EE8
    if (ctx->r2 == 0) {
        // 0x002A3EDC: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A3EE8;
    }
    // 0x002A3EDC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A3EE0: j           L_002A4094
    // 0x002A3EE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_002A4094;
    // 0x002A3EE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_002A3EE8:
    // 0x002A3EE8: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A3EEC: bne         $v0, $zero, L_002A3F04
    if (ctx->r2 != 0) {
        // 0x002A3EF0: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_002A3F04;
    }
    // 0x002A3EF0: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002A3EF4: sltiu       $v0, $t0, 0x100
    ctx->r2 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x002A3EF8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A3EFC: j           L_002A3F1C
    // 0x002A3F00: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
        goto L_002A3F1C;
    // 0x002A3F00: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
L_002A3F04:
    // 0x002A3F04: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A3F08: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A3F0C: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A3F10: bne         $v0, $zero, L_002A3F1C
    if (ctx->r2 != 0) {
        // 0x002A3F14: addiu       $a2, $zero, 0x18
        ctx->r6 = ADD32(0, 0X18);
            goto L_002A3F1C;
    }
    // 0x002A3F14: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x002A3F18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_002A3F1C:
    // 0x002A3F1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A3F20: addiu       $v0, $v0, -0x5370
    ctx->r2 = ADD32(ctx->r2, -0X5370);
    // 0x002A3F24: srlv        $v1, $v1, $a2
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r6 & 31));
    // 0x002A3F28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A3F2C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A3F30: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A3F34: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A3F38: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x002A3F3C: bne         $a2, $zero, L_002A3F64
    if (ctx->r6 != 0) {
        // 0x002A3F40: subu        $a1, $v1, $a2
        ctx->r5 = SUB32(ctx->r3, ctx->r6);
            goto L_002A3F64;
    }
    // 0x002A3F40: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    // 0x002A3F44: sltu        $v0, $t0, $a0
    ctx->r2 = ctx->r8 < ctx->r4 ? 1 : 0;
    // 0x002A3F48: bne         $v0, $zero, L_002A4094
    if (ctx->r2 != 0) {
        // 0x002A3F4C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_002A4094;
    }
    // 0x002A3F4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A3F50: sltu        $v0, $t3, $t1
    ctx->r2 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x002A3F54: bne         $v0, $zero, L_002A4094
    if (ctx->r2 != 0) {
        // 0x002A3F58: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002A4094;
    }
    // 0x002A3F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002A3F5C: j           L_002A4094
    // 0x002A3F60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_002A4094;
    // 0x002A3F60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_002A3F64:
    // 0x002A3F64: sllv        $v1, $t0, $a2
    ctx->r3 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x002A3F68: srlv        $v0, $t1, $a1
    ctx->r2 = S32(U32(ctx->r9) >> (ctx->r5 & 31));
    // 0x002A3F6C: or          $t0, $v1, $v0
    ctx->r8 = ctx->r3 | ctx->r2;
    // 0x002A3F70: sllv        $t1, $t1, $a2
    ctx->r9 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x002A3F74: srlv        $a3, $a0, $a1
    ctx->r7 = S32(U32(ctx->r4) >> (ctx->r5 & 31));
    // 0x002A3F78: sllv        $v1, $a0, $a2
    ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x002A3F7C: srlv        $v0, $t3, $a1
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r5 & 31));
    // 0x002A3F80: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002A3F84: sllv        $t3, $t3, $a2
    ctx->r11 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x002A3F88: srl         $a2, $t0, 16
    ctx->r6 = S32(U32(ctx->r8) >> 16);
    // 0x002A3F8C: divu        $zero, $a3, $a2
    lo = S32(U32(ctx->r7) / U32(ctx->r6)); hi = S32(U32(ctx->r7) % U32(ctx->r6));
    // 0x002A3F90: bne         $a2, $zero, L_002A3F9C
    if (ctx->r6 != 0) {
        // 0x002A3F94: nop
    
            goto L_002A3F9C;
    }
    // 0x002A3F94: nop

    // 0x002A3F98: break       7
    do_break(2768792);
L_002A3F9C:
    // 0x002A3F9C: mflo        $t2
    ctx->r10 = lo;
    // 0x002A3FA0: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A3FA4: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x002A3FA8: nop

    // 0x002A3FAC: mult        $t2, $a1
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A3FB0: srl         $v0, $a0, 16
    ctx->r2 = S32(U32(ctx->r4) >> 16);
    // 0x002A3FB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A3FB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A3FBC: mflo        $a3
    ctx->r7 = lo;
    // 0x002A3FC0: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A3FC4: beql        $v0, $zero, L_002A3FF4
    if (ctx->r2 == 0) {
        // 0x002A3FC8: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A3FF4;
    }
    goto skip_8;
    // 0x002A3FC8: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_8:
    // 0x002A3FCC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A3FD0: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A3FD4: bne         $v0, $zero, L_002A3FF0
    if (ctx->r2 != 0) {
        // 0x002A3FD8: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_002A3FF0;
    }
    // 0x002A3FD8: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x002A3FDC: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A3FE0: beql        $v0, $zero, L_002A3FF4
    if (ctx->r2 == 0) {
        // 0x002A3FE4: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A3FF4;
    }
    goto skip_9;
    // 0x002A3FE4: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_9:
    // 0x002A3FE8: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x002A3FEC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
L_002A3FF0:
    // 0x002A3FF0: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
L_002A3FF4:
    // 0x002A3FF4: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A3FF8: bne         $a2, $zero, L_002A4004
    if (ctx->r6 != 0) {
        // 0x002A3FFC: nop
    
            goto L_002A4004;
    }
    // 0x002A3FFC: nop

    // 0x002A4000: break       7
    do_break(2768896);
L_002A4004:
    // 0x002A4004: mflo        $a2
    ctx->r6 = lo;
    // 0x002A4008: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A400C: nop

    // 0x002A4010: nop

    // 0x002A4014: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4018: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x002A401C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4020: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4024: mflo        $a3
    ctx->r7 = lo;
    // 0x002A4028: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A402C: beq         $v0, $zero, L_002A405C
    if (ctx->r2 == 0) {
        // 0x002A4030: sll         $v0, $t2, 16
        ctx->r2 = S32(ctx->r10 << 16);
            goto L_002A405C;
    }
    // 0x002A4030: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x002A4034: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4038: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A403C: bne         $v0, $zero, L_002A4058
    if (ctx->r2 != 0) {
        // 0x002A4040: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_002A4058;
    }
    // 0x002A4040: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A4044: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A4048: beq         $v0, $zero, L_002A405C
    if (ctx->r2 == 0) {
        // 0x002A404C: sll         $v0, $t2, 16
        ctx->r2 = S32(ctx->r10 << 16);
            goto L_002A405C;
    }
    // 0x002A404C: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x002A4050: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A4054: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
L_002A4058:
    // 0x002A4058: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
L_002A405C:
    // 0x002A405C: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    // 0x002A4060: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
    // 0x002A4064: multu       $a2, $t1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4068: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A406C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x002A4070: mflo        $t0
    ctx->r8 = lo;
    // 0x002A4074: bnel        $v0, $zero, L_002A4094
    if (ctx->r2 != 0) {
        // 0x002A4078: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_002A4094;
    }
    goto skip_10;
    // 0x002A4078: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    skip_10:
    // 0x002A407C: bne         $v1, $a0, L_002A4098
    if (ctx->r3 != ctx->r4) {
        // 0x002A4080: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_002A4098;
    }
    // 0x002A4080: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x002A4084: sltu        $v0, $t3, $t0
    ctx->r2 = ctx->r11 < ctx->r8 ? 1 : 0;
    // 0x002A4088: beq         $v0, $zero, L_002A409C
    if (ctx->r2 == 0) {
        // 0x002A408C: addu        $t7, $a2, $zero
        ctx->r15 = ADD32(ctx->r6, 0);
            goto L_002A409C;
    }
    // 0x002A408C: addu        $t7, $a2, $zero
    ctx->r15 = ADD32(ctx->r6, 0);
    // 0x002A4090: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_002A4094:
    // 0x002A4094: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
L_002A4098:
    // 0x002A4098: addu        $t7, $a2, $zero
    ctx->r15 = ADD32(ctx->r6, 0);
L_002A409C:
    // 0x002A409C: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
    // 0x002A40A0: addu        $v0, $t6, $zero
    ctx->r2 = ADD32(ctx->r14, 0);
    // 0x002A40A4: beq         $t8, $zero, L_002A40C4
    if (ctx->r24 == 0) {
        // 0x002A40A8: addu        $v1, $t7, $zero
        ctx->r3 = ADD32(ctx->r15, 0);
            goto L_002A40C4;
    }
    // 0x002A40A8: addu        $v1, $t7, $zero
    ctx->r3 = ADD32(ctx->r15, 0);
    // 0x002A40AC: negu        $t5, $v1
    ctx->r13 = SUB32(0, ctx->r3);
    // 0x002A40B0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x002A40B4: sltu        $v0, $zero, $t5
    ctx->r2 = 0 < ctx->r13 ? 1 : 0;
    // 0x002A40B8: subu        $t4, $v1, $v0
    ctx->r12 = SUB32(ctx->r3, ctx->r2);
    // 0x002A40BC: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
    // 0x002A40C0: addu        $v1, $t5, $zero
    ctx->r3 = ADD32(ctx->r13, 0);
L_002A40C4:
    // 0x002A40C4: jr          $ra
    // 0x002A40C8: nop

    return;
    // 0x002A40C8: nop

;}
RECOMP_FUNC void func_0023876C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023876C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238774: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238778: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x0023877C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238780: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238784: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238788: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0023878C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238790: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00238794: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00238798: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0023879C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x002387A0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x002387A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x002387A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x002387AC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x002387B0: jal         0x00237AFC
    // 0x002387B4: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x002387B4: nop

    after_0:
    // 0x002387B8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002387BC: jr          $ra
    // 0x002387C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002387C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00405288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405288: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040528C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00405290: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00405294: addiu       $s0, $s0, -0x5E0
    ctx->r16 = ADD32(ctx->r16, -0X5E0);
    // 0x00405298: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0040529C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004052A0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x004052A4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004052A8: beq         $v0, $zero, L_004053AC
    if (ctx->r2 == 0) {
        // 0x004052AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004053AC;
    }
    // 0x004052AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004052B0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x004052B4: beql        $v1, $v0, L_00405338
    if (ctx->r3 == ctx->r2) {
        // 0x004052B8: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_00405338;
    }
    goto skip_0;
    // 0x004052B8: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    skip_0:
    // 0x004052BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004052C0: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x004052C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x004052C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004052CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004052D0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004052D4: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x004052D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004052DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004052E0: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004052E4: jal         0x002119FC
    // 0x004052E8: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x004052E8: nop

    after_0:
    // 0x004052EC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004052F0: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x004052F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004052F8: lwc1        $f1, 0x43C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X43C);
    // 0x004052FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405300: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405304: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00405308: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040530C: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405310: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405318: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x0040531C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00405320: j           L_00405338
    // 0x00405324: swc1        $f1, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00405338;
    // 0x00405324: swc1        $f1, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00405328:
    // 0x00405328: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0040532C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00405330: j           L_004053AC
    // 0x00405334: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
        goto L_004053AC;
    // 0x00405334: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
L_00405338:
    // 0x00405338: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040533C: addiu       $s0, $s0, -0x5DC
    ctx->r16 = ADD32(ctx->r16, -0X5DC);
    // 0x00405340: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_00405344:
    // 0x00405344: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405348: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x0040534C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00405350: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405354: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x00405358: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0040535C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405360: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405364: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040536C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00405370: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405374: beq         $v0, $s1, L_00405328
    if (ctx->r2 == ctx->r17) {
        // 0x00405378: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00405328;
    }
    // 0x00405378: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040537C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405384: lwc1        $f14, 0x440($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X440);
    // 0x00405388: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x0040538C: lwc1        $f20, 0x8($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00405390: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00405394: jal         0x002119FC
    // 0x00405398: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00405398: nop

    after_1:
    // 0x0040539C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004053A0: nop

    // 0x004053A4: bc1t        L_00405344
    if (c1cs) {
        // 0x004053A8: nop
    
            goto L_00405344;
    }
    // 0x004053A8: nop

L_004053AC:
    // 0x004053AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004053B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004053B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004053B8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x004053BC: jr          $ra
    // 0x004053C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004053C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041860C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041860C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418610: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00418614: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041861C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418620: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418624: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418628: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041862C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418630: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418634: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418638: lb          $v0, 0x27($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X27);
    // 0x0041863C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418640: jal         0x0041648C
    // 0x00418644: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418644: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418648: sb          $v0, 0x27($s0)
    MEM_B(0X27, ctx->r16) = ctx->r2;
    // 0x0041864C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418654: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418658: jr          $ra
    // 0x0041865C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041865C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025EAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EAFC: addiu       $v0, $zero, 0x259
    ctx->r2 = ADD32(0, 0X259);
    // 0x0025EB00: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x0025EB04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EB08: lwc1        $f0, 0x77EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77EC);
    // 0x0025EB0C: beq         $v1, $v0, L_0025EB1C
    if (ctx->r3 == ctx->r2) {
        // 0x0025EB10: nop
    
            goto L_0025EB1C;
    }
    // 0x0025EB10: nop

    // 0x0025EB14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EB18: lwc1        $f0, 0x77F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77F0);
L_0025EB1C:
    // 0x0025EB1C: jr          $ra
    // 0x0025EB20: nop

    return;
    // 0x0025EB20: nop

;}
RECOMP_FUNC void func_00214564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214564: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00214568: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x0021456C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00214570: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00214574: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00214578: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0021457C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x00214580: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00214584: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x00214588: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x0021458C: lhu         $v0, 0x28($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X28);
    // 0x00214590: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00214594: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00214598: sw          $a2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r6;
    // 0x0021459C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x002145A0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x002145A4: lhu         $a1, 0x2C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2C);
    // 0x002145A8: jal         0x00225E88
    // 0x002145AC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_00225E88(rdram, ctx);
        goto after_0;
    // 0x002145AC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x002145B0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x002145B4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x002145B8: sh          $v0, 0x88($s1)
    MEM_H(0X88, ctx->r17) = ctx->r2;
    // 0x002145BC: lb          $v0, 0x2F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2F);
    // 0x002145C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002145C4: lwc1        $f1, 0x57EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X57EC);
    // 0x002145C8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002145CC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002145D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002145D4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002145D8: lb          $v0, 0x30($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X30);
    // 0x002145DC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002145E0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002145E4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002145E8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002145EC: lb          $v0, 0x31($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X31);
    // 0x002145F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002145F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002145F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002145FC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00214600: lb          $v0, 0x32($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X32);
    // 0x00214604: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00214608: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021460C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00214610: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00214614: jal         0x00211074
    // 0x00214618: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_00211074(rdram, ctx);
        goto after_1;
    // 0x00214618: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0021461C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00214620: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x00214624: jal         0x00211114
    // 0x00214628: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00211114(rdram, ctx);
        goto after_2;
    // 0x00214628: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0021462C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00214630: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x00214634: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x00214638: jal         0x0021034C
    // 0x0021463C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021034C(rdram, ctx);
        goto after_3;
    // 0x0021463C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00214640: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00214644: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00214648: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0021464C: jal         0x00210318
    // 0x00214650: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210318(rdram, ctx);
        goto after_4;
    // 0x00214650: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00214654: jal         0x00210C3C
    // 0x00214658: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210C3C(rdram, ctx);
        goto after_5;
    // 0x00214658: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0021465C: lhu         $v0, 0x88($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X88);
    // 0x00214660: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00214664: beq         $v0, $zero, L_002146D4
    if (ctx->r2 == 0) {
        // 0x00214668: addiu       $a0, $s1, 0x28
        ctx->r4 = ADD32(ctx->r17, 0X28);
            goto L_002146D4;
    }
    // 0x00214668: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    // 0x0021466C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00214670: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00214674: lwc1        $f1, 0x57F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X57F0);
    // 0x00214678: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021467C: swc1        $f0, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->f0.u32l;
    // 0x00214680: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00214684: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00214688: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    // 0x0021468C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00214690: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00214694: swc1        $f0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f0.u32l;
    // 0x00214698: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0021469C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002146A0: swc1        $f0, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f0.u32l;
    // 0x002146A4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002146A8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002146AC: swc1        $f0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f0.u32l;
    // 0x002146B0: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002146B4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002146B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002146BC: jal         0x0020FF80
    // 0x002146C0: swc1        $f0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
    func_0020FF80(rdram, ctx);
        goto after_6;
    // 0x002146C0: swc1        $f0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
    after_6:
    // 0x002146C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002146C8: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x002146CC: j           L_00214798
    // 0x002146D0: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
        goto L_00214798;
    // 0x002146D0: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
L_002146D4:
    // 0x002146D4: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x002146D8: jal         0x0026D210
    // 0x002146DC: nop

    func_0026D210(rdram, ctx);
        goto after_7;
    // 0x002146DC: nop

    after_7:
    // 0x002146E0: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x002146E4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002146E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002146EC: lwc1        $f20, 0x57F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X57F4);
    // 0x002146F0: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002146F4: swc1        $f0, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->f0.u32l;
    // 0x002146F8: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x002146FC: jal         0x0026D210
    // 0x00214700: nop

    func_0026D210(rdram, ctx);
        goto after_8;
    // 0x00214700: nop

    after_8:
    // 0x00214704: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00214708: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021470C: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00214710: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    // 0x00214714: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x00214718: jal         0x0026D210
    // 0x0021471C: nop

    func_0026D210(rdram, ctx);
        goto after_9;
    // 0x0021471C: nop

    after_9:
    // 0x00214720: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00214724: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00214728: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0021472C: swc1        $f0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f0.u32l;
    // 0x00214730: lhu         $a0, 0x22($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X22);
    // 0x00214734: jal         0x0026D210
    // 0x00214738: nop

    func_0026D210(rdram, ctx);
        goto after_10;
    // 0x00214738: nop

    after_10:
    // 0x0021473C: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00214740: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00214744: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00214748: swc1        $f0, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f0.u32l;
    // 0x0021474C: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x00214750: jal         0x0026D210
    // 0x00214754: nop

    func_0026D210(rdram, ctx);
        goto after_11;
    // 0x00214754: nop

    after_11:
    // 0x00214758: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0021475C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00214760: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00214764: swc1        $f0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f0.u32l;
    // 0x00214768: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x0021476C: jal         0x0026D210
    // 0x00214770: nop

    func_0026D210(rdram, ctx);
        goto after_12;
    // 0x00214770: nop

    after_12:
    // 0x00214774: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00214778: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021477C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00214780: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00214784: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    // 0x00214788: jal         0x0020D274
    // 0x0021478C: swc1        $f0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
    func_0020D274(rdram, ctx);
        goto after_13;
    // 0x0021478C: swc1        $f0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
    after_13:
    // 0x00214790: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00214794: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
L_00214798:
    // 0x00214798: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0021479C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x002147A0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x002147A4: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x002147A8: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x002147AC: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x002147B0: lhu         $v1, 0x2A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2A);
    // 0x002147B4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002147B8: bne         $v1, $v0, L_002147C8
    if (ctx->r3 != ctx->r2) {
        // 0x002147BC: nop
    
            goto L_002147C8;
    }
    // 0x002147BC: nop

    // 0x002147C0: j           L_002147D8
    // 0x002147C4: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
        goto L_002147D8;
    // 0x002147C4: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
L_002147C8:
    // 0x002147C8: lhu         $v0, 0x2A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2A);
    // 0x002147CC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x002147D0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x002147D4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_002147D8:
    // 0x002147D8: lui         $v1, 0x3F
    ctx->r3 = S32(0X3F << 16);
    // 0x002147DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002147E0: lw          $v0, -0x3510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3510);
    // 0x002147E4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x002147E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002147EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002147F0: sw          $v0, -0x3510($at)
    MEM_W(-0X3510, ctx->r1) = ctx->r2;
    // 0x002147F4: bne         $v0, $v1, L_00214804
    if (ctx->r2 != ctx->r3) {
        // 0x002147F8: lui         $v0, 0x38
        ctx->r2 = S32(0X38 << 16);
            goto L_00214804;
    }
    // 0x002147F8: lui         $v0, 0x38
    ctx->r2 = S32(0X38 << 16);
    // 0x002147FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00214800: sw          $v0, -0x3510($at)
    MEM_W(-0X3510, ctx->r1) = ctx->r2;
L_00214804:
    // 0x00214804: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214808: lw          $v0, -0x3510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3510);
    // 0x0021480C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00214810: lbu         $v1, 0x6D1B($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6D1B);
    // 0x00214814: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x00214818: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0021481C: sw          $v0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r2;
    // 0x00214820: sb          $v1, 0x8A($s1)
    MEM_B(0X8A, ctx->r17) = ctx->r3;
    // 0x00214824: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x00214828: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x0021482C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00214830: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00214834: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00214838: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x0021483C: jr          $ra
    // 0x00214840: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00214840: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00256D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256D44: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x00256D48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00256D4C: bne         $v1, $v0, L_00256D64
    if (ctx->r3 != ctx->r2) {
        // 0x00256D50: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00256D64;
    }
    // 0x00256D50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00256D54: lw          $a0, 0xC04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC04);
    // 0x00256D58: slti        $v0, $a0, 0x7DF
    ctx->r2 = SIGNED(ctx->r4) < 0X7DF ? 1 : 0;
    // 0x00256D5C: beql        $v0, $zero, L_00256D64
    if (ctx->r2 == 0) {
        // 0x00256D60: slti        $a1, $a0, 0x7E4
        ctx->r5 = SIGNED(ctx->r4) < 0X7E4 ? 1 : 0;
            goto L_00256D64;
    }
    goto skip_0;
    // 0x00256D60: slti        $a1, $a0, 0x7E4
    ctx->r5 = SIGNED(ctx->r4) < 0X7E4 ? 1 : 0;
    skip_0:
L_00256D64:
    // 0x00256D64: jr          $ra
    // 0x00256D68: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x00256D68: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_0023C1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C1D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023C1DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023C1E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C1E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C1E8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023C1EC: addiu       $s1, $s0, 0xC
    ctx->r17 = ADD32(ctx->r16, 0XC);
    // 0x0023C1F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023C1F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023C1F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023C1FC: jal         0x0020EF2C
    // 0x0023C200: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023C200: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    after_0:
    // 0x0023C204: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x0023C208: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023C20C: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x0023C210: jal         0x0020EF2C
    // 0x0023C214: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023C214: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0023C218: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023C21C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023C220: jal         0x0020EFDC
    // 0x0023C224: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023C224: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0023C228: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023C22C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023C230: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023C234: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023C238: jr          $ra
    // 0x0023C23C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023C23C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002841D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002841D0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002841D4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x002841D8: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x002841DC: beq         $v0, $zero, L_002841FC
    if (ctx->r2 == 0) {
        // 0x002841E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002841FC;
    }
    // 0x002841E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002841E4: lwc1        $f1, 0x1C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X1C);
    // 0x002841E8: lwc1        $f0, 0x34($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X34);
    // 0x002841EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002841F0: nop

    // 0x002841F4: bc1fl       L_002841FC
    if (!c1cs) {
        // 0x002841F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002841FC;
    }
    goto skip_0;
    // 0x002841F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_002841FC:
    // 0x002841FC: jr          $ra
    // 0x00284200: nop

    return;
    // 0x00284200: nop

;}
RECOMP_FUNC void func_0029BC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BC30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029BC34: beq         $v0, $zero, L_0029BC5C
    if (ctx->r2 == 0) {
        // 0x0029BC38: nop
    
            goto L_0029BC5C;
    }
    // 0x0029BC38: nop

L_0029BC3C:
    // 0x0029BC3C: bnel        $v0, $a1, L_0029BC50
    if (ctx->r2 != ctx->r5) {
        // 0x0029BC40: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029BC50;
    }
    goto skip_0;
    // 0x0029BC40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    skip_0:
    // 0x0029BC44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029BC48: jr          $ra
    // 0x0029BC4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x0029BC4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0029BC50:
    // 0x0029BC50: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029BC54: bne         $v0, $zero, L_0029BC3C
    if (ctx->r2 != 0) {
        // 0x0029BC58: nop
    
            goto L_0029BC3C;
    }
    // 0x0029BC58: nop

L_0029BC5C:
    // 0x0029BC5C: jr          $ra
    // 0x0029BC60: nop

    return;
    // 0x0029BC60: nop

;}
RECOMP_FUNC void func_0042D214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D214: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0042D218: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0042D21C: jal         0x0020EF2C
    // 0x0042D220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0042D220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    after_0:
    // 0x0042D224: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042D228: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042D22C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042D230: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0042D234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042D238: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D23C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0042D240: addiu       $a1, $a1, 0x1850
    ctx->r5 = ADD32(ctx->r5, 0X1850);
    // 0x0042D244: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0042D248: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
    // 0x0042D24C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0042D250: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042D254: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_0042D258:
    // 0x0042D258: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x0042D25C: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x0042D260: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x0042D264: sw          $zero, 0x1B8($v1)
    MEM_W(0X1B8, ctx->r3) = 0;
    // 0x0042D268: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x0042D26C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D270: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042D274: bne         $v0, $zero, L_0042D258
    if (ctx->r2 != 0) {
        // 0x0042D278: addiu       $v1, $v1, 0x1D8
        ctx->r3 = ADD32(ctx->r3, 0X1D8);
            goto L_0042D258;
    }
    // 0x0042D278: addiu       $v1, $v1, 0x1D8
    ctx->r3 = ADD32(ctx->r3, 0X1D8);
    // 0x0042D27C: ori         $a0, $zero, 0xEC00
    ctx->r4 = 0 | 0XEC00;
    // 0x0042D280: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x0042D284: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D288: jal         0x00200500
    // 0x0042D28C: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042D28C: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_1:
    // 0x0042D290: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D294: ori         $s2, $zero, 0xEC00
    ctx->r18 = 0 | 0XEC00;
    // 0x0042D298: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
L_0042D29C:
    // 0x0042D29C: addu        $a0, $s3, $s2
    ctx->r4 = ADD32(ctx->r19, ctx->r18);
    // 0x0042D2A0: jal         0x00200574
    // 0x0042D2A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x0042D2A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0042D2A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2AC: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042D2B0: bne         $v0, $zero, L_0042D29C
    if (ctx->r2 != 0) {
        // 0x0042D2B4: addiu       $s1, $s1, 0x1D8
        ctx->r17 = ADD32(ctx->r17, 0X1D8);
            goto L_0042D29C;
    }
    // 0x0042D2B4: addiu       $s1, $s1, 0x1D8
    ctx->r17 = ADD32(ctx->r17, 0X1D8);
    // 0x0042D2B8: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x0042D2BC: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x0042D2C0: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x0042D2C4: jal         0x00200500
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    func_00200500(rdram, ctx);
        goto after_3;
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    after_3:
    // 0x0042D2CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D2D0: ori         $s1, $zero, 0xEC28
    ctx->r17 = 0 | 0XEC28;
L_0042D2D4:
    // 0x0042D2D4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0042D2D8: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D2DC: jal         0x00200500
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_4;
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_4:
    // 0x0042D2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2E8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0042D2EC: bne         $v0, $zero, L_0042D2D4
    if (ctx->r2 != 0) {
        // 0x0042D2F0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042D2D4;
    }
    // 0x0042D2F0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042D2F4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D2F8: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, 0X1850);
    // 0x0042D2FC: jal         0x0027BD10
    // 0x0042D300: nop

    func_0027BD10(rdram, ctx);
        goto after_5;
    // 0x0042D300: nop

    after_5:
    // 0x0042D304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042D308: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0042D30C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0042D310: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x0042D314: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0042D318: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x0042D31C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0042D320: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0042D324: addiu       $v1, $v1, 0x1930
    ctx->r3 = ADD32(ctx->r3, 0X1930);
L_0042D328:
    // 0x0042D328: beq         $a0, $t0, L_0042D370
    if (ctx->r4 == ctx->r8) {
        // 0x0042D32C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_0042D370;
    }
    // 0x0042D32C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0042D330: beq         $v0, $zero, L_0042D348
    if (ctx->r2 == 0) {
        // 0x0042D334: nop
    
            goto L_0042D348;
    }
    // 0x0042D334: nop

    // 0x0042D338: beql        $a0, $zero, L_0042D360
    if (ctx->r4 == 0) {
        // 0x0042D33C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D360;
    }
    goto skip_0;
    // 0x0042D33C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x0042D340: j           L_0042D3A0
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D348:
    // 0x0042D348: beql        $a0, $t2, L_0042D384
    if (ctx->r4 == ctx->r10) {
        // 0x0042D34C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_0042D384;
    }
    goto skip_1;
    // 0x0042D34C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x0042D350: beql        $a0, $t1, L_0042D390
    if (ctx->r4 == ctx->r9) {
        // 0x0042D354: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D390;
    }
    goto skip_2;
    // 0x0042D354: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x0042D358: j           L_0042D3A0
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D360:
    // 0x0042D360: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x0042D364: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x0042D368: j           L_0042D39C
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D370:
    // 0x0042D370: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0042D374: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x0042D378: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0042D37C: j           L_0042D39C
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D384:
    // 0x0042D384: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D388: j           L_0042D398
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
        goto L_0042D398;
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_0042D390:
    // 0x0042D390: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D394: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
L_0042D398:
    // 0x0042D398: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_0042D39C:
    // 0x0042D39C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D3A0:
    // 0x0042D3A0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x0042D3A4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x0042D3A8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x0042D3AC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x0042D3B0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x0042D3B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042D3B8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042D3BC: bne         $v0, $zero, L_0042D328
    if (ctx->r2 != 0) {
        // 0x0042D3C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042D328;
    }
    // 0x0042D3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042D3C4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x0042D3C8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0042D3CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D3D0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x0042D3D4: jal         0x00210518
    // 0x0042D3D8: nop

    func_00210518(rdram, ctx);
        goto after_6;
    // 0x0042D3D8: nop

    after_6:
    // 0x0042D3DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0042D3E0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042D3E4: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x0042D3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D3EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D3F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D3F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D400: jr          $ra
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00275FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275FA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00275FA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00275FA8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00275FAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00275FB0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00275FB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00275FB8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00275FBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275FC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00275FC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275FC8: lw          $v0, 0xDC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XDC);
    // 0x00275FCC: addiu       $v1, $s2, 0xD8
    ctx->r3 = ADD32(ctx->r18, 0XD8);
    // 0x00275FD0: beq         $v0, $v1, L_0027615C
    if (ctx->r2 == ctx->r3) {
        // 0x00275FD4: addu        $s0, $a3, $zero
        ctx->r16 = ADD32(ctx->r7, 0);
            goto L_0027615C;
    }
    // 0x00275FD4: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00275FD8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00275FDC: jal         0x002714B0
    // 0x00275FE0: nop

    func_002714B0(rdram, ctx);
        goto after_0;
    // 0x00275FE0: nop

    after_0:
    // 0x00275FE4: lw          $v1, 0xDC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XDC);
    // 0x00275FE8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00275FEC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00275FF0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00275FF4: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00275FF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00275FFC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00276000: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00276004: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x00276008: lw          $v0, 0x108($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X108);
    // 0x0027600C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00276010: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00276014: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00276018: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0027601C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00276020: sw          $s0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r16;
    // 0x00276024: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x00276028: jal         0x00276820
    // 0x0027602C: sh          $s0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r16;
    func_00276820(rdram, ctx);
        goto after_1;
    // 0x0027602C: sh          $s0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r16;
    after_1:
    // 0x00276030: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00276034: jal         0x00276838
    // 0x00276038: sh          $v0, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r2;
    func_00276838(rdram, ctx);
        goto after_2;
    // 0x00276038: sh          $v0, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r2;
    after_2:
    // 0x0027603C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00276040: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00276044: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00276048: jal         0x0027682C
    // 0x0027604C: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
    func_0027682C(rdram, ctx);
        goto after_3;
    // 0x0027604C: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
    after_3:
    // 0x00276050: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00276054: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00276058: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027605C: jal         0x00276868
    // 0x00276060: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    func_00276868(rdram, ctx);
        goto after_4;
    // 0x00276060: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    after_4:
    // 0x00276064: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00276068: jal         0x00276898
    // 0x0027606C: sb          $v0, 0x5C($s1)
    MEM_B(0X5C, ctx->r17) = ctx->r2;
    func_00276898(rdram, ctx);
        goto after_5;
    // 0x0027606C: sb          $v0, 0x5C($s1)
    MEM_B(0X5C, ctx->r17) = ctx->r2;
    after_5:
    // 0x00276070: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00276074: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00276078: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027607C: jal         0x00276874
    // 0x00276080: sw          $v0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r2;
    func_00276874(rdram, ctx);
        goto after_6;
    // 0x00276080: sw          $v0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r2;
    after_6:
    // 0x00276084: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00276088: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0027608C: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x00276090: addiu       $v0, $zero, 0x7D00
    ctx->r2 = ADD32(0, 0X7D00);
    // 0x00276094: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x00276098: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x0027609C: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x002760A0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002760A4: lw          $v0, 0x104($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X104);
    // 0x002760A8: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x002760AC: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x002760B0: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
    // 0x002760B4: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x002760B8: sw          $t0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r8;
    // 0x002760BC: sw          $t1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r9;
    // 0x002760C0: sw          $t2, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r10;
    // 0x002760C4: sw          $zero, 0x58($s1)
    MEM_W(0X58, ctx->r17) = 0;
    // 0x002760C8: sw          $zero, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = 0;
    // 0x002760CC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002760D0: addiu       $s0, $s1, 0x8
    ctx->r16 = ADD32(ctx->r17, 0X8);
    // 0x002760D4: lh          $a1, 0x2B8C($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2B8C);
    // 0x002760D8: jal         0x00273EB8
    // 0x002760DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00273EB8(rdram, ctx);
        goto after_7;
    // 0x002760DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x002760E0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002760E4: lw          $v0, 0x2BAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BAC);
    // 0x002760E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002760EC: sw          $v0, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->r2;
    // 0x002760F0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x002760F4: jal         0x00273EC0
    // 0x002760F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00273EC0(rdram, ctx);
        goto after_8;
    // 0x002760F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_8:
    // 0x002760FC: addiu       $v0, $s2, 0x4
    ctx->r2 = ADD32(ctx->r18, 0X4);
    // 0x00276100: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x00276104: lh          $a1, 0x40($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X40);
    // 0x00276108: beq         $v1, $v0, L_0027612C
    if (ctx->r3 == ctx->r2) {
        // 0x0027610C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0027612C;
    }
    // 0x0027610C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00276110:
    // 0x00276110: lh          $v0, 0x40($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X40);
    // 0x00276114: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00276118: bne         $v0, $zero, L_0027612C
    if (ctx->r2 != 0) {
        // 0x0027611C: nop
    
            goto L_0027612C;
    }
    // 0x0027611C: nop

    // 0x00276120: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x00276124: bne         $v1, $a0, L_00276110
    if (ctx->r3 != ctx->r4) {
        // 0x00276128: nop
    
            goto L_00276110;
    }
    // 0x00276128: nop

L_0027612C:
    // 0x0027612C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00276130: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x00276134: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00276138: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0027613C: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x00276140: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x00276144: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00276148: jal         0x00271514
    // 0x0027614C: nop

    func_00271514(rdram, ctx);
        goto after_9;
    // 0x0027614C: nop

    after_9:
    // 0x00276150: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00276154: j           L_00276160
    // 0x00276158: nop

        goto L_00276160;
    // 0x00276158: nop

L_0027615C:
    // 0x0027615C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00276160:
    // 0x00276160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00276164: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00276168: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0027616C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00276170: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00276174: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00276178: jr          $ra
    // 0x0027617C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027617C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00446E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040DED4:
    // 0x00446E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0040DF1C:
    // 0x00446E6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00446E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00446E74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00446E78: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x00446E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00446E80: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00446E84: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446E88: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x00446E8C: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x00446E90: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446E94: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x00446E98: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x00446E9C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00446EA0: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x00446EA4: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x00446EA8: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00446EAC: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00446EB0: bne         $v1, $v0, L_00446EC8
    if (ctx->r3 != ctx->r2) {
        // 0x00446EB4: nop
    
            goto L_00446EC8;
    }
    // 0x00446EB4: nop

    // 0x00446EB8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446EBC: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x00446EC0: j           L_0040DED4
    // 0x00446EC4: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    entry_0040DED4(rdram, ctx);
    return;
    // 0x00446EC4: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_00446EC8:
    // 0x00446EC8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446ECC: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x00446ED0: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x00446ED4: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x00446ED8: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x00446EDC: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x00446EE0: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x00446EE4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00446EE8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00446EEC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00446EF0: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x00446EF4: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00446EF8: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00446EFC: bne         $v1, $v0, L_00446F10
    if (ctx->r3 != ctx->r2) {
        // 0x00446F00: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_00446F10;
    }
    // 0x00446F00: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x00446F04: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00446F08: j           L_0040DF1C
    // 0x00446F0C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    entry_0040DF1C(rdram, ctx);
    return;
    // 0x00446F0C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_00446F10:
    // 0x00446F10: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x00446F14: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00446F18: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00446F1C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00446F20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00446F24: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00446F28: beq         $v0, $zero, L_00446F44
    if (ctx->r2 == 0) {
        // 0x00446F2C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_00446F44;
    }
    // 0x00446F2C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x00446F30: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x00446F34: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x00446F38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00446F3C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00446F40: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_00446F44:
    // 0x00446F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00446F48: jal         0x00243414
    // 0x00446F4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446F4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00446F50: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00446F54: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00446F58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00446F5C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00446F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00446F64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00446F68: jr          $ra
    // 0x00446F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002603D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002603D0: lhu         $v0, 0x7E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X7E);
    // 0x002603D4: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x002603D8: jr          $ra
    // 0x002603DC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x002603DC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0020185C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020185C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x00201860: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00201864: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00201868: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0020186C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x00201870: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00201874: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00201878: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020187C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00201880: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00201884: jr          $ra
    // 0x00201888: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    return;
    // 0x00201888: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
;}
RECOMP_FUNC void func_00273A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273A94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00273A98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273A9C: lwc1        $f3, -0x7E90($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7E90);
    // 0x00273AA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273AA4: lwc1        $f2, -0x7E8C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7E8C);
    // 0x00273AA8: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    // 0x00273AAC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_00273AB0:
    // 0x00273AB0: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x00273AB4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00273AB8: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00273ABC: nop

    // 0x00273AC0: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00273AC4: nop

    // 0x00273AC8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00273ACC: nop

    // 0x00273AD0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00273AD4: nop

    // 0x00273AD8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00273ADC: nop

    // 0x00273AE0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00273AE4: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x00273AE8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00273AEC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00273AF0: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00273AF4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00273AF8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00273AFC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00273B00: sh          $v0, 0x2940($at)
    MEM_H(0X2940, ctx->r1) = ctx->r2;
    // 0x00273B04: slti        $v0, $a2, 0x5B
    ctx->r2 = SIGNED(ctx->r6) < 0X5B ? 1 : 0;
    // 0x00273B08: bne         $v0, $zero, L_00273AB0
    if (ctx->r2 != 0) {
        // 0x00273B0C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_00273AB0;
    }
    // 0x00273B0C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00273B10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00273B14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273B18: lwc1        $f0, -0x7E88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E88);
    // 0x00273B1C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00273B20: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_00273B24:
    // 0x00273B24: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00273B28: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00273B2C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00273B30: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00273B34: sw          $a1, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r5;
    // 0x00273B38: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x00273B3C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x00273B40: sh          $v1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r3;
    // 0x00273B44: sh          $zero, 0x38($v0)
    MEM_H(0X38, ctx->r2) = 0;
    // 0x00273B48: sw          $v1, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r3;
    // 0x00273B4C: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x00273B50: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x00273B54: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x00273B58: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x00273B5C: swc1        $f0, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f0.u32l;
    // 0x00273B60: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x00273B64: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    // 0x00273B68: sw          $v1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r3;
    // 0x00273B6C: swc1        $f0, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->f0.u32l;
    // 0x00273B70: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    // 0x00273B74: sw          $zero, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = 0;
    // 0x00273B78: sw          $t0, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r8;
    // 0x00273B7C: slti        $v0, $a2, 0x11
    ctx->r2 = SIGNED(ctx->r6) < 0X11 ? 1 : 0;
    // 0x00273B80: bne         $v0, $zero, L_00273B24
    if (ctx->r2 != 0) {
        // 0x00273B84: addiu       $a3, $a3, 0xCC
        ctx->r7 = ADD32(ctx->r7, 0XCC);
            goto L_00273B24;
    }
    // 0x00273B84: addiu       $a3, $a3, 0xCC
    ctx->r7 = ADD32(ctx->r7, 0XCC);
    // 0x00273B88: jr          $ra
    // 0x00273B8C: nop

    return;
    // 0x00273B8C: nop

;}
RECOMP_FUNC void func_00238DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238DF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00238DFC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00238E00: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00238E04: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x00238E08: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00238E0C: beq         $v1, $v0, L_00238EAC
    if (ctx->r3 == ctx->r2) {
        // 0x00238E10: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_00238EAC;
    }
    // 0x00238E10: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00238E14: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x00238E18: beq         $v0, $zero, L_00238E30
    if (ctx->r2 == 0) {
        // 0x00238E1C: addiu       $v0, $zero, 0x1D4D
        ctx->r2 = ADD32(0, 0X1D4D);
            goto L_00238E30;
    }
    // 0x00238E1C: addiu       $v0, $zero, 0x1D4D
    ctx->r2 = ADD32(0, 0X1D4D);
    // 0x00238E20: beq         $v1, $v0, L_00238E44
    if (ctx->r3 == ctx->r2) {
        // 0x00238E24: nop
    
            goto L_00238E44;
    }
    // 0x00238E24: nop

    // 0x00238E28: j           L_00238ED8
    // 0x00238E2C: nop

        goto L_00238ED8;
    // 0x00238E2C: nop

L_00238E30:
    // 0x00238E30: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x00238E34: beq         $v1, $v0, L_00238E78
    if (ctx->r3 == ctx->r2) {
        // 0x00238E38: nop
    
            goto L_00238E78;
    }
    // 0x00238E38: nop

    // 0x00238E3C: j           L_00238ED8
    // 0x00238E40: nop

        goto L_00238ED8;
    // 0x00238E40: nop

L_00238E44:
    // 0x00238E44: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00238E48: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00238E4C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00238E50: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00238E54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00238E58: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00238E5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00238E60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00238E64: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00238E68: jal         0x004028F4
    // 0x00238E6C: nop

    func_004028F4(rdram, ctx);
        goto after_0;
    // 0x00238E6C: nop

    after_0:
    // 0x00238E70: j           L_00238ED8
    // 0x00238E74: nop

        goto L_00238ED8;
    // 0x00238E74: nop

L_00238E78:
    // 0x00238E78: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00238E7C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00238E80: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00238E84: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00238E88: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00238E8C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00238E90: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00238E94: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00238E98: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00238E9C: jal         0x00406C4C
    // 0x00238EA0: nop

    func_00406C4C(rdram, ctx);
        goto after_1;
    // 0x00238EA0: nop

    after_1:
    // 0x00238EA4: j           L_00238ED8
    // 0x00238EA8: nop

        goto L_00238ED8;
    // 0x00238EA8: nop

L_00238EAC:
    // 0x00238EAC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00238EB0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00238EB4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00238EB8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00238EBC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00238EC0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00238EC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00238EC8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00238ECC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00238ED0: jal         0x00409D4C
    // 0x00238ED4: nop

    func_00409D4C(rdram, ctx);
        goto after_2;
    // 0x00238ED4: nop

    after_2:
L_00238ED8:
    // 0x00238ED8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00238EDC: jr          $ra
    // 0x00238EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00238EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002925E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002925E0: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x002925E4: beq         $v1, $zero, L_00292630
    if (ctx->r3 == 0) {
        // 0x002925E8: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_00292630;
    }
    // 0x002925E8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x002925EC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x002925F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x002925F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_002925F8:
    // 0x002925F8: lbu         $v0, 0x32($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X32);
    // 0x002925FC: bne         $v0, $a1, L_00292624
    if (ctx->r2 != ctx->r5) {
        // 0x00292600: nop
    
            goto L_00292624;
    }
    // 0x00292600: nop

    // 0x00292604: lbu         $v0, 0x31($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X31);
    // 0x00292608: bne         $v0, $a2, L_00292624
    if (ctx->r2 != ctx->r6) {
        // 0x0029260C: nop
    
            goto L_00292624;
    }
    // 0x0029260C: nop

    // 0x00292610: lbu         $v0, 0x35($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X35);
    // 0x00292614: beq         $v0, $a3, L_00292624
    if (ctx->r2 == ctx->r7) {
        // 0x00292618: nop
    
            goto L_00292624;
    }
    // 0x00292618: nop

    // 0x0029261C: bne         $v0, $a0, L_00292638
    if (ctx->r2 != ctx->r4) {
            // 0x00292620: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    func_00292638(rdram, ctx);
    return;
    }
    // 0x00292620: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00292624:
    // 0x00292624: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00292628: bne         $v1, $zero, L_002925F8
    if (ctx->r3 != 0) {
        // 0x0029262C: nop
    
            goto L_002925F8;
    }
    // 0x0029262C: nop

L_00292630:
    // 0x00292630: jr          $ra
    // 0x00292634: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00292634: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0027836C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027836C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00278370: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00278374: jal         0x0027B4EC
    // 0x00278378: nop

    func_0027B4EC(rdram, ctx);
        goto after_0;
    // 0x00278378: nop

    after_0:
    // 0x0027837C: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x00278380: beq         $t3, $zero, L_00278450
    if (ctx->r11 == 0) {
        // 0x00278384: lui         $a3, 0xF590
        ctx->r7 = S32(0XF590 << 16);
            goto L_00278450;
    }
    // 0x00278384: lui         $a3, 0xF590
    ctx->r7 = S32(0XF590 << 16);
    // 0x00278388: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x0027838C: lui         $a2, 0x700
    ctx->r6 = S32(0X700 << 16);
    // 0x00278390: ori         $a2, $a2, 0xC040
    ctx->r6 = ctx->r6 | 0XC040;
    // 0x00278394: lui         $t0, 0x701
    ctx->r8 = S32(0X701 << 16);
    // 0x00278398: ori         $t0, $t0, 0xF800
    ctx->r8 = ctx->r8 | 0XF800;
    // 0x0027839C: lui         $t1, 0xF580
    ctx->r9 = S32(0XF580 << 16);
    // 0x002783A0: ori         $t1, $t1, 0x300
    ctx->r9 = ctx->r9 | 0X300;
    // 0x002783A4: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x002783A8: ori         $t2, $t2, 0xC01C
    ctx->r10 = ctx->r10 | 0XC01C;
    // 0x002783AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002783B0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002783B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002783B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002783BC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002783C0: sw          $v1, 0x56A8($at)
    MEM_W(0X56A8, ctx->r1) = ctx->r3;
    // 0x002783C4: lui         $v1, 0xFD90
    ctx->r3 = S32(0XFD90 << 16);
    // 0x002783C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002783CC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002783D0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002783D4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002783D8: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x002783DC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x002783E0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002783E4: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x002783E8: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x002783EC: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x002783F0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x002783F4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x002783F8: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x002783FC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00278400: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    // 0x00278404: lui         $v1, 0xF300
    ctx->r3 = S32(0XF300 << 16);
    // 0x00278408: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0027840C: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x00278410: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x00278414: addiu       $a2, $v0, 0x20
    ctx->r6 = ADD32(ctx->r2, 0X20);
    // 0x00278418: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0027841C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00278420: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x00278424: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00278428: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    // 0x0027842C: ori         $v1, $zero, 0xC040
    ctx->r3 = 0 | 0XC040;
    // 0x00278430: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00278434: sw          $t1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r9;
    // 0x00278438: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x0027843C: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x00278440: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00278444: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x00278448: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x0027844C: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
L_00278450:
    // 0x00278450: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00278454: jr          $ra
    // 0x00278458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00278458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00444328: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044432C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00444330: beq         $v0, $zero, L_00444350
    if (ctx->r2 == 0) {
        // 0x00444334: lui         $v1, 0xF7FF
        ctx->r3 = S32(0XF7FF << 16);
            goto L_00444350;
    }
    // 0x00444334: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x00444338: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0044433C: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x00444340: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00444344: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00444348: jal         0x00243414
    // 0x0044434C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0044434C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    after_0:
L_00444350:
    // 0x00444350: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00444354: jr          $ra
    // 0x00444358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00444358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044F2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0028B47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B47C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028B480: lw          $v0, 0x7490($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7490);
    // 0x0028B484: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028B488: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028B48C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0028B490: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B494: sw          $a0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r4;
    // 0x0028B498: j           L_0028B5A4
    // 0x0028B49C: nop

    entry_0028B5A4(rdram, ctx);
    return;
    // 0x0028B49C: nop

    // 0x0028B4A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028B4A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B4A8: sw          $zero, 0x7494($at)
    MEM_W(0X7494, ctx->r1) = 0;
    // 0x0028B4AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B4B0: sw          $v0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r2;
    // 0x0028B4B4: jr          $ra
    // 0x0028B4B8: nop

    return;
    // 0x0028B4B8: nop

;}
RECOMP_FUNC void func_0043E3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002A4BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A4BE0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x002A4BE4: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x002A4BE8: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x002A4BEC: addu        $t3, $a1, $zero
    ctx->r11 = ADD32(ctx->r5, 0);
    // 0x002A4BF0: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x002A4BF4: bne         $t1, $zero, L_002A4EAC
    if (ctx->r9 != 0) {
        // 0x002A4BF8: addu        $t9, $sp, $zero
        ctx->r25 = ADD32(ctx->r29, 0);
            goto L_002A4EAC;
    }
    // 0x002A4BF8: addu        $t9, $sp, $zero
    ctx->r25 = ADD32(ctx->r29, 0);
    // 0x002A4BFC: sltu        $v0, $t2, $t0
    ctx->r2 = ctx->r10 < ctx->r8 ? 1 : 0;
    // 0x002A4C00: beq         $v0, $zero, L_002A4C7C
    if (ctx->r2 == 0) {
        // 0x002A4C04: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A4C7C;
    }
    // 0x002A4C04: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A4C08: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4C0C: bne         $v0, $zero, L_002A4C24
    if (ctx->r2 != 0) {
        // 0x002A4C10: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_002A4C24;
    }
    // 0x002A4C10: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x002A4C14: sltiu       $v0, $t0, 0x100
    ctx->r2 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x002A4C18: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A4C1C: j           L_002A4C3C
    // 0x002A4C20: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
        goto L_002A4C3C;
    // 0x002A4C20: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
L_002A4C24:
    // 0x002A4C24: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4C28: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4C2C: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4C30: bne         $v0, $zero, L_002A4C3C
    if (ctx->r2 != 0) {
        // 0x002A4C34: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_002A4C3C;
    }
    // 0x002A4C34: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x002A4C38: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_002A4C3C:
    // 0x002A4C3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4C40: addiu       $v0, $v0, -0x5070
    ctx->r2 = ADD32(ctx->r2, -0X5070);
    // 0x002A4C44: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x002A4C48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4C4C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4C50: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A4C54: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x002A4C58: subu        $t5, $a0, $v0
    ctx->r13 = SUB32(ctx->r4, ctx->r2);
    // 0x002A4C5C: beq         $t5, $zero, L_002A4DDC
    if (ctx->r13 == 0) {
        // 0x002A4C60: sllv        $v1, $t2, $t5
        ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
            goto L_002A4DDC;
    }
    // 0x002A4C60: sllv        $v1, $t2, $t5
    ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
    // 0x002A4C64: sllv        $t0, $t0, $t5
    ctx->r8 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x002A4C68: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x002A4C6C: srlv        $v0, $t3, $v0
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r2 & 31));
    // 0x002A4C70: or          $t2, $v1, $v0
    ctx->r10 = ctx->r3 | ctx->r2;
    // 0x002A4C74: j           L_002A4DDC
    // 0x002A4C78: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
        goto L_002A4DDC;
    // 0x002A4C78: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
L_002A4C7C:
    // 0x002A4C7C: bne         $t0, $zero, L_002A4CA4
    if (ctx->r8 != 0) {
        // 0x002A4C80: sltu        $v0, $v0, $t0
        ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
            goto L_002A4CA4;
    }
    // 0x002A4C80: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4C84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A4C88: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x002A4C8C: bne         $t1, $zero, L_002A4C98
    if (ctx->r9 != 0) {
        // 0x002A4C90: nop
    
            goto L_002A4C98;
    }
    // 0x002A4C90: nop

    // 0x002A4C94: break       7
    do_break(2772116);
L_002A4C98:
    // 0x002A4C98: mflo        $t0
    ctx->r8 = lo;
    // 0x002A4C9C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A4CA0: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
L_002A4CA4:
    // 0x002A4CA4: bne         $v0, $zero, L_002A4CBC
    if (ctx->r2 != 0) {
        // 0x002A4CA8: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_002A4CBC;
    }
    // 0x002A4CA8: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002A4CAC: sltiu       $v0, $t0, 0x100
    ctx->r2 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x002A4CB0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A4CB4: j           L_002A4CD4
    // 0x002A4CB8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
        goto L_002A4CD4;
    // 0x002A4CB8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
L_002A4CBC:
    // 0x002A4CBC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4CC0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4CC4: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4CC8: bne         $v0, $zero, L_002A4CD4
    if (ctx->r2 != 0) {
        // 0x002A4CCC: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_002A4CD4;
    }
    // 0x002A4CCC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x002A4CD0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_002A4CD4:
    // 0x002A4CD4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4CD8: addiu       $v0, $v0, -0x5070
    ctx->r2 = ADD32(ctx->r2, -0X5070);
    // 0x002A4CDC: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x002A4CE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4CE4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4CE8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A4CEC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A4CF0: subu        $t5, $v1, $v0
    ctx->r13 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4CF4: bne         $t5, $zero, L_002A4D04
    if (ctx->r13 != 0) {
        // 0x002A4CF8: subu        $t8, $v1, $t5
        ctx->r24 = SUB32(ctx->r3, ctx->r13);
            goto L_002A4D04;
    }
    // 0x002A4CF8: subu        $t8, $v1, $t5
    ctx->r24 = SUB32(ctx->r3, ctx->r13);
    // 0x002A4CFC: j           L_002A4DDC
    // 0x002A4D00: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
        goto L_002A4DDC;
    // 0x002A4D00: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
L_002A4D04:
    // 0x002A4D04: sllv        $t0, $t0, $t5
    ctx->r8 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x002A4D08: srlv        $a0, $t2, $t8
    ctx->r4 = S32(U32(ctx->r10) >> (ctx->r24 & 31));
    // 0x002A4D0C: sllv        $v1, $t2, $t5
    ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
    // 0x002A4D10: srlv        $v0, $t3, $t8
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r24 & 31));
    // 0x002A4D14: or          $t2, $v1, $v0
    ctx->r10 = ctx->r3 | ctx->r2;
    // 0x002A4D18: srl         $a1, $t0, 16
    ctx->r5 = S32(U32(ctx->r8) >> 16);
    // 0x002A4D1C: divu        $zero, $a0, $a1
    lo = S32(U32(ctx->r4) / U32(ctx->r5)); hi = S32(U32(ctx->r4) % U32(ctx->r5));
    // 0x002A4D20: bne         $a1, $zero, L_002A4D2C
    if (ctx->r5 != 0) {
        // 0x002A4D24: nop
    
            goto L_002A4D2C;
    }
    // 0x002A4D24: nop

    // 0x002A4D28: break       7
    do_break(2772264);
L_002A4D2C:
    // 0x002A4D2C: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4D30: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4D34: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x002A4D38: nop

    // 0x002A4D3C: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4D40: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4D44: srl         $v0, $t2, 16
    ctx->r2 = S32(U32(ctx->r10) >> 16);
    // 0x002A4D48: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4D4C: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4D50: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4D54: beq         $v0, $zero, L_002A4D78
    if (ctx->r2 == 0) {
        // 0x002A4D58: sllv        $t3, $t3, $t5
        ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
            goto L_002A4D78;
    }
    // 0x002A4D58: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
    // 0x002A4D5C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4D60: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4D64: bnel        $v0, $zero, L_002A4D7C
    if (ctx->r2 != 0) {
        // 0x002A4D68: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4D7C;
    }
    goto skip_0;
    // 0x002A4D68: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    skip_0:
    // 0x002A4D6C: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4D70: bnel        $v0, $zero, L_002A4D78
    if (ctx->r2 != 0) {
        // 0x002A4D74: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A4D78;
    }
    goto skip_1;
    // 0x002A4D74: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_1:
L_002A4D78:
    // 0x002A4D78: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_002A4D7C:
    // 0x002A4D7C: divu        $zero, $v1, $a1
    lo = S32(U32(ctx->r3) / U32(ctx->r5)); hi = S32(U32(ctx->r3) % U32(ctx->r5));
    // 0x002A4D80: bne         $a1, $zero, L_002A4D8C
    if (ctx->r5 != 0) {
        // 0x002A4D84: nop
    
            goto L_002A4D8C;
    }
    // 0x002A4D84: nop

    // 0x002A4D88: break       7
    do_break(2772360);
L_002A4D8C:
    // 0x002A4D8C: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4D90: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4D94: nop

    // 0x002A4D98: nop

    // 0x002A4D9C: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4DA0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4DA4: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x002A4DA8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4DAC: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4DB0: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4DB4: beql        $v0, $zero, L_002A4DDC
    if (ctx->r2 == 0) {
        // 0x002A4DB8: subu        $t2, $v1, $a0
        ctx->r10 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4DDC;
    }
    goto skip_2;
    // 0x002A4DB8: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
    skip_2:
    // 0x002A4DBC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4DC0: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4DC4: bne         $v0, $zero, L_002A4DDC
    if (ctx->r2 != 0) {
        // 0x002A4DC8: subu        $t2, $v1, $a0
        ctx->r10 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4DDC;
    }
    // 0x002A4DC8: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
    // 0x002A4DCC: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4DD0: bnel        $v0, $zero, L_002A4DD8
    if (ctx->r2 != 0) {
        // 0x002A4DD4: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A4DD8;
    }
    goto skip_3;
    // 0x002A4DD4: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_3:
L_002A4DD8:
    // 0x002A4DD8: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
L_002A4DDC:
    // 0x002A4DDC: srl         $a1, $t0, 16
    ctx->r5 = S32(U32(ctx->r8) >> 16);
    // 0x002A4DE0: divu        $zero, $t2, $a1
    lo = S32(U32(ctx->r10) / U32(ctx->r5)); hi = S32(U32(ctx->r10) % U32(ctx->r5));
    // 0x002A4DE4: bne         $a1, $zero, L_002A4DF0
    if (ctx->r5 != 0) {
        // 0x002A4DE8: nop
    
            goto L_002A4DF0;
    }
    // 0x002A4DE8: nop

    // 0x002A4DEC: break       7
    do_break(2772460);
L_002A4DF0:
    // 0x002A4DF0: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4DF4: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4DF8: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x002A4DFC: nop

    // 0x002A4E00: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4E04: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4E08: srl         $v0, $t3, 16
    ctx->r2 = S32(U32(ctx->r11) >> 16);
    // 0x002A4E0C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4E10: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4E14: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4E18: beql        $v0, $zero, L_002A4E40
    if (ctx->r2 == 0) {
        // 0x002A4E1C: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4E40;
    }
    goto skip_4;
    // 0x002A4E1C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    skip_4:
    // 0x002A4E20: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4E24: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4E28: bnel        $v0, $zero, L_002A4E40
    if (ctx->r2 != 0) {
        // 0x002A4E2C: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4E40;
    }
    goto skip_5;
    // 0x002A4E2C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    skip_5:
    // 0x002A4E30: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4E34: bnel        $v0, $zero, L_002A4E3C
    if (ctx->r2 != 0) {
        // 0x002A4E38: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A4E3C;
    }
    goto skip_6;
    // 0x002A4E38: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_6:
L_002A4E3C:
    // 0x002A4E3C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_002A4E40:
    // 0x002A4E40: divu        $zero, $v1, $a1
    lo = S32(U32(ctx->r3) / U32(ctx->r5)); hi = S32(U32(ctx->r3) % U32(ctx->r5));
    // 0x002A4E44: bne         $a1, $zero, L_002A4E50
    if (ctx->r5 != 0) {
        // 0x002A4E48: nop
    
            goto L_002A4E50;
    }
    // 0x002A4E48: nop

    // 0x002A4E4C: break       7
    do_break(2772556);
L_002A4E50:
    // 0x002A4E50: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4E54: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4E58: nop

    // 0x002A4E5C: nop

    // 0x002A4E60: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4E64: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4E68: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x002A4E6C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4E70: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4E74: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4E78: beq         $v0, $zero, L_002A4E98
    if (ctx->r2 == 0) {
        // 0x002A4E7C: nop
    
            goto L_002A4E98;
    }
    // 0x002A4E7C: nop

    // 0x002A4E80: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4E84: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4E88: bne         $v0, $zero, L_002A4E98
    if (ctx->r2 != 0) {
        // 0x002A4E8C: sltu        $v0, $v1, $a0
        ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
            goto L_002A4E98;
    }
    // 0x002A4E8C: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4E90: bnel        $v0, $zero, L_002A4E98
    if (ctx->r2 != 0) {
        // 0x002A4E94: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A4E98;
    }
    goto skip_7;
    // 0x002A4E94: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_7:
L_002A4E98:
    // 0x002A4E98: beq         $t9, $zero, L_002A50C4
    if (ctx->r25 == 0) {
        // 0x002A4E9C: subu        $t3, $v1, $a0
        ctx->r11 = SUB32(ctx->r3, ctx->r4);
            goto L_002A50C4;
    }
    // 0x002A4E9C: subu        $t3, $v1, $a0
    ctx->r11 = SUB32(ctx->r3, ctx->r4);
    // 0x002A4EA0: srlv        $t7, $t3, $t5
    ctx->r15 = S32(U32(ctx->r11) >> (ctx->r13 & 31));
    // 0x002A4EA4: j           L_002A50BC
    // 0x002A4EA8: addu        $t6, $zero, $zero
    ctx->r14 = ADD32(0, 0);
        goto L_002A50BC;
    // 0x002A4EA8: addu        $t6, $zero, $zero
    ctx->r14 = ADD32(0, 0);
L_002A4EAC:
    // 0x002A4EAC: sltu        $v0, $t2, $t1
    ctx->r2 = ctx->r10 < ctx->r9 ? 1 : 0;
    // 0x002A4EB0: beq         $v0, $zero, L_002A4ED0
    if (ctx->r2 == 0) {
        // 0x002A4EB4: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A4ED0;
    }
    // 0x002A4EB4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A4EB8: addu        $t7, $a1, $zero
    ctx->r15 = ADD32(ctx->r5, 0);
    // 0x002A4EBC: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
    // 0x002A4EC0: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x002A4EC4: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x002A4EC8: j           L_002A50C4
    // 0x002A4ECC: nop

        goto L_002A50C4;
    // 0x002A4ECC: nop

L_002A4ED0:
    // 0x002A4ED0: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A4ED4: bne         $v0, $zero, L_002A4EEC
    if (ctx->r2 != 0) {
        // 0x002A4ED8: addu        $v1, $t1, $zero
        ctx->r3 = ADD32(ctx->r9, 0);
            goto L_002A4EEC;
    }
    // 0x002A4ED8: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x002A4EDC: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x002A4EE0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A4EE4: j           L_002A4F04
    // 0x002A4EE8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
        goto L_002A4F04;
    // 0x002A4EE8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
L_002A4EEC:
    // 0x002A4EEC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4EF0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4EF4: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A4EF8: bne         $v0, $zero, L_002A4F04
    if (ctx->r2 != 0) {
        // 0x002A4EFC: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_002A4F04;
    }
    // 0x002A4EFC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x002A4F00: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_002A4F04:
    // 0x002A4F04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4F08: addiu       $v0, $v0, -0x5070
    ctx->r2 = ADD32(ctx->r2, -0X5070);
    // 0x002A4F0C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x002A4F10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4F14: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4F18: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A4F1C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A4F20: subu        $t5, $v1, $v0
    ctx->r13 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4F24: bne         $t5, $zero, L_002A4F64
    if (ctx->r13 != 0) {
        // 0x002A4F28: subu        $t8, $v1, $t5
        ctx->r24 = SUB32(ctx->r3, ctx->r13);
            goto L_002A4F64;
    }
    // 0x002A4F28: subu        $t8, $v1, $t5
    ctx->r24 = SUB32(ctx->r3, ctx->r13);
    // 0x002A4F2C: sltu        $v0, $t1, $t2
    ctx->r2 = ctx->r9 < ctx->r10 ? 1 : 0;
    // 0x002A4F30: bne         $v0, $zero, L_002A4F44
    if (ctx->r2 != 0) {
        // 0x002A4F34: subu        $a0, $t3, $t0
        ctx->r4 = SUB32(ctx->r11, ctx->r8);
            goto L_002A4F44;
    }
    // 0x002A4F34: subu        $a0, $t3, $t0
    ctx->r4 = SUB32(ctx->r11, ctx->r8);
    // 0x002A4F38: sltu        $v0, $t3, $t0
    ctx->r2 = ctx->r11 < ctx->r8 ? 1 : 0;
    // 0x002A4F3C: bne         $v0, $zero, L_002A4F54
    if (ctx->r2 != 0) {
        // 0x002A4F40: nop
    
            goto L_002A4F54;
    }
    // 0x002A4F40: nop

L_002A4F44:
    // 0x002A4F44: subu        $v1, $t2, $t1
    ctx->r3 = SUB32(ctx->r10, ctx->r9);
    // 0x002A4F48: sltu        $v0, $t3, $a0
    ctx->r2 = ctx->r11 < ctx->r4 ? 1 : 0;
    // 0x002A4F4C: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4F50: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
L_002A4F54:
    // 0x002A4F54: beq         $t9, $zero, L_002A50C4
    if (ctx->r25 == 0) {
        // 0x002A4F58: addu        $t7, $t3, $zero
        ctx->r15 = ADD32(ctx->r11, 0);
            goto L_002A50C4;
    }
    // 0x002A4F58: addu        $t7, $t3, $zero
    ctx->r15 = ADD32(ctx->r11, 0);
    // 0x002A4F5C: j           L_002A50BC
    // 0x002A4F60: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
        goto L_002A50BC;
    // 0x002A4F60: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
L_002A4F64:
    // 0x002A4F64: sllv        $v1, $t1, $t5
    ctx->r3 = S32(ctx->r9 << (ctx->r13 & 31));
    // 0x002A4F68: srlv        $v0, $t0, $t8
    ctx->r2 = S32(U32(ctx->r8) >> (ctx->r24 & 31));
    // 0x002A4F6C: or          $t1, $v1, $v0
    ctx->r9 = ctx->r3 | ctx->r2;
    // 0x002A4F70: sllv        $t0, $t0, $t5
    ctx->r8 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x002A4F74: srlv        $a0, $t2, $t8
    ctx->r4 = S32(U32(ctx->r10) >> (ctx->r24 & 31));
    // 0x002A4F78: sllv        $v1, $t2, $t5
    ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
    // 0x002A4F7C: srlv        $v0, $t3, $t8
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r24 & 31));
    // 0x002A4F80: or          $t2, $v1, $v0
    ctx->r10 = ctx->r3 | ctx->r2;
    // 0x002A4F84: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A4F88: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x002A4F8C: bne         $a2, $zero, L_002A4F98
    if (ctx->r6 != 0) {
        // 0x002A4F90: nop
    
            goto L_002A4F98;
    }
    // 0x002A4F90: nop

    // 0x002A4F94: break       7
    do_break(2772884);
L_002A4F98:
    // 0x002A4F98: mflo        $a3
    ctx->r7 = lo;
    // 0x002A4F9C: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4FA0: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x002A4FA4: nop

    // 0x002A4FA8: mult        $a3, $t4
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4FAC: srl         $v0, $t2, 16
    ctx->r2 = S32(U32(ctx->r10) >> 16);
    // 0x002A4FB0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4FB4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4FB8: mflo        $a1
    ctx->r5 = lo;
    // 0x002A4FBC: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4FC0: beq         $v0, $zero, L_002A4FEC
    if (ctx->r2 == 0) {
        // 0x002A4FC4: sllv        $t3, $t3, $t5
        ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
            goto L_002A4FEC;
    }
    // 0x002A4FC4: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
    // 0x002A4FC8: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4FCC: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A4FD0: bne         $v0, $zero, L_002A4FEC
    if (ctx->r2 != 0) {
        // 0x002A4FD4: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_002A4FEC;
    }
    // 0x002A4FD4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4FD8: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4FDC: beql        $v0, $zero, L_002A4FF0
    if (ctx->r2 == 0) {
        // 0x002A4FE0: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4FF0;
    }
    goto skip_8;
    // 0x002A4FE0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_8:
    // 0x002A4FE4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4FE8: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A4FEC:
    // 0x002A4FEC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_002A4FF0:
    // 0x002A4FF0: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A4FF4: bne         $a2, $zero, L_002A5000
    if (ctx->r6 != 0) {
        // 0x002A4FF8: nop
    
            goto L_002A5000;
    }
    // 0x002A4FF8: nop

    // 0x002A4FFC: break       7
    do_break(2772988);
L_002A5000:
    // 0x002A5000: mflo        $a0
    ctx->r4 = lo;
    // 0x002A5004: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A5008: nop

    // 0x002A500C: nop

    // 0x002A5010: mult        $a0, $t4
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A5014: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x002A5018: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A501C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A5020: mflo        $a1
    ctx->r5 = lo;
    // 0x002A5024: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A5028: beql        $v0, $zero, L_002A5058
    if (ctx->r2 == 0) {
        // 0x002A502C: subu        $t2, $v1, $a1
        ctx->r10 = SUB32(ctx->r3, ctx->r5);
            goto L_002A5058;
    }
    goto skip_9;
    // 0x002A502C: subu        $t2, $v1, $a1
    ctx->r10 = SUB32(ctx->r3, ctx->r5);
    skip_9:
    // 0x002A5030: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A5034: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A5038: bne         $v0, $zero, L_002A5054
    if (ctx->r2 != 0) {
        // 0x002A503C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A5054;
    }
    // 0x002A503C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A5040: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A5044: beq         $v0, $zero, L_002A5058
    if (ctx->r2 == 0) {
        // 0x002A5048: subu        $t2, $v1, $a1
        ctx->r10 = SUB32(ctx->r3, ctx->r5);
            goto L_002A5058;
    }
    // 0x002A5048: subu        $t2, $v1, $a1
    ctx->r10 = SUB32(ctx->r3, ctx->r5);
    // 0x002A504C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A5050: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A5054:
    // 0x002A5054: subu        $t2, $v1, $a1
    ctx->r10 = SUB32(ctx->r3, ctx->r5);
L_002A5058:
    // 0x002A5058: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A505C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002A5060: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A5064: mfhi        $a2
    ctx->r6 = hi;
    // 0x002A5068: sltu        $v0, $t2, $a2
    ctx->r2 = ctx->r10 < ctx->r6 ? 1 : 0;
    // 0x002A506C: mflo        $a1
    ctx->r5 = lo;
    // 0x002A5070: bnel        $v0, $zero, L_002A5088
    if (ctx->r2 != 0) {
        // 0x002A5074: subu        $a0, $a1, $t0
        ctx->r4 = SUB32(ctx->r5, ctx->r8);
            goto L_002A5088;
    }
    goto skip_10;
    // 0x002A5074: subu        $a0, $a1, $t0
    ctx->r4 = SUB32(ctx->r5, ctx->r8);
    skip_10:
    // 0x002A5078: bne         $a2, $t2, L_002A5098
    if (ctx->r6 != ctx->r10) {
        // 0x002A507C: sltu        $v0, $t3, $a1
        ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
            goto L_002A5098;
    }
    // 0x002A507C: sltu        $v0, $t3, $a1
    ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
    // 0x002A5080: beq         $v0, $zero, L_002A5098
    if (ctx->r2 == 0) {
        // 0x002A5084: subu        $a0, $a1, $t0
        ctx->r4 = SUB32(ctx->r5, ctx->r8);
            goto L_002A5098;
    }
    // 0x002A5084: subu        $a0, $a1, $t0
    ctx->r4 = SUB32(ctx->r5, ctx->r8);
L_002A5088:
    // 0x002A5088: subu        $v1, $a2, $t1
    ctx->r3 = SUB32(ctx->r6, ctx->r9);
    // 0x002A508C: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x002A5090: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x002A5094: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_002A5098:
    // 0x002A5098: beq         $t9, $zero, L_002A50C4
    if (ctx->r25 == 0) {
        // 0x002A509C: subu        $v1, $t3, $a1
        ctx->r3 = SUB32(ctx->r11, ctx->r5);
            goto L_002A50C4;
    }
    // 0x002A509C: subu        $v1, $t3, $a1
    ctx->r3 = SUB32(ctx->r11, ctx->r5);
    // 0x002A50A0: subu        $a0, $t2, $a2
    ctx->r4 = SUB32(ctx->r10, ctx->r6);
    // 0x002A50A4: sltu        $v0, $t3, $v1
    ctx->r2 = ctx->r11 < ctx->r3 ? 1 : 0;
    // 0x002A50A8: subu        $t2, $a0, $v0
    ctx->r10 = SUB32(ctx->r4, ctx->r2);
    // 0x002A50AC: sllv        $v0, $t2, $t8
    ctx->r2 = S32(ctx->r10 << (ctx->r24 & 31));
    // 0x002A50B0: srlv        $v1, $v1, $t5
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r13 & 31));
    // 0x002A50B4: or          $t7, $v0, $v1
    ctx->r15 = ctx->r2 | ctx->r3;
    // 0x002A50B8: srlv        $t6, $t2, $t5
    ctx->r14 = S32(U32(ctx->r10) >> (ctx->r13 & 31));
L_002A50BC:
    // 0x002A50BC: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x002A50C0: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
L_002A50C4:
    // 0x002A50C4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x002A50C8: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x002A50CC: jr          $ra
    // 0x002A50D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x002A50D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00271AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271AAC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271AB0: jal         0x00273E78
    // 0x00271AB4: addiu       $a0, $a0, 0x1DB8
    ctx->r4 = ADD32(ctx->r4, 0X1DB8);
    func_00273E78(rdram, ctx);
        goto after_0;
    // 0x00271AB4: addiu       $a0, $a0, 0x1DB8
    ctx->r4 = ADD32(ctx->r4, 0X1DB8);
    after_0:
    // 0x00271AB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271ABC: jr          $ra
    // 0x00271AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024AB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024AB0C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024AB10: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024AB14: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0024AB18: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0024AB1C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0024AB20: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0024AB24: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0024AB28: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0024AB2C: beq         $v0, $zero, L_0024AB3C
    if (ctx->r2 == 0) {
        // 0x0024AB30: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0024AB3C;
    }
    // 0x0024AB30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024AB34: j           L_0024AB5C
    // 0x0024AB38: sw          $zero, 0xA30($s1)
    MEM_W(0XA30, ctx->r17) = 0;
        goto L_0024AB5C;
    // 0x0024AB38: sw          $zero, 0xA30($s1)
    MEM_W(0XA30, ctx->r17) = 0;
L_0024AB3C:
    // 0x0024AB3C: lw          $a1, 0xA3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA3C);
    // 0x0024AB40: beq         $a1, $zero, L_0024AB5C
    if (ctx->r5 == 0) {
        // 0x0024AB44: nop
    
            goto L_0024AB5C;
    }
    // 0x0024AB44: nop

    // 0x0024AB48: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024AB4C: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0024AB50: jal         0x00228B4C
    // 0x0024AB54: nop

    func_00228B4C(rdram, ctx);
        goto after_0;
    // 0x0024AB54: nop

    after_0:
    // 0x0024AB58: sw          $zero, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = 0;
L_0024AB5C:
    // 0x0024AB5C: lwc1        $f0, 0xA30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA30);
    // 0x0024AB60: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0024AB64: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0024AB68: nop

    // 0x0024AB6C: bc1t        L_0024ADF8
    if (c1cs) {
        // 0x0024AB70: nop
    
            goto L_0024ADF8;
    }
    // 0x0024AB70: nop

    // 0x0024AB74: lw          $s0, 0xA34($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XA34);
    // 0x0024AB78: bne         $s0, $zero, L_0024ABA4
    if (ctx->r16 != 0) {
        // 0x0024AB7C: nop
    
            goto L_0024ABA4;
    }
    // 0x0024AB7C: nop

    // 0x0024AB80: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024AB84: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0024AB88: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024AB8C: addiu       $a1, $a1, -0x24F0
    ctx->r5 = ADD32(ctx->r5, -0X24F0);
    // 0x0024AB90: jal         0x00228AEC
    // 0x0024AB94: nop

    func_00228AEC(rdram, ctx);
        goto after_1;
    // 0x0024AB94: nop

    after_1:
    // 0x0024AB98: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024AB9C: beq         $s0, $zero, L_0024AC44
    if (ctx->r16 == 0) {
        // 0x0024ABA0: nop
    
            goto L_0024AC44;
    }
    // 0x0024ABA0: nop

L_0024ABA4:
    // 0x0024ABA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024ABA8: lwc1        $f0, 0x6BC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BC8);
    // 0x0024ABAC: sw          $s0, 0xA34($s1)
    MEM_W(0XA34, ctx->r17) = ctx->r16;
    // 0x0024ABB0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0024ABB4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0024ABB8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0024ABBC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0024ABC0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x0024ABC4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0024ABC8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0024ABCC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0024ABD0: jal         0x0021F00C
    // 0x0024ABD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021F00C(rdram, ctx);
        goto after_2;
    // 0x0024ABD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0024ABD8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0024ABDC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024ABE0: jal         0x0020EEF8
    // 0x0024ABE4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x0024ABE4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_3:
    // 0x0024ABE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024ABEC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x0024ABF0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0024ABF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024ABF8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0024ABFC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AC00: jal         0x002671B4
    // 0x0024AC04: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    func_002671B4(rdram, ctx);
        goto after_4;
    // 0x0024AC04: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    after_4:
    // 0x0024AC08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AC0C: lwc1        $f1, 0x6BCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BCC);
    // 0x0024AC10: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024AC14: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0024AC18: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024AC1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AC20: lwc1        $f0, 0x6BD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BD0);
    // 0x0024AC24: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024AC28: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AC2C: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x0024AC30: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0024AC34: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x0024AC38: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024AC3C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AC40: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_0024AC44:
    // 0x0024AC44: lw          $s0, 0xA38($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XA38);
    // 0x0024AC48: bne         $s0, $zero, L_0024AC74
    if (ctx->r16 != 0) {
        // 0x0024AC4C: nop
    
            goto L_0024AC74;
    }
    // 0x0024AC4C: nop

    // 0x0024AC50: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024AC54: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0024AC58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024AC5C: addiu       $a1, $a1, -0x24E8
    ctx->r5 = ADD32(ctx->r5, -0X24E8);
    // 0x0024AC60: jal         0x00228AEC
    // 0x0024AC64: nop

    func_00228AEC(rdram, ctx);
        goto after_5;
    // 0x0024AC64: nop

    after_5:
    // 0x0024AC68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024AC6C: beq         $s0, $zero, L_0024AD14
    if (ctx->r16 == 0) {
        // 0x0024AC70: nop
    
            goto L_0024AD14;
    }
    // 0x0024AC70: nop

L_0024AC74:
    // 0x0024AC74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AC78: lwc1        $f0, 0x6BD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BD4);
    // 0x0024AC7C: sw          $s0, 0xA38($s1)
    MEM_W(0XA38, ctx->r17) = ctx->r16;
    // 0x0024AC80: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0024AC84: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0024AC88: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0024AC8C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0024AC90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0024AC94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0024AC98: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0024AC9C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0024ACA0: jal         0x0021F00C
    // 0x0024ACA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021F00C(rdram, ctx);
        goto after_6;
    // 0x0024ACA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0024ACA8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0024ACAC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024ACB0: jal         0x0020EEF8
    // 0x0024ACB4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x0024ACB4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_7:
    // 0x0024ACB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024ACBC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x0024ACC0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0024ACC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024ACC8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0024ACCC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024ACD0: jal         0x002671B4
    // 0x0024ACD4: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    func_002671B4(rdram, ctx);
        goto after_8;
    // 0x0024ACD4: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    after_8:
    // 0x0024ACD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024ACDC: lwc1        $f1, 0x6BD8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BD8);
    // 0x0024ACE0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024ACE4: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0024ACE8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024ACEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024ACF0: lwc1        $f0, 0x6BDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BDC);
    // 0x0024ACF4: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024ACF8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024ACFC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x0024AD00: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0024AD04: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x0024AD08: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024AD0C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AD10: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_0024AD14:
    // 0x0024AD14: lwc1        $f1, 0xA30($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA30);
    // 0x0024AD18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AD1C: lwc1        $f0, 0x6BE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BE0);
    // 0x0024AD20: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024AD24: nop

    // 0x0024AD28: bc1f        L_0024AE38
    if (!c1cs) {
        // 0x0024AD2C: nop
    
            goto L_0024AE38;
    }
    // 0x0024AD2C: nop

    // 0x0024AD30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AD34: lwc1        $f0, 0x6BE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BE4);
    // 0x0024AD38: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024AD3C: nop

    // 0x0024AD40: bc1f        L_0024AD90
    if (!c1cs) {
        // 0x0024AD44: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0024AD90;
    }
    // 0x0024AD44: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024AD48: jal         0x002113A4
    // 0x0024AD4C: nop

    func_002113A4(rdram, ctx);
        goto after_9;
    // 0x0024AD4C: nop

    after_9:
    // 0x0024AD50: lui         $v1, 0x51EB
    ctx->r3 = S32(0X51EB << 16);
    // 0x0024AD54: ori         $v1, $v1, 0x851F
    ctx->r3 = ctx->r3 | 0X851F;
    // 0x0024AD58: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024AD5C: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0024AD60: mfhi        $t0
    ctx->r8 = hi;
    // 0x0024AD64: sra         $a0, $t0, 5
    ctx->r4 = S32(SIGNED(ctx->r8) >> 5);
    // 0x0024AD68: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0024AD6C: sllv        $v1, $a0, $s0
    ctx->r3 = S32(ctx->r4 << (ctx->r16 & 31));
    // 0x0024AD70: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0024AD74: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0024AD78: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0024AD7C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0024AD80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0024AD84: slti        $v0, $v0, 0x32
    ctx->r2 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x0024AD88: j           L_0024ADD8
    // 0x0024AD8C: xor         $s0, $v0, $s0
    ctx->r16 = ctx->r2 ^ ctx->r16;
        goto L_0024ADD8;
    // 0x0024AD8C: xor         $s0, $v0, $s0
    ctx->r16 = ctx->r2 ^ ctx->r16;
L_0024AD90:
    // 0x0024AD90: jal         0x002113A4
    // 0x0024AD94: nop

    func_002113A4(rdram, ctx);
        goto after_10;
    // 0x0024AD94: nop

    after_10:
    // 0x0024AD98: lui         $v1, 0x51EB
    ctx->r3 = S32(0X51EB << 16);
    // 0x0024AD9C: ori         $v1, $v1, 0x851F
    ctx->r3 = ctx->r3 | 0X851F;
    // 0x0024ADA0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024ADA4: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0024ADA8: mfhi        $t0
    ctx->r8 = hi;
    // 0x0024ADAC: sra         $a0, $t0, 5
    ctx->r4 = S32(SIGNED(ctx->r8) >> 5);
    // 0x0024ADB0: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0024ADB4: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0024ADB8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0024ADBC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0024ADC0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0024ADC4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0024ADC8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0024ADCC: slti        $v0, $v0, 0xF
    ctx->r2 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x0024ADD0: bnel        $v0, $zero, L_0024ADD8
    if (ctx->r2 != 0) {
        // 0x0024ADD4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0024ADD8;
    }
    goto skip_0;
    // 0x0024ADD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0024ADD8:
    // 0x0024ADD8: lw          $v0, 0xA34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA34);
    // 0x0024ADDC: bnel        $v0, $zero, L_0024ADE4
    if (ctx->r2 != 0) {
        // 0x0024ADE0: sh          $s0, 0x16($v0)
        MEM_H(0X16, ctx->r2) = ctx->r16;
            goto L_0024ADE4;
    }
    goto skip_1;
    // 0x0024ADE0: sh          $s0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r16;
    skip_1:
L_0024ADE4:
    // 0x0024ADE4: lw          $v0, 0xA38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA38);
    // 0x0024ADE8: bnel        $v0, $zero, L_0024AE38
    if (ctx->r2 != 0) {
        // 0x0024ADEC: sh          $s0, 0x16($v0)
        MEM_H(0X16, ctx->r2) = ctx->r16;
            goto L_0024AE38;
    }
    goto skip_2;
    // 0x0024ADEC: sh          $s0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r16;
    skip_2:
    // 0x0024ADF0: j           L_0024AE38
    // 0x0024ADF4: nop

        goto L_0024AE38;
    // 0x0024ADF4: nop

L_0024ADF8:
    // 0x0024ADF8: lw          $a1, 0xA34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA34);
    // 0x0024ADFC: beq         $a1, $zero, L_0024AE18
    if (ctx->r5 == 0) {
        // 0x0024AE00: nop
    
            goto L_0024AE18;
    }
    // 0x0024AE00: nop

    // 0x0024AE04: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024AE08: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0024AE0C: jal         0x00228B4C
    // 0x0024AE10: nop

    func_00228B4C(rdram, ctx);
        goto after_11;
    // 0x0024AE10: nop

    after_11:
    // 0x0024AE14: sw          $zero, 0xA34($s1)
    MEM_W(0XA34, ctx->r17) = 0;
L_0024AE18:
    // 0x0024AE18: lw          $a1, 0xA38($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA38);
    // 0x0024AE1C: beq         $a1, $zero, L_0024AE38
    if (ctx->r5 == 0) {
        // 0x0024AE20: nop
    
            goto L_0024AE38;
    }
    // 0x0024AE20: nop

    // 0x0024AE24: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024AE28: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0024AE2C: jal         0x00228B4C
    // 0x0024AE30: nop

    func_00228B4C(rdram, ctx);
        goto after_12;
    // 0x0024AE30: nop

    after_12:
    // 0x0024AE34: sw          $zero, 0xA38($s1)
    MEM_W(0XA38, ctx->r17) = 0;
L_0024AE38:
    // 0x0024AE38: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024AE3C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024AE40: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0024AE44: beq         $v0, $zero, L_0024AF50
    if (ctx->r2 == 0) {
        // 0x0024AE48: nop
    
            goto L_0024AF50;
    }
    // 0x0024AE48: nop

    // 0x0024AE4C: lw          $s0, 0xA3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XA3C);
    // 0x0024AE50: bnel        $s0, $zero, L_0024AE80
    if (ctx->r16 != 0) {
        // 0x0024AE54: sw          $s0, 0xA3C($s1)
        MEM_W(0XA3C, ctx->r17) = ctx->r16;
            goto L_0024AE80;
    }
    goto skip_3;
    // 0x0024AE54: sw          $s0, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = ctx->r16;
    skip_3:
    // 0x0024AE58: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0024AE5C: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0024AE60: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0024AE64: addiu       $a1, $a1, -0x24E0
    ctx->r5 = ADD32(ctx->r5, -0X24E0);
    // 0x0024AE68: jal         0x00228AEC
    // 0x0024AE6C: nop

    func_00228AEC(rdram, ctx);
        goto after_13;
    // 0x0024AE6C: nop

    after_13:
    // 0x0024AE70: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024AE74: beq         $s0, $zero, L_0024AF14
    if (ctx->r16 == 0) {
        // 0x0024AE78: nop
    
            goto L_0024AF14;
    }
    // 0x0024AE78: nop

    // 0x0024AE7C: sw          $s0, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = ctx->r16;
L_0024AE80:
    // 0x0024AE80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0024AE84: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0024AE88: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0024AE8C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0024AE90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0024AE94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0024AE98: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0024AE9C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0024AEA0: jal         0x0021F00C
    // 0x0024AEA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0021F00C(rdram, ctx);
        goto after_14;
    // 0x0024AEA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_14:
    // 0x0024AEA8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0024AEAC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0024AEB0: jal         0x0020EEF8
    // 0x0024AEB4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_0020EEF8(rdram, ctx);
        goto after_15;
    // 0x0024AEB4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_15:
    // 0x0024AEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024AEBC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x0024AEC0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0024AEC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024AEC8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0024AECC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AED0: jal         0x002671B4
    // 0x0024AED4: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    func_002671B4(rdram, ctx);
        goto after_16;
    // 0x0024AED4: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    after_16:
    // 0x0024AED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AEDC: lwc1        $f1, 0x6BE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6BE8);
    // 0x0024AEE0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024AEE4: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0024AEE8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024AEEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024AEF0: lwc1        $f0, 0x6BEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6BEC);
    // 0x0024AEF4: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024AEF8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AEFC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x0024AF00: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0024AF04: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x0024AF08: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024AF0C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0024AF10: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_0024AF14:
    // 0x0024AF14: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x0024AF18: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0024AF1C: beq         $v0, $zero, L_0024AF50
    if (ctx->r2 == 0) {
        // 0x0024AF20: nop
    
            goto L_0024AF50;
    }
    // 0x0024AF20: nop

    // 0x0024AF24: lw          $a0, 0xA3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA3C);
    // 0x0024AF28: beq         $a0, $zero, L_0024AF50
    if (ctx->r4 == 0) {
        // 0x0024AF2C: nop
    
            goto L_0024AF50;
    }
    // 0x0024AF2C: nop

    // 0x0024AF30: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0024AF34: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024AF38: addiu       $v1, $v1, -0x24E0
    ctx->r3 = ADD32(ctx->r3, -0X24E0);
    // 0x0024AF3C: bnel        $v0, $v1, L_0024AF50
    if (ctx->r2 != ctx->r3) {
        // 0x0024AF40: sw          $v1, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r3;
            goto L_0024AF50;
    }
    goto skip_4;
    // 0x0024AF40: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    skip_4:
    // 0x0024AF44: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0024AF48: addiu       $v0, $v0, -0x24D8
    ctx->r2 = ADD32(ctx->r2, -0X24D8);
    // 0x0024AF4C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_0024AF50:
    // 0x0024AF50: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0024AF54: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0024AF58: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0024AF5C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0024AF60: jr          $ra
    // 0x0024AF64: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0024AF64: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00225848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225848: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0022584C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00225850: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00225854: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225858: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0022585C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00225860: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00225864: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00225868: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0022586C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00225870: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00225874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225878: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0022587C: lw          $s4, 0xFC8($a0)
    ctx->r20 = MEM_W(ctx->r4, 0XFC8);
    // 0x00225880: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00225884: lwc1        $f20, 0x5FF8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5FF8);
    // 0x00225888: blez        $s4, L_0022591C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0022588C: addiu       $a0, $a0, 0xF88
        ctx->r4 = ADD32(ctx->r4, 0XF88);
            goto L_0022591C;
    }
    // 0x0022588C: addiu       $a0, $a0, 0xF88
    ctx->r4 = ADD32(ctx->r4, 0XF88);
    // 0x00225890: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x00225894: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_00225898:
    // 0x00225898: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0022589C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002258A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002258A4: bnel        $v0, $s6, L_00225910
    if (ctx->r2 != ctx->r22) {
        // 0x002258A8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00225910;
    }
    goto skip_0;
    // 0x002258A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x002258AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002258B0: jal         0x00264C80
    // 0x002258B4: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    func_00264C80(rdram, ctx);
        goto after_0;
    // 0x002258B4: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_0:
    // 0x002258B8: bne         $v0, $zero, L_00225910
    if (ctx->r2 != 0) {
        // 0x002258BC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00225910;
    }
    // 0x002258BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002258C0: lwc1        $f2, 0x4($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X4);
    // 0x002258C4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x002258C8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002258CC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002258D0: lwc1        $f3, 0x8($s5)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x002258D4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002258D8: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x002258DC: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x002258E0: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x002258E4: lwc1        $f0, 0xC($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0XC);
    // 0x002258E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002258EC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002258F0: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x002258F4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002258F8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x002258FC: nop

    // 0x00225900: bc1f        L_00225910
    if (!c1cs) {
        // 0x00225904: nop
    
            goto L_00225910;
    }
    // 0x00225904: nop

    // 0x00225908: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x0022590C: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
L_00225910:
    // 0x00225910: slt         $v0, $s2, $s4
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00225914: bne         $v0, $zero, L_00225898
    if (ctx->r2 != 0) {
        // 0x00225918: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00225898;
    }
    // 0x00225918: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_0022591C:
    // 0x0022591C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00225920: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00225924: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00225928: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0022592C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00225930: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225934: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225938: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022593C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225940: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00225944: jr          $ra
    // 0x00225948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00225948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00255E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255E44: jr          $ra
    // 0x00255E48: nop

    return;
    // 0x00255E48: nop

;}
RECOMP_FUNC void func_00259630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00259634: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259638: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025963C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00259640: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00259644: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259648: lw          $s0, 0x1A8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A8);
    // 0x0025964C: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x00259650: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00259654: beq         $v0, $zero, L_0025967C
    if (ctx->r2 == 0) {
        // 0x00259658: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0025967C;
    }
    // 0x00259658: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0025965C: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x00259660: jal         0x0024E700
    // 0x00259664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00259664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00259668: beq         $v0, $zero, L_0025967C
    if (ctx->r2 == 0) {
        // 0x0025966C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025967C;
    }
    // 0x0025966C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00259670: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00259674: j           L_00259694
    // 0x00259678: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_00259694;
    // 0x00259678: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_0025967C:
    // 0x0025967C: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x00259680: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00259684: bne         $v0, $zero, L_0025969C
    if (ctx->r2 != 0) {
        // 0x00259688: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025969C;
    }
    // 0x00259688: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025968C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00259690: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_00259694:
    // 0x00259694: jal         0x00243414
    // 0x00259698: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00259698: nop

    after_1:
L_0025969C:
    // 0x0025969C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002596A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002596A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002596A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002596AC: jr          $ra
    // 0x002596B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002596B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002328A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002328A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002328AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002328B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002328B4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002328B8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002328BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002328C0: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x002328C4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x002328C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002328CC: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x002328D0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x002328D4: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x002328D8: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    // 0x002328DC: jal         0x002254C0
    // 0x002328E0: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    func_002254C0(rdram, ctx);
        goto after_0;
    // 0x002328E0: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    after_0:
    // 0x002328E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002328E8: lw          $a0, 0xF8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF8);
    // 0x002328EC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002328F0: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x002328F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002328F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002328FC: sll         $a1, $v1, 6
    ctx->r5 = S32(ctx->r3 << 6);
    // 0x00232900: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x00232904: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x00232908: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x0023290C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x00232910: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x00232914: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    // 0x00232918: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x0023291C: jal         0x0020B9F4
    // 0x00232920: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    func_0020B9F4(rdram, ctx);
        goto after_1;
    // 0x00232920: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    after_1:
    // 0x00232924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00232928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0023292C: jr          $ra
    // 0x00232930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00232930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044F644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416740:
    // 0x0044F644: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0044F648: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0044F64C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0044F650: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0044F654: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0044F658: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0044F65C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0044F660: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0044F664: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0044F668: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0044F66C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0044F670: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x0044F674: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044F678: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044F67C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044F680: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0044F684: blez        $v1, L_0044F6BC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0044F688: addiu       $a1, $v0, 0x1D8
        ctx->r5 = ADD32(ctx->r2, 0X1D8);
            goto L_0044F6BC;
    }
    // 0x0044F688: addiu       $a1, $v0, 0x1D8
    ctx->r5 = ADD32(ctx->r2, 0X1D8);
    // 0x0044F68C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0044F690: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0044F694: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_0044F698:
    // 0x0044F698: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0044F69C: bne         $v0, $t0, L_0044F6A8
    if (ctx->r2 != ctx->r8) {
        // 0x0044F6A0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044F6A8;
    }
    // 0x0044F6A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044F6A4: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0044F6A8:
    // 0x0044F6A8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x0044F6AC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0044F6B0: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0044F6B4: bne         $v0, $zero, L_0044F698
    if (ctx->r2 != 0) {
        // 0x0044F6B8: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_0044F698;
    }
    // 0x0044F6B8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_0044F6BC:
    // 0x0044F6BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044F6C0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0044F6C4: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0044F6C8: jal         0x00204EDC
    // 0x0044F6CC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0044F6CC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x0044F6D0: beql        $v0, $zero, L_0044F740
    if (ctx->r2 == 0) {
        // 0x0044F6D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044F740;
    }
    goto skip_0;
    // 0x0044F6D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0044F6D8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0044F6DC: bne         $s0, $zero, L_0044F6EC
    if (ctx->r16 != 0) {
        // 0x0044F6E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044F6EC;
    }
    // 0x0044F6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044F6E4: j           L_00416740
    // 0x0044F6E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00416740(rdram, ctx);
    return;
    // 0x0044F6E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044F6EC:
    // 0x0044F6EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044F6F0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0044F6F4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x0044F6F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0044F6FC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0044F700: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x0044F704: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0044F708: jal         0x00414EA8
    // 0x0044F70C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0044F70C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044F710: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044F714: jal         0x00200518
    // 0x0044F718: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x0044F718: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044F71C: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x0044F720: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0044F724: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x0044F728: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044F72C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0044F730: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x0044F734: beql        $v0, $zero, L_0044F73C
    if (ctx->r2 == 0) {
        // 0x0044F738: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_0044F73C;
    }
    goto skip_1;
    // 0x0044F738: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_1:
L_0044F73C:
    // 0x0044F73C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F740:
    // 0x0044F740: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0044F744: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0044F748: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0044F74C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0044F750: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0044F754: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0044F758: jr          $ra
    // 0x0044F75C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044F75C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00217D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217D6C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00217D70: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    // 0x00217D74: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x00217D78: sub.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00217D7C: mtc1        $a3, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r7;
    // 0x00217D80: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00217D84: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x00217D88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00217D8C: add.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f3.fl;
    // 0x00217D90: swc1        $f2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f2.u32l;
    // 0x00217D94: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00217D98: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00217D9C: nop

    // 0x00217DA0: bc1f        L_00217DB8
    if (!c1cs) {
        // 0x00217DA4: nop
    
            goto L_00217DB8;
    }
    // 0x00217DA4: nop

    // 0x00217DA8: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00217DAC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00217DB0: j           L_00217DDC
    // 0x00217DB4: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
        goto L_00217DDC;
    // 0x00217DB4: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
L_00217DB8:
    // 0x00217DB8: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00217DBC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00217DC0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00217DC4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00217DC8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00217DCC: nop

    // 0x00217DD0: bc1t        L_00217DDC
    if (c1cs) {
        // 0x00217DD4: addiu       $a3, $v0, 0x1
        ctx->r7 = ADD32(ctx->r2, 0X1);
            goto L_00217DDC;
    }
    // 0x00217DD4: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x00217DD8: addiu       $a3, $v0, 0x2
    ctx->r7 = ADD32(ctx->r2, 0X2);
L_00217DDC:
    // 0x00217DDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00217DE0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00217DE4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00217DE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00217DEC: sllv        $v0, $t0, $v1
    ctx->r2 = S32(ctx->r8 << (ctx->r3 & 31));
L_00217DF0:
    // 0x00217DF0: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x00217DF4: beql        $v0, $zero, L_00217E08
    if (ctx->r2 == 0) {
        // 0x00217DF8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00217E08;
    }
    goto skip_0;
    // 0x00217DF8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x00217DFC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00217E00: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00217E04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00217E08:
    // 0x00217E08: sltiu       $v0, $v1, 0x20
    ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
    // 0x00217E0C: bne         $v0, $zero, L_00217DF0
    if (ctx->r2 != 0) {
        // 0x00217E10: sllv        $v0, $t0, $v1
        ctx->r2 = S32(ctx->r8 << (ctx->r3 & 31));
            goto L_00217DF0;
    }
    // 0x00217E10: sllv        $v0, $t0, $v1
    ctx->r2 = S32(ctx->r8 << (ctx->r3 & 31));
    // 0x00217E14: sltiu       $v0, $a1, 0x2
    ctx->r2 = ctx->r5 < 0X2 ? 1 : 0;
    // 0x00217E18: bne         $v0, $zero, L_00217E24
    if (ctx->r2 != 0) {
        // 0x00217E1C: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_00217E24;
    }
    // 0x00217E1C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x00217E20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00217E24:
    // 0x00217E24: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00217E28: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
    // 0x00217E2C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x00217E30: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x00217E34: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x00217E38: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x00217E3C: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x00217E40: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x00217E44: jr          $ra
    // 0x00217E48: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00217E48: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_00446D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446D6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446D70: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446D74: beq         $v0, $zero, L_00446D84
    if (ctx->r2 == 0) {
        // 0x00446D78: nop
    
            goto L_00446D84;
    }
    // 0x00446D78: nop

    // 0x00446D7C: jal         0x00243414
    // 0x00446D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00446D84:
    // 0x00446D84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446D88: jr          $ra
    // 0x00446D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004077F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004077F0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004077F4: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004077F8: jr          $ra
    // 0x004077FC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004077FC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0045D44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D44C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D450: lw          $v0, 0x2040($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2040);
    // 0x0045D454: bne         $v0, $zero, L_0045D464
    if (ctx->r2 != 0) {
        // 0x0045D458: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_0045D464;
    }
    // 0x0045D458: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x0045D45C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D460: sw          $v0, 0x2040($at)
    MEM_W(0X2040, ctx->r1) = ctx->r2;
L_0045D464:
    // 0x0045D464: jr          $ra
    // 0x0045D468: nop

    return;
    // 0x0045D468: nop

;}
RECOMP_FUNC void func_004035B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004035B8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x004035BC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x004035C0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x004035C4: jr          $ra
    // 0x004035C8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    return;
    // 0x004035C8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
;}
RECOMP_FUNC void func_0022CF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022CF40: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0022CF44: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x0022CF48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022CF4C: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x0022CF50: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x0022CF54: lbu         $v0, 0x1AC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1AC);
    // 0x0022CF58: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022CF5C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0022CF60: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x0022CF64: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0022CF68: beq         $v0, $zero, L_0022D084
    if (ctx->r2 == 0) {
        // 0x0022CF6C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022D084;
    }
    // 0x0022CF6C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022CF70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022CF74: addu        $at, $at, $v0
    gpr jr_addend_0022CF7C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022CF78: lw          $v0, 0x6220($at)
    ctx->r2 = ADD32(ctx->r1, 0X6220);
    // 0x0022CF7C: jr          $v0
    // 0x0022CF80: nop

    switch (jr_addend_0022CF7C >> 2) {
        case 0: goto L_0022CF84; break;
        case 1: goto L_0022D084; break;
        case 2: goto L_0022CFA0; break;
        case 3: goto L_0022D008; break;
        case 4: goto L_0022CFB0; break;
        case 5: goto L_0022CFC0; break;
        case 6: goto L_0022D018; break;
        case 7: goto L_0022CFB0; break;
        case 8: goto L_0022D058; break;
        case 9: goto L_0022D058; break;
        case 10: goto L_0022D058; break;
        default: switch_error(__func__, 0x0022CF7C, 0x800A6220);
    }
    // 0x0022CF80: nop

L_0022CF84:
    // 0x0022CF84: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0022CF88: addiu       $s0, $s0, 0x1810
    ctx->r16 = ADD32(ctx->r16, 0X1810);
    // 0x0022CF8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022CF90: jal         0x00210090
    // 0x0022CF94: addiu       $a1, $s1, 0x150
    ctx->r5 = ADD32(ctx->r17, 0X150);
    func_00210090(rdram, ctx);
        goto after_0;
    // 0x0022CF94: addiu       $a1, $s1, 0x150
    ctx->r5 = ADD32(ctx->r17, 0X150);
    after_0:
    // 0x0022CF98: j           L_0022D088
    // 0x0022CF9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_0022D088;
    // 0x0022CF9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0022CFA0:
    // 0x0022CFA0: beq         $a1, $zero, L_0022D088
    if (ctx->r5 == 0) {
        // 0x0022CFA4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022D088;
    }
    // 0x0022CFA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022CFA8: j           L_0022D088
    // 0x0022CFAC: addiu       $v0, $a1, 0xE7C
    ctx->r2 = ADD32(ctx->r5, 0XE7C);
        goto L_0022D088;
    // 0x0022CFAC: addiu       $v0, $a1, 0xE7C
    ctx->r2 = ADD32(ctx->r5, 0XE7C);
L_0022CFB0:
    // 0x0022CFB0: beq         $a1, $zero, L_0022D088
    if (ctx->r5 == 0) {
        // 0x0022CFB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022D088;
    }
    // 0x0022CFB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022CFB8: j           L_0022D088
    // 0x0022CFBC: addiu       $v0, $a1, 0xE3C
    ctx->r2 = ADD32(ctx->r5, 0XE3C);
        goto L_0022D088;
    // 0x0022CFBC: addiu       $v0, $a1, 0xE3C
    ctx->r2 = ADD32(ctx->r5, 0XE3C);
L_0022CFC0:
    // 0x0022CFC0: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0022CFC4: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0022CFC8: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x0022CFCC: jal         0x0026BE60
    // 0x0022CFD0: nop

    func_0026BE60(rdram, ctx);
        goto after_1;
    // 0x0022CFD0: nop

    after_1:
    // 0x0022CFD4: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0022CFD8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0022CFDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022CFE0: lwc1        $f0, 0x624C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X624C);
    // 0x0022CFE4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022CFE8: nop

    // 0x0022CFEC: bc1f        L_0022D008
    if (!c1cs) {
        // 0x0022CFF0: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_0022D008;
    }
    // 0x0022CFF0: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0022CFF4: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x0022CFF8: jal         0x0026A9C0
    // 0x0022CFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026A9C0(rdram, ctx);
        goto after_2;
    // 0x0022CFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0022D000: j           L_0022D02C
    // 0x0022D004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_0022D02C;
    // 0x0022D004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0022D008:
    // 0x0022D008: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022D00C: addiu       $v0, $v0, 0x18F0
    ctx->r2 = ADD32(ctx->r2, 0X18F0);
    // 0x0022D010: j           L_0022D088
    // 0x0022D014: nop

        goto L_0022D088;
    // 0x0022D014: nop

L_0022D018:
    // 0x0022D018: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x0022D01C: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0022D020: jal         0x0026AC38
    // 0x0022D024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026AC38(rdram, ctx);
        goto after_3;
    // 0x0022D024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0022D028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0022D02C:
    // 0x0022D02C: jal         0x00211114
    // 0x0022D030: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211114(rdram, ctx);
        goto after_4;
    // 0x0022D030: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x0022D034: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0022D038: addiu       $s0, $s0, 0x1810
    ctx->r16 = ADD32(ctx->r16, 0X1810);
    // 0x0022D03C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D040: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0022D044: addiu       $a1, $a1, 0x18F0
    ctx->r5 = ADD32(ctx->r5, 0X18F0);
    // 0x0022D048: jal         0x0020C618
    // 0x0022D04C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020C618(rdram, ctx);
        goto after_5;
    // 0x0022D04C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x0022D050: j           L_0022D088
    // 0x0022D054: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_0022D088;
    // 0x0022D054: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0022D058:
    // 0x0022D058: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0022D05C: lb          $a1, 0x1AC($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X1AC);
    // 0x0022D060: jal         0x0026C240
    // 0x0022D064: nop

    func_0026C240(rdram, ctx);
        goto after_6;
    // 0x0022D064: nop

    after_6:
    // 0x0022D068: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0022D06C: addiu       $s0, $s0, 0x1810
    ctx->r16 = ADD32(ctx->r16, 0X1810);
    // 0x0022D070: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022D074: jal         0x002105A4
    // 0x0022D078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_7;
    // 0x0022D078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0022D07C: j           L_0022D088
    // 0x0022D080: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_0022D088;
    // 0x0022D080: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0022D084:
    // 0x0022D084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022D088:
    // 0x0022D088: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x0022D08C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0022D090: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x0022D094: jr          $ra
    // 0x0022D098: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x0022D098: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_002534E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002534E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002534E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002534E8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002534EC: addiu       $s0, $s0, -0x5350
    ctx->r16 = ADD32(ctx->r16, -0X5350);
    // 0x002534F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002534F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002534F8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x002534FC: bne         $v0, $zero, L_00253588
    if (ctx->r2 != 0) {
        // 0x00253500: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00253588;
    }
    // 0x00253500: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00253504: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00253508: bne         $v0, $zero, L_00253588
    if (ctx->r2 != 0) {
        // 0x0025350C: nop
    
            goto L_00253588;
    }
    // 0x0025350C: nop

    // 0x00253510: jal         0x00285410
    // 0x00253514: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_0;
    // 0x00253514: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00253518: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0025351C: beq         $v0, $zero, L_00253560
    if (ctx->r2 == 0) {
        // 0x00253520: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00253560;
    }
    // 0x00253520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00253524: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x00253528: bne         $v0, $zero, L_00253588
    if (ctx->r2 != 0) {
        // 0x0025352C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00253588;
    }
    // 0x0025352C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00253530: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x00253534: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x00253538: beq         $s0, $zero, L_00253588
    if (ctx->r16 == 0) {
        // 0x0025353C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00253588;
    }
    // 0x0025353C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00253540:
    // 0x00253540: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00253544: jal         0x0024E5F0
    // 0x00253548: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x00253548: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_1:
    // 0x0025354C: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00253550: bne         $s0, $zero, L_00253540
    if (ctx->r16 != 0) {
        // 0x00253554: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00253540;
    }
    // 0x00253554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253558: j           L_00253588
    // 0x0025355C: nop

        goto L_00253588;
    // 0x0025355C: nop

L_00253560:
    // 0x00253560: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x00253564: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x00253568: beq         $s0, $zero, L_00253588
    if (ctx->r16 == 0) {
        // 0x0025356C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00253588;
    }
    // 0x0025356C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00253570:
    // 0x00253570: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00253574: jal         0x0024E5F0
    // 0x00253578: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_0024E5F0(rdram, ctx);
        goto after_2;
    // 0x00253578: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_2:
    // 0x0025357C: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00253580: bne         $s0, $zero, L_00253570
    if (ctx->r16 != 0) {
        // 0x00253584: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00253570;
    }
    // 0x00253584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00253588:
    // 0x00253588: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025358C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253590: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253594: jr          $ra
    // 0x00253598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00253598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025A8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A8C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A8C8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A8CC: lhu         $a3, 0x8C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8C);
    // 0x0025A8D0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A8D4: addiu       $a2, $a2, 0x1B0
    ctx->r6 = ADD32(ctx->r6, 0X1B0);
    // 0x0025A8D8: jal         0x00245A98
    // 0x0025A8DC: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A8DC: nop

    after_0:
    // 0x0025A8E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A8E4: jr          $ra
    // 0x0025A8E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A8E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444C64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00444C68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00444C6C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444C70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00444C74: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444C78: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00444C7C: jal         0x0025AD90
    // 0x00444C80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0025AD90(rdram, ctx);
        goto after_0;
    // 0x00444C80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00444C84: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00444C88: beq         $v0, $zero, L_00444CA4
    if (ctx->r2 == 0) {
        // 0x00444C8C: nop
    
            goto L_00444CA4;
    }
    // 0x00444C8C: nop

    // 0x00444C90: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00444C94: beq         $v0, $zero, L_00444CA4
    if (ctx->r2 == 0) {
        // 0x00444C98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444CA4;
    }
    // 0x00444C98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444C9C: jalr        $v0
    // 0x00444CA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00444CA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00444CA4:
    // 0x00444CA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00444CA8: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x00444CAC: lw          $v0, 0x65C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X65C);
    // 0x00444CB0: bne         $v0, $zero, L_00444CEC
    if (ctx->r2 != 0) {
        // 0x00444CB4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444CEC;
    }
    // 0x00444CB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444CB8: jal         0x0040BD60
    // 0x00444CBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0040BD60(rdram, ctx);
        goto after_2;
    // 0x00444CBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00444CC0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00444CC4: beq         $v0, $zero, L_00444CEC
    if (ctx->r2 == 0) {
        // 0x00444CC8: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00444CEC;
    }
    // 0x00444CC8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00444CCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00444CD0: lwc1        $f0, 0x890($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X890);
    // 0x00444CD4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00444CD8: nop

    // 0x00444CDC: bc1f        L_00444CEC
    if (!c1cs) {
        // 0x00444CE0: nop
    
            goto L_00444CEC;
    }
    // 0x00444CE0: nop

    // 0x00444CE4: jal         0x0040BD10
    // 0x00444CE8: nop

    func_0040BD10(rdram, ctx);
        goto after_3;
    // 0x00444CE8: nop

    after_3:
L_00444CEC:
    // 0x00444CEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00444CF0: addiu       $a0, $a0, -0x490
    ctx->r4 = ADD32(ctx->r4, -0X490);
    // 0x00444CF4: jal         0x00409784
    // 0x00444CF8: nop

    func_00409784(rdram, ctx);
        goto after_4;
    // 0x00444CF8: nop

    after_4:
    // 0x00444CFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00444D00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00444D04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00444D08: jr          $ra
    // 0x00444D0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00444D0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00259F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259F40: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259F44: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259F48: lhu         $a3, 0x92($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X92);
    // 0x00259F4C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259F50: addiu       $a2, $a2, -0x790
    ctx->r6 = ADD32(ctx->r6, -0X790);
    // 0x00259F54: jal         0x00245A98
    // 0x00259F58: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259F58: nop

    after_0:
    // 0x00259F5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259F60: jr          $ra
    // 0x00259F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
