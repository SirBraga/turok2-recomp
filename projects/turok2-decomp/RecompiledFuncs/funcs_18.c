#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0026FD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026FD88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026FD8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0026FD90: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026FD94: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0026FD98: jal         0x0026FEA0
    // 0x0026FD9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_0026FEA0(rdram, ctx);
        goto after_0;
    // 0x0026FD9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x0026FDA0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0026FDA4: jal         0x0029BF80
    // 0x0026FDA8: nop

    func_0029BF80(rdram, ctx);
        goto after_1;
    // 0x0026FDA8: nop

    after_1:
    // 0x0026FDAC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026FDB0: lhu         $v1, 0x283A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X283A);
    // 0x0026FDB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0026FDB8: jal         0x00275B7C
    // 0x0026FDBC: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    func_00275B7C(rdram, ctx);
        goto after_2;
    // 0x0026FDBC: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    after_2:
    // 0x0026FDC0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0026FDC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FDC8: lw          $v0, 0x2668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2668);
    // 0x0026FDCC: lh          $a3, 0x4($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X4);
    // 0x0026FDD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026FDD4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026FDD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026FDDC: lw          $a0, 0x27C0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X27C0);
    // 0x0026FDE0: jal         0x002949A4
    // 0x0026FDE4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002949A4(rdram, ctx);
        goto after_3;
    // 0x0026FDE4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0026FDE8: jal         0x00275BA0
    // 0x0026FDEC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00275BA0(rdram, ctx);
        goto after_4;
    // 0x0026FDEC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0026FDF0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0026FDF4: beql        $v0, $zero, L_0026FE8C
    if (ctx->r2 == 0) {
        // 0x0026FDF8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026FE8C;
    }
    goto skip_0;
    // 0x0026FDF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026FDFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FE00: lw          $v0, 0x2668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2668);
    // 0x0026FE04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026FE08: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026FE0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026FE10: lw          $v1, 0x27C0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X27C0);
    // 0x0026FE14: sw          $v1, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r3;
    // 0x0026FE18: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026FE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026FE20: lw          $v0, 0x27C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27C0);
    // 0x0026FE24: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x0026FE28: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0026FE2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026FE30: jal         0x0029E3B0
    // 0x0026FE34: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    func_0029E3B0(rdram, ctx);
        goto after_5;
    // 0x0026FE34: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    after_5:
    // 0x0026FE38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0026FE3C: addiu       $a0, $a0, -0x5270
    ctx->r4 = ADD32(ctx->r4, -0X5270);
    // 0x0026FE40: jal         0x0028B3E8
    // 0x0026FE44: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    func_0028B3E8(rdram, ctx);
        goto after_6;
    // 0x0026FE44: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    after_6:
    // 0x0026FE48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FE4C: lw          $v0, 0x2668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2668);
    // 0x0026FE50: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0026FE54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026FE58: sw          $v0, 0x2668($at)
    MEM_W(0X2668, ctx->r1) = ctx->r2;
    // 0x0026FE5C: jal         0x0027592C
    // 0x0026FE60: nop

    func_0027592C(rdram, ctx);
        goto after_7;
    // 0x0026FE60: nop

    after_7:
    // 0x0026FE64: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026FE68: addiu       $a0, $a0, 0x2820
    ctx->r4 = ADD32(ctx->r4, 0X2820);
    // 0x0026FE6C: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x0026FE70: jal         0x0029B6F0
    // 0x0026FE74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x0026FE74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x0026FE78: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x0026FE7C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0026FE80: jal         0x002985C0
    // 0x0026FE84: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_9;
    // 0x0026FE84: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_9:
    // 0x0026FE88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0026FE8C:
    // 0x0026FE8C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0026FE90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0026FE94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0026FE98: jr          $ra
    // 0x0026FE9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026FE9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00271748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271748: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x0027174C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00271750: bgezl       $a1, L_00271768
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00271754: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00271768;
    }
    goto skip_0;
    // 0x00271754: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00271758: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027175C: ldc1        $f0, -0x7F28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X7F28);
    // 0x00271760: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00271764: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00271768:
    // 0x00271768: jr          $ra
    // 0x0027176C: swc1        $f0, 0x2BA4($a0)
    MEM_W(0X2BA4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0027176C: swc1        $f0, 0x2BA4($a0)
    MEM_W(0X2BA4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00406F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406F10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406F14: bne         $a0, $v0, L_00406F78
    if (ctx->r4 != ctx->r2) {
        // 0x00406F18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00406F78;
    }
    // 0x00406F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00406F1C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00406F20: addiu       $a1, $a1, -0x9F8
    ctx->r5 = ADD32(ctx->r5, -0X9F8);
    // 0x00406F24: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00406F28: bne         $v1, $v0, L_00406F3C
    if (ctx->r3 != ctx->r2) {
        // 0x00406F2C: nop
    
            goto L_00406F3C;
    }
    // 0x00406F2C: nop

    // 0x00406F30: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406F34: addiu       $v0, $v0, 0x1094
    ctx->r2 = ADD32(ctx->r2, 0X1094);
    // 0x00406F38: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
L_00406F3C:
    // 0x00406F3C: bne         $v1, $a0, L_00406F54
    if (ctx->r3 != ctx->r4) {
        // 0x00406F40: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00406F54;
    }
    // 0x00406F40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406F44: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406F48: addiu       $v0, $v0, 0x1198
    ctx->r2 = ADD32(ctx->r2, 0X1198);
    // 0x00406F4C: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x00406F50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00406F54:
    // 0x00406F54: bne         $v1, $v0, L_00406F6C
    if (ctx->r3 != ctx->r2) {
        // 0x00406F58: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00406F6C;
    }
    // 0x00406F58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406F5C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406F60: addiu       $v0, $v0, 0x1300
    ctx->r2 = ADD32(ctx->r2, 0X1300);
    // 0x00406F64: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x00406F68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00406F6C:
    // 0x00406F6C: sw          $v0, 0x3F8($a1)
    MEM_W(0X3F8, ctx->r5) = ctx->r2;
    // 0x00406F70: sw          $v0, 0x3FC($a1)
    MEM_W(0X3FC, ctx->r5) = ctx->r2;
    // 0x00406F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00406F78:
    // 0x00406F78: bne         $a0, $v0, L_00406FDC
    if (ctx->r4 != ctx->r2) {
        // 0x00406F7C: nop
    
            goto L_00406FDC;
    }
    // 0x00406F7C: nop

    // 0x00406F80: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00406F84: addiu       $a1, $a1, -0x9F8
    ctx->r5 = ADD32(ctx->r5, -0X9F8);
    // 0x00406F88: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00406F8C: bne         $v1, $a0, L_00406FA4
    if (ctx->r3 != ctx->r4) {
        // 0x00406F90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00406FA4;
    }
    // 0x00406F90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406F94: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406F98: addiu       $v0, $v0, 0x1008
    ctx->r2 = ADD32(ctx->r2, 0X1008);
    // 0x00406F9C: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x00406FA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00406FA4:
    // 0x00406FA4: bne         $v1, $v0, L_00406FBC
    if (ctx->r3 != ctx->r2) {
        // 0x00406FA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00406FBC;
    }
    // 0x00406FA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406FAC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406FB0: addiu       $v0, $v0, 0x10E4
    ctx->r2 = ADD32(ctx->r2, 0X10E4);
    // 0x00406FB4: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x00406FB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00406FBC:
    // 0x00406FBC: bne         $v1, $v0, L_00406FD4
    if (ctx->r3 != ctx->r2) {
        // 0x00406FC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00406FD4;
    }
    // 0x00406FC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406FC4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406FC8: addiu       $v0, $v0, 0x1238
    ctx->r2 = ADD32(ctx->r2, 0X1238);
    // 0x00406FCC: sw          $v0, 0x3F4($a1)
    MEM_W(0X3F4, ctx->r5) = ctx->r2;
    // 0x00406FD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00406FD4:
    // 0x00406FD4: sw          $v0, 0x3F8($a1)
    MEM_W(0X3F8, ctx->r5) = ctx->r2;
    // 0x00406FD8: sw          $v0, 0x3FC($a1)
    MEM_W(0X3FC, ctx->r5) = ctx->r2;
L_00406FDC:
    // 0x00406FDC: jr          $ra
    // 0x00406FE0: nop

    return;
    // 0x00406FE0: nop

;}
RECOMP_FUNC void func_00274728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274728: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027472C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00274730: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00274734: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00274738: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027473C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00274740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274744: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274748: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x0027474C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00274750: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00274754: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x00274758: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x0027475C: jal         0x00293E60
    // 0x00274760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00274760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00274764: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x00274768: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027476C: lwc1        $f0, 0xB8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XB8);
    // 0x00274770: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00274774: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00274778: jal         0x00293DE0
    // 0x0027477C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293DE0(rdram, ctx);
        goto after_1;
    // 0x0027477C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00274780: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00274784: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00274788: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027478C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00274790: jr          $ra
    // 0x00274794: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00274794: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045B748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B748: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0045B74C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B750: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B754: jr          $ra
    // 0x0045B758: nop

    return;
    // 0x0045B758: nop

;}
RECOMP_FUNC void func_004472DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004472DC: jr          $ra
    // 0x004472E0: nop

    return;
    // 0x004472E0: nop

;}
RECOMP_FUNC void func_00421ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421ED4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421ED8: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00421EDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421EE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00421EE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00421EE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00421EEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421EF0: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x00421EF4: jal         0x004160F0
    // 0x00421EF8: sra         $s0, $s0, 8
    ctx->r16 = S32(SIGNED(ctx->r16) >> 8);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00421EF8: sra         $s0, $s0, 8
    ctx->r16 = S32(SIGNED(ctx->r16) >> 8);
    after_0:
    // 0x00421EFC: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x00421F00: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421F04: addiu       $a1, $a1, 0x1404
    ctx->r5 = ADD32(ctx->r5, 0X1404);
    // 0x00421F08: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00421F0C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00421F10: jal         0x0029E3E0
    // 0x00421F14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00421F14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00421F18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00421F1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421F20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421F24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421F28: jr          $ra
    // 0x00421F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040A7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A7AC: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x0040A7B0: beq         $v0, $zero, L_0040A8DC
    if (ctx->r2 == 0) {
        // 0x0040A7B4: nop
    
            goto L_0040A8DC;
    }
    // 0x0040A7B4: nop

    // 0x0040A7B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A7BC: lwc1        $f0, 0x858($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X858);
    // 0x0040A7C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040A7C4: nop

    // 0x0040A7C8: bc1f        L_0040A808
    if (!c1cs) {
        // 0x0040A7CC: addiu       $v1, $sp, 0x18
        ctx->r3 = ADD32(ctx->r29, 0X18);
            goto L_0040A808;
    }
    // 0x0040A7CC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040A7D0: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x0040A7D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A7D8: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x0040A7DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A7E0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x0040A7E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0040A7E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0040A7EC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0040A7F0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0040A7F4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0040A7F8: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x0040A7FC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040A800: j           L_0040A8A4
    // 0x0040A804: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
        goto L_0040A8A4;
    // 0x0040A804: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
L_0040A808:
    // 0x0040A808: beq         $a0, $zero, L_0040A834
    if (ctx->r4 == 0) {
        // 0x0040A80C: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_0040A834;
    }
    // 0x0040A80C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x0040A810: lw          $v0, 0x66C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X66C);
    // 0x0040A814: beq         $v0, $a0, L_0040A834
    if (ctx->r2 == ctx->r4) {
        // 0x0040A818: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0040A834;
    }
    // 0x0040A818: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A81C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A820: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040A824: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040A828: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0040A82C: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0040A830: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
L_0040A834:
    // 0x0040A834: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040A838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A83C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040A840: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x0040A844: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0040A848: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0040A84C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040A850: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A854: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A858: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A85C: lwc1        $f0, 0x85C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X85C);
    // 0x0040A860: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0040A864: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    // 0x0040A868: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A86C: nop

    // 0x0040A870: bc1f        L_0040A898
    if (!c1cs) {
        // 0x0040A874: sh          $v0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r2;
            goto L_0040A898;
    }
    // 0x0040A874: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0040A878: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A87C: lwc1        $f0, 0x860($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X860);
    // 0x0040A880: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A884: nop

    // 0x0040A888: bc1t        L_0040A89C
    if (c1cs) {
        // 0x0040A88C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0040A89C;
    }
    // 0x0040A88C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0040A890: j           L_0040A8A0
    // 0x0040A894: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
        goto L_0040A8A0;
    // 0x0040A894: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
L_0040A898:
    // 0x0040A898: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0040A89C:
    // 0x0040A89C: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
L_0040A8A0:
    // 0x0040A8A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040A8A4:
    // 0x0040A8A4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040A8A8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A8AC: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A8B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040A8B4: jal         0x0026D518
    // 0x0040A8B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040A8B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040A8BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040A8C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A8C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A8C8: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x0040A8CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040A8D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0040A8D4: jal         0x00243414
    // 0x0040A8D8: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040A8D8: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_1:
L_0040A8DC:
    // 0x0040A8DC: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A8E0: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040A8E4: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040A8E8: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040A8EC: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040A8F0: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x0040A8F4: jr          $ra
    // 0x0040A8F8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0040A8F8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_0029DDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DDD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029DDD4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029DDD8: addiu       $a0, $a0, 0x4DB8
    ctx->r4 = ADD32(ctx->r4, 0X4DB8);
    // 0x0029DDDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029DDE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029DDE4: jal         0x0029B820
    // 0x0029DDE8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0029DDE8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0029DDEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029DDF0: jr          $ra
    // 0x0029DDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029DDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042203C:
    // 0x0045B010: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B014: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x0045B018: beq         $v0, $zero, L_0045B030
    if (ctx->r2 == 0) {
        // 0x0045B01C: nop
    
            goto L_0045B030;
    }
    // 0x0045B01C: nop

    // 0x0045B020: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B024: addiu       $v0, $v0, 0x4B84
    ctx->r2 = ADD32(ctx->r2, 0X4B84);
    // 0x0045B028: j           L_0042203C
    // 0x0045B02C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0042203C(rdram, ctx);
    return;
    // 0x0045B02C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045B030:
    // 0x0045B030: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B034: addiu       $v0, $v0, 0x4B8C
    ctx->r2 = ADD32(ctx->r2, 0X4B8C);
    // 0x0045B038: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045B03C: jr          $ra
    // 0x0045B040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045B040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0026BB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BB9C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0026BBA0: mtc1        $a1, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r5;
    // 0x0026BBA4: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x0026BBA8: bne         $a3, $zero, L_0026BBC0
    if (ctx->r7 != 0) {
            // 0x0026BBAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0026BBC0(rdram, ctx);
    return;
    }
    // 0x0026BBAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0026BBB0: jr          $ra
    // 0x0026BBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0026BBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0040A170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A170: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0040A174: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040A178: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040A17C: lw          $v1, 0x1CC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CC);
    // 0x0040A180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040A184: beq         $v1, $v0, L_0040A1E4
    if (ctx->r3 == ctx->r2) {
        // 0x0040A188: sw          $ra, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r31;
            goto L_0040A1E4;
    }
    // 0x0040A188: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0040A18C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0040A190: beq         $v0, $zero, L_0040A234
    if (ctx->r2 == 0) {
        // 0x0040A194: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0040A234;
    }
    // 0x0040A194: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0040A198: bnel        $v1, $zero, L_0040A238
    if (ctx->r3 != 0) {
        // 0x0040A19C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0040A238;
    }
    goto skip_0;
    // 0x0040A19C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_0:
    // 0x0040A1A0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0040A1A4: andi        $v0, $v0, 0x1C
    ctx->r2 = ctx->r2 & 0X1C;
    // 0x0040A1A8: beq         $v0, $zero, L_0040A1C0
    if (ctx->r2 == 0) {
        // 0x0040A1AC: addiu       $v0, $zero, 0x55FA
        ctx->r2 = ADD32(0, 0X55FA);
            goto L_0040A1C0;
    }
    // 0x0040A1AC: addiu       $v0, $zero, 0x55FA
    ctx->r2 = ADD32(0, 0X55FA);
    // 0x0040A1B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0040A1B4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x0040A1B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040A1BC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_0040A1C0:
    // 0x0040A1C0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0040A1C4: andi        $v0, $v0, 0x1C0
    ctx->r2 = ctx->r2 & 0X1C0;
    // 0x0040A1C8: beq         $v0, $zero, L_0040A230
    if (ctx->r2 == 0) {
        // 0x0040A1CC: sll         $v1, $a0, 2
        ctx->r3 = S32(ctx->r4 << 2);
            goto L_0040A230;
    }
    // 0x0040A1CC: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0040A1D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040A1D4: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x0040A1D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040A1DC: j           L_0040A224
    // 0x0040A1E0: addiu       $v1, $zero, 0x5604
    ctx->r3 = ADD32(0, 0X5604);
        goto L_0040A224;
    // 0x0040A1E0: addiu       $v1, $zero, 0x5604
    ctx->r3 = ADD32(0, 0X5604);
L_0040A1E4:
    // 0x0040A1E4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0040A1E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0040A1EC: beq         $v0, $zero, L_0040A204
    if (ctx->r2 == 0) {
        // 0x0040A1F0: addiu       $v0, $zero, 0x5654
        ctx->r2 = ADD32(0, 0X5654);
            goto L_0040A204;
    }
    // 0x0040A1F0: addiu       $v0, $zero, 0x5654
    ctx->r2 = ADD32(0, 0X5654);
    // 0x0040A1F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0040A1F8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x0040A1FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040A200: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_0040A204:
    // 0x0040A204: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0040A208: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0040A20C: beq         $v0, $zero, L_0040A230
    if (ctx->r2 == 0) {
        // 0x0040A210: sll         $v1, $a0, 2
        ctx->r3 = S32(ctx->r4 << 2);
            goto L_0040A230;
    }
    // 0x0040A210: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0040A214: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040A218: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x0040A21C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040A220: addiu       $v1, $zero, 0x565E
    ctx->r3 = ADD32(0, 0X565E);
L_0040A224:
    // 0x0040A224: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040A228: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0040A22C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040A230:
    // 0x0040A230: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_0040A234:
    // 0x0040A234: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0040A238:
    // 0x0040A238: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A23C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0040A240: jal         0x0026D518
    // 0x0040A244: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040A244: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    after_0:
    // 0x0040A248: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A24C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0040A250: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A254: jr          $ra
    // 0x0040A258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040A258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041B718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B718: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B71C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B720: xori        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 ^ 0X400;
    // 0x0041B724: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B728: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B72C: jr          $ra
    // 0x0041B730: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B730: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040B5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B5D4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B5D8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B5DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B5E0: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B5E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B5E8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B5EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B5F4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B5F8: jal         0x00246108
    // 0x0040B5FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B5FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B604: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B608: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B60C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B610: jal         0x00245BAC
    // 0x0040B614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B618: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B61C: beq         $v0, $zero, L_0040B630
    if (ctx->r2 == 0) {
        // 0x0040B620: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B630;
    }
    // 0x0040B620: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B624: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B628: jal         0x00243414
    // 0x0040B62C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B62C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_0040B630:
    // 0x0040B630: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B634: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B638: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B63C: jr          $ra
    // 0x0040B640: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B640: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00426434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00426438: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042643C: jal         0x002053A8
    // 0x00426440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x00426440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00426444: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00426448: lw          $a1, 0x2228($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2228);
    // 0x0042644C: beq         $a1, $zero, L_0042646C
    if (ctx->r5 == 0) {
        // 0x00426450: nop
    
            goto L_0042646C;
    }
    // 0x00426450: nop

    // 0x00426454: jal         0x002052D8
    // 0x00426458: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x00426458: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x0042645C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426460: sw          $zero, 0x2228($at)
    MEM_W(0X2228, ctx->r1) = 0;
    // 0x00426464: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426468: sw          $zero, 0x2224($at)
    MEM_W(0X2224, ctx->r1) = 0;
L_0042646C:
    // 0x0042646C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00426470: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426474: sw          $zero, 0x2220($at)
    MEM_W(0X2220, ctx->r1) = 0;
    // 0x00426478: jr          $ra
    // 0x0042647C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042647C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044D3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004144E4:
    // 0x0044D3DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_00414598:
    // 0x0044D3E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0044D3E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0044D3E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0044D3EC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0044D3F0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0044D3F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0044D3F8: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x0044D3FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0044D400: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0044D404: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0044D408: bne         $v1, $v0, L_0044D424
    if (ctx->r3 != ctx->r2) {
        // 0x0044D40C: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_0044D424;
    }
    // 0x0044D40C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0044D410: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0044D414: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x0044D418: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044D41C: bne         $v0, $zero, L_0044D450
    if (ctx->r2 != 0) {
        // 0x0044D420: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044D450;
    }
    // 0x0044D420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0044D424:
    // 0x0044D424: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x0044D428: beq         $v0, $zero, L_0044D528
    if (ctx->r2 == 0) {
        // 0x0044D42C: nop
    
            goto L_0044D528;
    }
    // 0x0044D42C: nop

    // 0x0044D430: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0044D434: bgez        $v0, L_0044D528
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0044D438: nop
    
            goto L_0044D528;
    }
    // 0x0044D438: nop

    // 0x0044D43C: jal         0x00266B80
    // 0x0044D440: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0044D440: nop

    after_0:
    // 0x0044D444: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0044D448: bne         $v0, $v1, L_0044D528
    if (ctx->r2 != ctx->r3) {
        // 0x0044D44C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044D528;
    }
    // 0x0044D44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0044D450:
    // 0x0044D450: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x0044D454: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044D458: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0044D45C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0044D460: beq         $v0, $v1, L_0044D470
    if (ctx->r2 == ctx->r3) {
        // 0x0044D464: nop
    
            goto L_0044D470;
    }
    // 0x0044D464: nop

    // 0x0044D468: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D46C: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
L_0044D470:
    // 0x0044D470: jal         0x0027AF4C
    // 0x0044D474: nop

    func_0027AF4C(rdram, ctx);
        goto after_1;
    // 0x0044D474: nop

    after_1:
    // 0x0044D478: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0044D47C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0044D480: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D484: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D488: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0044D48C: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0044D490: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0044D494: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0044D498: lwc1        $f3, 0x1C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x0044D49C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0044D4A0: lwc1        $f2, 0x14($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0044D4A4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0044D4A8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0044D4AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0044D4B0: addiu       $v1, $v1, -0x535C
    ctx->r3 = ADD32(ctx->r3, -0X535C);
    // 0x0044D4B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0044D4B8: beq         $v0, $zero, L_0044D4E0
    if (ctx->r2 == 0) {
        // 0x0044D4BC: add.s       $f3, $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
            goto L_0044D4E0;
    }
    // 0x0044D4BC: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0044D4C0: lbu         $v0, -0x1B3($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X1B3);
    // 0x0044D4C4: beq         $v0, $zero, L_0044D4E4
    if (ctx->r2 == 0) {
        // 0x0044D4C8: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_0044D4E4;
    }
    // 0x0044D4C8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x0044D4CC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0044D4D0: bgez        $v0, L_0044D4E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0044D4D4: addiu       $v1, $zero, 0xC0
        ctx->r3 = ADD32(0, 0XC0);
            goto L_0044D4E4;
    }
    // 0x0044D4D4: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x0044D4D8: j           L_004144E4
    // 0x0044D4DC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    entry_004144E4(rdram, ctx);
    return;
    // 0x0044D4DC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_0044D4E0:
    // 0x0044D4E0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
L_0044D4E4:
    // 0x0044D4E4: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0044D4E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0044D4EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044D4F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0044D4F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044D4F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0044D4FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0044D500: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0044D504: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x0044D508: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0044D50C: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0044D510: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0044D514: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x0044D518: jal         0x002778A8
    // 0x0044D51C: nop

    func_002778A8(rdram, ctx);
        goto after_2;
    // 0x0044D51C: nop

    after_2:
    // 0x0044D520: j           L_00414598
    // 0x0044D524: nop

    entry_00414598(rdram, ctx);
    return;
    // 0x0044D524: nop

L_0044D528:
    // 0x0044D528: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044D52C: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0044D530: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0044D534: beq         $v0, $v1, L_0044D56C
    if (ctx->r2 == ctx->r3) {
        // 0x0044D538: nop
    
            goto L_0044D56C;
    }
    // 0x0044D538: nop

    // 0x0044D53C: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x0044D540: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D544: lwc1        $f0, 0xBE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE8);
    // 0x0044D548: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044D54C: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x0044D550: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D554: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D558: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
    // 0x0044D55C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D560: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x0044D564: jal         0x00279028
    // 0x0044D568: nop

    func_00279028(rdram, ctx);
        goto after_3;
    // 0x0044D568: nop

    after_3:
L_0044D56C:
    // 0x0044D56C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0044D570: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
    // 0x0044D574: lh          $a3, 0x1E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1E);
    // 0x0044D578: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0044D57C: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0044D580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044D584: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044D588: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0044D58C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0044D590: jal         0x0027B320
    // 0x0044D594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_4;
    // 0x0044D594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x0044D598: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0044D59C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0044D5A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0044D5A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0044D5A8: jr          $ra
    // 0x0044D5AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044D5AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00424500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424500: jr          $ra
    // 0x00424504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00424504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00268554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268554: lwc1        $f0, 0x3C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x00268558: jr          $ra
    // 0x0026855C: nop

    return;
    // 0x0026855C: nop

;}
RECOMP_FUNC void func_00423690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423690: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423694: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00423698: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042369C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004236A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004236A4: beq         $v0, $zero, L_004236BC
    if (ctx->r2 == 0) {
        // 0x004236A8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_004236BC;
    }
    // 0x004236A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004236AC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004236B0: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x004236B4: j           L_004236C8
    // 0x004236B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_004236C8;
    // 0x004236B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004236BC:
    // 0x004236BC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004236C0: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x004236C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004236C8:
    // 0x004236C8: jal         0x0041DD90
    // 0x004236CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x004236CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x004236D0: beq         $v0, $zero, L_0042372C
    if (ctx->r2 == 0) {
        // 0x004236D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042372C;
    }
    // 0x004236D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004236D8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x004236DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004236E0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004236E4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004236E8: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x004236EC: beq         $v1, $v0, L_00423704
    if (ctx->r3 == ctx->r2) {
        // 0x004236F0: nop
    
            goto L_00423704;
    }
    // 0x004236F0: nop

    // 0x004236F4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004236F8: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004236FC: bnel        $v1, $v0, L_00423710
    if (ctx->r3 != ctx->r2) {
        // 0x00423700: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00423710;
    }
    goto skip_0;
    // 0x00423700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423704:
    // 0x00423704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423708: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042370C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00423710:
    // 0x00423710: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423714: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423718: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042371C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423720: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423724: j           L_0042374C
    // 0x00423728: nop

        goto L_0042374C;
    // 0x00423728: nop

L_0042372C:
    // 0x0042372C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00423730: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423734: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423738: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042373C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423740: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00423744: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00423748: addiu       $a1, $a1, -0x3E60
    ctx->r5 = ADD32(ctx->r5, -0X3E60);
L_0042374C:
    // 0x0042374C: jal         0x00416644
    // 0x00423750: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00423750: nop

    after_1:
    // 0x00423754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042375C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423760: jr          $ra
    // 0x00423764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00423764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0020EEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EEF0: jr          $ra
    // 0x0020EEF4: nop

    return;
    // 0x0020EEF4: nop

;}
RECOMP_FUNC void func_0020B7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B7F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0020B7FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0020B800: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0020B804: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0020B808: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0020B80C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0020B810: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0020B814: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0020B818: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0020B81C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B820: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0020B824: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0020B828: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0020B82C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0020B830: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x0020B834: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0020B838: addiu       $v0, $v0, 0x53D8
    ctx->r2 = ADD32(ctx->r2, 0X53D8);
    // 0x0020B83C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0020B840: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0020B844: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0020B848: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0020B84C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0020B850: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0020B854: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0020B858: jal         0x0020367C
    // 0x0020B85C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0020B85C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_0:
    // 0x0020B860: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0020B864: beq         $s1, $zero, L_0020B9CC
    if (ctx->r17 == 0) {
        // 0x0020B868: addu        $a2, $s3, $zero
        ctx->r6 = ADD32(ctx->r19, 0);
            goto L_0020B9CC;
    }
    // 0x0020B868: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0020B86C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0020B870: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0020B874: jal         0x0020185C
    // 0x0020B878: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x0020B878: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x0020B87C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B880: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0020B884: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0020B888: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0020B88C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x0020B890: addiu       $v0, $v0, -0x4B50
    ctx->r2 = ADD32(ctx->r2, -0X4B50);
    // 0x0020B894: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0020B898: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0020B89C: addiu       $v0, $v0, 0x53EC
    ctx->r2 = ADD32(ctx->r2, 0X53EC);
    // 0x0020B8A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0020B8A4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0020B8A8: jal         0x0020367C
    // 0x0020B8AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x0020B8AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_2:
    // 0x0020B8B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020B8B4: beq         $s0, $zero, L_0020B9C4
    if (ctx->r16 == 0) {
        // 0x0020B8B8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020B9C4;
    }
    // 0x0020B8B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B8BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0020B8C0: jal         0x002017D4
    // 0x0020B8C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020B8C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x0020B8C8: bltz        $s2, L_0020B9B8
    if (SIGNED(ctx->r18) < 0) {
        // 0x0020B8CC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020B9B8;
    }
    // 0x0020B8CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B8D0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0020B8D4: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020B8D8: beq         $v0, $zero, L_0020B9B8
    if (ctx->r2 == 0) {
        // 0x0020B8DC: nop
    
            goto L_0020B9B8;
    }
    // 0x0020B8DC: nop

    // 0x0020B8E0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B8E4: lw          $v0, -0x71D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71D8);
    // 0x0020B8E8: bne         $v0, $s0, L_0020B920
    if (ctx->r2 != ctx->r16) {
        // 0x0020B8EC: nop
    
            goto L_0020B920;
    }
    // 0x0020B8EC: nop

    // 0x0020B8F0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B8F4: lw          $v0, -0x71EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71EC);
    // 0x0020B8F8: bne         $v0, $s2, L_0020B920
    if (ctx->r2 != ctx->r18) {
        // 0x0020B8FC: nop
    
            goto L_0020B920;
    }
    // 0x0020B8FC: nop

    // 0x0020B900: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B904: lw          $v0, -0x71F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71F0);
    // 0x0020B908: bne         $v0, $s4, L_0020B920
    if (ctx->r2 != ctx->r20) {
        // 0x0020B90C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0020B920;
    }
    // 0x0020B90C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0020B910: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020B914: lw          $v1, -0x71CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71CC);
    // 0x0020B918: bne         $v1, $v0, L_0020B968
    if (ctx->r3 != ctx->r2) {
        // 0x0020B91C: nop
    
            goto L_0020B968;
    }
    // 0x0020B91C: nop

L_0020B920:
    // 0x0020B920: jal         0x0020A568
    // 0x0020B924: nop

    func_0020A568(rdram, ctx);
        goto after_4;
    // 0x0020B924: nop

    after_4:
    // 0x0020B928: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020B92C: lw          $v1, -0x2E90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E90);
    // 0x0020B930: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0020B934: beq         $v1, $v0, L_0020B9B4
    if (ctx->r3 == ctx->r2) {
        // 0x0020B938: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020B9B4;
    }
    // 0x0020B938: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020B93C: jal         0x00205110
    // 0x0020B940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00205110(rdram, ctx);
        goto after_5;
    // 0x0020B940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0020B944: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B948: lw          $v0, -0x2E90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2E90);
    // 0x0020B94C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0020B950: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020B954: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B958: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0020B95C: sw          $s0, -0x2E88($at)
    MEM_W(-0X2E88, ctx->r1) = ctx->r16;
    // 0x0020B960: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B964: sw          $v0, -0x2E90($at)
    MEM_W(-0X2E90, ctx->r1) = ctx->r2;
L_0020B968:
    // 0x0020B968: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B96C: lw          $v0, -0x71CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71CC);
    // 0x0020B970: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B974: sw          $s0, -0x71D8($at)
    MEM_W(-0X71D8, ctx->r1) = ctx->r16;
    // 0x0020B978: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B97C: sw          $s2, -0x71EC($at)
    MEM_W(-0X71EC, ctx->r1) = ctx->r18;
    // 0x0020B980: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B984: sw          $s4, -0x71F0($at)
    MEM_W(-0X71F0, ctx->r1) = ctx->r20;
    // 0x0020B988: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0020B98C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020B990: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020B994: sw          $v0, -0x71CC($at)
    MEM_W(-0X71CC, ctx->r1) = ctx->r2;
    // 0x0020B998: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020B99C: addiu       $v0, $v0, -0x2A88
    ctx->r2 = ADD32(ctx->r2, -0X2A88);
    // 0x0020B9A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0020B9A4: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x0020B9A8: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x0020B9AC: sw          $s6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r22;
    // 0x0020B9B0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_0020B9B4:
    // 0x0020B9B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020B9B8:
    // 0x0020B9B8: jal         0x002051F4
    // 0x0020B9BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_6;
    // 0x0020B9BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0020B9C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020B9C4:
    // 0x0020B9C4: jal         0x002051F4
    // 0x0020B9C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x0020B9C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_0020B9CC:
    // 0x0020B9CC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0020B9D0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0020B9D4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0020B9D8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0020B9DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0020B9E0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0020B9E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0020B9E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0020B9EC: jr          $ra
    // 0x0020B9F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0020B9F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004075F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004075F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004075FC: lwc1        $f0, 0x51C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X51C);
    // 0x00407600: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00407604: addiu       $a1, $a1, -0x624
    ctx->r5 = ADD32(ctx->r5, -0X624);
    // 0x00407608: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x0040760C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00407610: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00407614: bne         $v1, $v0, L_00407628
    if (ctx->r3 != ctx->r2) {
        // 0x00407618: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00407628;
    }
    // 0x00407618: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040761C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407620: lwc1        $f0, 0x520($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X520);
    // 0x00407624: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
L_00407628:
    // 0x00407628: bne         $v1, $v0, L_00407640
    if (ctx->r3 != ctx->r2) {
        // 0x0040762C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00407640;
    }
    // 0x0040762C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00407630: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407634: lwc1        $f0, 0x524($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X524);
    // 0x00407638: sb          $v0, -0xA($a1)
    MEM_B(-0XA, ctx->r5) = ctx->r2;
    // 0x0040763C: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
L_00407640:
    // 0x00407640: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00407644: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407648: lwc1        $f0, 0x528($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X528);
    // 0x0040764C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407650: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00407654: jr          $ra
    // 0x00407658: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00407658: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00200B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200B00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00200B04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00200B08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00200B0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00200B10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00200B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00200B18: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x00200B1C: lui         $v0, 0x524E
    ctx->r2 = S32(0X524E << 16);
    // 0x00200B20: lw          $s0, 0x0($a2)
    ctx->r16 = MEM_W(ctx->r6, 0X0);
    // 0x00200B24: ori         $v0, $v0, 0x4300
    ctx->r2 = ctx->r2 | 0X4300;
    // 0x00200B28: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00200B2C: addiu       $a0, $zero, -0x100
    ctx->r4 = ADD32(0, -0X100);
    // 0x00200B30: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00200B34: bne         $v1, $v0, L_00200BC4
    if (ctx->r3 != ctx->r2) {
        // 0x00200B38: nop
    
            goto L_00200BC4;
    }
    // 0x00200B38: nop

    // 0x00200B3C: beq         $a1, $zero, L_00200B58
    if (ctx->r5 == 0) {
        // 0x00200B40: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00200B58;
    }
    // 0x00200B40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00200B44: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00200B48: jal         0x00205EFC
    // 0x00200B4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00205EFC(rdram, ctx);
        goto after_0;
    // 0x00200B4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00200B50: j           L_00200B68
    // 0x00200B54: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_00200B68;
    // 0x00200B54: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00200B58:
    // 0x00200B58: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00200B5C: jal         0x00205D7C
    // 0x00200B60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00205D7C(rdram, ctx);
        goto after_1;
    // 0x00200B60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00200B64: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00200B68:
    // 0x00200B68: beq         $s1, $zero, L_00200C08
    if (ctx->r17 == 0) {
        // 0x00200B6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00200C08;
    }
    // 0x00200B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00200B70: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x00200B74: beq         $v1, $v0, L_00200B8C
    if (ctx->r3 == ctx->r2) {
        // 0x00200B78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00200B8C;
    }
    // 0x00200B78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00200B7C: beq         $v1, $v0, L_00200BA8
    if (ctx->r3 == ctx->r2) {
        // 0x00200B80: nop
    
            goto L_00200BA8;
    }
    // 0x00200B80: nop

    // 0x00200B84: j           L_00200C0C
    // 0x00200B88: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_00200C0C;
    // 0x00200B88: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00200B8C:
    // 0x00200B8C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00200B90: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00200B94: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x00200B98: jal         0x00200C40
    // 0x00200B9C: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    func_00200C40(rdram, ctx);
        goto after_2;
    // 0x00200B9C: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    after_2:
    // 0x00200BA0: j           L_00200C0C
    // 0x00200BA4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_00200C0C;
    // 0x00200BA4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00200BA8:
    // 0x00200BA8: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00200BAC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00200BB0: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x00200BB4: jal         0x002010C0
    // 0x00200BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_002010C0(rdram, ctx);
        goto after_3;
    // 0x00200BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00200BBC: j           L_00200C0C
    // 0x00200BC0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_00200C0C;
    // 0x00200BC0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00200BC4:
    // 0x00200BC4: bne         $a1, $zero, L_00200C1C
    if (ctx->r5 != 0) {
        // 0x00200BC8: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00200C1C;
    }
    // 0x00200BC8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00200BCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00200BD0: lw          $a2, 0x4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4);
    // 0x00200BD4: jal         0x00205D7C
    // 0x00200BD8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00205D7C(rdram, ctx);
        goto after_4;
    // 0x00200BD8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00200BDC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00200BE0: beq         $s1, $zero, L_00200C0C
    if (ctx->r17 == 0) {
        // 0x00200BE4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00200C0C;
    }
    // 0x00200BE4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00200BE8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00200BEC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00200BF0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00200BF4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00200BF8: jal         0x0029E460
    // 0x00200BFC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_0029E460(rdram, ctx);
        goto after_5;
    // 0x00200BFC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_5:
    // 0x00200C00: j           L_00200C10
    // 0x00200C04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00200C10;
    // 0x00200C04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00200C08:
    // 0x00200C08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00200C0C:
    // 0x00200C0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00200C10:
    // 0x00200C10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00200C14: jal         0x002057B0
    // 0x00200C18: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_002057B0(rdram, ctx);
        goto after_6;
    // 0x00200C18: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
L_00200C1C:
    // 0x00200C1C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00200C20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00200C24: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00200C28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00200C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00200C30: jr          $ra
    // 0x00200C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00200C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00453334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A36C:
    // 0x00453334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00453338: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0045333C: lw          $v1, -0x6760($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6760);
    // 0x00453340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00453344: bne         $v1, $v0, L_00453364
    if (ctx->r3 != ctx->r2) {
        // 0x00453348: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00453364;
    }
    // 0x00453348: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045334C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00453350: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00453354: jal         0x00430250
    // 0x00453358: nop

    func_00430250(rdram, ctx);
        goto after_0;
    // 0x00453358: nop

    after_0:
    // 0x0045335C: j           L_0041A36C
    // 0x00453360: nop

    entry_0041A36C(rdram, ctx);
    return;
    // 0x00453360: nop

L_00453364:
    // 0x00453364: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00453368: sw          $zero, 0x510($v0)
    MEM_W(0X510, ctx->r2) = 0;
    // 0x0045336C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00453370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00453374: jr          $ra
    // 0x00453378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00453378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004407F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004407F0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004407F4: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004407F8: jr          $ra
    // 0x004407FC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004407FC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004472B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004472B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004472B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004472BC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x004472C0: beq         $v0, $zero, L_004472D0
    if (ctx->r2 == 0) {
        // 0x004472C4: nop
    
            goto L_004472D0;
    }
    // 0x004472C4: nop

    // 0x004472C8: jal         0x00243414
    // 0x004472CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004472CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_004472D0:
    // 0x004472D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004472D4: jr          $ra
    // 0x004472D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004472D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002123D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002123D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002123D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x002123DC: lwc1        $f3, 0x24($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x002123E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002123E4: lwc1        $f4, 0x5750($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5750);
    // 0x002123E8: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x002123EC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002123F0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x002123F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x002123F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002123FC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x00212400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00212404: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x00212408: c.le.s      $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f4.fl <= ctx->f3.fl;
    // 0x0021240C: nop

    // 0x00212410: bc1t        L_00212650
    if (c1cs) {
        // 0x00212414: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_00212650;
    }
    // 0x00212414: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x00212418: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021241C: lwc1        $f0, 0x5754($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5754);
    // 0x00212420: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x00212424: nop

    // 0x00212428: bc1t        L_00212650
    if (c1cs) {
        // 0x0021242C: nop
    
            goto L_00212650;
    }
    // 0x0021242C: nop

    // 0x00212430: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00212434: c.le.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl <= ctx->f1.fl;
    // 0x00212438: nop

    // 0x0021243C: bc1t        L_00212650
    if (c1cs) {
        // 0x00212440: nop
    
            goto L_00212650;
    }
    // 0x00212440: nop

    // 0x00212444: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00212448: nop

    // 0x0021244C: bc1t        L_00212650
    if (c1cs) {
        // 0x00212450: nop
    
            goto L_00212650;
    }
    // 0x00212450: nop

    // 0x00212454: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x00212458: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x0021245C: nop

    // 0x00212460: bc1t        L_00212650
    if (c1cs) {
        // 0x00212464: nop
    
            goto L_00212650;
    }
    // 0x00212464: nop

    // 0x00212468: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0021246C: nop

    // 0x00212470: bc1t        L_00212650
    if (c1cs) {
        // 0x00212474: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00212650;
    }
    // 0x00212474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00212478: lbu         $v1, 0xBB($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XBB);
    // 0x0021247C: beq         $v1, $v0, L_00212568
    if (ctx->r3 == ctx->r2) {
        // 0x00212480: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00212568;
    }
    // 0x00212480: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00212484: beql        $v0, $zero, L_0021249C
    if (ctx->r2 == 0) {
        // 0x00212488: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0021249C;
    }
    goto skip_0;
    // 0x00212488: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0021248C: beq         $v1, $zero, L_002124AC
    if (ctx->r3 == 0) {
        // 0x00212490: nop
    
            goto L_002124AC;
    }
    // 0x00212490: nop

    // 0x00212494: j           L_002125D0
    // 0x00212498: nop

        goto L_002125D0;
    // 0x00212498: nop

L_0021249C:
    // 0x0021249C: beq         $v1, $v0, L_00212504
    if (ctx->r3 == ctx->r2) {
        // 0x002124A0: nop
    
            goto L_00212504;
    }
    // 0x002124A0: nop

    // 0x002124A4: j           L_002125D0
    // 0x002124A8: nop

        goto L_002125D0;
    // 0x002124A8: nop

L_002124AC:
    // 0x002124AC: mul.s       $f0, $f3, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x002124B0: nop

    // 0x002124B4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002124B8: nop

    // 0x002124BC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002124C0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002124C4: add.s       $f20, $f0, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x002124C8: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x002124CC: nop

    // 0x002124D0: bc1t        L_00212650
    if (c1cs) {
        // 0x002124D4: nop
    
            goto L_00212650;
    }
    // 0x002124D4: nop

    // 0x002124D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002124DC: lwc1        $f0, 0x5758($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5758);
    // 0x002124E0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002124E4: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002124E8: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x002124EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002124F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002124F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002124F8: lwc1        $f20, -0x3730($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X3730);
    // 0x002124FC: j           L_002125D0
    // 0x00212500: nop

        goto L_002125D0;
    // 0x00212500: nop

L_00212504:
    // 0x00212504: c.le.s      $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f3.fl <= ctx->f20.fl;
    // 0x00212508: nop

    // 0x0021250C: bc1t        L_00212650
    if (c1cs) {
        // 0x00212510: nop
    
            goto L_00212650;
    }
    // 0x00212510: nop

    // 0x00212514: mul.s       $f0, $f1, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00212518: nop

    // 0x0021251C: mul.s       $f1, $f2, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00212520: nop

    // 0x00212524: mul.s       $f2, $f3, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00212528: add.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021252C: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x00212530: nop

    // 0x00212534: bc1t        L_00212650
    if (c1cs) {
        // 0x00212538: nop
    
            goto L_00212650;
    }
    // 0x00212538: nop

    // 0x0021253C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212540: lwc1        $f0, 0x575C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X575C);
    // 0x00212544: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00212548: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021254C: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00212550: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00212554: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00212558: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0021255C: lwc1        $f20, -0x362C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X362C);
    // 0x00212560: j           L_002125D0
    // 0x00212564: div.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f3.fl);
        goto L_002125D0;
    // 0x00212564: div.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f3.fl);
L_00212568:
    // 0x00212568: c.lt.s      $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f3.fl < ctx->f20.fl;
    // 0x0021256C: nop

    // 0x00212570: bc1tl       L_00212578
    if (c1cs) {
        // 0x00212574: neg.s       $f3, $f3
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = -ctx->f3.fl;
            goto L_00212578;
    }
    goto skip_1;
    // 0x00212574: neg.s       $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = -ctx->f3.fl;
    skip_1:
L_00212578:
    // 0x00212578: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x0021257C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00212580: nop

    // 0x00212584: bc1f        L_00212590
    if (!c1cs) {
        // 0x00212588: swc1        $f3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_00212590;
    }
    // 0x00212588: swc1        $f3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0021258C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_00212590:
    // 0x00212590: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    // 0x00212594: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00212598: nop

    // 0x0021259C: bc1f        L_002125A8
    if (!c1cs) {
        // 0x002125A0: swc1        $f0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
            goto L_002125A8;
    }
    // 0x002125A0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x002125A4: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
L_002125A8:
    // 0x002125A8: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
    // 0x002125AC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002125B0: nop

    // 0x002125B4: bc1t        L_002125C0
    if (c1cs) {
        // 0x002125B8: swc1        $f1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_002125C0;
    }
    // 0x002125B8: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002125BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_002125C0:
    // 0x002125C0: c.le.s      $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f3.fl <= ctx->f20.fl;
    // 0x002125C4: nop

    // 0x002125C8: bc1fl       L_002125D0
    if (!c1cs) {
        // 0x002125CC: mov.s       $f20, $f3
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    ctx->f20.fl = ctx->f3.fl;
            goto L_002125D0;
    }
    goto skip_2;
    // 0x002125CC: mov.s       $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    ctx->f20.fl = ctx->f3.fl;
    skip_2:
L_002125D0:
    // 0x002125D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002125D4: lwc1        $f1, 0x5760($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5760);
    // 0x002125D8: sub.s       $f20, $f1, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f20.fl;
    // 0x002125DC: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x002125E0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002125E4: nop

    // 0x002125E8: bc1fl       L_002125F4
    if (!c1cs) {
        // 0x002125EC: mov.s       $f20, $f1
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
            goto L_002125F4;
    }
    goto skip_3;
    // 0x002125EC: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
    skip_3:
    // 0x002125F0: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
L_002125F4:
    // 0x002125F4: lbu         $v1, 0xBB($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XBB);
    // 0x002125F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002125FC: bne         $v1, $v0, L_00212624
    if (ctx->r3 != ctx->r2) {
        // 0x00212600: nop
    
            goto L_00212624;
    }
    // 0x00212600: nop

    // 0x00212604: lw          $t1, 0x14($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X14);
    // 0x00212608: lw          $t2, 0x18($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X18);
    // 0x0021260C: lw          $t3, 0x1C($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X1C);
    // 0x00212610: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x00212614: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x00212618: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x0021261C: j           L_0021263C
    // 0x00212620: nop

        goto L_0021263C;
    // 0x00212620: nop

L_00212624:
    // 0x00212624: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00212628: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0021262C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x00212630: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x00212634: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x00212638: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
L_0021263C:
    // 0x0021263C: jal         0x0020F040
    // 0x00212640: nop

    func_0020F040(rdram, ctx);
        goto after_0;
    // 0x00212640: nop

    after_0:
    // 0x00212644: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x00212648: j           L_0021266C
    // 0x0021264C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0021266C;
    // 0x0021264C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00212650:
    // 0x00212650: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212654: lwc1        $f0, 0x5764($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5764);
    // 0x00212658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0021265C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00212660: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00212664: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00212668: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0021266C:
    // 0x0021266C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00212670: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00212674: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00212678: jr          $ra
    // 0x0021267C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021267C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045A5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421628:
    // 0x0045A5E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_00421658:
    // 0x0045A5E4: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
L_00421690:
    // 0x0045A5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045A5EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045A5F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045A5F4: bne         $v0, $zero, L_0045A6A8
    if (ctx->r2 != 0) {
        // 0x0045A5F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045A6A8;
    }
    // 0x0045A5F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045A5FC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A600: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A604: beq         $v0, $zero, L_0045A61C
    if (ctx->r2 == 0) {
        // 0x0045A608: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045A61C;
    }
    // 0x0045A608: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045A60C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045A610: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0045A614: j           L_00421628
    // 0x0045A618: nop

    entry_00421628(rdram, ctx);
    return;
    // 0x0045A618: nop

L_0045A61C:
    // 0x0045A61C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045A620: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x0045A624: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045A628: beq         $v1, $v0, L_0045A6A8
    if (ctx->r3 == ctx->r2) {
        // 0x0045A62C: nop
    
            goto L_0045A6A8;
    }
    // 0x0045A62C: nop

    // 0x0045A630: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A634: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A638: beq         $v0, $zero, L_0045A650
    if (ctx->r2 == 0) {
        // 0x0045A63C: nop
    
            goto L_0045A650;
    }
    // 0x0045A63C: nop

    // 0x0045A640: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045A644: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045A648: j           L_00421658
    // 0x0045A64C: nop

    entry_00421658(rdram, ctx);
    return;
    // 0x0045A64C: nop

L_0045A650:
    // 0x0045A650: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045A654: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045A658: jal         0x0028591C
    // 0x0045A65C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0045A65C: nop

    after_0:
    // 0x0045A660: beq         $v0, $zero, L_0045A6A8
    if (ctx->r2 == 0) {
        // 0x0045A664: nop
    
            goto L_0045A6A8;
    }
    // 0x0045A664: nop

    // 0x0045A668: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A66C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A670: beq         $v0, $zero, L_0045A688
    if (ctx->r2 == 0) {
        // 0x0045A674: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045A688;
    }
    // 0x0045A674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045A678: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045A67C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045A680: j           L_00421690
    // 0x0045A684: nop

    func_00421690(rdram, ctx);
    return;
    // 0x0045A684: nop

L_0045A688:
    // 0x0045A688: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045A68C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045A690: jal         0x0041DCB0
    // 0x0045A694: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_1;
    // 0x0045A694: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0045A698: beq         $v0, $zero, L_0045A6A8
    if (ctx->r2 == 0) {
        // 0x0045A69C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045A6A8;
    }
    // 0x0045A69C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A6A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A6A4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_0045A6A8:
    // 0x0045A6A8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A6AC: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0045A6B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045A6B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045A6B8: jr          $ra
    // 0x0045A6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045A6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002817A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002817A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002817A4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002817A8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002817AC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002817B0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x002817B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002817B8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002817BC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002817C0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002817C4: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x002817C8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002817CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002817D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002817D4: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x002817D8: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x002817DC: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x002817E0: lw          $s0, 0xE28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0XE28);
    // 0x002817E4: lwc1        $f22, 0x60($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X60);
    // 0x002817E8: beq         $s0, $zero, L_00281824
    if (ctx->r16 == 0) {
        // 0x002817EC: addu        $s5, $a3, $zero
        ctx->r21 = ADD32(ctx->r7, 0);
            goto L_00281824;
    }
    // 0x002817EC: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
L_002817F0:
    // 0x002817F0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x002817F4: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x002817F8: bnel        $v0, $s5, L_0028181C
    if (ctx->r2 != ctx->r21) {
        // 0x002817FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0028181C;
    }
    goto skip_0;
    // 0x002817FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00281800: addiu       $a0, $s4, 0xE28
    ctx->r4 = ADD32(ctx->r20, 0XE28);
    // 0x00281804: jal         0x00200738
    // 0x00281808: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00281808: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0028180C: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x00281810: jal         0x00200518
    // 0x00281814: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00281814: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00281818: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0028181C:
    // 0x0028181C: bne         $s0, $zero, L_002817F0
    if (ctx->r16 != 0) {
        // 0x00281820: nop
    
            goto L_002817F0;
    }
    // 0x00281820: nop

L_00281824:
    // 0x00281824: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00281828: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028182C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00281830: lw          $v0, 0x35D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X35D4);
    // 0x00281834: bne         $a2, $v0, L_00281844
    if (ctx->r6 != ctx->r2) {
        // 0x00281838: addiu       $s7, $zero, 0x2
        ctx->r23 = ADD32(0, 0X2);
            goto L_00281844;
    }
    // 0x00281838: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x0028183C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00281840: lw          $a2, 0x2CD0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2CD0);
L_00281844:
    // 0x00281844: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00281848: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028184C: beq         $v0, $zero, L_00281938
    if (ctx->r2 == 0) {
        // 0x00281850: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_00281938;
    }
    // 0x00281850: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x00281854: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
L_00281858:
    // 0x00281858: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028185C: lwc1        $f20, -0x63E0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X63E0);
    // 0x00281860: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281864: lwc1        $f21, -0x63DC($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X63DC);
    // 0x00281868: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0028186C:
    // 0x0028186C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00281870: beq         $v0, $s6, L_00281880
    if (ctx->r2 == ctx->r22) {
        // 0x00281874: nop
    
            goto L_00281880;
    }
    // 0x00281874: nop

    // 0x00281878: bnel        $v0, $zero, L_00281858
    if (ctx->r2 != 0) {
        // 0x0028187C: addiu       $s6, $zero, 0xA
        ctx->r22 = ADD32(0, 0XA);
            goto L_00281858;
    }
    goto skip_1;
    // 0x0028187C: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    skip_1:
L_00281880:
    // 0x00281880: beq         $s2, $s1, L_0028192C
    if (ctx->r18 == ctx->r17) {
        // 0x00281884: nop
    
            goto L_0028192C;
    }
    // 0x00281884: nop

    // 0x00281888: lw          $s0, 0xF0C($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XF0C);
    // 0x0028188C: beq         $s0, $zero, L_002818B8
    if (ctx->r16 == 0) {
        // 0x00281890: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002818B8;
    }
    // 0x00281890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00281894: jal         0x00281B58
    // 0x00281898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281B58(rdram, ctx);
        goto after_2;
    // 0x00281898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0028189C: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x002818A0: jal         0x00200738
    // 0x002818A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_3;
    // 0x002818A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002818A8: addiu       $a0, $s4, 0xE28
    ctx->r4 = ADD32(ctx->r20, 0XE28);
    // 0x002818AC: jal         0x00200574
    // 0x002818B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_4;
    // 0x002818B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002818B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002818B8:
    // 0x002818B8: beql        $a0, $zero, L_0028192C
    if (ctx->r4 == 0) {
        // 0x002818BC: addiu       $s2, $s1, 0x1
        ctx->r18 = ADD32(ctx->r17, 0X1);
            goto L_0028192C;
    }
    goto skip_2;
    // 0x002818BC: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x002818C0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002818C4: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x002818C8: mul.s       $f1, $f22, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f21.fl);
    // 0x002818CC: sw          $s7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r23;
    // 0x002818D0: sw          $s2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r18;
    // 0x002818D4: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x002818D8: swc1        $f20, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f20.u32l;
    // 0x002818DC: sw          $s5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r21;
    // 0x002818E0: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x002818E4: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x002818E8: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x002818EC: swc1        $f20, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f20.u32l;
    // 0x002818F0: swc1        $f20, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f20.u32l;
    // 0x002818F4: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x002818F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002818FC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x00281900: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00281904: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00281908: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0028190C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00281910: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x00281914: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x00281918: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0028191C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00281920: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00281924: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281928: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
L_0028192C:
    // 0x0028192C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00281930: bne         $v0, $zero, L_0028186C
    if (ctx->r2 != 0) {
        // 0x00281934: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0028186C;
    }
    // 0x00281934: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00281938:
    // 0x00281938: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0028193C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00281940: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00281944: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00281948: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028194C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00281950: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00281954: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028195C: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x00281960: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00281964: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00281968: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0028196C: jr          $ra
    // 0x00281970: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00281970: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004161B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004161B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004161B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004161BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004161C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004161C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004161C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x004161CC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004161D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x004161D4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004161D8: jal         0x00413230
    // 0x004161DC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_00413230(rdram, ctx);
        goto after_0;
    // 0x004161DC: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x004161E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004161E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004161E8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004161EC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x004161F0: jal         0x00413F74
    // 0x004161F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_1;
    // 0x004161F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x004161F8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004161FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00416200: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00416204: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00416208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041620C: jr          $ra
    // 0x00416210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00416210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00225C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225C84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00225C88: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00225C8C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00225C90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00225C94: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00225C98: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225C9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00225CA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225CA4: lw          $s2, 0xE8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0XE8);
    // 0x00225CA8: blez        $s2, L_00225CEC
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00225CAC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00225CEC;
    }
    // 0x00225CAC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00225CB0: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00225CB4: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00225CB8:
    // 0x00225CB8: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x00225CBC: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x00225CC0: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00225CC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00225CC8: bnel        $v0, $s4, L_00225CE0
    if (ctx->r2 != ctx->r20) {
        // 0x00225CCC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00225CE0;
    }
    goto skip_0;
    // 0x00225CCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00225CD0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00225CD4: jal         0x00220260
    // 0x00225CD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x00225CD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00225CDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00225CE0:
    // 0x00225CE0: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00225CE4: bne         $v0, $zero, L_00225CB8
    if (ctx->r2 != 0) {
        // 0x00225CE8: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_00225CB8;
    }
    // 0x00225CE8: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
L_00225CEC:
    // 0x00225CEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00225CF0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00225CF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225CF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225CFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225D00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225D04: jr          $ra
    // 0x00225D08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00225D08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002539D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002539D4: jr          $ra
    // 0x002539D8: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x002539D8: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_00416474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416474: jr          $ra
    // 0x00416478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00416478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00426F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426F5C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00426F60: beq         $v0, $zero, L_00426F74
    if (ctx->r2 == 0) {
        // 0x00426F64: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_00426F74;
    }
    // 0x00426F64: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_00426F68:
    // 0x00426F68: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00426F6C: bne         $v0, $zero, L_00426F68
    if (ctx->r2 != 0) {
        // 0x00426F70: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00426F68;
    }
    // 0x00426F70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00426F74:
    // 0x00426F74: j           L_00426F9C
    // 0x00426F78: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    func_00426F9C(rdram, ctx);
    return;
    // 0x00426F78: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // turok2: reconnected split function: a stray ELF symbol at 0x00426F7C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426F7C(rdram, ctx);
;}
RECOMP_FUNC void func_0023F21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F21C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023F220: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F224: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0023F228: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F22C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023F230: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023F234: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F238: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F23C: lh          $a2, 0xC($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XC);
    // 0x0023F240: jal         0x00253B54
    // 0x0023F244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_00253B54(rdram, ctx);
        goto after_0;
    // 0x0023F244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0023F248: beq         $v0, $zero, L_0023F2E0
    if (ctx->r2 == 0) {
        // 0x0023F24C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F2E0;
    }
    // 0x0023F24C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F250: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F254: lh          $s2, 0x6($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X6);
    // 0x0023F258: lh          $s3, 0x8($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X8);
    // 0x0023F25C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F260: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F264: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F268: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F26C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F270: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F274: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x0023F278: jal         0x00281060
    // 0x0023F27C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x0023F27C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x0023F280: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023F284: addiu       $s0, $s0, 0x3C30
    ctx->r16 = ADD32(ctx->r16, 0X3C30);
    // 0x0023F288: beq         $s0, $zero, L_0023F2A4
    if (ctx->r16 == 0) {
        // 0x0023F28C: nop
    
            goto L_0023F2A4;
    }
    // 0x0023F28C: nop

    // 0x0023F290: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F294: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F298: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x0023F29C: jal         0x0027FC2C
    // 0x0023F2A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0027FC2C(rdram, ctx);
        goto after_2;
    // 0x0023F2A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_0023F2A4:
    // 0x0023F2A4: beq         $s2, $zero, L_0023F2C8
    if (ctx->r18 == 0) {
        // 0x0023F2A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023F2C8;
    }
    // 0x0023F2A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023F2AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F2B0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023F2B4: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0023F2B8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0023F2BC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0023F2C0: jal         0x00275544
    // 0x0023F2C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0023F2C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_0023F2C8:
    // 0x0023F2C8: beq         $s3, $zero, L_0023F2E4
    if (ctx->r19 == 0) {
        // 0x0023F2CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023F2E4;
    }
    // 0x0023F2CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023F2D0: jal         0x0027580C
    // 0x0023F2D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0027580C(rdram, ctx);
        goto after_4;
    // 0x0023F2D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0023F2D8: j           L_0023F2E4
    // 0x0023F2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0023F2E4;
    // 0x0023F2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023F2E0:
    // 0x0023F2E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023F2E4:
    // 0x0023F2E4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0023F2E8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F2EC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F2F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F2F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F2F8: jr          $ra
    // 0x0023F2FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023F2FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029546C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029546C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00295470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00295474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00295478: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029547C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00295480: lui         $a1, 0x29
    ctx->r5 = S32(0X29 << 16);
    // 0x00295484: addiu       $a1, $a1, 0x64D0
    ctx->r5 = ADD32(ctx->r5, 0X64D0);
    // 0x00295488: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x0029548C: addiu       $a2, $a2, 0x6690
    ctx->r6 = ADD32(ctx->r6, 0X6690);
    // 0x00295490: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00295494: jal         0x00296340
    // 0x00295498: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x00295498: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0029549C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002954A0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002954A4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x002954A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002954AC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002954B0: jal         0x002912A0
    // 0x002954B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_1;
    // 0x002954B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x002954B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002954BC: lwc1        $f0, -0x5AE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AE0);
    // 0x002954C0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x002954C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002954C8: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x002954CC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x002954D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x002954D4: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x002954D8: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x002954DC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x002954E0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x002954E4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002954E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002954EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002954F0: jr          $ra
    // 0x002954F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002954F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002105A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002105A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002105A8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002105AC: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002105B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002105B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002105B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002105BC: jal         0x002982F0
    // 0x002105C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x002105C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x002105C4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002105C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002105CC: lwc1        $f2, 0x5620($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5620);
    // 0x002105D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002105D4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x002105D8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002105DC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x002105E0: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105E4: swc1        $f1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105E8: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105EC: swc1        $f1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105F0: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105F4: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105F8: swc1        $f1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002105FC: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210600: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210604: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210608: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    // 0x0021060C: jal         0x002974C0
    // 0x00210610: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00210610: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    after_1:
    // 0x00210614: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x00210618: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x0021061C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210620: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210624: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00210628: jr          $ra
    // 0x0021062C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021062C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023890C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023890C: jr          $ra
    // 0x00238910: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x00238910: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_0024B88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024B88C: lw          $v1, 0xA50($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XA50);
    // 0x0024B890: lb          $a0, 0xC6($v1)
    ctx->r4 = MEM_B(ctx->r3, 0XC6);
    // 0x0024B894: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024B898: mflo        $v0
    ctx->r2 = lo;
    // 0x0024B89C: lb          $a1, 0xC7($v1)
    ctx->r5 = MEM_B(ctx->r3, 0XC7);
    // 0x0024B8A0: nop

    // 0x0024B8A4: mult        $a1, $a1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024B8A8: lbu         $a3, 0xC6($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0XC6);
    // 0x0024B8AC: mflo        $a2
    ctx->r6 = lo;
    // 0x0024B8B0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0024B8B4: slti        $v0, $v0, 0xE10
    ctx->r2 = SIGNED(ctx->r2) < 0XE10 ? 1 : 0;
    // 0x0024B8B8: lbu         $a2, 0xC7($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XC7);
    // 0x0024B8BC: beq         $v0, $zero, L_0024B8CC
    if (ctx->r2 == 0) {
            // 0x0024B8C0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    func_0024B8CC(rdram, ctx);
    return;
    }
    // 0x0024B8C0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0024B8C4: jr          $ra
    // 0x0024B8C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x0024B8C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_002543A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002543A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002543A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002543AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002543B0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002543B4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002543B8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002543BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002543C0: beq         $a2, $zero, L_00254414
    if (ctx->r6 == 0) {
        // 0x002543C4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00254414;
    }
    // 0x002543C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002543C8: lhu         $v0, 0x52($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X52);
    // 0x002543CC: lw          $v1, 0x140($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X140);
    // 0x002543D0: andi        $s2, $v0, 0x2
    ctx->r18 = ctx->r2 & 0X2;
    // 0x002543D4: andi        $s0, $v1, 0x80
    ctx->r16 = ctx->r3 & 0X80;
    // 0x002543D8: bne         $s0, $zero, L_002543E4
    if (ctx->r16 != 0) {
        // 0x002543DC: andi        $v0, $v1, 0x100
        ctx->r2 = ctx->r3 & 0X100;
            goto L_002543E4;
    }
    // 0x002543DC: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x002543E0: sw          $zero, 0xBE4($s1)
    MEM_W(0XBE4, ctx->r17) = 0;
L_002543E4:
    // 0x002543E4: bne         $v0, $zero, L_002543FC
    if (ctx->r2 != 0) {
        // 0x002543E8: nop
    
            goto L_002543FC;
    }
    // 0x002543E8: nop

    // 0x002543EC: beq         $s2, $zero, L_002543FC
    if (ctx->r18 == 0) {
        // 0x002543F0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002543FC;
    }
    // 0x002543F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002543F4: jal         0x00254584
    // 0x002543F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00254584(rdram, ctx);
        goto after_0;
    // 0x002543F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
L_002543FC:
    // 0x002543FC: beq         $s0, $zero, L_00254414
    if (ctx->r16 == 0) {
        // 0x00254400: nop
    
            goto L_00254414;
    }
    // 0x00254400: nop

    // 0x00254404: bne         $s2, $zero, L_00254414
    if (ctx->r18 != 0) {
        // 0x00254408: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00254414;
    }
    // 0x00254408: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025440C: jal         0x00254430
    // 0x00254410: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00254430(rdram, ctx);
        goto after_1;
    // 0x00254410: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
L_00254414:
    // 0x00254414: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00254418: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025441C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00254420: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00254424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00254428: jr          $ra
    // 0x0025442C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025442C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00275DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275DC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00275DC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275DC8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00275DCC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00275DD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275DD4: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x00275DD8: beq         $s0, $zero, L_00275E04
    if (ctx->r16 == 0) {
        // 0x00275DDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00275E04;
    }
    // 0x00275DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00275DE0:
    // 0x00275DE0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00275DE4: jal         0x00275864
    // 0x00275DE8: nop

    func_00275864(rdram, ctx);
        goto after_0;
    // 0x00275DE8: nop

    after_0:
    // 0x00275DEC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00275DF0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00275DF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00275DF8: sw          $v0, 0x2A88($at)
    MEM_W(0X2A88, ctx->r1) = ctx->r2;
    // 0x00275DFC: bne         $s0, $zero, L_00275DE0
    if (ctx->r16 != 0) {
        // 0x00275E00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00275DE0;
    }
    // 0x00275E00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00275E04:
    // 0x00275E04: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x00275E08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00275E0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00275E10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275E14: jr          $ra
    // 0x00275E18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00275E18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002113A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002113A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002113A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002113AC: jal         0x0027BC34
    // 0x002113B0: nop

    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x002113B0: nop

    after_0:
    // 0x002113B4: beq         $v0, $zero, L_002113CC
    if (ctx->r2 == 0) {
        // 0x002113B8: lui         $v1, 0xA84A
        ctx->r3 = S32(0XA84A << 16);
            goto L_002113CC;
    }
    // 0x002113B8: lui         $v1, 0xA84A
    ctx->r3 = S32(0XA84A << 16);
    // 0x002113BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002113C0: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x002113C4: j           L_002113D8
    // 0x002113C8: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
        goto L_002113D8;
    // 0x002113C8: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_002113CC:
    // 0x002113CC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002113D0: lw          $v0, -0x287C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X287C);
    // 0x002113D4: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_002113D8:
    // 0x002113D8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002113DC: lui         $v0, 0x5834
    ctx->r2 = S32(0X5834 << 16);
    // 0x002113E0: ori         $v0, $v0, 0x8C2D
    ctx->r2 = ctx->r2 | 0X8C2D;
    // 0x002113E4: mflo        $a1
    ctx->r5 = lo;
    // 0x002113E8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002113EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002113F0: sw          $v0, -0x287C($at)
    MEM_W(-0X287C, ctx->r1) = ctx->r2;
    // 0x002113F4: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x002113F8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002113FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00211400: lw          $a0, -0x287C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X287C);
    // 0x00211404: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00211408: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x0021140C: srl         $a0, $a0, 16
    ctx->r4 = S32(U32(ctx->r4) >> 16);
    // 0x00211410: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00211414: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00211418: jr          $ra
    // 0x0021141C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021141C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00216A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00216A1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216A20: lwc1        $f0, 0x5978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5978);
    // 0x00216A24: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00216A28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00216A2C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00216A30: nop

    // 0x00216A34: bc1f        L_00216A4C
    if (!c1cs) {
        // 0x00216A38: nop
    
            goto L_00216A4C;
    }
    // 0x00216A38: nop

    // 0x00216A3C: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00216A40: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00216A44: j           L_00216A70
    // 0x00216A48: nop

        goto L_00216A70;
    // 0x00216A48: nop

L_00216A4C:
    // 0x00216A4C: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00216A50: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00216A54: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00216A58: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216A5C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00216A60: nop

    // 0x00216A64: bc1t        L_00216A78
    if (c1cs) {
        // 0x00216A68: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_00216A78;
    }
    // 0x00216A68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00216A6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_00216A70:
    // 0x00216A70: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00216A74: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
L_00216A78:
    // 0x00216A78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00216A7C: lwc1        $f1, -0x34B0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X34B0);
    // 0x00216A80: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x00216A84: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00216A88: nop

    // 0x00216A8C: bc1fl       L_00216A94
    if (!c1cs) {
        // 0x00216A90: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_00216A94;
    }
    goto skip_0;
    // 0x00216A90: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_0:
L_00216A94:
    // 0x00216A94: jr          $ra
    // 0x00216A98: nop

    return;
    // 0x00216A98: nop

;}
RECOMP_FUNC void func_0025E44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E44C: lb          $v0, 0x133($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X133);
    // 0x0025E450: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0025E454: lb          $v0, 0x130($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X130);
    // 0x0025E458: jr          $ra
    // 0x0025E45C: nop

    return;
    // 0x0025E45C: nop

;}
RECOMP_FUNC void func_002019F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002019F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002019F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002019F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002019FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00201A00: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00201A04: beq         $v0, $zero, L_00201A94
    if (ctx->r2 == 0) {
        // 0x00201A08: nop
    
            goto L_00201A94;
    }
    // 0x00201A08: nop

    // 0x00201A0C: jal         0x0029DFF0
    // 0x00201A10: nop

    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00201A10: nop

    after_0:
    // 0x00201A14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00201A18: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00201A1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00201A20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201A24: beq         $v1, $v0, L_00201A4C
    if (ctx->r3 == ctx->r2) {
        // 0x00201A28: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00201A4C;
    }
    // 0x00201A28: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00201A2C: jal         0x0029E010
    // 0x00201A30: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00201A30: nop

    after_1:
    // 0x00201A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00201A38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00201A3C: jal         0x0029B6F0
    // 0x00201A40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00201A40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00201A44: j           L_00201A54
    // 0x00201A48: nop

        goto L_00201A54;
    // 0x00201A48: nop

L_00201A4C:
    // 0x00201A4C: jal         0x0029E010
    // 0x00201A50: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00201A50: nop

    after_3:
L_00201A54:
    // 0x00201A54: jal         0x0029DFF0
    // 0x00201A58: nop

    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x00201A58: nop

    after_4:
    // 0x00201A5C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00201A60: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00201A64: beq         $v1, $zero, L_00201A8C
    if (ctx->r3 == 0) {
        // 0x00201A68: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00201A8C;
    }
    // 0x00201A68: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00201A6C: jal         0x0029E010
    // 0x00201A70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x00201A70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00201A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00201A78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00201A7C: jal         0x0029B820
    // 0x00201A80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x00201A80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x00201A84: j           L_00201A94
    // 0x00201A88: nop

        goto L_00201A94;
    // 0x00201A88: nop

L_00201A8C:
    // 0x00201A8C: jal         0x0029E010
    // 0x00201A90: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00201A90: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
L_00201A94:
    // 0x00201A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00201A98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00201A9C: jr          $ra
    // 0x00201AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00201AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BE1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BE20: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044BE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BE28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044BE2C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044BE30: jal         0x002017D4
    // 0x0044BE34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BE34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0044BE38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044BE3C: jr          $ra
    // 0x0044BE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00422700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422700: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00422704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422708: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0042270C: jr          $ra
    // 0x00422710: nop

    return;
    // 0x00422710: nop

;}
RECOMP_FUNC void func_0026CDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CDAC: blez        $a1, L_0026CE34
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0026CDB0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0026CE34;
    }
    // 0x0026CDB0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0026CDB4:
    // 0x0026CDB4: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026CDB8: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0026CDBC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CDC0: nop

    // 0x0026CDC4: bc1fl       L_0026CDCC
    if (!c1cs) {
        // 0x0026CDC8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CDCC;
    }
    goto skip_0;
    // 0x0026CDC8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0026CDCC:
    // 0x0026CDCC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0026CDD0: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026CDD4: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0026CDD8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CDDC: nop

    // 0x0026CDE0: bc1fl       L_0026CDE8
    if (!c1cs) {
        // 0x0026CDE4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CDE8;
    }
    goto skip_1;
    // 0x0026CDE4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0026CDE8:
    // 0x0026CDE8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0026CDEC: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026CDF0: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0026CDF4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CDF8: nop

    // 0x0026CDFC: bc1fl       L_0026CE04
    if (!c1cs) {
        // 0x0026CE00: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CE04;
    }
    goto skip_2;
    // 0x0026CE00: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_0026CE04:
    // 0x0026CE04: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0026CE08: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026CE0C: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0026CE10: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CE14: nop

    // 0x0026CE18: bc1fl       L_0026CE20
    if (!c1cs) {
        // 0x0026CE1C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CE20;
    }
    goto skip_3;
    // 0x0026CE1C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0026CE20:
    // 0x0026CE20: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0026CE24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0026CE28: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0026CE2C: bne         $v0, $zero, L_0026CDB4
    if (ctx->r2 != 0) {
        // 0x0026CE30: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_0026CDB4;
    }
    // 0x0026CE30: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_0026CE34:
    // 0x0026CE34: jr          $ra
    // 0x0026CE38: nop

    return;
    // 0x0026CE38: nop

;}
RECOMP_FUNC void func_0026D128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026D12C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0026D130: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x0026D134: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0026D138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026D13C: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x0026D140: bne         $v0, $zero, L_0026D154
    if (ctx->r2 != 0) {
        // 0x0026D144: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0026D154;
    }
    // 0x0026D144: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026D148: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026D14C: j           L_0026D1EC
    // 0x0026D150: nop

        goto L_0026D1EC;
    // 0x0026D150: nop

L_0026D154:
    // 0x0026D154: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x0026D158: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0026D15C: jal         0x0027BC34
    // 0x0026D160: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x0026D160: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0026D164: beq         $v0, $zero, L_0026D17C
    if (ctx->r2 == 0) {
        // 0x0026D168: lui         $v1, 0xA84A
        ctx->r3 = S32(0XA84A << 16);
            goto L_0026D17C;
    }
    // 0x0026D168: lui         $v1, 0xA84A
    ctx->r3 = S32(0XA84A << 16);
    // 0x0026D16C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026D170: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0026D174: j           L_0026D188
    // 0x0026D178: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
        goto L_0026D188;
    // 0x0026D178: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_0026D17C:
    // 0x0026D17C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0026D180: lw          $v0, -0x287C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X287C);
    // 0x0026D184: ori         $v1, $v1, 0x5B53
    ctx->r3 = ctx->r3 | 0X5B53;
L_0026D188:
    // 0x0026D188: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026D18C: lui         $v0, 0x5834
    ctx->r2 = S32(0X5834 << 16);
    // 0x0026D190: ori         $v0, $v0, 0x8C2D
    ctx->r2 = ctx->r2 | 0X8C2D;
    // 0x0026D194: mflo        $a1
    ctx->r5 = lo;
    // 0x0026D198: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0026D19C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0026D1A0: sw          $v0, -0x287C($at)
    MEM_W(-0X287C, ctx->r1) = ctx->r2;
    // 0x0026D1A4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0026D1A8: lhu         $v0, -0x287C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X287C);
    // 0x0026D1AC: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x0026D1B0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0026D1B4: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0026D1B8: bgez        $v0, L_0026D1CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0026D1BC: nop
    
            goto L_0026D1CC;
    }
    // 0x0026D1BC: nop

    // 0x0026D1C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026D1C4: ldc1        $f0, -0x7FE0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X7FE0);
    // 0x0026D1C8: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0026D1CC:
    // 0x0026D1CC: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026D1D0: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x0026D1D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026D1D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026D1DC: lwc1        $f1, -0x7FD8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7FD8);
    // 0x0026D1E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026D1E4: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0026D1E8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_0026D1EC:
    // 0x0026D1EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026D1F0: jr          $ra
    // 0x0026D1F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026D1F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00423A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423A94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00423A98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A9C: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x00423AA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423AA4: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x00423AA8: jr          $ra
    // 0x00423AAC: nop

    return;
    // 0x00423AAC: nop

;}
