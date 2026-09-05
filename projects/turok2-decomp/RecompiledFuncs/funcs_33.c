#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029FB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029FB64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029FB68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029FB6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0029FB70: beq         $a1, $v0, L_0029FC9C
    if (ctx->r5 == ctx->r2) {
        // 0x0029FB74: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_0029FC9C;
    }
    // 0x0029FB74: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0029FB78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0029FB7C: bne         $a1, $v0, L_0029FCE8
    if (ctx->r5 != ctx->r2) {
        // 0x0029FB80: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_0029FCE8;
    }
    // 0x0029FB80: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0029FB84: sw          $a2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r6;
    // 0x0029FB88: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0029FB8C: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x0029FB90: sw          $v0, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r2;
    // 0x0029FB94: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x0029FB98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029FB9C: beq         $v1, $v0, L_0029FC44
    if (ctx->r3 == ctx->r2) {
        // 0x0029FBA0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0029FC44;
    }
    // 0x0029FBA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0029FBA4: beql        $v0, $zero, L_0029FBBC
    if (ctx->r2 == 0) {
        // 0x0029FBA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029FBBC;
    }
    goto skip_0;
    // 0x0029FBA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0029FBAC: beq         $v1, $zero, L_0029FBCC
    if (ctx->r3 == 0) {
        // 0x0029FBB0: nop
    
            goto L_0029FBCC;
    }
    // 0x0029FBB0: nop

    // 0x0029FBB4: j           L_0029FCE8
    // 0x0029FBB8: nop

        goto L_0029FCE8;
    // 0x0029FBB8: nop

L_0029FBBC:
    // 0x0029FBBC: beq         $v1, $v0, L_0029FC80
    if (ctx->r3 == ctx->r2) {
        // 0x0029FBC0: nop
    
            goto L_0029FC80;
    }
    // 0x0029FBC0: nop

    // 0x0029FBC4: j           L_0029FCE8
    // 0x0029FBC8: nop

        goto L_0029FCE8;
    // 0x0029FBC8: nop

L_0029FBCC:
    // 0x0029FBCC: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x0029FBD0: lui         $v0, 0x2A
    ctx->r2 = S32(0X2A << 16);
    // 0x0029FBD4: addiu       $v0, $v0, -0xE70
    ctx->r2 = ADD32(ctx->r2, -0XE70);
    // 0x0029FBD8: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x0029FBDC: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    // 0x0029FBE0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0029FBE4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0029FBE8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029FBEC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0029FBF0: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x0029FBF4: mflo        $t0
    ctx->r8 = lo;
    // 0x0029FBF8: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x0029FBFC: sw          $v0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r2;
    // 0x0029FC00: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC04: beq         $v0, $zero, L_0029FC8C
    if (ctx->r2 == 0) {
        // 0x0029FC08: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_0029FC8C;
    }
    // 0x0029FC08: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x0029FC0C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029FC10: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x0029FC14: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC18: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0029FC1C: sw          $v0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r2;
    // 0x0029FC20: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC24: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0029FC28: sw          $v0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r2;
    // 0x0029FC2C: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC30: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x0029FC34: jal         0x00291270
    // 0x0029FC38: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_00291270(rdram, ctx);
        goto after_0;
    // 0x0029FC38: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x0029FC3C: j           L_0029FCE8
    // 0x0029FC40: nop

        goto L_0029FCE8;
    // 0x0029FC40: nop

L_0029FC44:
    // 0x0029FC44: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x0029FC48: lui         $v0, 0x2A
    ctx->r2 = S32(0X2A << 16);
    // 0x0029FC4C: addiu       $v0, $v0, -0xA2C
    ctx->r2 = ADD32(ctx->r2, -0XA2C);
    // 0x0029FC50: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x0029FC54: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC58: beql        $v0, $zero, L_0029FC90
    if (ctx->r2 == 0) {
        // 0x0029FC5C: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_0029FC90;
    }
    goto skip_1;
    // 0x0029FC5C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_1:
    // 0x0029FC60: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029FC64: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x0029FC68: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC6C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0029FC70: sw          $v0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r2;
    // 0x0029FC74: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FC78: j           L_0029FCE0
    // 0x0029FC7C: nop

        goto L_0029FCE0;
    // 0x0029FC7C: nop

L_0029FC80:
    // 0x0029FC80: lui         $v0, 0x2A
    ctx->r2 = S32(0X2A << 16);
    // 0x0029FC84: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x0029FC88: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_0029FC8C:
    // 0x0029FC8C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_0029FC90:
    // 0x0029FC90: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x0029FC94: j           L_0029FCE8
    // 0x0029FC98: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_0029FCE8;
    // 0x0029FC98: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_0029FC9C:
    // 0x0029FC9C: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x0029FCA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0029FCA4: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x0029FCA8: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x0029FCAC: beq         $v0, $zero, L_0029FCE8
    if (ctx->r2 == 0) {
        // 0x0029FCB0: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_0029FCE8;
    }
    // 0x0029FCB0: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x0029FCB4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029FCB8: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x0029FCBC: sw          $v0, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r2;
    // 0x0029FCC0: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x0029FCC4: beq         $v0, $zero, L_0029FCD4
    if (ctx->r2 == 0) {
        // 0x0029FCC8: nop
    
            goto L_0029FCD4;
    }
    // 0x0029FCC8: nop

    // 0x0029FCCC: bne         $v0, $a0, L_0029FCE8
    if (ctx->r2 != ctx->r4) {
        // 0x0029FCD0: nop
    
            goto L_0029FCE8;
    }
    // 0x0029FCD0: nop

L_0029FCD4:
    // 0x0029FCD4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0029FCD8: beq         $v0, $zero, L_0029FCE8
    if (ctx->r2 == 0) {
        // 0x0029FCDC: nop
    
            goto L_0029FCE8;
    }
    // 0x0029FCDC: nop

L_0029FCE0:
    // 0x0029FCE0: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0029FCE4: sw          $v0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r2;
L_0029FCE8:
    // 0x0029FCE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029FCEC: jr          $ra
    // 0x0029FCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029FCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021153C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021153C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211540: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x00211544: nop

    // 0x00211548: bc1f        L_00211560
    if (!c1cs) {
        // 0x0021154C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00211560;
    }
    // 0x0021154C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00211550: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211554: lwc1        $f0, 0x5674($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5674);
    // 0x00211558: j           L_0021156C
    // 0x0021155C: nop

        goto L_0021156C;
    // 0x0021155C: nop

L_00211560:
    // 0x00211560: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211564: lwc1        $f0, 0x5678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5678);
    // 0x00211568: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0021156C:
    // 0x0021156C: mul.s       $f1, $f12, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00211570: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00211574: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00211578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021157C: lwc1        $f0, 0x567C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X567C);
    // 0x00211580: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x00211584: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00211588: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0021158C: nop

    // 0x00211590: bc1f        L_002115DC
    if (!c1cs) {
            // 0x00211594: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    func_002115DC(rdram, ctx);
    return;
    }
    // 0x00211594: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00211598: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021159C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002115A0: lwc1        $f2, -0x4730($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4730);
    // 0x002115A4: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x002115A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002115AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002115B0: lwc1        $f0, -0x472C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X472C);
    // 0x002115B4: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x002115B8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002115BC: beq         $v1, $zero, L_002115D4
    if (ctx->r3 == 0) {
            // 0x002115C0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    func_002115D4(rdram, ctx);
    return;
    }
    // 0x002115C0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002115C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002115C8: lwc1        $f0, 0x5680($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5680);
    // 0x002115CC: jr          $ra
    // 0x002115D0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    return;
    // 0x002115D0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
;}
RECOMP_FUNC void func_00403520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403524: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403528: lw          $v0, 0x214($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X214);
    // 0x0040352C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x00403530: sw          $v0, 0x214($a0)
    MEM_W(0X214, ctx->r4) = ctx->r2;
    // 0x00403534: lw          $v0, 0x210($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X210);
    // 0x00403538: lw          $a1, 0x214($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X214);
    // 0x0040353C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00403540: sw          $v0, 0x210($a0)
    MEM_W(0X210, ctx->r4) = ctx->r2;
    // 0x00403544: lw          $v0, 0x218($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X218);
    // 0x00403548: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0040354C: sw          $zero, 0x21C($a0)
    MEM_W(0X21C, ctx->r4) = 0;
    // 0x00403550: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00403554: sw          $v0, 0x218($a0)
    MEM_W(0X218, ctx->r4) = ctx->r2;
    // 0x00403558: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040355C: beql        $v0, $zero, L_0040357C
    if (ctx->r2 == 0) {
        // 0x00403560: sw          $zero, 0x250($a0)
        MEM_W(0X250, ctx->r4) = 0;
            goto L_0040357C;
    }
    goto skip_0;
    // 0x00403560: sw          $zero, 0x250($a0)
    MEM_W(0X250, ctx->r4) = 0;
    skip_0:
    // 0x00403564: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00403568: beq         $v0, $zero, L_00403578
    if (ctx->r2 == 0) {
        // 0x0040356C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00403578;
    }
    // 0x0040356C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00403570: j           L_0040357C
    // 0x00403574: sw          $v0, 0x250($a0)
    MEM_W(0X250, ctx->r4) = ctx->r2;
        goto L_0040357C;
    // 0x00403574: sw          $v0, 0x250($a0)
    MEM_W(0X250, ctx->r4) = ctx->r2;
L_00403578:
    // 0x00403578: sw          $zero, 0x250($a0)
    MEM_W(0X250, ctx->r4) = 0;
L_0040357C:
    // 0x0040357C: lw          $v1, 0x210($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X210);
    // 0x00403580: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00403584: bne         $v1, $v0, L_00403598
    if (ctx->r3 != ctx->r2) {
        // 0x00403588: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00403598;
    }
    // 0x00403588: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0040358C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00403590: j           L_004035A4
    // 0x00403594: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_004035A4;
    // 0x00403594: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_00403598:
    // 0x00403598: bne         $v1, $v0, L_004035AC
    if (ctx->r3 != ctx->r2) {
        // 0x0040359C: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_004035AC;
    }
    // 0x0040359C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x004035A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_004035A4:
    // 0x004035A4: jal         0x00243414
    // 0x004035A8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004035A8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
L_004035AC:
    // 0x004035AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004035B0: jr          $ra
    // 0x004035B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004035B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00451178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045117C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00451180: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00451184: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00451188: jal         0x00285A68
    // 0x0045118C: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x0045118C: nop

    after_0:
    // 0x00451190: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00451194: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00451198: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0045119C: jr          $ra
    // 0x004511A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004511A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00281F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281F84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00281F88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00281F8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00281F90: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00281F94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00281F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281F9C: sll         $s0, $v0, 4
    ctx->r16 = S32(ctx->r2 << 4);
    // 0x00281FA0: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x00281FA4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00281FA8: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x00281FAC: sll         $s0, $s0, 6
    ctx->r16 = S32(ctx->r16 << 6);
    // 0x00281FB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00281FB4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x00281FB8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00281FBC: addiu       $a3, $a3, -0x6600
    ctx->r7 = ADD32(ctx->r7, -0X6600);
    // 0x00281FC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00281FC4: jal         0x00204EDC
    // 0x00281FC8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00281FC8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x00281FCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00281FD0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00281FD4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00281FD8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00281FDC: jal         0x00266C5C
    // 0x00281FE0: sw          $a0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x00281FE0: sw          $a0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r4;
    after_1:
    // 0x00281FE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00281FE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281FEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281FF0: jr          $ra
    // 0x00281FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00281FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041D04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D04C: lb          $v1, 0x196($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X196);
    // 0x0041D050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041D054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041D058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041D05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041D060: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0041D064: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041D068: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041D06C: jal         0x0025340C
    // 0x0041D070: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041D070: nop

    after_0:
    // 0x0041D074: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x0041D078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041D07C: beq         $t3, $v0, L_0041D0DC
    if (ctx->r11 == ctx->r2) {
        // 0x0041D080: slti        $v0, $t3, 0x2
        ctx->r2 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
            goto L_0041D0DC;
    }
    // 0x0041D080: slti        $v0, $t3, 0x2
    ctx->r2 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x0041D084: bne         $v0, $zero, L_0041D09C
    if (ctx->r2 != 0) {
        // 0x0041D088: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041D09C;
    }
    // 0x0041D088: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041D08C: beq         $t3, $v0, L_0041D11C
    if (ctx->r11 == ctx->r2) {
        // 0x0041D090: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041D11C;
    }
    // 0x0041D090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041D094: beq         $t3, $v0, L_0041D16C
    if (ctx->r11 == ctx->r2) {
        // 0x0041D098: lui         $v1, 0x180
        ctx->r3 = S32(0X180 << 16);
            goto L_0041D16C;
    }
    // 0x0041D098: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
L_0041D09C:
    // 0x0041D09C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0A0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0041D0A4: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0041D0A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D0AC: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x0041D0B0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0B4: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D0B8: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D0BC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D0C0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D0C4: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x0041D0C8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0CC: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D0D0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D0D4: j           L_0041D158
    // 0x0041D0D8: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
        goto L_0041D158;
    // 0x0041D0D8: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0041D0DC:
    // 0x0041D0DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0E0: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x0041D0E4: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0041D0E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D0EC: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x0041D0F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0F4: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D0F8: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D0FC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D100: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D104: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D108: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D10C: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D110: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D114: j           L_0041D158
    // 0x0041D118: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
        goto L_0041D158;
    // 0x0041D118: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0041D11C:
    // 0x0041D11C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D120: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x0041D124: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0041D128: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D12C: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    // 0x0041D130: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D134: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D138: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D13C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D140: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D144: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D148: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D14C: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D150: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D154: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
L_0041D158:
    // 0x0041D158: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D15C: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041D160: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D164: j           L_0041D1B4
    // 0x0041D168: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
        goto L_0041D1B4;
    // 0x0041D168: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
L_0041D16C:
    // 0x0041D16C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D170: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x0041D174: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D178: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
    // 0x0041D17C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D180: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D184: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D188: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D18C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D190: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D194: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D198: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D19C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D1A0: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x0041D1A4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D1A8: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D1AC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D1B0: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0041D1B4:
    // 0x0041D1B4: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x0041D1B8: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x0041D1BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0041D1C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D1C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041D1C8: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D1CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041D1D0: addiu       $v1, $v1, 0x1FBC
    ctx->r3 = ADD32(ctx->r3, 0X1FBC);
    // 0x0041D1D4: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x0041D1D8: sll         $v1, $t3, 6
    ctx->r3 = S32(ctx->r11 << 6);
    // 0x0041D1DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D1E0: addiu       $v0, $v0, -0x5475
    ctx->r2 = ADD32(ctx->r2, -0X5475);
    // 0x0041D1E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D1E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x0041D1EC: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0041D1F0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
L_0041D1F4:
    // 0x0041D1F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D1F8: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0041D1FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0041D200: bne         $v0, $a1, L_0041D214
    if (ctx->r2 != ctx->r5) {
        // 0x0041D204: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_0041D214;
    }
    // 0x0041D204: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0041D208: bgtz        $a0, L_0041D1F4
    if (SIGNED(ctx->r4) > 0) {
        // 0x0041D20C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_0041D1F4;
    }
    // 0x0041D20C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0041D210: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041D214:
    // 0x0041D214: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041D218: addiu       $a1, $a1, 0x1340
    ctx->r5 = ADD32(ctx->r5, 0X1340);
    // 0x0041D21C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_0041D220:
    // 0x0041D220: lbu         $t0, 0x0($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X0);
    // 0x0041D224: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0041D228: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x0041D22C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041D230: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x0041D234: bne         $v0, $a2, L_0041D24C
    if (ctx->r2 != ctx->r6) {
        // 0x0041D238: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_0041D24C;
    }
    // 0x0041D238: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D23C: beq         $v0, $zero, L_0041D24C
    if (ctx->r2 == 0) {
        // 0x0041D240: nop
    
            goto L_0041D24C;
    }
    // 0x0041D240: nop

    // 0x0041D244: beq         $a0, $zero, L_0041D220
    if (ctx->r4 == 0) {
        // 0x0041D248: nop
    
            goto L_0041D220;
    }
    // 0x0041D248: nop

L_0041D24C:
    // 0x0041D24C: beql        $t0, $a2, L_0041D254
    if (ctx->r8 == ctx->r6) {
        // 0x0041D250: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_0041D254;
    }
    goto skip_0;
    // 0x0041D250: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    skip_0:
L_0041D254:
    // 0x0041D254: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D258: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0041D25C: blez        $v0, L_0041D284
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041D260: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0041D284;
    }
    // 0x0041D260: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041D264: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0041D268:
    // 0x0041D268: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0041D26C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041D270: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041D274: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x0041D278: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0041D27C: bne         $v0, $zero, L_0041D268
    if (ctx->r2 != 0) {
        // 0x0041D280: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_0041D268;
    }
    // 0x0041D280: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_0041D284:
    // 0x0041D284: sll         $v1, $t3, 1
    ctx->r3 = S32(ctx->r11 << 1);
    // 0x0041D288: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x0041D28C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0041D290: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D294: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x0041D298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041D29C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D2A0: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0041D2A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D2A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D2AC: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D2B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D2B4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D2B8: sw          $v0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r2;
    // 0x0041D2BC: jr          $ra
    // 0x0041D2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00455678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C6BC:
    // 0x00455678: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0045567C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00455680: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x00455684: beq         $v0, $zero, L_00455690
    if (ctx->r2 == 0) {
        // 0x00455688: nop
    
            goto L_00455690;
    }
    // 0x00455688: nop

    // 0x0045568C: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
L_00455690:
    // 0x00455690: lbu         $v1, 0x31($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X31);
    // 0x00455694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455698: bne         $v1, $v0, L_004556B0
    if (ctx->r3 != ctx->r2) {
        // 0x0045569C: nop
    
            goto L_004556B0;
    }
    // 0x0045569C: nop

    // 0x004556A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004556A4: addiu       $v0, $v0, 0x40B0
    ctx->r2 = ADD32(ctx->r2, 0X40B0);
    // 0x004556A8: j           L_0041C6BC
    // 0x004556AC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041C6BC(rdram, ctx);
    return;
    // 0x004556AC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004556B0:
    // 0x004556B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004556B4: addiu       $v0, $v0, 0x40C8
    ctx->r2 = ADD32(ctx->r2, 0X40C8);
    // 0x004556B8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004556BC: jr          $ra
    // 0x004556C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004556C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0029357C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029357C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // turok2: reconnected split function: a stray ELF symbol at 0x00293580 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00293580(rdram, ctx);
;}
RECOMP_FUNC void func_0045FAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FAF8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045FAFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045FB00: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045FB04: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045FB08: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045FB0C: bne         $v1, $v0, L_0045FB2C
    if (ctx->r3 != ctx->r2) {
            // 0x0045FB10: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    func_0045FB2C(rdram, ctx);
    return;
    }
    // 0x0045FB10: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0045FB14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045FB18: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045FB1C: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0045FB20: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x0045FB24: jr          $ra
    // 0x0045FB28: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x0045FB28: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_002A2BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2BE8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x002A2BEC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x002A2BF0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002A2BF4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002A2BF8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A2BFC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002A2C00: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002A2C04: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002A2C08: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002A2C0C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2C10: lw          $v1, -0x3CFC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3CFC);
    // 0x002A2C14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2C18: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x002A2C1C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x002A2C20: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x002A2C24: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x002A2C28: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x002A2C2C: bne         $v1, $v0, L_002A2CC4
    if (ctx->r3 != ctx->r2) {
        // 0x002A2C30: sw          $s3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r19;
            goto L_002A2CC4;
    }
    // 0x002A2C30: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002A2C34: beq         $s0, $zero, L_002A2D30
    if (ctx->r16 == 0) {
        // 0x002A2C38: ori         $fp, $zero, 0x8000
        ctx->r30 = 0 | 0X8000;
            goto L_002A2D30;
    }
    // 0x002A2C38: ori         $fp, $zero, 0x8000
    ctx->r30 = 0 | 0X8000;
    // 0x002A2C3C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x002A2C40: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x002A2C44: ori         $s4, $s4, 0x505
    ctx->r20 = ctx->r20 | 0X505;
    // 0x002A2C48: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A2C4C: addiu       $s3, $v0, -0x7AC0
    ctx->r19 = ADD32(ctx->r2, -0X7AC0);
    // 0x002A2C50: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
L_002A2C54:
    // 0x002A2C54: sltu        $v0, $fp, $s0
    ctx->r2 = ctx->r30 < ctx->r16 ? 1 : 0;
    // 0x002A2C58: beq         $v0, $zero, L_002A2C64
    if (ctx->r2 == 0) {
        // 0x002A2C5C: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_002A2C64;
    }
    // 0x002A2C5C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x002A2C60: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
L_002A2C64:
    // 0x002A2C64: addiu       $a0, $s6, -0x7C90
    ctx->r4 = ADD32(ctx->r22, -0X7C90);
    // 0x002A2C68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2C6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2C70: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002A2C74: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x002A2C78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002A2C7C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x002A2C80: sw          $s5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r21;
    // 0x002A2C84: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x002A2C88: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002A2C8C: jal         0x0029B820
    // 0x002A2C90: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002A2C90: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    after_0:
    // 0x002A2C94: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002A2C98: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A2C9C: jal         0x0029B6F0
    // 0x002A2CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A2CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x002A2CA4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2CA8: beq         $v0, $zero, L_002A2D30
    if (ctx->r2 == 0) {
        // 0x002A2CAC: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_002A2D30;
    }
    // 0x002A2CAC: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x002A2CB0: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x002A2CB4: bne         $s0, $zero, L_002A2C54
    if (ctx->r16 != 0) {
        // 0x002A2CB8: addu        $s2, $s2, $v0
        ctx->r18 = ADD32(ctx->r18, ctx->r2);
            goto L_002A2C54;
    }
    // 0x002A2CB8: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x002A2CBC: j           L_002A2D34
    // 0x002A2CC0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_002A2D34;
    // 0x002A2CC0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002A2CC4:
    // 0x002A2CC4: jal         0x002A12F0
    // 0x002A2CC8: nop

    func_002A12F0(rdram, ctx);
        goto after_2;
    // 0x002A2CC8: nop

    after_2:
    // 0x002A2CCC: beq         $s0, $zero, L_002A2D28
    if (ctx->r16 == 0) {
        // 0x002A2CD0: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_002A2D28;
    }
    // 0x002A2CD0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002A2CD4: ori         $s4, $zero, 0x8000
    ctx->r20 = 0 | 0X8000;
L_002A2CD8:
    // 0x002A2CD8: sltu        $v0, $s4, $s0
    ctx->r2 = ctx->r20 < ctx->r16 ? 1 : 0;
    // 0x002A2CDC: beq         $v0, $zero, L_002A2CE8
    if (ctx->r2 == 0) {
        // 0x002A2CE0: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_002A2CE8;
    }
    // 0x002A2CE0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x002A2CE4: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
L_002A2CE8:
    // 0x002A2CE8: addiu       $a0, $zero, 0x505
    ctx->r4 = ADD32(0, 0X505);
    // 0x002A2CEC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x002A2CF0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x002A2CF4: jal         0x002A259C
    // 0x002A2CF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002A259C(rdram, ctx);
        goto after_3;
    // 0x002A2CF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x002A2CFC: beq         $v0, $zero, L_002A2D28
    if (ctx->r2 == 0) {
        // 0x002A2D00: sw          $v0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r2;
            goto L_002A2D28;
    }
    // 0x002A2D00: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x002A2D04: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2D08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002A2D0C: jal         0x002A15B8
    // 0x002A2D10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_002A15B8(rdram, ctx);
        goto after_4;
    // 0x002A2D10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002A2D14: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2D18: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x002A2D1C: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x002A2D20: bne         $s0, $zero, L_002A2CD8
    if (ctx->r16 != 0) {
        // 0x002A2D24: addu        $s2, $s2, $v0
        ctx->r18 = ADD32(ctx->r18, ctx->r2);
            goto L_002A2CD8;
    }
    // 0x002A2D24: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_002A2D28:
    // 0x002A2D28: jal         0x002A1324
    // 0x002A2D2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002A1324(rdram, ctx);
        goto after_5;
    // 0x002A2D2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
L_002A2D30:
    // 0x002A2D30: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002A2D34:
    // 0x002A2D34: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x002A2D38: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x002A2D3C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x002A2D40: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x002A2D44: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x002A2D48: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x002A2D4C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x002A2D50: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002A2D54: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002A2D58: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A2D5C: jr          $ra
    // 0x002A2D60: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x002A2D60: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_004519E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418A58:
    // 0x004519E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004519EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004519F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x004519F4: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x004519F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004519FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00451A00: lb          $v0, 0x20($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X20);
    // 0x00451A04: beq         $v0, $zero, L_00451A38
    if (ctx->r2 == 0) {
        // 0x00451A08: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00451A38;
    }
    // 0x00451A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00451A0C: jal         0x004160F0
    // 0x00451A10: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451A10: nop

    after_0:
    // 0x00451A14: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451A18: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00451A1C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451A20: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451A24: lb          $a2, 0x20($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X20);
    // 0x00451A28: jal         0x0029E3E0
    // 0x00451A2C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00451A2C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00451A30: j           L_00418A58
    // 0x00451A34: nop

    entry_00418A58(rdram, ctx);
    return;
    // 0x00451A34: nop

L_00451A38:
    // 0x00451A38: jal         0x004160F0
    // 0x00451A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00451A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00451A40: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451A44: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00451A48: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451A4C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451A50: jal         0x0029E3E0
    // 0x00451A54: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00451A54: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x00451A58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00451A5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00451A60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451A64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451A68: jr          $ra
    // 0x00451A6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451A6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00273DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273DD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00273DDC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00273DE0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00273DE4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00273DE8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00273DEC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00273DF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00273DF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00273DF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00273DFC: addu        $s0, $v0, $a0
    ctx->r16 = ADD32(ctx->r2, ctx->r4);
    // 0x00273E00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00273E04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00273E08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00273E0C: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00273E10: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x00273E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00273E18: sw          $v0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r2;
    // 0x00273E1C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x00273E20: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00273E24: beq         $v1, $v0, L_00273E64
    if (ctx->r3 == ctx->r2) {
        // 0x00273E28: addiu       $s1, $a0, 0x84
        ctx->r17 = ADD32(ctx->r4, 0X84);
            goto L_00273E64;
    }
    // 0x00273E28: addiu       $s1, $a0, 0x84
    ctx->r17 = ADD32(ctx->r4, 0X84);
    // 0x00273E2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00273E30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00273E34: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00273E38: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00273E3C: jal         0x00293E60
    // 0x00273E40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00273E40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00273E44: jal         0x00293580
    // 0x00273E48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x00273E48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00273E4C: beq         $v0, $zero, L_00273E60
    if (ctx->r2 == 0) {
        // 0x00273E50: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00273E60;
    }
    // 0x00273E50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00273E54: jal         0x00293EC0
    // 0x00273E58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x00273E58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00273E5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00273E60:
    // 0x00273E60: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_00273E64:
    // 0x00273E64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00273E68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00273E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273E70: jr          $ra
    // 0x00273E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00273E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A40D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A40D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A40D4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x002A40D8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002A40DC: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x002A40E0: bgez        $a0, L_002A4104
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002A40E4: sw          $s0, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r16;
            goto L_002A4104;
    }
    // 0x002A40E4: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x002A40E8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x002A40EC: negu        $t1, $a1
    ctx->r9 = SUB32(0, ctx->r5);
    // 0x002A40F0: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x002A40F4: sltu        $v0, $zero, $t1
    ctx->r2 = 0 < ctx->r9 ? 1 : 0;
    // 0x002A40F8: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x002A40FC: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x002A4100: addu        $a1, $t1, $zero
    ctx->r5 = ADD32(ctx->r9, 0);
L_002A4104:
    // 0x002A4104: bgez        $a2, L_002A4128
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002A4108: addu        $t0, $a3, $zero
        ctx->r8 = ADD32(ctx->r7, 0);
            goto L_002A4128;
    }
    // 0x002A4108: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x002A410C: negu        $t3, $a3
    ctx->r11 = SUB32(0, ctx->r7);
    // 0x002A4110: negu        $v1, $a2
    ctx->r3 = SUB32(0, ctx->r6);
    // 0x002A4114: sltu        $v0, $zero, $t3
    ctx->r2 = 0 < ctx->r11 ? 1 : 0;
    // 0x002A4118: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x002A411C: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
    // 0x002A4120: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    // 0x002A4124: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_002A4128:
    // 0x002A4128: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x002A412C: addu        $t3, $a1, $zero
    ctx->r11 = ADD32(ctx->r5, 0);
    // 0x002A4130: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x002A4134: bne         $t1, $zero, L_002A43EC
    if (ctx->r9 != 0) {
        // 0x002A4138: addu        $t9, $sp, $zero
        ctx->r25 = ADD32(ctx->r29, 0);
            goto L_002A43EC;
    }
    // 0x002A4138: addu        $t9, $sp, $zero
    ctx->r25 = ADD32(ctx->r29, 0);
    // 0x002A413C: sltu        $v0, $t2, $t0
    ctx->r2 = ctx->r10 < ctx->r8 ? 1 : 0;
    // 0x002A4140: beq         $v0, $zero, L_002A41BC
    if (ctx->r2 == 0) {
        // 0x002A4144: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A41BC;
    }
    // 0x002A4144: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A4148: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A414C: bne         $v0, $zero, L_002A4164
    if (ctx->r2 != 0) {
        // 0x002A4150: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_002A4164;
    }
    // 0x002A4150: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x002A4154: sltiu       $v0, $t0, 0x100
    ctx->r2 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x002A4158: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A415C: j           L_002A417C
    // 0x002A4160: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
        goto L_002A417C;
    // 0x002A4160: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
L_002A4164:
    // 0x002A4164: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4168: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A416C: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4170: bne         $v0, $zero, L_002A417C
    if (ctx->r2 != 0) {
        // 0x002A4174: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_002A417C;
    }
    // 0x002A4174: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x002A4178: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_002A417C:
    // 0x002A417C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4180: addiu       $v0, $v0, -0x5270
    ctx->r2 = ADD32(ctx->r2, -0X5270);
    // 0x002A4184: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x002A4188: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A418C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4190: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A4194: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x002A4198: subu        $t5, $a0, $v0
    ctx->r13 = SUB32(ctx->r4, ctx->r2);
    // 0x002A419C: beq         $t5, $zero, L_002A431C
    if (ctx->r13 == 0) {
        // 0x002A41A0: sllv        $v1, $t2, $t5
        ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
            goto L_002A431C;
    }
    // 0x002A41A0: sllv        $v1, $t2, $t5
    ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
    // 0x002A41A4: sllv        $t0, $t0, $t5
    ctx->r8 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x002A41A8: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x002A41AC: srlv        $v0, $t3, $v0
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r2 & 31));
    // 0x002A41B0: or          $t2, $v1, $v0
    ctx->r10 = ctx->r3 | ctx->r2;
    // 0x002A41B4: j           L_002A431C
    // 0x002A41B8: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
        goto L_002A431C;
    // 0x002A41B8: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
L_002A41BC:
    // 0x002A41BC: bne         $t0, $zero, L_002A41E4
    if (ctx->r8 != 0) {
        // 0x002A41C0: sltu        $v0, $v0, $t0
        ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
            goto L_002A41E4;
    }
    // 0x002A41C0: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A41C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A41C8: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x002A41CC: bne         $t1, $zero, L_002A41D8
    if (ctx->r9 != 0) {
        // 0x002A41D0: nop
    
            goto L_002A41D8;
    }
    // 0x002A41D0: nop

    // 0x002A41D4: break       7
    do_break(2769364);
L_002A41D8:
    // 0x002A41D8: mflo        $t0
    ctx->r8 = lo;
    // 0x002A41DC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A41E0: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
L_002A41E4:
    // 0x002A41E4: bne         $v0, $zero, L_002A41FC
    if (ctx->r2 != 0) {
        // 0x002A41E8: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_002A41FC;
    }
    // 0x002A41E8: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002A41EC: sltiu       $v0, $t0, 0x100
    ctx->r2 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x002A41F0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A41F4: j           L_002A4214
    // 0x002A41F8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
        goto L_002A4214;
    // 0x002A41F8: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
L_002A41FC:
    // 0x002A41FC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4200: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4204: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4208: bne         $v0, $zero, L_002A4214
    if (ctx->r2 != 0) {
        // 0x002A420C: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_002A4214;
    }
    // 0x002A420C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x002A4210: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_002A4214:
    // 0x002A4214: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4218: addiu       $v0, $v0, -0x5270
    ctx->r2 = ADD32(ctx->r2, -0X5270);
    // 0x002A421C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x002A4220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4224: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4228: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A422C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A4230: subu        $t5, $v1, $v0
    ctx->r13 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4234: bne         $t5, $zero, L_002A4244
    if (ctx->r13 != 0) {
        // 0x002A4238: subu        $t8, $v1, $t5
        ctx->r24 = SUB32(ctx->r3, ctx->r13);
            goto L_002A4244;
    }
    // 0x002A4238: subu        $t8, $v1, $t5
    ctx->r24 = SUB32(ctx->r3, ctx->r13);
    // 0x002A423C: j           L_002A431C
    // 0x002A4240: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
        goto L_002A431C;
    // 0x002A4240: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
L_002A4244:
    // 0x002A4244: sllv        $t0, $t0, $t5
    ctx->r8 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x002A4248: srlv        $a0, $t2, $t8
    ctx->r4 = S32(U32(ctx->r10) >> (ctx->r24 & 31));
    // 0x002A424C: sllv        $v1, $t2, $t5
    ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
    // 0x002A4250: srlv        $v0, $t3, $t8
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r24 & 31));
    // 0x002A4254: or          $t2, $v1, $v0
    ctx->r10 = ctx->r3 | ctx->r2;
    // 0x002A4258: srl         $a1, $t0, 16
    ctx->r5 = S32(U32(ctx->r8) >> 16);
    // 0x002A425C: divu        $zero, $a0, $a1
    lo = S32(U32(ctx->r4) / U32(ctx->r5)); hi = S32(U32(ctx->r4) % U32(ctx->r5));
    // 0x002A4260: bne         $a1, $zero, L_002A426C
    if (ctx->r5 != 0) {
        // 0x002A4264: nop
    
            goto L_002A426C;
    }
    // 0x002A4264: nop

    // 0x002A4268: break       7
    do_break(2769512);
L_002A426C:
    // 0x002A426C: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4270: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4274: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x002A4278: nop

    // 0x002A427C: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4280: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4284: srl         $v0, $t2, 16
    ctx->r2 = S32(U32(ctx->r10) >> 16);
    // 0x002A4288: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A428C: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4290: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4294: beq         $v0, $zero, L_002A42B8
    if (ctx->r2 == 0) {
        // 0x002A4298: sllv        $t3, $t3, $t5
        ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
            goto L_002A42B8;
    }
    // 0x002A4298: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
    // 0x002A429C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A42A0: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A42A4: bnel        $v0, $zero, L_002A42BC
    if (ctx->r2 != 0) {
        // 0x002A42A8: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_002A42BC;
    }
    goto skip_0;
    // 0x002A42A8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    skip_0:
    // 0x002A42AC: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A42B0: bnel        $v0, $zero, L_002A42B8
    if (ctx->r2 != 0) {
        // 0x002A42B4: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A42B8;
    }
    goto skip_1;
    // 0x002A42B4: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_1:
L_002A42B8:
    // 0x002A42B8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_002A42BC:
    // 0x002A42BC: divu        $zero, $v1, $a1
    lo = S32(U32(ctx->r3) / U32(ctx->r5)); hi = S32(U32(ctx->r3) % U32(ctx->r5));
    // 0x002A42C0: bne         $a1, $zero, L_002A42CC
    if (ctx->r5 != 0) {
        // 0x002A42C4: nop
    
            goto L_002A42CC;
    }
    // 0x002A42C4: nop

    // 0x002A42C8: break       7
    do_break(2769608);
L_002A42CC:
    // 0x002A42CC: mflo        $v0
    ctx->r2 = lo;
    // 0x002A42D0: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A42D4: nop

    // 0x002A42D8: nop

    // 0x002A42DC: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A42E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A42E4: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x002A42E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A42EC: mflo        $a0
    ctx->r4 = lo;
    // 0x002A42F0: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A42F4: beql        $v0, $zero, L_002A431C
    if (ctx->r2 == 0) {
        // 0x002A42F8: subu        $t2, $v1, $a0
        ctx->r10 = SUB32(ctx->r3, ctx->r4);
            goto L_002A431C;
    }
    goto skip_2;
    // 0x002A42F8: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
    skip_2:
    // 0x002A42FC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4300: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4304: bne         $v0, $zero, L_002A431C
    if (ctx->r2 != 0) {
        // 0x002A4308: subu        $t2, $v1, $a0
        ctx->r10 = SUB32(ctx->r3, ctx->r4);
            goto L_002A431C;
    }
    // 0x002A4308: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
    // 0x002A430C: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4310: bnel        $v0, $zero, L_002A4318
    if (ctx->r2 != 0) {
        // 0x002A4314: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A4318;
    }
    goto skip_3;
    // 0x002A4314: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_3:
L_002A4318:
    // 0x002A4318: subu        $t2, $v1, $a0
    ctx->r10 = SUB32(ctx->r3, ctx->r4);
L_002A431C:
    // 0x002A431C: srl         $a1, $t0, 16
    ctx->r5 = S32(U32(ctx->r8) >> 16);
    // 0x002A4320: divu        $zero, $t2, $a1
    lo = S32(U32(ctx->r10) / U32(ctx->r5)); hi = S32(U32(ctx->r10) % U32(ctx->r5));
    // 0x002A4324: bne         $a1, $zero, L_002A4330
    if (ctx->r5 != 0) {
        // 0x002A4328: nop
    
            goto L_002A4330;
    }
    // 0x002A4328: nop

    // 0x002A432C: break       7
    do_break(2769708);
L_002A4330:
    // 0x002A4330: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4334: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4338: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x002A433C: nop

    // 0x002A4340: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4344: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4348: srl         $v0, $t3, 16
    ctx->r2 = S32(U32(ctx->r11) >> 16);
    // 0x002A434C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4350: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4354: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4358: beql        $v0, $zero, L_002A4380
    if (ctx->r2 == 0) {
        // 0x002A435C: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4380;
    }
    goto skip_4;
    // 0x002A435C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    skip_4:
    // 0x002A4360: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4364: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4368: bnel        $v0, $zero, L_002A4380
    if (ctx->r2 != 0) {
        // 0x002A436C: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4380;
    }
    goto skip_5;
    // 0x002A436C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    skip_5:
    // 0x002A4370: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A4374: bnel        $v0, $zero, L_002A437C
    if (ctx->r2 != 0) {
        // 0x002A4378: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A437C;
    }
    goto skip_6;
    // 0x002A4378: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_6:
L_002A437C:
    // 0x002A437C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_002A4380:
    // 0x002A4380: divu        $zero, $v1, $a1
    lo = S32(U32(ctx->r3) / U32(ctx->r5)); hi = S32(U32(ctx->r3) % U32(ctx->r5));
    // 0x002A4384: bne         $a1, $zero, L_002A4390
    if (ctx->r5 != 0) {
        // 0x002A4388: nop
    
            goto L_002A4390;
    }
    // 0x002A4388: nop

    // 0x002A438C: break       7
    do_break(2769804);
L_002A4390:
    // 0x002A4390: mflo        $v0
    ctx->r2 = lo;
    // 0x002A4394: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4398: nop

    // 0x002A439C: nop

    // 0x002A43A0: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A43A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A43A8: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x002A43AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A43B0: mflo        $a0
    ctx->r4 = lo;
    // 0x002A43B4: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A43B8: beq         $v0, $zero, L_002A43D8
    if (ctx->r2 == 0) {
        // 0x002A43BC: nop
    
            goto L_002A43D8;
    }
    // 0x002A43BC: nop

    // 0x002A43C0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A43C4: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A43C8: bne         $v0, $zero, L_002A43D8
    if (ctx->r2 != 0) {
        // 0x002A43CC: sltu        $v0, $v1, $a0
        ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
            goto L_002A43D8;
    }
    // 0x002A43CC: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x002A43D0: bnel        $v0, $zero, L_002A43D8
    if (ctx->r2 != 0) {
        // 0x002A43D4: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_002A43D8;
    }
    goto skip_7;
    // 0x002A43D4: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    skip_7:
L_002A43D8:
    // 0x002A43D8: beq         $t9, $zero, L_002A4604
    if (ctx->r25 == 0) {
        // 0x002A43DC: subu        $t3, $v1, $a0
        ctx->r11 = SUB32(ctx->r3, ctx->r4);
            goto L_002A4604;
    }
    // 0x002A43DC: subu        $t3, $v1, $a0
    ctx->r11 = SUB32(ctx->r3, ctx->r4);
    // 0x002A43E0: srlv        $t7, $t3, $t5
    ctx->r15 = S32(U32(ctx->r11) >> (ctx->r13 & 31));
    // 0x002A43E4: j           L_002A45FC
    // 0x002A43E8: addu        $t6, $zero, $zero
    ctx->r14 = ADD32(0, 0);
        goto L_002A45FC;
    // 0x002A43E8: addu        $t6, $zero, $zero
    ctx->r14 = ADD32(0, 0);
L_002A43EC:
    // 0x002A43EC: sltu        $v0, $t2, $t1
    ctx->r2 = ctx->r10 < ctx->r9 ? 1 : 0;
    // 0x002A43F0: beq         $v0, $zero, L_002A4410
    if (ctx->r2 == 0) {
        // 0x002A43F4: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A4410;
    }
    // 0x002A43F4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A43F8: addu        $t7, $a1, $zero
    ctx->r15 = ADD32(ctx->r5, 0);
    // 0x002A43FC: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
    // 0x002A4400: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x002A4404: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x002A4408: j           L_002A4604
    // 0x002A440C: nop

        goto L_002A4604;
    // 0x002A440C: nop

L_002A4410:
    // 0x002A4410: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A4414: bne         $v0, $zero, L_002A442C
    if (ctx->r2 != 0) {
        // 0x002A4418: addu        $v1, $t1, $zero
        ctx->r3 = ADD32(ctx->r9, 0);
            goto L_002A442C;
    }
    // 0x002A4418: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x002A441C: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x002A4420: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A4424: j           L_002A4444
    // 0x002A4428: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
        goto L_002A4444;
    // 0x002A4428: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
L_002A442C:
    // 0x002A442C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4430: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4434: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A4438: bne         $v0, $zero, L_002A4444
    if (ctx->r2 != 0) {
        // 0x002A443C: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_002A4444;
    }
    // 0x002A443C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x002A4440: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_002A4444:
    // 0x002A4444: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4448: addiu       $v0, $v0, -0x5270
    ctx->r2 = ADD32(ctx->r2, -0X5270);
    // 0x002A444C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x002A4450: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4454: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4458: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A445C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A4460: subu        $t5, $v1, $v0
    ctx->r13 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4464: bne         $t5, $zero, L_002A44A4
    if (ctx->r13 != 0) {
        // 0x002A4468: subu        $t8, $v1, $t5
        ctx->r24 = SUB32(ctx->r3, ctx->r13);
            goto L_002A44A4;
    }
    // 0x002A4468: subu        $t8, $v1, $t5
    ctx->r24 = SUB32(ctx->r3, ctx->r13);
    // 0x002A446C: sltu        $v0, $t1, $t2
    ctx->r2 = ctx->r9 < ctx->r10 ? 1 : 0;
    // 0x002A4470: bne         $v0, $zero, L_002A4484
    if (ctx->r2 != 0) {
        // 0x002A4474: subu        $a0, $t3, $t0
        ctx->r4 = SUB32(ctx->r11, ctx->r8);
            goto L_002A4484;
    }
    // 0x002A4474: subu        $a0, $t3, $t0
    ctx->r4 = SUB32(ctx->r11, ctx->r8);
    // 0x002A4478: sltu        $v0, $t3, $t0
    ctx->r2 = ctx->r11 < ctx->r8 ? 1 : 0;
    // 0x002A447C: bne         $v0, $zero, L_002A4494
    if (ctx->r2 != 0) {
        // 0x002A4480: nop
    
            goto L_002A4494;
    }
    // 0x002A4480: nop

L_002A4484:
    // 0x002A4484: subu        $v1, $t2, $t1
    ctx->r3 = SUB32(ctx->r10, ctx->r9);
    // 0x002A4488: sltu        $v0, $t3, $a0
    ctx->r2 = ctx->r11 < ctx->r4 ? 1 : 0;
    // 0x002A448C: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4490: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
L_002A4494:
    // 0x002A4494: beq         $t9, $zero, L_002A4604
    if (ctx->r25 == 0) {
        // 0x002A4498: addu        $t7, $t3, $zero
        ctx->r15 = ADD32(ctx->r11, 0);
            goto L_002A4604;
    }
    // 0x002A4498: addu        $t7, $t3, $zero
    ctx->r15 = ADD32(ctx->r11, 0);
    // 0x002A449C: j           L_002A45FC
    // 0x002A44A0: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
        goto L_002A45FC;
    // 0x002A44A0: addu        $t6, $t2, $zero
    ctx->r14 = ADD32(ctx->r10, 0);
L_002A44A4:
    // 0x002A44A4: sllv        $v1, $t1, $t5
    ctx->r3 = S32(ctx->r9 << (ctx->r13 & 31));
    // 0x002A44A8: srlv        $v0, $t0, $t8
    ctx->r2 = S32(U32(ctx->r8) >> (ctx->r24 & 31));
    // 0x002A44AC: or          $t1, $v1, $v0
    ctx->r9 = ctx->r3 | ctx->r2;
    // 0x002A44B0: sllv        $t0, $t0, $t5
    ctx->r8 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x002A44B4: srlv        $a0, $t2, $t8
    ctx->r4 = S32(U32(ctx->r10) >> (ctx->r24 & 31));
    // 0x002A44B8: sllv        $v1, $t2, $t5
    ctx->r3 = S32(ctx->r10 << (ctx->r13 & 31));
    // 0x002A44BC: srlv        $v0, $t3, $t8
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r24 & 31));
    // 0x002A44C0: or          $t2, $v1, $v0
    ctx->r10 = ctx->r3 | ctx->r2;
    // 0x002A44C4: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A44C8: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x002A44CC: bne         $a2, $zero, L_002A44D8
    if (ctx->r6 != 0) {
        // 0x002A44D0: nop
    
            goto L_002A44D8;
    }
    // 0x002A44D0: nop

    // 0x002A44D4: break       7
    do_break(2770132);
L_002A44D8:
    // 0x002A44D8: mflo        $a3
    ctx->r7 = lo;
    // 0x002A44DC: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A44E0: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x002A44E4: nop

    // 0x002A44E8: mult        $a3, $t4
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A44EC: srl         $v0, $t2, 16
    ctx->r2 = S32(U32(ctx->r10) >> 16);
    // 0x002A44F0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A44F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A44F8: mflo        $a1
    ctx->r5 = lo;
    // 0x002A44FC: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4500: beq         $v0, $zero, L_002A452C
    if (ctx->r2 == 0) {
        // 0x002A4504: sllv        $t3, $t3, $t5
        ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
            goto L_002A452C;
    }
    // 0x002A4504: sllv        $t3, $t3, $t5
    ctx->r11 = S32(ctx->r11 << (ctx->r13 & 31));
    // 0x002A4508: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A450C: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A4510: bne         $v0, $zero, L_002A452C
    if (ctx->r2 != 0) {
        // 0x002A4514: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_002A452C;
    }
    // 0x002A4514: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4518: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A451C: beql        $v0, $zero, L_002A4530
    if (ctx->r2 == 0) {
        // 0x002A4520: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4530;
    }
    goto skip_8;
    // 0x002A4520: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_8:
    // 0x002A4524: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4528: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A452C:
    // 0x002A452C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_002A4530:
    // 0x002A4530: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A4534: bne         $a2, $zero, L_002A4540
    if (ctx->r6 != 0) {
        // 0x002A4538: nop
    
            goto L_002A4540;
    }
    // 0x002A4538: nop

    // 0x002A453C: break       7
    do_break(2770236);
L_002A4540:
    // 0x002A4540: mflo        $a0
    ctx->r4 = lo;
    // 0x002A4544: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4548: nop

    // 0x002A454C: nop

    // 0x002A4550: mult        $a0, $t4
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4554: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x002A4558: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A455C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4560: mflo        $a1
    ctx->r5 = lo;
    // 0x002A4564: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4568: beql        $v0, $zero, L_002A4598
    if (ctx->r2 == 0) {
        // 0x002A456C: subu        $t2, $v1, $a1
        ctx->r10 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4598;
    }
    goto skip_9;
    // 0x002A456C: subu        $t2, $v1, $a1
    ctx->r10 = SUB32(ctx->r3, ctx->r5);
    skip_9:
    // 0x002A4570: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4574: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A4578: bne         $v0, $zero, L_002A4594
    if (ctx->r2 != 0) {
        // 0x002A457C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A4594;
    }
    // 0x002A457C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A4580: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4584: beq         $v0, $zero, L_002A4598
    if (ctx->r2 == 0) {
        // 0x002A4588: subu        $t2, $v1, $a1
        ctx->r10 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4598;
    }
    // 0x002A4588: subu        $t2, $v1, $a1
    ctx->r10 = SUB32(ctx->r3, ctx->r5);
    // 0x002A458C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A4590: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A4594:
    // 0x002A4594: subu        $t2, $v1, $a1
    ctx->r10 = SUB32(ctx->r3, ctx->r5);
L_002A4598:
    // 0x002A4598: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A459C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002A45A0: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A45A4: mfhi        $a2
    ctx->r6 = hi;
    // 0x002A45A8: sltu        $v0, $t2, $a2
    ctx->r2 = ctx->r10 < ctx->r6 ? 1 : 0;
    // 0x002A45AC: mflo        $a1
    ctx->r5 = lo;
    // 0x002A45B0: bnel        $v0, $zero, L_002A45C8
    if (ctx->r2 != 0) {
        // 0x002A45B4: subu        $a0, $a1, $t0
        ctx->r4 = SUB32(ctx->r5, ctx->r8);
            goto L_002A45C8;
    }
    goto skip_10;
    // 0x002A45B4: subu        $a0, $a1, $t0
    ctx->r4 = SUB32(ctx->r5, ctx->r8);
    skip_10:
    // 0x002A45B8: bne         $a2, $t2, L_002A45D8
    if (ctx->r6 != ctx->r10) {
        // 0x002A45BC: sltu        $v0, $t3, $a1
        ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
            goto L_002A45D8;
    }
    // 0x002A45BC: sltu        $v0, $t3, $a1
    ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
    // 0x002A45C0: beq         $v0, $zero, L_002A45D8
    if (ctx->r2 == 0) {
        // 0x002A45C4: subu        $a0, $a1, $t0
        ctx->r4 = SUB32(ctx->r5, ctx->r8);
            goto L_002A45D8;
    }
    // 0x002A45C4: subu        $a0, $a1, $t0
    ctx->r4 = SUB32(ctx->r5, ctx->r8);
L_002A45C8:
    // 0x002A45C8: subu        $v1, $a2, $t1
    ctx->r3 = SUB32(ctx->r6, ctx->r9);
    // 0x002A45CC: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x002A45D0: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x002A45D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_002A45D8:
    // 0x002A45D8: beq         $t9, $zero, L_002A4604
    if (ctx->r25 == 0) {
        // 0x002A45DC: subu        $v1, $t3, $a1
        ctx->r3 = SUB32(ctx->r11, ctx->r5);
            goto L_002A4604;
    }
    // 0x002A45DC: subu        $v1, $t3, $a1
    ctx->r3 = SUB32(ctx->r11, ctx->r5);
    // 0x002A45E0: subu        $a0, $t2, $a2
    ctx->r4 = SUB32(ctx->r10, ctx->r6);
    // 0x002A45E4: sltu        $v0, $t3, $v1
    ctx->r2 = ctx->r11 < ctx->r3 ? 1 : 0;
    // 0x002A45E8: subu        $t2, $a0, $v0
    ctx->r10 = SUB32(ctx->r4, ctx->r2);
    // 0x002A45EC: sllv        $v0, $t2, $t8
    ctx->r2 = S32(ctx->r10 << (ctx->r24 & 31));
    // 0x002A45F0: srlv        $v1, $v1, $t5
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r13 & 31));
    // 0x002A45F4: or          $t7, $v0, $v1
    ctx->r15 = ctx->r2 | ctx->r3;
    // 0x002A45F8: srlv        $t6, $t2, $t5
    ctx->r14 = S32(U32(ctx->r10) >> (ctx->r13 & 31));
L_002A45FC:
    // 0x002A45FC: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x002A4600: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
L_002A4604:
    // 0x002A4604: beq         $s2, $zero, L_002A462C
    if (ctx->r18 == 0) {
        // 0x002A4608: nop
    
            goto L_002A462C;
    }
    // 0x002A4608: nop

    // 0x002A460C: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x002A4610: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x002A4614: negu        $s1, $v1
    ctx->r17 = SUB32(0, ctx->r3);
    // 0x002A4618: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x002A461C: sltu        $a0, $zero, $s1
    ctx->r4 = 0 < ctx->r17 ? 1 : 0;
    // 0x002A4620: subu        $s0, $v0, $a0
    ctx->r16 = SUB32(ctx->r2, ctx->r4);
    // 0x002A4624: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x002A4628: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
L_002A462C:
    // 0x002A462C: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x002A4630: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x002A4634: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x002A4638: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x002A463C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x002A4640: jr          $ra
    // 0x002A4644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A4644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004224F4:
    // 0x0045B3A4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0045B3A8: lhu         $v1, 0x94C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X94C);
    // 0x0045B3AC: sltiu       $v0, $v1, 0x32
    ctx->r2 = ctx->r3 < 0X32 ? 1 : 0;
    // 0x0045B3B0: beq         $v0, $zero, L_0045B3C8
    if (ctx->r2 == 0) {
        // 0x0045B3B4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0045B3C8;
    }
    // 0x0045B3B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0045B3B8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B3BC: addiu       $a1, $a1, 0x4934
    ctx->r5 = ADD32(ctx->r5, 0X4934);
    // 0x0045B3C0: j           L_004224F4
    // 0x0045B3C4: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B3C4: nop

L_0045B3C8:
    // 0x0045B3C8: addiu       $v0, $v1, -0x32
    ctx->r2 = ADD32(ctx->r3, -0X32);
    // 0x0045B3CC: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x0045B3D0: beq         $v0, $zero, L_0045B3E8
    if (ctx->r2 == 0) {
        // 0x0045B3D4: addiu       $v0, $v1, -0x96
        ctx->r2 = ADD32(ctx->r3, -0X96);
            goto L_0045B3E8;
    }
    // 0x0045B3D4: addiu       $v0, $v1, -0x96
    ctx->r2 = ADD32(ctx->r3, -0X96);
    // 0x0045B3D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B3DC: addiu       $a1, $a1, 0x4940
    ctx->r5 = ADD32(ctx->r5, 0X4940);
    // 0x0045B3E0: j           L_004224F4
    // 0x0045B3E4: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B3E4: nop

L_0045B3E8:
    // 0x0045B3E8: sltiu       $v0, $v0, 0x96
    ctx->r2 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x0045B3EC: beq         $v0, $zero, L_0045B404
    if (ctx->r2 == 0) {
        // 0x0045B3F0: addiu       $v0, $v1, -0x12C
        ctx->r2 = ADD32(ctx->r3, -0X12C);
            goto L_0045B404;
    }
    // 0x0045B3F0: addiu       $v0, $v1, -0x12C
    ctx->r2 = ADD32(ctx->r3, -0X12C);
    // 0x0045B3F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B3F8: addiu       $a1, $a1, 0x494C
    ctx->r5 = ADD32(ctx->r5, 0X494C);
    // 0x0045B3FC: j           L_004224F4
    // 0x0045B400: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B400: nop

L_0045B404:
    // 0x0045B404: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x0045B408: beq         $v0, $zero, L_0045B420
    if (ctx->r2 == 0) {
        // 0x0045B40C: addiu       $v0, $v1, -0x1F4
        ctx->r2 = ADD32(ctx->r3, -0X1F4);
            goto L_0045B420;
    }
    // 0x0045B40C: addiu       $v0, $v1, -0x1F4
    ctx->r2 = ADD32(ctx->r3, -0X1F4);
    // 0x0045B410: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B414: addiu       $a1, $a1, 0x4958
    ctx->r5 = ADD32(ctx->r5, 0X4958);
    // 0x0045B418: j           L_004224F4
    // 0x0045B41C: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B41C: nop

L_0045B420:
    // 0x0045B420: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x0045B424: beq         $v0, $zero, L_0045B43C
    if (ctx->r2 == 0) {
        // 0x0045B428: addiu       $v0, $v1, -0x320
        ctx->r2 = ADD32(ctx->r3, -0X320);
            goto L_0045B43C;
    }
    // 0x0045B428: addiu       $v0, $v1, -0x320
    ctx->r2 = ADD32(ctx->r3, -0X320);
    // 0x0045B42C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B430: addiu       $a1, $a1, 0x4964
    ctx->r5 = ADD32(ctx->r5, 0X4964);
    // 0x0045B434: j           L_004224F4
    // 0x0045B438: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B438: nop

L_0045B43C:
    // 0x0045B43C: sltiu       $v0, $v0, 0x1F4
    ctx->r2 = ctx->r2 < 0X1F4 ? 1 : 0;
    // 0x0045B440: beq         $v0, $zero, L_0045B458
    if (ctx->r2 == 0) {
        // 0x0045B444: addiu       $v0, $v1, -0x514
        ctx->r2 = ADD32(ctx->r3, -0X514);
            goto L_0045B458;
    }
    // 0x0045B444: addiu       $v0, $v1, -0x514
    ctx->r2 = ADD32(ctx->r3, -0X514);
    // 0x0045B448: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B44C: addiu       $a1, $a1, 0x4970
    ctx->r5 = ADD32(ctx->r5, 0X4970);
    // 0x0045B450: j           L_004224F4
    // 0x0045B454: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B454: nop

L_0045B458:
    // 0x0045B458: sltiu       $v0, $v0, 0x2BC
    ctx->r2 = ctx->r2 < 0X2BC ? 1 : 0;
    // 0x0045B45C: beq         $v0, $zero, L_0045B474
    if (ctx->r2 == 0) {
        // 0x0045B460: addiu       $v0, $v1, -0x7D0
        ctx->r2 = ADD32(ctx->r3, -0X7D0);
            goto L_0045B474;
    }
    // 0x0045B460: addiu       $v0, $v1, -0x7D0
    ctx->r2 = ADD32(ctx->r3, -0X7D0);
    // 0x0045B464: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B468: addiu       $a1, $a1, 0x497C
    ctx->r5 = ADD32(ctx->r5, 0X497C);
    // 0x0045B46C: j           L_004224F4
    // 0x0045B470: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B470: nop

L_0045B474:
    // 0x0045B474: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0045B478: beq         $v0, $zero, L_0045B490
    if (ctx->r2 == 0) {
        // 0x0045B47C: addiu       $v0, $v1, -0xBB8
        ctx->r2 = ADD32(ctx->r3, -0XBB8);
            goto L_0045B490;
    }
    // 0x0045B47C: addiu       $v0, $v1, -0xBB8
    ctx->r2 = ADD32(ctx->r3, -0XBB8);
    // 0x0045B480: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B484: addiu       $a1, $a1, 0x4988
    ctx->r5 = ADD32(ctx->r5, 0X4988);
    // 0x0045B488: j           L_004224F4
    // 0x0045B48C: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B48C: nop

L_0045B490:
    // 0x0045B490: sltiu       $v0, $v0, 0x5DC
    ctx->r2 = ctx->r2 < 0X5DC ? 1 : 0;
    // 0x0045B494: beq         $v0, $zero, L_0045B4AC
    if (ctx->r2 == 0) {
        // 0x0045B498: addiu       $v0, $v1, -0x1194
        ctx->r2 = ADD32(ctx->r3, -0X1194);
            goto L_0045B4AC;
    }
    // 0x0045B498: addiu       $v0, $v1, -0x1194
    ctx->r2 = ADD32(ctx->r3, -0X1194);
    // 0x0045B49C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B4A0: addiu       $a1, $a1, 0x4994
    ctx->r5 = ADD32(ctx->r5, 0X4994);
    // 0x0045B4A4: j           L_004224F4
    // 0x0045B4A8: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B4A8: nop

L_0045B4AC:
    // 0x0045B4AC: sltiu       $v0, $v0, 0x7D0
    ctx->r2 = ctx->r2 < 0X7D0 ? 1 : 0;
    // 0x0045B4B0: beq         $v0, $zero, L_0045B4C8
    if (ctx->r2 == 0) {
        // 0x0045B4B4: addiu       $v0, $v1, -0x1964
        ctx->r2 = ADD32(ctx->r3, -0X1964);
            goto L_0045B4C8;
    }
    // 0x0045B4B4: addiu       $v0, $v1, -0x1964
    ctx->r2 = ADD32(ctx->r3, -0X1964);
    // 0x0045B4B8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B4BC: addiu       $a1, $a1, 0x49A0
    ctx->r5 = ADD32(ctx->r5, 0X49A0);
    // 0x0045B4C0: j           L_004224F4
    // 0x0045B4C4: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B4C4: nop

L_0045B4C8:
    // 0x0045B4C8: sltiu       $v0, $v0, 0xDAB
    ctx->r2 = ctx->r2 < 0XDAB ? 1 : 0;
    // 0x0045B4CC: beq         $v0, $zero, L_0045B4E4
    if (ctx->r2 == 0) {
        // 0x0045B4D0: slti        $v0, $v1, 0x270F
        ctx->r2 = SIGNED(ctx->r3) < 0X270F ? 1 : 0;
            goto L_0045B4E4;
    }
    // 0x0045B4D0: slti        $v0, $v1, 0x270F
    ctx->r2 = SIGNED(ctx->r3) < 0X270F ? 1 : 0;
    // 0x0045B4D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B4D8: addiu       $a1, $a1, 0x49AC
    ctx->r5 = ADD32(ctx->r5, 0X49AC);
    // 0x0045B4DC: j           L_004224F4
    // 0x0045B4E0: nop

    entry_004224F4(rdram, ctx);
    return;
    // 0x0045B4E0: nop

L_0045B4E4:
    // 0x0045B4E4: bne         $v0, $zero, L_0045B4F4
    if (ctx->r2 != 0) {
        // 0x0045B4E8: nop
    
            goto L_0045B4F4;
    }
    // 0x0045B4E8: nop

    // 0x0045B4EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045B4F0: addiu       $a1, $a1, 0x49B8
    ctx->r5 = ADD32(ctx->r5, 0X49B8);
L_0045B4F4:
    // 0x0045B4F4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x0045B4F8: beq         $a1, $zero, L_0045B520
    if (ctx->r5 == 0) {
        // 0x0045B4FC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_0045B520;
    }
    // 0x0045B4FC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0045B500: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0045B504:
    // 0x0045B504: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045B508: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045B50C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045B510: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0045B514: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0045B518: bne         $v0, $zero, L_0045B504
    if (ctx->r2 != 0) {
        // 0x0045B51C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045B504;
    }
    // 0x0045B51C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_0045B520:
    // 0x0045B520: jr          $ra
    // 0x0045B524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045B524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00219938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021993C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00219940: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00219944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00219948: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x0021994C: jal         0x002051F4
    // 0x00219950: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x00219950: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00219954: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x00219958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0021995C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00219960: jr          $ra
    // 0x00219964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00219964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002407D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002407D8: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x002407DC: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x002407E0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002407E4: nop

    // 0x002407E8: bc1f        L_002407F4
    if (!c1cs) {
        // 0x002407EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002407F4;
    }
    // 0x002407EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002407F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002407F4:
    // 0x002407F4: jr          $ra
    // 0x002407F8: nop

    return;
    // 0x002407F8: nop

;}
RECOMP_FUNC void func_00422190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00422194: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422198: sw          $v0, 0x960($at)
    MEM_W(0X960, ctx->r1) = ctx->r2;
    // 0x0042219C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004221A0: sw          $zero, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = 0;
    // 0x004221A4: jr          $ra
    // 0x004221A8: nop

    return;
    // 0x004221A8: nop

;}
RECOMP_FUNC void func_004549B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004549B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004549B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004549B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004549BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004549C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004549C4: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
    // 0x004549C8: addu        $a1, $s1, $s0
    ctx->r5 = ADD32(ctx->r17, ctx->r16);
    // 0x004549CC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x004549D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004549D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004549D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004549DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004549E0: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
    // 0x004549E4: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x004549E8: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
    // 0x004549EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004549F0: sb          $v0, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r2;
    // 0x004549F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004549F8: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x004549FC: lbu         $a0, 0x11($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X11);
    // 0x00454A00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00454A04: lwc1        $f0, 0x1328($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1328);
    // 0x00454A08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00454A0C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x00454A10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00454A14: sb          $v1, 0x13($s1)
    MEM_B(0X13, ctx->r17) = ctx->r3;
    // 0x00454A18: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x00454A1C: sb          $v1, 0x17($s1)
    MEM_B(0X17, ctx->r17) = ctx->r3;
    // 0x00454A20: sb          $zero, 0x18($s1)
    MEM_B(0X18, ctx->r17) = 0;
    // 0x00454A24: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x00454A28: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x00454A2C: sb          $zero, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = 0;
    // 0x00454A30: sb          $zero, 0x180($s1)
    MEM_B(0X180, ctx->r17) = 0;
    // 0x00454A34: sb          $v0, 0x20($s1)
    MEM_B(0X20, ctx->r17) = ctx->r2;
    // 0x00454A38: sb          $zero, 0x21($s1)
    MEM_B(0X21, ctx->r17) = 0;
    // 0x00454A3C: sb          $zero, 0x22($s1)
    MEM_B(0X22, ctx->r17) = 0;
    // 0x00454A40: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x00454A44: sb          $v1, 0x24($s1)
    MEM_B(0X24, ctx->r17) = ctx->r3;
    // 0x00454A48: sb          $zero, 0x25($s1)
    MEM_B(0X25, ctx->r17) = 0;
    // 0x00454A4C: sb          $zero, 0x26($s1)
    MEM_B(0X26, ctx->r17) = 0;
    // 0x00454A50: sb          $zero, 0x27($s1)
    MEM_B(0X27, ctx->r17) = 0;
    // 0x00454A54: sb          $zero, 0x28($s1)
    MEM_B(0X28, ctx->r17) = 0;
    // 0x00454A58: sb          $v1, 0x29($s1)
    MEM_B(0X29, ctx->r17) = ctx->r3;
    // 0x00454A5C: sb          $v0, 0x2A($s1)
    MEM_B(0X2A, ctx->r17) = ctx->r2;
    // 0x00454A60: sb          $zero, 0x2B($s1)
    MEM_B(0X2B, ctx->r17) = 0;
    // 0x00454A64: sb          $zero, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = 0;
    // 0x00454A68: sb          $zero, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = 0;
    // 0x00454A6C: sb          $v1, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = ctx->r3;
    // 0x00454A70: sb          $a0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r4;
    // 0x00454A74: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_00454A78:
    // 0x00454A78: sb          $a2, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r6;
    // 0x00454A7C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00454A80: bgez        $s0, L_00454A78
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00454A84: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_00454A78;
    }
    // 0x00454A84: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00454A88: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00454A8C: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x00454A90: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00454A94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00454A98: sb          $zero, 0x3C($s1)
    MEM_B(0X3C, ctx->r17) = 0;
    // 0x00454A9C: sb          $v0, 0x3D($s1)
    MEM_B(0X3D, ctx->r17) = ctx->r2;
    // 0x00454AA0: sb          $zero, 0x3E($s1)
    MEM_B(0X3E, ctx->r17) = 0;
    // 0x00454AA4: sb          $v0, 0x3F($s1)
    MEM_B(0X3F, ctx->r17) = ctx->r2;
    // 0x00454AA8: sll         $a0, $s0, 6
    ctx->r4 = S32(ctx->r16 << 6);
L_00454AAC:
    // 0x00454AAC: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00454AB0: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x00454AB4: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x00454AB8: sb          $s3, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r19;
    // 0x00454ABC: sb          $s3, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r19;
    // 0x00454AC0: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x00454AC4: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x00454AC8: sb          $s2, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r18;
    // 0x00454ACC: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x00454AD0: sb          $s0, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r16;
    // 0x00454AD4: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x00454AD8: sb          $s2, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r18;
    // 0x00454ADC: jal         0x0041BBB0
    // 0x00454AE0: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    func_0041BBB0(rdram, ctx);
        goto after_0;
    // 0x00454AE0: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    after_0:
    // 0x00454AE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00454AE8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00454AEC: bne         $v0, $zero, L_00454AAC
    if (ctx->r2 != 0) {
        // 0x00454AF0: sll         $a0, $s0, 6
        ctx->r4 = S32(ctx->r16 << 6);
            goto L_00454AAC;
    }
    // 0x00454AF0: sll         $a0, $s0, 6
    ctx->r4 = S32(ctx->r16 << 6);
    // 0x00454AF4: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x00454AF8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00454AFC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00454B00: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x00454B04: sb          $v0, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r2;
    // 0x00454B08: sb          $v0, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r2;
    // 0x00454B0C: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x00454B10: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x00454B14: sb          $s0, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r16;
    // 0x00454B18: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x00454B1C: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x00454B20: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x00454B24: sb          $s0, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r16;
    // 0x00454B28: jal         0x0041BBB0
    // 0x00454B2C: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    func_0041BBB0(rdram, ctx);
        goto after_1;
    // 0x00454B2C: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    after_1:
    // 0x00454B30: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x00454B34: sb          $s0, 0x68($s1)
    MEM_B(0X68, ctx->r17) = ctx->r16;
    // 0x00454B38: sb          $zero, 0x19($s1)
    MEM_B(0X19, ctx->r17) = 0;
    // 0x00454B3C: sb          $s0, 0x1A($s1)
    MEM_B(0X1A, ctx->r17) = ctx->r16;
    // 0x00454B40: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00454B44: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x00454B48: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00454B4C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00454B50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00454B54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00454B58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00454B5C: jr          $ra
    // 0x00454B60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00454B60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00210968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021096C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00210970: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00210974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00210978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021097C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00210980: jal         0x002982F0
    // 0x00210984: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00210984: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00210988: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0021098C: jal         0x002974C0
    // 0x00210990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00210990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x00210994: lwc1        $f3, 0x0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x00210998: mul.s       $f16, $f3, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0021099C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002109A0: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x002109A4: neg.s       $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = -ctx->f20.fl;
    // 0x002109A8: mul.s       $f15, $f3, $f1
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f15.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x002109AC: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002109B0: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x002109B4: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x002109B8: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x002109BC: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x002109C0: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x002109C4: lwc1        $f5, 0x28($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x002109C8: mul.s       $f5, $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f20.fl);
    // 0x002109CC: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x002109D0: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x002109D4: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x002109D8: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x002109DC: lwc1        $f3, 0x10($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x002109E0: mul.s       $f14, $f3, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002109E4: nop

    // 0x002109E8: mul.s       $f13, $f3, $f1
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f13.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x002109EC: lwc1        $f3, 0x20($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x002109F0: mul.s       $f11, $f3, $f0
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f11.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002109F4: nop

    // 0x002109F8: mul.s       $f9, $f3, $f1
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f9.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x002109FC: lwc1        $f3, 0x30($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X30);
    // 0x00210A00: mul.s       $f7, $f3, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00210A04: nop

    // 0x00210A08: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00210A0C: lwc1        $f3, 0x38($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x00210A10: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00210A14: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x00210A18: add.s       $f15, $f15, $f10
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f10.fl;
    // 0x00210A1C: add.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x00210A20: add.s       $f13, $f13, $f6
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f13.fl = ctx->f13.fl + ctx->f6.fl;
    // 0x00210A24: add.s       $f11, $f11, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f5.fl;
    // 0x00210A28: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x00210A2C: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x00210A30: swc1        $f15, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(15 - 1) * 2];
    // 0x00210A34: swc1        $f14, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f14.u32l;
    // 0x00210A38: add.s       $f7, $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f2.fl;
    // 0x00210A3C: swc1        $f13, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(13 - 1) * 2];
    // 0x00210A40: swc1        $f11, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(11 - 1) * 2];
    // 0x00210A44: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00210A48: swc1        $f9, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(9 - 1) * 2];
    // 0x00210A4C: swc1        $f7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x00210A50: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210A58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210A5C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00210A60: jr          $ra
    // 0x00210A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00210A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00268410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268410: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00268414: jr          $ra
    // 0x00268418: nop

    return;
    // 0x00268418: nop

;}
RECOMP_FUNC void func_00256604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256604: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00256608: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x0025660C: beq         $v0, $zero, L_0025661C
    if (ctx->r2 == 0) {
        // 0x00256610: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0025661C;
    }
    // 0x00256610: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00256614: j           L_0025667C
    // 0x00256618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_0025667C;
    // 0x00256618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_0025661C:
    // 0x0025661C: lhu         $v0, 0xA08($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA08);
    // 0x00256620: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00256624: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00256628: beql        $v0, $zero, L_0025667C
    if (ctx->r2 == 0) {
        // 0x0025662C: sw          $zero, 0xAC4($a0)
        MEM_W(0XAC4, ctx->r4) = 0;
            goto L_0025667C;
    }
    goto skip_0;
    // 0x0025662C: sw          $zero, 0xAC4($a0)
    MEM_W(0XAC4, ctx->r4) = 0;
    skip_0:
    // 0x00256630: lw          $v0, 0xA68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA68);
    // 0x00256634: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00256638: beq         $v0, $zero, L_0025667C
    if (ctx->r2 == 0) {
        // 0x0025663C: nop
    
            goto L_0025667C;
    }
    // 0x0025663C: nop

    // 0x00256640: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00256644: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00256648: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0025664C: bne         $v0, $zero, L_0025667C
    if (ctx->r2 != 0) {
        // 0x00256650: nop
    
            goto L_0025667C;
    }
    // 0x00256650: nop

    // 0x00256654: lw          $v0, -0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X38);
    // 0x00256658: beq         $v0, $zero, L_00256670
    if (ctx->r2 == 0) {
        // 0x0025665C: nop
    
            goto L_00256670;
    }
    // 0x0025665C: nop

    // 0x00256660: lw          $v0, 0xA64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA64);
    // 0x00256664: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00256668: bne         $v0, $zero, L_0025667C
    if (ctx->r2 != 0) {
        // 0x0025666C: nop
    
            goto L_0025667C;
    }
    // 0x0025666C: nop

L_00256670:
    // 0x00256670: lw          $v0, 0xAC4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC4);
    // 0x00256674: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00256678: sw          $v0, 0xAC4($a0)
    MEM_W(0XAC4, ctx->r4) = ctx->r2;
L_0025667C:
    // 0x0025667C: lw          $v0, 0xAC4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC4);
    // 0x00256680: bnel        $v0, $zero, L_00256688
    if (ctx->r2 != 0) {
        // 0x00256684: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00256688;
    }
    goto skip_1;
    // 0x00256684: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_1:
L_00256688:
    // 0x00256688: beq         $a1, $zero, L_002566B0
    if (ctx->r5 == 0) {
        // 0x0025668C: nop
    
            goto L_002566B0;
    }
    // 0x0025668C: nop

    // 0x00256690: lwc1        $f0, 0xAC0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAC0);
    // 0x00256694: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256698: lwc1        $f1, 0x71E4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71E4);
    // 0x0025669C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002566A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002566A4: lwc1        $f0, 0x71E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71E8);
    // 0x002566A8: j           L_002566C0
    // 0x002566AC: nop

        goto L_002566C0;
    // 0x002566AC: nop

L_002566B0:
    // 0x002566B0: lwc1        $f0, 0xAC0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAC0);
    // 0x002566B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002566B8: lwc1        $f1, 0x71EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71EC);
    // 0x002566BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_002566C0:
    // 0x002566C0: mul.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002566C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002566C8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002566CC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002566D0: lwc1        $f1, 0xAC0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAC0);
    // 0x002566D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002566D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002566DC: lwc1        $f0, 0x71F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71F0);
    // 0x002566E0: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002566E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002566E8: lwc1        $f0, 0x71F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71F4);
    // 0x002566EC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x002566F0: nop

    // 0x002566F4: bc1f        L_00256724
    if (!c1cs) {
            // 0x002566F8: swc1        $f1, 0xAC0($a0)
    MEM_W(0XAC0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    func_00256724(rdram, ctx);
    return;
    }
    // 0x002566F8: swc1        $f1, 0xAC0($a0)
    MEM_W(0XAC0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x002566FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256700: lwc1        $f0, 0x71F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71F8);
    // 0x00256704: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00256708: nop

    // 0x0025670C: bc1f        L_00256724
    if (!c1cs) {
            // 0x00256710: nop

    func_00256724(rdram, ctx);
    return;
    }
    // 0x00256710: nop

    // 0x00256714: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00256718: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x0025671C: jr          $ra
    // 0x00256720: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x00256720: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_0028F828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F828: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x0028F82C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028F830: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0028F834: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x0028F838: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0028F83C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0028F840: sw          $v0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r2;
    // 0x0028F844: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0028F848: addu        $a2, $t1, $zero
    ctx->r6 = ADD32(ctx->r9, 0);
    // 0x0028F84C: sw          $v0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r2;
L_0028F850:
    // 0x0028F850: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x0028F854: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x0028F858: lw          $v0, 0x4C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4C);
    // 0x0028F85C: addu        $v1, $a1, $t0
    ctx->r3 = ADD32(ctx->r5, ctx->r8);
    // 0x0028F860: sw          $v0, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r2;
    // 0x0028F864: lbu         $v0, 0x8C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8C);
    // 0x0028F868: addu        $a0, $t1, $t0
    ctx->r4 = ADD32(ctx->r9, ctx->r8);
    // 0x0028F86C: sb          $v0, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r2;
    // 0x0028F870: lbu         $v0, 0x9C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9C);
    // 0x0028F874: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0028F878: sb          $v0, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r2;
    // 0x0028F87C: lw          $v0, 0xAC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XAC);
    // 0x0028F880: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0028F884: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
    // 0x0028F888: slti        $v0, $t0, 0x10
    ctx->r2 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x0028F88C: bne         $v0, $zero, L_0028F850
    if (ctx->r2 != 0) {
        // 0x0028F890: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0028F850;
    }
    // 0x0028F890: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0028F894: jr          $ra
    // 0x0028F898: nop

    return;
    // 0x0028F898: nop

;}
RECOMP_FUNC void func_00256AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256AA0: lbu         $v0, 0x52C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52C);
    // 0x00256AA4: jr          $ra
    // 0x00256AA8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    return;
    // 0x00256AA8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
;}
RECOMP_FUNC void func_002613D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002613D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002613DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002613E0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002613E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x002613E8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x002613EC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002613F0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x002613F4: beq         $v0, $zero, L_00261478
    if (ctx->r2 == 0) {
        // 0x002613F8: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00261478;
    }
    // 0x002613F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002613FC: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x00261400: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00261404: bne         $v1, $v0, L_00261478
    if (ctx->r3 != ctx->r2) {
        // 0x00261408: nop
    
            goto L_00261478;
    }
    // 0x00261408: nop

    // 0x0026140C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00261410: addiu       $s1, $s1, 0x1CE0
    ctx->r17 = ADD32(ctx->r17, 0X1CE0);
    // 0x00261414: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00261418: beq         $v1, $zero, L_00261478
    if (ctx->r3 == 0) {
        // 0x0026141C: nop
    
            goto L_00261478;
    }
    // 0x0026141C: nop

    // 0x00261420: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x00261424: beq         $v1, $v0, L_00261438
    if (ctx->r3 == ctx->r2) {
        // 0x00261428: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00261438;
    }
    // 0x00261428: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0026142C: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x00261430: bne         $v1, $v0, L_00261478
    if (ctx->r3 != ctx->r2) {
        // 0x00261434: nop
    
            goto L_00261478;
    }
    // 0x00261434: nop

L_00261438:
    // 0x00261438: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026143C: addiu       $a2, $zero, 0x500
    ctx->r6 = ADD32(0, 0X500);
    // 0x00261440: lui         $a3, 0x41CC
    ctx->r7 = S32(0X41CC << 16);
    // 0x00261444: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00261448: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0026144C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00261450: jal         0x00245828
    // 0x00261454: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_0;
    // 0x00261454: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00261458: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0026145C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00261460: jal         0x002465C8
    // 0x00261464: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002465C8(rdram, ctx);
        goto after_1;
    // 0x00261464: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00261468: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026146C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00261470: jal         0x00243414
    // 0x00261474: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00261474: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
L_00261478:
    // 0x00261478: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0026147C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00261480: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00261484: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00261488: jr          $ra
    // 0x0026148C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0026148C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00256ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256ED0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00256ED4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00256ED8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00256EDC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00256EE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00256EE4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00256EE8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00256EEC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x00256EF0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00256EF4: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x00256EF8: bne         $s1, $zero, L_00256F1C
    if (ctx->r17 != 0) {
        // 0x00256EFC: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_00256F1C;
    }
    // 0x00256EFC: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00256F00: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00256F04: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x00256F08: jal         0x00228AEC
    // 0x00256F0C: nop

    func_00228AEC(rdram, ctx);
        goto after_0;
    // 0x00256F0C: nop

    after_0:
    // 0x00256F10: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00256F14: beq         $s1, $zero, L_00256FB8
    if (ctx->r17 == 0) {
        // 0x00256F18: nop
    
            goto L_00256FB8;
    }
    // 0x00256F18: nop

L_00256F1C:
    // 0x00256F1C: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x00256F20: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x00256F24: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00256F28: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00256F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256F30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00256F34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00256F38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00256F3C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00256F40: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x00256F44: jal         0x0021F00C
    // 0x00256F48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0021F00C(rdram, ctx);
        goto after_1;
    // 0x00256F48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00256F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00256F50: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00256F54: jal         0x0020EEF8
    // 0x00256F58: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x00256F58: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    after_2:
    // 0x00256F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00256F60: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x00256F64: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00256F68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00256F6C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00256F70: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00256F74: jal         0x002671B4
    // 0x00256F78: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    func_002671B4(rdram, ctx);
        goto after_3;
    // 0x00256F78: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    after_3:
    // 0x00256F7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256F80: lwc1        $f1, 0x7210($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7210);
    // 0x00256F84: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00256F88: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00256F8C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00256F90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256F94: lwc1        $f0, 0x7214($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7214);
    // 0x00256F98: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00256F9C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00256FA0: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    // 0x00256FA4: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00256FA8: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x00256FAC: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00256FB0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00256FB4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_00256FB8:
    // 0x00256FB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00256FBC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00256FC0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00256FC4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00256FC8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00256FCC: jr          $ra
    // 0x00256FD0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00256FD0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0028E5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E5D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028E5D4: lui         $a1, 0x1F
    ctx->r5 = S32(0X1F << 16);
    // 0x0028E5D8: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x0028E5DC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0028E5E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028E5E4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0028E5E8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x0028E5EC: lui         $a2, 0x20
    ctx->r6 = S32(0X20 << 16);
    // 0x0028E5F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028E5F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0028E5F8: jal         0x0028EE40
    // 0x0028E5FC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0028EE40(rdram, ctx);
        goto after_0;
    // 0x0028E5FC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0028E600: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0028E604: jr          $ra
    // 0x0028E608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028E608: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0024032C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024032C: addiu       $sp, $sp, -0x490
    ctx->r29 = ADD32(ctx->r29, -0X490);
    // 0x00240330: sw          $s5, 0x47C($sp)
    MEM_W(0X47C, ctx->r29) = ctx->r21;
    // 0x00240334: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00240338: sw          $ra, 0x48C($sp)
    MEM_W(0X48C, ctx->r29) = ctx->r31;
    // 0x0024033C: sw          $fp, 0x488($sp)
    MEM_W(0X488, ctx->r29) = ctx->r30;
    // 0x00240340: sw          $s7, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r23;
    // 0x00240344: sw          $s6, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r22;
    // 0x00240348: sw          $s4, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->r20;
    // 0x0024034C: sw          $s3, 0x474($sp)
    MEM_W(0X474, ctx->r29) = ctx->r19;
    // 0x00240350: sw          $s2, 0x470($sp)
    MEM_W(0X470, ctx->r29) = ctx->r18;
    // 0x00240354: sw          $s1, 0x46C($sp)
    MEM_W(0X46C, ctx->r29) = ctx->r17;
    // 0x00240358: sw          $s0, 0x468($sp)
    MEM_W(0X468, ctx->r29) = ctx->r16;
    // 0x0024035C: lw          $s7, 0x4($s5)
    ctx->r23 = MEM_W(ctx->r21, 0X4);
    // 0x00240360: lb          $v0, 0x4($s7)
    ctx->r2 = MEM_B(ctx->r23, 0X4);
    // 0x00240364: beq         $v0, $zero, L_002406A8
    if (ctx->r2 == 0) {
        // 0x00240368: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_002406A8;
    }
    // 0x00240368: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x0024036C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00240370: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00240374: beq         $v0, $zero, L_002406A8
    if (ctx->r2 == 0) {
        // 0x00240378: nop
    
            goto L_002406A8;
    }
    // 0x00240378: nop

    // 0x0024037C: lw          $s1, 0x0($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X0);
    // 0x00240380: lwc1        $f0, 0x4C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X4C);
    // 0x00240384: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00240388: addiu       $t0, $s1, 0x4
    ctx->r8 = ADD32(ctx->r17, 0X4);
    // 0x0024038C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00240390: nop

    // 0x00240394: bc1t        L_002403A0
    if (c1cs) {
        // 0x00240398: sw          $t0, 0x464($sp)
        MEM_W(0X464, ctx->r29) = ctx->r8;
            goto L_002403A0;
    }
    // 0x00240398: sw          $t0, 0x464($sp)
    MEM_W(0X464, ctx->r29) = ctx->r8;
    // 0x0024039C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_002403A0:
    // 0x002403A0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x002403A4: lwc1        $f0, 0x4C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X4C);
    // 0x002403A8: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x002403AC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002403B0: nop

    // 0x002403B4: bc1fl       L_002403BC
    if (!c1cs) {
        // 0x002403B8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002403BC;
    }
    goto skip_0;
    // 0x002403B8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_002403BC:
    // 0x002403BC: lw          $t0, 0x464($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X464);
    // 0x002403C0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x002403C4: lwc1        $f0, 0x50($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X50);
    // 0x002403C8: lwc1        $f1, 0x4($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X4);
    // 0x002403CC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002403D0: nop

    // 0x002403D4: bc1fl       L_002403DC
    if (!c1cs) {
        // 0x002403D8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002403DC;
    }
    goto skip_1;
    // 0x002403D8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_002403DC:
    // 0x002403DC: lw          $t0, 0x464($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X464);
    // 0x002403E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x002403E4: lwc1        $f0, 0x50($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X50);
    // 0x002403E8: lwc1        $f1, 0x4($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X4);
    // 0x002403EC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002403F0: nop

    // 0x002403F4: bc1fl       L_002403FC
    if (!c1cs) {
        // 0x002403F8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002403FC;
    }
    goto skip_2;
    // 0x002403F8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_002403FC:
    // 0x002403FC: lw          $t0, 0x464($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X464);
    // 0x00240400: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x00240404: lwc1        $f0, 0x54($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X54);
    // 0x00240408: lwc1        $f1, 0x8($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X8);
    // 0x0024040C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00240410: nop

    // 0x00240414: bc1fl       L_0024041C
    if (!c1cs) {
        // 0x00240418: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0024041C;
    }
    goto skip_3;
    // 0x00240418: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0024041C:
    // 0x0024041C: lw          $t0, 0x464($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X464);
    // 0x00240420: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00240424: lwc1        $f1, 0x54($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X54);
    // 0x00240428: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x0024042C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00240430: nop

    // 0x00240434: bc1fl       L_0024043C
    if (!c1cs) {
        // 0x00240438: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0024043C;
    }
    goto skip_4;
    // 0x00240438: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_4:
L_0024043C:
    // 0x0024043C: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
    // 0x00240440: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00240444: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00240448: addiu       $v0, $v0, 0x7078
    ctx->r2 = ADD32(ctx->r2, 0X7078);
    // 0x0024044C: lw          $fp, 0xAF0($v0)
    ctx->r30 = MEM_W(ctx->r2, 0XAF0);
    // 0x00240450: addu        $s4, $s6, $zero
    ctx->r20 = ADD32(ctx->r22, 0);
    // 0x00240454: blez        $fp, L_002405E4
    if (SIGNED(ctx->r30) <= 0) {
        // 0x00240458: swc1        $f1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_002405E4;
    }
    // 0x00240458: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024045C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_00240460:
    // 0x00240460: slti        $v0, $s4, 0x80
    ctx->r2 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
    // 0x00240464: beq         $v0, $zero, L_002405E4
    if (ctx->r2 == 0) {
        // 0x00240468: nop
    
            goto L_002405E4;
    }
    // 0x00240468: nop

    // 0x0024046C: lw          $s0, 0x8F0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X8F0);
    // 0x00240470: beql        $s1, $s0, L_002405D8
    if (ctx->r17 == ctx->r16) {
        // 0x00240474: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_5;
    // 0x00240474: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_5:
    // 0x00240478: lb          $v1, 0x4($s7)
    ctx->r3 = MEM_B(ctx->r23, 0X4);
    // 0x0024047C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00240480: bne         $v1, $v0, L_0024049C
    if (ctx->r3 != ctx->r2) {
        // 0x00240484: nop
    
            goto L_0024049C;
    }
    // 0x00240484: nop

    // 0x00240488: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0024048C: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x00240490: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240494: beql        $v0, $s0, L_002405D8
    if (ctx->r2 == ctx->r16) {
        // 0x00240498: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_6;
    // 0x00240498: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_6:
L_0024049C:
    // 0x0024049C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x002404A0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x002404A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002404A8: beq         $v0, $zero, L_002404BC
    if (ctx->r2 == 0) {
        // 0x002404AC: addiu       $v0, $zero, 0x64F
        ctx->r2 = ADD32(0, 0X64F);
            goto L_002404BC;
    }
    // 0x002404AC: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    // 0x002404B0: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x002404B4: beql        $v1, $v0, L_002405D8
    if (ctx->r3 == ctx->r2) {
        // 0x002404B8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_7;
    // 0x002404B8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_7:
L_002404BC:
    // 0x002404BC: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x002404C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002404C4: bne         $v1, $v0, L_0024051C
    if (ctx->r3 != ctx->r2) {
        // 0x002404C8: nop
    
            goto L_0024051C;
    }
    // 0x002404C8: nop

    // 0x002404CC: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x002404D0: bne         $v0, $s0, L_0024051C
    if (ctx->r2 != ctx->r16) {
        // 0x002404D4: nop
    
            goto L_0024051C;
    }
    // 0x002404D4: nop

    // 0x002404D8: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x002404DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002404E0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x002404E4: bnel        $v0, $zero, L_002405D8
    if (ctx->r2 != 0) {
        // 0x002404E8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_8;
    // 0x002404E8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_8:
    // 0x002404EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002404F0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002404F4: bnel        $v0, $zero, L_002405D8
    if (ctx->r2 != 0) {
        // 0x002404F8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_9;
    // 0x002404F8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_9:
    // 0x002404FC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00240500: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00240504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00240508: beql        $v1, $v0, L_002405D8
    if (ctx->r3 == ctx->r2) {
        // 0x0024050C: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_10;
    // 0x0024050C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_10:
    // 0x00240510: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00240514: beql        $v1, $v0, L_002405D8
    if (ctx->r3 == ctx->r2) {
        // 0x00240518: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_11;
    // 0x00240518: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_11:
L_0024051C:
    // 0x0024051C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00240520: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x00240524: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00240528: nop

    // 0x0024052C: bc1fl       L_002405D8
    if (!c1cs) {
        // 0x00240530: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_12;
    // 0x00240530: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_12:
    // 0x00240534: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00240538: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x0024053C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00240540: nop

    // 0x00240544: bc1fl       L_002405D8
    if (!c1cs) {
        // 0x00240548: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_13;
    // 0x00240548: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_13:
    // 0x0024054C: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00240550: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x00240554: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00240558: nop

    // 0x0024055C: bc1fl       L_002405D8
    if (!c1cs) {
        // 0x00240560: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_14;
    // 0x00240560: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_14:
    // 0x00240564: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00240568: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x0024056C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00240570: nop

    // 0x00240574: bc1fl       L_002405D8
    if (!c1cs) {
        // 0x00240578: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_15;
    // 0x00240578: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_15:
    // 0x0024057C: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00240580: lwc1        $f0, 0xC0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x00240584: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00240588: nop

    // 0x0024058C: bc1fl       L_002405D8
    if (!c1cs) {
        // 0x00240590: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_16;
    // 0x00240590: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_16:
    // 0x00240594: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x00240598: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x0024059C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002405A0: nop

    // 0x002405A4: bc1fl       L_002405D8
    if (!c1cs) {
        // 0x002405A8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    goto skip_17;
    // 0x002405A8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_17:
    // 0x002405AC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002405B0: addiu       $a1, $s0, 0xBC
    ctx->r5 = ADD32(ctx->r16, 0XBC);
    // 0x002405B4: jal         0x0023A640
    // 0x002405B8: addiu       $a2, $sp, 0x460
    ctx->r6 = ADD32(ctx->r29, 0X460);
    func_0023A640(rdram, ctx);
        goto after_0;
    // 0x002405B8: addiu       $a2, $sp, 0x460
    ctx->r6 = ADD32(ctx->r29, 0X460);
    after_0:
    // 0x002405BC: beq         $v0, $zero, L_002405D8
    if (ctx->r2 == 0) {
        // 0x002405C0: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_002405D8;
    }
    // 0x002405C0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x002405C4: lwc1        $f0, 0x460($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X460);
    // 0x002405C8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x002405CC: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x002405D0: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x002405D4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_002405D8:
    // 0x002405D8: slt         $v0, $s6, $fp
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x002405DC: bne         $v0, $zero, L_00240460
    if (ctx->r2 != 0) {
        // 0x002405E0: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_00240460;
    }
    // 0x002405E0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_002405E4:
    // 0x002405E4: beq         $s4, $zero, L_002406A8
    if (ctx->r20 == 0) {
        // 0x002405E8: addiu       $s0, $sp, 0x60
        ctx->r16 = ADD32(ctx->r29, 0X60);
            goto L_002406A8;
    }
    // 0x002405E8: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x002405EC: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x002405F0: addiu       $v0, $v0, 0x79C
    ctx->r2 = ADD32(ctx->r2, 0X79C);
    // 0x002405F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002405F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002405FC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00240600: lui         $a3, 0x24
    ctx->r7 = S32(0X24 << 16);
    // 0x00240604: addiu       $a3, $a3, 0x7D8
    ctx->r7 = ADD32(ctx->r7, 0X7D8);
    // 0x00240608: jal         0x00226F90
    // 0x0024060C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    entry_00226F90(rdram, ctx);
        goto after_1;
    // 0x0024060C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x00240610: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x00240614: blez        $s4, L_002406A8
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00240618: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002406A8;
    }
    // 0x00240618: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0024061C: lui         $s7, 0x30
    ctx->r23 = S32(0X30 << 16);
    // 0x00240620: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x00240624: addiu       $s6, $s6, -0x5528
    ctx->r22 = ADD32(ctx->r22, -0X5528);
    // 0x00240628: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
L_0024062C:
    // 0x0024062C: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00240630: lwc1        $f0, 0x8($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X8);
    // 0x00240634: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00240638: nop

    // 0x0024063C: bc1f        L_002406A8
    if (!c1cs) {
        // 0x00240640: nop
    
            goto L_002406A8;
    }
    // 0x00240640: nop

    // 0x00240644: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00240648: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0024064C: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x00240650: beq         $v0, $zero, L_00240688
    if (ctx->r2 == 0) {
        // 0x00240654: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00240688;
    }
    // 0x00240654: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00240658: lbu         $v0, 0x19($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X19);
    // 0x0024065C: bne         $v0, $zero, L_0024068C
    if (ctx->r2 != 0) {
        // 0x00240660: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0024068C;
    }
    // 0x00240660: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00240664: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00240668: jal         0x0023E6D8
    // 0x0024066C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0023E6D8(rdram, ctx);
        goto after_2;
    // 0x0024066C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00240670: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00240674: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00240678: jal         0x0023DF70
    // 0x0024067C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0023DF70(rdram, ctx);
        goto after_3;
    // 0x0024067C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00240680: j           L_0024069C
    // 0x00240684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_0024069C;
    // 0x00240684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00240688:
    // 0x00240688: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0024068C:
    // 0x0024068C: lw          $a2, 0x464($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X464);
    // 0x00240690: jal         0x0023FDF0
    // 0x00240694: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_0023FDF0(rdram, ctx);
        goto after_4;
    // 0x00240694: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00240698: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0024069C:
    // 0x0024069C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x002406A0: bne         $v0, $zero, L_0024062C
    if (ctx->r2 != 0) {
        // 0x002406A4: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0024062C;
    }
    // 0x002406A4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_002406A8:
    // 0x002406A8: lw          $ra, 0x48C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48C);
    // 0x002406AC: lw          $fp, 0x488($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X488);
    // 0x002406B0: lw          $s7, 0x484($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X484);
    // 0x002406B4: lw          $s6, 0x480($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X480);
    // 0x002406B8: lw          $s5, 0x47C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X47C);
    // 0x002406BC: lw          $s4, 0x478($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X478);
    // 0x002406C0: lw          $s3, 0x474($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X474);
    // 0x002406C4: lw          $s2, 0x470($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X470);
    // 0x002406C8: lw          $s1, 0x46C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X46C);
    // 0x002406CC: lw          $s0, 0x468($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X468);
    // 0x002406D0: jr          $ra
    // 0x002406D4: addiu       $sp, $sp, 0x490
    ctx->r29 = ADD32(ctx->r29, 0X490);
    return;
    // 0x002406D4: addiu       $sp, $sp, 0x490
    ctx->r29 = ADD32(ctx->r29, 0X490);
;}
RECOMP_FUNC void func_00458C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041FC54:
    // 0x00458C14: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0041FD20:
    // 0x00458C18: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
L_0041FD68:
    // 0x00458C1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_0041FDC4:
    // 0x00458C20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00458C24: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00458C28: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00458C2C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00458C30: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00458C34: beq         $v0, $zero, L_00458C4C
    if (ctx->r2 == 0) {
        // 0x00458C38: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_00458C4C;
    }
    // 0x00458C38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00458C3C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00458C40: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00458C44: j           L_0041FC54
    // 0x00458C48: nop

    entry_0041FC54(rdram, ctx);
    return;
    // 0x00458C48: nop

L_00458C4C:
    // 0x00458C4C: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00458C50: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00458C54: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458C58: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00458C5C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x00458C60: addiu       $t1, $t1, 0x1408
    ctx->r9 = ADD32(ctx->r9, 0X1408);
    // 0x00458C64: lwl         $v1, 0x0($t1)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r9, 0X0);
    // 0x00458C68: lwr         $v1, 0x3($t1)
    ctx->r3 = do_lwr(rdram, ctx->r3, ctx->r9, 0X3);
    // 0x00458C6C: swl         $v1, 0x10($sp)
    do_swl(rdram, 0X10, ctx->r29, ctx->r3);
    // 0x00458C70: swr         $v1, 0x13($sp)
    do_swr(rdram, 0X13, ctx->r29, ctx->r3);
    // 0x00458C74: beq         $v0, $zero, L_00458CE8
    if (ctx->r2 == 0) {
        // 0x00458C78: addiu       $s3, $sp, 0x10
        ctx->r19 = ADD32(ctx->r29, 0X10);
            goto L_00458CE8;
    }
    // 0x00458C78: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x00458C7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00458C80: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
    // 0x00458C84: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00458C88: jal         0x004266C0
    // 0x00458C8C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    entry_004266C0(rdram, ctx);
        goto after_0;
    // 0x00458C8C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00458C90: bne         $v0, $zero, L_00458DC4
    if (ctx->r2 != 0) {
        // 0x00458C94: nop
    
            goto L_00458DC4;
    }
    // 0x00458C94: nop

    // 0x00458C98: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458C9C: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00458CA0: bne         $v0, $zero, L_00458CB4
    if (ctx->r2 != 0) {
        // 0x00458CA4: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_00458CB4;
    }
    // 0x00458CA4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x00458CA8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00458CAC: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x00458CB0: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
L_00458CB4:
    // 0x00458CB4: jal         0x00426D8C
    // 0x00458CB8: nop

    func_00426D8C(rdram, ctx);
        goto after_1;
    // 0x00458CB8: nop

    after_1:
    // 0x00458CBC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00458CC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00458CC4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00458CC8: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x00458CCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00458CD0: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x00458CD4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00458CD8: jal         0x0029E3E0
    // 0x00458CDC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00458CDC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    after_2:
    // 0x00458CE0: j           L_0041FD68
    // 0x00458CE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    entry_0041FD68(rdram, ctx);
    return;
    // 0x00458CE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00458CE8:
    // 0x00458CE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458CEC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00458CF0: beq         $v0, $zero, L_00458D08
    if (ctx->r2 == 0) {
        // 0x00458CF4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_00458D08;
    }
    // 0x00458CF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00458CF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00458CFC: addiu       $v0, $v0, 0x4914
    ctx->r2 = ADD32(ctx->r2, 0X4914);
    // 0x00458D00: j           L_0041FD20
    // 0x00458D04: nop

    entry_0041FD20(rdram, ctx);
    return;
    // 0x00458D04: nop

L_00458D08:
    // 0x00458D08: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00458D0C: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00458D10: beq         $v0, $zero, L_00458DB8
    if (ctx->r2 == 0) {
        // 0x00458D14: nop
    
            goto L_00458DB8;
    }
    // 0x00458D14: nop

    // 0x00458D18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00458D1C: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
    // 0x00458D20: jal         0x004266C0
    // 0x00458D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_004266C0(rdram, ctx);
        goto after_3;
    // 0x00458D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_3:
    // 0x00458D28: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00458D2C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x00458D30: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00458D34: jal         0x00426D8C
    // 0x00458D38: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426D8C(rdram, ctx);
        goto after_4;
    // 0x00458D38: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_4:
    // 0x00458D3C: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x00458D40: bne         $s0, $zero, L_00458DC4
    if (ctx->r16 != 0) {
        // 0x00458D44: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_00458DC4;
    }
    // 0x00458D44: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00458D48: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00458D4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00458D50: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00458D54: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x00458D58: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00458D5C: jal         0x0029E3E0
    // 0x00458D60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x00458D60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00458D64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00458D68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00458D6C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x00458D70: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00458D74: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x00458D78: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x00458D7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00458D80: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x00458D84: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x00458D88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00458D8C: jal         0x0029E3E0
    // 0x00458D90: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_0029E3E0(rdram, ctx);
        goto after_6;
    // 0x00458D90: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x00458D94: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x00458D98: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x00458D9C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x00458DA0: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x00458DA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00458DA8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x00458DAC: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x00458DB0: j           L_0041FDC4
    // 0x00458DB4: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    entry_0041FDC4(rdram, ctx);
    return;
    // 0x00458DB4: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_00458DB8:
    // 0x00458DB8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00458DBC: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x00458DC0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00458DC4:
    // 0x00458DC4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00458DC8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00458DCC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00458DD0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00458DD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00458DD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00458DDC: jr          $ra
    // 0x00458DE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00458DE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045B57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004225D0:
    // 0x0045B57C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045B580: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B584: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x0045B588: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0045B58C: beq         $v0, $zero, L_0045B5B8
    if (ctx->r2 == 0) {
        // 0x0045B590: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0045B5B8;
    }
    // 0x0045B590: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045B594: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045B598: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045B59C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045B5A0: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x0045B5A4: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x0045B5A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045B5AC: addiu       $a1, $a1, -0x4A38
    ctx->r5 = ADD32(ctx->r5, -0X4A38);
    // 0x0045B5B0: j           L_004225D0
    // 0x0045B5B4: nop

    entry_004225D0(rdram, ctx);
    return;
    // 0x0045B5B4: nop

L_0045B5B8:
    // 0x0045B5B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0045B5BC: lw          $a1, 0x24($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X24);
    // 0x0045B5C0: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x0045B5C4: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x0045B5C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0045B5CC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045B5D0: jal         0x00416644
    // 0x0045B5D4: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0045B5D4: nop

    after_0:
    // 0x0045B5D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045B5DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045B5E0: jr          $ra
    // 0x0045B5E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045B5E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002564C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002564C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002564C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002564CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002564D0: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x002564D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002564D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002564DC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x002564E0: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x002564E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002564E8: lwc1        $f0, 0x71CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71CC);
    // 0x002564EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002564F0: lh          $v1, 0xA0A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA0A);
    // 0x002564F4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002564F8: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x002564FC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00256500: bne         $v1, $v0, L_0025656C
    if (ctx->r3 != ctx->r2) {
        // 0x00256504: swc1        $f0, 0x1A4($s1)
        MEM_W(0X1A4, ctx->r17) = ctx->f0.u32l;
            goto L_0025656C;
    }
    // 0x00256504: swc1        $f0, 0x1A4($s1)
    MEM_W(0X1A4, ctx->r17) = ctx->f0.u32l;
    // 0x00256508: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0025650C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256510: lwc1        $f20, 0x71D0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X71D0);
    // 0x00256514: jal         0x002982F0
    // 0x00256518: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00256518: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_0:
    // 0x0025651C: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00256520: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x00256524: jal         0x002974C0
    // 0x00256528: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00256528: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x0025652C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256530: lwc1        $f1, 0x71D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71D4);
    // 0x00256534: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00256538: nop

    // 0x0025653C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00256540: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00256544: add.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x00256548: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x0025654C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00256550: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00256554: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x00256558: swc1        $f1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025655C: lwc1        $f1, 0xACC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XACC);
    // 0x00256560: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00256564: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x00256568: sw          $zero, 0xACC($s1)
    MEM_W(0XACC, ctx->r17) = 0;
L_0025656C:
    // 0x0025656C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00256570: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00256574: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00256578: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0025657C: jr          $ra
    // 0x00256580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00256580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042D120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0042D124: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042D128: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042D12C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042D130: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042D134: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042D138: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042D13C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // turok2: reconnected split function: a stray ELF symbol at 0x0042D140 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042D140(rdram, ctx);
;}
RECOMP_FUNC void func_0025AC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AC04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AC08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AC0C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AC10: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025AC14: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AC18: addiu       $a2, $a2, 0x540
    ctx->r6 = ADD32(ctx->r6, 0X540);
    // 0x0025AC1C: jal         0x00245A98
    // 0x0025AC20: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AC20: nop

    after_0:
    // 0x0025AC24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AC28: jr          $ra
    // 0x0025AC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00271A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271A10: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00271A14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271A18: lwc1        $f2, -0x7F20($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7F20);
    // 0x00271A1C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00271A20: nop

    // 0x00271A24: bc1t        L_00271A44
    if (c1cs) {
        // 0x00271A28: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00271A44;
    }
    // 0x00271A28: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00271A2C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00271A30: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00271A34: nop

    // 0x00271A38: bc1t        L_00271A54
    if (c1cs) {
        // 0x00271A3C: nop
    
            goto L_00271A54;
    }
    // 0x00271A3C: nop

    // 0x00271A40: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_00271A44:
    // 0x00271A44: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00271A48: nop

    // 0x00271A4C: bc1tl       L_00271A54
    if (c1cs) {
        // 0x00271A50: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_00271A54;
    }
    goto skip_0;
    // 0x00271A50: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_0:
L_00271A54:
    // 0x00271A54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271A58: lwc1        $f0, -0x7F1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F1C);
    // 0x00271A5C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00271A60: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00271A64: swc1        $f3, 0x2B9C($a0)
    MEM_W(0X2B9C, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00271A68: jr          $ra
    // 0x00271A6C: nop

    return;
    // 0x00271A6C: nop

;}
RECOMP_FUNC void func_0022828C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022828C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00228290: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00228294: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00228298: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0022829C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002282A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002282A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002282A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002282AC: lw          $s0, 0x5314($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X5314);
    // 0x002282B0: beq         $s0, $zero, L_002283DC
    if (ctx->r16 == 0) {
        // 0x002282B4: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_002283DC;
    }
    // 0x002282B4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x002282B8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x002282BC: addiu       $s1, $s1, 0x5A1C
    ctx->r17 = ADD32(ctx->r17, 0X5A1C);
L_002282C0:
    // 0x002282C0: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x002282C4: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x002282C8: lw          $s2, 0x28C($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X28C);
    // 0x002282CC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002282D0: nop

    // 0x002282D4: bc1f        L_00228354
    if (!c1cs) {
        // 0x002282D8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00228354;
    }
    // 0x002282D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002282DC: lwc1        $f1, -0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0XC);
    // 0x002282E0: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x002282E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002282E8: nop

    // 0x002282EC: bc1f        L_00228354
    if (!c1cs) {
        // 0x002282F0: nop
    
            goto L_00228354;
    }
    // 0x002282F0: nop

    // 0x002282F4: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x002282F8: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x002282FC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00228300: nop

    // 0x00228304: bc1f        L_00228354
    if (!c1cs) {
        // 0x00228308: nop
    
            goto L_00228354;
    }
    // 0x00228308: nop

    // 0x0022830C: lwc1        $f1, -0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X4);
    // 0x00228310: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x00228314: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00228318: nop

    // 0x0022831C: bc1f        L_00228354
    if (!c1cs) {
        // 0x00228320: nop
    
            goto L_00228354;
    }
    // 0x00228320: nop

    // 0x00228324: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00228328: lwc1        $f0, 0xC0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x0022832C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00228330: nop

    // 0x00228334: bc1f        L_00228354
    if (!c1cs) {
        // 0x00228338: nop
    
            goto L_00228354;
    }
    // 0x00228338: nop

    // 0x0022833C: lwc1        $f1, -0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X8);
    // 0x00228340: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x00228344: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00228348: nop

    // 0x0022834C: bc1tl       L_00228354
    if (c1cs) {
        // 0x00228350: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00228354;
    }
    goto skip_0;
    // 0x00228350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_00228354:
    // 0x00228354: beq         $v0, $zero, L_00228390
    if (ctx->r2 == 0) {
        // 0x00228358: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00228390;
    }
    // 0x00228358: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0022835C: jal         0x002255CC
    // 0x00228360: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002255CC(rdram, ctx);
        goto after_0;
    // 0x00228360: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00228364: lw          $v1, 0x290($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X290);
    // 0x00228368: beql        $v1, $zero, L_002283D4
    if (ctx->r3 == 0) {
        // 0x0022836C: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_002283D4;
    }
    goto skip_1;
    // 0x0022836C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_1:
    // 0x00228370: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00228374: bnel        $v0, $zero, L_002283D4
    if (ctx->r2 != 0) {
        // 0x00228378: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_002283D4;
    }
    goto skip_2;
    // 0x00228378: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_2:
    // 0x0022837C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00228380: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00228384: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00228388: j           L_002283D0
    // 0x0022838C: sw          $zero, 0x290($s0)
    MEM_W(0X290, ctx->r16) = 0;
        goto L_002283D0;
    // 0x0022838C: sw          $zero, 0x290($s0)
    MEM_W(0X290, ctx->r16) = 0;
L_00228390:
    // 0x00228390: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00228394: lw          $a0, 0x290($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X290);
    // 0x00228398: addiu       $v1, $zero, -0x201
    ctx->r3 = ADD32(0, -0X201);
    // 0x0022839C: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x002283A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002283A4: beq         $a0, $zero, L_002283B8
    if (ctx->r4 == 0) {
        // 0x002283A8: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_002283B8;
    }
    // 0x002283A8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x002283AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002283B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002283B4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_002283B8:
    // 0x002283B8: addiu       $a0, $s3, 0x5314
    ctx->r4 = ADD32(ctx->r19, 0X5314);
    // 0x002283BC: jal         0x00200738
    // 0x002283C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x002283C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002283C4: addiu       $a0, $s3, 0x5300
    ctx->r4 = ADD32(ctx->r19, 0X5300);
    // 0x002283C8: jal         0x00200574
    // 0x002283CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x002283CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_002283D0:
    // 0x002283D0: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_002283D4:
    // 0x002283D4: bne         $s0, $zero, L_002282C0
    if (ctx->r16 != 0) {
        // 0x002283D8: nop
    
            goto L_002282C0;
    }
    // 0x002283D8: nop

L_002283DC:
    // 0x002283DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002283E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002283E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002283E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002283EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002283F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002283F4: jr          $ra
    // 0x002283F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002283F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00451804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451804: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00451808: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045180C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00451810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00451814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451818: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045181C: lw          $a1, 0x1EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1EA8);
    // 0x00451820: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451824: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00451828: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
    // 0x0045182C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00451830: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00451834: jal         0x0041648C
    // 0x00451838: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451838: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x0045183C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x00451840: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00451844: sw          $v0, 0x1EA8($at)
    MEM_W(0X1EA8, ctx->r1) = ctx->r2;
    // 0x00451848: jal         0x00285670
    // 0x0045184C: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0045184C: nop

    after_1:
    // 0x00451850: bne         $v0, $zero, L_0045186C
    if (ctx->r2 != 0) {
        // 0x00451854: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045186C;
    }
    // 0x00451854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00451858: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x0045185C: jal         0x002855E8
    // 0x00451860: nop

    func_002855E8(rdram, ctx);
        goto after_2;
    // 0x00451860: nop

    after_2:
    // 0x00451864: beq         $v0, $zero, L_00451888
    if (ctx->r2 == 0) {
        // 0x00451868: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00451888;
    }
    // 0x00451868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0045186C:
    // 0x0045186C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451870: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451874: lw          $a1, 0x1EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1EA8);
    // 0x00451878: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0045187C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00451880: jal         0x0041648C
    // 0x00451884: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_3;
    // 0x00451884: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_00451888:
    // 0x00451888: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045188C: lw          $v0, 0x1EA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EA8);
    // 0x00451890: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00451894: lwc1        $f0, 0xF34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF34);
    // 0x00451898: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045189C: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x004518A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004518A4: lwc1        $f1, -0x77DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X77DC);
    // 0x004518A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004518AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004518B0: lwc1        $f0, 0xF38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XF38);
    // 0x004518B4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004518B8: nop

    // 0x004518BC: bc1tl       L_004518EC
    if (c1cs) {
        // 0x004518C0: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_004518EC;
    }
    goto skip_0;
    // 0x004518C0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
    // 0x004518C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004518C8: lwc1        $f2, 0xF3C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XF3C);
    // 0x004518CC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x004518D0: nop

    // 0x004518D4: bc1tl       L_004518EC
    if (c1cs) {
        // 0x004518D8: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_004518EC;
    }
    goto skip_1;
    // 0x004518D8: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_1:
    // 0x004518DC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004518E0: nop

    // 0x004518E4: bc1tl       L_004518EC
    if (c1cs) {
        // 0x004518E8: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_004518EC;
    }
    goto skip_2;
    // 0x004518E8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_2:
L_004518EC:
    // 0x004518EC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004518F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004518F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004518F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004518FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00451900: swc1        $f1, -0x550C($at)
    MEM_W(-0X550C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00451904: jr          $ra
    // 0x00451908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00451908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002555C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002555C4: jr          $ra
    // 0x002555C8: nop

    return;
    // 0x002555C8: nop

;}
RECOMP_FUNC void func_002943E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002943E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002943E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002943E8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x002943EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002943F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002943F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002943F8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002943FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00294400: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00294404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294408: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0029440C: beq         $v0, $zero, L_00294478
    if (ctx->r2 == 0) {
        // 0x00294410: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_00294478;
    }
    // 0x00294410: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00294414: jal         0x00294B58
    // 0x00294418: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294418: nop

    after_0:
    // 0x0029441C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00294420: beq         $s0, $zero, L_00294478
    if (ctx->r16 == 0) {
        // 0x00294424: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00294478;
    }
    // 0x00294424: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00294428: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029442C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294430: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x00294434: lw          $a2, 0xD8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XD8);
    // 0x00294438: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0029443C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x00294440: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x00294444: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00294448: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0029444C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00294450: jal         0x00294C30
    // 0x00294454: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    func_00294C30(rdram, ctx);
        goto after_1;
    // 0x00294454: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    after_1:
    // 0x00294458: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0029445C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00294460: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00294464: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00294468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0029446C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00294470: jalr        $v0
    // 0x00294474: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00294474: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_00294478:
    // 0x00294478: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0029447C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00294480: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00294484: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294488: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029448C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294490: jr          $ra
    // 0x00294494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00294494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045FBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426C50:
    // 0x0045FBF4: blez        $a2, L_0045FC6C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0045FBF8: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_0045FC6C;
    }
    // 0x0045FBF8: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x0045FBFC: addiu       $t3, $zero, 0x42
    ctx->r11 = ADD32(0, 0X42);
L_0045FC00:
    // 0x0045FC00: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FC04: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x0045FC08: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x0045FC0C: bnel        $v0, $zero, L_0045FC14
    if (ctx->r2 != 0) {
        // 0x0045FC10: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_0045FC14;
    }
    goto skip_0;
    // 0x0045FC10: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_0:
L_0045FC14:
    // 0x0045FC14: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x0045FC18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0045FC1C: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0045FC20: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
L_0045FC24:
    // 0x0045FC24: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x0045FC28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045FC2C: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x0045FC30: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x0045FC34: bnel        $v1, $v0, L_0045FC44
    if (ctx->r3 != ctx->r2) {
        // 0x0045FC38: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0045FC44;
    }
    goto skip_1;
    // 0x0045FC38: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x0045FC3C: j           L_00426C50
    // 0x0045FC40: sb          $a3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r7;
    entry_00426C50(rdram, ctx);
    return;
    // 0x0045FC40: sb          $a3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r7;
L_0045FC44:
    // 0x0045FC44: slti        $v0, $a3, 0x42
    ctx->r2 = SIGNED(ctx->r7) < 0X42 ? 1 : 0;
    // 0x0045FC48: bne         $v0, $zero, L_0045FC24
    if (ctx->r2 != 0) {
        // 0x0045FC4C: nop
    
            goto L_0045FC24;
    }
    // 0x0045FC4C: nop

    // 0x0045FC50: beql        $a3, $t3, L_0045FC58
    if (ctx->r7 == ctx->r11) {
        // 0x0045FC54: sb          $zero, 0x0($a1)
        MEM_B(0X0, ctx->r5) = 0;
            goto L_0045FC58;
    }
    goto skip_2;
    // 0x0045FC54: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    skip_2:
L_0045FC58:
    // 0x0045FC58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FC5C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x0045FC60: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0045FC64: bne         $v0, $zero, L_0045FC00
    if (ctx->r2 != 0) {
        // 0x0045FC68: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045FC00;
    }
    // 0x0045FC68: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_0045FC6C:
    // 0x0045FC6C: jr          $ra
    // 0x0045FC70: nop

    return;
    // 0x0045FC70: nop

;}
RECOMP_FUNC void func_00216464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00216464: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00216468: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0021646C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00216470: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00216474: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00216478: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0021647C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00216480: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00216484: sdc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X50, ctx->r29);
    // 0x00216488: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0021648C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00216490: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00216494: lw          $v1, 0x6798($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6798);
    // 0x00216498: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0021649C: beq         $v1, $zero, L_002164D8
    if (ctx->r3 == 0) {
        // 0x002164A0: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_002164D8;
    }
    // 0x002164A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x002164A4: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x002164A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002164AC: jal         0x00217C58
    // 0x002164B0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_00217C58(rdram, ctx);
        goto after_0;
    // 0x002164B0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x002164B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002164B8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x002164BC: jal         0x00217C58
    // 0x002164C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_00217C58(rdram, ctx);
        goto after_1;
    // 0x002164C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x002164C4: lwc1        $f21, 0x24($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x002164C8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x002164CC: lwc1        $f20, 0x28($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X28);
    // 0x002164D0: j           L_00216590
    // 0x002164D4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
        goto L_00216590;
    // 0x002164D4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_002164D8:
    // 0x002164D8: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x002164DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002164E0: jal         0x00217C58
    // 0x002164E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217C58(rdram, ctx);
        goto after_2;
    // 0x002164E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x002164E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002164EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x002164F0: jal         0x00217C58
    // 0x002164F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_00217C58(rdram, ctx);
        goto after_3;
    // 0x002164F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x002164F8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x002164FC: mtc1        $v1, $f12
    ctx->f12.u32l = ctx->r3;
    // 0x00216500: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00216504: bgez        $v1, L_00216518
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00216508: sw          $v0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r2;
            goto L_00216518;
    }
    // 0x00216508: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0021650C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216510: ldc1        $f0, 0x5958($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5958);
    // 0x00216514: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00216518:
    // 0x00216518: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0021651C: jal         0x00217AD4
    // 0x00216520: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217AD4(rdram, ctx);
        goto after_4;
    // 0x00216520: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_4:
    // 0x00216524: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x00216528: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0021652C: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00216530: bgez        $v0, L_00216544
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00216534: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_00216544;
    }
    // 0x00216534: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00216538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021653C: ldc1        $f0, 0x5960($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5960);
    // 0x00216540: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00216544:
    // 0x00216544: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00216548: jal         0x00217AD4
    // 0x0021654C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217AD4(rdram, ctx);
        goto after_5;
    // 0x0021654C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x00216550: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00216554: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00216558: lwc1        $f14, 0x679C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X679C);
    // 0x0021655C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00216560: lw          $a2, 0x67A0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X67A0);
    // 0x00216564: jal         0x00217AF0
    // 0x00216568: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_00217AF0(rdram, ctx);
        goto after_6;
    // 0x00216568: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
    // 0x0021656C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00216570: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00216574: lwc1        $f14, 0x679C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X679C);
    // 0x00216578: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0021657C: lw          $a2, 0x67A0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X67A0);
    // 0x00216580: jal         0x00217AF0
    // 0x00216584: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_00217AF0(rdram, ctx);
        goto after_7;
    // 0x00216584: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_7:
    // 0x00216588: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0021658C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_00216590:
    // 0x00216590: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x00216594: sub.s       $f0, $f20, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x00216598: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021659C: swc1        $f21, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x002165A0: jal         0x00217C58
    // 0x002165A4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00217C58(rdram, ctx);
        goto after_8;
    // 0x002165A4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x002165A8: blez        $s2, L_002165D8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x002165AC: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_002165D8;
    }
    // 0x002165AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_002165B0:
    // 0x002165B0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002165B4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x002165B8: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x002165BC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x002165C0: jal         0x00218020
    // 0x002165C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00218020(rdram, ctx);
        goto after_9;
    // 0x002165C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_9:
    // 0x002165C8: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x002165CC: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x002165D0: bne         $v0, $zero, L_002165B0
    if (ctx->r2 != 0) {
        // 0x002165D4: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_002165B0;
    }
    // 0x002165D4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_002165D8:
    // 0x002165D8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x002165DC: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x002165E0: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002165E4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x002165E8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002165EC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002165F0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002165F4: ldc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X50);
    // 0x002165F8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x002165FC: jr          $ra
    // 0x00216600: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00216600: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0028852C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028852C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00288530: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00288534: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00288538: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028853C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00288540: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00288544: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00288548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028854C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00288550: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x00288554: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00288558: lui         $s5, 0xE700
    ctx->r21 = S32(0XE700 << 16);
    // 0x0028855C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x00288560: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00288564: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00288568: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028856C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x00288570: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00288574: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00288578: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0028857C: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x00288580: jal         0x00207FEC
    // 0x00288584: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x00288584: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    after_0:
    // 0x00288588: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x0028858C: ori         $t0, $t0, 0xA01
    ctx->r8 = ctx->r8 | 0XA01;
    // 0x00288590: lui         $a3, 0xFFFC
    ctx->r7 = S32(0XFFFC << 16);
    // 0x00288594: ori         $a3, $a3, 0xFFFC
    ctx->r7 = ctx->r7 | 0XFFFC;
    // 0x00288598: lui         $v0, 0xFF10
    ctx->r2 = S32(0XFF10 << 16);
    // 0x0028859C: andi        $s2, $s2, 0x3FF
    ctx->r18 = ctx->r18 & 0X3FF;
    // 0x002885A0: sll         $s2, $s2, 14
    ctx->r18 = S32(ctx->r18 << 14);
    // 0x002885A4: andi        $s1, $s1, 0x3FF
    ctx->r17 = ctx->r17 & 0X3FF;
    // 0x002885A8: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x002885AC: andi        $s3, $s3, 0x3FF
    ctx->r19 = ctx->r19 & 0X3FF;
    // 0x002885B0: sll         $s3, $s3, 14
    ctx->r19 = S32(ctx->r19 << 14);
    // 0x002885B4: andi        $s4, $s4, 0x3FF
    ctx->r20 = ctx->r20 & 0X3FF;
    // 0x002885B8: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x002885BC: or          $s3, $s3, $s4
    ctx->r19 = ctx->r19 | ctx->r20;
    // 0x002885C0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x002885C4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x002885C8: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x002885CC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x002885D0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002885D4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x002885D8: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x002885DC: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002885E0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x002885E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002885E8: lw          $a0, 0xA78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA78);
    // 0x002885EC: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x002885F0: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x002885F4: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x002885F8: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x002885FC: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x00288600: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00288604: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x00288608: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0028860C: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00288610: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x00288614: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00288618: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x0028861C: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x00288620: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00288624: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00288628: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x0028862C: addiu       $a3, $v1, 0x20
    ctx->r7 = ADD32(ctx->r3, 0X20);
    // 0x00288630: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x00288634: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
    // 0x00288638: or          $s2, $s2, $s1
    ctx->r18 = ctx->r18 | ctx->r17;
    // 0x0028863C: addiu       $a2, $v1, 0x28
    ctx->r6 = ADD32(ctx->r3, 0X28);
    // 0x00288640: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x00288644: sw          $s2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r18;
    // 0x00288648: sw          $s3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r19;
    // 0x0028864C: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00288650: sw          $a1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r5;
    // 0x00288654: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00288658: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x0028865C: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    // 0x00288660: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00288664: lw          $a0, 0x110($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X110);
    // 0x00288668: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x0028866C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00288670: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00288674: sw          $a0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r4;
    // 0x00288678: sw          $s5, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r21;
    // 0x0028867C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00288680: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    // 0x00288684: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00288688: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028868C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00288690: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00288694: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00288698: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028869C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002886A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002886A4: jr          $ra
    // 0x002886A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002886A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004050E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004050E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004050E4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004050E8: addiu       $v1, $v1, -0x5F8
    ctx->r3 = ADD32(ctx->r3, -0X5F8);
    // 0x004050EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004050F0: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x004050F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004050F8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x004050FC: nop

    // 0x00405100: bc1t        L_0040527C
    if (c1cs) {
        // 0x00405104: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0040527C;
    }
    // 0x00405104: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00405108: lbu         $v0, 0x10($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10);
    // 0x0040510C: beq         $v0, $zero, L_0040527C
    if (ctx->r2 == 0) {
        // 0x00405110: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0040527C;
    }
    // 0x00405110: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00405114: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00405118: beq         $v0, $zero, L_0040527C
    if (ctx->r2 == 0) {
        // 0x0040511C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0040527C;
    }
    // 0x0040511C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00405120: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405124: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00405128: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0040512C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00405130: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405134: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00405138: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040513C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405140: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00405144: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00405148: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x0040514C: beq         $v0, $zero, L_00405278
    if (ctx->r2 == 0) {
        // 0x00405150: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00405278;
    }
    // 0x00405150: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405154: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405158: addu        $at, $at, $v0
    gpr jr_addend_00405160 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040515C: lw          $v0, 0x420($at)
    ctx->r2 = ADD32(ctx->r1, 0X420);
    // 0x00405160: jr          $v0
    // 0x00405164: nop

    switch (jr_addend_00405160 >> 2) {
        case 0: goto L_00405168; break;
        case 1: goto L_004051C0; break;
        case 2: goto L_00405210; break;
        case 3: goto L_00405278; break;
        case 4: goto L_004051FC; break;
        default: switch_error(__func__, 0x00405160, 0x800C0420);
    }
    // 0x00405164: nop

L_00405168:
    // 0x00405168: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0040516C: addiu       $a2, $a2, -0x6A8
    ctx->r6 = ADD32(ctx->r6, -0X6A8);
    // 0x00405170: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00405174: slti        $v0, $a1, 0x9
    ctx->r2 = SIGNED(ctx->r5) < 0X9 ? 1 : 0;
    // 0x00405178: beq         $v0, $zero, L_00405268
    if (ctx->r2 == 0) {
        // 0x0040517C: nop
    
            goto L_00405268;
    }
    // 0x0040517C: nop

    // 0x00405180: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405184: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00405188: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0040518C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00405190: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405194: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00405198: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040519C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004051A0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x004051A4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004051A8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x004051AC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x004051B0: bnel        $v0, $zero, L_004051B8
    if (ctx->r2 != 0) {
        // 0x004051B4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_004051B8;
    }
    goto skip_0;
    // 0x004051B4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_004051B8:
    // 0x004051B8: j           L_00405268
    // 0x004051BC: sw          $v1, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->r3;
        goto L_00405268;
    // 0x004051BC: sw          $v1, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->r3;
L_004051C0:
    // 0x004051C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004051C4: lw          $a0, -0x5EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5EC);
    // 0x004051C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004051CC: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x004051D0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x004051D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004051D8: lw          $a0, -0x5F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5F4);
    // 0x004051DC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004051E0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004051E4: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x004051E8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004051EC: addiu       $v1, $v1, -0x6AC
    ctx->r3 = ADD32(ctx->r3, -0X6AC);
    // 0x004051F0: sb          $zero, 0xC4($v1)
    MEM_B(0XC4, ctx->r3) = 0;
    // 0x004051F4: j           L_0040527C
    // 0x004051F8: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
        goto L_0040527C;
    // 0x004051F8: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
L_004051FC:
    // 0x004051FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405200: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405204: sw          $v0, -0x5EC($at)
    MEM_W(-0X5EC, ctx->r1) = ctx->r2;
    // 0x00405208: j           L_0040527C
    // 0x0040520C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0040527C;
    // 0x0040520C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00405210:
    // 0x00405210: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405214: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405218: lwc1        $f14, 0x434($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X434);
    // 0x0040521C: jal         0x002119FC
    // 0x00405220: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00405220: nop

    after_0:
    // 0x00405224: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405228: lwc1        $f1, 0x438($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X438);
    // 0x0040522C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00405230: nop

    // 0x00405234: bc1t        L_00405168
    if (c1cs) {
        // 0x00405238: nop
    
            goto L_00405168;
    }
    // 0x00405238: nop

    // 0x0040523C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405240: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00405244: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00405248: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0040524C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405250: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00405254: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405258: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040525C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00405260: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405264: sw          $v0, -0x6AC($at)
    MEM_W(-0X6AC, ctx->r1) = ctx->r2;
L_00405268:
    // 0x00405268: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040526C: sb          $zero, -0x5E8($at)
    MEM_B(-0X5E8, ctx->r1) = 0;
    // 0x00405270: j           L_0040527C
    // 0x00405274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0040527C;
    // 0x00405274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00405278:
    // 0x00405278: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0040527C:
    // 0x0040527C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00405280: jr          $ra
    // 0x00405284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00405284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00274498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274498: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027449C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002744A0: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x002744A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002744A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002744AC: lwc1        $f2, 0x284C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X284C);
    // 0x002744B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002744B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002744B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002744BC: lwc1        $f1, 0x284C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X284C);
    // 0x002744C0: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x002744C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002744C8: jr          $ra
    // 0x002744CC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    return;
    // 0x002744CC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_0041A44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A44C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041A450: lwc1        $f1, -0x5340($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5340);
    // 0x0041A454: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0041A458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A45C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041A460: nop

    // 0x0041A464: bc1t        L_0041A474
    if (c1cs) {
        // 0x0041A468: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0041A474;
    }
    // 0x0041A468: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A46C: j           L_0041A488
    // 0x0041A470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041A488;
    // 0x0041A470: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041A474:
    // 0x0041A474: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A478: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A47C: jal         0x00430330
    // 0x0041A480: nop

    func_00430330(rdram, ctx);
        goto after_0;
    // 0x0041A480: nop

    after_0:
    // 0x0041A484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041A488:
    // 0x0041A488: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A48C: jr          $ra
    // 0x0041A490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00407F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407F14: cvt.s.w     $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f7.fl = CVT_S_W(ctx->f_odd[(7 - 1) * 2]);
    // 0x00407F18: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x00407F1C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
;}
RECOMP_FUNC void func_002886AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002886AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002886B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002886B4: jal         0x002857C8
    // 0x002886B8: nop

    func_002857C8(rdram, ctx);
        goto after_0;
    // 0x002886B8: nop

    after_0:
    // 0x002886BC: jal         0x0027BB80
    // 0x002886C0: nop

    func_0027BB80(rdram, ctx);
        goto after_1;
    // 0x002886C0: nop

    after_1:
    // 0x002886C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002886C8: jr          $ra
    // 0x002886CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002886CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045F940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004269A4:
    // 0x0045F940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045F944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045F948: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0045F94C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0045F950: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F954: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F958: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F95C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F960: bne         $v1, $v0, L_0045F9A0
    if (ctx->r3 != ctx->r2) {
        // 0x0045F964: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045F9A0;
    }
    // 0x0045F964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045F968: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x0045F96C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045F970: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045F974: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x0045F978: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045F97C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045F980: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x0045F984: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045F988: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0045F98C: jal         0x00426D8C
    // 0x0045F990: nop

    func_00426D8C(rdram, ctx);
        goto after_0;
    // 0x0045F990: nop

    after_0:
    // 0x0045F994: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0045F998: j           L_004269A4
    // 0x0045F99C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_004269A4(rdram, ctx);
    return;
    // 0x0045F99C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045F9A0:
    // 0x0045F9A0: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0045F9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045F9A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045F9AC: jr          $ra
    // 0x0045F9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045F9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029DDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DDF8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0029DDFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
;}
RECOMP_FUNC void func_00285878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028587C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00285880: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00285884: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00285888: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028588C: jal         0x0029B6F0
    // 0x00285890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00285890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00285894: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00285898: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0028589C: jr          $ra
    // 0x002858A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002858A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00407284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407284: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00407288: addiu       $a2, $a2, -0x624
    ctx->r6 = ADD32(ctx->r6, -0X624);
    // 0x0040728C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00407290: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00407294: beq         $v1, $v0, L_004072AC
    if (ctx->r3 == ctx->r2) {
        // 0x00407298: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_004072AC;
    }
    // 0x00407298: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0040729C: beq         $v1, $a1, L_004072B4
    if (ctx->r3 == ctx->r5) {
        // 0x004072A0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_004072B4;
    }
    // 0x004072A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004072A4: bnel        $v1, $v0, L_004072B8
    if (ctx->r3 != ctx->r2) {
        // 0x004072A8: sw          $a1, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->r5;
            goto L_004072B8;
    }
    goto skip_0;
    // 0x004072A8: sw          $a1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r5;
    skip_0:
L_004072AC:
    // 0x004072AC: j           L_004072B8
    // 0x004072B0: sw          $v1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r3;
        goto L_004072B8;
    // 0x004072B0: sw          $v1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r3;
L_004072B4:
    // 0x004072B4: sw          $a1, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->r5;
L_004072B8:
    // 0x004072B8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004072BC: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004072C0: jr          $ra
    // 0x004072C4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004072C4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0045DAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
