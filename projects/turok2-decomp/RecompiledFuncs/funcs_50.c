#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0025A5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A5D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A5D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A5DC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A5E0: lhu         $a3, 0x7E($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7E);
    // 0x0025A5E4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A5E8: addiu       $a2, $a2, -0x1A8
    ctx->r6 = ADD32(ctx->r6, -0X1A8);
    // 0x0025A5EC: jal         0x00245A98
    // 0x0025A5F0: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A5F0: nop

    after_0:
    // 0x0025A5F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A5F8: jr          $ra
    // 0x0025A5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293080: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x00293084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293088: lwc1        $f1, -0x5BCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5BCC);
    // 0x0029308C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00293090: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00293094: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00293098: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x0029309C: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x002930A0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002930A4: mul.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002930A8: bgezl       $a2, L_002930C0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002930AC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002930C0;
    }
    goto skip_0;
    // 0x002930AC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x002930B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002930B4: ldc1        $f0, -0x5BC8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5BC8);
    // 0x002930B8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002930BC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002930C0:
    // 0x002930C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002930C4: lwc1        $f1, -0x5BC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5BC0);
    // 0x002930C8: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002930CC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002930D0: nop

    // 0x002930D4: bc1tl       L_002930EC
    if (c1cs) {
            // 0x002930D8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    func_002930EC(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x002930D8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x002930DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002930E0: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002930E4: jr          $ra
    // 0x002930E8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x002930E8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_00284640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284640: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284644: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284648: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x0028464C: jr          $ra
    // 0x00284650: nop

    return;
    // 0x00284650: nop

;}
RECOMP_FUNC void func_002843F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002843F4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002843F8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002843FC: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x00284400: jr          $ra
    // 0x00284404: nop

    return;
    // 0x00284404: nop

;}
RECOMP_FUNC void func_00212F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00212F98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00212F9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00212FA0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00212FA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00212FA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00212FAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00212FB0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00212FB4: blez        $v0, L_00213090
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00212FB8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00213090;
    }
    // 0x00212FB8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00212FBC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00212FC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00212FC4:
    // 0x00212FC4: jal         0x002017D4
    // 0x00212FC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00212FC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00212FCC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00212FD0: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00212FD4: blez        $t0, L_0021307C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00212FD8: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_0021307C;
    }
    // 0x00212FD8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00212FDC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_00212FE0:
    // 0x00212FE0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00212FE4: lbu         $a0, 0xC($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XC);
    // 0x00212FE8: sltiu       $v1, $a0, 0xE1
    ctx->r3 = ctx->r4 < 0XE1 ? 1 : 0;
    // 0x00212FEC: beq         $v1, $zero, L_00213004
    if (ctx->r3 == 0) {
        // 0x00212FF0: addiu       $s1, $a2, 0x4
        ctx->r17 = ADD32(ctx->r6, 0X4);
            goto L_00213004;
    }
    // 0x00212FF0: addiu       $s1, $a2, 0x4
    ctx->r17 = ADD32(ctx->r6, 0X4);
    // 0x00212FF4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00212FF8: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x00212FFC: bne         $v0, $zero, L_00213010
    if (ctx->r2 != 0) {
        // 0x00213000: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_00213010;
    }
    // 0x00213000: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_00213004:
    // 0x00213004: beq         $v1, $zero, L_00213010
    if (ctx->r3 == 0) {
        // 0x00213008: addiu       $v0, $zero, 0xE1
        ctx->r2 = ADD32(0, 0XE1);
            goto L_00213010;
    }
    // 0x00213008: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x0021300C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00213010:
    // 0x00213010: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x00213014: lbu         $a0, 0xD($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XD);
    // 0x00213018: sltiu       $v1, $a0, 0xE1
    ctx->r3 = ctx->r4 < 0XE1 ? 1 : 0;
    // 0x0021301C: beq         $v1, $zero, L_00213030
    if (ctx->r3 == 0) {
        // 0x00213020: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_00213030;
    }
    // 0x00213020: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00213024: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x00213028: bne         $v0, $zero, L_0021303C
    if (ctx->r2 != 0) {
        // 0x0021302C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_0021303C;
    }
    // 0x0021302C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_00213030:
    // 0x00213030: beq         $v1, $zero, L_0021303C
    if (ctx->r3 == 0) {
        // 0x00213034: addiu       $v0, $zero, 0xE1
        ctx->r2 = ADD32(0, 0XE1);
            goto L_0021303C;
    }
    // 0x00213034: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x00213038: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_0021303C:
    // 0x0021303C: sb          $v0, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r2;
    // 0x00213040: lbu         $a0, 0xE($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XE);
    // 0x00213044: sltiu       $v1, $a0, 0xE1
    ctx->r3 = ctx->r4 < 0XE1 ? 1 : 0;
    // 0x00213048: beq         $v1, $zero, L_0021305C
    if (ctx->r3 == 0) {
        // 0x0021304C: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_0021305C;
    }
    // 0x0021304C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00213050: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x00213054: bne         $v0, $zero, L_00213068
    if (ctx->r2 != 0) {
        // 0x00213058: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_00213068;
    }
    // 0x00213058: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_0021305C:
    // 0x0021305C: beq         $v1, $zero, L_00213068
    if (ctx->r3 == 0) {
        // 0x00213060: addiu       $v0, $zero, 0xE1
        ctx->r2 = ADD32(0, 0XE1);
            goto L_00213068;
    }
    // 0x00213060: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x00213064: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00213068:
    // 0x00213068: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x0021306C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00213070: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00213074: bne         $v0, $zero, L_00212FE0
    if (ctx->r2 != 0) {
        // 0x00213078: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_00212FE0;
    }
    // 0x00213078: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_0021307C:
    // 0x0021307C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213080: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213084: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213088: bne         $v0, $zero, L_00212FC4
    if (ctx->r2 != 0) {
        // 0x0021308C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00212FC4;
    }
    // 0x0021308C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00213090:
    // 0x00213090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00213094: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00213098: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021309C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002130A0: jr          $ra
    // 0x002130A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002130A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028EE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EE40: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_00205D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205D0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00205D10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00205D14: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00205D18: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00205D1C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00205D20: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00205D24: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x00205D28: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00205D2C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00205D30: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00205D34: jal         0x0020185C
    // 0x00205D38: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00205D38: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00205D3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205D40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00205D44: addiu       $a3, $zero, 0x1B
    ctx->r7 = ADD32(0, 0X1B);
    // 0x00205D48: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00205D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205D50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00205D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00205D58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00205D5C: jal         0x0020367C
    // 0x00205D60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x00205D60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_1:
    // 0x00205D64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00205D68: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00205D6C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00205D70: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00205D74: jr          $ra
    // 0x00205D78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00205D78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00298D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298D4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0045227C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045227C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452284: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452288: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0045228C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00452290: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00452294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00452298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045229C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004522A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004522A4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x004522A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004522AC: jal         0x0041648C
    // 0x004522B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004522B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004522B4: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x004522B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004522BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004522C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004522C4: jr          $ra
    // 0x004522C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004522C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029B054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0029B058: lwc1        $f1, 0x7B58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B58);
    // 0x0029B05C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
;}
RECOMP_FUNC void func_00256228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025622C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256230: jal         0x00255FF4
    // 0x00256234: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x00256234: nop

    after_0:
    // 0x00256238: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025623C: jr          $ra
    // 0x00256240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293310: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00293314: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00293318: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0029331C: jr          $ra
    // 0x00293320: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    return;
    // 0x00293320: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_002929A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002929A0: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929A4: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x002929A8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002929AC: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x002929B0: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929B4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002929B8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x002929BC: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929C0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x002929C4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002929C8: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x002929CC: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929D0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x002929D4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002929D8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x002929DC: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929E0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x002929E4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002929E8: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x002929EC: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929F0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002929F4: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    // 0x002929F8: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x002929FC: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
    // 0x00292A00: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00292A04: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x00292A08: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x00292A0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00292A10: lwc1        $f0, -0x5BF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5BF0);
    // 0x00292A14: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00292A18: jr          $ra
    // 0x00292A1C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00292A1C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0042AC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AC0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0042AC10: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0042AC14: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042AC18: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0042AC1C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0042AC20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0042AC24: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0042AC28: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0042AC2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0042AC30: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC34: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC38: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x0042AC3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042AC40: beq         $v1, $v0, L_0042AC50
    if (ctx->r3 == ctx->r2) {
        // 0x0042AC44: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0042AC50;
    }
    // 0x0042AC44: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0042AC48: jal         0x0042C96C
    // 0x0042AC4C: nop

    func_0042C96C(rdram, ctx);
        goto after_0;
    // 0x0042AC4C: nop

    after_0:
L_0042AC50:
    // 0x0042AC50: jal         0x00284174
    // 0x0042AC54: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x0042AC54: nop

    after_1:
    // 0x0042AC58: bne         $v0, $zero, L_0042ACF8
    if (ctx->r2 != 0) {
        // 0x0042AC5C: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC5C: nop

    // 0x0042AC60: jal         0x0027BC34
    // 0x0042AC64: nop

    func_0027BC34(rdram, ctx);
        goto after_2;
    // 0x0042AC64: nop

    after_2:
    // 0x0042AC68: bne         $v0, $zero, L_0042ACF8
    if (ctx->r2 != 0) {
        // 0x0042AC6C: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC6C: nop

    // 0x0042AC70: beq         $s1, $zero, L_0042ACF8
    if (ctx->r17 == 0) {
        // 0x0042AC74: nop
    
            goto L_0042ACF8;
    }
    // 0x0042AC74: nop

    // 0x0042AC78: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC7C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC80: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x0042AC84: beq         $v0, $zero, L_0042ACF8
    if (ctx->r2 == 0) {
        // 0x0042AC88: addiu       $v0, $zero, 0xFA0
        ctx->r2 = ADD32(0, 0XFA0);
            goto L_0042ACF8;
    }
    // 0x0042AC88: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    // 0x0042AC8C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AC90: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AC94: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AC98: beq         $v1, $v0, L_0042ACE4
    if (ctx->r3 == ctx->r2) {
        // 0x0042AC9C: slti        $v0, $v1, 0xFA1
        ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
            goto L_0042ACE4;
    }
    // 0x0042AC9C: slti        $v0, $v1, 0xFA1
    ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
    // 0x0042ACA0: beq         $v0, $zero, L_0042ACC0
    if (ctx->r2 == 0) {
        // 0x0042ACA4: addiu       $v0, $zero, 0x7D0
        ctx->r2 = ADD32(0, 0X7D0);
            goto L_0042ACC0;
    }
    // 0x0042ACA4: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x0042ACA8: beq         $v1, $v0, L_0042ACDC
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACAC: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_0042ACDC;
    }
    // 0x0042ACAC: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x0042ACB0: beql        $v1, $v0, L_0042ACF0
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACB4: addiu       $a0, $zero, 0x8F
        ctx->r4 = ADD32(0, 0X8F);
            goto L_0042ACF0;
    }
    goto skip_0;
    // 0x0042ACB4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    skip_0:
    // 0x0042ACB8: j           L_0042ACF8
    // 0x0042ACBC: nop

        goto L_0042ACF8;
    // 0x0042ACBC: nop

L_0042ACC0:
    // 0x0042ACC0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x0042ACC4: beq         $v1, $v0, L_0042ACEC
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACC8: addiu       $v0, $zero, 0x1770
        ctx->r2 = ADD32(0, 0X1770);
            goto L_0042ACEC;
    }
    // 0x0042ACC8: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    // 0x0042ACCC: beql        $v1, $v0, L_0042ACF0
    if (ctx->r3 == ctx->r2) {
        // 0x0042ACD0: addiu       $a0, $zero, 0x92
        ctx->r4 = ADD32(0, 0X92);
            goto L_0042ACF0;
    }
    goto skip_1;
    // 0x0042ACD0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    skip_1:
    // 0x0042ACD4: j           L_0042ACF8
    // 0x0042ACD8: nop

        goto L_0042ACF8;
    // 0x0042ACD8: nop

L_0042ACDC:
    // 0x0042ACDC: j           L_0042ACF0
    // 0x0042ACE0: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
        goto L_0042ACF0;
    // 0x0042ACE0: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
L_0042ACE4:
    // 0x0042ACE4: j           L_0042ACF0
    // 0x0042ACE8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
        goto L_0042ACF0;
    // 0x0042ACE8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
L_0042ACEC:
    // 0x0042ACEC: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
L_0042ACF0:
    // 0x0042ACF0: jal         0x00412B28
    // 0x0042ACF4: nop

    func_00412B28(rdram, ctx);
        goto after_3;
    // 0x0042ACF4: nop

    after_3:
L_0042ACF8:
    // 0x0042ACF8: jal         0x00226724
    // 0x0042ACFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226724(rdram, ctx);
        goto after_4;
    // 0x0042ACFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0042AD00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0042AD04: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x0042AD08: jal         0x00201C08
    // 0x0042AD0C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    func_00201C08(rdram, ctx);
        goto after_5;
    // 0x0042AD0C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    after_5:
    // 0x0042AD10: jal         0x002053A8
    // 0x0042AD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x0042AD14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x0042AD18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AD1C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AD20: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x0042AD24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042AD28: beq         $v1, $v0, L_0042ADE8
    if (ctx->r3 == ctx->r2) {
        // 0x0042AD2C: nop
    
            goto L_0042ADE8;
    }
    // 0x0042AD2C: nop

    // 0x0042AD30: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042AD34: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0042AD38: jal         0x002532A8
    // 0x0042AD3C: nop

    func_002532A8(rdram, ctx);
        goto after_7;
    // 0x0042AD3C: nop

    after_7:
    // 0x0042AD40: beq         $v0, $zero, L_0042AD50
    if (ctx->r2 == 0) {
        // 0x0042AD44: nop
    
            goto L_0042AD50;
    }
    // 0x0042AD44: nop

    // 0x0042AD48: jal         0x0042EB04
    // 0x0042AD4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0042EB04(rdram, ctx);
        goto after_8;
    // 0x0042AD4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_0042AD50:
    // 0x0042AD50: jal         0x00275F7C
    // 0x0042AD54: nop

    func_00275F7C(rdram, ctx);
        goto after_9;
    // 0x0042AD54: nop

    after_9:
    // 0x0042AD58: jal         0x00275EFC
    // 0x0042AD5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_10;
    // 0x0042AD5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
    // 0x0042AD60: jal         0x00275B58
    // 0x0042AD64: nop

    func_00275B58(rdram, ctx);
        goto after_11;
    // 0x0042AD64: nop

    after_11:
    // 0x0042AD68: jal         0x002758DC
    // 0x0042AD6C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    func_002758DC(rdram, ctx);
        goto after_12;
    // 0x0042AD6C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    after_12:
    // 0x0042AD70: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x0042AD74: jal         0x002052D8
    // 0x0042AD78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x0042AD78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x0042AD7C: lw          $a1, 0x9C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X9C);
    // 0x0042AD80: jal         0x002052D8
    // 0x0042AD84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_14;
    // 0x0042AD84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x0042AD88: lw          $a1, 0xA0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA0);
    // 0x0042AD8C: jal         0x002052D8
    // 0x0042AD90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_15;
    // 0x0042AD90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_15:
    // 0x0042AD94: lw          $a1, 0xA4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA4);
    // 0x0042AD98: jal         0x002052D8
    // 0x0042AD9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_16;
    // 0x0042AD9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x0042ADA0: lw          $a1, 0xA8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA8);
    // 0x0042ADA4: jal         0x002052D8
    // 0x0042ADA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x0042ADA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_17:
    // 0x0042ADAC: lw          $a1, 0xB0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB0);
    // 0x0042ADB0: jal         0x002052D8
    // 0x0042ADB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x0042ADB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_18:
    // 0x0042ADB8: lw          $a1, 0xB4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB4);
    // 0x0042ADBC: jal         0x002052D8
    // 0x0042ADC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_19;
    // 0x0042ADC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
    // 0x0042ADC4: lw          $a1, 0xCC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XCC);
    // 0x0042ADC8: jal         0x002052D8
    // 0x0042ADCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_20;
    // 0x0042ADCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_20:
    // 0x0042ADD0: lw          $a1, 0xAC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XAC);
    // 0x0042ADD4: jal         0x002052D8
    // 0x0042ADD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_21;
    // 0x0042ADD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x0042ADDC: lw          $a1, 0xC8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC8);
    // 0x0042ADE0: jal         0x002052D8
    // 0x0042ADE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_22;
    // 0x0042ADE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_22:
L_0042ADE8:
    // 0x0042ADE8: jal         0x002053A8
    // 0x0042ADEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_23;
    // 0x0042ADEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_23:
    // 0x0042ADF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042ADF4: sw          $zero, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = 0;
    // 0x0042ADF8: jal         0x00206068
    // 0x0042ADFC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_24;
    // 0x0042ADFC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_24:
    // 0x0042AE00: jal         0x00226390
    // 0x0042AE04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226390(rdram, ctx);
        goto after_25;
    // 0x0042AE04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
    // 0x0042AE08: lw          $v0, 0x94($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X94);
    // 0x0042AE0C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042AE10: jal         0x0042D220
    // 0x0042AE14: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    func_0042D220(rdram, ctx);
        goto after_26;
    // 0x0042AE14: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    after_26:
    // 0x0042AE18: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE1C: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x0042AE20: jal         0x0042CF90
    // 0x0042AE24: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042CF90(rdram, ctx);
        goto after_27;
    // 0x0042AE24: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_27:
    // 0x0042AE28: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE2C: ori         $a0, $a0, 0x3B28
    ctx->r4 = ctx->r4 | 0X3B28;
    // 0x0042AE30: jal         0x0042D0A0
    // 0x0042AE34: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D0A0(rdram, ctx);
        goto after_28;
    // 0x0042AE34: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_28:
    // 0x0042AE38: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x0042AE3C: addiu       $s0, $s0, 0x2B8
    ctx->r16 = ADD32(ctx->r16, 0X2B8);
    // 0x0042AE40: jal         0x0042D410
    // 0x0042AE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042D410(rdram, ctx);
        goto after_29;
    // 0x0042AE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_29:
    // 0x0042AE48: jal         0x00241860
    // 0x0042AE4C: nop

    entry_00241860(rdram, ctx);
        goto after_30;
    // 0x0042AE4C: nop

    after_30:
    // 0x0042AE50: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0042AE54: ori         $a0, $a0, 0x8EBC
    ctx->r4 = ctx->r4 | 0X8EBC;
    // 0x0042AE58: jal         0x0042D120
    // 0x0042AE5C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D120(rdram, ctx);
        goto after_31;
    // 0x0042AE5C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_31:
    // 0x0042AE60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0042AE64: addiu       $a0, $a0, 0x6A90
    ctx->r4 = ADD32(ctx->r4, 0X6A90);
    // 0x0042AE68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0042AE6C: addiu       $a1, $a1, 0x68B0
    ctx->r5 = ADD32(ctx->r5, 0X68B0);
    // 0x0042AE70: jal         0x00275BE8
    // 0x0042AE74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_00275BE8(rdram, ctx);
        goto after_32;
    // 0x0042AE74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_32:
    // 0x0042AE78: jal         0x0042EBBC
    // 0x0042AE7C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    func_0042EBBC(rdram, ctx);
        goto after_33;
    // 0x0042AE7C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    after_33:
    // 0x0042AE80: lw          $v0, 0x38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X38);
    // 0x0042AE84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042AE88: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042AE8C: beq         $v0, $zero, L_0042AE9C
    if (ctx->r2 == 0) {
        // 0x0042AE90: nop
    
            goto L_0042AE9C;
    }
    // 0x0042AE90: nop

    // 0x0042AE94: addiu       $s2, $v1, -0x1
    ctx->r18 = ADD32(ctx->r3, -0X1);
    // 0x0042AE98: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0042AE9C:
    // 0x0042AE9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEA0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEA4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x0042AEA8: bne         $s1, $zero, L_0042AEBC
    if (ctx->r17 != 0) {
        // 0x0042AEAC: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_0042AEBC;
    }
    // 0x0042AEAC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x0042AEB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AEB4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEB8: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
L_0042AEBC:
    // 0x0042AEBC: ori         $a2, $a2, 0x8E5C
    ctx->r6 = ctx->r6 | 0X8E5C;
    // 0x0042AEC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042AEC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042AEC8: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    // 0x0042AECC: jal         0x0022629C
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    func_0022629C(rdram, ctx);
        goto after_34;
    // 0x0042AED0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    after_34:
    // 0x0042AED4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AED8: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AEDC: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AEE0: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AEE4: beq         $v0, $zero, L_0042AF30
    if (ctx->r2 == 0) {
        // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AF30;
    }
    // 0x0042AEE8: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AEEC: beq         $v0, $zero, L_0042AF58
    if (ctx->r2 == 0) {
        // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042AF58;
    }
    // 0x0042AEF0: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AEF4: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042AF58;
    }
    // 0x0042AEF8: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AEFC: beq         $v0, $zero, L_0042AF14
    if (ctx->r2 == 0) {
        // 0x0042AF00: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AF14;
    }
    // 0x0042AF00: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AF04: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF0C: j           L_0042AF70
    // 0x0042AF10: nop

        goto L_0042AF70;
    // 0x0042AF10: nop

L_0042AF14:
    // 0x0042AF14: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AF18: beq         $v1, $v0, L_0042AF58
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042AF58;
    }
    // 0x0042AF1C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AF20: beq         $v1, $v0, L_0042AF5C
    if (ctx->r3 == ctx->r2) {
        // 0x0042AF24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF28: j           L_0042AF70
    // 0x0042AF2C: nop

        goto L_0042AF70;
    // 0x0042AF2C: nop

L_0042AF30:
    // 0x0042AF30: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AF34: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF38: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF38: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AF3C: bne         $v0, $zero, L_0042AF5C
    if (ctx->r2 != 0) {
        // 0x0042AF40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042AF5C;
    }
    // 0x0042AF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042AF44: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x0042AF48: beq         $v0, $zero, L_0042AF70
    if (ctx->r2 == 0) {
        // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_0042AF70;
    }
    // 0x0042AF4C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x0042AF50: bne         $v0, $zero, L_0042AF70
    if (ctx->r2 != 0) {
        // 0x0042AF54: nop
    
            goto L_0042AF70;
    }
    // 0x0042AF54: nop

L_0042AF58:
    // 0x0042AF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042AF5C:
    // 0x0042AF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF60: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF64: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x0042AF68: j           L_0042AF7C
    // 0x0042AF6C: nop

        goto L_0042AF7C;
    // 0x0042AF6C: nop

L_0042AF70:
    // 0x0042AF70: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF74: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF78: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
L_0042AF7C:
    // 0x0042AF7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AF80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042AF84: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x0042AF88: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x0042AF8C: beq         $v0, $zero, L_0042AFD8
    if (ctx->r2 == 0) {
        // 0x0042AF90: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_0042AFD8;
    }
    // 0x0042AF90: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x0042AF94: beq         $v0, $zero, L_0042B010
    if (ctx->r2 == 0) {
        // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0042B010;
    }
    // 0x0042AF98: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x0042AF9C: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_0042B010;
    }
    // 0x0042AFA0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x0042AFA4: beq         $v0, $zero, L_0042AFBC
    if (ctx->r2 == 0) {
        // 0x0042AFA8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_0042AFBC;
    }
    // 0x0042AFA8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x0042AFAC: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFB0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFB0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFB4: j           L_0042B024
    // 0x0042AFB8: nop

        goto L_0042B024;
    // 0x0042AFB8: nop

L_0042AFBC:
    // 0x0042AFBC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0042AFC0: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_0042B010;
    }
    // 0x0042AFC4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0042AFC8: beq         $v1, $v0, L_0042B010
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFCC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B010;
    }
    // 0x0042AFCC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFD0: j           L_0042B024
    // 0x0042AFD4: nop

        goto L_0042B024;
    // 0x0042AFD4: nop

L_0042AFD8:
    // 0x0042AFD8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x0042AFDC: beq         $v1, $v0, L_0042B018
    if (ctx->r3 == ctx->r2) {
        // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_0042B018;
    }
    // 0x0042AFE0: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x0042AFE4: beq         $v0, $zero, L_0042B004
    if (ctx->r2 == 0) {
        // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_0042B004;
    }
    // 0x0042AFE8: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x0042AFEC: beq         $v0, $zero, L_0042B020
    if (ctx->r2 == 0) {
        // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_0042B020;
    }
    // 0x0042AFF0: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x0042AFF4: bne         $v0, $zero, L_0042B024
    if (ctx->r2 != 0) {
        // 0x0042AFF8: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042AFF8: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x0042AFFC: j           L_0042B024
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B000: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B004:
    // 0x0042B004: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0042B008: bne         $v1, $v0, L_0042B024
    if (ctx->r3 != ctx->r2) {
        // 0x0042B00C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_0042B024;
    }
    // 0x0042B00C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B010:
    // 0x0042B010: j           L_0042B024
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
        goto L_0042B024;
    // 0x0042B014: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_0042B018:
    // 0x0042B018: j           L_0042B024
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
        goto L_0042B024;
    // 0x0042B01C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_0042B020:
    // 0x0042B020: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_0042B024:
    // 0x0042B024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042B028: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042B02C: bnel        $v0, $zero, L_0042B034
    if (ctx->r2 != 0) {
        // 0x0042B030: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_0042B034;
    }
    goto skip_2;
    // 0x0042B030: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_2:
L_0042B034:
    // 0x0042B034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B038: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x0042B03C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B040: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x0042B044: jal         0x00204EDC
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_35;
    // 0x0042B048: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_35:
    // 0x0042B04C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x0042B050: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x0042B054: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0042B058: jal         0x00429F20
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429F20(rdram, ctx);
        goto after_36;
    // 0x0042B05C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_36:
    // 0x0042B060: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x0042B064: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x0042B068: jal         0x00201848
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_37;
    // 0x0042B06C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_37:
    // 0x0042B070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B074: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x0042B078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B07C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B080: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x0042B084: jal         0x00205B94
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_38;
    // 0x0042B088: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_38:
    // 0x0042B08C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B094: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x0042B098: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B09C: addiu       $v0, $v0, -0x4950
    ctx->r2 = ADD32(ctx->r2, -0X4950);
    // 0x0042B0A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B0A4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0A8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x0042B0AC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0B4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0B8: jal         0x00205D0C
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_39;
    // 0x0042B0BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_39:
    // 0x0042B0C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B0C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042B0C8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x0042B0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B0D0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x0042B0D4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x0042B0D8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x0042B0DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B0E0: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x0042B0E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B0E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B0EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B0F0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B0F4: jal         0x00205D0C
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_40;
    // 0x0042B0F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_40:
    // 0x0042B0FC: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B104: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x0042B108: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B10C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x0042B110: jal         0x00201848
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_41;
    // 0x0042B114: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_41:
    // 0x0042B118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B11C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x0042B120: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042B124: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042B128: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0042B12C: jal         0x00205B94
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_42;
    // 0x0042B130: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_42:
    // 0x0042B134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B138: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0042B13C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x0042B140: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B144: addiu       $v0, $v0, -0x4C1C
    ctx->r2 = ADD32(ctx->r2, -0X4C1C);
    // 0x0042B148: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B14C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B150: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x0042B154: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B15C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B160: jal         0x00205D0C
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_43;
    // 0x0042B164: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_43:
    // 0x0042B168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B16C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0042B170: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x0042B174: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B178: addiu       $v0, $v0, -0x32FC
    ctx->r2 = ADD32(ctx->r2, -0X32FC);
    // 0x0042B17C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B180: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B184: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x0042B188: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B18C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B190: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B194: jal         0x00205D0C
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_44;
    // 0x0042B198: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_44:
    // 0x0042B19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0042B1A4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x0042B1A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B1AC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x0042B1B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B1B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042B1B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B1BC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B1C0: jal         0x00205D0C
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_45;
    // 0x0042B1C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_45:
    // 0x0042B1C8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x0042B1CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0042B1D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1D8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x0042B1DC: jal         0x0042AA80
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042AA80(rdram, ctx);
        goto after_46;
    // 0x0042B1E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_46:
    // 0x0042B1E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B1E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0042B1EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B1F0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B1F4: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042B1F8: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0042B1FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B200: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x0042B204: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042B20C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B210: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B214: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0042B218: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0042B21C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042B220: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x0042B224: jal         0x00205D0C
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_47;
    // 0x0042B228: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_47:
    // 0x0042B22C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B230: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x0042B234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0042B238: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0042B23C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0042B240: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B244: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B248: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0042B24C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x0042B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B254: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B258: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0042B25C: addiu       $v0, $v0, -0x45C0
    ctx->r2 = ADD32(ctx->r2, -0X45C0);
    // 0x0042B260: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x0042B264: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x0042B268: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B26C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B270: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x0042B274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042B278: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042B27C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x0042B280: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0042B284: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042B288: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x0042B28C: jal         0x00205D0C
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_48;
    // 0x0042B290: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_48:
    // 0x0042B294: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042B298: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x0042B29C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B2A0: jal         0x0042C79C
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042C79C(rdram, ctx);
        goto after_49;
    // 0x0042B2A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_49:
    // 0x0042B2A8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B2AC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B2B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B2B4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0042B2B8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2BC: beq         $v0, $zero, L_0042B2F0
    if (ctx->r2 == 0) {
        // 0x0042B2C0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B2F0;
    }
    // 0x0042B2C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B2C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B2CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B2D0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_0042B2D4:
    // 0x0042B2D4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B2D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B2DC: jal         0x0021E5D4
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_50;
    // 0x0042B2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_50:
    // 0x0042B2E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B2E8: bne         $v0, $zero, L_0042B2D4
    if (ctx->r2 != 0) {
        // 0x0042B2EC: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_0042B2D4;
    }
    // 0x0042B2EC: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_0042B2F0:
    // 0x0042B2F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B2F4: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0042B2F8: beq         $s1, $zero, L_0042B31C
    if (ctx->r17 == 0) {
        // 0x0042B2FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B31C;
    }
    // 0x0042B2FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B300:
    // 0x0042B300: jal         0x0021E5D4
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_51;
    // 0x0042B304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_51:
    // 0x0042B308: jal         0x0021E5D4
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_52;
    // 0x0042B30C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_52:
    // 0x0042B310: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0042B314: bne         $s1, $zero, L_0042B300
    if (ctx->r17 != 0) {
        // 0x0042B318: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0042B300;
    }
    // 0x0042B318: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B31C:
    // 0x0042B31C: jal         0x0042C840
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C840(rdram, ctx);
        goto after_53;
    // 0x0042B320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_53:
    // 0x0042B324: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x0042B328: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0042B32C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B330: beq         $v0, $zero, L_0042B370
    if (ctx->r2 == 0) {
        // 0x0042B334: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0042B370;
    }
    // 0x0042B334: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0042B338: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B33C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0042B340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0042B344: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_0042B348:
    // 0x0042B348: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0042B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042B350: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x0042B354: jal         0x0021F1B4
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_54;
    // 0x0042B358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_54:
    // 0x0042B35C: jal         0x0021A344
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_55;
    // 0x0042B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_55:
    // 0x0042B364: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0042B368: bne         $v0, $zero, L_0042B348
    if (ctx->r2 != 0) {
        // 0x0042B36C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_0042B348;
    }
    // 0x0042B36C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_0042B370:
    // 0x0042B370: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0042B374: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x0042B378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B380: jal         0x0042E894
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_0042E894(rdram, ctx);
        goto after_56;
    // 0x0042B384: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_56:
    // 0x0042B388: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x0042B38C: jal         0x0042FEEC
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042FEEC(rdram, ctx);
        goto after_57;
    // 0x0042B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_57:
    // 0x0042B394: jal         0x0027ECF0
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_58;
    // 0x0042B398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_58:
    // 0x0042B39C: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x0042B3A0: bne         $v0, $zero, L_0042B3BC
    if (ctx->r2 != 0) {
        // 0x0042B3A4: nop
    
            goto L_0042B3BC;
    }
    // 0x0042B3A4: nop

    // 0x0042B3A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B3AC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042B3B0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x0042B3B4: beq         $v0, $zero, L_0042B3C4
    if (ctx->r2 == 0) {
        // 0x0042B3B8: nop
    
            goto L_0042B3C4;
    }
    // 0x0042B3B8: nop

L_0042B3BC:
    // 0x0042B3BC: jal         0x0042BF48
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042BF48(rdram, ctx);
        goto after_59;
    // 0x0042B3C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_59:
L_0042B3C4:
    // 0x0042B3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0042B3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0042B3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0042B3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042B3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042B3DC: jr          $ra
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042B3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045CD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00423D88:
    // 0x0045CD30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_00423E00:
    // 0x0045CD34: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
L_00423E04:
    // 0x0045CD38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045CD3C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045CD40: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x0045CD44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045CD48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045CD4C: sw          $v0, -0x6718($at)
    MEM_W(-0X6718, ctx->r1) = ctx->r2;
    // 0x0045CD50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045CD54: bne         $v1, $v0, L_0045CD88
    if (ctx->r3 != ctx->r2) {
        // 0x0045CD58: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_0045CD88;
    }
    // 0x0045CD58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0045CD5C: jal         0x00266B80
    // 0x0045CD60: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0045CD60: nop

    after_0:
    // 0x0045CD64: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0045CD68: beq         $v0, $v1, L_0045CD80
    if (ctx->r2 == ctx->r3) {
        // 0x0045CD6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045CD80;
    }
    // 0x0045CD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045CD70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CD74: sw          $v0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r2;
    // 0x0045CD78: j           L_00423D88
    // 0x0045CD7C: nop

    entry_00423D88(rdram, ctx);
    return;
    // 0x0045CD7C: nop

L_0045CD80:
    // 0x0045CD80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CD84: sw          $zero, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = 0;
L_0045CD88:
    // 0x0045CD88: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x0045CD8C: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x0045CD90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045CD94: beq         $v1, $v0, L_0045CDC4
    if (ctx->r3 == ctx->r2) {
        // 0x0045CD98: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0045CDC4;
    }
    // 0x0045CD98: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0045CD9C: beql        $v0, $zero, L_0045CDB4
    if (ctx->r2 == 0) {
        // 0x0045CDA0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0045CDB4;
    }
    goto skip_0;
    // 0x0045CDA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0045CDA4: beq         $v1, $zero, L_0045CDE4
    if (ctx->r3 == 0) {
        // 0x0045CDA8: nop
    
            goto L_0045CDE4;
    }
    // 0x0045CDA8: nop

    // 0x0045CDAC: j           L_00423E04
    // 0x0045CDB0: nop

    entry_00423E04(rdram, ctx);
    return;
    // 0x0045CDB0: nop

L_0045CDB4:
    // 0x0045CDB4: beq         $v1, $v0, L_0045CDE4
    if (ctx->r3 == ctx->r2) {
        // 0x0045CDB8: nop
    
            goto L_0045CDE4;
    }
    // 0x0045CDB8: nop

    // 0x0045CDBC: j           L_00423E04
    // 0x0045CDC0: nop

    entry_00423E04(rdram, ctx);
    return;
    // 0x0045CDC0: nop

L_0045CDC4:
    // 0x0045CDC4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045CDC8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x0045CDCC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x0045CDD0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0045CDD4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045CDD8: addiu       $v0, $v0, 0x2054
    ctx->r2 = ADD32(ctx->r2, 0X2054);
    // 0x0045CDDC: j           L_00423E00
    // 0x0045CDE0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    entry_00423E00(rdram, ctx);
    return;
    // 0x0045CDE0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_0045CDE4:
    // 0x0045CDE4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045CDE8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x0045CDEC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x0045CDF0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0045CDF4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045CDF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045CDFC: addiu       $v0, $v0, 0x20E0
    ctx->r2 = ADD32(ctx->r2, 0X20E0);
    // 0x0045CE00: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
    // 0x0045CE04: beq         $s0, $zero, L_0045CF18
    if (ctx->r16 == 0) {
        // 0x0045CE08: nop
    
            goto L_0045CF18;
    }
    // 0x0045CE08: nop

    // 0x0045CE0C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045CE10: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x0045CE14: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0045CE18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045CE1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045CE20: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CE24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045CE28: lw          $t0, 0x216C($at)
    ctx->r8 = MEM_W(ctx->r1, 0X216C);
    // 0x0045CE2C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CE30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045CE34: lw          $t1, 0x2170($at)
    ctx->r9 = MEM_W(ctx->r1, 0X2170);
    // 0x0045CE38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CE3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045CE40: lw          $t2, 0x2174($at)
    ctx->r10 = MEM_W(ctx->r1, 0X2174);
    // 0x0045CE44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CE48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045CE4C: lw          $t3, 0x2178($at)
    ctx->r11 = MEM_W(ctx->r1, 0X2178);
    // 0x0045CE50: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0045CE54: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0045CE58: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0045CE5C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x0045CE60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CE64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045CE68: lw          $t0, 0x217C($at)
    ctx->r8 = MEM_W(ctx->r1, 0X217C);
    // 0x0045CE6C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0045CE70: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0045CE74: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0045CE78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0045CE7C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0045CE80: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0045CE84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CE88: sw          $v0, 0x2044($at)
    MEM_W(0X2044, ctx->r1) = ctx->r2;
    // 0x0045CE8C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0045CE90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0045CE94: sw          $v1, -0x4770($at)
    MEM_W(-0X4770, ctx->r1) = ctx->r3;
    // 0x0045CE98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0045CE9C: sw          $a0, -0x476C($at)
    MEM_W(-0X476C, ctx->r1) = ctx->r4;
    // 0x0045CEA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0045CEA4: sw          $a1, -0x4768($at)
    MEM_W(-0X4768, ctx->r1) = ctx->r5;
    // 0x0045CEA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0045CEAC: sw          $a2, -0x4764($at)
    MEM_W(-0X4764, ctx->r1) = ctx->r6;
    // 0x0045CEB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0045CEB4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0045CEB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045CEBC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0045CEC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CEC4: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // 0x0045CEC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045CECC: sw          $a0, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r4;
    // 0x0045CED0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0045CED4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0045CED8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0045CEDC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0045CEE0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0045CEE4: jal         0x0042456C
    // 0x0045CEE8: nop

    entry_0042456C(rdram, ctx);
        goto after_1;
    // 0x0045CEE8: nop

    after_1:
    // 0x0045CEEC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045CEF0: lw          $v0, 0x2044($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2044);
    // 0x0045CEF4: beq         $v0, $zero, L_0045CF00
    if (ctx->r2 == 0) {
        // 0x0045CEF8: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_0045CF00;
    }
    // 0x0045CEF8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x0045CEFC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_0045CF00:
    // 0x0045CF00: jal         0x0029AAD0
    // 0x0045CF04: nop

    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x0045CF04: nop

    after_2:
    // 0x0045CF08: jal         0x0029AAD0
    // 0x0045CF0C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_3;
    // 0x0045CF0C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x0045CF10: jal         0x0029AAD0
    // 0x0045CF14: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_4;
    // 0x0045CF14: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
L_0045CF18:
    // 0x0045CF18: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0045CF1C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0045CF20: jr          $ra
    // 0x0045CF24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0045CF24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0025ABD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025ABD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025ABDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025ABE0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025ABE4: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025ABE8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025ABEC: addiu       $a2, $a2, 0x510
    ctx->r6 = ADD32(ctx->r6, 0X510);
    // 0x0025ABF0: jal         0x00245A98
    // 0x0025ABF4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025ABF4: nop

    after_0:
    // 0x0025ABF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025ABFC: jr          $ra
    // 0x0025AC00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AC00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044C05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C05C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044C060: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044C064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044C068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044C06C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044C070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044C074: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044C078: jal         0x002017D4
    // 0x0044C07C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044C07C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044C080: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C084: jal         0x002017D4
    // 0x0044C088: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044C088: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044C08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044C090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044C094: jr          $ra
    // 0x0044C098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044C098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00465620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00465624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00465628: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0046562C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465630: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465634: sw          $v0, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = ctx->r2;
    // 0x00465638: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0046563C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465640: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465644: sw          $a2, -0x7054($at)
    MEM_W(-0X7054, ctx->r1) = ctx->r6;
    // 0x00465648: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046564C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465650: sw          $a1, -0x702C($at)
    MEM_W(-0X702C, ctx->r1) = ctx->r5;
    // 0x00465654: bne         $a2, $v0, L_0046566C
    if (ctx->r6 != ctx->r2) {
        // 0x00465658: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_0046566C;
    }
    // 0x00465658: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    // 0x0046565C: beq         $a1, $v0, L_0046566C
    if (ctx->r5 == ctx->r2) {
        // 0x00465660: nop
    
            goto L_0046566C;
    }
    // 0x00465660: nop

    // 0x00465664: jal         0x00275624
    // 0x00465668: addiu       $a0, $zero, 0xBE0
    ctx->r4 = ADD32(0, 0XBE0);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x00465668: addiu       $a0, $zero, 0xBE0
    ctx->r4 = ADD32(0, 0XBE0);
    after_0:
L_0046566C:
    // 0x0046566C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00465670: jr          $ra
    // 0x00465674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00465674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0044C22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00418B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418B10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418B14: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x00418B18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418B20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418B24: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418B28: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418B2C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418B30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418B38: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418B3C: lb          $v0, 0x21($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X21);
    // 0x00418B40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418B44: jal         0x0041648C
    // 0x00418B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418B4C: sb          $v0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r2;
    // 0x00418B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418B58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418B5C: jr          $ra
    // 0x00418B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00293028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293028: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0029302C: jr          $ra
    // 0x00293030: nop

    return;
    // 0x00293030: nop

;}
RECOMP_FUNC void func_00286440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00286440: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00286444: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00286448: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0028644C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00286450: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00286454: addiu       $s2, $s2, -0x52D8
    ctx->r18 = ADD32(ctx->r18, -0X52D8);
    // 0x00286458: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028645C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00286460: addiu       $a1, $a1, -0x4EE0
    ctx->r5 = ADD32(ctx->r5, -0X4EE0);
    // 0x00286464: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    // 0x00286468: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0028646C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00286470: jal         0x0029B030
    // 0x00286474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00286474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x00286478: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x0028647C: addiu       $s0, $s0, -0x380
    ctx->r16 = ADD32(ctx->r16, -0X380);
    // 0x00286480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00286484: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x00286488: jal         0x00266C5C
    // 0x0028648C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x0028648C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    after_1:
    // 0x00286490: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00286494: addiu       $s1, $s1, -0x5270
    ctx->r17 = ADD32(ctx->r17, -0X5270);
    // 0x00286498: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028649C: addiu       $a1, $s0, 0x2000
    ctx->r5 = ADD32(ctx->r16, 0X2000);
    // 0x002864A0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x002864A4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002864A8: lw          $a2, 0x6E98($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6E98);
    // 0x002864AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002864B0: jal         0x0028ADF0
    // 0x002864B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0028ADF0(rdram, ctx);
        goto after_2;
    // 0x002864B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x002864B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002864BC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x002864C0: addiu       $a1, $a1, -0xED8
    ctx->r5 = ADD32(ctx->r5, -0XED8);
    // 0x002864C4: jal         0x0028AF00
    // 0x002864C8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0028AF00(rdram, ctx);
        goto after_3;
    // 0x002864C8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x002864CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002864D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002864D4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x002864D8: sw          $v0, 0x3FD4($at)
    MEM_W(0X3FD4, ctx->r1) = ctx->r2;
    // 0x002864DC: jal         0x0028891C
    // 0x002864E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0028891C(rdram, ctx);
        goto after_4;
    // 0x002864E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x002864E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002864E8: addiu       $a0, $a0, -0x4F38
    ctx->r4 = ADD32(ctx->r4, -0X4F38);
    // 0x002864EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002864F0: sw          $zero, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = 0;
    // 0x002864F4: jal         0x00297AE0
    // 0x002864F8: nop

    func_00297AE0(rdram, ctx);
        goto after_5;
    // 0x002864F8: nop

    after_5:
    // 0x002864FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00286500: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X690);
    // 0x00286504: beql        $v0, $zero, L_00286528
    if (ctx->r2 == 0) {
        // 0x00286508: lui         $a0, 0x2
        ctx->r4 = S32(0X2 << 16);
            goto L_00286528;
    }
    goto skip_0;
    // 0x00286508: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    skip_0:
    // 0x0028650C: jal         0x0028D0B8
    // 0x00286510: nop

    func_0028D0B8(rdram, ctx);
        goto after_6;
    // 0x00286510: nop

    after_6:
    // 0x00286514: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00286518: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0028651C: jal         0x0041BA50
    // 0x00286520: nop

    func_0041BA50(rdram, ctx);
        goto after_7;
    // 0x00286520: nop

    after_7:
    // 0x00286524: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
L_00286528:
    // 0x00286528: ori         $a0, $a0, 0x3DF0
    ctx->r4 = ctx->r4 | 0X3DF0;
    // 0x0028652C: jal         0x00430500
    // 0x00286530: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_00430500(rdram, ctx);
        goto after_8;
    // 0x00286530: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_8:
    // 0x00286534: jal         0x002837E0
    // 0x00286538: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_002837E0(rdram, ctx);
        goto after_9;
    // 0x00286538: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_9:
    // 0x0028653C: jal         0x004302A0
    // 0x00286540: nop

    func_004302A0(rdram, ctx);
        goto after_10;
    // 0x00286540: nop

    after_10:
    // 0x00286544: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00286548: ori         $a0, $a0, 0x3FAC
    ctx->r4 = ctx->r4 | 0X3FAC;
    // 0x0028654C: jal         0x0042D1C0
    // 0x00286550: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D1C0(rdram, ctx);
        goto after_11;
    // 0x00286550: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_11:
    // 0x00286554: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00286558: lw          $a0, 0x2210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2210);
    // 0x0028655C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00286560: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00286564: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00286568: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0028656C: sw          $zero, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = 0;
    // 0x00286570: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00286574: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00286578: sw          $s0, 0x3FE8($at)
    MEM_W(0X3FE8, ctx->r1) = ctx->r16;
    // 0x0028657C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00286580: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00286584: sw          $zero, 0x3FEC($at)
    MEM_W(0X3FEC, ctx->r1) = 0;
    // 0x00286588: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0028658C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00286590: sw          $zero, 0x3FF4($at)
    MEM_W(0X3FF4, ctx->r1) = 0;
    // 0x00286594: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00286598: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x0028659C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x002865A0: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x002865A4: beq         $a0, $zero, L_00286648
    if (ctx->r4 == 0) {
        // 0x002865A8: addiu       $s2, $zero, 0x2
        ctx->r18 = ADD32(0, 0X2);
            goto L_00286648;
    }
    // 0x002865A8: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x002865AC: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_002865B0:
    // 0x002865B0: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x002865B4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002865B8: divu        $zero, $v0, $a0
    lo = S32(U32(ctx->r2) / U32(ctx->r4)); hi = S32(U32(ctx->r2) % U32(ctx->r4));
    // 0x002865BC: bne         $a0, $zero, L_002865C8
    if (ctx->r4 != 0) {
        // 0x002865C0: nop
    
            goto L_002865C8;
    }
    // 0x002865C0: nop

    // 0x002865C4: break       7
    do_break(2647492);
L_002865C8:
    // 0x002865C8: mfhi        $v1
    ctx->r3 = hi;
    // 0x002865CC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x002865D0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002865D4: divu        $zero, $v0, $a0
    lo = S32(U32(ctx->r2) / U32(ctx->r4)); hi = S32(U32(ctx->r2) % U32(ctx->r4));
    // 0x002865D8: bne         $a0, $zero, L_002865E4
    if (ctx->r4 != 0) {
        // 0x002865DC: nop
    
            goto L_002865E4;
    }
    // 0x002865DC: nop

    // 0x002865E0: break       7
    do_break(2647520);
L_002865E4:
    // 0x002865E4: mfhi        $a1
    ctx->r5 = hi;
    // 0x002865E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002865EC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x002865F0: sh          $s2, 0xF0($s0)
    MEM_H(0XF0, ctx->r16) = ctx->r18;
    // 0x002865F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x002865F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002865FC: lw          $v0, 0xA88($at)
    ctx->r2 = MEM_W(ctx->r1, 0XA88);
    // 0x00286600: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00286604: sw          $v0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->r2;
    // 0x00286608: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028660C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00286610: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00286614: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00286618: sw          $v0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->r2;
    // 0x0028661C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00286620: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00286624: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00286628: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x0028662C: jal         0x00228BB0
    // 0x00286630: sw          $v0, 0x130($s0)
    MEM_W(0X130, ctx->r16) = ctx->r2;
    func_00228BB0(rdram, ctx);
        goto after_12;
    // 0x00286630: sw          $v0, 0x130($s0)
    MEM_W(0X130, ctx->r16) = ctx->r2;
    after_12:
    // 0x00286634: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00286638: lw          $a0, 0x2210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2210);
    // 0x0028663C: sltu        $v0, $s1, $a0
    ctx->r2 = ctx->r17 < ctx->r4 ? 1 : 0;
    // 0x00286640: bne         $v0, $zero, L_002865B0
    if (ctx->r2 != 0) {
        // 0x00286644: addiu       $s0, $s0, 0x140
        ctx->r16 = ADD32(ctx->r16, 0X140);
            goto L_002865B0;
    }
    // 0x00286644: addiu       $s0, $s0, 0x140
    ctx->r16 = ADD32(ctx->r16, 0X140);
L_00286648:
    // 0x00286648: jal         0x00288318
    // 0x0028664C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00288318(rdram, ctx);
        goto after_13;
    // 0x0028664C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x00286650: jal         0x00275520
    // 0x00286654: nop

    func_00275520(rdram, ctx);
        goto after_14;
    // 0x00286654: nop

    after_14:
    // 0x00286658: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028665C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00286660: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00286664: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00286668: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028666C: jr          $ra
    // 0x00286670: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00286670: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025A810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A818: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A81C: lhu         $a3, 0x86($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X86);
    // 0x0025A820: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A824: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    // 0x0025A828: jal         0x00245A98
    // 0x0025A82C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A82C: nop

    after_0:
    // 0x0025A830: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A834: jr          $ra
    // 0x0025A838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045BC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00416AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416AF8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00416AFC: beq         $a0, $zero, L_00416B20
    if (ctx->r4 == 0) {
        // 0x00416B00: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00416B20;
    }
    // 0x00416B00: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00416B04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_00416B08:
    // 0x00416B08: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x00416B0C: bnel        $v0, $a1, L_00416B14
    if (ctx->r2 != ctx->r5) {
        // 0x00416B10: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00416B14;
    }
    goto skip_0;
    // 0x00416B10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_00416B14:
    // 0x00416B14: lw          $a0, 0x1D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D4);
    // 0x00416B18: bne         $a0, $zero, L_00416B08
    if (ctx->r4 != 0) {
        // 0x00416B1C: nop
    
            goto L_00416B08;
    }
    // 0x00416B1C: nop

L_00416B20:
    // 0x00416B20: jr          $ra
    // 0x00416B24: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00416B24: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00441FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441FB0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00441FB4: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00441FB8: beq         $v1, $zero, L_00441FE8
    if (ctx->r3 == 0) {
        // 0x00441FBC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00441FE8;
    }
    // 0x00441FBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00441FC0:
    // 0x00441FC0: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00441FC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441FC8: bne         $v0, $a0, L_00441FDC
    if (ctx->r2 != ctx->r4) {
        // 0x00441FCC: nop
    
            goto L_00441FDC;
    }
    // 0x00441FCC: nop

    // 0x00441FD0: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00441FD4: bne         $v0, $zero, L_00441FE8
    if (ctx->r2 != 0) {
        // 0x00441FD8: nop
    
            goto L_00441FE8;
    }
    // 0x00441FD8: nop

L_00441FDC:
    // 0x00441FDC: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00441FE0: bne         $v1, $zero, L_00441FC0
    if (ctx->r3 != 0) {
        // 0x00441FE4: nop
    
            goto L_00441FC0;
    }
    // 0x00441FE4: nop

L_00441FE8:
    // 0x00441FE8: jr          $ra
    // 0x00441FEC: nop

    return;
    // 0x00441FEC: nop

;}
RECOMP_FUNC void func_0041B8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B8B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B8B4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B8B8: xori        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 ^ 0X2000;
    // 0x0041B8BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B8C0: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B8C4: jr          $ra
    // 0x0041B8C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B8C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00266F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266F54: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00266F58: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x00266F5C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00266F60: nop

    // 0x00266F64: bc1t        L_00266F84
    if (c1cs) {
        // 0x00266F68: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00266F84;
    }
    // 0x00266F68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00266F6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00266F70: lwc1        $f1, 0x7D18($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7D18);
    // 0x00266F74: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00266F78: nop

    // 0x00266F7C: bc1f        L_00266F88
    if (!c1cs) {
        // 0x00266F80: nop
    
            goto L_00266F88;
    }
    // 0x00266F80: nop

L_00266F84:
    // 0x00266F84: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_00266F88:
    // 0x00266F88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00266F8C: lwc1        $f12, 0x7D1C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7D1C);
    // 0x00266F90: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00266F94: jal         0x002974C0
    // 0x00266F98: nop

    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x00266F98: nop

    after_0:
    // 0x00266F9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00266FA0: lwc1        $f1, 0x7D20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7D20);
    // 0x00266FA4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00266FA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00266FAC: lwc1        $f0, 0x7D24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7D24);
    // 0x00266FB0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00266FB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00266FB8: jr          $ra
    // 0x00266FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042ECF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042ECF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042ECF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042ECF8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042ECFC: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0042ED00: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042ED04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042ED08: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042ED0C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042ED10: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x0042ED14: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0042ED18: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042ED1C: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x0042ED20: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042ED24: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x0042ED28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042ED2C: srl         $v1, $a3, 3
    ctx->r3 = S32(U32(ctx->r7) >> 3);
    // 0x0042ED30: andi        $a3, $a3, 0x7
    ctx->r7 = ctx->r7 & 0X7;
    // 0x0042ED34: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042ED38: srav        $a3, $t1, $a3
    ctx->r7 = S32(SIGNED(ctx->r9) >> (ctx->r7 & 31));
    // 0x0042ED3C: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0042ED40: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x0042ED44: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042ED48: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x0042ED4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0042ED50: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042ED54: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0042ED58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042ED5C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0042ED60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0042ED64: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042ED68: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0042ED6C: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x0042ED70: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x0042ED74: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x0042ED78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042ED7C: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x0042ED80: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0042ED84: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042ED88: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0042ED8C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042ED90: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x0042ED94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042ED98: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0042ED9C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0042EDA0: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x0042EDA4: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0042EDA8: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x0042EDAC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x0042EDB0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0042EDB4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042EDB8: srl         $v1, $a3, 3
    ctx->r3 = S32(U32(ctx->r7) >> 3);
    // 0x0042EDBC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0042EDC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042EDC4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0042EDC8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042EDCC: andi        $a3, $a3, 0x7
    ctx->r7 = ctx->r7 & 0X7;
    // 0x0042EDD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EDD4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0042EDD8: srav        $a3, $t1, $a3
    ctx->r7 = S32(SIGNED(ctx->r9) >> (ctx->r7 & 31));
    // 0x0042EDDC: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0042EDE0: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x0042EDE4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0042EDE8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0042EDEC: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x0042EDF0: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x0042EDF4: sll         $v1, $v1, 13
    ctx->r3 = S32(ctx->r3 << 13);
    // 0x0042EDF8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042EDFC: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x0042EE00: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0042EE04: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042EE08: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x0042EE0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EE10: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042EE14: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0042EE18: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x0042EE1C: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x0042EE20: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x0042EE24: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042EE28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0042EE2C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0042EE30: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0042EE34: srl         $v1, $a1, 3
    ctx->r3 = S32(U32(ctx->r5) >> 3);
    // 0x0042EE38: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0042EE3C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042EE40: srav        $a1, $t1, $a1
    ctx->r5 = S32(SIGNED(ctx->r9) >> (ctx->r5 & 31));
    // 0x0042EE44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EE48: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042EE4C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042EE4C(rdram, ctx);
;}
RECOMP_FUNC void func_00228484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00228488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022848C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00228490: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00228494: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00228498: lw          $v1, 0x290($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X290);
    // 0x0022849C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002284A0: beq         $v1, $zero, L_002284B4
    if (ctx->r3 == 0) {
        // 0x002284A4: sw          $zero, 0x144($s0)
        MEM_W(0X144, ctx->r16) = 0;
            goto L_002284B4;
    }
    // 0x002284A4: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x002284A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002284AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002284B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002284B4:
    // 0x002284B4: addiu       $a0, $s1, 0x5314
    ctx->r4 = ADD32(ctx->r17, 0X5314);
    // 0x002284B8: jal         0x00200738
    // 0x002284BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x002284BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002284C0: addiu       $a0, $s1, 0x5300
    ctx->r4 = ADD32(ctx->r17, 0X5300);
    // 0x002284C4: jal         0x00200574
    // 0x002284C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x002284C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002284CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002284D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002284D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002284D8: jr          $ra
    // 0x002284DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002284DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00298DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298DF0: lui         $v0, 0xA410
    ctx->r2 = S32(0XA410 << 16);
    // 0x00298DF4: ori         $v0, $v0, 0xC
    ctx->r2 = ctx->r2 | 0XC;
    // 0x00298DF8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00298DFC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00298E00: jr          $ra
    // 0x00298E04: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x00298E04: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0029B138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B138: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029B13C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x0029B140 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029B140(rdram, ctx);
;}
RECOMP_FUNC void func_004515C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0025DF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025DF04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025DF08: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0025DF0C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0025DF10: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0025DF14: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0025DF18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025DF1C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0025DF20: lui         $a1, 0xFC0F
    ctx->r5 = S32(0XFC0F << 16);
    // 0x0025DF24: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x0025DF28: lui         $v1, 0x3F0
    ctx->r3 = S32(0X3F0 << 16);
    // 0x0025DF2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0025DF30: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0025DF34: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0025DF38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025DF3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025DF40: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0025DF44: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x0025DF48: lb          $s1, 0x133($s4)
    ctx->r17 = MEM_B(ctx->r20, 0X133);
    // 0x0025DF4C: and         $s5, $v0, $v1
    ctx->r21 = ctx->r2 & ctx->r3;
    // 0x0025DF50: and         $s6, $v0, $a1
    ctx->r22 = ctx->r2 & ctx->r5;
    // 0x0025DF54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0025DF58: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0025DF5C: lw          $a1, 0x10($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X10);
    // 0x0025DF60: beq         $v0, $v1, L_0025DF70
    if (ctx->r2 == ctx->r3) {
        // 0x0025DF64: addiu       $s2, $a0, 0x14
        ctx->r18 = ADD32(ctx->r4, 0X14);
            goto L_0025DF70;
    }
    // 0x0025DF64: addiu       $s2, $a0, 0x14
    ctx->r18 = ADD32(ctx->r4, 0X14);
    // 0x0025DF68: j           L_0025E220
    // 0x0025DF6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0025E220;
    // 0x0025DF6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025DF70:
    // 0x0025DF70: beq         $a1, $zero, L_0025DFD0
    if (ctx->r5 == 0) {
        // 0x0025DF74: lui         $v0, 0xC0
        ctx->r2 = S32(0XC0 << 16);
            goto L_0025DFD0;
    }
    // 0x0025DF74: lui         $v0, 0xC0
    ctx->r2 = S32(0XC0 << 16);
    // 0x0025DF78: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025DF7C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025DF80: jal         0x0022425C
    // 0x0025DF84: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0025DF84: nop

    after_0:
    // 0x0025DF88: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0025DF8C: beq         $a0, $zero, L_0025DFCC
    if (ctx->r4 == 0) {
        // 0x0025DF90: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_0025DFCC;
    }
    // 0x0025DF90: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025DF94: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0025DF98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025DF9C: bnel        $v0, $zero, L_0025DFB4
    if (ctx->r2 != 0) {
        // 0x0025DFA0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025DFB4;
    }
    goto skip_0;
    // 0x0025DFA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_0:
    // 0x0025DFA4: lhu         $v0, 0x52($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X52);
    // 0x0025DFA8: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x0025DFAC: beq         $v0, $zero, L_0025DFCC
    if (ctx->r2 == 0) {
        // 0x0025DFB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025DFCC;
    }
    // 0x0025DFB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025DFB4:
    // 0x0025DFB4: jal         0x0025AA4C
    // 0x0025DFB8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025AA4C(rdram, ctx);
        goto after_1;
    // 0x0025DFB8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_1:
    // 0x0025DFBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0025DFC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025DFC4: bne         $s0, $v0, L_0025E220
    if (ctx->r16 != ctx->r2) {
        // 0x0025DFC8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0025E220;
    }
    // 0x0025DFC8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0025DFCC:
    // 0x0025DFCC: lui         $v0, 0xC0
    ctx->r2 = S32(0XC0 << 16);
L_0025DFD0:
    // 0x0025DFD0: and         $v0, $s5, $v0
    ctx->r2 = ctx->r21 & ctx->r2;
    // 0x0025DFD4: beq         $v0, $zero, L_0025E078
    if (ctx->r2 == 0) {
        // 0x0025DFD8: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0025E078;
    }
    // 0x0025DFD8: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0025DFDC: bne         $s1, $zero, L_0025E008
    if (ctx->r17 != 0) {
        // 0x0025DFE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025E008;
    }
    // 0x0025DFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025DFE4: lhu         $v0, 0x7C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X7C);
    // 0x0025DFE8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025DFEC: beq         $v0, $zero, L_0025E004
    if (ctx->r2 == 0) {
        // 0x0025DFF0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E004;
    }
    // 0x0025DFF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025DFF4: jal         0x0025A9C8
    // 0x0025DFF8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A9C8(rdram, ctx);
        goto after_2;
    // 0x0025DFF8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0025DFFC: j           L_0025E058
    // 0x0025E000: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E058;
    // 0x0025E000: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E004:
    // 0x0025E004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025E008:
    // 0x0025E008: bne         $s1, $v0, L_0025E034
    if (ctx->r17 != ctx->r2) {
        // 0x0025E00C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025E034;
    }
    // 0x0025E00C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025E010: lhu         $v0, 0x7C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X7C);
    // 0x0025E014: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025E018: beq         $v0, $zero, L_0025E030
    if (ctx->r2 == 0) {
        // 0x0025E01C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E030;
    }
    // 0x0025E01C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E020: jal         0x0025A9F4
    // 0x0025E024: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A9F4(rdram, ctx);
        goto after_3;
    // 0x0025E024: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_3:
    // 0x0025E028: j           L_0025E058
    // 0x0025E02C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E058;
    // 0x0025E02C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E030:
    // 0x0025E030: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0025E034:
    // 0x0025E034: bne         $s1, $v0, L_0025E05C
    if (ctx->r17 != ctx->r2) {
        // 0x0025E038: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E05C;
    }
    // 0x0025E038: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E03C: lhu         $v0, 0x7C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X7C);
    // 0x0025E040: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025E044: beq         $v0, $zero, L_0025E060
    if (ctx->r2 == 0) {
        // 0x0025E048: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0025E060;
    }
    // 0x0025E048: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025E04C: jal         0x0025AA20
    // 0x0025E050: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025AA20(rdram, ctx);
        goto after_4;
    // 0x0025E050: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x0025E054: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E058:
    // 0x0025E058: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025E05C:
    // 0x0025E05C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0025E060:
    // 0x0025E060: jal         0x00219F74
    // 0x0025E064: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_5;
    // 0x0025E064: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
    // 0x0025E068: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0025E06C: beql        $v0, $v1, L_0025E074
    if (ctx->r2 == ctx->r3) {
        // 0x0025E070: lui         $s5, 0x20
        ctx->r21 = S32(0X20 << 16);
            goto L_0025E074;
    }
    goto skip_1;
    // 0x0025E070: lui         $s5, 0x20
    ctx->r21 = S32(0X20 << 16);
    skip_1:
L_0025E074:
    // 0x0025E074: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
L_0025E078:
    // 0x0025E078: and         $v0, $s5, $v0
    ctx->r2 = ctx->r21 & ctx->r2;
    // 0x0025E07C: beq         $v0, $zero, L_0025E120
    if (ctx->r2 == 0) {
        // 0x0025E080: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025E120;
    }
    // 0x0025E080: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025E084: bne         $s1, $zero, L_0025E0B0
    if (ctx->r17 != 0) {
        // 0x0025E088: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025E0B0;
    }
    // 0x0025E088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025E08C: lhu         $v0, 0x7A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X7A);
    // 0x0025E090: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025E094: beq         $v0, $zero, L_0025E0AC
    if (ctx->r2 == 0) {
        // 0x0025E098: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E0AC;
    }
    // 0x0025E098: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E09C: jal         0x0025A944
    // 0x0025E0A0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A944(rdram, ctx);
        goto after_6;
    // 0x0025E0A0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x0025E0A4: j           L_0025E100
    // 0x0025E0A8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E100;
    // 0x0025E0A8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E0AC:
    // 0x0025E0AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025E0B0:
    // 0x0025E0B0: bne         $s1, $v0, L_0025E0DC
    if (ctx->r17 != ctx->r2) {
        // 0x0025E0B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025E0DC;
    }
    // 0x0025E0B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025E0B8: lhu         $v0, 0x7A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X7A);
    // 0x0025E0BC: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025E0C0: beq         $v0, $zero, L_0025E0D8
    if (ctx->r2 == 0) {
        // 0x0025E0C4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E0D8;
    }
    // 0x0025E0C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E0C8: jal         0x0025A970
    // 0x0025E0CC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A970(rdram, ctx);
        goto after_7;
    // 0x0025E0CC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x0025E0D0: j           L_0025E100
    // 0x0025E0D4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E100;
    // 0x0025E0D4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E0D8:
    // 0x0025E0D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0025E0DC:
    // 0x0025E0DC: bne         $s1, $v0, L_0025E104
    if (ctx->r17 != ctx->r2) {
        // 0x0025E0E0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E104;
    }
    // 0x0025E0E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E0E4: lhu         $v0, 0x7A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X7A);
    // 0x0025E0E8: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025E0EC: beq         $v0, $zero, L_0025E108
    if (ctx->r2 == 0) {
        // 0x0025E0F0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0025E108;
    }
    // 0x0025E0F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025E0F4: jal         0x0025A99C
    // 0x0025E0F8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A99C(rdram, ctx);
        goto after_8;
    // 0x0025E0F8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_8:
    // 0x0025E0FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E100:
    // 0x0025E100: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025E104:
    // 0x0025E104: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0025E108:
    // 0x0025E108: jal         0x00219F74
    // 0x0025E10C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_9;
    // 0x0025E10C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_9:
    // 0x0025E110: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0025E114: beql        $v0, $v1, L_0025E11C
    if (ctx->r2 == ctx->r3) {
        // 0x0025E118: lui         $s5, 0x10
        ctx->r21 = S32(0X10 << 16);
            goto L_0025E11C;
    }
    goto skip_2;
    // 0x0025E118: lui         $s5, 0x10
    ctx->r21 = S32(0X10 << 16);
    skip_2:
L_0025E11C:
    // 0x0025E11C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0025E120:
    // 0x0025E120: bne         $s0, $v0, L_0025E218
    if (ctx->r16 != ctx->r2) {
        // 0x0025E124: or          $v0, $s6, $s5
        ctx->r2 = ctx->r22 | ctx->r21;
            goto L_0025E218;
    }
    // 0x0025E124: or          $v0, $s6, $s5
    ctx->r2 = ctx->r22 | ctx->r21;
    // 0x0025E128: bne         $s1, $zero, L_0025E178
    if (ctx->r17 != 0) {
        // 0x0025E12C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025E178;
    }
    // 0x0025E12C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025E130: lhu         $v0, 0x78($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X78);
    // 0x0025E134: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025E138: beq         $v0, $zero, L_0025E168
    if (ctx->r2 == 0) {
        // 0x0025E13C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E168;
    }
    // 0x0025E13C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E140: lh          $v1, 0xC4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0XC4);
    // 0x0025E144: slti        $v0, $v1, 0x7D0
    ctx->r2 = SIGNED(ctx->r3) < 0X7D0 ? 1 : 0;
    // 0x0025E148: bne         $v0, $zero, L_0025E168
    if (ctx->r2 != 0) {
        // 0x0025E14C: slti        $v0, $v1, 0x7E9
        ctx->r2 = SIGNED(ctx->r3) < 0X7E9 ? 1 : 0;
            goto L_0025E168;
    }
    // 0x0025E14C: slti        $v0, $v1, 0x7E9
    ctx->r2 = SIGNED(ctx->r3) < 0X7E9 ? 1 : 0;
    // 0x0025E150: beq         $v0, $zero, L_0025E168
    if (ctx->r2 == 0) {
        // 0x0025E154: nop
    
            goto L_0025E168;
    }
    // 0x0025E154: nop

    // 0x0025E158: jal         0x0025A8C0
    // 0x0025E15C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A8C0(rdram, ctx);
        goto after_10;
    // 0x0025E15C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_10:
    // 0x0025E160: j           L_0025E214
    // 0x0025E164: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E214;
    // 0x0025E164: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E168:
    // 0x0025E168: jal         0x0025A83C
    // 0x0025E16C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A83C(rdram, ctx);
        goto after_11;
    // 0x0025E16C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_11:
    // 0x0025E170: j           L_0025E214
    // 0x0025E174: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E214;
    // 0x0025E174: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E178:
    // 0x0025E178: bne         $s1, $v0, L_0025E1C8
    if (ctx->r17 != ctx->r2) {
        // 0x0025E17C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025E1C8;
    }
    // 0x0025E17C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025E180: lhu         $v0, 0x78($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X78);
    // 0x0025E184: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025E188: beq         $v0, $zero, L_0025E1B8
    if (ctx->r2 == 0) {
        // 0x0025E18C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E1B8;
    }
    // 0x0025E18C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E190: lh          $v1, 0xC4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0XC4);
    // 0x0025E194: slti        $v0, $v1, 0x834
    ctx->r2 = SIGNED(ctx->r3) < 0X834 ? 1 : 0;
    // 0x0025E198: bne         $v0, $zero, L_0025E1B8
    if (ctx->r2 != 0) {
        // 0x0025E19C: slti        $v0, $v1, 0x84D
        ctx->r2 = SIGNED(ctx->r3) < 0X84D ? 1 : 0;
            goto L_0025E1B8;
    }
    // 0x0025E19C: slti        $v0, $v1, 0x84D
    ctx->r2 = SIGNED(ctx->r3) < 0X84D ? 1 : 0;
    // 0x0025E1A0: beq         $v0, $zero, L_0025E1B8
    if (ctx->r2 == 0) {
        // 0x0025E1A4: nop
    
            goto L_0025E1B8;
    }
    // 0x0025E1A4: nop

    // 0x0025E1A8: jal         0x0025A8EC
    // 0x0025E1AC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A8EC(rdram, ctx);
        goto after_12;
    // 0x0025E1AC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_12:
    // 0x0025E1B0: j           L_0025E214
    // 0x0025E1B4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E214;
    // 0x0025E1B4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E1B8:
    // 0x0025E1B8: jal         0x0025A868
    // 0x0025E1BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A868(rdram, ctx);
        goto after_13;
    // 0x0025E1BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_13:
    // 0x0025E1C0: j           L_0025E214
    // 0x0025E1C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E214;
    // 0x0025E1C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E1C8:
    // 0x0025E1C8: bne         $s1, $v0, L_0025E218
    if (ctx->r17 != ctx->r2) {
        // 0x0025E1CC: or          $v0, $s6, $s5
        ctx->r2 = ctx->r22 | ctx->r21;
            goto L_0025E218;
    }
    // 0x0025E1CC: or          $v0, $s6, $s5
    ctx->r2 = ctx->r22 | ctx->r21;
    // 0x0025E1D0: lhu         $v0, 0x78($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X78);
    // 0x0025E1D4: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025E1D8: beq         $v0, $zero, L_0025E208
    if (ctx->r2 == 0) {
        // 0x0025E1DC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025E208;
    }
    // 0x0025E1DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025E1E0: lh          $v1, 0xC4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0XC4);
    // 0x0025E1E4: slti        $v0, $v1, 0x898
    ctx->r2 = SIGNED(ctx->r3) < 0X898 ? 1 : 0;
    // 0x0025E1E8: bne         $v0, $zero, L_0025E208
    if (ctx->r2 != 0) {
        // 0x0025E1EC: slti        $v0, $v1, 0x8B1
        ctx->r2 = SIGNED(ctx->r3) < 0X8B1 ? 1 : 0;
            goto L_0025E208;
    }
    // 0x0025E1EC: slti        $v0, $v1, 0x8B1
    ctx->r2 = SIGNED(ctx->r3) < 0X8B1 ? 1 : 0;
    // 0x0025E1F0: beq         $v0, $zero, L_0025E208
    if (ctx->r2 == 0) {
        // 0x0025E1F4: nop
    
            goto L_0025E208;
    }
    // 0x0025E1F4: nop

    // 0x0025E1F8: jal         0x0025A918
    // 0x0025E1FC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A918(rdram, ctx);
        goto after_14;
    // 0x0025E1FC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_14:
    // 0x0025E200: j           L_0025E214
    // 0x0025E204: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E214;
    // 0x0025E204: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E208:
    // 0x0025E208: jal         0x0025A894
    // 0x0025E20C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_0025A894(rdram, ctx);
        goto after_15;
    // 0x0025E20C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_15:
    // 0x0025E210: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E214:
    // 0x0025E214: or          $v0, $s6, $s5
    ctx->r2 = ctx->r22 | ctx->r21;
L_0025E218:
    // 0x0025E218: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0025E21C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0025E220:
    // 0x0025E220: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0025E224: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0025E228: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0025E22C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0025E230: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025E234: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025E238: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025E23C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025E240: jr          $ra
    // 0x0025E244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025E244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00419594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419598: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041959C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004195A0: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x004195A4: jal         0x00285A68
    // 0x004195A8: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x004195A8: nop

    after_0:
    // 0x004195AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004195B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004195B4: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x004195B8: jr          $ra
    // 0x004195BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004195BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00259A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259A50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00259A54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259A58: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00259A5C: lw          $a1, 0x90($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X90);
    // 0x00259A60: lwc1        $f0, 0x24C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24C);
    // 0x00259A64: beq         $a1, $v1, L_00259A7C
    if (ctx->r5 == ctx->r3) {
        // 0x00259A68: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_00259A7C;
    }
    // 0x00259A68: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00259A6C: beql        $a1, $v0, L_00259A80
    if (ctx->r5 == ctx->r2) {
        // 0x00259A70: add.s       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
            goto L_00259A80;
    }
    goto skip_0;
    // 0x00259A70: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    skip_0:
    // 0x00259A74: j           L_00259A8C
    // 0x00259A78: nop

        goto L_00259A8C;
    // 0x00259A78: nop

L_00259A7C:
    // 0x00259A7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_00259A80:
    // 0x00259A80: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00259A84: jal         0x00210894
    // 0x00259A88: nop

    func_00210894(rdram, ctx);
        goto after_0;
    // 0x00259A88: nop

    after_0:
L_00259A8C:
    // 0x00259A8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259A90: jr          $ra
    // 0x00259A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041D6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041D6D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041D6DC: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041D6E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041D6E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041D6E8: jal         0x0025340C
    // 0x0041D6EC: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041D6EC: nop

    after_0:
    // 0x0041D6F0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0041D6F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D6F8: sll         $a1, $v1, 3
    ctx->r5 = S32(ctx->r3 << 3);
    // 0x0041D6FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D700: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D704: lw          $a0, 0x1FB8($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB8);
    // 0x0041D708: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D70C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D710: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D714: beq         $a0, $zero, L_0041D75C
    if (ctx->r4 == 0) {
        // 0x0041D718: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_0041D75C;
    }
    // 0x0041D718: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D71C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D720: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D724: lw          $v1, 0x1FB0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D728: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D72C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D730: sw          $a0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r4;
    // 0x0041D734: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0041D738: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D73C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D740: sw          $v1, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r3;
    // 0x0041D744: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041D748: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D74C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D750: sb          $zero, 0x1FBC($at)
    MEM_B(0X1FBC, ctx->r1) = 0;
    // 0x0041D754: j           L_0041D760
    // 0x0041D758: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041D760;
    // 0x0041D758: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041D75C:
    // 0x0041D75C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041D760:
    // 0x0041D760: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041D764: jr          $ra
    // 0x0041D768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002061B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002061B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002061BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002061C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002061C4: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x002061C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002061CC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x002061D0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x002061D4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x002061D8: beq         $a0, $zero, L_00206208
    if (ctx->r4 == 0) {
        // 0x002061DC: sw          $v1, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r3;
            goto L_00206208;
    }
    // 0x002061DC: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_002061E0:
    // 0x002061E0: addiu       $a0, $zero, -0x101
    ctx->r4 = ADD32(0, -0X101);
L_002061E4:
    // 0x002061E4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002061E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002061EC: bne         $v0, $zero, L_002061E0
    if (ctx->r2 != 0) {
        // 0x002061F0: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_002061E0;
    }
    // 0x002061F0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x002061F4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x002061F8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x002061FC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00206200: bne         $v1, $zero, L_002061E4
    if (ctx->r3 != 0) {
        // 0x00206204: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_002061E4;
    }
    // 0x00206204: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00206208:
    // 0x00206208: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0020620C: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x00206210: bne         $v0, $zero, L_00206240
    if (ctx->r2 != 0) {
        // 0x00206214: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00206240;
    }
    // 0x00206214: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206218: jal         0x002065F8
    // 0x0020621C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002065F8(rdram, ctx);
        goto after_0;
    // 0x0020621C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00206220: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00206224: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00206228: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x0020622C: jal         0x002026EC
    // 0x00206230: nop

    entry_002026EC(rdram, ctx);
        goto after_1;
    // 0x00206230: nop

    after_1:
    // 0x00206234: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206238: jal         0x002062F8
    // 0x0020623C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_2;
    // 0x0020623C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_00206240:
    // 0x00206240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00206244: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206248: jr          $ra
    // 0x0020624C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020624C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028894C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028894C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288950: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288954: lbu         $v0, 0x3FE1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3FE1);
    // 0x00288958: beq         $v0, $zero, L_00288B14
    if (ctx->r2 == 0) {
        // 0x0028895C: nop
    
            goto L_00288B14;
    }
    // 0x0028895C: nop

    // 0x00288960: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288964: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288968: lbu         $v0, 0x3FE0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3FE0);
    // 0x0028896C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288970: lwc1        $f0, -0x6240($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6240);
    // 0x00288974: beq         $v0, $zero, L_00288984
    if (ctx->r2 == 0) {
        // 0x00288978: nop
    
            goto L_00288984;
    }
    // 0x00288978: nop

    // 0x0028897C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288980: lwc1        $f0, -0x623C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X623C);
L_00288984:
    // 0x00288984: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288988: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0028898C: lbu         $v1, 0x3FE1($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X3FE1);
    // 0x00288990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00288994: beq         $v1, $v0, L_00288A8C
    if (ctx->r3 == ctx->r2) {
        // 0x00288998: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_00288A8C;
    }
    // 0x00288998: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x0028899C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002889A0: bne         $v1, $v0, L_00288B14
    if (ctx->r3 != ctx->r2) {
        // 0x002889A4: nop
    
            goto L_00288B14;
    }
    // 0x002889A4: nop

    // 0x002889A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002889AC: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x002889B0: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x002889B4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x002889B8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002889BC: nop

    // 0x002889C0: bc1f        L_00288A08
    if (!c1cs) {
        // 0x002889C4: nop
    
            goto L_00288A08;
    }
    // 0x002889C4: nop

    // 0x002889C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002889CC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002889D0: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002889D4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002889D8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002889DC: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x002889E0: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
    // 0x002889E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x002889E8: nop

    // 0x002889EC: bc1f        L_00288A20
    if (!c1cs) {
        // 0x002889F0: nop
    
            goto L_00288A20;
    }
    // 0x002889F0: nop

    // 0x002889F4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002889F8: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x002889FC: swc1        $f2, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f2.u32l;
    // 0x00288A00: j           L_00288A20
    // 0x00288A04: nop

        goto L_00288A20;
    // 0x00288A04: nop

L_00288A08:
    // 0x00288A08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288A0C: lwc1        $f0, -0x6238($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6238);
    // 0x00288A10: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00288A14: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A18: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A1C: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
L_00288A20:
    // 0x00288A20: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A24: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A28: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x00288A2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288A30: lwc1        $f0, -0x6234($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6234);
    // 0x00288A34: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00288A38: nop

    // 0x00288A3C: bc1f        L_00288A84
    if (!c1cs) {
        // 0x00288A40: addiu       $v1, $zero, 0x11
        ctx->r3 = ADD32(0, 0X11);
            goto L_00288A84;
    }
    // 0x00288A40: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x00288A44: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A48: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A4C: lw          $v0, 0x3FD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288A50: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A54: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A58: sw          $v1, 0x3FD8($at)
    MEM_W(0X3FD8, ctx->r1) = ctx->r3;
    // 0x00288A5C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00288A60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A64: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A68: sw          $zero, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = 0;
    // 0x00288A6C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A70: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A74: sb          $v1, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r3;
    // 0x00288A78: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288A7C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288A80: sw          $v0, 0x3FD4($at)
    MEM_W(0X3FD4, ctx->r1) = ctx->r2;
L_00288A84:
    // 0x00288A84: jr          $ra
    // 0x00288A88: nop

    return;
    // 0x00288A88: nop

L_00288A8C:
    // 0x00288A8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288A90: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00288A94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288A98: lwc1        $f3, -0x6230($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6230);
    // 0x00288A9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288AA0: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288AA4: lwc1        $f1, 0x3FE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FE4);
    // 0x00288AA8: c.lt.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl < ctx->f3.fl;
    // 0x00288AAC: nop

    // 0x00288AB0: bc1f        L_00288AC4
    if (!c1cs) {
        // 0x00288AB4: nop
    
            goto L_00288AC4;
    }
    // 0x00288AB4: nop

    // 0x00288AB8: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00288ABC: j           L_00288ACC
    // 0x00288AC0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00288ACC;
    // 0x00288AC0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00288AC4:
    // 0x00288AC4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00288AC8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00288ACC:
    // 0x00288ACC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288AD0: lwc1        $f1, -0x622C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X622C);
    // 0x00288AD4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288AD8: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288ADC: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
    // 0x00288AE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00288AE4: nop

    // 0x00288AE8: bc1f        L_00288B14
    if (!c1cs) {
        // 0x00288AEC: nop
    
            goto L_00288B14;
    }
    // 0x00288AEC: nop

    // 0x00288AF0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288AF4: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288AF8: sb          $zero, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = 0;
    // 0x00288AFC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288B00: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288B04: swc1        $f1, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00288B08: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288B0C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288B10: sb          $zero, 0x3FE0($at)
    MEM_B(0X3FE0, ctx->r1) = 0;
L_00288B14:
    // 0x00288B14: jr          $ra
    // 0x00288B18: nop

    return;
    // 0x00288B18: nop

;}
RECOMP_FUNC void func_00245A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245A98: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x00245A9C: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x00245AA0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00245AA4: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x00245AA8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00245AAC: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x00245AB0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00245AB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00245AB8: sw          $ra, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r31;
    // 0x00245ABC: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x00245AC0: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x00245AC4: jal         0x0026D5DC
    // 0x00245AC8: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    func_0026D5DC(rdram, ctx);
        goto after_0;
    // 0x00245AC8: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    after_0:
    // 0x00245ACC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00245AD0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00245AD4: lw          $s4, 0x4($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X4);
    // 0x00245AD8: beq         $v0, $v1, L_00245B38
    if (ctx->r2 == ctx->r3) {
        // 0x00245ADC: addiu       $s0, $s1, 0x6
        ctx->r16 = ADD32(ctx->r17, 0X6);
            goto L_00245B38;
    }
    // 0x00245ADC: addiu       $s0, $s1, 0x6
    ctx->r16 = ADD32(ctx->r17, 0X6);
    // 0x00245AE0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
L_00245AE4:
    // 0x00245AE4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00245AE8: bne         $v1, $zero, L_00245B00
    if (ctx->r3 != 0) {
        // 0x00245AEC: and         $v0, $s5, $v1
        ctx->r2 = ctx->r21 & ctx->r3;
            goto L_00245B00;
    }
    // 0x00245AEC: and         $v0, $s5, $v1
    ctx->r2 = ctx->r21 & ctx->r3;
    // 0x00245AF0: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x00245AF4: bne         $v0, $zero, L_00245B54
    if (ctx->r2 != 0) {
        // 0x00245AF8: nop
    
            goto L_00245B54;
    }
    // 0x00245AF8: nop

    // 0x00245AFC: and         $v0, $s5, $v1
    ctx->r2 = ctx->r21 & ctx->r3;
L_00245B00:
    // 0x00245B00: beq         $v0, $zero, L_00245B28
    if (ctx->r2 == 0) {
        // 0x00245B04: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00245B28;
    }
    // 0x00245B04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00245B08: lw          $a1, -0x2($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X2);
    // 0x00245B0C: jal         0x00219F74
    // 0x00245B10: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_1;
    // 0x00245B10: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x00245B14: beq         $v0, $s2, L_00245B28
    if (ctx->r2 == ctx->r18) {
        // 0x00245B18: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00245B28;
    }
    // 0x00245B18: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00245B1C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x00245B20: jal         0x0026D5E4
    // 0x00245B24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_2;
    // 0x00245B24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
L_00245B28:
    // 0x00245B28: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00245B2C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00245B30: bne         $v0, $s2, L_00245AE4
    if (ctx->r2 != ctx->r18) {
        // 0x00245B34: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_00245AE4;
    }
    // 0x00245B34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_00245B38:
    // 0x00245B38: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x00245B3C: bne         $v0, $zero, L_00245B54
    if (ctx->r2 != 0) {
        // 0x00245B40: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00245B54;
    }
    // 0x00245B40: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00245B44: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x00245B48: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00245B4C: jal         0x0026D5E4
    // 0x00245B50: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_3;
    // 0x00245B50: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_00245B54:
    // 0x00245B54: jal         0x0026D628
    // 0x00245B58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D628(rdram, ctx);
        goto after_4;
    // 0x00245B58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x00245B5C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00245B60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00245B64: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00245B68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00245B6C: jal         0x00219F74
    // 0x00245B70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_5;
    // 0x00245B70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
    // 0x00245B74: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00245B78: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00245B7C: beq         $a0, $v1, L_00245B88
    if (ctx->r4 == ctx->r3) {
        // 0x00245B80: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_00245B88;
    }
    // 0x00245B80: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x00245B84: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00245B88:
    // 0x00245B88: lw          $ra, 0x90($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X90);
    // 0x00245B8C: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x00245B90: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x00245B94: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x00245B98: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x00245B9C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x00245BA0: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x00245BA4: jr          $ra
    // 0x00245BA8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x00245BA8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_002685F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002685F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002685F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002685F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002685FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00268600: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00268604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268608: bnel        $v1, $v0, L_0026864C
    if (ctx->r3 != ctx->r2) {
        // 0x0026860C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0026864C;
    }
    goto skip_0;
    // 0x0026860C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00268610: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00268614: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00268618: bne         $v0, $zero, L_00268678
    if (ctx->r2 != 0) {
        // 0x0026861C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00268678;
    }
    // 0x0026861C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268620: lw          $v1, 0x140($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X140);
    // 0x00268624: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x00268628: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0026862C: beq         $v0, $zero, L_00268648
    if (ctx->r2 == 0) {
        // 0x00268630: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_00268648;
    }
    // 0x00268630: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x00268634: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00268638: bne         $v0, $zero, L_0026864C
    if (ctx->r2 != 0) {
        // 0x0026863C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0026864C;
    }
    // 0x0026863C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00268640: j           L_00268678
    // 0x00268644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00268678;
    // 0x00268644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00268648:
    // 0x00268648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0026864C:
    // 0x0026864C: jal         0x00267648
    // 0x00268650: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00267648(rdram, ctx);
        goto after_0;
    // 0x00268650: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00268654: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00268658: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026865C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00268660: lwc1        $f0, 0x7ED0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7ED0);
    // 0x00268664: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00268668: nop

    // 0x0026866C: bc1t        L_00268678
    if (c1cs) {
        // 0x00268670: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00268678;
    }
    // 0x00268670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268674: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00268678:
    // 0x00268678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026867C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00268680: jr          $ra
    // 0x00268684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026BAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BAE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026BAE8: lwc1        $f2, 0x7FE8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7FE8);
    // 0x0026BAEC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0026BAF0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0026BAF4: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x0026BAF8: lwc1        $f3, 0x4($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0026BAFC: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0026BB00: mul.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0026BB04: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0026BB08: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0026BB0C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026BB10: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0026BB14: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0026BB18: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026BB1C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x0026BB20: swc1        $f3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026BB24: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026BB28: jr          $ra
    // 0x0026BB2C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0026BB2C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0022DCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022DCBC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x0022DCC0: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x0022DCC4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0022DCC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022DCCC: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    // 0x0022DCD0: sw          $ra, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r31;
    // 0x0022DCD4: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x0022DCD8: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x0022DCDC: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x0022DCE0: sdc1        $f21, 0xF0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XF0, ctx->r29);
    // 0x0022DCE4: sdc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE8, ctx->r29);
    // 0x0022DCE8: jal         0x00206950
    // 0x0022DCEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    entry_00206950(rdram, ctx);
        goto after_0;
    // 0x0022DCEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0022DCF0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0022DCF4: beq         $s3, $zero, L_0022E070
    if (ctx->r19 == 0) {
        // 0x0022DCF8: nop
    
            goto L_0022E070;
    }
    // 0x0022DCF8: nop

    // 0x0022DCFC: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x0022DD00: beq         $a1, $zero, L_0022DD24
    if (ctx->r5 == 0) {
        // 0x0022DD04: addiu       $v1, $sp, 0x98
        ctx->r3 = ADD32(ctx->r29, 0X98);
            goto L_0022DD24;
    }
    // 0x0022DD04: addiu       $v1, $sp, 0x98
    ctx->r3 = ADD32(ctx->r29, 0X98);
    // 0x0022DD08: jal         0x0026A9C0
    // 0x0022DD0C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    func_0026A9C0(rdram, ctx);
        goto after_1;
    // 0x0022DD0C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x0022DD10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022DD14: jal         0x00267648
    // 0x0022DD18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00267648(rdram, ctx);
        goto after_2;
    // 0x0022DD18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0022DD1C: j           L_0022DE24
    // 0x0022DD20: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
        goto L_0022DE24;
    // 0x0022DD20: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
L_0022DD24:
    // 0x0022DD24: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0022DD28: addiu       $a0, $s2, 0x30
    ctx->r4 = ADD32(ctx->r18, 0X30);
L_0022DD2C:
    // 0x0022DD2C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022DD30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022DD34: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0022DD38: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0022DD3C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0022DD40: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x0022DD44: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x0022DD48: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x0022DD4C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0022DD50: bne         $v0, $a0, L_0022DD2C
    if (ctx->r2 != ctx->r4) {
        // 0x0022DD54: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0022DD2C;
    }
    // 0x0022DD54: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0022DD58: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022DD5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0022DD60: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x0022DD64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DD68: lwc1        $f1, 0x62F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X62F4);
    // 0x0022DD6C: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x0022DD70: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022DD74: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x0022DD78: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x0022DD7C: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x0022DD80: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x0022DD84: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0022DD88: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x0022DD8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DD90: lwc1        $f0, 0x62F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62F8);
    // 0x0022DD94: lwc1        $f1, 0xA4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x0022DD98: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0022DD9C: swc1        $f1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022DDA0: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x0022DDA4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x0022DDA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022DDAC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x0022DDB0: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x0022DDB4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x0022DDB8: jal         0x00239F00
    // 0x0022DDBC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    func_00239F00(rdram, ctx);
        goto after_3;
    // 0x0022DDBC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    after_3:
    // 0x0022DDC0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0022DDC4: addiu       $s1, $s1, 0x1CE0
    ctx->r17 = ADD32(ctx->r17, 0X1CE0);
    // 0x0022DDC8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0022DDCC: beq         $v0, $zero, L_0022E070
    if (ctx->r2 == 0) {
        // 0x0022DDD0: addiu       $s0, $sp, 0x78
        ctx->r16 = ADD32(ctx->r29, 0X78);
            goto L_0022E070;
    }
    // 0x0022DDD0: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x0022DDD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022DDD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DDDC: lwc1        $f20, 0x62FC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X62FC);
    // 0x0022DDE0: jal         0x0020E810
    // 0x0022DDE4: addiu       $a1, $s1, 0xE4
    ctx->r5 = ADD32(ctx->r17, 0XE4);
    func_0020E810(rdram, ctx);
        goto after_4;
    // 0x0022DDE4: addiu       $a1, $s1, 0xE4
    ctx->r5 = ADD32(ctx->r17, 0XE4);
    after_4:
    // 0x0022DDE8: jal         0x002982F0
    // 0x0022DDEC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0022DDEC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x0022DDF0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0022DDF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0022DDF8: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0022DDFC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x0022DE00: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x0022DE04: jal         0x002974C0
    // 0x0022DE08: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    func_002974C0(rdram, ctx);
        goto after_6;
    // 0x0022DE08: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    after_6:
    // 0x0022DE0C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x0022DE10: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x0022DE14: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0022DE18: jal         0x00210F68
    // 0x0022DE1C: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_7;
    // 0x0022DE1C: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x0022DE20: lwc1        $f3, 0xC($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0XC);
L_0022DE24:
    // 0x0022DE24: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0022DE28: sub.s       $f4, $f0, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0022DE2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DE30: lwc1        $f0, 0x6300($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6300);
    // 0x0022DE34: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0022DE38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DE3C: lwc1        $f1, 0x6304($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6304);
    // 0x0022DE40: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0022DE44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DE48: lwc1        $f2, 0x6308($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6308);
    // 0x0022DE4C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0022DE50: nop

    // 0x0022DE54: bc1t        L_0022DE74
    if (c1cs) {
        // 0x0022DE58: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_0022DE74;
    }
    // 0x0022DE58: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0022DE5C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022DE60: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022DE64: nop

    // 0x0022DE68: bc1t        L_0022DE84
    if (c1cs) {
        // 0x0022DE6C: mov.s       $f21, $f1
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
            goto L_0022DE84;
    }
    // 0x0022DE6C: mov.s       $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
    // 0x0022DE70: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_0022DE74:
    // 0x0022DE74: c.lt.s      $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f2.fl < ctx->f21.fl;
    // 0x0022DE78: nop

    // 0x0022DE7C: bc1tl       L_0022DE84
    if (c1cs) {
        // 0x0022DE80: mov.s       $f21, $f2
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    ctx->f21.fl = ctx->f2.fl;
            goto L_0022DE84;
    }
    goto skip_0;
    // 0x0022DE80: mov.s       $f21, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    ctx->f21.fl = ctx->f2.fl;
    skip_0:
L_0022DE84:
    // 0x0022DE84: lwc1        $f0, 0x134($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X134);
    // 0x0022DE88: lw          $v1, 0xF8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XF8);
    // 0x0022DE8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DE90: lwc1        $f1, 0x630C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X630C);
    // 0x0022DE94: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0022DE98: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DE9C: beq         $v0, $zero, L_0022DEB0
    if (ctx->r2 == 0) {
        // 0x0022DEA0: nop
    
            goto L_0022DEB0;
    }
    // 0x0022DEA0: nop

    // 0x0022DEA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DEA8: lwc1        $f0, 0x6310($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6310);
    // 0x0022DEAC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_0022DEB0:
    // 0x0022DEB0: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x0022DEB4: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x0022DEB8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0022DEBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DEC0: lwc1        $f0, 0x6314($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6314);
    // 0x0022DEC4: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0022DEC8: sub.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x0022DECC: c.le.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl <= ctx->f20.fl;
    // 0x0022DED0: nop

    // 0x0022DED4: bc1fl       L_0022DEDC
    if (!c1cs) {
        // 0x0022DED8: mov.s       $f1, $f20
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
            goto L_0022DEDC;
    }
    goto skip_1;
    // 0x0022DED8: mov.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    ctx->f1.fl = ctx->f20.fl;
    skip_1:
L_0022DEDC:
    // 0x0022DEDC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0022DEE0: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0022DEE4: nop

    // 0x0022DEE8: bc1fl       L_0022DEF8
    if (!c1cs) {
        // 0x0022DEEC: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_0022DEF8;
    }
    goto skip_2;
    // 0x0022DEEC: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_2:
    // 0x0022DEF0: j           L_0022DF08
    // 0x0022DEF4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_0022DF08;
    // 0x0022DEF4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_0022DEF8:
    // 0x0022DEF8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0022DEFC: nop

    // 0x0022DF00: bc1fl       L_0022DF08
    if (!c1cs) {
        // 0x0022DF04: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0022DF08;
    }
    goto skip_3;
    // 0x0022DF04: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_3:
L_0022DF08:
    // 0x0022DF08: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x0022DF0C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022DF10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0022DF14: beq         $v0, $zero, L_0022DF4C
    if (ctx->r2 == 0) {
        // 0x0022DF18: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_0022DF4C;
    }
    // 0x0022DF18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0022DF1C: lh          $v0, 0x128($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X128);
    // 0x0022DF20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022DF24: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0022DF28: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022DF2C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022DF30: nop

    // 0x0022DF34: bc1f        L_0022DF4C
    if (!c1cs) {
        // 0x0022DF38: nop
    
            goto L_0022DF4C;
    }
    // 0x0022DF38: nop

    // 0x0022DF3C: lwc1        $f0, 0x11C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X11C);
    // 0x0022DF40: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0022DF44: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DF48: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
L_0022DF4C:
    // 0x0022DF4C: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0022DF50: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x0022DF54: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x0022DF58: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x0022DF5C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0022DF60: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x0022DF64: swc1        $f3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0022DF68: jal         0x0020F510
    // 0x0022DF6C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    func_0020F510(rdram, ctx);
        goto after_8;
    // 0x0022DF6C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x0022DF70: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x0022DF74: jal         0x00211114
    // 0x0022DF78: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00211114(rdram, ctx);
        goto after_9;
    // 0x0022DF78: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_9:
    // 0x0022DF7C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0022DF80: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0022DF84: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0022DF88: jal         0x0021034C
    // 0x0022DF8C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_10;
    // 0x0022DF8C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_10:
    // 0x0022DF90: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x0022DF94: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x0022DF98: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x0022DF9C: jal         0x00210318
    // 0x0022DFA0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00210318(rdram, ctx);
        goto after_11;
    // 0x0022DFA0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_11:
    // 0x0022DFA4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0022DFA8: jal         0x0020D274
    // 0x0022DFAC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0020D274(rdram, ctx);
        goto after_12;
    // 0x0022DFAC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_12:
    // 0x0022DFB0: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0022DFB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0022DFB8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0022DFBC: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0022DFC0: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0022DFC4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0022DFC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DFCC: lwc1        $f0, 0x6318($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6318);
    // 0x0022DFD0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0022DFD4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022DFD8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0022DFDC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022DFE0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0022DFE4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0022DFE8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0022DFEC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0022DFF0: c.le.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl <= ctx->f21.fl;
    // 0x0022DFF4: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0022DFF8: bc1t        L_0022E010
    if (c1cs) {
        // 0x0022DFFC: sw          $v0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r2;
            goto L_0022E010;
    }
    // 0x0022DFFC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0022E000: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x0022E004: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0022E008: j           L_0022E028
    // 0x0022E00C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
        goto L_0022E028;
    // 0x0022E00C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0022E010:
    // 0x0022E010: sub.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x0022E014: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022E018: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0022E01C: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0022E020: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0022E024: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0022E028:
    // 0x0022E028: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0022E02C: jal         0x002086BC
    // 0x0022E030: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    func_002086BC(rdram, ctx);
        goto after_13;
    // 0x0022E030: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    after_13:
    // 0x0022E034: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0022E038: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0022E03C: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0022E040: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0022E044: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0022E048: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0022E04C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0022E050: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0022E054: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0022E058: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0022E05C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0022E060: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0022E064: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0022E068: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0022E06C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0022E070:
    // 0x0022E070: lw          $ra, 0xE0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE0);
    // 0x0022E074: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x0022E078: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x0022E07C: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x0022E080: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x0022E084: ldc1        $f21, 0xF0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XF0);
    // 0x0022E088: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x0022E08C: jr          $ra
    // 0x0022E090: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0022E090: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_002718C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718C4: lw          $v0, 0x2BAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2BAC);
    // 0x002718C8: jr          $ra
    // 0x002718CC: nop

    return;
    // 0x002718CC: nop

;}
RECOMP_FUNC void func_0045C4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004234D8:
    // 0x0045C4AC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C4B0: lw          $v0, 0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X964);
    // 0x0045C4B4: beq         $v0, $zero, L_0045C4CC
    if (ctx->r2 == 0) {
        // 0x0045C4B8: nop
    
            goto L_0045C4CC;
    }
    // 0x0045C4B8: nop

    // 0x0045C4BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C4C0: addiu       $v0, $v0, 0x5088
    ctx->r2 = ADD32(ctx->r2, 0X5088);
    // 0x0045C4C4: j           L_004234D8
    // 0x0045C4C8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_004234D8(rdram, ctx);
    return;
    // 0x0045C4C8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045C4CC:
    // 0x0045C4CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C4D0: addiu       $v0, $v0, 0x50C0
    ctx->r2 = ADD32(ctx->r2, 0X50C0);
    // 0x0045C4D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045C4D8: jr          $ra
    // 0x0045C4DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045C4DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0028124C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028124C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00281250: addiu       $a0, $a0, 0x2D8
    ctx->r4 = ADD32(ctx->r4, 0X2D8);
    // 0x00281254: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x00281258: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x0028125C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00281260: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x00281264: jal         0x0026F480
    // 0x00281268: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_0026F480(rdram, ctx);
        goto after_0;
    // 0x00281268: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x0028126C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00281270: jr          $ra
    // 0x00281274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00281274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A0FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A0FF0: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x002A0FF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002A0FF8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_002A0FFC:
    // 0x002A0FFC: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x002A1000: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A1004: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
    // 0x002A1008: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x002A100C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x002A1010: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x002A1014: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x002A1018: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002A101C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x002A1020: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002A1024: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x002A1028: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x002A102C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A1030: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A1034: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x002A1038: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x002A103C: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A1040: bne         $v0, $zero, L_002A0FFC
    if (ctx->r2 != 0) {
        // 0x002A1044: swc1        $f0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
            goto L_002A0FFC;
    }
    // 0x002A1044: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x002A1048: jr          $ra
    // 0x002A104C: nop

    return;
    // 0x002A104C: nop

;}
RECOMP_FUNC void func_00236BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236BC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00236BC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00236BCC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00236BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00236BD4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00236BD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00236BDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236BE0: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236BE4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00236BE8: beq         $v0, $zero, L_00236BF8
    if (ctx->r2 == 0) {
        // 0x00236BEC: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_00236BF8;
    }
    // 0x00236BEC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00236BF0: jal         0x0023417C
    // 0x00236BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023417C(rdram, ctx);
        goto after_0;
    // 0x00236BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_00236BF8:
    // 0x00236BF8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236BFC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00236C00: beq         $v0, $zero, L_00236C10
    if (ctx->r2 == 0) {
        // 0x00236C04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00236C10;
    }
    // 0x00236C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00236C08: jal         0x00233FCC
    // 0x00236C0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00233FCC(rdram, ctx);
        goto after_1;
    // 0x00236C0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_00236C10:
    // 0x00236C10: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x00236C14: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00236C18: bne         $v0, $zero, L_00236C4C
    if (ctx->r2 != 0) {
        // 0x00236C1C: nop
    
            goto L_00236C4C;
    }
    // 0x00236C1C: nop

    // 0x00236C20: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00236C24: bltz        $v0, L_00236C40
    if (SIGNED(ctx->r2) < 0) {
        // 0x00236C28: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00236C40;
    }
    // 0x00236C28: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00236C2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236C30: jal         0x00234348
    // 0x00236C34: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234348(rdram, ctx);
        goto after_2;
    // 0x00236C34: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00236C38: j           L_00236C4C
    // 0x00236C3C: nop

        goto L_00236C4C;
    // 0x00236C3C: nop

L_00236C40:
    // 0x00236C40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236C44: jal         0x00234928
    // 0x00236C48: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234928(rdram, ctx);
        goto after_3;
    // 0x00236C48: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
L_00236C4C:
    // 0x00236C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00236C50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00236C54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00236C58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00236C5C: jr          $ra
    // 0x00236C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00236C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025342C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025342C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00253430: beq         $v1, $zero, L_00253450
    if (ctx->r3 == 0) {
        // 0x00253434: nop
    
            goto L_00253450;
    }
    // 0x00253434: nop

L_00253438:
    // 0x00253438: lw          $v0, 0xA50($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA50);
    // 0x0025343C: beq         $v0, $a1, L_00253458
    if (ctx->r2 == ctx->r5) {
            // 0x00253440: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    func_00253458(rdram, ctx);
    return;
    }
    // 0x00253440: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00253444: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x00253448: bne         $v1, $zero, L_00253438
    if (ctx->r3 != 0) {
        // 0x0025344C: nop
    
            goto L_00253438;
    }
    // 0x0025344C: nop

L_00253450:
    // 0x00253450: jr          $ra
    // 0x00253454: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00253454: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
