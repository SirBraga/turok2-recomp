#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004443A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004443A8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004443AC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004443B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004443B4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004443B8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004443BC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004443C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004443C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004443C8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x004443CC: jal         0x00246108
    // 0x004443D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004443D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004443D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004443D8: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x004443DC: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x004443E0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x004443E4: jal         0x00245BAC
    // 0x004443E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x004443E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004443EC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x004443F0: beq         $v0, $zero, L_00444404
    if (ctx->r2 == 0) {
        // 0x004443F4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444404;
    }
    // 0x004443F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004443F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004443FC: jal         0x00243414
    // 0x00444400: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444400: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_00444404:
    // 0x00444404: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444408: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0044440C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444410: jr          $ra
    // 0x00444414: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444414: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00447F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447F68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447F6C: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x00447F70: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x00447F74: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x00447F78: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x00447F7C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447F80: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447F84: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x00447F88: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x00447F8C: blez        $v0, L_00447FB4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447F90: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_00447FB4;
    }
    // 0x00447F90: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x00447F94: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447F98:
    // 0x00447F98: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00447F9C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447FA0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447FA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447FA8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447FAC: bne         $v0, $zero, L_00447F98
    if (ctx->r2 != 0) {
        // 0x00447FB0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447F98;
    }
    // 0x00447FB0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447FB4:
    // 0x00447FB4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447FB8: blez        $v0, L_00447FE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447FBC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447FE0;
    }
    // 0x00447FBC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447FC0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447FC4:
    // 0x00447FC4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00447FC8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447FCC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447FD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447FD4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447FD8: bne         $v0, $zero, L_00447FC4
    if (ctx->r2 != 0) {
        // 0x00447FDC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447FC4;
    }
    // 0x00447FDC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447FE0:
    // 0x00447FE0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447FE4: blez        $v0, L_0044800C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447FE8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044800C;
    }
    // 0x00447FE8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447FEC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447FF0:
    // 0x00447FF0: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00447FF4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447FF8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447FFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00448000: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00448004: bne         $v0, $zero, L_00447FF0
    if (ctx->r2 != 0) {
        // 0x00448008: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447FF0;
    }
    // 0x00448008: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0044800C:
    // 0x0044800C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x00448010: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x00448014: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00448018: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0044801C: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00448020: beq         $v0, $zero, L_00448030
    if (ctx->r2 == 0) {
        // 0x00448024: nop
    
            goto L_00448030;
    }
    // 0x00448024: nop

    // 0x00448028: jalr        $v0
    // 0x0044802C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0044802C: nop

    after_0:
L_00448030:
    // 0x00448030: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00448034: jr          $ra
    // 0x00448038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00448038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020C208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020C208: lwc1        $f11, 0x0($a1)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020C20C: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C210: mul.s       $f0, $f11, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f11.fl, ctx->f10.fl);
    // 0x0020C214: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020C218: mul.s       $f5, $f11, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = MUL_S(ctx->f11.fl, ctx->f8.fl);
    // 0x0020C21C: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C220: lwc1        $f3, 0x4($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020C224: mul.s       $f4, $f2, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0020C228: nop

    // 0x0020C22C: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x0020C230: lwc1        $f1, 0x20($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X20);
    // 0x0020C234: mul.s       $f3, $f1, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0020C238: nop

    // 0x0020C23C: mul.s       $f1, $f1, $f10
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f10.fl);
    // 0x0020C240: lwc1        $f9, 0x28($a1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r5, 0X28);
    // 0x0020C244: mul.s       $f0, $f0, $f9
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f9.fl);
    // 0x0020C248: lwc1        $f7, 0x18($a1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x0020C24C: mul.s       $f5, $f5, $f7
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f7.fl);
    // 0x0020C250: nop

    // 0x0020C254: mul.s       $f4, $f4, $f9
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f9.fl);
    // 0x0020C258: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C25C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x0020C260: nop

    // 0x0020C264: mul.s       $f3, $f3, $f7
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f7.fl);
    // 0x0020C268: nop

    // 0x0020C26C: mul.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f6.fl);
    // 0x0020C270: sub.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f5.fl;
    // 0x0020C274: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x0020C278: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020C27C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020C280: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020C284: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0020C288: c.eq.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl == ctx->f3.fl;
    // 0x0020C28C: nop

    // 0x0020C290: bc1f        L_0020C318
    if (!c1cs) {
            // 0x0020C294: nop

    func_0020C318(rdram, ctx);
    return;
    }
    // 0x0020C294: nop

    // 0x0020C298: swc1        $f11, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(11 - 1) * 2];
    // 0x0020C29C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020C2A0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2A4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020C2A8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2AC: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020C2B0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2B4: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020C2B8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2BC: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020C2C0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2C4: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x0020C2C8: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2CC: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0020C2D0: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2D4: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020C2D8: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2DC: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020C2E0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2E4: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x0020C2E8: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2EC: lwc1        $f0, 0x2C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x0020C2F0: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2F4: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020C2F8: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020C2FC: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020C300: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020C304: lwc1        $f0, 0x38($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X38);
    // 0x0020C308: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x0020C30C: lwc1        $f0, 0x3C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x0020C310: jr          $ra
    // 0x0020C314: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020C314: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00294200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00294204: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00294208: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0029420C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294210: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00294214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294218: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0029421C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00294220: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00294224: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294228: beq         $v0, $zero, L_00294294
    if (ctx->r2 == 0) {
        // 0x0029422C: addu        $s3, $s0, $zero
        ctx->r19 = ADD32(ctx->r16, 0);
            goto L_00294294;
    }
    // 0x0029422C: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x00294230: jal         0x00294B58
    // 0x00294234: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294234: nop

    after_0:
    // 0x00294238: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0029423C: beq         $a2, $zero, L_00294294
    if (ctx->r6 == 0) {
        // 0x00294240: nop
    
            goto L_00294294;
    }
    // 0x00294240: nop

    // 0x00294244: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294248: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x0029424C: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x00294250: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00294254: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x00294258: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x0029425C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x00294260: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00294264: bgez        $v0, L_00294274
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00294268: sw          $v1, 0x4($a2)
        MEM_W(0X4, ctx->r6) = ctx->r3;
            goto L_00294274;
    }
    // 0x00294268: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x0029426C: j           L_00294278
    // 0x00294270: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_00294278;
    // 0x00294270: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_00294274:
    // 0x00294274: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
L_00294278:
    // 0x00294278: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x0029427C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00294280: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294284: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00294288: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0029428C: jalr        $v0
    // 0x00294290: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00294290: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_00294294:
    // 0x00294294: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00294298: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029429C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002942A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002942A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002942A8: jr          $ra
    // 0x002942AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002942AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026F4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F4E0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_0026F4E4:
    // 0x0026F4E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026F4E8: blez        $a1, L_0026F540
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0026F4EC: addu        $t0, $a3, $zero
        ctx->r8 = ADD32(ctx->r7, 0);
            goto L_0026F540;
    }
    // 0x0026F4EC: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x0026F4F0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0026F4F4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0026F4F8: lwc1        $f5, 0x4($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0026F4FC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0026F500: lwc1        $f3, 0xC($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0XC);
L_0026F504:
    // 0x0026F504: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026F508: mul.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x0026F50C: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0026F510: mul.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x0026F514: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026F518: mul.s       $f1, $f4, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0026F51C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026F520: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026F524: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0026F528: nop

    // 0x0026F52C: bc1t        L_0026F550
    if (c1cs) {
        // 0x0026F530: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0026F550;
    }
    // 0x0026F530: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0026F534: slt         $v0, $a3, $a1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0026F538: bne         $v0, $zero, L_0026F504
    if (ctx->r2 != 0) {
        // 0x0026F53C: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_0026F504;
    }
    // 0x0026F53C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_0026F540:
    // 0x0026F540: bne         $t0, $zero, L_0026F558
    if (ctx->r8 != 0) {
        // 0x0026F544: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_0026F558;
    }
    // 0x0026F544: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0026F548: jr          $ra
    // 0x0026F54C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026F54C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026F550:
    // 0x0026F550: j           L_0026F540
    // 0x0026F554: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_0026F540;
    // 0x0026F554: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_0026F558:
    // 0x0026F558: slti        $v0, $t1, 0x6
    ctx->r2 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x0026F55C: bne         $v0, $zero, L_0026F4E4
    if (ctx->r2 != 0) {
        // 0x0026F560: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0026F4E4;
    }
    // 0x0026F560: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0026F564: jr          $ra
    // 0x0026F568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0026F568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00268534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268534: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00268538: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026853C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268540: beq         $v1, $v0, L_00268554
    if (ctx->r3 == ctx->r2) {
            // 0x00268544: nop

    func_00268554(rdram, ctx);
    return;
    }
    // 0x00268544: nop

    // 0x00268548: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026854C: jr          $ra
    // 0x00268550: nop

    return;
    // 0x00268550: nop

;}
RECOMP_FUNC void func_00423558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042355C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423560: sw          $zero, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = 0;
    // 0x00423564: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423568: sw          $v0, 0x964($at)
    MEM_W(0X964, ctx->r1) = ctx->r2;
    // 0x0042356C: jr          $ra
    // 0x00423570: nop

    return;
    // 0x00423570: nop

;}
RECOMP_FUNC void func_0042E14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E14C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E150: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x0042E154: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E158: lbu         $v1, -0x550F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550F);
    // 0x0042E15C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042E160: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E164: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E168: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042E16C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042E170: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x0042E174: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0042E178: beq         $v1, $zero, L_0042E188
    if (ctx->r3 == 0) {
        // 0x0042E17C: sll         $s1, $v0, 1
        ctx->r17 = S32(ctx->r2 << 1);
            goto L_0042E188;
    }
    // 0x0042E17C: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    // 0x0042E180: j           L_0042E18C
    // 0x0042E184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0042E18C;
    // 0x0042E184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042E188:
    // 0x0042E188: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0042E18C:
    // 0x0042E18C: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
    // 0x0042E190: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E194: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E198: bne         $v0, $zero, L_0042E1BC
    if (ctx->r2 != 0) {
        // 0x0042E19C: nop
    
            goto L_0042E1BC;
    }
    // 0x0042E19C: nop

    // 0x0042E1A0: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x0042E1A4: jal         0x00285BD0
    // 0x0042E1A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x0042E1A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0042E1AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E1B0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E1B4: beq         $v0, $zero, L_0042E1CC
    if (ctx->r2 == 0) {
        // 0x0042E1B8: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0042E1CC;
    }
    // 0x0042E1B8: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0042E1BC:
    // 0x0042E1BC: jal         0x002540E4
    // 0x0042E1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_1;
    // 0x0042E1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042E1C4: j           L_0042E1D4
    // 0x0042E1C8: nop

        goto L_0042E1D4;
    // 0x0042E1C8: nop

L_0042E1CC:
    // 0x0042E1CC: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E1D0: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
L_0042E1D4:
    // 0x0042E1D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042E1D8: lwc1        $f0, 0x6AC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC4);
    // 0x0042E1DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E1E0: jal         0x00248340
    // 0x0042E1E4: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_2;
    // 0x0042E1E4: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0042E1E8: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0042E1EC: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x0042E1F0: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0042E1F4: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x0042E1F8: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0042E1FC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E200: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0042E204: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042E208: bne         $v1, $v0, L_0042E258
    if (ctx->r3 != ctx->r2) {
        // 0x0042E20C: nop
    
            goto L_0042E258;
    }
    // 0x0042E20C: nop

    // 0x0042E210: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E214: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E218: bne         $v0, $zero, L_0042E268
    if (ctx->r2 != 0) {
        // 0x0042E21C: nop
    
            goto L_0042E268;
    }
    // 0x0042E21C: nop

    // 0x0042E220: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042E224: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0042E228: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0042E22C: bne         $v0, $zero, L_0042E258
    if (ctx->r2 != 0) {
        // 0x0042E230: nop
    
            goto L_0042E258;
    }
    // 0x0042E230: nop

    // 0x0042E234: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E238: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0042E23C: beq         $v0, $zero, L_0042E258
    if (ctx->r2 == 0) {
        // 0x0042E240: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0042E258;
    }
    // 0x0042E240: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0042E244: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E248: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E24C: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x0042E250: jal         0x0027580C
    // 0x0042E254: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0042E254: nop

    after_3:
L_0042E258:
    // 0x0042E258: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E25C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E260: beq         $v0, $zero, L_0042E274
    if (ctx->r2 == 0) {
        // 0x0042E264: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042E274;
    }
    // 0x0042E264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0042E268:
    // 0x0042E268: jal         0x00248A8C
    // 0x0042E26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x0042E26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042E270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0042E274:
    // 0x0042E274: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0042E278: lw          $a1, 0x92C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X92C);
    // 0x0042E27C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0042E280: jal         0x00248BA8
    // 0x0042E284: sw          $zero, 0xBF8($a0)
    MEM_W(0XBF8, ctx->r4) = 0;
    func_00248BA8(rdram, ctx);
        goto after_5;
    // 0x0042E284: sw          $zero, 0xBF8($a0)
    MEM_W(0XBF8, ctx->r4) = 0;
    after_5:
    // 0x0042E288: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042E28C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042E290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E294: jr          $ra
    // 0x0042E298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042E298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025FDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FDF8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025FDFC: lh          $v0, 0x72($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X72);
    // 0x0025FE00: jr          $ra
    // 0x0025FE04: nop

    return;
    // 0x0025FE04: nop

;}
RECOMP_FUNC void func_004400B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004400B4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004400B8: addiu       $a1, $a1, -0x5F0
    ctx->r5 = ADD32(ctx->r5, -0X5F0);
    // 0x004400BC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x004400C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004400C4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x004400C8: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x004400CC: bne         $a0, $zero, L_004400D8
    if (ctx->r4 != 0) {
        // 0x004400D0: sw          $v1, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r3;
            goto L_004400D8;
    }
    // 0x004400D0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x004400D4: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
L_004400D8:
    // 0x004400D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004400DC: bne         $a0, $v0, L_004400F4
    if (ctx->r4 != ctx->r2) {
        // 0x004400E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004400F4;
    }
    // 0x004400E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004400E4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004400E8: addiu       $v0, $v0, 0x12D4
    ctx->r2 = ADD32(ctx->r2, 0X12D4);
    // 0x004400EC: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x004400F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_004400F4:
    // 0x004400F4: bne         $a0, $v0, L_0044010C
    if (ctx->r4 != ctx->r2) {
        // 0x004400F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0044010C;
    }
    // 0x004400F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004400FC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00440100: addiu       $v0, $v0, 0x1344
    ctx->r2 = ADD32(ctx->r2, 0X1344);
    // 0x00440104: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x00440108: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0044010C:
    // 0x0044010C: bne         $a0, $v0, L_00440124
    if (ctx->r4 != ctx->r2) {
        // 0x00440110: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00440124;
    }
    // 0x00440110: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00440114: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00440118: addiu       $v0, $v0, 0x13EC
    ctx->r2 = ADD32(ctx->r2, 0X13EC);
    // 0x0044011C: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x00440120: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00440124:
    // 0x00440124: bne         $a0, $v0, L_0044013C
    if (ctx->r4 != ctx->r2) {
        // 0x00440128: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0044013C;
    }
    // 0x00440128: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0044012C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00440130: addiu       $v0, $v0, 0x1478
    ctx->r2 = ADD32(ctx->r2, 0X1478);
    // 0x00440134: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x00440138: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0044013C:
    // 0x0044013C: bne         $a0, $v0, L_00440150
    if (ctx->r4 != ctx->r2) {
        // 0x00440140: nop
    
            goto L_00440150;
    }
    // 0x00440140: nop

    // 0x00440144: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00440148: addiu       $v0, $v0, 0x14B0
    ctx->r2 = ADD32(ctx->r2, 0X14B0);
    // 0x0044014C: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
L_00440150:
    // 0x00440150: jr          $ra
    // 0x00440154: nop

    return;
    // 0x00440154: nop

;}
RECOMP_FUNC void func_00284380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00284384: sw          $a0, 0x1BC4($at)
    MEM_W(0X1BC4, ctx->r1) = ctx->r4;
    // 0x00284388: jr          $ra
    // 0x0028438C: nop

    return;
    // 0x0028438C: nop

;}
RECOMP_FUNC void func_0026B9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026B9E0: beq         $a1, $zero, L_0026BADC
    if (ctx->r5 == 0) {
        // 0x0026B9E4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0026BADC;
    }
    // 0x0026B9E4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0026B9E8: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026B9EC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0026B9F0: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026B9F4: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0026B9F8: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026B9FC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA00: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026BA04: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA08: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026BA0C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0026BA10: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA14: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026BA18: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x0026BA1C: blez        $a1, L_0026BADC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0026BA20: swc1        $f0, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
            goto L_0026BADC;
    }
    // 0x0026BA20: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
L_0026BA24:
    // 0x0026BA24: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026BA28: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0026BA2C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026BA30: nop

    // 0x0026BA34: bc1fl       L_0026BA3C
    if (!c1cs) {
        // 0x0026BA38: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026BA3C;
    }
    goto skip_0;
    // 0x0026BA38: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0026BA3C:
    // 0x0026BA3C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA40: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026BA44: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0026BA48: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026BA4C: nop

    // 0x0026BA50: bc1fl       L_0026BA58
    if (!c1cs) {
        // 0x0026BA54: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026BA58;
    }
    goto skip_1;
    // 0x0026BA54: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0026BA58:
    // 0x0026BA58: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA5C: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026BA60: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0026BA64: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026BA68: nop

    // 0x0026BA6C: bc1fl       L_0026BA74
    if (!c1cs) {
        // 0x0026BA70: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026BA74;
    }
    goto skip_2;
    // 0x0026BA70: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_0026BA74:
    // 0x0026BA74: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA78: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026BA7C: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0026BA80: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026BA84: nop

    // 0x0026BA88: bc1fl       L_0026BA90
    if (!c1cs) {
        // 0x0026BA8C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026BA90;
    }
    goto skip_3;
    // 0x0026BA8C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0026BA90:
    // 0x0026BA90: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0026BA94: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026BA98: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0026BA9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026BAA0: nop

    // 0x0026BAA4: bc1fl       L_0026BAAC
    if (!c1cs) {
        // 0x0026BAA8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026BAAC;
    }
    goto skip_4;
    // 0x0026BAA8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0026BAAC:
    // 0x0026BAAC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0026BAB0: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026BAB4: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0026BAB8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026BABC: nop

    // 0x0026BAC0: bc1fl       L_0026BAC8
    if (!c1cs) {
        // 0x0026BAC4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026BAC8;
    }
    goto skip_5;
    // 0x0026BAC4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_0026BAC8:
    // 0x0026BAC8: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0026BACC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0026BAD0: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0026BAD4: bne         $v0, $zero, L_0026BA24
    if (ctx->r2 != 0) {
        // 0x0026BAD8: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_0026BA24;
    }
    // 0x0026BAD8: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_0026BADC:
    // 0x0026BADC: jr          $ra
    // 0x0026BAE0: nop

    return;
    // 0x0026BAE0: nop

;}
RECOMP_FUNC void func_0027BB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BB7C: sw          $zero, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x0027BB80 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0027BB80(rdram, ctx);
;}
RECOMP_FUNC void func_00259D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259D38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00259D3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259D40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00259D44: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00259D48: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00259D4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00259D50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259D54: lw          $s0, 0x1A8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A8);
    // 0x00259D58: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x00259D5C: jal         0x0025398C
    // 0x00259D60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025398C(rdram, ctx);
        goto after_0;
    // 0x00259D60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00259D64: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00259D68: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00259D6C: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x00259D70: addu        $a0, $s0, $v0
    ctx->r4 = ADD32(ctx->r16, ctx->r2);
    // 0x00259D74: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00259D78: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x00259D7C: blez        $v0, L_00259D88
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00259D80: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_00259D88;
    }
    // 0x00259D80: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00259D84: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_00259D88:
    // 0x00259D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00259D8C: jal         0x0024E700
    // 0x00259D90: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_0024E700(rdram, ctx);
        goto after_1;
    // 0x00259D90: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x00259D94: bne         $v0, $zero, L_00259DA8
    if (ctx->r2 != 0) {
        // 0x00259D98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00259DA8;
    }
    // 0x00259D98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00259D9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00259DA0: j           L_00259DB0
    // 0x00259DA4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_00259DB0;
    // 0x00259DA4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00259DA8:
    // 0x00259DA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00259DAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_00259DB0:
    // 0x00259DB0: jal         0x00243414
    // 0x00259DB4: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00259DB4: nop

    after_2:
    // 0x00259DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00259DBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00259DC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259DC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259DC8: jr          $ra
    // 0x00259DCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00259DCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002623EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002623EC: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x002623F0: sw          $s3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r19;
    // 0x002623F4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002623F8: sw          $s4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r20;
    // 0x002623FC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00262400: sw          $ra, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r31;
    // 0x00262404: sw          $s5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r21;
    // 0x00262408: sw          $s2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r18;
    // 0x0026240C: sw          $s1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r17;
    // 0x00262410: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x00262414: sdc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X108, ctx->r29);
    // 0x00262418: sdc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X100, ctx->r29);
    // 0x0026241C: sdc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF8, ctx->r29);
    // 0x00262420: lwc1        $f1, 0x50($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X50);
    // 0x00262424: lwc1        $f0, 0x98($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X98);
    // 0x00262428: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0026242C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00262430: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x00262434: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x00262438: jal         0x00210EF0
    // 0x0026243C: swc1        $f1, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x0026243C: swc1        $f1, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x00262440: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00262444: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00262448: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0026244C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00262450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00262454: jal         0x00246108
    // 0x00262458: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x00262458: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x0026245C: lw          $s2, 0x80($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X80);
    // 0x00262460: beq         $s2, $zero, L_00262628
    if (ctx->r18 == 0) {
        // 0x00262464: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_00262628;
    }
    // 0x00262464: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00262468: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x0026246C: lwc1        $f0, 0x48($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X48);
    // 0x00262470: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00262474: nop

    // 0x00262478: bc1f        L_0026262C
    if (!c1cs) {
        // 0x0026247C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0026262C;
    }
    // 0x0026247C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00262480: lwc1        $f0, 0x4C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x00262484: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00262488: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0026248C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262490: lwc1        $f2, 0x7B78($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7B78);
    // 0x00262494: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x00262498: mul.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026249C: bc1f        L_002624C0
    if (!c1cs) {
        // 0x002624A0: nop
    
            goto L_002624C0;
    }
    // 0x002624A0: nop

    // 0x002624A4: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x002624A8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002624AC: nop

    // 0x002624B0: bc1f        L_00262630
    if (!c1cs) {
        // 0x002624B4: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_00262630;
    }
    // 0x002624B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x002624B8: j           L_002624D0
    // 0x002624BC: nop

        goto L_002624D0;
    // 0x002624BC: nop

L_002624C0:
    // 0x002624C0: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x002624C4: nop

    // 0x002624C8: bc1f        L_0026262C
    if (!c1cs) {
        // 0x002624CC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0026262C;
    }
    // 0x002624CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002624D0:
    // 0x002624D0: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x002624D4: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x002624D8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002624DC: nop

    // 0x002624E0: bc1f        L_00262538
    if (!c1cs) {
        // 0x002624E4: nop
    
            goto L_00262538;
    }
    // 0x002624E4: nop

    // 0x002624E8: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x002624EC: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x002624F0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002624F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002624F8: lwc1        $f2, 0x7B7C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7B7C);
    // 0x002624FC: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x00262500: mul.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00262504: bc1f        L_00262528
    if (!c1cs) {
        // 0x00262508: nop
    
            goto L_00262528;
    }
    // 0x00262508: nop

    // 0x0026250C: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x00262510: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00262514: nop

    // 0x00262518: bc1tl       L_00262538
    if (c1cs) {
        // 0x0026251C: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_00262538;
    }
    goto skip_0;
    // 0x0026251C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_0:
    // 0x00262520: j           L_00262538
    // 0x00262524: nop

        goto L_00262538;
    // 0x00262524: nop

L_00262528:
    // 0x00262528: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x0026252C: nop

    // 0x00262530: bc1tl       L_00262538
    if (c1cs) {
        // 0x00262534: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_00262538;
    }
    goto skip_1;
    // 0x00262534: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_1:
L_00262538:
    // 0x00262538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026253C: lwc1        $f21, 0x7B80($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7B80);
    // 0x00262540: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x00262544: lw          $t0, 0x8($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X8);
    // 0x00262548: lw          $t1, 0xC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XC);
    // 0x0026254C: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    // 0x00262550: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
    // 0x00262554: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x00262558: jal         0x002671B4
    // 0x0026255C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x0026255C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00262560: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00262564: lwc1        $f1, 0xA4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x00262568: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026256C: swc1        $f1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00262570: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00262574: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x00262578: lw          $t1, 0xC($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC);
    // 0x0026257C: sw          $v1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r3;
    // 0x00262580: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x00262584: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
    // 0x00262588: jal         0x002671B4
    // 0x0026258C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002671B4(rdram, ctx);
        goto after_3;
    // 0x0026258C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00262590: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00262594: addiu       $s0, $sp, 0xC0
    ctx->r16 = ADD32(ctx->r29, 0XC0);
    // 0x00262598: lwc1        $f1, 0xB4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XB4);
    // 0x0026259C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002625A0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002625A4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x002625A8: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x002625AC: jal         0x0020EF2C
    // 0x002625B0: swc1        $f1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x002625B0: swc1        $f1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x002625B4: jal         0x0020F5C0
    // 0x002625B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F5C0(rdram, ctx);
        goto after_5;
    // 0x002625B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002625BC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x002625C0: lwc1        $f1, 0x44($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X44);
    // 0x002625C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002625C8: lwc1        $f0, 0x7B84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B84);
    // 0x002625CC: lwc1        $f20, 0x20($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002625D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002625D4: nop

    // 0x002625D8: bc1fl       L_00262618
    if (!c1cs) {
        // 0x002625DC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00262618;
    }
    goto skip_2;
    // 0x002625DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_2:
    // 0x002625E0: mul.s       $f0, $f1, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x002625E4: lwc1        $f1, 0xD0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XD0);
    // 0x002625E8: add.s       $f2, $f1, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x002625EC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x002625F0: nop

    // 0x002625F4: bc1tl       L_00262614
    if (c1cs) {
        // 0x002625F8: sub.s       $f20, $f0, $f1
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00262614;
    }
    goto skip_3;
    // 0x002625F8: sub.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x002625FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00262600: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00262604: nop

    // 0x00262608: bc1f        L_00262618
    if (!c1cs) {
        // 0x0026260C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00262618;
    }
    // 0x0026260C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00262610: sub.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f1.fl;
L_00262614:
    // 0x00262614: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00262618:
    // 0x00262618: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0026261C: lbu         $a2, 0x6C($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X6C);
    // 0x00262620: j           L_00262644
    // 0x00262624: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
        goto L_00262644;
    // 0x00262624: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
L_00262628:
    // 0x00262628: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0026262C:
    // 0x0026262C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_00262630:
    // 0x00262630: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00262634: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00262638: lwc1        $f0, 0xD0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x0026263C: lbu         $a2, 0x6D($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X6D);
    // 0x00262640: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
L_00262644:
    // 0x00262644: jal         0x00262150
    // 0x00262648: nop

    func_00262150(rdram, ctx);
        goto after_6;
    // 0x00262648: nop

    after_6:
    // 0x0026264C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00262650: lw          $a2, 0x40($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X40);
    // 0x00262654: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00262658: jal         0x00245BAC
    // 0x0026265C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00245BAC(rdram, ctx);
        goto after_7;
    // 0x0026265C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x00262660: lw          $a2, 0x40($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X40);
    // 0x00262664: lwc1        $f12, 0x10C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X10C);
    // 0x00262668: jal         0x00211774
    // 0x0026266C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_00211774(rdram, ctx);
        goto after_8;
    // 0x0026266C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_8:
    // 0x00262670: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x00262674: swc1        $f0, 0x10C($s4)
    MEM_W(0X10C, ctx->r20) = ctx->f0.u32l;
    // 0x00262678: lw          $ra, 0xF0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF0);
    // 0x0026267C: lw          $s5, 0xEC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XEC);
    // 0x00262680: lw          $s4, 0xE8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE8);
    // 0x00262684: lw          $s3, 0xE4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XE4);
    // 0x00262688: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x0026268C: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x00262690: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x00262694: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x00262698: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x0026269C: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x002626A0: jr          $ra
    // 0x002626A4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x002626A4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_00288780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288780: beq         $a0, $zero, L_00288790
    if (ctx->r4 == 0) {
        // 0x00288784: nop
    
            goto L_00288790;
    }
    // 0x00288784: nop

    // 0x00288788: bne         $a1, $zero, L_00288798
    if (ctx->r5 != 0) {
        // 0x0028878C: nop
    
            goto L_00288798;
    }
    // 0x0028878C: nop

L_00288790:
    // 0x00288790: jr          $ra
    // 0x00288794: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00288794: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00288798:
    // 0x00288798: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0028879C: beq         $v0, $zero, L_002887DC
    if (ctx->r2 == 0) {
        // 0x002887A0: nop
    
            goto L_002887DC;
    }
    // 0x002887A0: nop

L_002887A4:
    // 0x002887A4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x002887A8: beq         $v1, $zero, L_002887D0
    if (ctx->r3 == 0) {
        // 0x002887AC: andi        $a2, $v0, 0xFF
        ctx->r6 = ctx->r2 & 0XFF;
            goto L_002887D0;
    }
    // 0x002887AC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x002887B0: sltu        $v0, $a2, $v1
    ctx->r2 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x002887B4: bne         $v0, $zero, L_00288790
    if (ctx->r2 != 0) {
        // 0x002887B8: sltu        $v0, $v1, $a2
        ctx->r2 = ctx->r3 < ctx->r6 ? 1 : 0;
            goto L_00288790;
    }
    // 0x002887B8: sltu        $v0, $v1, $a2
    ctx->r2 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x002887BC: bne         $v0, $zero, L_002887F0
    if (ctx->r2 != 0) {
            // 0x002887C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_002887F0(rdram, ctx);
    return;
    }
    // 0x002887C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x002887C4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002887C8: bne         $v0, $zero, L_002887A4
    if (ctx->r2 != 0) {
        // 0x002887CC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002887A4;
    }
    // 0x002887CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_002887D0:
    // 0x002887D0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002887D4: bne         $v0, $zero, L_002887F8
    if (ctx->r2 != 0) {
            // 0x002887D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_002887F8(rdram, ctx);
    return;
    }
    // 0x002887D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002887DC:
    // 0x002887DC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x002887E0: bne         $v1, $zero, L_002887F8
    if (ctx->r3 != 0) {
            // 0x002887E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    func_002887F8(rdram, ctx);
    return;
    }
    // 0x002887E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002887E8: jr          $ra
    // 0x002887EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002887EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026CA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CA3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026CA40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026CA44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026CA48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026CA4C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0026CA50: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x0026CA54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026CA58: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0026CA5C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x0026CA60: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0026CA64: bne         $v1, $v0, L_0026CB14
    if (ctx->r3 != ctx->r2) {
        // 0x0026CA68: nop
    
            goto L_0026CB14;
    }
    // 0x0026CA68: nop

    // 0x0026CA6C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026CA70: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026CA74: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0026CA78: nop

    // 0x0026CA7C: bc1fl       L_0026CABC
    if (!c1cs) {
        // 0x0026CA80: swc1        $f20, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
            goto L_0026CABC;
    }
    goto skip_0;
    // 0x0026CA80: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    skip_0:
    // 0x0026CA84: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026CA88: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026CA8C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0026CA90: nop

    // 0x0026CA94: bc1f        L_0026CAB4
    if (!c1cs) {
        // 0x0026CA98: nop
    
            goto L_0026CAB4;
    }
    // 0x0026CA98: nop

    // 0x0026CA9C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026CAA0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026CAA4: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0026CAA8: nop

    // 0x0026CAAC: bc1t        L_0026CB14
    if (c1cs) {
        // 0x0026CAB0: nop
    
            goto L_0026CB14;
    }
    // 0x0026CAB0: nop

L_0026CAB4:
    // 0x0026CAB4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026CAB8: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
L_0026CABC:
    // 0x0026CABC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026CAC0: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0026CAC4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026CAC8: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x0026CACC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0026CAD0: beq         $a0, $zero, L_0026CAE4
    if (ctx->r4 == 0) {
        // 0x0026CAD4: nop
    
            goto L_0026CAE4;
    }
    // 0x0026CAD4: nop

    // 0x0026CAD8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0026CADC: jal         0x0026CA3C
    // 0x0026CAE0: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    func_0026CA3C(rdram, ctx);
        goto after_0;
    // 0x0026CAE0: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    after_0:
L_0026CAE4:
    // 0x0026CAE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0026CAE8: beq         $a0, $zero, L_0026CAFC
    if (ctx->r4 == 0) {
        // 0x0026CAEC: nop
    
            goto L_0026CAFC;
    }
    // 0x0026CAEC: nop

    // 0x0026CAF0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0026CAF4: jal         0x0026CA3C
    // 0x0026CAF8: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    func_0026CA3C(rdram, ctx);
        goto after_1;
    // 0x0026CAF8: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    after_1:
L_0026CAFC:
    // 0x0026CAFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0026CB00: beq         $a0, $zero, L_0026CB14
    if (ctx->r4 == 0) {
        // 0x0026CB04: nop
    
            goto L_0026CB14;
    }
    // 0x0026CB04: nop

    // 0x0026CB08: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0026CB0C: jal         0x0026CA3C
    // 0x0026CB10: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    func_0026CA3C(rdram, ctx);
        goto after_2;
    // 0x0026CB10: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    after_2:
L_0026CB14:
    // 0x0026CB14: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026CB18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026CB1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026CB20: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0026CB24: jr          $ra
    // 0x0026CB28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026CB28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045C050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C050: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C054: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x0045C058: bne         $v0, $zero, L_0045C090
    if (ctx->r2 != 0) {
        // 0x0045C05C: nop
    
            goto L_0045C090;
    }
    // 0x0045C05C: nop

    // 0x0045C060: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C064: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x0045C068: beq         $v0, $zero, L_0045C090
    if (ctx->r2 == 0) {
        // 0x0045C06C: nop
    
            goto L_0045C090;
    }
    // 0x0045C06C: nop

    // 0x0045C070: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0045C074: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0045C078: beq         $v0, $zero, L_0045C090
    if (ctx->r2 == 0) {
        // 0x0045C07C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045C090;
    }
    // 0x0045C07C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C080: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C084: sw          $v0, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r2;
    // 0x0045C088: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C08C: sw          $v0, 0x940($at)
    MEM_W(0X940, ctx->r1) = ctx->r2;
L_0045C090:
    // 0x0045C090: jr          $ra
    // 0x0045C094: nop

    return;
    // 0x0045C094: nop

;}
RECOMP_FUNC void func_00412E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412E4C: sra         $v1, $a1, 3
    ctx->r3 = S32(SIGNED(ctx->r5) >> 3);
    // 0x00412E50: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x00412E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00412E58: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00412E5C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00412E60: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00412E64: jr          $ra
    // 0x00412E68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    return;
    // 0x00412E68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
;}
RECOMP_FUNC void func_00258C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258C50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00258C54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00258C58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00258C5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258C60: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00258C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00258C68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00258C6C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00258C70: lw          $s1, 0x1A8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1A8);
    // 0x00258C74: beq         $v0, $zero, L_00258D54
    if (ctx->r2 == 0) {
        // 0x00258C78: nop
    
            goto L_00258D54;
    }
    // 0x00258C78: nop

    // 0x00258C7C: lwc1        $f1, 0x118($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X118);
    // 0x00258C80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00258C84: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00258C88: nop

    // 0x00258C8C: bc1f        L_00258D3C
    if (!c1cs) {
        // 0x00258C90: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00258D3C;
    }
    // 0x00258C90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258C94: lh          $a1, 0x996($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X996);
    // 0x00258C98: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00258C9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258CA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258CA4: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258CA8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00258CAC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00258CB0: beql        $v0, $zero, L_00258D40
    if (ctx->r2 == 0) {
        // 0x00258CB4: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00258D40;
    }
    goto skip_0;
    // 0x00258CB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00258CB8: jal         0x0024E700
    // 0x00258CBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00258CBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00258CC0: beq         $v0, $zero, L_00258D3C
    if (ctx->r2 == 0) {
        // 0x00258CC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00258D3C;
    }
    // 0x00258CC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258CC8: jal         0x00257EA0
    // 0x00258CCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00257EA0(rdram, ctx);
        goto after_1;
    // 0x00258CCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00258CD0: beq         $v0, $zero, L_00258D3C
    if (ctx->r2 == 0) {
        // 0x00258CD4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00258D3C;
    }
    // 0x00258CD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00258CD8: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x00258CDC: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00258CE0: beq         $v0, $zero, L_00258D40
    if (ctx->r2 == 0) {
        // 0x00258CE4: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00258D40;
    }
    // 0x00258CE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00258CE8: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x00258CEC: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00258CF0: bne         $v0, $zero, L_00258D40
    if (ctx->r2 != 0) {
        // 0x00258CF4: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_00258D40;
    }
    // 0x00258CF4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00258CF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00258CFC: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x00258D00: sb          $v0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r2;
    // 0x00258D04: jal         0x00243414
    // 0x00258D08: sb          $v0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00258D08: sb          $v0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r2;
    after_2:
    // 0x00258D0C: lw          $v0, 0x1A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1A8);
    // 0x00258D10: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x00258D14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258D18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258D1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258D20: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258D24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258D28: lwc1        $f1, 0x7298($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7298);
    // 0x00258D2C: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00258D30: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00258D34: j           L_00258D48
    // 0x00258D38: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
        goto L_00258D48;
    // 0x00258D38: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
L_00258D3C:
    // 0x00258D3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00258D40:
    // 0x00258D40: jal         0x00243414
    // 0x00258D44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00258D44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
L_00258D48:
    // 0x00258D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00258D4C: sw          $v0, 0xB2C($s1)
    MEM_W(0XB2C, ctx->r17) = ctx->r2;
    // 0x00258D50: sw          $zero, 0xB30($s1)
    MEM_W(0XB30, ctx->r17) = 0;
L_00258D54:
    // 0x00258D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00258D58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00258D5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258D60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258D64: jr          $ra
    // 0x00258D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00258D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045290C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045290C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452910: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00452914: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00452918: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045291C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452920: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00452924: addiu       $s0, $s0, -0x5510
    ctx->r16 = ADD32(ctx->r16, -0X5510);
    // 0x00452928: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0045292C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00452930: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452934: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00452938: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0045293C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00452940: jal         0x0041648C
    // 0x00452944: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00452944: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00452948: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0045294C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452950: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00452954: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452958: jr          $ra
    // 0x0045295C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045295C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00267FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267FA0: jr          $ra
    // 0x00267FA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267FA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00402D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402D2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00402D30: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00402D34: beq         $v0, $zero, L_00402D44
    if (ctx->r2 == 0) {
        // 0x00402D38: nop
    
            goto L_00402D44;
    }
    // 0x00402D38: nop

    // 0x00402D3C: jal         0x00243414
    // 0x00402D40: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00402D40: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
L_00402D44:
    // 0x00402D44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00402D48: jr          $ra
    // 0x00402D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045582C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C89C:
    // 0x0045582C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455830: lw          $v0, -0x551C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X551C);
    // 0x00455834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455838: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045583C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455840: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455844: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455848: jal         0x00206078
    // 0x0045584C: srl         $s1, $v0, 4
    ctx->r17 = S32(U32(ctx->r2) >> 4);
    func_00206078(rdram, ctx);
        goto after_0;
    // 0x0045584C: srl         $s1, $v0, 4
    ctx->r17 = S32(U32(ctx->r2) >> 4);
    after_0:
    // 0x00455850: jal         0x00206068
    // 0x00455854: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    func_00206068(rdram, ctx);
        goto after_1;
    // 0x00455854: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    after_1:
    // 0x00455858: bnel        $s1, $zero, L_00455870
    if (ctx->r17 != 0) {
        // 0x0045585C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00455870;
    }
    goto skip_0;
    // 0x0045585C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00455860: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455864: addiu       $v0, $v0, 0x4158
    ctx->r2 = ADD32(ctx->r2, 0X4158);
    // 0x00455868: j           L_0041C89C
    // 0x0045586C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_0041C89C(rdram, ctx);
    return;
    // 0x0045586C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00455870:
    // 0x00455870: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455874: addiu       $v0, $v0, 0x4170
    ctx->r2 = ADD32(ctx->r2, 0X4170);
    // 0x00455878: jal         0x004160F0
    // 0x0045587C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x0045587C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_2:
    // 0x00455880: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00455884: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455888: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0045588C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00455890: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00455894: jal         0x0029E3E0
    // 0x00455898: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00455898: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x0045589C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004558A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004558A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004558A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004558AC: jr          $ra
    // 0x004558B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004558B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00220A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220A1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00220A20: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x00220A24: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00220A28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00220A2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00220A30: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00220A34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00220A38: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x00220A3C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00220A40: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00220A44: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00220A48: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00220A4C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00220A50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00220A54: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x00220A58: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00220A5C: bne         $v0, $zero, L_00220A6C
    if (ctx->r2 != 0) {
        // 0x00220A60: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_00220A6C;
    }
    // 0x00220A60: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00220A64: j           L_00220BB8
    // 0x00220A68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00220BB8;
    // 0x00220A68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00220A6C:
    // 0x00220A6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00220A70: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00220A74: addu        $s6, $s3, $zero
    ctx->r22 = ADD32(ctx->r19, 0);
    // 0x00220A78: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x00220A7C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00220A80: jal         0x002017D4
    // 0x00220A84: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00220A84: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00220A88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00220A8C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x00220A90: jal         0x002017D4
    // 0x00220A94: addiu       $fp, $v0, 0x8
    ctx->r30 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00220A94: addiu       $fp, $v0, 0x8
    ctx->r30 = ADD32(ctx->r2, 0X8);
    after_1:
    // 0x00220A98: lw          $s7, 0x4($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X4);
    // 0x00220A9C: blez        $s7, L_00220BB4
    if (SIGNED(ctx->r23) <= 0) {
        // 0x00220AA0: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00220BB4;
    }
    // 0x00220AA0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00220AA4: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x00220AA8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00220AAC:
    // 0x00220AAC: lwc1        $f1, 0x0($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X0);
    // 0x00220AB0: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00220AB4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00220AB8: nop

    // 0x00220ABC: bc1f        L_00220B98
    if (!c1cs) {
        // 0x00220AC0: nop
    
            goto L_00220B98;
    }
    // 0x00220AC0: nop

    // 0x00220AC4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00220AC8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00220ACC: nop

    // 0x00220AD0: bc1f        L_00220B98
    if (!c1cs) {
        // 0x00220AD4: nop
    
            goto L_00220B98;
    }
    // 0x00220AD4: nop

    // 0x00220AD8: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x00220ADC: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00220AE0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00220AE4: nop

    // 0x00220AE8: bc1f        L_00220B98
    if (!c1cs) {
        // 0x00220AEC: nop
    
            goto L_00220B98;
    }
    // 0x00220AEC: nop

    // 0x00220AF0: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00220AF4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00220AF8: nop

    // 0x00220AFC: bc1f        L_00220B98
    if (!c1cs) {
        // 0x00220B00: nop
    
            goto L_00220B98;
    }
    // 0x00220B00: nop

    // 0x00220B04: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00220B08: beq         $v0, $zero, L_00220BA0
    if (ctx->r2 == 0) {
        // 0x00220B0C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00220BA0;
    }
    // 0x00220B0C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00220B10: sll         $v0, $s3, 5
    ctx->r2 = S32(ctx->r19 << 5);
    // 0x00220B14: addu        $s0, $v0, $fp
    ctx->r16 = ADD32(ctx->r2, ctx->r30);
L_00220B18:
    // 0x00220B18: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x00220B1C: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x00220B20: jal         0x0026BB9C
    // 0x00220B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BB9C(rdram, ctx);
        goto after_2;
    // 0x00220B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00220B28: beql        $v0, $zero, L_00220B7C
    if (ctx->r2 == 0) {
        // 0x00220B2C: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_00220B7C;
    }
    goto skip_0;
    // 0x00220B2C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    skip_0:
    // 0x00220B30: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x00220B34: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x00220B38: jal         0x0026BE60
    // 0x00220B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BE60(rdram, ctx);
        goto after_3;
    // 0x00220B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00220B40: lwc1        $f1, 0x4($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X4);
    // 0x00220B44: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00220B48: c.lt.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl < ctx->f21.fl;
    // 0x00220B4C: nop

    // 0x00220B50: bc1tl       L_00220B58
    if (c1cs) {
        // 0x00220B54: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_00220B58;
    }
    goto skip_1;
    // 0x00220B54: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_1:
L_00220B58:
    // 0x00220B58: beql        $s5, $zero, L_00220B74
    if (ctx->r21 == 0) {
        // 0x00220B5C: addu        $s5, $s0, $zero
        ctx->r21 = ADD32(ctx->r16, 0);
            goto L_00220B74;
    }
    goto skip_2;
    // 0x00220B5C: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    skip_2:
    // 0x00220B60: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00220B64: nop

    // 0x00220B68: bc1fl       L_00220B7C
    if (!c1cs) {
        // 0x00220B6C: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_00220B7C;
    }
    goto skip_3;
    // 0x00220B6C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    skip_3:
    // 0x00220B70: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_00220B74:
    // 0x00220B74: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
    // 0x00220B78: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_00220B7C:
    // 0x00220B7C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00220B80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00220B84: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x00220B88: bne         $v0, $zero, L_00220B18
    if (ctx->r2 != 0) {
        // 0x00220B8C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00220B18;
    }
    // 0x00220B8C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00220B90: j           L_00220BA4
    // 0x00220B94: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
        goto L_00220BA4;
    // 0x00220B94: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_00220B98:
    // 0x00220B98: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00220B9C: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_00220BA0:
    // 0x00220BA0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_00220BA4:
    // 0x00220BA4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00220BA8: slt         $v0, $s6, $s7
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x00220BAC: bne         $v0, $zero, L_00220AAC
    if (ctx->r2 != 0) {
        // 0x00220BB0: nop
    
            goto L_00220AAC;
    }
    // 0x00220BB0: nop

L_00220BB4:
    // 0x00220BB4: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_00220BB8:
    // 0x00220BB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00220BBC: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00220BC0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00220BC4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00220BC8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00220BCC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00220BD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00220BD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00220BD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00220BDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00220BE0: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00220BE4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00220BE8: jr          $ra
    // 0x00220BEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00220BEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00227664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227664: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00227668: addiu       $v0, $v0, 0x1360
    ctx->r2 = ADD32(ctx->r2, 0X1360);
    // 0x0022766C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00227670: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00227674: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x00227678: jr          $ra
    // 0x0022767C: sw          $zero, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = 0;
    return;
    // 0x0022767C: sw          $zero, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0025AA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AA20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AA24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AA28: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AA2C: lhu         $a3, 0x90($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X90);
    // 0x0025AA30: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AA34: addiu       $a2, $a2, 0x330
    ctx->r6 = ADD32(ctx->r6, 0X330);
    // 0x0025AA38: jal         0x00245A98
    // 0x0025AA3C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AA3C: nop

    after_0:
    // 0x0025AA40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AA44: jr          $ra
    // 0x0025AA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A7B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A7BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A7C0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A7C4: lhu         $a3, 0x86($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X86);
    // 0x0025A7C8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A7CC: addiu       $a2, $a2, 0x68
    ctx->r6 = ADD32(ctx->r6, 0X68);
    // 0x0025A7D0: jal         0x00245A98
    // 0x0025A7D4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A7D4: nop

    after_0:
    // 0x0025A7D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A7DC: jr          $ra
    // 0x0025A7E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A7E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00281B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281B14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00281B18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00281B1C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00281B20: addiu       $a0, $a1, 0xE28
    ctx->r4 = ADD32(ctx->r5, 0XE28);
    // 0x00281B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281B28: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00281B2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00281B30: jal         0x00200738
    // 0x00281B34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00281B34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00281B38: addiu       $a0, $s1, 0xF0C
    ctx->r4 = ADD32(ctx->r17, 0XF0C);
    // 0x00281B3C: jal         0x00200518
    // 0x00281B40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00281B40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00281B44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00281B48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281B4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281B50: jr          $ra
    // 0x00281B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00281B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023EF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023EF64: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0023EF68: addiu       $v1, $v1, -0x2B68
    ctx->r3 = ADD32(ctx->r3, -0X2B68);
    // 0x0023EF6C: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x0023EF70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_0023EF74:
    // 0x0023EF74: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x0023EF78: bne         $v0, $a0, L_0023EF88
    if (ctx->r2 != ctx->r4) {
        // 0x0023EF7C: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0023EF88;
    }
    // 0x0023EF7C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0023EF80: jr          $ra
    // 0x0023EF84: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0023EF84: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0023EF88:
    // 0x0023EF88: bne         $a1, $a2, L_0023EF74
    if (ctx->r5 != ctx->r6) {
        // 0x0023EF8C: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_0023EF74;
    }
    // 0x0023EF8C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x0023EF90: jr          $ra
    // 0x0023EF94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023EF94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00201E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201E94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00201E98: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00201E9C: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x00201EA0: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x00201EA4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00201EA8: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x00201EAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00201EB0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00201EB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00201EB8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00201EBC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00201EC0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00201EC4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00201EC8: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00201ECC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00201ED0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00201ED4: beq         $v0, $zero, L_00201F18
    if (ctx->r2 == 0) {
        // 0x00201ED8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00201F18;
    }
    // 0x00201ED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00201EDC: jal         0x0020205C
    // 0x00201EE0: nop

    func_0020205C(rdram, ctx);
        goto after_0;
    // 0x00201EE0: nop

    after_0:
    // 0x00201EE4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00201EE8: beq         $s0, $zero, L_00201F90
    if (ctx->r16 == 0) {
        // 0x00201EEC: addiu       $a0, $s2, 0x230
        ctx->r4 = ADD32(ctx->r18, 0X230);
            goto L_00201F90;
    }
    // 0x00201EEC: addiu       $a0, $s2, 0x230
    ctx->r4 = ADD32(ctx->r18, 0X230);
    // 0x00201EF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00201EF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00201EF8: sw          $s4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r20;
    // 0x00201EFC: sw          $s5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r21;
    // 0x00201F00: sw          $s3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r19;
    // 0x00201F04: sw          $s7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r23;
    // 0x00201F08: jal         0x0029B5B0
    // 0x00201F0C: sw          $s6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r22;
    osJamMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x00201F0C: sw          $s6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r22;
    after_1:
    // 0x00201F10: j           L_00201F90
    // 0x00201F14: nop

        goto L_00201F90;
    // 0x00201F14: nop

L_00201F18:
    // 0x00201F18: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
L_00201F1C:
    // 0x00201F1C: jal         0x0020205C
    // 0x00201F20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0020205C(rdram, ctx);
        goto after_2;
    // 0x00201F20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00201F24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00201F28: beq         $s0, $zero, L_00201F90
    if (ctx->r16 == 0) {
        // 0x00201F2C: addiu       $a0, $zero, 0x2000
        ctx->r4 = ADD32(0, 0X2000);
            goto L_00201F90;
    }
    // 0x00201F2C: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    // 0x00201F30: subu        $v0, $s3, $s1
    ctx->r2 = SUB32(ctx->r19, ctx->r17);
    // 0x00201F34: addu        $v1, $s4, $v0
    ctx->r3 = ADD32(ctx->r20, ctx->r2);
    // 0x00201F38: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00201F3C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00201F40: sltiu       $v0, $s1, 0x2001
    ctx->r2 = ctx->r17 < 0X2001 ? 1 : 0;
    // 0x00201F44: beq         $v0, $zero, L_00201F50
    if (ctx->r2 == 0) {
        // 0x00201F48: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_00201F50;
    }
    // 0x00201F48: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00201F4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00201F50:
    // 0x00201F50: subu        $s1, $s1, $a0
    ctx->r17 = SUB32(ctx->r17, ctx->r4);
    // 0x00201F54: beq         $s1, $zero, L_00201F68
    if (ctx->r17 == 0) {
        // 0x00201F58: sw          $a0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r4;
            goto L_00201F68;
    }
    // 0x00201F58: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    // 0x00201F5C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00201F60: j           L_00201F70
    // 0x00201F64: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
        goto L_00201F70;
    // 0x00201F64: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
L_00201F68:
    // 0x00201F68: sw          $s7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r23;
    // 0x00201F6C: sw          $s6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r22;
L_00201F70:
    // 0x00201F70: addiu       $a0, $s2, 0x230
    ctx->r4 = ADD32(ctx->r18, 0X230);
    // 0x00201F74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00201F78: jal         0x0029B820
    // 0x00201F7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00201F7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00201F80: beq         $s0, $zero, L_00201F90
    if (ctx->r16 == 0) {
        // 0x00201F84: nop
    
            goto L_00201F90;
    }
    // 0x00201F84: nop

    // 0x00201F88: bne         $s1, $zero, L_00201F1C
    if (ctx->r17 != 0) {
        // 0x00201F8C: nop
    
            goto L_00201F1C;
    }
    // 0x00201F8C: nop

L_00201F90:
    // 0x00201F90: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00201F94: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00201F98: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00201F9C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00201FA0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00201FA4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00201FA8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00201FAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00201FB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00201FB4: jr          $ra
    // 0x00201FB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00201FB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00447B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447B34: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00447B38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00447B3C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00447B40: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447B44: jal         0x002535E4
    // 0x00447B48: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00447B48: nop

    after_0:
    // 0x00447B4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00447B50: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00447B54: jal         0x00225D0C
    // 0x00447B58: nop

    func_00225D0C(rdram, ctx);
        goto after_1;
    // 0x00447B58: nop

    after_1:
    // 0x00447B5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447B60: jr          $ra
    // 0x00447B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004216C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004216C0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004216C4: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x004216C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004216CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004216D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004216D4: bne         $v0, $zero, L_00421788
    if (ctx->r2 != 0) {
        // 0x004216D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00421788;
    }
    // 0x004216D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004216DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004216E0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004216E4: beq         $v0, $zero, L_004216FC
    if (ctx->r2 == 0) {
        // 0x004216E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004216FC;
    }
    // 0x004216E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004216EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004216F0: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x004216F4: j           L_00421708
    // 0x004216F8: nop

        goto L_00421708;
    // 0x004216F8: nop

L_004216FC:
    // 0x004216FC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421700: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x00421704: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00421708:
    // 0x00421708: beq         $v1, $v0, L_00421788
    if (ctx->r3 == ctx->r2) {
        // 0x0042170C: nop
    
            goto L_00421788;
    }
    // 0x0042170C: nop

    // 0x00421710: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421714: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421718: beq         $v0, $zero, L_00421730
    if (ctx->r2 == 0) {
        // 0x0042171C: nop
    
            goto L_00421730;
    }
    // 0x0042171C: nop

    // 0x00421720: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00421724: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00421728: j           L_00421738
    // 0x0042172C: nop

        goto L_00421738;
    // 0x0042172C: nop

L_00421730:
    // 0x00421730: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421734: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_00421738:
    // 0x00421738: jal         0x0028591C
    // 0x0042173C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0042173C: nop

    after_0:
    // 0x00421740: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x00421744: nop
    
            goto L_00421788;
    }
    // 0x00421744: nop

    // 0x00421748: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042174C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421750: beq         $v0, $zero, L_00421768
    if (ctx->r2 == 0) {
        // 0x00421754: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421768;
    }
    // 0x00421754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421758: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042175C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421760: j           L_00421770
    // 0x00421764: nop

        goto L_00421770;
    // 0x00421764: nop

L_00421768:
    // 0x00421768: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0042176C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421770:
    // 0x00421770: jal         0x0041DD90
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00421778: beq         $v0, $zero, L_00421788
    if (ctx->r2 == 0) {
        // 0x0042177C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421788;
    }
    // 0x0042177C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421784: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421788:
    // 0x00421788: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042178C: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x00421790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00421794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421798: jr          $ra
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002941FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002941FC: lb          $v1, 0x54($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X54);
;}
RECOMP_FUNC void func_00444D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444D60: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444D64: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444D68: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444D6C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00444D70: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444D74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00444D78: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x00444D7C: sdc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA8, ctx->r29);
    // 0x00444D80: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00444D84: jal         0x00246108
    // 0x00444D88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444D88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00444D8C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x00444D90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00444D94: lwc1        $f20, 0x894($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X894);
    // 0x00444D98: beq         $a0, $zero, L_00444DB8
    if (ctx->r4 == 0) {
        // 0x00444D9C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00444DB8;
    }
    // 0x00444D9C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00444DA0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00444DA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00444DA8: beq         $v0, $zero, L_00444DBC
    if (ctx->r2 == 0) {
        // 0x00444DAC: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_00444DBC;
    }
    // 0x00444DAC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x00444DB0: lwc1        $f20, 0x9C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x00444DB4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_00444DB8:
    // 0x00444DB8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_00444DBC:
    // 0x00444DBC: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x00444DC0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444DC4: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00444DC8: jr          $ra
    // 0x00444DCC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444DCC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0045078C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417870:
    // 0x0045078C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_004178E4:
    // 0x00450790: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00450794: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x00450798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045079C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004507A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004507A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004507A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004507AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004507B0: sw          $zero, -0x531C($at)
    MEM_W(-0X531C, ctx->r1) = 0;
    // 0x004507B4: lb          $v1, 0x2A($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2A);
    // 0x004507B8: addiu       $a1, $a0, 0x1D8
    ctx->r5 = ADD32(ctx->r4, 0X1D8);
    // 0x004507BC: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x004507C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004507C4: sw          $zero, -0x5334($at)
    MEM_W(-0X5334, ctx->r1) = 0;
    // 0x004507C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004507CC: sw          $zero, -0x5324($at)
    MEM_W(-0X5324, ctx->r1) = 0;
    // 0x004507D0: lb          $v0, 0x2B($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2B);
    // 0x004507D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004507D8: lwc1        $f1, 0xEA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XEA8);
    // 0x004507DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004507E0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x004507E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004507E8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004507EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004507F0: sw          $zero, -0x5320($at)
    MEM_W(-0X5320, ctx->r1) = 0;
    // 0x004507F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004507F8: sw          $zero, -0x5328($at)
    MEM_W(-0X5328, ctx->r1) = 0;
    // 0x004507FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450800: sw          $zero, -0x5330($at)
    MEM_W(-0X5330, ctx->r1) = 0;
    // 0x00450804: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450808: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x0045080C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00450810: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450814: swc1        $f0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->f0.u32l;
    // 0x00450818: lb          $s2, 0x2C($a0)
    ctx->r18 = MEM_B(ctx->r4, 0X2C);
    // 0x0045081C: bc1f        L_00450830
    if (!c1cs) {
        // 0x00450820: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_00450830;
    }
    // 0x00450820: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00450824: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00450828: lwc1        $f0, 0xEAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XEAC);
    // 0x0045082C: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
L_00450830:
    // 0x00450830: addiu       $v0, $a0, 0xC0
    ctx->r2 = ADD32(ctx->r4, 0XC0);
L_00450834:
    // 0x00450834: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x00450838: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0045083C: bgez        $s0, L_00450834
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00450840: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00450834;
    }
    // 0x00450840: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00450844: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00450848: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0045084C: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00450850:
    // 0x00450850: jal         0x002855E8
    // 0x00450854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00450854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00450858: bne         $v0, $zero, L_0045088C
    if (ctx->r2 != 0) {
        // 0x0045085C: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_0045088C;
    }
    // 0x0045085C: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x00450860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00450864: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00450868: bne         $v0, $zero, L_00450850
    if (ctx->r2 != 0) {
        // 0x0045086C: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00450850;
    }
    // 0x0045086C: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x00450870: beq         $s2, $zero, L_004508A8
    if (ctx->r18 == 0) {
        // 0x00450874: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_004508A8;
    }
    // 0x00450874: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x00450878: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x0045087C: beq         $v0, $zero, L_004508A8
    if (ctx->r2 == 0) {
        // 0x00450880: addiu       $a1, $s2, 0x2328
        ctx->r5 = ADD32(ctx->r18, 0X2328);
            goto L_004508A8;
    }
    // 0x00450880: addiu       $a1, $s2, 0x2328
    ctx->r5 = ADD32(ctx->r18, 0X2328);
    // 0x00450884: j           L_004178E4
    // 0x00450888: nop

    entry_004178E4(rdram, ctx);
    return;
    // 0x00450888: nop

L_0045088C:
    // 0x0045088C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00450890: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00450894: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00450898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045089C: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x004508A0: j           L_00417870
    // 0x004508A4: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
    entry_00417870(rdram, ctx);
    return;
    // 0x004508A4: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_004508A8:
    // 0x004508A8: jal         0x002113A4
    // 0x004508AC: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x004508AC: nop

    after_1:
    // 0x004508B0: lui         $v1, 0x4EC4
    ctx->r3 = S32(0X4EC4 << 16);
    // 0x004508B4: ori         $v1, $v1, 0xEC4F
    ctx->r3 = ctx->r3 | 0XEC4F;
    // 0x004508B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004508BC: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004508C0: mfhi        $a2
    ctx->r6 = hi;
    // 0x004508C4: sra         $a0, $a2, 2
    ctx->r4 = S32(SIGNED(ctx->r6) >> 2);
    // 0x004508C8: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x004508CC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x004508D0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004508D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004508D8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004508DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004508E0: addiu       $a1, $v0, 0x2329
    ctx->r5 = ADD32(ctx->r2, 0X2329);
    // 0x004508E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004508E8: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004508EC: jal         0x00430374
    // 0x004508F0: nop

    func_00430374(rdram, ctx);
        goto after_2;
    // 0x004508F0: nop

    after_2:
    // 0x004508F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004508F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004508FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00450900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00450908: jr          $ra
    // 0x0045090C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045090C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00250EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00250EC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00250EC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00250EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00250ECC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00250ED0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00250ED4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00250ED8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00250EDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00250EE0: sdc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X48, ctx->r29);
    // 0x00250EE4: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x00250EE8: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00250EEC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00250EF0: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x00250EF4: jal         0x0026AFC0
    // 0x00250EF8: nop

    func_0026AFC0(rdram, ctx);
        goto after_0;
    // 0x00250EF8: nop

    after_0:
    // 0x00250EFC: beql        $v0, $zero, L_00250F18
    if (ctx->r2 == 0) {
        // 0x00250F00: sw          $zero, 0xAC8($s0)
        MEM_W(0XAC8, ctx->r16) = 0;
            goto L_00250F18;
    }
    goto skip_0;
    // 0x00250F00: sw          $zero, 0xAC8($s0)
    MEM_W(0XAC8, ctx->r16) = 0;
    skip_0:
    // 0x00250F04: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x00250F08: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00250F0C: bne         $v0, $zero, L_00250F30
    if (ctx->r2 != 0) {
        // 0x00250F10: nop
    
            goto L_00250F30;
    }
    // 0x00250F10: nop

    // 0x00250F14: sw          $zero, 0xAC8($s0)
    MEM_W(0XAC8, ctx->r16) = 0;
L_00250F18:
    // 0x00250F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250F1C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00250F20: jal         0x0024E5F0
    // 0x00250F24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x00250F24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x00250F28: j           L_0025166C
    // 0x00250F2C: nop

        goto L_0025166C;
    // 0x00250F2C: nop

L_00250F30:
    // 0x00250F30: lw          $a1, 0x10($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X10);
    // 0x00250F34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00250F38: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00250F3C: jal         0x0022425C
    // 0x00250F40: nop

    func_0022425C(rdram, ctx);
        goto after_2;
    // 0x00250F40: nop

    after_2:
    // 0x00250F44: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x00250F48: jal         0x0026C434
    // 0x00250F4C: nop

    func_0026C434(rdram, ctx);
        goto after_3;
    // 0x00250F4C: nop

    after_3:
    // 0x00250F50: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00250F54: jal         0x00210E64
    // 0x00250F58: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_00210E64(rdram, ctx);
        goto after_4;
    // 0x00250F58: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_4:
    // 0x00250F5C: lwc1        $f1, 0x50($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X50);
    // 0x00250F60: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00250F64: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x00250F68: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x00250F6C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00250F70: jal         0x002117DC
    // 0x00250F74: addiu       $a0, $s3, 0x50
    ctx->r4 = ADD32(ctx->r19, 0X50);
    func_002117DC(rdram, ctx);
        goto after_5;
    // 0x00250F74: addiu       $a0, $s3, 0x50
    ctx->r4 = ADD32(ctx->r19, 0X50);
    after_5:
    // 0x00250F78: lwc1        $f1, 0xA54($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA54);
    // 0x00250F7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250F80: lwc1        $f0, 0x6F7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F7C);
    // 0x00250F84: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00250F88: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00250F8C: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00250F90: jal         0x002117DC
    // 0x00250F94: addiu       $a0, $s0, 0xACC
    ctx->r4 = ADD32(ctx->r16, 0XACC);
    func_002117DC(rdram, ctx);
        goto after_6;
    // 0x00250F94: addiu       $a0, $s0, 0xACC
    ctx->r4 = ADD32(ctx->r16, 0XACC);
    after_6:
    // 0x00250F98: lwc1        $f0, 0xA58($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA58);
    // 0x00250F9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250FA0: lwc1        $f1, 0x6F80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6F80);
    // 0x00250FA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00250FA8: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00250FAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00250FB0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00250FB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250FB8: lwc1        $f0, 0x6F84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F84);
    // 0x00250FBC: bc1f        L_00250FCC
    if (!c1cs) {
        // 0x00250FC0: nop
    
            goto L_00250FCC;
    }
    // 0x00250FC0: nop

    // 0x00250FC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250FC8: lwc1        $f0, 0x6F88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F88);
L_00250FCC:
    // 0x00250FCC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00250FD0: lwc1        $f1, 0xA54($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA54);
    // 0x00250FD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250FD8: lwc1        $f0, 0x6F8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F8C);
    // 0x00250FDC: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00250FE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00250FE4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00250FE8: nop

    // 0x00250FEC: bc1f        L_00251004
    if (!c1cs) {
        // 0x00250FF0: nop
    
            goto L_00251004;
    }
    // 0x00250FF0: nop

    // 0x00250FF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250FF8: lwc1        $f1, 0x6F90($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6F90);
    // 0x00250FFC: j           L_0025100C
    // 0x00251000: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_0025100C;
    // 0x00251000: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_00251004:
    // 0x00251004: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251008: lwc1        $f0, 0x6F94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F94);
L_0025100C:
    // 0x0025100C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00251010: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00251014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251018: lwc1        $f0, 0x6F98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F98);
    // 0x0025101C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00251020: jal         0x00268B50
    // 0x00251024: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    func_00268B50(rdram, ctx);
        goto after_7;
    // 0x00251024: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    after_7:
    // 0x00251028: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x0025102C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00251030: c.lt.s      $f21, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f21.fl < ctx->f23.fl;
    // 0x00251034: nop

    // 0x00251038: bc1tl       L_00251040
    if (c1cs) {
        // 0x0025103C: mov.s       $f21, $f23
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    ctx->f21.fl = ctx->f23.fl;
            goto L_00251040;
    }
    goto skip_1;
    // 0x0025103C: mov.s       $f21, $f23
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    ctx->f21.fl = ctx->f23.fl;
    skip_1:
L_00251040:
    // 0x00251040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251044: lwc1        $f0, 0x6F9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F9C);
    // 0x00251048: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x0025104C: nop

    // 0x00251050: bc1t        L_0025105C
    if (c1cs) {
        // 0x00251054: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0025105C;
    }
    // 0x00251054: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00251058: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0025105C:
    // 0x0025105C: jal         0x00268B98
    // 0x00251060: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00268B98(rdram, ctx);
        goto after_8;
    // 0x00251060: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x00251064: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x00251068: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x0025106C: nop

    // 0x00251070: bc1tl       L_00251078
    if (c1cs) {
        // 0x00251074: mov.s       $f22, $f23
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
            goto L_00251078;
    }
    goto skip_2;
    // 0x00251074: mov.s       $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
    skip_2:
L_00251078:
    // 0x00251078: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025107C: lwc1        $f0, 0x6FA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FA0);
    // 0x00251080: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00251084: nop

    // 0x00251088: bc1t        L_00251094
    if (c1cs) {
        // 0x0025108C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00251094;
    }
    // 0x0025108C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00251090: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_00251094:
    // 0x00251094: beq         $s1, $zero, L_00251110
    if (ctx->r17 == 0) {
        // 0x00251098: nop
    
            goto L_00251110;
    }
    // 0x00251098: nop

    // 0x0025109C: beq         $s2, $zero, L_002510BC
    if (ctx->r18 == 0) {
        // 0x002510A0: nop
    
            goto L_002510BC;
    }
    // 0x002510A0: nop

    // 0x002510A4: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x002510A8: nop

    // 0x002510AC: bc1fl       L_002510BC
    if (!c1cs) {
        // 0x002510B0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002510BC;
    }
    goto skip_3;
    // 0x002510B0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_3:
    // 0x002510B4: j           L_002510C4
    // 0x002510B8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_002510C4;
    // 0x002510B8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_002510BC:
    // 0x002510BC: beq         $s1, $zero, L_00251110
    if (ctx->r17 == 0) {
        // 0x002510C0: nop
    
            goto L_00251110;
    }
    // 0x002510C0: nop

L_002510C4:
    // 0x002510C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002510C8: lwc1        $f0, 0x6FA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FA4);
    // 0x002510CC: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x002510D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002510D4: lwc1        $f12, 0x6FA8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6FA8);
    // 0x002510D8: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x002510DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002510E0: lwc1        $f0, 0x6FAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FAC);
    // 0x002510E4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x002510E8: jal         0x002974C0
    // 0x002510EC: nop

    func_002974C0(rdram, ctx);
        goto after_9;
    // 0x002510EC: nop

    after_9:
    // 0x002510F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002510F4: lwc1        $f1, 0x6FB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6FB0);
    // 0x002510F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002510FC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00251100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251104: lwc1        $f0, 0x6FB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FB4);
    // 0x00251108: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025110C: sub.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f1.fl;
L_00251110:
    // 0x00251110: beq         $s2, $zero, L_00251164
    if (ctx->r18 == 0) {
        // 0x00251114: nop
    
            goto L_00251164;
    }
    // 0x00251114: nop

    // 0x00251118: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025111C: lwc1        $f0, 0x6FB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FB8);
    // 0x00251120: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00251124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251128: lwc1        $f12, 0x6FBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6FBC);
    // 0x0025112C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x00251130: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251134: lwc1        $f0, 0x6FC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FC0);
    // 0x00251138: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0025113C: jal         0x002974C0
    // 0x00251140: nop

    func_002974C0(rdram, ctx);
        goto after_10;
    // 0x00251140: nop

    after_10:
    // 0x00251144: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251148: lwc1        $f1, 0x6FC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6FC4);
    // 0x0025114C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251150: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00251154: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251158: lwc1        $f0, 0x6FC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FC8);
    // 0x0025115C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00251160: sub.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f1.fl;
L_00251164:
    // 0x00251164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251168: lwc1        $f0, 0x6FCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FCC);
    // 0x0025116C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00251170: nop

    // 0x00251174: bc1tl       L_0025117C
    if (c1cs) {
        // 0x00251178: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_0025117C;
    }
    goto skip_4;
    // 0x00251178: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    skip_4:
L_0025117C:
    // 0x0025117C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251180: lwc1        $f0, 0x6FD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FD0);
    // 0x00251184: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00251188: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0025118C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00251190: jal         0x002117DC
    // 0x00251194: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    func_002117DC(rdram, ctx);
        goto after_11;
    // 0x00251194: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    after_11:
    // 0x00251198: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x0025119C: bne         $v0, $zero, L_0025120C
    if (ctx->r2 != 0) {
        // 0x002511A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025120C;
    }
    // 0x002511A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002511A4: lwc1        $f1, 0xA9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA9C);
    // 0x002511A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002511AC: lwc1        $f0, 0x6FD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FD4);
    // 0x002511B0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002511B4: nop

    // 0x002511B8: bc1t        L_0025120C
    if (c1cs) {
        // 0x002511BC: nop
    
            goto L_0025120C;
    }
    // 0x002511BC: nop

    // 0x002511C0: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x002511C4: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x002511C8: bne         $v0, $zero, L_0025120C
    if (ctx->r2 != 0) {
        // 0x002511CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025120C;
    }
    // 0x002511CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002511D0: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x002511D4: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002511D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002511DC: beq         $v0, $zero, L_0025120C
    if (ctx->r2 == 0) {
        // 0x002511E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025120C;
    }
    // 0x002511E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002511E4: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x002511E8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002511EC: beq         $v0, $zero, L_00251208
    if (ctx->r2 == 0) {
        // 0x002511F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00251208;
    }
    // 0x002511F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002511F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002511F8: jal         0x0024E5F0
    // 0x002511FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024E5F0(rdram, ctx);
        goto after_12;
    // 0x002511FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x00251200: j           L_0025120C
    // 0x00251204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0025120C;
    // 0x00251204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00251208:
    // 0x00251208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025120C:
    // 0x0025120C: beq         $v0, $zero, L_0025127C
    if (ctx->r2 == 0) {
        // 0x00251210: nop
    
            goto L_0025127C;
    }
    // 0x00251210: nop

    // 0x00251214: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00251218: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025121C: lwc1        $f20, 0x6FD8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6FD8);
    // 0x00251220: jal         0x002982F0
    // 0x00251224: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_13;
    // 0x00251224: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_13:
    // 0x00251228: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x0025122C: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x00251230: jal         0x002974C0
    // 0x00251234: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_14;
    // 0x00251234: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_14:
    // 0x00251238: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025123C: lwc1        $f1, 0x6FDC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6FDC);
    // 0x00251240: mul.s       $f3, $f20, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00251244: nop

    // 0x00251248: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025124C: lwc1        $f2, 0x18($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X18);
    // 0x00251250: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00251254: lwc1        $f1, 0x20($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X20);
    // 0x00251258: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025125C: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00251260: swc1        $f2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f2.u32l;
    // 0x00251264: swc1        $f1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x00251268: lwc1        $f1, 0xACC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XACC);
    // 0x0025126C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00251270: swc1        $f0, 0x50($s3)
    MEM_W(0X50, ctx->r19) = ctx->f0.u32l;
    // 0x00251274: j           L_0025166C
    // 0x00251278: sw          $zero, 0xACC($s0)
    MEM_W(0XACC, ctx->r16) = 0;
        goto L_0025166C;
    // 0x00251278: sw          $zero, 0xACC($s0)
    MEM_W(0XACC, ctx->r16) = 0;
L_0025127C:
    // 0x0025127C: lwc1        $f0, 0xA10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA10);
    // 0x00251280: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251284: lwc1        $f12, 0x6FE0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6FE0);
    // 0x00251288: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0025128C: jal         0x002982F0
    // 0x00251290: nop

    func_002982F0(rdram, ctx);
        goto after_15;
    // 0x00251290: nop

    after_15:
    // 0x00251294: lwc1        $f2, 0xA98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA98);
    // 0x00251298: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x0025129C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x002512A0: lwc1        $f3, 0xA60($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XA60);
    // 0x002512A4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002512A8: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x002512AC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002512B0: bc1t        L_002512C8
    if (c1cs) {
        // 0x002512B4: nop
    
            goto L_002512C8;
    }
    // 0x002512B4: nop

    // 0x002512B8: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x002512BC: nop

    // 0x002512C0: bc1f        L_002512D8
    if (!c1cs) {
        // 0x002512C4: nop
    
            goto L_002512D8;
    }
    // 0x002512C4: nop

L_002512C8:
    // 0x002512C8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x002512CC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x002512D0: j           L_002512E4
    // 0x002512D4: nop

        goto L_002512E4;
    // 0x002512D4: nop

L_002512D8:
    // 0x002512D8: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002512DC: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x002512E0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
L_002512E4:
    // 0x002512E4: jal         0x002117DC
    // 0x002512E8: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_16;
    // 0x002512E8: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    after_16:
    // 0x002512EC: lwc1        $f0, 0xA60($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA60);
    // 0x002512F0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002512F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002512F8: nop

    // 0x002512FC: bc1t        L_00251308
    if (c1cs) {
        // 0x00251300: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00251308;
    }
    // 0x00251300: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00251304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00251308:
    // 0x00251308: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0025130C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00251310: bne         $v0, $zero, L_00251328
    if (ctx->r2 != 0) {
        // 0x00251314: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00251328;
    }
    // 0x00251314: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00251318: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025131C: nop

    // 0x00251320: bc1tl       L_00251328
    if (c1cs) {
        // 0x00251324: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00251328;
    }
    goto skip_5;
    // 0x00251324: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_5:
L_00251328:
    // 0x00251328: lwc1        $f20, 0xA78($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x0025132C: bne         $a0, $zero, L_0025133C
    if (ctx->r4 != 0) {
        // 0x00251330: nop
    
            goto L_0025133C;
    }
    // 0x00251330: nop

    // 0x00251334: beq         $v1, $zero, L_00251398
    if (ctx->r3 == 0) {
        // 0x00251338: nop
    
            goto L_00251398;
    }
    // 0x00251338: nop

L_0025133C:
    // 0x0025133C: lwc1        $f2, 0xA60($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA60);
    // 0x00251340: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251344: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251348: lwc1        $f1, 0x6FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6FE4);
    // 0x0025134C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00251350: mul.s       $f14, $f2, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00251354: bc1f        L_00251374
    if (!c1cs) {
        // 0x00251358: nop
    
            goto L_00251374;
    }
    // 0x00251358: nop

    // 0x0025135C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251360: lwc1        $f1, 0x6FE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6FE8);
    // 0x00251364: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00251368: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025136C: j           L_00251380
    // 0x00251370: nop

        goto L_00251380;
    // 0x00251370: nop

L_00251374:
    // 0x00251374: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251378: lwc1        $f0, 0x6FEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FEC);
    // 0x0025137C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_00251380:
    // 0x00251380: lwc1        $f12, 0xA78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x00251384: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00251388: jal         0x0021160C
    // 0x0025138C: nop

    func_0021160C(rdram, ctx);
        goto after_17;
    // 0x0025138C: nop

    after_17:
    // 0x00251390: j           L_002513AC
    // 0x00251394: swc1        $f0, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f0.u32l;
        goto L_002513AC;
    // 0x00251394: swc1        $f0, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f0.u32l;
L_00251398:
    // 0x00251398: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025139C: lwc1        $f14, 0x6FF0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6FF0);
    // 0x002513A0: jal         0x0021170C
    // 0x002513A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_18;
    // 0x002513A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_18:
    // 0x002513A8: swc1        $f0, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f0.u32l;
L_002513AC:
    // 0x002513AC: lwc1        $f2, 0xA5C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA5C);
    // 0x002513B0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002513B4: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x002513B8: nop

    // 0x002513BC: bc1t        L_00251418
    if (c1cs) {
        // 0x002513C0: nop
    
            goto L_00251418;
    }
    // 0x002513C0: nop

    // 0x002513C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002513C8: lwc1        $f0, 0x6FF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FF4);
    // 0x002513CC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002513D0: mul.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002513D4: bc1f        L_002513F4
    if (!c1cs) {
        // 0x002513D8: nop
    
            goto L_002513F4;
    }
    // 0x002513D8: nop

    // 0x002513DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002513E0: lwc1        $f1, 0x6FF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6FF8);
    // 0x002513E4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002513E8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002513EC: j           L_00251400
    // 0x002513F0: nop

        goto L_00251400;
    // 0x002513F0: nop

L_002513F4:
    // 0x002513F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002513F8: lwc1        $f0, 0x6FFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6FFC);
    // 0x002513FC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_00251400:
    // 0x00251400: lwc1        $f12, 0xA7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x00251404: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00251408: jal         0x0021160C
    // 0x0025140C: nop

    func_0021160C(rdram, ctx);
        goto after_19;
    // 0x0025140C: nop

    after_19:
    // 0x00251410: j           L_00251430
    // 0x00251414: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
        goto L_00251430;
    // 0x00251414: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
L_00251418:
    // 0x00251418: lwc1        $f12, 0xA7C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0025141C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251420: lwc1        $f14, 0x7000($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7000);
    // 0x00251424: jal         0x0021170C
    // 0x00251428: nop

    func_0021170C(rdram, ctx);
        goto after_20;
    // 0x00251428: nop

    after_20:
    // 0x0025142C: swc1        $f0, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f0.u32l;
L_00251430:
    // 0x00251430: lwc1        $f0, 0xA78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x00251434: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00251438: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0025143C: nop

    // 0x00251440: bc1f        L_0025148C
    if (!c1cs) {
        // 0x00251444: nop
    
            goto L_0025148C;
    }
    // 0x00251444: nop

    // 0x00251448: lwc1        $f0, 0xA7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0025144C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00251450: nop

    // 0x00251454: bc1f        L_0025148C
    if (!c1cs) {
        // 0x00251458: nop
    
            goto L_0025148C;
    }
    // 0x00251458: nop

    // 0x0025145C: c.eq.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl == ctx->f1.fl;
    // 0x00251460: nop

    // 0x00251464: bc1t        L_00251478
    if (c1cs) {
        // 0x00251468: swc1        $f1, 0xA10($s0)
        MEM_W(0XA10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00251478;
    }
    // 0x00251468: swc1        $f1, 0xA10($s0)
    MEM_W(0XA10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025146C: lwc1        $f0, 0xA98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA98);
    // 0x00251470: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00251474: swc1        $f0, 0xA98($s0)
    MEM_W(0XA98, ctx->r16) = ctx->f0.u32l;
L_00251478:
    // 0x00251478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025147C: jal         0x0024FC08
    // 0x00251480: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0024FC08(rdram, ctx);
        goto after_21;
    // 0x00251480: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_21:
    // 0x00251484: j           L_00251564
    // 0x00251488: nop

        goto L_00251564;
    // 0x00251488: nop

L_0025148C:
    // 0x0025148C: lwc1        $f3, 0xA10($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00251490: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251494: lwc1        $f4, 0x7004($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7004);
    // 0x00251498: c.lt.s      $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f4.fl < ctx->f3.fl;
    // 0x0025149C: nop

    // 0x002514A0: bc1f        L_00251564
    if (!c1cs) {
        // 0x002514A4: nop
    
            goto L_00251564;
    }
    // 0x002514A4: nop

    // 0x002514A8: lwc1        $f2, 0xA78($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x002514AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002514B0: lwc1        $f0, 0x7008($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7008);
    // 0x002514B4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002514B8: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x002514BC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002514C0: sub.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x002514C4: lwc1        $f0, 0xA98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA98);
    // 0x002514C8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002514CC: swc1        $f0, 0xA98($s0)
    MEM_W(0XA98, ctx->r16) = ctx->f0.u32l;
    // 0x002514D0: swc1        $f3, 0xA10($s0)
    MEM_W(0XA10, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002514D4: swc1        $f2, 0xA78($s0)
    MEM_W(0XA78, ctx->r16) = ctx->f2.u32l;
    // 0x002514D8: swc1        $f1, 0xA7C($s0)
    MEM_W(0XA7C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002514DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002514E0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002514E4: beq         $v0, $zero, L_00251544
    if (ctx->r2 == 0) {
        // 0x002514E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00251544;
    }
    // 0x002514E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002514EC: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002514F0: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x002514F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002514F8: bne         $v1, $v0, L_00251510
    if (ctx->r3 != ctx->r2) {
        // 0x002514FC: nop
    
            goto L_00251510;
    }
    // 0x002514FC: nop

    // 0x00251500: jal         0x00275624
    // 0x00251504: addiu       $a0, $zero, 0x27DB
    ctx->r4 = ADD32(0, 0X27DB);
    func_00275624(rdram, ctx);
        goto after_22;
    // 0x00251504: addiu       $a0, $zero, 0x27DB
    ctx->r4 = ADD32(0, 0X27DB);
    after_22:
    // 0x00251508: j           L_00251564
    // 0x0025150C: nop

        goto L_00251564;
    // 0x0025150C: nop

L_00251510:
    // 0x00251510: lw          $v0, 0x520($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X520);
    // 0x00251514: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00251518: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025151C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00251520: lh          $a0, -0x1CEE($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1CEE);
    // 0x00251524: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00251528: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025152C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00251530: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x00251534: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x00251538: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x0025153C: j           L_0025155C
    // 0x00251540: nop

        goto L_0025155C;
    // 0x00251540: nop

L_00251544:
    // 0x00251544: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00251548: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025154C: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x00251550: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x00251554: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x00251558: addiu       $a0, $zero, 0x3AB7
    ctx->r4 = ADD32(0, 0X3AB7);
L_0025155C:
    // 0x0025155C: jal         0x00275544
    // 0x00251560: nop

    func_00275544(rdram, ctx);
        goto after_23;
    // 0x00251560: nop

    after_23:
L_00251564:
    // 0x00251564: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00251568: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025156C: lwc1        $f20, 0x700C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X700C);
    // 0x00251570: jal         0x002982F0
    // 0x00251574: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_24;
    // 0x00251574: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_24:
    // 0x00251578: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x0025157C: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x00251580: jal         0x002974C0
    // 0x00251584: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_25;
    // 0x00251584: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_25:
    // 0x00251588: lwc1        $f2, 0xA7C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA7C);
    // 0x0025158C: mul.s       $f2, $f20, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x00251590: lwc1        $f1, 0xA24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA24);
    // 0x00251594: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00251598: lwc1        $f1, 0xA7C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA7C);
    // 0x0025159C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002515A0: lwc1        $f1, 0xA24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA24);
    // 0x002515A4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002515A8: lwc1        $f3, 0xAA0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XAA0);
    // 0x002515AC: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x002515B0: lwc1        $f1, 0xAA8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAA8);
    // 0x002515B4: lwc1        $f2, 0xA78($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XA78);
    // 0x002515B8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002515BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002515C0: swc1        $f3, 0xAA0($s0)
    MEM_W(0XAA0, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002515C4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x002515C8: nop

    // 0x002515CC: bc1f        L_00251634
    if (!c1cs) {
        // 0x002515D0: swc1        $f1, 0xAA8($s0)
        MEM_W(0XAA8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00251634;
    }
    // 0x002515D0: swc1        $f1, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002515D4: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x002515D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002515DC: lwc1        $f20, 0x7010($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7010);
    // 0x002515E0: jal         0x002982F0
    // 0x002515E4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_26;
    // 0x002515E4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_26:
    // 0x002515E8: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x002515EC: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x002515F0: jal         0x002974C0
    // 0x002515F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_27;
    // 0x002515F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_27:
    // 0x002515F8: lwc1        $f3, 0xA78($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x002515FC: mul.s       $f3, $f20, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f20.fl, ctx->f3.fl);
    // 0x00251600: lwc1        $f1, 0xA24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA24);
    // 0x00251604: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00251608: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x0025160C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251610: lwc1        $f1, 0xA24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA24);
    // 0x00251614: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251618: lwc1        $f2, 0xAA0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XAA0);
    // 0x0025161C: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00251620: lwc1        $f1, 0xAA8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAA8);
    // 0x00251624: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00251628: swc1        $f2, 0xAA0($s0)
    MEM_W(0XAA0, ctx->r16) = ctx->f2.u32l;
    // 0x0025162C: j           L_0025164C
    // 0x00251630: swc1        $f1, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_0025164C;
    // 0x00251630: swc1        $f1, 0xAA8($s0)
    MEM_W(0XAA8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00251634:
    // 0x00251634: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251638: lwc1        $f1, 0x7014($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7014);
    // 0x0025163C: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00251640: lwc1        $f0, 0xAA4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAA4);
    // 0x00251644: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00251648: swc1        $f0, 0xAA4($s0)
    MEM_W(0XAA4, ctx->r16) = ctx->f0.u32l;
L_0025164C:
    // 0x0025164C: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00251650: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251654: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00251658: nop

    // 0x0025165C: bc1t        L_00251668
    if (c1cs) {
        // 0x00251660: addiu       $v0, $zero, 0xA46
        ctx->r2 = ADD32(0, 0XA46);
            goto L_00251668;
    }
    // 0x00251660: addiu       $v0, $zero, 0xA46
    ctx->r2 = ADD32(0, 0XA46);
    // 0x00251664: addiu       $v0, $zero, 0xA3C
    ctx->r2 = ADD32(0, 0XA3C);
L_00251668:
    // 0x00251668: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_0025166C:
    // 0x0025166C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00251670: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00251674: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00251678: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0025167C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00251680: ldc1        $f23, 0x48($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X48);
    // 0x00251684: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x00251688: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0025168C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00251690: jr          $ra
    // 0x00251694: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00251694: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00220208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0022020C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00220210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00220214: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00220218: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0022021C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00220220: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00220224: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00220228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022022C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00220230: lw          $a3, 0x98($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X98);
    // 0x00220234: jal         0x00213A70
    // 0x00220238: addiu       $a2, $v1, 0xBC
    ctx->r6 = ADD32(ctx->r3, 0XBC);
    func_00213A70(rdram, ctx);
        goto after_0;
    // 0x00220238: addiu       $a2, $v1, 0xBC
    ctx->r6 = ADD32(ctx->r3, 0XBC);
    after_0:
    // 0x0022023C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00220240: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00220244: jal         0x00205904
    // 0x00220248: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00205904(rdram, ctx);
        goto after_1;
    // 0x00220248: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0022024C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00220250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00220254: jr          $ra
    // 0x00220258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00220258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002565D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002565D4: jr          $ra
    // 0x002565D8: nop

    return;
    // 0x002565D8: nop

;}
RECOMP_FUNC void func_00217B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217B24: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00217B28: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00217B2C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00217B30: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00217B34: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x00217B38: srl         $a0, $a0, 3
    ctx->r4 = S32(U32(ctx->r4) >> 3);
    // 0x00217B3C: jr          $ra
    // 0x00217B40: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    return;
    // 0x00217B40: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
;}
RECOMP_FUNC void func_004110CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004110CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004110D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004110D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004110D8: jal         0x0020B5B8
    // 0x004110DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0020B5B8(rdram, ctx);
        goto after_0;
    // 0x004110DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x004110E0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x004110E4: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x004110E8: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
    // 0x004110EC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x004110F0: lui         $a3, 0xFFFD
    ctx->r7 = S32(0XFFFD << 16);
    // 0x004110F4: ori         $a3, $a3, 0xF6FB
    ctx->r7 = ctx->r7 | 0XF6FB;
    // 0x004110F8: lui         $t2, 0xE200
    ctx->r10 = S32(0XE200 << 16);
    // 0x004110FC: ori         $t2, $t2, 0x1C
    ctx->r10 = ctx->r10 | 0X1C;
    // 0x00411100: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
    // 0x00411104: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00411108: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0041110C: ori         $t0, $t0, 0x4240
    ctx->r8 = ctx->r8 | 0X4240;
    // 0x00411110: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00411114: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x00411118: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0041111C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x00411120: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00411124: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411128: lwc1        $f0, 0x9A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9A8);
    // 0x0041112C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411130: lwc1        $f1, 0x9AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9AC);
    // 0x00411134: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x00411138: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0041113C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00411140: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00411144: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00411148: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0041114C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00411150: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x00411154: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00411158: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0041115C: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x00411160: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00411164: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00411168: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x0041116C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x00411170: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00411174: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x00411178: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x0041117C: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x00411180: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x00411184: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00411188: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041118C: lwc1        $f6, 0x2030($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00411190: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x00411194: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x00411198: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x0041119C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x004111A0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x004111A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004111A8: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004111AC: sub.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x004111B0: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x004111B4: mtc1        $v0, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r2;
    // 0x004111B8: cvt.s.w     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f5.fl = CVT_S_W(ctx->f_odd[(5 - 1) * 2]);
    // 0x004111BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004111C0: nop

    // 0x004111C4: bc1tl       L_004111DC
    if (c1cs) {
        // 0x004111C8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_004111DC;
    }
    goto skip_0;
    // 0x004111C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x004111CC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004111D0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004111D4: j           L_004111EC
    // 0x004111D8: nop

        goto L_004111EC;
    // 0x004111D8: nop

L_004111DC:
    // 0x004111DC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004111E0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004111E4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004111E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_004111EC:
    // 0x004111EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004111F0: lwc1        $f0, 0x9B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9B0);
    // 0x004111F4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x004111F8: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x004111FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411200: lwc1        $f1, 0x9B4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9B4);
    // 0x00411204: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411208: nop

    // 0x0041120C: bc1t        L_00411224
    if (c1cs) {
        // 0x00411210: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411224;
    }
    // 0x00411210: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411214: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411218: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0041121C: j           L_0041123C
    // 0x00411220: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0041123C;
    // 0x00411220: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411224:
    // 0x00411224: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411228: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041122C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411230: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411234: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411238: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0041123C:
    // 0x0041123C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411240: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411244: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00411248: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041124C: lwc1        $f0, 0x9B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9B8);
    // 0x00411250: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411254: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x00411258: nop

    // 0x0041125C: bc1t        L_00411274
    if (c1cs) {
        // 0x00411260: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_00411274;
    }
    // 0x00411260: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00411264: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00411268: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0041126C: j           L_00411294
    // 0x00411270: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411294;
    // 0x00411270: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411274:
    // 0x00411274: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x00411278: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041127C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411280: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411284: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041128C: lwc1        $f0, 0x9BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9BC);
    // 0x00411290: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411294:
    // 0x00411294: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00411298: nop

    // 0x0041129C: bc1t        L_004112B4
    if (c1cs) {
        // 0x004112A0: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_004112B4;
    }
    // 0x004112A0: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x004112A4: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004112A8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004112AC: j           L_004112CC
    // 0x004112B0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_004112CC;
    // 0x004112B0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004112B4:
    // 0x004112B4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x004112B8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004112BC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004112C0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004112C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004112C8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004112CC:
    // 0x004112CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004112D0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x004112D4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x004112D8: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x004112DC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x004112E0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x004112E4: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x004112E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004112EC: lwc1        $f0, 0x9C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9C0);
    // 0x004112F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004112F4: lwc1        $f3, 0x9C4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X9C4);
    // 0x004112F8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004112FC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00411300: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00411304: nop

    // 0x00411308: bc1t        L_00411320
    if (c1cs) {
        // 0x0041130C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00411320;
    }
    // 0x0041130C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00411310: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411314: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411318: j           L_00411338
    // 0x0041131C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_00411338;
    // 0x0041131C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411320:
    // 0x00411320: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00411324: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411328: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041132C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411330: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411334: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411338:
    // 0x00411338: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041133C: lwc1        $f1, 0x9C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9C8);
    // 0x00411340: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411344: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411348: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041134C: lwc1        $f1, 0x9CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9CC);
    // 0x00411350: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411354: nop

    // 0x00411358: bc1t        L_00411370
    if (c1cs) {
        // 0x0041135C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411370;
    }
    // 0x0041135C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411360: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411364: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411368: j           L_00411388
    // 0x0041136C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411388;
    // 0x0041136C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411370:
    // 0x00411370: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411374: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411378: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041137C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411380: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411384: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411388:
    // 0x00411388: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0041138C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411390: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00411394: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411398: lwc1        $f0, 0x9D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9D0);
    // 0x0041139C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x004113A0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x004113A4: nop

    // 0x004113A8: bc1t        L_004113C0
    if (c1cs) {
        // 0x004113AC: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_004113C0;
    }
    // 0x004113AC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x004113B0: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x004113B4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004113B8: j           L_004113D8
    // 0x004113BC: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_004113D8;
    // 0x004113BC: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_004113C0:
    // 0x004113C0: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x004113C4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004113C8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004113CC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004113D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004113D4: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_004113D8:
    // 0x004113D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004113DC: lwc1        $f1, 0x9D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9D4);
    // 0x004113E0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x004113E4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004113E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004113EC: lwc1        $f1, 0x9D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9D8);
    // 0x004113F0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004113F4: nop

    // 0x004113F8: bc1t        L_00411410
    if (c1cs) {
        // 0x004113FC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411410;
    }
    // 0x004113FC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411400: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411404: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411408: j           L_00411428
    // 0x0041140C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411428;
    // 0x0041140C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411410:
    // 0x00411410: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411414: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411418: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041141C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411420: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411424: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411428:
    // 0x00411428: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0041142C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411434: lwc1        $f0, 0x9DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9DC);
    // 0x00411438: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0041143C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00411440: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00411444: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00411448: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041144C: lwc1        $f1, 0x9E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9E0);
    // 0x00411450: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x00411454: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00411458: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041145C: nop

    // 0x00411460: bc1t        L_00411478
    if (c1cs) {
        // 0x00411464: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00411478;
    }
    // 0x00411464: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00411468: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041146C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411470: j           L_00411490
    // 0x00411474: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_00411490;
    // 0x00411474: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411478:
    // 0x00411478: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041147C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411480: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411484: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411488: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0041148C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411490:
    // 0x00411490: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411494: lwc1        $f1, 0x9E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9E4);
    // 0x00411498: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0041149C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004114A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004114A4: lwc1        $f1, 0x9E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9E8);
    // 0x004114A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004114AC: nop

    // 0x004114B0: bc1t        L_004114C8
    if (c1cs) {
        // 0x004114B4: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_004114C8;
    }
    // 0x004114B4: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x004114B8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004114BC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004114C0: j           L_004114E0
    // 0x004114C4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_004114E0;
    // 0x004114C4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004114C8:
    // 0x004114C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004114CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004114D0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004114D4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004114D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004114DC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004114E0:
    // 0x004114E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004114E4: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x004114E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x004114EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004114F0: lwc1        $f0, 0x9EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9EC);
    // 0x004114F4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x004114F8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x004114FC: nop

    // 0x00411500: bc1t        L_00411518
    if (c1cs) {
        // 0x00411504: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_00411518;
    }
    // 0x00411504: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00411508: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0041150C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411510: j           L_00411538
    // 0x00411514: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411538;
    // 0x00411514: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411518:
    // 0x00411518: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0041151C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411520: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411524: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411528: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0041152C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411530: lwc1        $f0, 0x9F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9F0);
    // 0x00411534: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411538:
    // 0x00411538: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0041153C: nop

    // 0x00411540: bc1t        L_00411558
    if (c1cs) {
        // 0x00411544: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411558;
    }
    // 0x00411544: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411548: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0041154C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411550: j           L_00411570
    // 0x00411554: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411570;
    // 0x00411554: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411558:
    // 0x00411558: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0041155C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411560: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411564: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411568: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0041156C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411570:
    // 0x00411570: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411574: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411578: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0041157C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00411580: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00411584: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00411588: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0041158C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411590: lwc1        $f0, 0x9F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X9F4);
    // 0x00411594: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411598: lwc1        $f3, 0x9F8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X9F8);
    // 0x0041159C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004115A0: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x004115A4: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x004115A8: nop

    // 0x004115AC: bc1t        L_004115C4
    if (c1cs) {
        // 0x004115B0: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_004115C4;
    }
    // 0x004115B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x004115B4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004115B8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004115BC: j           L_004115DC
    // 0x004115C0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_004115DC;
    // 0x004115C0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_004115C4:
    // 0x004115C4: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x004115C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004115CC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004115D0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004115D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004115D8: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_004115DC:
    // 0x004115DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004115E0: lwc1        $f1, 0x9FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9FC);
    // 0x004115E4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x004115E8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004115EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004115F0: lwc1        $f1, 0xA00($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA00);
    // 0x004115F4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004115F8: nop

    // 0x004115FC: bc1t        L_00411614
    if (c1cs) {
        // 0x00411600: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411614;
    }
    // 0x00411600: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411604: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411608: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0041160C: j           L_0041162C
    // 0x00411610: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0041162C;
    // 0x00411610: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411614:
    // 0x00411614: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411618: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041161C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411620: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411624: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411628: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0041162C:
    // 0x0041162C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411630: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411634: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00411638: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0041163C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411640: lwc1        $f0, 0xA04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA04);
    // 0x00411644: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411648: lwc1        $f3, 0xA08($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA08);
    // 0x0041164C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00411650: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411654: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00411658: nop

    // 0x0041165C: bc1t        L_00411674
    if (c1cs) {
        // 0x00411660: sw          $v0, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r2;
            goto L_00411674;
    }
    // 0x00411660: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x00411664: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411668: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0041166C: j           L_00411688
    // 0x00411670: nop

        goto L_00411688;
    // 0x00411670: nop

L_00411674:
    // 0x00411674: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00411678: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041167C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411680: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411684: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00411688:
    // 0x00411688: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041168C: lwc1        $f0, 0xA0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA0C);
    // 0x00411690: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411694: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00411698: nop

    // 0x0041169C: bc1t        L_004116B4
    if (c1cs) {
        // 0x004116A0: sll         $t4, $v0, 14
        ctx->r12 = S32(ctx->r2 << 14);
            goto L_004116B4;
    }
    // 0x004116A0: sll         $t4, $v0, 14
    ctx->r12 = S32(ctx->r2 << 14);
    // 0x004116A4: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004116A8: mfc1        $a1, $f7
    ctx->r5 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004116AC: j           L_004116CC
    // 0x004116B0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
        goto L_004116CC;
    // 0x004116B0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
L_004116B4:
    // 0x004116B4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x004116B8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004116BC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004116C0: mfc1        $a1, $f7
    ctx->r5 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004116C4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x004116C8: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
L_004116CC:
    // 0x004116CC: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x004116D0: lui         $t0, 0xFCFF
    ctx->r8 = S32(0XFCFF << 16);
    // 0x004116D4: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x004116D8: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x004116DC: ori         $a3, $a3, 0x793C
    ctx->r7 = ctx->r7 | 0X793C;
    // 0x004116E0: lui         $t1, 0xE200
    ctx->r9 = S32(0XE200 << 16);
    // 0x004116E4: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x004116E8: lui         $t2, 0x1
    ctx->r10 = S32(0X1 << 16);
    // 0x004116EC: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x004116F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x004116F4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x004116F8: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x004116FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411700: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00411704: or          $v0, $t4, $v0
    ctx->r2 = ctx->r12 | ctx->r2;
    // 0x00411708: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x0041170C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00411710: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x00411714: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411718: lwc1        $f1, 0xA10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA10);
    // 0x0041171C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00411720: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00411724: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00411728: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0041172C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00411730: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x00411734: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x00411738: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0041173C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00411740: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x00411744: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00411748: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0041174C: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x00411750: sw          $a3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r7;
    // 0x00411754: addiu       $a1, $v1, 0x18
    ctx->r5 = ADD32(ctx->r3, 0X18);
    // 0x00411758: addiu       $a2, $v1, 0x20
    ctx->r6 = ADD32(ctx->r3, 0X20);
    // 0x0041175C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00411760: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x00411764: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00411768: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x0041176C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00411770: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x00411774: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411778: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041177C: lwc1        $f1, 0xA14($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA14);
    // 0x00411780: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x00411784: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x00411788: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041178C: nop

    // 0x00411790: bc1t        L_004117A8
    if (c1cs) {
        // 0x00411794: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_004117A8;
    }
    // 0x00411794: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00411798: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041179C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004117A0: j           L_004117BC
    // 0x004117A4: nop

        goto L_004117BC;
    // 0x004117A4: nop

L_004117A8:
    // 0x004117A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004117AC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004117B0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004117B4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004117B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_004117BC:
    // 0x004117BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004117C0: lwc1        $f0, 0xA18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA18);
    // 0x004117C4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x004117C8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x004117CC: nop

    // 0x004117D0: bc1t        L_004117E8
    if (c1cs) {
        // 0x004117D4: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_004117E8;
    }
    // 0x004117D4: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x004117D8: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004117DC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004117E0: j           L_00411800
    // 0x004117E4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411800;
    // 0x004117E4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004117E8:
    // 0x004117E8: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x004117EC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004117F0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004117F4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004117F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004117FC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411800:
    // 0x00411800: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411804: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411808: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041180C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411810: lwc1        $f0, 0xA1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA1C);
    // 0x00411814: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411818: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0041181C: nop

    // 0x00411820: bc1t        L_00411838
    if (c1cs) {
        // 0x00411824: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_00411838;
    }
    // 0x00411824: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00411828: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x0041182C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411830: j           L_00411858
    // 0x00411834: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411858;
    // 0x00411834: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411838:
    // 0x00411838: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0041183C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411840: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411844: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411848: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0041184C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411850: lwc1        $f0, 0xA20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA20);
    // 0x00411854: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411858:
    // 0x00411858: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0041185C: nop

    // 0x00411860: bc1t        L_00411878
    if (c1cs) {
        // 0x00411864: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411878;
    }
    // 0x00411864: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411868: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0041186C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411870: j           L_00411890
    // 0x00411874: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411890;
    // 0x00411874: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411878:
    // 0x00411878: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0041187C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411880: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411884: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411888: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0041188C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411890:
    // 0x00411890: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411894: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411898: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0041189C: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x004118A0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x004118A4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x004118A8: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x004118AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004118B0: lwc1        $f0, 0xA24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA24);
    // 0x004118B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004118B8: lwc1        $f3, 0xA28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA28);
    // 0x004118BC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004118C0: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x004118C4: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x004118C8: nop

    // 0x004118CC: bc1t        L_004118E4
    if (c1cs) {
        // 0x004118D0: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_004118E4;
    }
    // 0x004118D0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x004118D4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004118D8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004118DC: j           L_004118FC
    // 0x004118E0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_004118FC;
    // 0x004118E0: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_004118E4:
    // 0x004118E4: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x004118E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004118EC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004118F0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004118F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004118F8: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_004118FC:
    // 0x004118FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411900: lwc1        $f1, 0xA2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA2C);
    // 0x00411904: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411908: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041190C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411910: lwc1        $f1, 0xA30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA30);
    // 0x00411914: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411918: nop

    // 0x0041191C: bc1t        L_00411934
    if (c1cs) {
        // 0x00411920: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411934;
    }
    // 0x00411920: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411924: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411928: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0041192C: j           L_0041194C
    // 0x00411930: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0041194C;
    // 0x00411930: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411934:
    // 0x00411934: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411938: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041193C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411940: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411944: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411948: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0041194C:
    // 0x0041194C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411950: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411954: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00411958: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041195C: lwc1        $f0, 0xA34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA34);
    // 0x00411960: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411964: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x00411968: nop

    // 0x0041196C: bc1t        L_00411984
    if (c1cs) {
        // 0x00411970: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_00411984;
    }
    // 0x00411970: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00411974: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00411978: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0041197C: j           L_0041199C
    // 0x00411980: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_0041199C;
    // 0x00411980: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411984:
    // 0x00411984: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x00411988: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041198C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411990: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411994: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411998: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_0041199C:
    // 0x0041199C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004119A0: lwc1        $f1, 0xA38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA38);
    // 0x004119A4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x004119A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004119AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004119B0: lwc1        $f1, 0xA3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA3C);
    // 0x004119B4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004119B8: nop

    // 0x004119BC: bc1t        L_004119D4
    if (c1cs) {
        // 0x004119C0: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_004119D4;
    }
    // 0x004119C0: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x004119C4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004119C8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004119CC: j           L_004119EC
    // 0x004119D0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_004119EC;
    // 0x004119D0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004119D4:
    // 0x004119D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004119D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004119DC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004119E0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x004119E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004119E8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_004119EC:
    // 0x004119EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004119F0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x004119F4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x004119F8: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x004119FC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00411A00: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00411A04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411A08: lwc1        $f0, 0xA40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA40);
    // 0x00411A0C: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x00411A10: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x00411A14: nop

    // 0x00411A18: bc1t        L_00411A30
    if (c1cs) {
        // 0x00411A1C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00411A30;
    }
    // 0x00411A1C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00411A20: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00411A24: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411A28: j           L_00411A48
    // 0x00411A2C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_00411A48;
    // 0x00411A2C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411A30:
    // 0x00411A30: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x00411A34: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411A38: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411A3C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411A40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411A44: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411A48:
    // 0x00411A48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411A4C: lwc1        $f1, 0xA44($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA44);
    // 0x00411A50: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411A54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411A58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411A5C: lwc1        $f1, 0xA48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA48);
    // 0x00411A60: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411A64: nop

    // 0x00411A68: bc1t        L_00411A80
    if (c1cs) {
        // 0x00411A6C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411A80;
    }
    // 0x00411A6C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411A70: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411A74: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411A78: j           L_00411A98
    // 0x00411A7C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411A98;
    // 0x00411A7C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411A80:
    // 0x00411A80: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411A84: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411A88: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411A8C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411A90: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411A94: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411A98:
    // 0x00411A98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411A9C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411AA0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00411AA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411AA8: lwc1        $f0, 0xA4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA4C);
    // 0x00411AAC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411AB0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x00411AB4: nop

    // 0x00411AB8: bc1t        L_00411AD0
    if (c1cs) {
        // 0x00411ABC: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_00411AD0;
    }
    // 0x00411ABC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00411AC0: trunc.w.s   $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00411AC4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411AC8: j           L_00411AF0
    // 0x00411ACC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411AF0;
    // 0x00411ACC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411AD0:
    // 0x00411AD0: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x00411AD4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411AD8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411ADC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411AE0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411AE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411AE8: lwc1        $f0, 0xA50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA50);
    // 0x00411AEC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411AF0:
    // 0x00411AF0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00411AF4: nop

    // 0x00411AF8: bc1t        L_00411B10
    if (c1cs) {
        // 0x00411AFC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00411B10;
    }
    // 0x00411AFC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00411B00: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00411B04: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411B08: j           L_00411B28
    // 0x00411B0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411B28;
    // 0x00411B0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411B10:
    // 0x00411B10: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00411B14: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411B18: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411B1C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411B20: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411B24: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411B28:
    // 0x00411B28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411B2C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00411B30: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00411B34: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00411B38: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x00411B3C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00411B40: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00411B44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411B48: lwc1        $f1, 0xA54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA54);
    // 0x00411B4C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x00411B50: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411B54: nop

    // 0x00411B58: bc1t        L_00411B70
    if (c1cs) {
        // 0x00411B5C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00411B70;
    }
    // 0x00411B5C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00411B60: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411B64: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411B68: j           L_00411B88
    // 0x00411B6C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
        goto L_00411B88;
    // 0x00411B6C: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411B70:
    // 0x00411B70: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411B74: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411B78: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411B7C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411B80: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411B84: add.s       $f0, $f2, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f5.fl;
L_00411B88:
    // 0x00411B88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411B8C: lwc1        $f1, 0xA58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA58);
    // 0x00411B90: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411B94: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411B98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411B9C: lwc1        $f1, 0xA5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA5C);
    // 0x00411BA0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411BA4: nop

    // 0x00411BA8: bc1t        L_00411BC0
    if (c1cs) {
        // 0x00411BAC: sll         $a1, $v0, 14
        ctx->r5 = S32(ctx->r2 << 14);
            goto L_00411BC0;
    }
    // 0x00411BAC: sll         $a1, $v0, 14
    ctx->r5 = S32(ctx->r2 << 14);
    // 0x00411BB0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411BB4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411BB8: j           L_00411BD8
    // 0x00411BBC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411BD8;
    // 0x00411BBC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411BC0:
    // 0x00411BC0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00411BC4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411BC8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411BCC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411BD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411BD4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411BD8:
    // 0x00411BD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411BDC: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00411BE0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00411BE4: add.s       $f1, $f4, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x00411BE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411BEC: lwc1        $f0, 0xA60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA60);
    // 0x00411BF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411BF4: lwc1        $f3, 0xA64($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA64);
    // 0x00411BF8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00411BFC: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x00411C00: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00411C04: nop

    // 0x00411C08: bc1t        L_00411C20
    if (c1cs) {
        // 0x00411C0C: sw          $v0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r2;
            goto L_00411C20;
    }
    // 0x00411C0C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00411C10: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411C14: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411C18: j           L_00411C34
    // 0x00411C1C: nop

        goto L_00411C34;
    // 0x00411C1C: nop

L_00411C20:
    // 0x00411C20: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00411C24: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411C28: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411C2C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411C30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00411C34:
    // 0x00411C34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411C38: lwc1        $f0, 0xA68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA68);
    // 0x00411C3C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411C40: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00411C44: nop

    // 0x00411C48: bc1t        L_00411C60
    if (c1cs) {
        // 0x00411C4C: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_00411C60;
    }
    // 0x00411C4C: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x00411C50: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00411C54: mfc1        $s0, $f7
    ctx->r16 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411C58: j           L_00411C78
    // 0x00411C5C: andi        $v0, $s0, 0x3FF
    ctx->r2 = ctx->r16 & 0X3FF;
        goto L_00411C78;
    // 0x00411C5C: andi        $v0, $s0, 0x3FF
    ctx->r2 = ctx->r16 & 0X3FF;
L_00411C60:
    // 0x00411C60: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00411C64: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411C68: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411C6C: mfc1        $s0, $f7
    ctx->r16 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00411C70: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x00411C74: andi        $v0, $s0, 0x3FF
    ctx->r2 = ctx->r16 & 0X3FF;
L_00411C78:
    // 0x00411C78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411C7C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00411C80: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00411C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00411C88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00411C8C: jr          $ra
    // 0x00411C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00411C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002280B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002280B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002280B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002280B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002280BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002280C0: lw          $v1, 0x290($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X290);
    // 0x002280C4: beq         $v1, $zero, L_002280D8
    if (ctx->r3 == 0) {
        // 0x002280C8: sw          $zero, 0x144($s0)
        MEM_W(0X144, ctx->r16) = 0;
            goto L_002280D8;
    }
    // 0x002280C8: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x002280CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002280D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002280D4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002280D8:
    // 0x002280D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x002280DC: addiu       $a0, $a0, -0x14C
    ctx->r4 = ADD32(ctx->r4, -0X14C);
    // 0x002280E0: jal         0x00200738
    // 0x002280E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x002280E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002280E8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x002280EC: addiu       $a0, $a0, -0x160
    ctx->r4 = ADD32(ctx->r4, -0X160);
    // 0x002280F0: jal         0x00200574
    // 0x002280F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x002280F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002280F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002280FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00228100: jr          $ra
    // 0x00228104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00228104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E100: jr          $ra
    // 0x0040E104: nop

    return;
    // 0x0040E104: nop

;}
RECOMP_FUNC void func_00247124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00247124: lui         $v0, 0xFFF6
    ctx->r2 = S32(0XFFF6 << 16);
    // 0x00247128: ori         $v0, $v0, 0xFFF3
    ctx->r2 = ctx->r2 | 0XFFF3;
    // 0x0024712C: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x00247130: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x00247134: and         $v0, $a0, $a1
    ctx->r2 = ctx->r4 & ctx->r5;
    // 0x00247138: beq         $v0, $zero, L_00247144
    if (ctx->r2 == 0) {
        // 0x0024713C: lui         $a2, 0x8
        ctx->r6 = S32(0X8 << 16);
            goto L_00247144;
    }
    // 0x0024713C: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    // 0x00247140: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
L_00247144:
    // 0x00247144: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x00247148: bnel        $v0, $zero, L_00247150
    if (ctx->r2 != 0) {
        // 0x0024714C: or          $v1, $v1, $a1
        ctx->r3 = ctx->r3 | ctx->r5;
            goto L_00247150;
    }
    goto skip_0;
    // 0x0024714C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    skip_0:
L_00247150:
    // 0x00247150: and         $v0, $a0, $a2
    ctx->r2 = ctx->r4 & ctx->r6;
    // 0x00247154: bnel        $v0, $zero, L_0024715C
    if (ctx->r2 != 0) {
        // 0x00247158: ori         $v1, $v1, 0x4
        ctx->r3 = ctx->r3 | 0X4;
            goto L_0024715C;
    }
    goto skip_1;
    // 0x00247158: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    skip_1:
L_0024715C:
    // 0x0024715C: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x00247160: bnel        $v0, $zero, L_00247168
    if (ctx->r2 != 0) {
        // 0x00247164: or          $v1, $v1, $a2
        ctx->r3 = ctx->r3 | ctx->r6;
            goto L_00247168;
    }
    goto skip_2;
    // 0x00247164: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    skip_2:
L_00247168:
    // 0x00247168: jr          $ra
    // 0x0024716C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0024716C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_002531D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002531D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002531D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002531D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002531DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002531E0: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x002531E4: beq         $s0, $zero, L_00253218
    if (ctx->r16 == 0) {
        // 0x002531E8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00253218;
    }
    // 0x002531E8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_002531EC:
    // 0x002531EC: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x002531F0: bne         $v0, $s1, L_0025320C
    if (ctx->r2 != ctx->r17) {
        // 0x002531F4: nop
    
            goto L_0025320C;
    }
    // 0x002531F4: nop

    // 0x002531F8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x002531FC: bne         $v0, $zero, L_0025320C
    if (ctx->r2 != 0) {
        // 0x00253200: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025320C;
    }
    // 0x00253200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00253204: jal         0x00249898
    // 0x00253208: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00249898(rdram, ctx);
        goto after_0;
    // 0x00253208: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
L_0025320C:
    // 0x0025320C: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00253210: bne         $s0, $zero, L_002531EC
    if (ctx->r16 != 0) {
        // 0x00253214: nop
    
            goto L_002531EC;
    }
    // 0x00253214: nop

L_00253218:
    // 0x00253218: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025321C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253220: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253224: jr          $ra
    // 0x00253228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00253228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002382F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002382F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002382FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00238300: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00238304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238308: beq         $v1, $v0, L_00238320
    if (ctx->r3 == ctx->r2) {
        // 0x0023830C: nop
    
            goto L_00238320;
    }
    // 0x0023830C: nop

    // 0x00238310: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238314: lwc1        $f0, 0x65B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65B4);
    // 0x00238318: j           L_00238328
    // 0x0023831C: nop

        goto L_00238328;
    // 0x0023831C: nop

L_00238320:
    // 0x00238320: jal         0x0021F268
    // 0x00238324: nop

    func_0021F268(rdram, ctx);
        goto after_0;
    // 0x00238324: nop

    after_0:
L_00238328:
    // 0x00238328: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0023832C: jr          $ra
    // 0x00238330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00238330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A1050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1050: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x002A1054: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_002A1058:
    // 0x002A1058: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A105C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A1060: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x002A1064: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x002A1068: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A106C: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x002A1070: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x002A1074: lwc1        $f5, 0x0($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x002A1078: mul.s       $f4, $f2, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x002A107C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A1080: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x002A1084: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002A1088: mul.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002A108C: nop

    // 0x002A1090: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002A1094: nop

    // 0x002A1098: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x002A109C: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x002A10A0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x002A10A4: sub.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x002A10A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A10AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A10B0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002A10B4: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A10B8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x002A10BC: bne         $v0, $zero, L_002A1058
    if (ctx->r2 != 0) {
        // 0x002A10C0: swc1        $f2, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
            goto L_002A1058;
    }
    // 0x002A10C0: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x002A10C4: jr          $ra
    // 0x002A10C8: nop

    return;
    // 0x002A10C8: nop

;}
RECOMP_FUNC void func_00417F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417F50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417F54: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00417F58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00417F5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00417F60: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00417F64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00417F68: lw          $s0, 0x518($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X518);
    // 0x00417F6C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00417F70: lbu         $a1, 0x32($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X32);
    // 0x00417F74: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00417F78: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00417F7C: jal         0x0041648C
    // 0x00417F80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00417F80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00417F84: sb          $v0, 0x32($s0)
    MEM_B(0X32, ctx->r16) = ctx->r2;
    // 0x00417F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00417F8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00417F90: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00417F94: jr          $ra
    // 0x00417F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00417F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004195C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004195C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004195C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004195C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004195CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004195D0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004195D4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x004195D8: jal         0x00285A68
    // 0x004195DC: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x004195DC: nop

    after_0:
    // 0x004195E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004195E4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004195E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004195EC: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004195F0: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004195F4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004195F8: addiu       $a1, $a1, -0x42BC
    ctx->r5 = ADD32(ctx->r5, -0X42BC);
    // 0x004195FC: jal         0x00416644
    // 0x00419600: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00419600: nop

    after_1:
    // 0x00419604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041960C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419610: jr          $ra
    // 0x00419614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029E030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
