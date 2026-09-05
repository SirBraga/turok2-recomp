#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0020F6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020F6C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0020F6C4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0020F6C8: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F6CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F6D0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020F6D4: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0020F6D8: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F6DC: sub.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x0020F6E0: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0020F6E4: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020F6E8: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0020F6EC: sub.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f1.fl;
    // 0x0020F6F0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020F6F4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020F6F8: jal         0x00298470
    // 0x0020F6FC: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020F6FC: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_0:
    // 0x0020F700: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0020F704: jr          $ra
    // 0x0020F708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020F708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0045FE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FE40: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FE44: beq         $v0, $zero, L_0045FE5C
    if (ctx->r2 == 0) {
        // 0x0045FE48: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0045FE5C;
    }
    // 0x0045FE48: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0045FE4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0045FE50:
    // 0x0045FE50: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FE54: bnel        $v0, $zero, L_0045FE50
    if (ctx->r2 != 0) {
        // 0x0045FE58: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045FE50;
    }
    goto skip_0;
    // 0x0045FE58: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_0045FE5C:
    // 0x0045FE5C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FE60: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FE64: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0045FE68: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045FE6C: bne         $v0, $zero, L_0045FE5C
    if (ctx->r2 != 0) {
        // 0x0045FE70: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045FE5C;
    }
    // 0x0045FE70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045FE74: jr          $ra
    // 0x0045FE78: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0045FE78: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00271BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271BA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00271BAC: bne         $a1, $v0, L_00271BC4
    if (ctx->r5 != ctx->r2) {
            // 0x00271BB0: addiu       $a0, $a0, 0x1DBC
    ctx->r4 = ADD32(ctx->r4, 0X1DBC);
    func_00271BC4(rdram, ctx);
    return;
    }
    // 0x00271BB0: addiu       $a0, $a0, 0x1DBC
    ctx->r4 = ADD32(ctx->r4, 0X1DBC);
    // 0x00271BB4: jr          $ra
    // 0x00271BB8: nop

    return;
    // 0x00271BB8: nop

;}
RECOMP_FUNC void func_00238134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238134: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00238138: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023813C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x00238140: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x00238144: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00238148: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0023814C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00238150: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x00238154: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00238158: jal         0x00246690
    // 0x0023815C: nop

    func_00246690(rdram, ctx);
        goto after_0;
    // 0x0023815C: nop

    after_0:
    // 0x00238160: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00238164: jr          $ra
    // 0x00238168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00238168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029DFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DFB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0029DFBC: lwc1        $f14, 0x7C6C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7C6C);
;}
RECOMP_FUNC void func_0045A574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A574: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x0045A578: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045A57C: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x0045A580: beq         $v1, $v0, L_0045A598
    if (ctx->r3 == ctx->r2) {
        // 0x0045A584: nop
    
            goto L_0045A598;
    }
    // 0x0045A584: nop

    // 0x0045A588: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045A58C: addiu       $v0, $v0, -0x4210
    ctx->r2 = ADD32(ctx->r2, -0X4210);
    // 0x0045A590: bne         $v1, $v0, L_0045A5A8
    if (ctx->r3 != ctx->r2) {
            // 0x0045A594: nop

    func_0045A5A8(rdram, ctx);
    return;
    }
    // 0x0045A594: nop

L_0045A598:
    // 0x0045A598: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A59C: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0045A5A0: jr          $ra
    // 0x0045A5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0045A5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00257A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257A10: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00257A14: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
L_00257A18:
    // 0x00257A18: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00257A1C: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00257A20: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00257A24: bne         $v0, $a2, L_00257A34
    if (ctx->r2 != ctx->r6) {
        // 0x00257A28: nop
    
            goto L_00257A34;
    }
    // 0x00257A28: nop

    // 0x00257A2C: bgtz        $a1, L_00257A18
    if (SIGNED(ctx->r5) > 0) {
        // 0x00257A30: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00257A18;
    }
    // 0x00257A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00257A34:
    // 0x00257A34: jr          $ra
    // 0x00257A38: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00257A38: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0025F928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F928: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025F92C: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x0025F930: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025F934: beql        $v0, $zero, L_0025F93C
    if (ctx->r2 == 0) {
        // 0x0025F938: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025F93C;
    }
    goto skip_0;
    // 0x0025F938: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025F93C:
    // 0x0025F93C: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    // 0x0025F940: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025F944: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F948: lwc1        $f0, 0x792C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X792C);
    // 0x0025F94C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025F950: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025F954: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F95C: lwc1        $f0, 0x7930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7930);
    // 0x0025F960: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F964: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F968: lwc1        $f1, 0x7934($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7934);
    // 0x0025F96C: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025F970: jr          $ra
    // 0x0025F974: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0025F974: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0028CE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CE84: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x0028CE88: addiu       $v0, $zero, -0x800
    ctx->r2 = ADD32(0, -0X800);
    // 0x0028CE8C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x0028CE90: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0028CE94: andi        $a1, $a1, 0x7C0
    ctx->r5 = ctx->r5 & 0X7C0;
    // 0x0028CE98: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x0028CE9C: sra         $a2, $a2, 2
    ctx->r6 = S32(SIGNED(ctx->r6) >> 2);
    // 0x0028CEA0: andi        $a2, $a2, 0x3E
    ctx->r6 = ctx->r6 & 0X3E;
    // 0x0028CEA4: or          $a0, $a0, $a2
    ctx->r4 = ctx->r4 | ctx->r6;
    // 0x0028CEA8: ori         $a0, $a0, 0x1
    ctx->r4 = ctx->r4 | 0X1;
    // 0x0028CEAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028CEB0: sh          $a0, 0x7498($at)
    MEM_H(0X7498, ctx->r1) = ctx->r4;
    // 0x0028CEB4: jr          $ra
    // 0x0028CEB8: nop

    return;
    // 0x0028CEB8: nop

;}
RECOMP_FUNC void func_002101A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002101A0: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x002101A4: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x002101A8: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x002101AC: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x002101B0: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x002101B4: jr          $ra
    // 0x002101B8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x002101B8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_002A0044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A0044: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x002A0048: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x002A004C: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x002A0050: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x002A0054: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x002A0058: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x002A005C: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
    // 0x002A0060: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x002A0064: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002A0068: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x002A006C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x002A0070: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x002A0074: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x002A0078: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x002A007C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x002A0080: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x002A0084: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002A0088: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x002A008C: lw          $s3, 0x10($t2)
    ctx->r19 = MEM_W(ctx->r10, 0X10);
    // 0x002A0090: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0094: lw          $s4, 0x20($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X20);
    // 0x002A0098: blez        $v1, L_002A0410
    if (SIGNED(ctx->r3) <= 0) {
        // 0x002A009C: addu        $s1, $s5, $zero
        ctx->r17 = ADD32(ctx->r21, 0);
            goto L_002A0410;
    }
    // 0x002A009C: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x002A00A0: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x002A00A4: addiu       $fp, $fp, -0x7454
    ctx->r30 = ADD32(ctx->r30, -0X7454);
    // 0x002A00A8: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x002A00AC: addiu       $s7, $s7, -0x7456
    ctx->r23 = ADD32(ctx->r23, -0X7456);
    // 0x002A00B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002A00B4: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
L_002A00B8:
    // 0x002A00B8: lhu         $v1, 0x0($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X0);
    // 0x002A00BC: beq         $v1, $zero, L_002A03A4
    if (ctx->r3 == 0) {
        // 0x002A00C0: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_002A03A4;
    }
    // 0x002A00C0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002A00C4: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x002A00C8: sh          $v1, 0x0($fp)
    MEM_H(0X0, ctx->r30) = ctx->r3;
    // 0x002A00CC: andi        $v1, $v0, 0x8000
    ctx->r3 = ctx->r2 & 0X8000;
    // 0x002A00D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002A00D4: beq         $v1, $zero, L_002A00F4
    if (ctx->r3 == 0) {
        // 0x002A00D8: sh          $v0, 0x0($s7)
        MEM_H(0X0, ctx->r23) = ctx->r2;
            goto L_002A00F4;
    }
    // 0x002A00D8: sh          $v0, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r2;
    // 0x002A00DC: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x002A00E0: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x002A00E4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x002A00E8: lhu         $a0, 0x2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2);
    // 0x002A00EC: j           L_002A0108
    // 0x002A00F0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
        goto L_002A0108;
    // 0x002A00F0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_002A00F4:
    // 0x002A00F4: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x002A00F8: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x002A00FC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x002A0100: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x002A0104: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_002A0108:
    // 0x002A0108: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x002A010C: addu        $a1, $v0, $s4
    ctx->r5 = ADD32(ctx->r2, ctx->r20);
    // 0x002A0110: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x002A0114: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x002A0118: bne         $v1, $v0, L_002A03FC
    if (ctx->r3 != ctx->r2) {
        // 0x002A011C: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_002A03FC;
    }
    // 0x002A011C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002A0120: lhu         $s0, 0x2($a1)
    ctx->r16 = MEM_HU(ctx->r5, 0X2);
    // 0x002A0124: andi        $a0, $s0, 0xF00
    ctx->r4 = ctx->r16 & 0XF00;
    // 0x002A0128: beq         $a0, $zero, L_002A013C
    if (ctx->r4 == 0) {
        // 0x002A012C: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_002A013C;
    }
    // 0x002A012C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x002A0130: addiu       $v0, $zero, 0xF00
    ctx->r2 = ADD32(0, 0XF00);
    // 0x002A0134: bne         $a0, $v0, L_002A0154
    if (ctx->r4 != ctx->r2) {
        // 0x002A0138: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_002A0154;
    }
    // 0x002A0138: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_002A013C:
    // 0x002A013C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x002A0140: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x002A0144: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x002A0148: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x002A014C: j           L_002A0334
    // 0x002A0150: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_002A0334;
    // 0x002A0150: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_002A0154:
    // 0x002A0154: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0158: addiu       $v1, $zero, 0x900
    ctx->r3 = ADD32(0, 0X900);
    // 0x002A015C: bne         $v0, $v1, L_002A01E0
    if (ctx->r2 != ctx->r3) {
        // 0x002A0160: addiu       $v0, $zero, 0xA00
        ctx->r2 = ADD32(0, 0XA00);
            goto L_002A01E0;
    }
    // 0x002A0160: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x002A0164: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x002A0168: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A016C: lhu         $s0, 0x0($s7)
    ctx->r16 = MEM_HU(ctx->r23, 0X0);
    // 0x002A0170: lhu         $a1, 0xE($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0XE);
    // 0x002A0174: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x002A0178: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A017C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x002A0180: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x002A0184: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x002A0188: jal         0x0029FE70
    // 0x002A018C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_0029FE70(rdram, ctx);
        goto after_0;
    // 0x002A018C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x002A0190: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x002A0194: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x002A0198: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x002A019C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x002A01A0: beq         $v0, $zero, L_002A03E8
    if (ctx->r2 == 0) {
        // 0x002A01A4: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_002A03E8;
    }
    // 0x002A01A4: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x002A01A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A01AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x002A01B0: sra         $a0, $a0, 15
    ctx->r4 = S32(SIGNED(ctx->r4) >> 15);
    // 0x002A01B4: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x002A01B8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x002A01BC: lhu         $a1, -0x7454($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X7454);
    // 0x002A01C0: lhu         $v1, 0x0($s7)
    ctx->r3 = MEM_HU(ctx->r23, 0X0);
    // 0x002A01C4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x002A01C8: sllv        $v0, $v1, $v0
    ctx->r2 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x002A01CC: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x002A01D0: or          $v1, $s0, $v1
    ctx->r3 = ctx->r16 | ctx->r3;
    // 0x002A01D4: sh          $v0, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r2;
    // 0x002A01D8: j           L_002A0334
    // 0x002A01DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_002A0334;
    // 0x002A01DC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_002A01E0:
    // 0x002A01E0: bne         $a0, $v0, L_002A0270
    if (ctx->r4 != ctx->r2) {
        // 0x002A01E4: addiu       $v0, $zero, 0xB00
        ctx->r2 = ADD32(0, 0XB00);
            goto L_002A0270;
    }
    // 0x002A01E4: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
    // 0x002A01E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002A01EC: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x002A01F0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x002A01F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002A01F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002A01FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002A0200: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002A0204: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x002A0208: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x002A020C: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x002A0210: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x002A0214: lw          $v0, 0x1A0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1A0);
    // 0x002A0218: blez        $v0, L_002A0260
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002A021C: addu        $a3, $v1, $t1
        ctx->r7 = ADD32(ctx->r3, ctx->r9);
            goto L_002A0260;
    }
    // 0x002A021C: addu        $a3, $v1, $t1
    ctx->r7 = ADD32(ctx->r3, ctx->r9);
    // 0x002A0220: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_002A0224:
    // 0x002A0224: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x002A0228: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x002A022C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0230: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x002A0234: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0238: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002A023C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x002A0240: lhu         $v0, 0xA2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA2);
    // 0x002A0244: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A0248: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x002A024C: lw          $v0, 0x1A0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1A0);
    // 0x002A0250: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A0254: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002A0258: bne         $v1, $zero, L_002A0224
    if (ctx->r3 != 0) {
        // 0x002A025C: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_002A0224;
    }
    // 0x002A025C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_002A0260:
    // 0x002A0260: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x002A0264: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0268: j           L_002A0334
    // 0x002A026C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
        goto L_002A0334;
    // 0x002A026C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_002A0270:
    // 0x002A0270: bne         $a0, $v0, L_002A0338
    if (ctx->r4 != ctx->r2) {
        // 0x002A0274: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_002A0338;
    }
    // 0x002A0274: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x002A0278: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x002A027C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0280: slt         $v0, $v0, $s6
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x002A0284: beq         $v0, $zero, L_002A02C4
    if (ctx->r2 == 0) {
        // 0x002A0288: sll         $v1, $s2, 16
        ctx->r3 = S32(ctx->r18 << 16);
            goto L_002A02C4;
    }
    // 0x002A0288: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x002A028C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x002A0290: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
L_002A0294:
    // 0x002A0294: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x002A0298: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x002A029C: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x002A02A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A02A4: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x002A02A8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x002A02AC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A02B0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A02B4: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x002A02B8: bne         $v1, $zero, L_002A0294
    if (ctx->r3 != 0) {
        // 0x002A02BC: sh          $zero, 0x0($v0)
        MEM_H(0X0, ctx->r2) = 0;
            goto L_002A0294;
    }
    // 0x002A02BC: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x002A02C0: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
L_002A02C4:
    // 0x002A02C4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A02C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002A02CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A02D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A02D4: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x002A02D8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002A02DC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002A02E0: j           L_002A031C
    // 0x002A02E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_002A031C;
    // 0x002A02E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_002A02E8:
    // 0x002A02E8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x002A02EC: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x002A02F0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A02F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002A02F8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x002A02FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002A0300: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A0304: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0308: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x002A030C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002A0310: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002A0314: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002A0318: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_002A031C:
    // 0x002A031C: slt         $v1, $s6, $v1
    ctx->r3 = SIGNED(ctx->r22) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002A0320: beq         $v1, $zero, L_002A02E8
    if (ctx->r3 == 0) {
        // 0x002A0324: addiu       $a0, $s2, 0x1
        ctx->r4 = ADD32(ctx->r18, 0X1);
            goto L_002A02E8;
    }
    // 0x002A0324: addiu       $a0, $s2, 0x1
    ctx->r4 = ADD32(ctx->r18, 0X1);
    // 0x002A0328: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x002A032C: j           L_002A0418
    // 0x002A0330: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
        goto L_002A0418;
    // 0x002A0330: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_002A0334:
    // 0x002A0334: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
L_002A0338:
    // 0x002A0338: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x002A033C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A0340: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002A0344: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A0348: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A034C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x002A0350: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002A0354: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002A0358: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x002A035C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A0360: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002A0364: bne         $a0, $zero, L_002A0400
    if (ctx->r4 != 0) {
        // 0x002A0368: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_002A0400;
    }
    // 0x002A0368: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x002A036C: addiu       $a0, $s2, 0x1
    ctx->r4 = ADD32(ctx->r18, 0X1);
    // 0x002A0370: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x002A0374: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x002A0378: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002A037C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002A0380: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x002A0384: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002A0388: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A038C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0390: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x002A0394: lw          $s3, 0x10($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X10);
    // 0x002A0398: lw          $s4, 0x20($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X20);
    // 0x002A039C: j           L_002A03FC
    // 0x002A03A0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
        goto L_002A03FC;
    // 0x002A03A0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_002A03A4:
    // 0x002A03A4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x002A03A8: addiu       $a0, $a0, -0x7456
    ctx->r4 = ADD32(ctx->r4, -0X7456);
    // 0x002A03AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x002A03B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A03B4: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x002A03B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A03BC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x002A03C0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x002A03C4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x002A03C8: jal         0x0029FE70
    // 0x002A03CC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_0029FE70(rdram, ctx);
        goto after_1;
    // 0x002A03CC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x002A03D0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x002A03D4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x002A03D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x002A03DC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x002A03E0: bne         $v0, $zero, L_002A03F0
    if (ctx->r2 != 0) {
        // 0x002A03E4: nop
    
            goto L_002A03F0;
    }
    // 0x002A03E4: nop

L_002A03E8:
    // 0x002A03E8: j           L_002A0418
    // 0x002A03EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_002A0418;
    // 0x002A03EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002A03F0:
    // 0x002A03F0: lhu         $v0, 0x0($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X0);
    // 0x002A03F4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x002A03F8: sh          $v0, 0x0($fp)
    MEM_H(0X0, ctx->r30) = ctx->r2;
L_002A03FC:
    // 0x002A03FC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_002A0400:
    // 0x002A0400: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0404: slt         $v0, $v0, $s6
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x002A0408: bne         $v0, $zero, L_002A00B8
    if (ctx->r2 != 0) {
        // 0x002A040C: nop
    
            goto L_002A00B8;
    }
    // 0x002A040C: nop

L_002A0410:
    // 0x002A0410: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x002A0414: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_002A0418:
    // 0x002A0418: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x002A041C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x002A0420: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x002A0424: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x002A0428: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x002A042C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x002A0430: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x002A0434: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x002A0438: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x002A043C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x002A0440: jr          $ra
    // 0x002A0444: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x002A0444: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0042C79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C79C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042C7A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042C7A4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042C7A8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042C7AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042C7B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042C7B4: jal         0x002842C8
    // 0x0042C7B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002842C8(rdram, ctx);
        goto after_0;
    // 0x0042C7B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042C7BC: lw          $s2, 0x1168($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X1168);
    // 0x0042C7C0: blez        $s2, L_0042C7EC
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0042C7C4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042C7EC;
    }
    // 0x0042C7C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042C7C8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042C7CC:
    // 0x0042C7CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042C7D0: lw          $a1, 0x1178($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1178);
    // 0x0042C7D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042C7D8: jal         0x00220BF0
    // 0x0042C7DC: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_00220BF0(rdram, ctx);
        goto after_1;
    // 0x0042C7DC: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_1:
    // 0x0042C7E0: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042C7E4: bne         $v0, $zero, L_0042C7CC
    if (ctx->r2 != 0) {
        // 0x0042C7E8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042C7CC;
    }
    // 0x0042C7E8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0042C7EC:
    // 0x0042C7EC: lw          $s2, 0x116C($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X116C);
    // 0x0042C7F0: blez        $s2, L_0042C81C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0042C7F4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0042C81C;
    }
    // 0x0042C7F4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042C7F8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0042C7FC:
    // 0x0042C7FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0042C800: lw          $a1, 0x117C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X117C);
    // 0x0042C804: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042C808: jal         0x00220BF0
    // 0x0042C80C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_00220BF0(rdram, ctx);
        goto after_2;
    // 0x0042C80C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_2:
    // 0x0042C810: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0042C814: bne         $v0, $zero, L_0042C7FC
    if (ctx->r2 != 0) {
        // 0x0042C818: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042C7FC;
    }
    // 0x0042C818: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0042C81C:
    // 0x0042C81C: jal         0x002842B4
    // 0x0042C820: nop

    func_002842B4(rdram, ctx);
        goto after_3;
    // 0x0042C820: nop

    after_3:
    // 0x0042C824: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042C828: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042C82C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042C830: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042C834: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C838: jr          $ra
    // 0x0042C83C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042C83C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00462CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00462CD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00462CD8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x00462CDC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x00462CE0: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
L_00462CE4:
    // 0x00462CE4: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00462CE8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00462CEC: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x00462CF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462CF4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00462CF8: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00462CFC: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00462D00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462D04: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00462D08: sltiu       $v0, $a3, 0x1C
    ctx->r2 = ctx->r7 < 0X1C ? 1 : 0;
    // 0x00462D0C: bne         $v0, $zero, L_00462CE4
    if (ctx->r2 != 0) {
        // 0x00462D10: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_00462CE4;
    }
    // 0x00462D10: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x00462D14: jr          $ra
    // 0x00462D18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00462D18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0029847C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029847C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
;}
RECOMP_FUNC void func_0042519C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042519C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004251A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004251A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004251A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004251AC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004251B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004251B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004251B8: jal         0x00275A74
    // 0x004251BC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_00275A74(rdram, ctx);
        goto after_0;
    // 0x004251BC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x004251C0: jal         0x00275F7C
    // 0x004251C4: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x004251C4: nop

    after_1:
    // 0x004251C8: jal         0x00275E1C
    // 0x004251CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275E1C(rdram, ctx);
        goto after_2;
    // 0x004251CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x004251D0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004251D4: lw          $v0, 0xA34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA34);
    // 0x004251D8: bne         $v0, $zero, L_004251F4
    if (ctx->r2 != 0) {
        // 0x004251DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004251F4;
    }
    // 0x004251DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004251E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004251E4: jal         0x00416454
    // 0x004251E8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416454(rdram, ctx);
        goto after_3;
    // 0x004251E8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x004251EC: j           L_00425208
    // 0x004251F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00425208;
    // 0x004251F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004251F4:
    // 0x004251F4: jal         0x00285304
    // 0x004251F8: nop

    func_00285304(rdram, ctx);
        goto after_4;
    // 0x004251F8: nop

    after_4:
    // 0x004251FC: jal         0x00285410
    // 0x00425200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285410(rdram, ctx);
        goto after_5;
    // 0x00425200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x00425204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00425208:
    // 0x00425208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042520C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00425210: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00425214: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00425218: jr          $ra
    // 0x0042521C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042521C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041B938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B938: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B93C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B940: xori        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 ^ 0X4000;
    // 0x0041B944: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B948: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B94C: jr          $ra
    // 0x0041B950: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B950: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041B198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B198: jr          $ra
    // 0x0041B19C: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    return;
    // 0x0041B19C: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
;}
RECOMP_FUNC void func_00249118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00249118: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0024911C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00249120: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00249124: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00249128: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024912C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00249130: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00249134: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00249138: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0024913C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00249140: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x00249144: jal         0x00285BD0
    // 0x00249148: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x00249148: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0024914C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249150: jal         0x002553BC
    // 0x00249154: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002553BC(rdram, ctx);
        goto after_1;
    // 0x00249154: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00249158: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024915C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00249160: jal         0x0026E110
    // 0x00249164: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0026E110(rdram, ctx);
        goto after_2;
    // 0x00249164: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00249168: jal         0x0042EB04
    // 0x0024916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042EB04(rdram, ctx);
        goto after_3;
    // 0x0024916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00249170: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00249174: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00249178: beq         $v0, $zero, L_00249214
    if (ctx->r2 == 0) {
        // 0x0024917C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00249214;
    }
    // 0x0024917C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00249180: lh          $v1, 0x996($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X996);
    // 0x00249184: beq         $v1, $v0, L_002491E0
    if (ctx->r3 == ctx->r2) {
        // 0x00249188: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_002491E0;
    }
    // 0x00249188: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x0024918C: beq         $v1, $v0, L_002491E0
    if (ctx->r3 == ctx->r2) {
        // 0x00249190: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_002491E0;
    }
    // 0x00249190: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x00249194: beq         $v1, $v0, L_002491E4
    if (ctx->r3 == ctx->r2) {
        // 0x00249198: lui         $a0, 0xFF7F
        ctx->r4 = S32(0XFF7F << 16);
            goto L_002491E4;
    }
    // 0x00249198: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
    // 0x0024919C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002491A0: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x002491A4: bne         $v0, $zero, L_002491E4
    if (ctx->r2 != 0) {
        // 0x002491A8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002491E4;
    }
    // 0x002491A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002491AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002491B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002491B4: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002491B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002491BC: lwc1        $f0, 0x6ACC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6ACC);
    // 0x002491C0: lhu         $v0, 0xA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA);
    // 0x002491C4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002491C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002491CC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x002491D0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002491D4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x002491D8: jal         0x00268C48
    // 0x002491DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00268C48(rdram, ctx);
        goto after_4;
    // 0x002491DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_002491E0:
    // 0x002491E0: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
L_002491E4:
    // 0x002491E4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002491E8: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x002491EC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x002491F0: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x002491F4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x002491F8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x002491FC: lbu         $v1, 0x3E($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3E);
    // 0x00249200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00249204: bne         $v1, $v0, L_00249218
    if (ctx->r3 != ctx->r2) {
        // 0x00249208: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00249218;
    }
    // 0x00249208: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024920C: jal         0x00275624
    // 0x00249210: addiu       $a0, $zero, 0x27D9
    ctx->r4 = ADD32(0, 0X27D9);
    func_00275624(rdram, ctx);
        goto after_5;
    // 0x00249210: addiu       $a0, $zero, 0x27D9
    ctx->r4 = ADD32(0, 0X27D9);
    after_5:
L_00249214:
    // 0x00249214: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00249218:
    // 0x00249218: beq         $s3, $v0, L_0024922C
    if (ctx->r19 == ctx->r2) {
        // 0x0024921C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024922C;
    }
    // 0x0024921C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249220: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249224: j           L_00249334
    // 0x00249228: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
        goto L_00249334;
    // 0x00249228: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
L_0024922C:
    // 0x0024922C: lwc1        $f1, 0xAC0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAC0);
    // 0x00249230: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249234: lwc1        $f0, 0x6AD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AD0);
    // 0x00249238: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024923C: nop

    // 0x00249240: bc1t        L_0024924C
    if (c1cs) {
        // 0x00249244: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024924C;
    }
    // 0x00249244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00249248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024924C:
    // 0x0024924C: beq         $v0, $zero, L_00249260
    if (ctx->r2 == 0) {
        // 0x00249250: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00249260;
    }
    // 0x00249250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249254: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249258: j           L_00249334
    // 0x0024925C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
        goto L_00249334;
    // 0x0024925C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
L_00249260:
    // 0x00249260: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x00249264: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x00249268: bne         $v0, $zero, L_00249280
    if (ctx->r2 != 0) {
        // 0x0024926C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00249280;
    }
    // 0x0024926C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00249270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249274: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249278: j           L_00249334
    // 0x0024927C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
        goto L_00249334;
    // 0x0024927C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00249280:
    // 0x00249280: bne         $v1, $v0, L_00249298
    if (ctx->r3 != ctx->r2) {
        // 0x00249284: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_00249298;
    }
    // 0x00249284: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00249288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024928C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249290: j           L_00249334
    // 0x00249294: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
        goto L_00249334;
    // 0x00249294: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_00249298:
    // 0x00249298: bne         $v1, $v0, L_002492B0
    if (ctx->r3 != ctx->r2) {
        // 0x0024929C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_002492B0;
    }
    // 0x0024929C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x002492A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002492A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002492A8: j           L_00249334
    // 0x002492AC: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
        goto L_00249334;
    // 0x002492AC: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_002492B0:
    // 0x002492B0: bne         $v1, $v0, L_002492C8
    if (ctx->r3 != ctx->r2) {
        // 0x002492B4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_002492C8;
    }
    // 0x002492B4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x002492B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002492BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002492C0: j           L_00249334
    // 0x002492C4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
        goto L_00249334;
    // 0x002492C4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_002492C8:
    // 0x002492C8: bne         $v1, $v0, L_002492E0
    if (ctx->r3 != ctx->r2) {
        // 0x002492CC: lui         $v0, 0x200
        ctx->r2 = S32(0X200 << 16);
            goto L_002492E0;
    }
    // 0x002492CC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x002492D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002492D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002492D8: j           L_00249334
    // 0x002492DC: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
        goto L_00249334;
    // 0x002492DC: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_002492E0:
    // 0x002492E0: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x002492E4: beq         $v0, $zero, L_002492F8
    if (ctx->r2 == 0) {
        // 0x002492E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002492F8;
    }
    // 0x002492E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002492EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002492F0: j           L_00249334
    // 0x002492F4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
        goto L_00249334;
    // 0x002492F4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_002492F8:
    // 0x002492F8: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x002492FC: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x00249300: beq         $v0, $zero, L_00249310
    if (ctx->r2 == 0) {
        // 0x00249304: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_00249310;
    }
    // 0x00249304: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249308: j           L_00249334
    // 0x0024930C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
        goto L_00249334;
    // 0x0024930C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_00249310:
    // 0x00249310: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00249314: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x00249318: beq         $v0, $zero, L_0024932C
    if (ctx->r2 == 0) {
        // 0x0024931C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0024932C;
    }
    // 0x0024931C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249320: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249324: j           L_00249334
    // 0x00249328: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
        goto L_00249334;
    // 0x00249328: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
L_0024932C:
    // 0x0024932C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00249330: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_00249334:
    // 0x00249334: jal         0x0024E5F0
    // 0x00249338: nop

    func_0024E5F0(rdram, ctx);
        goto after_6;
    // 0x00249338: nop

    after_6:
    // 0x0024933C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00249340: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00249344: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00249348: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0024934C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00249350: jr          $ra
    // 0x00249354: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00249354: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002252A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002252A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002252A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002252A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002252AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002252B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002252B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002252B8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002252BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002252C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002252C4: lw          $s0, 0x1168($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1168);
    // 0x002252C8: lw          $s1, 0x1178($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1178);
    // 0x002252CC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002252D0: beq         $s0, $v0, L_00225300
    if (ctx->r16 == ctx->r2) {
        // 0x002252D4: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_00225300;
    }
    // 0x002252D4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002252D8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_002252DC:
    // 0x002252DC: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x002252E0: bnel        $v0, $s3, L_002252F4
    if (ctx->r2 != ctx->r19) {
        // 0x002252E4: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_002252F4;
    }
    goto skip_0;
    // 0x002252E4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x002252E8: jal         0x0026E294
    // 0x002252EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026E294(rdram, ctx);
        goto after_0;
    // 0x002252EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002252F0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_002252F4:
    // 0x002252F4: bne         $s0, $s4, L_002252DC
    if (ctx->r16 != ctx->r20) {
        // 0x002252F8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_002252DC;
    }
    // 0x002252F8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x002252FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00225300:
    // 0x00225300: lw          $s0, 0x116C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X116C);
    // 0x00225304: lw          $s1, 0x117C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X117C);
    // 0x00225308: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0022530C: beq         $s0, $v0, L_00225334
    if (ctx->r16 == ctx->r2) {
        // 0x00225310: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_00225334;
    }
    // 0x00225310: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_00225314:
    // 0x00225314: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x00225318: bnel        $v0, $s3, L_0022532C
    if (ctx->r2 != ctx->r19) {
        // 0x0022531C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_0022532C;
    }
    goto skip_1;
    // 0x0022531C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_1:
    // 0x00225320: jal         0x0026E294
    // 0x00225324: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0026E294(rdram, ctx);
        goto after_1;
    // 0x00225324: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00225328: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_0022532C:
    // 0x0022532C: bne         $s0, $s2, L_00225314
    if (ctx->r16 != ctx->r18) {
        // 0x00225330: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00225314;
    }
    // 0x00225330: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_00225334:
    // 0x00225334: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00225338: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0022533C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225340: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225344: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225348: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0022534C: jr          $ra
    // 0x00225350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00225350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028B0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B0FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028B100: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028B104: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0028B108: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028B10C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0028B110: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028B114: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0028B118: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028B11C: beq         $s2, $zero, L_0028B15C
    if (ctx->r18 == 0) {
        // 0x0028B120: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0028B15C;
    }
    // 0x0028B120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028B124: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0028B128: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028B12C: beq         $v0, $zero, L_0028B15C
    if (ctx->r2 == 0) {
        // 0x0028B130: nop
    
            goto L_0028B15C;
    }
    // 0x0028B130: nop

    // 0x0028B134: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0028B138: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0028B13C: bne         $v0, $zero, L_0028B15C
    if (ctx->r2 != 0) {
        // 0x0028B140: nop
    
            goto L_0028B15C;
    }
    // 0x0028B140: nop

    // 0x0028B144: jal         0x0029B170
    // 0x0028B148: nop

    func_0029B170(rdram, ctx);
        goto after_0;
    // 0x0028B148: nop

    after_0:
    // 0x0028B14C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B150: sw          $v0, -0xE98($at)
    MEM_W(-0XE98, ctx->r1) = ctx->r2;
    // 0x0028B154: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B158: sw          $v1, -0xE94($at)
    MEM_W(-0XE94, ctx->r1) = ctx->r3;
L_0028B15C:
    // 0x0028B15C: beq         $s1, $zero, L_0028B218
    if (ctx->r17 == 0) {
        // 0x0028B160: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0028B218;
    }
    // 0x0028B160: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028B164: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x0028B168: bne         $v1, $v0, L_0028B198
    if (ctx->r3 != ctx->r2) {
        // 0x0028B16C: nop
    
            goto L_0028B198;
    }
    // 0x0028B16C: nop

    // 0x0028B170: jal         0x0029E3B0
    // 0x0028B174: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    func_0029E3B0(rdram, ctx);
        goto after_1;
    // 0x0028B174: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    after_1:
    // 0x0028B178: jal         0x0029B170
    // 0x0028B17C: nop

    func_0029B170(rdram, ctx);
        goto after_2;
    // 0x0028B17C: nop

    after_2:
    // 0x0028B180: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B184: sw          $v0, -0xEB0($at)
    MEM_W(-0XEB0, ctx->r1) = ctx->r2;
    // 0x0028B188: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B18C: sw          $v1, -0xEAC($at)
    MEM_W(-0XEAC, ctx->r1) = ctx->r3;
    // 0x0028B190: j           L_0028B1F0
    // 0x0028B194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_0028B1F0;
    // 0x0028B194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0028B198:
    // 0x0028B198: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0028B19C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028B1A0: beq         $v0, $zero, L_0028B1EC
    if (ctx->r2 == 0) {
        // 0x0028B1A4: addiu       $s0, $s1, 0x10
        ctx->r16 = ADD32(ctx->r17, 0X10);
            goto L_0028B1EC;
    }
    // 0x0028B1A4: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x0028B1A8: jal         0x0029B170
    // 0x0028B1AC: nop

    func_0029B170(rdram, ctx);
        goto after_3;
    // 0x0028B1AC: nop

    after_3:
    // 0x0028B1B0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0028B1B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B1B8: sw          $v0, -0xEA0($at)
    MEM_W(-0XEA0, ctx->r1) = ctx->r2;
    // 0x0028B1BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B1C0: sw          $v1, -0xE9C($at)
    MEM_W(-0XE9C, ctx->r1) = ctx->r3;
    // 0x0028B1C4: andi        $a0, $a0, 0x10
    ctx->r4 = ctx->r4 & 0X10;
    // 0x0028B1C8: bnel        $a0, $zero, L_0028B1F0
    if (ctx->r4 != 0) {
        // 0x0028B1CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028B1F0;
    }
    goto skip_0;
    // 0x0028B1CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x0028B1D0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B1D4: sw          $v0, -0xE90($at)
    MEM_W(-0XE90, ctx->r1) = ctx->r2;
    // 0x0028B1D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B1DC: sw          $v1, -0xE8C($at)
    MEM_W(-0XE8C, ctx->r1) = ctx->r3;
    // 0x0028B1E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028B1E4: sw          $zero, -0xEA8($at)
    MEM_W(-0XEA8, ctx->r1) = 0;
    // 0x0028B1E8: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
L_0028B1EC:
    // 0x0028B1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0028B1F0:
    // 0x0028B1F0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0028B1F4: addiu       $v1, $zero, -0x31
    ctx->r3 = ADD32(0, -0X31);
    // 0x0028B1F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0028B1FC: jal         0x0029A248
    // 0x0028B200: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_4;
    // 0x0028B200: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x0028B204: jal         0x0029A34C
    // 0x0028B208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_5;
    // 0x0028B208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0028B20C: bne         $s1, $s2, L_0028B218
    if (ctx->r17 != ctx->r18) {
        // 0x0028B210: sw          $s1, 0x2F4($s3)
        MEM_W(0X2F4, ctx->r19) = ctx->r17;
            goto L_0028B218;
    }
    // 0x0028B210: sw          $s1, 0x2F4($s3)
    MEM_W(0X2F4, ctx->r19) = ctx->r17;
    // 0x0028B214: sw          $s2, 0x2F8($s3)
    MEM_W(0X2F8, ctx->r19) = ctx->r18;
L_0028B218:
    // 0x0028B218: beq         $s2, $zero, L_0028B258
    if (ctx->r18 == 0) {
        // 0x0028B21C: nop
    
            goto L_0028B258;
    }
    // 0x0028B21C: nop

    // 0x0028B220: beq         $s2, $s1, L_0028B258
    if (ctx->r18 == ctx->r17) {
        // 0x0028B224: nop
    
            goto L_0028B258;
    }
    // 0x0028B224: nop

    // 0x0028B228: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x0028B22C: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    // 0x0028B230: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0028B234: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x0028B238: jal         0x00298D50
    // 0x0028B23C: nop

    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_6;
    // 0x0028B23C: nop

    after_6:
    // 0x0028B240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028B244: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B248: sw          $v0, 0x6E60($at)
    MEM_W(0X6E60, ctx->r1) = ctx->r2;
    // 0x0028B24C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B250: sw          $zero, 0x6E64($at)
    MEM_W(0X6E64, ctx->r1) = 0;
    // 0x0028B254: sw          $s2, 0x2F8($s3)
    MEM_W(0X2F8, ctx->r19) = ctx->r18;
L_0028B258:
    // 0x0028B258: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028B25C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028B260: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028B264: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028B268: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028B26C: jr          $ra
    // 0x0028B270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028B270: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00253D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00253D34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00253D38: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00253D3C: bne         $v0, $zero, L_00253D54
    if (ctx->r2 != 0) {
        // 0x00253D40: nop
    
            goto L_00253D54;
    }
    // 0x00253D40: nop

    // 0x00253D44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253D48: lwc1        $f0, 0x7104($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7104);
    // 0x00253D4C: j           L_00253D5C
    // 0x00253D50: nop

        goto L_00253D5C;
    // 0x00253D50: nop

L_00253D54:
    // 0x00253D54: jal         0x002671B4
    // 0x00253D58: nop

    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x00253D58: nop

    after_0:
L_00253D5C:
    // 0x00253D5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00253D60: jr          $ra
    // 0x00253D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00253D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021E7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E7F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021E7FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021E800: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021E804: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0021E808: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0021E80C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021E810: lw          $v0, 0x244($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X244);
    // 0x0021E814: jalr        $v0
    // 0x0021E818: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0021E818: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_0:
    // 0x0021E81C: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x0021E820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021E824: jal         0x0020C0D0
    // 0x0021E828: addiu       $a2, $s0, 0xBC
    ctx->r6 = ADD32(ctx->r16, 0XBC);
    func_0020C0D0(rdram, ctx);
        goto after_1;
    // 0x0021E828: addiu       $a2, $s0, 0xBC
    ctx->r6 = ADD32(ctx->r16, 0XBC);
    after_1:
    // 0x0021E82C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021E830: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021E834: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021E838: jr          $ra
    // 0x0021E83C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021E83C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028EEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042C560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C560: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0042C564: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0042C568: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042C56C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x0042C570: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0042C574: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x0042C578: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x0042C57C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C580: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0042C584: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0042C588: lw          $s0, 0x7074($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7074);
    // 0x0042C58C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0042C590: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x0042C594: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x0042C598: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    // 0x0042C59C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0042C5A0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042C5A4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0042C5A8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042C5AC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0042C5B0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0042C5B4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0042C5B8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0042C5BC: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0042C5C0: jal         0x00205B94
    // 0x0042C5C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_0;
    // 0x0042C5C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0042C5C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C5CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0042C5D0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0042C5D4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0042C5D8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042C5DC: addiu       $v0, $v0, 0x5FC4
    ctx->r2 = ADD32(ctx->r2, 0X5FC4);
    // 0x0042C5E0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0042C5E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0042C5E8: jal         0x00205D0C
    // 0x0042C5EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_1;
    // 0x0042C5EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x0042C5F0: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0042C5F4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x0042C5F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042C5FC: jal         0x002017D4
    // 0x0042C600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042C600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042C604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042C608: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0042C60C: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x0042C610: jal         0x002017D4
    // 0x0042C614: addiu       $s6, $v0, 0x8
    ctx->r22 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042C614: addiu       $s6, $v0, 0x8
    ctx->r22 = ADD32(ctx->r2, 0X8);
    after_3:
    // 0x0042C618: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042C61C: lwc1        $f20, 0x600C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X600C);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042C620 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042C620(rdram, ctx);
;}
RECOMP_FUNC void func_00276D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00276D9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00276DA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00276DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00276DA8: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00276DAC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00276DB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00276DB4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00276DB8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x00276DBC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00276DC0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00276DC4: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00276DC8: jal         0x002718F4
    // 0x00276DCC: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    func_002718F4(rdram, ctx);
        goto after_0;
    // 0x00276DCC: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x00276DD0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00276DD4: addiu       $a1, $a1, 0x2AA8
    ctx->r5 = ADD32(ctx->r5, 0X2AA8);
    // 0x00276DD8: jal         0x00293470
    // 0x00276DDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00293470(rdram, ctx);
        goto after_1;
    // 0x00276DDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00276DE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00276DE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00276DE8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x00276DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00276DF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00276DF4: jr          $ra
    // 0x00276DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00276DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00274948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274948: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0027494C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00274954: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00274958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0027495C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00274960: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x00274964: lh          $a1, 0xC($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XC);
    // 0x00274968: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027496C: beq         $a1, $v0, L_00274A0C
    if (ctx->r5 == ctx->r2) {
        // 0x00274970: nop
    
            goto L_00274A0C;
    }
    // 0x00274970: nop

    // 0x00274974: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00274978: jal         0x002717A8
    // 0x0027497C: nop

    func_002717A8(rdram, ctx);
        goto after_0;
    // 0x0027497C: nop

    after_0:
    // 0x00274980: lwl         $v1, 0x0($v0)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r2, 0X0);
    // 0x00274984: lwr         $v1, 0x3($v0)
    ctx->r3 = do_lwr(rdram, ctx->r3, ctx->r2, 0X3);
    // 0x00274988: lwl         $a2, 0x4($v0)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r2, 0X4);
    // 0x0027498C: lwr         $a2, 0x7($v0)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r2, 0X7);
    // 0x00274990: lwl         $a3, 0x8($v0)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r2, 0X8);
    // 0x00274994: lwr         $a3, 0xB($v0)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r2, 0XB);
    // 0x00274998: swl         $v1, 0x8C($s0)
    do_swl(rdram, 0X8C, ctx->r16, ctx->r3);
    // 0x0027499C: swr         $v1, 0x8F($s0)
    do_swr(rdram, 0X8F, ctx->r16, ctx->r3);
    // 0x002749A0: swl         $a2, 0x90($s0)
    do_swl(rdram, 0X90, ctx->r16, ctx->r6);
    // 0x002749A4: swr         $a2, 0x93($s0)
    do_swr(rdram, 0X93, ctx->r16, ctx->r6);
    // 0x002749A8: swl         $a3, 0x94($s0)
    do_swl(rdram, 0X94, ctx->r16, ctx->r7);
    // 0x002749AC: swr         $a3, 0x97($s0)
    do_swr(rdram, 0X97, ctx->r16, ctx->r7);
    // 0x002749B0: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    // 0x002749B4: jal         0x0026D210
    // 0x002749B8: nop

    func_0026D210(rdram, ctx);
        goto after_1;
    // 0x002749B8: nop

    after_1:
    // 0x002749BC: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x002749C0: jal         0x0026D210
    // 0x002749C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_2;
    // 0x002749C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x002749C8: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x002749CC: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x002749D0: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    // 0x002749D4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002749D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002749DC: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002749E0: jal         0x0026D210
    // 0x002749E4: swc1        $f20, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f20.u32l;
    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x002749E4: swc1        $f20, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f20.u32l;
    after_3:
    // 0x002749E8: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    // 0x002749EC: jal         0x0026D210
    // 0x002749F0: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x002749F0: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x002749F4: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002749F8: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002749FC: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x00274A00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00274A04: j           L_00274A84
    // 0x00274A08: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
        goto L_00274A84;
    // 0x00274A08: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
L_00274A0C:
    // 0x00274A0C: lw          $v0, 0xA8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA8);
    // 0x00274A10: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x00274A14: beq         $v0, $zero, L_00274A50
    if (ctx->r2 == 0) {
        // 0x00274A18: sw          $zero, 0x88($s0)
        MEM_W(0X88, ctx->r16) = 0;
            goto L_00274A50;
    }
    // 0x00274A18: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    // 0x00274A1C: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x00274A20: bne         $v0, $zero, L_00274A84
    if (ctx->r2 != 0) {
        // 0x00274A24: nop
    
            goto L_00274A84;
    }
    // 0x00274A24: nop

    // 0x00274A28: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00274A2C: jal         0x002718E0
    // 0x00274A30: nop

    func_002718E0(rdram, ctx);
        goto after_5;
    // 0x00274A30: nop

    after_5:
    // 0x00274A34: beq         $v0, $zero, L_00274A84
    if (ctx->r2 == 0) {
        // 0x00274A38: nop
    
            goto L_00274A84;
    }
    // 0x00274A38: nop

    // 0x00274A3C: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x00274A40: lbu         $v0, 0x2B94($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2B94);
    // 0x00274A44: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00274A48: j           L_00274A80
    // 0x00274A4C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
        goto L_00274A80;
    // 0x00274A4C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
L_00274A50:
    // 0x00274A50: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x00274A54: bne         $v0, $zero, L_00274A84
    if (ctx->r2 != 0) {
        // 0x00274A58: nop
    
            goto L_00274A84;
    }
    // 0x00274A58: nop

    // 0x00274A5C: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00274A60: jal         0x002718E0
    // 0x00274A64: nop

    func_002718E0(rdram, ctx);
        goto after_6;
    // 0x00274A64: nop

    after_6:
    // 0x00274A68: beq         $v0, $zero, L_00274A84
    if (ctx->r2 == 0) {
        // 0x00274A6C: nop
    
            goto L_00274A84;
    }
    // 0x00274A6C: nop

    // 0x00274A70: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x00274A74: lw          $a1, 0x2B98($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B98);
    // 0x00274A78: jal         0x00271E20
    // 0x00274A7C: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    func_00271E20(rdram, ctx);
        goto after_7;
    // 0x00274A7C: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    after_7:
L_00274A80:
    // 0x00274A80: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
L_00274A84:
    // 0x00274A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00274A88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274A8C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00274A90: jr          $ra
    // 0x00274A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00274A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044C63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_004212FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004212FC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00421300: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x00421304: jr          $ra
    // 0x00421308: addiu       $v0, $v0, 0x688
    ctx->r2 = ADD32(ctx->r2, 0X688);
    return;
    // 0x00421308: addiu       $v0, $v0, 0x688
    ctx->r2 = ADD32(ctx->r2, 0X688);
;}
RECOMP_FUNC void func_00254640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00254644: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00254648: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025464C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00254650: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00254654: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00254658: lhu         $v0, 0xA08($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA08);
    // 0x0025465C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00254660: beq         $v0, $zero, L_00254678
    if (ctx->r2 == 0) {
        // 0x00254664: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_00254678;
    }
    // 0x00254664: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00254668: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025466C: lwc1        $f0, 0x7118($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7118);
    // 0x00254670: j           L_002546F0
    // 0x00254674: swc1        $f0, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f0.u32l;
        goto L_002546F0;
    // 0x00254674: swc1        $f0, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f0.u32l;
L_00254678:
    // 0x00254678: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025467C: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00254680: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00254684: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00254688: swc1        $f1, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025468C: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x00254690: beq         $v0, $zero, L_002546A4
    if (ctx->r2 == 0) {
        // 0x00254694: nop
    
            goto L_002546A4;
    }
    // 0x00254694: nop

    // 0x00254698: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x0025469C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002546A0: swc1        $f0, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f0.u32l;
L_002546A4:
    // 0x002546A4: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x002546A8: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x002546AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002546B0: bne         $v0, $zero, L_002546F0
    if (ctx->r2 != 0) {
        // 0x002546B4: nop
    
            goto L_002546F0;
    }
    // 0x002546B4: nop

    // 0x002546B8: beq         $s1, $zero, L_002546F0
    if (ctx->r17 == 0) {
        // 0x002546BC: nop
    
            goto L_002546F0;
    }
    // 0x002546BC: nop

    // 0x002546C0: jal         0x002685F0
    // 0x002546C4: nop

    func_002685F0(rdram, ctx);
        goto after_0;
    // 0x002546C4: nop

    after_0:
    // 0x002546C8: bne         $v0, $zero, L_002546E0
    if (ctx->r2 != 0) {
        // 0x002546CC: nop
    
            goto L_002546E0;
    }
    // 0x002546CC: nop

    // 0x002546D0: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002546D4: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x002546D8: beq         $v0, $zero, L_002546F0
    if (ctx->r2 == 0) {
        // 0x002546DC: nop
    
            goto L_002546F0;
    }
    // 0x002546DC: nop

L_002546E0:
    // 0x002546E0: lwc1        $f0, 0xB28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB28);
    // 0x002546E4: lwc1        $f1, 0x30($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X30);
    // 0x002546E8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002546EC: swc1        $f0, 0xB28($s0)
    MEM_W(0XB28, ctx->r16) = ctx->f0.u32l;
L_002546F0:
    // 0x002546F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002546F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002546F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002546FC: jr          $ra
    // 0x00254700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00254700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00258C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258C20: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x00258C24: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x00258C28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258C2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258C30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258C34: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258C38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258C3C: lwc1        $f1, 0x7294($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7294);
    // 0x00258C40: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00258C44: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00258C48: jr          $ra
    // 0x00258C4C: swc1        $f0, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00258C4C: swc1        $f0, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00422864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422864: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422868: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x0042286C: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x00422870: beq         $v0, $zero, L_0042288C
    if (ctx->r2 == 0) {
        // 0x00422874: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0042288C;
    }
    // 0x00422874: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422878: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042287C: addu        $at, $at, $v0
    gpr jr_addend_00422884 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00422880: lw          $v0, 0x14B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X14B0);
    // 0x00422884: jr          $v0
    // 0x00422888: nop

    switch (jr_addend_00422884 >> 2) {
        case 0: goto L_0042288C; break;
        case 1: goto L_0042288C; break;
        case 2: goto L_0042288C; break;
        case 3: goto L_0042288C; break;
        case 4: goto L_0042288C; break;
        case 5: goto L_0042289C; break;
        case 6: goto L_0042289C; break;
        case 7: goto L_0042288C; break;
        case 8: goto L_0042288C; break;
        case 9: goto L_0042289C; break;
        case 10: goto L_0042289C; break;
        case 11: goto L_0042288C; break;
        case 12: goto L_0042289C; break;
        case 13: goto L_0042288C; break;
        case 14: goto L_0042288C; break;
        case 15: goto L_0042289C; break;
        default: switch_error(__func__, 0x00422884, 0x800C14B0);
    }
    // 0x00422888: nop

L_0042288C:
    // 0x0042288C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422890: addiu       $v0, $v0, 0x4B9C
    ctx->r2 = ADD32(ctx->r2, 0X4B9C);
    // 0x00422894: j           L_004228A8
    // 0x00422898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004228A8;
    // 0x00422898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0042289C:
    // 0x0042289C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004228A0: addiu       $v0, $v0, 0x4BA4
    ctx->r2 = ADD32(ctx->r2, 0X4BA4);
    // 0x004228A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004228A8:
    // 0x004228A8: jr          $ra
    // 0x004228AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004228AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0040B9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B9D8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B9DC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B9E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B9E4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B9E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B9EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B9F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B9F8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B9FC: jal         0x00246108
    // 0x0040BA00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040BA00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040BA04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BA08: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040BA0C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040BA10: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040BA14: jal         0x00245BAC
    // 0x0040BA18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040BA18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040BA1C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040BA20: beq         $v0, $zero, L_0040BA34
    if (ctx->r2 == 0) {
        // 0x0040BA24: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BA34;
    }
    // 0x0040BA24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BA28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040BA2C: jal         0x00243414
    // 0x0040BA30: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040BA30: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_0040BA34:
    // 0x0040BA34: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040BA38: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040BA3C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040BA40: jr          $ra
    // 0x0040BA44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040BA44: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00422430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00422434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00422438: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042243C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00422440: lhu         $s1, 0x94C($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X94C);
    // 0x00422444: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00422448: jal         0x004160F0
    // 0x0042244C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0042244C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00422450: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00422454: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00422458: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042245C: addiu       $a1, $a1, 0x1428
    ctx->r5 = ADD32(ctx->r5, 0X1428);
    // 0x00422460: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00422464: jal         0x0029E3E0
    // 0x00422468: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00422468: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0042246C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00422470: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00422474: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00422478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042247C: jr          $ra
    // 0x00422480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00422480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00424970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424970: jr          $ra
    // 0x00424974: nop

    return;
    // 0x00424974: nop

;}
RECOMP_FUNC void func_00293E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293E60: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00293E64: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00293E68: jr          $ra
    // 0x00293E6C: sw          $a1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r5;
    return;
    // 0x00293E6C: sw          $a1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0025E52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E52C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0025E530: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025E534: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025E538: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025E53C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025E540: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0025E544: lb          $v0, 0x133($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X133);
    // 0x0025E548: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0025E54C: lb          $v0, 0x130($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X130);
    // 0x0025E550: bltz        $v0, L_0025E638
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025E554: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0025E638;
    }
    // 0x0025E554: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0025E558: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0025E55C: beq         $v0, $zero, L_0025E638
    if (ctx->r2 == 0) {
        // 0x0025E560: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025E638;
    }
    // 0x0025E560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025E564: beq         $a3, $v0, L_0025E58C
    if (ctx->r7 == ctx->r2) {
        // 0x0025E568: slti        $v0, $a3, 0x2
        ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
            goto L_0025E58C;
    }
    // 0x0025E568: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x0025E56C: bne         $v0, $zero, L_0025E638
    if (ctx->r2 != 0) {
        // 0x0025E570: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025E638;
    }
    // 0x0025E570: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025E574: beq         $a3, $v0, L_0025E59C
    if (ctx->r7 == ctx->r2) {
        // 0x0025E578: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0025E59C;
    }
    // 0x0025E578: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0025E57C: beq         $a3, $v0, L_0025E5AC
    if (ctx->r7 == ctx->r2) {
        // 0x0025E580: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0025E5AC;
    }
    // 0x0025E580: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0025E584: j           L_0025E638
    // 0x0025E588: nop

        goto L_0025E638;
    // 0x0025E588: nop

L_0025E58C:
    // 0x0025E58C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E590: lwc1        $f20, 0x771C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X771C);
    // 0x0025E594: j           L_0025E5B4
    // 0x0025E598: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
        goto L_0025E5B4;
    // 0x0025E598: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0025E59C:
    // 0x0025E59C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E5A0: lwc1        $f20, 0x7720($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7720);
    // 0x0025E5A4: j           L_0025E5B4
    // 0x0025E5A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
        goto L_0025E5B4;
    // 0x0025E5A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0025E5AC:
    // 0x0025E5AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E5B0: lwc1        $f20, 0x7724($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7724);
L_0025E5B4:
    // 0x0025E5B4: jal         0x0020F6BC
    // 0x0025E5B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020F6BC(rdram, ctx);
        goto after_0;
    // 0x0025E5B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0025E5BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E5C0: lwc1        $f1, 0x7728($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7728);
    // 0x0025E5C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0025E5C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0025E5CC: nop

    // 0x0025E5D0: bc1f        L_0025E638
    if (!c1cs) {
        // 0x0025E5D4: nop
    
            goto L_0025E638;
    }
    // 0x0025E5D4: nop

    // 0x0025E5D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E5DC: lwc1        $f0, 0x772C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X772C);
    // 0x0025E5E0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0025E5E4: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0025E5E8: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025E5EC: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x0025E5F0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0025E5F4: nop

    // 0x0025E5F8: bc1f        L_0025E638
    if (!c1cs) {
        // 0x0025E5FC: nop
    
            goto L_0025E638;
    }
    // 0x0025E5FC: nop

    // 0x0025E600: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0025E604: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0025E608: nop

    // 0x0025E60C: bc1f        L_0025E618
    if (!c1cs) {
        // 0x0025E610: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_0025E618;
    }
    // 0x0025E610: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0025E614: swc1        $f20, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f20.u32l;
L_0025E618:
    // 0x0025E618: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x0025E61C: addiu       $t2, $t2, 0x6AC
    ctx->r10 = ADD32(ctx->r10, 0X6AC);
    // 0x0025E620: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0025E624: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x0025E628: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x0025E62C: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x0025E630: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x0025E634: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
L_0025E638:
    // 0x0025E638: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025E63C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025E640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025E644: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0025E648: jr          $ra
    // 0x0025E64C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025E64C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002561F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002561F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002561F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002561F8: jal         0x00255FF4
    // 0x002561FC: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x002561FC: nop

    after_0:
    // 0x00256200: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256204: jr          $ra
    // 0x00256208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026D5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D5DC: jr          $ra
    // 0x0026D5E0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    return;
    // 0x0026D5E0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_004227CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004227CC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004227D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004227D4: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x004227D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004227DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004227E0: sw          $v0, 0x98C($at)
    MEM_W(0X98C, ctx->r1) = ctx->r2;
    // 0x004227E4: jr          $ra
    // 0x004227E8: nop

    return;
    // 0x004227E8: nop

;}
RECOMP_FUNC void func_002655C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002655C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002655C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002655CC: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x002655D0: beq         $v0, $zero, L_002655EC
    if (ctx->r2 == 0) {
        // 0x002655D4: nop
    
            goto L_002655EC;
    }
    // 0x002655D4: nop

    // 0x002655D8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002655DC: beq         $v0, $zero, L_002655EC
    if (ctx->r2 == 0) {
        // 0x002655E0: nop
    
            goto L_002655EC;
    }
    // 0x002655E0: nop

    // 0x002655E4: jalr        $v0
    // 0x002655E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x002655E8: nop

    after_0:
L_002655EC:
    // 0x002655EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002655F0: jr          $ra
    // 0x002655F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002655F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293580: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293584: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293588: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029358C: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x00293590: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293594: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293598: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x0029359C: jr          $ra
    // 0x002935A0: nop

    return;
    // 0x002935A0: nop

;}
RECOMP_FUNC void func_00295EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00295EC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00295ECC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x00295ED0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295ED4: lwc1        $f0, -0x5A28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5A28);
    // 0x00295ED8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x00295EDC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00295EE0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00295EE4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00295EE8: bne         $v0, $zero, L_00295F18
    if (ctx->r2 != 0) {
        // 0x00295EEC: cvt.d.s     $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
            goto L_00295F18;
    }
    // 0x00295EEC: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x00295EF0: c.le.d      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.d <= ctx->f14.d;
    // 0x00295EF4: nop

    // 0x00295EF8: bc1f        L_00295F0C
    if (!c1cs) {
        // 0x00295EFC: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_00295F0C;
    }
    // 0x00295EFC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x00295F00: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00295F04: j           L_00296110
    // 0x00295F08: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_00296110;
    // 0x00295F08: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_00295F0C:
    // 0x00295F0C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x00295F10: j           L_00296110
    // 0x00295F14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00296110;
    // 0x00295F14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00295F18:
    // 0x00295F18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295F1C: ldc1        $f1, -0x5A20($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5A20);
    // 0x00295F20: c.lt.d      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.d < ctx->f1.d;
    // 0x00295F24: nop

    // 0x00295F28: bc1tl       L_00295F30
    if (c1cs) {
        // 0x00295F2C: mov.d       $f14, $f1
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    ctx->f14.d = ctx->f1.d;
            goto L_00295F30;
    }
    goto skip_0;
    // 0x00295F2C: mov.d       $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    ctx->f14.d = ctx->f1.d;
    skip_0:
L_00295F30:
    // 0x00295F30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295F34: ldc1        $f0, -0x5A18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5A18);
    // 0x00295F38: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x00295F3C: nop

    // 0x00295F40: bc1tl       L_00295F48
    if (c1cs) {
        // 0x00295F44: mov.d       $f12, $f1
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    ctx->f12.d = ctx->f1.d;
            goto L_00295F48;
    }
    goto skip_1;
    // 0x00295F44: mov.d       $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    ctx->f12.d = ctx->f1.d;
    skip_1:
L_00295F48:
    // 0x00295F48: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
    // 0x00295F4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00295F50: addiu       $v0, $v0, -0x5A68
    ctx->r2 = ADD32(ctx->r2, -0X5A68);
    // 0x00295F54: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
L_00295F58:
    // 0x00295F58: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00295F5C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x00295F60: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x00295F64: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x00295F68: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00295F6C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x00295F70: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x00295F74: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    // 0x00295F78: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00295F7C: bne         $v0, $a0, L_00295F58
    if (ctx->r2 != ctx->r4) {
        // 0x00295F80: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00295F58;
    }
    // 0x00295F80: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00295F84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295F88: ldc1        $f0, -0x5A10($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5A10);
    // 0x00295F8C: mul.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x00295F90: div.d       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f14.d = DIV_D(ctx->f14.d, ctx->f12.d);
    // 0x00295F94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295F98: ldc1        $f1, -0x5A08($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5A08);
    // 0x00295F9C: addiu       $v1, $sp, 0x40
    ctx->r3 = ADD32(ctx->r29, 0X40);
    // 0x00295FA0: c.eq.d      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.d == ctx->f1.d;
    // 0x00295FA4: trunc.w.d   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_D(ctx->f0.d);
    // 0x00295FA8: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00295FAC: bc1f        L_00295FBC
    if (!c1cs) {
        // 0x00295FB0: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_00295FBC;
    }
    // 0x00295FB0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x00295FB4: j           L_0029604C
    // 0x00295FB8: mov.d       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.d = ctx->f14.d;
        goto L_0029604C;
    // 0x00295FB8: mov.d       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.d = ctx->f14.d;
L_00295FBC:
    // 0x00295FBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295FC0: ldc1        $f0, -0x5A00($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5A00);
    // 0x00295FC4: abs.d       $f1, $f14
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f1.d = fabs(ctx->f14.d);
    // 0x00295FC8: c.le.d      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.d <= ctx->f1.d;
    // 0x00295FCC: nop

    // 0x00295FD0: bc1f        L_00295FFC
    if (!c1cs) {
        // 0x00295FD4: nop
    
            goto L_00295FFC;
    }
    // 0x00295FD4: nop

    // 0x00295FD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295FDC: ldc1        $f2, -0x59F8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X59F8);
L_00295FE0:
    // 0x00295FE0: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x00295FE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00295FE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00295FEC: c.le.d      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.d <= ctx->f1.d;
    // 0x00295FF0: nop

    // 0x00295FF4: bc1t        L_00295FE0
    if (c1cs) {
        // 0x00295FF8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00295FE0;
    }
    // 0x00295FF8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_00295FFC:
    // 0x00295FFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296000: ldc1        $f0, -0x59F0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X59F0);
    // 0x00296004: c.lt.d      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.d < ctx->f0.d;
    // 0x00296008: nop

    // 0x0029600C: bc1f        L_00296030
    if (!c1cs) {
        // 0x00296010: nop
    
            goto L_00296030;
    }
    // 0x00296010: nop

L_00296014:
    // 0x00296014: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00296018: add.d       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = ctx->f1.d + ctx->f1.d;
    // 0x0029601C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00296020: c.lt.d      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.d < ctx->f0.d;
    // 0x00296024: nop

    // 0x00296028: bc1t        L_00296014
    if (c1cs) {
        // 0x0029602C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_00296014;
    }
    // 0x0029602C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_00296030:
    // 0x00296030: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296034: ldc1        $f0, -0x59E8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X59E8);
    // 0x00296038: c.lt.d      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.d < ctx->f14.d;
    // 0x0029603C: nop

    // 0x00296040: bc1t        L_0029604C
    if (c1cs) {
        // 0x00296044: mov.d       $f12, $f1
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    ctx->f12.d = ctx->f1.d;
            goto L_0029604C;
    }
    // 0x00296044: mov.d       $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    ctx->f12.d = ctx->f1.d;
    // 0x00296048: neg.d       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = -ctx->f12.d;
L_0029604C:
    // 0x0029604C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296050: ldc1        $f0, -0x59E0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X59E0);
    // 0x00296054: mul.d       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f12.d, ctx->f0.d);
    // 0x00296058: trunc.w.d   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_D(ctx->f0.d);
    // 0x0029605C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00296060: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x00296064: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00296068: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x0029606C: ldc1        $f0, 0x0($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X0);
    // 0x00296070: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x00296074: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00296078: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x0029607C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296080: ldc1        $f1, -0x59D8($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X59D8);
    // 0x00296084: mul.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f1.d);
    // 0x00296088: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029608C: ldc1        $f2, -0x59D0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X59D0);
    // 0x00296090: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296094: ldc1        $f1, -0x59C8($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X59C8);
    // 0x00296098: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x0029609C: beq         $a0, $zero, L_002960C4
    if (ctx->r4 == 0) {
        // 0x002960A0: add.d       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
            goto L_002960C4;
    }
    // 0x002960A0: add.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = ctx->f0.d + ctx->f1.d;
    // 0x002960A4: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
L_002960A8:
    // 0x002960A8: beq         $v0, $zero, L_002960B4
    if (ctx->r2 == 0) {
        // 0x002960AC: sra         $a0, $a0, 1
        ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
            goto L_002960B4;
    }
    // 0x002960AC: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x002960B0: mul.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f0.d);
L_002960B4:
    // 0x002960B4: nop

    // 0x002960B8: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x002960BC: bne         $a0, $zero, L_002960A8
    if (ctx->r4 != 0) {
        // 0x002960C0: andi        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 & 0X1;
            goto L_002960A8;
    }
    // 0x002960C0: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
L_002960C4:
    // 0x002960C4: mul.d       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f1.d);
    // 0x002960C8: nop

    // 0x002960CC: mul.d       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f1.d);
    // 0x002960D0: nop

    // 0x002960D4: mul.d       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f1.d);
    // 0x002960D8: trunc.w.d   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_D(ctx->f1.d);
    // 0x002960DC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002960E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002960E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002960E8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002960EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002960F0: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x002960F4: sub.d       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f1.d - ctx->f0.d;
    // 0x002960F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002960FC: ldc1        $f1, -0x59C0($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X59C0);
    // 0x00296100: mul.d       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f1.d);
    // 0x00296104: trunc.w.d   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_D(ctx->f0.d);
    // 0x00296108: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0029610C: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_00296110:
    // 0x00296110: jr          $ra
    // 0x00296114: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00296114: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0044957C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044957C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00449580: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x00449584: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x00449588: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0044958C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00449590: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00449594: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00449598: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044959C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004495A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004495A4: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x004495A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004495AC: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x004495B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004495B4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x004495B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004495BC: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x004495C0: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
L_004495C4:
    // 0x004495C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004495C8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004495CC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004495D0: jal         0x002017D4
    // 0x004495D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004495D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x004495D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004495DC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004495E0: beq         $v0, $zero, L_004496A4
    if (ctx->r2 == 0) {
        // 0x004495E4: nop
    
            goto L_004496A4;
    }
    // 0x004495E4: nop

    // 0x004495E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004495EC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004495F0: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x004495F4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004495F8: jal         0x002017D4
    // 0x004495FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004495FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00449600: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00449604: jal         0x002017D4
    // 0x00449608: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00449608: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0044960C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00449610: jal         0x002017D4
    // 0x00449614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00449614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00449618: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x0044961C: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x00449620: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x00449624: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00449628: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044962C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00449630: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x00449634: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    // 0x00449638: bne         $s1, $zero, L_00449650
    if (ctx->r17 != 0) {
        // 0x0044963C: add.s       $f21, $f20, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_00449650;
    }
    // 0x0044963C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00449640: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x00449644: nop

    // 0x00449648: bc1t        L_004496A4
    if (c1cs) {
        // 0x0044964C: nop
    
            goto L_004496A4;
    }
    // 0x0044964C: nop

L_00449650:
    // 0x00449650: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449654: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449658: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044965C: jal         0x002017D4
    // 0x00449660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00449660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x00449664: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00449668: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0044966C: bne         $s1, $v0, L_00449684
    if (ctx->r17 != ctx->r2) {
        // 0x00449670: nop
    
            goto L_00449684;
    }
    // 0x00449670: nop

    // 0x00449674: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x00449678: nop

    // 0x0044967C: bc1t        L_004496A4
    if (c1cs) {
        // 0x00449680: nop
    
            goto L_004496A4;
    }
    // 0x00449680: nop

L_00449684:
    // 0x00449684: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x00449688: nop

    // 0x0044968C: bc1f        L_004495C4
    if (!c1cs) {
        // 0x00449690: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_004495C4;
    }
    // 0x00449690: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x00449694: c.le.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl <= ctx->f21.fl;
    // 0x00449698: nop

    // 0x0044969C: bc1f        L_004495C4
    if (!c1cs) {
        // 0x004496A0: nop
    
            goto L_004495C4;
    }
    // 0x004496A0: nop

L_004496A4:
    // 0x004496A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004496A8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004496AC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004496B0: jal         0x002017D4
    // 0x004496B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x004496B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x004496B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004496BC: jal         0x002017D4
    // 0x004496C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x004496C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x004496C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004496C8: jal         0x002017D4
    // 0x004496CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x004496CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x004496D0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004496D4: bnel        $v0, $zero, L_004496DC
    if (ctx->r2 != 0) {
        // 0x004496D8: mov.s       $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
            goto L_004496DC;
    }
    goto skip_0;
    // 0x004496D8: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    skip_0:
L_004496DC:
    // 0x004496DC: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
    // 0x004496E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004496E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004496E8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x004496EC: jal         0x004101B8
    // 0x004496F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_004101B8(rdram, ctx);
        goto after_8;
    // 0x004496F0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_8:
    // 0x004496F4: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x004496F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x004496FC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00449700: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00449704: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00449708: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044970C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00449710: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x00449714: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00449718: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0044971C: jr          $ra
    // 0x00449720: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00449720: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00451320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451324: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00451328: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x0045132C: lw          $v0, 0x518($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X518);
    // 0x00451330: sw          $zero, 0xBF4($a2)
    MEM_W(0XBF4, ctx->r6) = 0;
    // 0x00451334: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x00451338: lw          $v0, 0x514($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X514);
    // 0x0045133C: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00451340: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00451344: addiu       $a1, $a1, -0x78D8
    ctx->r5 = ADD32(ctx->r5, -0X78D8);
    // 0x00451348: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045134C: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00451350: jal         0x00416644
    // 0x00451354: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00451354: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00451358: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045135C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451360: jr          $ra
    // 0x00451364: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451364: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025ED4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025ED4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025ED50: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025ED54: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x0025ED58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025ED5C: lwc1        $f3, 0x7800($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7800);
    // 0x0025ED60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025ED64: lwc1        $f2, 0x7804($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7804);
    // 0x0025ED68: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x0025ED6C: nop

    // 0x0025ED70: bc1f        L_0025EDAC
    if (!c1cs) {
        // 0x0025ED74: nop
    
            goto L_0025EDAC;
    }
    // 0x0025ED74: nop

    // 0x0025ED78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025ED7C: lwc1        $f0, 0x7808($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7808);
    // 0x0025ED80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025ED84: lwc1        $f1, 0x780C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X780C);
    // 0x0025ED88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025ED8C: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x0025ED90: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0025ED94: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x0025ED98: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x0025ED9C: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x0025EDA0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025EDA4: j           L_0025EDF0
    // 0x0025EDA8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
        goto L_0025EDF0;
    // 0x0025EDA8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_0025EDAC:
    // 0x0025EDAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025EDB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025EDB4: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x0025EDB8: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x0025EDBC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x0025EDC0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x0025EDC4: lwc1        $f1, 0x40($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X40);
    // 0x0025EDC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EDCC: lwc1        $f0, 0x7810($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7810);
    // 0x0025EDD0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025EDD4: nop

    // 0x0025EDD8: bc1f        L_0025EDF0
    if (!c1cs) {
        // 0x0025EDDC: nop
    
            goto L_0025EDF0;
    }
    // 0x0025EDDC: nop

    // 0x0025EDE0: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x0025EDE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EDE8: lwc1        $f0, 0x7814($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7814);
    // 0x0025EDEC: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_0025EDF0:
    // 0x0025EDF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EDF4: lwc1        $f0, 0x7818($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7818);
    // 0x0025EDF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EDFC: lwc1        $f1, 0x781C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X781C);
    // 0x0025EE00: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0025EE04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0025EE08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025EE0C: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x0025EE10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025EE14: addiu       $v0, $v0, -0x4740
    ctx->r2 = ADD32(ctx->r2, -0X4740);
    // 0x0025EE18: swc1        $f1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025EE1C: jal         0x0021D928
    // 0x0025EE20: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x0025EE20: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    after_0:
    // 0x0025EE24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025EE28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025EE2C: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x0025EE30: jr          $ra
    // 0x0025EE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025EE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00452A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452A28: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452A2C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00452A30: addiu       $a2, $a2, -0x3650
    ctx->r6 = ADD32(ctx->r6, -0X3650);
    // 0x00452A34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452A38: jal         0x00416894
    // 0x00452A3C: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452A3C: nop

    after_0:
    // 0x00452A40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452A48: jr          $ra
    // 0x00452A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A4648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A4648: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002A464C: c.lt.s      $f2, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f2.fl < ctx->f23.fl;
    // turok2: reconnected split function: a stray ELF symbol at 0x002A4650 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002A4650(rdram, ctx);
;}
RECOMP_FUNC void func_0026E48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E48C: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x0026E490: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0026E494: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0026E498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026E49C: jr          $ra
    // 0x0026E4A0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0026E4A0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0026EBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EBDC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0026EBE0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0026EBE4: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x0026EBE8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026EBEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026EBF0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0026EBF4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0026EBF8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0026EBFC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0026EC00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026EC04: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x0026EC08: jal         0x0029DFF0
    // 0x0026EC0C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0026EC0C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x0026EC10: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0026EC14: beq         $s0, $zero, L_0026ECC4
    if (ctx->r16 == 0) {
        // 0x0026EC18: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_0026ECC4;
    }
    // 0x0026EC18: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0026EC1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026EC20: jal         0x00200738
    // 0x0026EC24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0026EC24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0026EC28: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x0026EC2C: jal         0x00200574
    // 0x0026EC30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x0026EC30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0026EC34: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x0026EC38: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0026EC3C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0026EC40: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0026EC44: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0026EC48: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0026EC4C: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
    // 0x0026EC50: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0026EC54: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x0026EC58: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x0026EC5C: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0026EC60: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    // 0x0026EC64: sw          $t1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r9;
    // 0x0026EC68: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0026EC6C: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0026EC70: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x0026EC74: sw          $s2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r18;
    // 0x0026EC78: beq         $s2, $zero, L_0026EC84
    if (ctx->r18 == 0) {
        // 0x0026EC7C: swc1        $f0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
            goto L_0026EC84;
    }
    // 0x0026EC7C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0026EC80: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
L_0026EC84:
    // 0x0026EC84: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x0026EC88: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026EC8C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026EC90: jal         0x00225D94
    // 0x0026EC94: nop

    func_00225D94(rdram, ctx);
        goto after_3;
    // 0x0026EC94: nop

    after_3:
    // 0x0026EC98: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x0026EC9C: jal         0x0026EE30
    // 0x0026ECA0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0026EE30(rdram, ctx);
        goto after_4;
    // 0x0026ECA0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0026ECA4: lh          $a1, 0x2($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X2);
    // 0x0026ECA8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026ECAC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026ECB0: jal         0x00225D94
    // 0x0026ECB4: nop

    func_00225D94(rdram, ctx);
        goto after_5;
    // 0x0026ECB4: nop

    after_5:
    // 0x0026ECB8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x0026ECBC: jal         0x0026EE30
    // 0x0026ECC0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0026EE30(rdram, ctx);
        goto after_6;
    // 0x0026ECC0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_6:
L_0026ECC4:
    // 0x0026ECC4: jal         0x0029E010
    // 0x0026ECC8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x0026ECC8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x0026ECCC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0026ECD0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0026ECD4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0026ECD8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0026ECDC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0026ECE0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026ECE4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026ECE8: jr          $ra
    // 0x0026ECEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0026ECEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
