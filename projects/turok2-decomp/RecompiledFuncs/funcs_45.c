#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0028B3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028B3EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028B3F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028B3F4: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x0028B3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028B3FC: jal         0x0029B820
    // 0x0028B400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0028B400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0028B404: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x0028B408: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0028B40C: jal         0x0029B820
    // 0x0028B410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0028B410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0028B414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028B418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028B41C: jr          $ra
    // 0x0028B420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028B420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00224414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224414: jr          $ra
    // 0x00224418: nop

    return;
    // 0x00224418: nop

;}
RECOMP_FUNC void func_00461938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428A18:
    // 0x00461938: lh          $a1, 0x2B8C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2B8C);
    // 0x0046193C: jal         0x00274008
    // 0x00461940: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    entry_00274008(rdram, ctx);
        goto after_0;
    // 0x00461940: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    after_0:
    // 0x00461944: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00461948: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0046194C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00461950: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00461954: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00461958: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0046195C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00461960: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00461964: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00461968: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0046196C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00461970: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00461974: jal         0x00299FE4
    // 0x00461978: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    func_00299FE4(rdram, ctx);
        goto after_1;
    // 0x00461978: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_1:
    // 0x0046197C: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00461980: addiu       $s3, $s3, 0xE20
    ctx->r19 = ADD32(ctx->r19, 0XE20);
    // 0x00461984: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x00461988: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
L_0046198C:
    // 0x0046198C: jal         0x00428ABC
    // 0x00461990: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    entry_00428ABC(rdram, ctx);
        goto after_2;
    // 0x00461990: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00461994: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00461998: jal         0x0029A080
    // 0x0046199C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029A080(rdram, ctx);
        goto after_3;
    // 0x0046199C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x004619A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004619A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004619A8: jal         0x0029B6F0
    // 0x004619AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x004619AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x004619B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004619B4: jal         0x0029A080
    // 0x004619B8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029A080(rdram, ctx);
        goto after_5;
    // 0x004619B8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x004619BC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004619C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004619C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004619C8: jal         0x0029B6F0
    // 0x004619CC: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x004619CC: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    after_6:
    // 0x004619D0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x004619D4: jal         0x00428B58
    // 0x004619D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    entry_00428B58(rdram, ctx);
        goto after_7;
    // 0x004619D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x004619DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004619E0: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
    // 0x004619E4: beq         $v0, $zero, L_00461A20
    if (ctx->r2 == 0) {
        // 0x004619E8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00461A20;
    }
    // 0x004619E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004619EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004619F0: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_004619F4:
    // 0x004619F4: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x004619F8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x004619FC: bnel        $v0, $zero, L_00461A0C
    if (ctx->r2 != 0) {
        // 0x00461A00: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00461A0C;
    }
    goto skip_0;
    // 0x00461A00: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x00461A04: j           L_00428A18
    // 0x00461A08: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    func_00428A18(rdram, ctx);
    return;
    // 0x00461A08: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_00461A0C:
    // 0x00461A0C: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00461A10: bne         $v0, $zero, L_004619F4
    if (ctx->r2 != 0) {
        // 0x00461A14: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_004619F4;
    }
    // 0x00461A14: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00461A18: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00461A1C: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
L_00461A20:
    // 0x00461A20: beql        $a0, $v0, L_00461A28
    if (ctx->r4 == ctx->r2) {
        // 0x00461A24: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00461A28;
    }
    goto skip_1;
    // 0x00461A24: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00461A28:
    // 0x00461A28: bgtz        $s0, L_0046198C
    if (SIGNED(ctx->r16) > 0) {
        // 0x00461A2C: nop
    
            goto L_0046198C;
    }
    // 0x00461A2C: nop

    // 0x00461A30: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00461A34: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
    // 0x00461A38: beq         $v0, $zero, L_00461A80
    if (ctx->r2 == 0) {
        // 0x00461A3C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00461A80;
    }
    // 0x00461A3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00461A40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00461A44: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00461A48: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
L_00461A4C:
    // 0x00461A4C: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x00461A50: bnel        $v0, $zero, L_00461A74
    if (ctx->r2 != 0) {
        // 0x00461A54: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00461A74;
    }
    goto skip_2;
    // 0x00461A54: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x00461A58: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x00461A5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00461A60: beql        $v0, $zero, L_00461A74
    if (ctx->r2 == 0) {
        // 0x00461A64: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00461A74;
    }
    goto skip_3;
    // 0x00461A64: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x00461A68: sllv        $v0, $a2, $a0
    ctx->r2 = S32(ctx->r6 << (ctx->r4 & 31));
    // 0x00461A6C: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
    // 0x00461A70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00461A74:
    // 0x00461A74: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00461A78: bne         $v0, $zero, L_00461A4C
    if (ctx->r2 != 0) {
        // 0x00461A7C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00461A4C;
    }
    // 0x00461A7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00461A80:
    // 0x00461A80: jal         0x0029A050
    // 0x00461A84: nop

    func_0029A050(rdram, ctx);
        goto after_8;
    // 0x00461A84: nop

    after_8:
    // 0x00461A88: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00461A8C: sb          $s2, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r18;
    // 0x00461A90: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00461A94: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00461A98: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00461A9C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00461AA0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00461AA4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00461AA8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00461AAC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00461AB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00461AB4: jr          $ra
    // 0x00461AB8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00461AB8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002842B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002842B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002842B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002842BC: sw          $v0, 0x1BB8($at)
    MEM_W(0X1BB8, ctx->r1) = ctx->r2;
    // 0x002842C0: jr          $ra
    // 0x002842C4: nop

    return;
    // 0x002842C4: nop

;}
RECOMP_FUNC void func_00290D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290D84: jr          $ra
    // 0x00290D88: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    return;
    // 0x00290D88: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0026F400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F400: lwc1        $f3, 0x0($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0026F404: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0026F408: mul.s       $f5, $f3, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f5.fl);
    // 0x0026F40C: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026F410: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0026F414: mul.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x0026F418: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0026F41C: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0026F420: mul.s       $f2, $f1, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026F424: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0026F428: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026F42C: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0026F430: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0026F434: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0026F438: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F43C: add.s       $f5, $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f6.fl;
    // 0x0026F440: add.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x0026F444: add.s       $f5, $f5, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f2.fl;
    // 0x0026F448: add.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0026F44C: c.eq.s      $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f1.fl == ctx->f5.fl;
    // 0x0026F450: nop

    // 0x0026F454: bc1t        L_0026F470
    if (c1cs) {
            // 0x0026F458: nop

    func_0026F470(rdram, ctx);
    return;
    }
    // 0x0026F458: nop

    // 0x0026F45C: sub.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f5.fl;
    // 0x0026F460: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0026F464: sub.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f5.fl;
    // 0x0026F468: jr          $ra
    // 0x0026F46C: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    return;
    // 0x0026F46C: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
;}
RECOMP_FUNC void func_00246860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246860: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00246864: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00246868: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024686C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00246870: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00246874: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00246878: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0024687C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00246880: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00246884: lw          $v0, 0xEC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XEC);
    // 0x00246888: beq         $v0, $zero, L_002468B0
    if (ctx->r2 == 0) {
        // 0x0024688C: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_002468B0;
    }
    // 0x0024688C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00246890: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00246894: beq         $v0, $s3, L_002468FC
    if (ctx->r2 == ctx->r19) {
        // 0x00246898: nop
    
            goto L_002468FC;
    }
    // 0x00246898: nop

    // 0x0024689C: jal         0x00275F7C
    // 0x002468A0: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x002468A0: nop

    after_0:
    // 0x002468A4: lw          $a1, 0xEC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XEC);
    // 0x002468A8: jal         0x00275D34
    // 0x002468AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x002468AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
L_002468B0:
    // 0x002468B0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x002468B4: beq         $v0, $zero, L_002468D4
    if (ctx->r2 == 0) {
        // 0x002468B8: nop
    
            goto L_002468D4;
    }
    // 0x002468B8: nop

    // 0x002468BC: bltz        $v0, L_002468D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x002468C0: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_002468D8;
    }
    // 0x002468C0: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x002468C4: bnel        $v0, $zero, L_002468D8
    if (ctx->r2 != 0) {
        // 0x002468C8: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_002468D8;
    }
    goto skip_0;
    // 0x002468C8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x002468CC: j           L_002468D8
    // 0x002468D0: nop

        goto L_002468D8;
    // 0x002468D0: nop

L_002468D4:
    // 0x002468D4: lw          $s0, 0x80($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X80);
L_002468D8:
    // 0x002468D8: jal         0x00275F7C
    // 0x002468DC: nop

    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x002468DC: nop

    after_2:
    // 0x002468E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002468E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002468E8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x002468EC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x002468F0: jal         0x00275C6C
    // 0x002468F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00275C6C(rdram, ctx);
        goto after_3;
    // 0x002468F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x002468F8: sw          $v0, 0xEC($s2)
    MEM_W(0XEC, ctx->r18) = ctx->r2;
L_002468FC:
    // 0x002468FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00246900: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00246904: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00246908: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0024690C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00246910: jr          $ra
    // 0x00246914: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00246914: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002555CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002555CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002555D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002555D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002555D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002555DC: lwc1        $f1, 0x716C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X716C);
    // 0x002555E0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x002555E4: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x002555E8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x002555EC: bne         $v1, $v0, L_002555FC
    if (ctx->r3 != ctx->r2) {
        // 0x002555F0: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_002555FC;
    }
    // 0x002555F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002555F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002555F8: lwc1        $f1, 0x7170($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7170);
L_002555FC:
    // 0x002555FC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00255600: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x00255604: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00255608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025560C: jal         0x00267800
    // 0x00255610: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    func_00267800(rdram, ctx);
        goto after_0;
    // 0x00255610: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x00255614: beq         $v0, $zero, L_00255634
    if (ctx->r2 == 0) {
        // 0x00255618: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00255634;
    }
    // 0x00255618: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0025561C: jal         0x00268798
    // 0x00255620: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00268798(rdram, ctx);
        goto after_1;
    // 0x00255620: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x00255624: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x00255628: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0025562C: jal         0x0020EEF8
    // 0x00255630: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x00255630: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
L_00255634:
    // 0x00255634: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00255638: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0025563C: bne         $v0, $zero, L_00255660
    if (ctx->r2 != 0) {
        // 0x00255640: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00255660;
    }
    // 0x00255640: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00255644: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00255648: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025564C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00255650: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00255654: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00255658: jal         0x00275544
    // 0x0025565C: addiu       $a0, $zero, 0x3AC1
    ctx->r4 = ADD32(0, 0X3AC1);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0025565C: addiu       $a0, $zero, 0x3AC1
    ctx->r4 = ADD32(0, 0X3AC1);
    after_3:
L_00255660:
    // 0x00255660: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00255664: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00255668: jr          $ra
    // 0x0025566C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025566C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00401C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00401C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00401C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00401C28: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00401C2C: beq         $v0, $zero, L_00401C64
    if (ctx->r2 == 0) {
        // 0x00401C30: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00401C64;
    }
    // 0x00401C30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00401C34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00401C38: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x00401C3C: beq         $v0, $zero, L_00401C68
    if (ctx->r2 == 0) {
        // 0x00401C40: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00401C68;
    }
    // 0x00401C40: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00401C44: jal         0x00284188
    // 0x00401C48: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00401C48: nop

    after_0:
    // 0x00401C4C: bne         $v0, $zero, L_00401C68
    if (ctx->r2 != 0) {
        // 0x00401C50: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00401C68;
    }
    // 0x00401C50: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00401C54: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00401C58: lw          $v0, -0x5374($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5374);
    // 0x00401C5C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00401C60: sltu        $s0, $s0, $v0
    ctx->r16 = ctx->r16 < ctx->r2 ? 1 : 0;
L_00401C64:
    // 0x00401C64: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00401C68:
    // 0x00401C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00401C6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00401C70: jr          $ra
    // 0x00401C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00401C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238888: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0023888C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00238890: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00238894: lw          $s0, -0x6730($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6730);
    // 0x00238898: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0023889C: beq         $s0, $zero, L_002388FC
    if (ctx->r16 == 0) {
        // 0x002388A0: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_002388FC;
    }
    // 0x002388A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
L_002388A4:
    // 0x002388A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x002388A8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x002388AC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x002388B0: jal         0x0028124C
    // 0x002388B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0028124C(rdram, ctx);
        goto after_0;
    // 0x002388B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002388B8: beq         $v0, $zero, L_002388F0
    if (ctx->r2 == 0) {
        // 0x002388BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002388F0;
    }
    // 0x002388BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002388C0: lbu         $v0, 0x43($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X43);
    // 0x002388C4: lbu         $a1, 0x40($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X40);
    // 0x002388C8: lbu         $a2, 0x41($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X41);
    // 0x002388CC: lbu         $a3, 0x42($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X42);
    // 0x002388D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002388D4: lbu         $v0, 0x44($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X44);
    // 0x002388D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002388DC: lbu         $v0, 0x45($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X45);
    // 0x002388E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002388E4: lbu         $v0, 0x46($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X46);
    // 0x002388E8: jal         0x00281060
    // 0x002388EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x002388EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
L_002388F0:
    // 0x002388F0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x002388F4: bne         $s0, $zero, L_002388A4
    if (ctx->r16 != 0) {
        // 0x002388F8: nop
    
            goto L_002388A4;
    }
    // 0x002388F8: nop

L_002388FC:
    // 0x002388FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00238900: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00238904: jr          $ra
    // 0x00238908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00238908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00232FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232FF8: jr          $ra
    // 0x00232FFC: nop

    return;
    // 0x00232FFC: nop

;}
RECOMP_FUNC void func_00402CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402CC0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00402CC4: lw          $v0, -0xA10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA10);
    // 0x00402CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402CCC: bne         $v0, $zero, L_00402CDC
    if (ctx->r2 != 0) {
        // 0x00402CD0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00402CDC;
    }
    // 0x00402CD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00402CD4: jal         0x00243414
    // 0x00402CD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00402CD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00402CDC:
    // 0x00402CDC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00402CE0: jr          $ra
    // 0x00402CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267088: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x0026708C: jr          $ra
    // turok2: restored delay slot: a stray ELF symbol at 0x00267090 sits on this
    // jump's delay slot, so the recompiler stopped at the jump and
    // dropped the instruction. On the hardware it runs before the
    // jump takes effect.
    // 0x00267090: lw $r2, 0X14($r4)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    return;
;}
RECOMP_FUNC void func_0040B040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B040: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B044: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B048: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B04C: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B050: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B054: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B060: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B064: jal         0x00246108
    // 0x0040B068: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B068: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B06C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B070: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B074: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B078: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B07C: jal         0x00245BAC
    // 0x0040B080: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B080: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B084: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B088: beq         $v0, $zero, L_0040B09C
    if (ctx->r2 == 0) {
        // 0x0040B08C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B09C;
    }
    // 0x0040B08C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B090: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B094: jal         0x00243414
    // 0x0040B098: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B098: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_0040B09C:
    // 0x0040B09C: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B0A0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B0A4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B0A8: jr          $ra
    // 0x0040B0AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B0AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00453138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A174:
    // 0x00453138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045313C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00453140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00453144: jal         0x00266B80
    // 0x00453148: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00453148: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0045314C: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00453150: beq         $v0, $v1, L_00453164
    if (ctx->r2 == ctx->r3) {
        // 0x00453154: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_00453164;
    }
    // 0x00453154: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x00453158: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0045315C: j           L_0041A174
    // 0x00453160: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041A174(rdram, ctx);
    return;
    // 0x00453160: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00453164:
    // 0x00453164: lui         $v1, 0xFF7F
    ctx->r3 = S32(0XFF7F << 16);
    // 0x00453168: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0045316C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00453170: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00453174: jal         0x00424500
    // 0x00453178: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_00424500(rdram, ctx);
        goto after_1;
    // 0x00453178: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x0045317C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00453180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00453184: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00453188: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045318C: jr          $ra
    // 0x00453190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00453190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00259FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259FF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259FF4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259FF8: lhu         $a3, 0x96($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X96);
    // 0x00259FFC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A000: addiu       $a2, $a2, -0x6D0
    ctx->r6 = ADD32(ctx->r6, -0X6D0);
    // 0x0025A004: jal         0x00245A98
    // 0x0025A008: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A008: nop

    after_0:
    // 0x0025A00C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A010: jr          $ra
    // 0x0025A014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002819E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002819E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002819E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002819E8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002819EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002819F0: addiu       $s2, $s3, 0x40
    ctx->r18 = ADD32(ctx->r19, 0X40);
    // 0x002819F4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002819F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002819FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281A00: lw          $s1, 0xE2C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XE2C);
    // 0x00281A04: beq         $s1, $zero, L_00281A30
    if (ctx->r17 == 0) {
        // 0x00281A08: addiu       $a0, $s2, 0xE28
        ctx->r4 = ADD32(ctx->r18, 0XE28);
            goto L_00281A30;
    }
    // 0x00281A08: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
L_00281A0C:
    // 0x00281A0C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00281A10: jal         0x00200738
    // 0x00281A14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00281A14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00281A18: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x00281A1C: jal         0x00200518
    // 0x00281A20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00281A20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00281A24: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00281A28: bne         $s1, $zero, L_00281A0C
    if (ctx->r17 != 0) {
        // 0x00281A2C: addiu       $a0, $s2, 0xE28
        ctx->r4 = ADD32(ctx->r18, 0XE28);
            goto L_00281A0C;
    }
    // 0x00281A2C: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
L_00281A30:
    // 0x00281A30: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00281A34: lw          $s2, -0x6730($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6730);
    // 0x00281A38: beq         $s2, $zero, L_00281A7C
    if (ctx->r18 == 0) {
        // 0x00281A3C: nop
    
            goto L_00281A7C;
    }
    // 0x00281A3C: nop

L_00281A40:
    // 0x00281A40: lw          $s1, 0xE2C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XE2C);
    // 0x00281A44: beq         $s1, $zero, L_00281A70
    if (ctx->r17 == 0) {
        // 0x00281A48: addiu       $a0, $s2, 0xE28
        ctx->r4 = ADD32(ctx->r18, 0XE28);
            goto L_00281A70;
    }
    // 0x00281A48: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
L_00281A4C:
    // 0x00281A4C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00281A50: jal         0x00200738
    // 0x00281A54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x00281A54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00281A58: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x00281A5C: jal         0x00200518
    // 0x00281A60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_3;
    // 0x00281A60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00281A64: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00281A68: bne         $s1, $zero, L_00281A4C
    if (ctx->r17 != 0) {
        // 0x00281A6C: addiu       $a0, $s2, 0xE28
        ctx->r4 = ADD32(ctx->r18, 0XE28);
            goto L_00281A4C;
    }
    // 0x00281A6C: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
L_00281A70:
    // 0x00281A70: lw          $s2, 0x4($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X4);
    // 0x00281A74: bne         $s2, $zero, L_00281A40
    if (ctx->r18 != 0) {
        // 0x00281A78: nop
    
            goto L_00281A40;
    }
    // 0x00281A78: nop

L_00281A7C:
    // 0x00281A7C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00281A80: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00281A84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00281A88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281A8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281A90: jr          $ra
    // 0x00281A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00281A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004270F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004270F8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004270FC: beq         $v0, $zero, L_0042712C
    if (ctx->r2 == 0) {
        // 0x00427100: nop
    
            goto L_0042712C;
    }
    // 0x00427100: nop

L_00427104:
    // 0x00427104: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x00427108: addiu       $v0, $a1, -0x41
    ctx->r2 = ADD32(ctx->r5, -0X41);
    // 0x0042710C: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00427110: beq         $v0, $zero, L_0042711C
    if (ctx->r2 == 0) {
        // 0x00427114: addiu       $v0, $a1, 0x20
        ctx->r2 = ADD32(ctx->r5, 0X20);
            goto L_0042711C;
    }
    // 0x00427114: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x00427118: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_0042711C:
    // 0x0042711C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00427120: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00427124: bne         $v0, $zero, L_00427104
    if (ctx->r2 != 0) {
        // 0x00427128: nop
    
            goto L_00427104;
    }
    // 0x00427128: nop

L_0042712C:
    // 0x0042712C: jr          $ra
    // 0x00427130: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00427130: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00401D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401D80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00401D84: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x00401D88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x00401D8C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00401D90: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
L_00401D94:
    // 0x00401D94: beq         $a3, $t1, L_00401DA0
    if (ctx->r7 == ctx->r9) {
        // 0x00401D98: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00401DA0;
    }
    // 0x00401D98: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00401D9C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
L_00401DA0:
    // 0x00401DA0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00401DA4: lwc1        $f3, 0x4($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00401DA8: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00401DAC: sub.s       $f5, $f0, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00401DB0: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00401DB4: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00401DB8: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00401DBC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00401DC0: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00401DC4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00401DC8: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00401DCC: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00401DD0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00401DD4: c.lt.s      $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f6.fl < ctx->f1.fl;
    // 0x00401DD8: nop

    // 0x00401DDC: bc1f        L_00401E18
    if (!c1cs) {
        // 0x00401DE0: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_00401E18;
    }
    // 0x00401DE0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x00401DE4: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x00401DE8: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00401DEC: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00401DF0: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x00401DF4: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00401DF8: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00401DFC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00401E00: c.lt.s      $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f6.fl < ctx->f1.fl;
    // 0x00401E04: nop

    // 0x00401E08: bc1f        L_00401E1C
    if (!c1cs) {
        // 0x00401E0C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00401E1C;
    }
    // 0x00401E0C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00401E10: jr          $ra
    // 0x00401E14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00401E14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00401E18:
    // 0x00401E18: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_00401E1C:
    // 0x00401E1C: slti        $v0, $a3, 0x4
    ctx->r2 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x00401E20: bne         $v0, $zero, L_00401D94
    if (ctx->r2 != 0) {
        // 0x00401E24: addiu       $t0, $t0, 0xC
        ctx->r8 = ADD32(ctx->r8, 0XC);
            goto L_00401D94;
    }
    // 0x00401E24: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x00401E28: jr          $ra
    // 0x00401E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00401E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0028D0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D0B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D0BC: addiu       $v0, $v0, -0xD70
    ctx->r2 = ADD32(ctx->r2, -0XD70);
    // 0x0028D0C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0028D0C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0028D0C8: jr          $ra
    // 0x0028D0CC: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    return;
    // 0x0028D0CC: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
;}
RECOMP_FUNC void func_002A12CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A12CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002A12D0: lw          $v0, 0x5C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C48);
    // 0x002A12D4: jr          $ra
    // 0x002A12D8: nop

    return;
    // 0x002A12D8: nop

;}
RECOMP_FUNC void func_002933A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002933A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002933A8: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002933AC: jal         0x0026D5E4
    // 0x002933B0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    func_0026D5E4(rdram, ctx);
        goto after_0;
    // 0x002933B0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x002933B4: beq         $v1, $zero, L_002933C4
    if (ctx->r3 == 0) {
        // 0x002933B8: nop
    
            goto L_002933C4;
    }
    // 0x002933B8: nop

    // 0x002933BC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002933C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_002933C4:
    // 0x002933C4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x002933C8: beq         $v1, $zero, L_002933D8
    if (ctx->r3 == 0) {
        // 0x002933CC: nop
    
            goto L_002933D8;
    }
    // 0x002933CC: nop

    // 0x002933D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002933D4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002933D8:
    // 0x002933D8: jr          $ra
    // 0x002933DC: nop

    return;
    // 0x002933DC: nop

;}
RECOMP_FUNC void func_00264940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264940: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264944: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00264948: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0026494C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00264950: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00264954: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00264958: jr          $ra
    // 0x0026495C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0026495C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002838A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002838A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002838A8: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x002838AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002838B0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002838B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002838B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002838BC: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x002838C0: lw          $s1, 0xD8($v1)
    ctx->r17 = MEM_W(ctx->r3, 0XD8);
    // 0x002838C4: bne         $v0, $zero, L_00283A38
    if (ctx->r2 != 0) {
        // 0x002838C8: nop
    
            goto L_00283A38;
    }
    // 0x002838C8: nop

    // 0x002838CC: lw          $v0, 0x54($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X54);
    // 0x002838D0: beq         $v0, $zero, L_002839B0
    if (ctx->r2 == 0) {
        // 0x002838D4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002839B0;
    }
    // 0x002838D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002838D8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002838DC: lw          $s0, -0x6770($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6770);
    // 0x002838E0: beq         $s0, $zero, L_0028398C
    if (ctx->r16 == 0) {
        // 0x002838E4: nop
    
            goto L_0028398C;
    }
    // 0x002838E4: nop

    // 0x002838E8: jal         0x002568CC
    // 0x002838EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002568CC(rdram, ctx);
        goto after_0;
    // 0x002838EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002838F0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002838F4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x002838F8: lw          $v0, 0xB8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB8);
    // 0x002838FC: beq         $v0, $zero, L_00283980
    if (ctx->r2 == 0) {
        // 0x00283900: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00283980;
    }
    // 0x00283900: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00283904: lw          $a0, 0xBC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XBC);
    // 0x00283908: bnel        $a0, $v0, L_00283984
    if (ctx->r4 != ctx->r2) {
        // 0x0028390C: sw          $zero, 0x4D4($s0)
        MEM_W(0X4D4, ctx->r16) = 0;
            goto L_00283984;
    }
    goto skip_0;
    // 0x0028390C: sw          $zero, 0x4D4($s0)
    MEM_W(0X4D4, ctx->r16) = 0;
    skip_0:
    // 0x00283910: lw          $v0, 0xC0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC0);
    // 0x00283914: bnel        $v0, $a0, L_00283984
    if (ctx->r2 != ctx->r4) {
        // 0x00283918: sw          $zero, 0x4D4($s0)
        MEM_W(0X4D4, ctx->r16) = 0;
            goto L_00283984;
    }
    goto skip_1;
    // 0x00283918: sw          $zero, 0x4D4($s0)
    MEM_W(0X4D4, ctx->r16) = 0;
    skip_1:
    // 0x0028391C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00283920: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00283924: sw          $v0, 0xBC($v1)
    MEM_W(0XBC, ctx->r3) = ctx->r2;
    // 0x00283928: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0028392C: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x00283930: sw          $v0, 0xC0($v1)
    MEM_W(0XC0, ctx->r3) = ctx->r2;
    // 0x00283934: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00283938: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0028393C: sw          $zero, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = 0;
    // 0x00283940: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00283944: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00283948: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0028394C: sw          $t0, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r8;
    // 0x00283950: sw          $t1, 0xC8($v1)
    MEM_W(0XC8, ctx->r3) = ctx->r9;
    // 0x00283954: sw          $t2, 0xCC($v1)
    MEM_W(0XCC, ctx->r3) = ctx->r10;
    // 0x00283958: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0028395C: swc1        $f0, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f0.u32l;
    // 0x00283960: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00283964: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00283968: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0028396C: jal         0x002242B4
    // 0x00283970: nop

    func_002242B4(rdram, ctx);
        goto after_1;
    // 0x00283970: nop

    after_1:
    // 0x00283974: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283978: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0028397C: sw          $v0, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r2;
L_00283980:
    // 0x00283980: sw          $zero, 0x4D4($s0)
    MEM_W(0X4D4, ctx->r16) = 0;
L_00283984:
    // 0x00283984: sw          $zero, 0x4D8($s0)
    MEM_W(0X4D8, ctx->r16) = 0;
    // 0x00283988: sw          $zero, 0x4E8($s0)
    MEM_W(0X4E8, ctx->r16) = 0;
L_0028398C:
    // 0x0028398C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00283990: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00283994: jal         0x002819E0
    // 0x00283998: nop

    func_002819E0(rdram, ctx);
        goto after_2;
    // 0x00283998: nop

    after_2:
    // 0x0028399C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002839A0: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x002839A4: jal         0x0026EDA8
    // 0x002839A8: nop

    func_0026EDA8(rdram, ctx);
        goto after_3;
    // 0x002839A8: nop

    after_3:
    // 0x002839AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002839B0:
    // 0x002839B0: beq         $s1, $v0, L_00283A10
    if (ctx->r17 == ctx->r2) {
        // 0x002839B4: nop
    
            goto L_00283A10;
    }
    // 0x002839B4: nop

    // 0x002839B8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x002839BC: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x002839C0: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x002839C4: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x002839C8: beq         $v0, $s1, L_00283A10
    if (ctx->r2 == ctx->r17) {
        // 0x002839CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00283A10;
    }
    // 0x002839CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002839D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002839D4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x002839D8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x002839DC: addiu       $a3, $a3, 0x34
    ctx->r7 = ADD32(ctx->r7, 0X34);
    // 0x002839E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002839E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002839E8: jal         0x0042C560
    // 0x002839EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_0042C560(rdram, ctx);
        goto after_4;
    // 0x002839EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_4:
    // 0x002839F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002839F4: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
    // 0x002839F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x002839FC: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x00283A00: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00283A04: sw          $a2, 0x30($at)
    MEM_W(0X30, ctx->r1) = ctx->r6;
    // 0x00283A08: jal         0x0042AC0C
    // 0x00283A0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0042AC0C(rdram, ctx);
        goto after_5;
    // 0x00283A0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_00283A10:
    // 0x00283A10: jal         0x0041266C
    // 0x00283A14: nop

    func_0041266C(rdram, ctx);
        goto after_6;
    // 0x00283A14: nop

    after_6:
    // 0x00283A18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00283A1C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00283A20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00283A24: sw          $v0, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r2;
    // 0x00283A28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00283A2C: sw          $a0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r4;
    // 0x00283A30: sw          $v0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r2;
    // 0x00283A34: sw          $a0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r4;
L_00283A38:
    // 0x00283A38: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00283A3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00283A40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00283A44: jr          $ra
    // 0x00283A48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00283A48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00429DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429DFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00429E00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00429E04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00429E08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00429E0C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x00429E10: beq         $v0, $zero, L_00429E30
    if (ctx->r2 == 0) {
        // 0x00429E14: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00429E30;
    }
    // 0x00429E14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00429E18: jal         0x00429EC4
    // 0x00429E1C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00429E1C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    after_0:
    // 0x00429E20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429E24: bne         $v1, $zero, L_00429EB4
    if (ctx->r3 != 0) {
        // 0x00429E28: nop
    
            goto L_00429EB4;
    }
    // 0x00429E28: nop

    // 0x00429E2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429E30:
    // 0x00429E30: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00429E34: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00429E38: jal         0x00299680
    // 0x00429E3C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429E3C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00429E40: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429E44: beq         $v1, $zero, L_00429E84
    if (ctx->r3 == 0) {
        // 0x00429E48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00429E84;
    }
    // 0x00429E48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00429E4C: bne         $v1, $v0, L_00429EB4
    if (ctx->r3 != ctx->r2) {
        // 0x00429E50: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00429EB4;
    }
    // 0x00429E50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00429E54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00429E58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00429E5C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00429E60: jal         0x00299680
    // 0x00429E64: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00429E64: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00429E68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429E6C: beq         $v1, $zero, L_00429E88
    if (ctx->r3 == 0) {
        // 0x00429E70: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00429E88;
    }
    // 0x00429E70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00429E74: j           L_00429EB4
    // 0x00429E78: nop

        goto L_00429EB4;
    // 0x00429E78: nop

L_00429E7C:
    // 0x00429E7C: j           L_00429EB4
    // 0x00429E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_00429EB4;
    // 0x00429E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00429E84:
    // 0x00429E84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00429E88:
    // 0x00429E88: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00429E8C: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
L_00429E90:
    // 0x00429E90: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
    // 0x00429E94: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x00429E98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00429E9C: bne         $a0, $v0, L_00429E7C
    if (ctx->r4 != ctx->r2) {
        // 0x00429EA0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00429E7C;
    }
    // 0x00429EA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00429EA4: slti        $v0, $a1, 0x20
    ctx->r2 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x00429EA8: bne         $v0, $zero, L_00429E90
    if (ctx->r2 != 0) {
        // 0x00429EAC: addu        $v0, $s0, $a1
        ctx->r2 = ADD32(ctx->r16, ctx->r5);
            goto L_00429E90;
    }
    // 0x00429EAC: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x00429EB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429EB4:
    // 0x00429EB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00429EB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00429EBC: jr          $ra
    // 0x00429EC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00429EC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00242E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242E34: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00242E38: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00242E3C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00242E40: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00242E44: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00242E48: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00242E4C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00242E50: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00242E54: sdc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X50, ctx->r29);
    // 0x00242E58: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x00242E5C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242E60: addiu       $v1, $zero, -0x7F81
    ctx->r3 = ADD32(0, -0X7F81);
    // 0x00242E64: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242E68: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00242E6C: lw          $s0, 0x10($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X10);
    // 0x00242E70: beq         $s0, $zero, L_0024314C
    if (ctx->r16 == 0) {
        // 0x00242E74: nop
    
            goto L_0024314C;
    }
    // 0x00242E74: nop

    // 0x00242E78: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00242E7C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00242E80: jal         0x0022425C
    // 0x00242E84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00242E84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00242E88: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00242E8C: beq         $s3, $zero, L_0024314C
    if (ctx->r19 == 0) {
        // 0x00242E90: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0024314C;
    }
    // 0x00242E90: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00242E94: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x00242E98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242E9C: beq         $v0, $zero, L_00242EB0
    if (ctx->r2 == 0) {
        // 0x00242EA0: nop
    
            goto L_00242EB0;
    }
    // 0x00242EA0: nop

    // 0x00242EA4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242EA8: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x00242EAC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00242EB0:
    // 0x00242EB0: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00242EB4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00242EB8: beq         $v0, $zero, L_00242F6C
    if (ctx->r2 == 0) {
        // 0x00242EBC: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_00242F6C;
    }
    // 0x00242EBC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x00242EC0: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x00242EC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242EC8: beq         $v0, $zero, L_00242EDC
    if (ctx->r2 == 0) {
        // 0x00242ECC: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00242EDC;
    }
    // 0x00242ECC: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00242ED0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242ED4: j           L_00242F68
    // 0x00242ED8: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
        goto L_00242F68;
    // 0x00242ED8: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_00242EDC:
    // 0x00242EDC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00242EE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242EE4: beq         $v0, $zero, L_00242F04
    if (ctx->r2 == 0) {
        // 0x00242EE8: nop
    
            goto L_00242F04;
    }
    // 0x00242EE8: nop

    // 0x00242EEC: lw          $v0, 0x1A8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1A8);
    // 0x00242EF0: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00242EF4: lwc1        $f20, 0x8($s2)
    ctx->f20.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00242EF8: lwc1        $f21, 0x250($v0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r2, 0X250);
    // 0x00242EFC: j           L_00242F18
    // 0x00242F00: nop

        goto L_00242F18;
    // 0x00242F00: nop

L_00242F04:
    // 0x00242F04: jal         0x002671B4
    // 0x00242F08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00242F08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00242F0C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00242F10: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
    // 0x00242F14: add.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = ctx->f0.fl + ctx->f20.fl;
L_00242F18:
    // 0x00242F18: jal         0x00268A5C
    // 0x00242F1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A5C(rdram, ctx);
        goto after_2;
    // 0x00242F1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00242F20: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00242F24: nop

    // 0x00242F28: bc1f        L_00242F3C
    if (!c1cs) {
        // 0x00242F2C: nop
    
            goto L_00242F3C;
    }
    // 0x00242F2C: nop

    // 0x00242F30: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242F34: j           L_00242F68
    // 0x00242F38: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
        goto L_00242F68;
    // 0x00242F38: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_00242F3C:
    // 0x00242F3C: jal         0x00268A5C
    // 0x00242F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A5C(rdram, ctx);
        goto after_3;
    // 0x00242F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00242F44: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00242F48: nop

    // 0x00242F4C: bc1f        L_00242F60
    if (!c1cs) {
        // 0x00242F50: nop
    
            goto L_00242F60;
    }
    // 0x00242F50: nop

    // 0x00242F54: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242F58: j           L_00242F68
    // 0x00242F5C: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
        goto L_00242F68;
    // 0x00242F5C: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_00242F60:
    // 0x00242F60: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242F64: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
L_00242F68:
    // 0x00242F68: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00242F6C:
    // 0x00242F6C: jal         0x0026AFC0
    // 0x00242F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026AFC0(rdram, ctx);
        goto after_4;
    // 0x00242F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00242F74: beq         $v0, $zero, L_00242FA8
    if (ctx->r2 == 0) {
        // 0x00242F78: nop
    
            goto L_00242FA8;
    }
    // 0x00242F78: nop

    // 0x00242F7C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00242F80: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00242F84: beq         $v0, $zero, L_00242FA8
    if (ctx->r2 == 0) {
        // 0x00242F88: nop
    
            goto L_00242FA8;
    }
    // 0x00242F88: nop

    // 0x00242F8C: jal         0x0021F080
    // 0x00242F90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021F080(rdram, ctx);
        goto after_5;
    // 0x00242F90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00242F94: beq         $v0, $zero, L_00242FA8
    if (ctx->r2 == 0) {
        // 0x00242F98: nop
    
            goto L_00242FA8;
    }
    // 0x00242F98: nop

    // 0x00242F9C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242FA0: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
    // 0x00242FA4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00242FA8:
    // 0x00242FA8: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x00242FAC: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x00242FB0: jal         0x0026BE60
    // 0x00242FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BE60(rdram, ctx);
        goto after_6;
    // 0x00242FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00242FB8: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x00242FBC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00242FC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00242FC4: lwc1        $f1, 0x68AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X68AC);
    // 0x00242FC8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00242FCC: nop

    // 0x00242FD0: bc1f        L_00243010
    if (!c1cs) {
        // 0x00242FD4: nop
    
            goto L_00243010;
    }
    // 0x00242FD4: nop

    // 0x00242FD8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00242FDC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00242FE0: beq         $v0, $zero, L_00242FF4
    if (ctx->r2 == 0) {
        // 0x00242FE4: nop
    
            goto L_00242FF4;
    }
    // 0x00242FE4: nop

    // 0x00242FE8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00242FEC: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00242FF0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00242FF4:
    // 0x00242FF4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00242FF8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00242FFC: beq         $v0, $zero, L_00243010
    if (ctx->r2 == 0) {
        // 0x00243000: nop
    
            goto L_00243010;
    }
    // 0x00243000: nop

    // 0x00243004: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243008: ori         $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 | 0X4000;
    // 0x0024300C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_00243010:
    // 0x00243010: lw          $v1, 0x44($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X44);
    // 0x00243014: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00243018: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0024301C: beq         $v0, $zero, L_00243140
    if (ctx->r2 == 0) {
        // 0x00243020: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_00243140;
    }
    // 0x00243020: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00243024: beq         $v0, $zero, L_0024303C
    if (ctx->r2 == 0) {
        // 0x00243028: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0024303C;
    }
    // 0x00243028: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0024302C: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00243030: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00243034: xor         $v0, $v0, $s0
    ctx->r2 = ctx->r2 ^ ctx->r16;
    // 0x00243038: sltu        $s0, $zero, $v0
    ctx->r16 = 0 < ctx->r2 ? 1 : 0;
L_0024303C:
    // 0x0024303C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243040: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x00243044: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243048: bnel        $v0, $zero, L_00243050
    if (ctx->r2 != 0) {
        // 0x0024304C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00243050;
    }
    goto skip_0;
    // 0x0024304C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_00243050:
    // 0x00243050: jal         0x002685F0
    // 0x00243054: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002685F0(rdram, ctx);
        goto after_7;
    // 0x00243054: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00243058: beql        $v0, $zero, L_00243060
    if (ctx->r2 == 0) {
        // 0x0024305C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00243060;
    }
    goto skip_1;
    // 0x0024305C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00243060:
    // 0x00243060: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x00243064: bnel        $v0, $zero, L_0024306C
    if (ctx->r2 != 0) {
        // 0x00243068: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0024306C;
    }
    goto skip_2;
    // 0x00243068: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_0024306C:
    // 0x0024306C: beq         $s0, $zero, L_00243130
    if (ctx->r16 == 0) {
        // 0x00243070: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_00243130;
    }
    // 0x00243070: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00243074: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243078: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024307C: bne         $v0, $zero, L_0024311C
    if (ctx->r2 != 0) {
        // 0x00243080: ori         $v1, $v1, 0x7FFF
        ctx->r3 = ctx->r3 | 0X7FFF;
            goto L_0024311C;
    }
    // 0x00243080: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00243084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00243088: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024308C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00243090: lwc1        $f1, 0x68B0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X68B0);
    // 0x00243094: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00243098: lwc1        $f1, 0xCC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XCC);
    // 0x0024309C: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002430A0: swc1        $f0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->f0.u32l;
    // 0x002430A4: lwc1        $f1, 0x28($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X28);
    // 0x002430A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002430AC: nop

    // 0x002430B0: bc1f        L_00243108
    if (!c1cs) {
        // 0x002430B4: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_00243108;
    }
    // 0x002430B4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x002430B8: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x002430BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002430C0: beq         $v0, $zero, L_002430CC
    if (ctx->r2 == 0) {
        // 0x002430C4: lui         $a3, 0x10
        ctx->r7 = S32(0X10 << 16);
            goto L_002430CC;
    }
    // 0x002430C4: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x002430C8: lui         $a3, 0x110
    ctx->r7 = S32(0X110 << 16);
L_002430CC:
    // 0x002430CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002430D0: swc1        $f0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->f0.u32l;
    // 0x002430D4: lhu         $a2, 0x50($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X50);
    // 0x002430D8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x002430DC: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x002430E0: lui         $a3, 0x41CC
    ctx->r7 = S32(0X41CC << 16);
    // 0x002430E4: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x002430E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002430EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002430F0: jal         0x00245828
    // 0x002430F4: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    func_00245828(rdram, ctx);
        goto after_8;
    // 0x002430F4: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    after_8:
    // 0x002430F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002430FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00243100: jal         0x002465C8
    // 0x00243104: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_9;
    // 0x00243104: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_9:
L_00243108:
    // 0x00243108: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0024310C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00243110: beq         $v0, $zero, L_0024314C
    if (ctx->r2 == 0) {
        // 0x00243114: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_0024314C;
    }
    // 0x00243114: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00243118: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
L_0024311C:
    // 0x0024311C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243120: lwc1        $f0, 0x28($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28);
    // 0x00243124: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00243128: j           L_00243148
    // 0x0024312C: swc1        $f0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->f0.u32l;
        goto L_00243148;
    // 0x0024312C: swc1        $f0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->f0.u32l;
L_00243130:
    // 0x00243130: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243134: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00243138: j           L_00243148
    // 0x0024313C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_00243148;
    // 0x0024313C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_00243140:
    // 0x00243140: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00243144: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
L_00243148:
    // 0x00243148: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0024314C:
    // 0x0024314C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00243150: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00243154: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00243158: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0024315C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00243160: ldc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X50);
    // 0x00243164: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00243168: jr          $ra
    // 0x0024316C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0024316C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00217B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217B04: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00217B08: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00217B0C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00217B10: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00217B14: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x00217B18: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00217B1C: jr          $ra
    // 0x00217B20: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    return;
    // 0x00217B20: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
;}
RECOMP_FUNC void func_00441EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441EA4: jr          $ra
    // 0x00441EA8: nop

    return;
    // 0x00441EA8: nop

;}
RECOMP_FUNC void func_002A2EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2EDC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002A2EE0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002A2EE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002A2EE8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002A2EEC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A2EF0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002A2EF4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002A2EF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2EFC: lw          $v1, -0x3CFC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3CFC);
    // 0x002A2F00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2F04: bne         $v1, $v0, L_002A2F60
    if (ctx->r3 != ctx->r2) {
        // 0x002A2F08: sw          $ra, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r31;
            goto L_002A2F60;
    }
    // 0x002A2F08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002A2F0C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002A2F10: ori         $v0, $v0, 0x707
    ctx->r2 = ctx->r2 | 0X707;
    // 0x002A2F14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2F18: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A2F1C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2F20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2F24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A2F28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002A2F2C: addiu       $s0, $s0, -0x7AC0
    ctx->r16 = ADD32(ctx->r16, -0X7AC0);
    // 0x002A2F30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002A2F34: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x002A2F38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002A2F3C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002A2F40: jal         0x0029B820
    // 0x002A2F44: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002A2F44: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A2F48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A2F4C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A2F50: jal         0x0029B6F0
    // 0x002A2F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A2F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x002A2F58: j           L_002A2F8C
    // 0x002A2F5C: nop

        goto L_002A2F8C;
    // 0x002A2F5C: nop

L_002A2F60:
    // 0x002A2F60: jal         0x002A12F0
    // 0x002A2F64: nop

    func_002A12F0(rdram, ctx);
        goto after_2;
    // 0x002A2F64: nop

    after_2:
    // 0x002A2F68: addiu       $a0, $zero, 0x707
    ctx->r4 = ADD32(0, 0X707);
    // 0x002A2F6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A2F70: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x002A2F74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A2F78: jal         0x002A259C
    // 0x002A2F7C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_002A259C(rdram, ctx);
        goto after_3;
    // 0x002A2F7C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
    // 0x002A2F80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x002A2F84: jal         0x002A1324
    // 0x002A2F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002A1324(rdram, ctx);
        goto after_4;
    // 0x002A2F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_002A2F8C:
    // 0x002A2F8C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2F90: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x002A2F94: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002A2F98: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002A2F9C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A2FA0: jr          $ra
    // 0x002A2FA4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002A2FA4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00423574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423574: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423578: sw          $zero, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = 0;
    // 0x0042357C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423580: sw          $zero, 0x964($at)
    MEM_W(0X964, ctx->r1) = 0;
    // 0x00423584: jr          $ra
    // 0x00423588: nop

    return;
    // 0x00423588: nop

;}
RECOMP_FUNC void func_0045B634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B634: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0045B638: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B63C: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B640: jr          $ra
    // 0x0045B644: nop

    return;
    // 0x0045B644: nop

;}
RECOMP_FUNC void func_00267DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267DBC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267DC0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00267DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267DC8: beq         $v1, $v0, L_00267DD8
    if (ctx->r3 == ctx->r2) {
            // 0x00267DCC: nop

    func_00267DD8(rdram, ctx);
    return;
    }
    // 0x00267DCC: nop

    // 0x00267DD0: jr          $ra
    // 0x00267DD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267DD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00288A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void func_00236390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236390: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x00236394: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00236398: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023639C: nop

    // 0x002363A0: bc1t        L_002363F0
    if (c1cs) {
        // 0x002363A4: nop
    
            goto L_002363F0;
    }
    // 0x002363A4: nop

    // 0x002363A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002363AC: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x002363B0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002363B4: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x002363B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002363BC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x002363C0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x002363C4: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x002363C8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002363CC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x002363D0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002363D4: lwc1        $f1, 0x3C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X3C);
    // 0x002363D8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002363DC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x002363E0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x002363E4: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x002363E8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002363EC: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_002363F0:
    // 0x002363F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002363F4: addiu       $v0, $v0, -0x473C
    ctx->r2 = ADD32(ctx->r2, -0X473C);
    // 0x002363F8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002363FC: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x00236400: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00236404: jr          $ra
    // 0x00236408: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    return;
    // 0x00236408: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0026EDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EDA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026EDAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026EDB0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0026EDB4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0026EDB8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0026EDBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026EDC0: jal         0x0029DFF0
    // 0x0026EDC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0026EDC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0026EDC8: lw          $s1, 0x14($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X14);
    // 0x0026EDCC: beq         $s1, $zero, L_0026EDFC
    if (ctx->r17 == 0) {
        // 0x0026EDD0: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_0026EDFC;
    }
    // 0x0026EDD0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0026EDD4: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_0026EDD8:
    // 0x0026EDD8: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x0026EDDC: jal         0x00200738
    // 0x0026EDE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0026EDE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0026EDE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026EDE8: jal         0x00200574
    // 0x0026EDEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x0026EDEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0026EDF0: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0026EDF4: bne         $s1, $zero, L_0026EDD8
    if (ctx->r17 != 0) {
        // 0x0026EDF8: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_0026EDD8;
    }
    // 0x0026EDF8: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_0026EDFC:
    // 0x0026EDFC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0026EE00: jal         0x0029E010
    // 0x0026EE04: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0026EE04: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    after_3:
    // 0x0026EE08: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0026EE0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0026EE10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026EE14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026EE18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EE1C: jr          $ra
    // 0x0026EE20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026EE20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00424FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424FBC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00424FC0: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA30);
    // 0x00424FC4: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00424FC8: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x00424FCC: beq         $v0, $zero, L_00424FE8
    if (ctx->r2 == 0) {
        // 0x00424FD0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00424FE8;
    }
    // 0x00424FD0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00424FD4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424FD8: addu        $at, $at, $v0
    gpr jr_addend_00424FE0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00424FDC: lw          $v0, 0x17B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X17B0);
    // 0x00424FE0: jr          $v0
    // 0x00424FE4: nop

    switch (jr_addend_00424FE0 >> 2) {
        case 0: goto L_00424FE8; break;
        case 1: goto L_00424FE8; break;
        case 2: goto L_00424FF8; break;
        case 3: goto L_00425008; break;
        case 4: goto L_00425018; break;
        case 5: goto L_00425028; break;
        case 6: goto L_00425038; break;
        case 7: goto L_00425048; break;
        default: switch_error(__func__, 0x00424FE0, 0x800C17B0);
    }
    // 0x00424FE4: nop

L_00424FE8:
    // 0x00424FE8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424FEC: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00424FF0: j           L_00425054
    // 0x00424FF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00424FF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00424FF8:
    // 0x00424FF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424FFC: addiu       $v0, $v0, 0x4398
    ctx->r2 = ADD32(ctx->r2, 0X4398);
    // 0x00425000: j           L_00425054
    // 0x00425004: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425004: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425008:
    // 0x00425008: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042500C: addiu       $v0, $v0, 0x43EC
    ctx->r2 = ADD32(ctx->r2, 0X43EC);
    // 0x00425010: j           L_00425054
    // 0x00425014: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425014: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425018:
    // 0x00425018: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042501C: addiu       $v0, $v0, 0x4444
    ctx->r2 = ADD32(ctx->r2, 0X4444);
    // 0x00425020: j           L_00425054
    // 0x00425024: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425024: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425028:
    // 0x00425028: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042502C: addiu       $v0, $v0, 0x449C
    ctx->r2 = ADD32(ctx->r2, 0X449C);
    // 0x00425030: j           L_00425054
    // 0x00425034: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425034: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425038:
    // 0x00425038: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042503C: addiu       $v0, $v0, 0x44D4
    ctx->r2 = ADD32(ctx->r2, 0X44D4);
    // 0x00425040: j           L_00425054
    // 0x00425044: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425054;
    // 0x00425044: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425048:
    // 0x00425048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042504C: addiu       $v0, $v0, 0x4534
    ctx->r2 = ADD32(ctx->r2, 0X4534);
    // 0x00425050: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425054:
    // 0x00425054: jr          $ra
    // 0x00425058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00425058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004197FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004197FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419800: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419804: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x00419808: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041980C: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x00419810: addiu       $a3, $v0, 0xC0
    ctx->r7 = ADD32(ctx->r2, 0XC0);
    // 0x00419814: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00419818: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041981C: sb          $v1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r3;
    // 0x00419820: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00419824: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
L_00419828:
    // 0x00419828: sb          $zero, 0xA8($a3)
    MEM_B(0XA8, ctx->r7) = 0;
    // 0x0041982C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00419830: bgez        $t0, L_00419828
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00419834: addiu       $a3, $a3, -0x40
        ctx->r7 = ADD32(ctx->r7, -0X40);
            goto L_00419828;
    }
    // 0x00419834: addiu       $a3, $a3, -0x40
    ctx->r7 = ADD32(ctx->r7, -0X40);
    // 0x00419838: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0041983C: addiu       $a2, $a2, -0x6F6C
    ctx->r6 = ADD32(ctx->r6, -0X6F6C);
    // 0x00419840: jal         0x00416894
    // 0x00419844: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419844: nop

    after_0:
    // 0x00419848: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041984C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419850: jr          $ra
    // 0x00419854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00401C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401C88: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00401C8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00401C90: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00401C94: bne         $v0, $zero, L_00401CA0
    if (ctx->r2 != 0) {
        // 0x00401C98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00401CA0;
    }
    // 0x00401C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00401C9C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_00401CA0:
    // 0x00401CA0: jr          $ra
    // 0x00401CA4: nop

    return;
    // 0x00401CA4: nop

;}
RECOMP_FUNC void func_00271A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271A74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271A78: jal         0x00275224
    // 0x00271A7C: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    func_00275224(rdram, ctx);
        goto after_0;
    // 0x00271A7C: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, 0X1D64);
    after_0:
    // 0x00271A80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271A84: jr          $ra
    // 0x00271A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041CCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CCB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041CCB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041CCBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041CCC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041CCC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041CCC8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0041CCCC: addiu       $a0, $v0, -0x2
    ctx->r4 = ADD32(ctx->r2, -0X2);
    // 0x0041CCD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041CCD4: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041CCD8: lw          $v1, 0x1C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CCDC: beq         $v0, $zero, L_0041CCFC
    if (ctx->r2 == 0) {
        // 0x0041CCE0: nop
    
            goto L_0041CCFC;
    }
    // 0x0041CCE0: nop

    // 0x0041CCE4: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x0041CCE8: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0041CCEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041CCF0: lhu         $s1, 0x10($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X10);
    // 0x0041CCF4: j           L_0041CD0C
    // 0x0041CCF8: nop

        goto L_0041CD0C;
    // 0x0041CCF8: nop

L_0041CCFC:
    // 0x0041CCFC: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x0041CD00: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x0041CD04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041CD08: lhu         $s1, 0x20($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X20);
L_0041CD0C:
    // 0x0041CD0C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x0041CD10: sll         $v1, $a0, 6
    ctx->r3 = S32(ctx->r4 << 6);
    // 0x0041CD14: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041CD18: addiu       $v0, $v0, -0x5475
    ctx->r2 = ADD32(ctx->r2, -0X5475);
    // 0x0041CD1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041CD20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041CD24:
    // 0x0041CD24: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0041CD28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041CD2C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041CD30: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x0041CD34: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x0041CD38: bne         $v0, $zero, L_0041CD24
    if (ctx->r2 != 0) {
        // 0x0041CD3C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0041CD24;
    }
    // 0x0041CD3C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041CD40: jal         0x004160F0
    // 0x0041CD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041CD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041CD48: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0041CD4C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041CD50: addiu       $a1, $a1, 0x1338
    ctx->r5 = ADD32(ctx->r5, 0X1338);
    // 0x0041CD54: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041CD58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0041CD5C: jal         0x0029E3E0
    // 0x0041CD60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0041CD60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0041CD64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041CD68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041CD6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CD70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CD74: jr          $ra
    // 0x0041CD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041CD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00421F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421F88: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421F8C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00421F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00421F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421F98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00421F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00421FA0: lw          $a0, 0x424($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X424);
    // 0x00421FA4: jal         0x0026EFB8
    // 0x00421FA8: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x00421FA8: nop

    after_0:
    // 0x00421FAC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00421FB0: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x00421FB4: beq         $v0, $zero, L_00421FD0
    if (ctx->r2 == 0) {
        // 0x00421FB8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00421FD0;
    }
    // 0x00421FB8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00421FBC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421FC0: addu        $at, $at, $v0
    gpr jr_addend_00421FC8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00421FC4: lw          $v0, 0x1468($at)
    ctx->r2 = ADD32(ctx->r1, 0X1468);
    // 0x00421FC8: jr          $v0
    // 0x00421FCC: nop

    switch (jr_addend_00421FC8 >> 2) {
        case 0: goto L_00421FD0; break;
        case 1: goto L_00421FE0; break;
        case 2: goto L_00421FF0; break;
        case 3: goto L_00422000; break;
        case 4: goto L_00422010; break;
        case 5: goto L_00422020; break;
        case 6: goto L_00422030; break;
        case 7: goto L_00422040; break;
        default: switch_error(__func__, 0x00421FC8, 0x800C1468);
    }
    // 0x00421FCC: nop

L_00421FD0:
    // 0x00421FD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421FD4: addiu       $v0, $v0, 0x4ABC
    ctx->r2 = ADD32(ctx->r2, 0X4ABC);
    // 0x00421FD8: j           L_0042204C
    // 0x00421FDC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x00421FDC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00421FE0:
    // 0x00421FE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421FE4: addiu       $v0, $v0, 0x4AB4
    ctx->r2 = ADD32(ctx->r2, 0X4AB4);
    // 0x00421FE8: j           L_0042204C
    // 0x00421FEC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x00421FEC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00421FF0:
    // 0x00421FF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421FF4: addiu       $v0, $v0, 0x4A40
    ctx->r2 = ADD32(ctx->r2, 0X4A40);
    // 0x00421FF8: j           L_0042204C
    // 0x00421FFC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x00421FFC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00422000:
    // 0x00422000: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422004: addiu       $v0, $v0, 0x4A50
    ctx->r2 = ADD32(ctx->r2, 0X4A50);
    // 0x00422008: j           L_0042204C
    // 0x0042200C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x0042200C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00422010:
    // 0x00422010: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422014: addiu       $v0, $v0, 0x4A60
    ctx->r2 = ADD32(ctx->r2, 0X4A60);
    // 0x00422018: j           L_0042204C
    // 0x0042201C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x0042201C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00422020:
    // 0x00422020: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422024: addiu       $v0, $v0, 0x4A70
    ctx->r2 = ADD32(ctx->r2, 0X4A70);
    // 0x00422028: j           L_0042204C
    // 0x0042202C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x0042202C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00422030:
    // 0x00422030: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422034: addiu       $v0, $v0, 0x4A88
    ctx->r2 = ADD32(ctx->r2, 0X4A88);
    // 0x00422038: j           L_0042204C
    // 0x0042203C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0042204C;
    // 0x0042203C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00422040:
    // 0x00422040: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422044: addiu       $v0, $v0, 0x4A9C
    ctx->r2 = ADD32(ctx->r2, 0X4A9C);
    // 0x00422048: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0042204C:
    // 0x0042204C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00422050: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00422054: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00422058: jr          $ra
    // 0x0042205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00259E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259E34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00259E38: lwc1        $f0, 0x7364($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7364);
    // 0x00259E3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00259E40: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259E44: jal         0x00243414
    // 0x00259E48: swc1        $f0, 0x130($a1)
    MEM_W(0X130, ctx->r5) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00259E48: swc1        $f0, 0x130($a1)
    MEM_W(0X130, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x00259E4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259E50: jr          $ra
    // 0x00259E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042DB38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042DB38: jal         0x0021E6AC
    // 0x0042DB3C: sw          $s2, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r18;
    func_0021E6AC(rdram, ctx);
        goto after_0;
    // 0x0042DB3C: sw          $s2, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r18;
    after_0:
    // 0x0042DB40: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x0042DB44: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x0042DB48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DB4C: addiu       $s1, $s2, 0x3C8
    ctx->r17 = ADD32(ctx->r18, 0X3C8);
    // 0x0042DB50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0042DB54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042DB58: lui         $v0, 0x25
    ctx->r2 = S32(0X25 << 16);
    // 0x0042DB5C: addiu       $v0, $v0, 0x7A40
    ctx->r2 = ADD32(ctx->r2, 0X7A40);
    // 0x0042DB60: sw          $v0, 0x4CC($s2)
    MEM_W(0X4CC, ctx->r18) = ctx->r2;
    // 0x0042DB64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042DB68: sb          $v0, 0x3FC($s2)
    MEM_B(0X3FC, ctx->r18) = ctx->r2;
    // 0x0042DB6C: lw          $v0, 0x35C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X35C);
    // 0x0042DB70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042DB74: lwc1        $f0, 0x6A98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A98);
    // 0x0042DB78: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x0042DB7C: sw          $s2, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r18;
    // 0x0042DB80: sw          $s4, 0x4C0($s2)
    MEM_W(0X4C0, ctx->r18) = ctx->r20;
    // 0x0042DB84: sw          $s3, 0x4C8($s2)
    MEM_W(0X4C8, ctx->r18) = ctx->r19;
    // 0x0042DB88: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042DB8C: sw          $v0, 0x35C($s2)
    MEM_W(0X35C, ctx->r18) = ctx->r2;
    // 0x0042DB90: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042DB94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042DB98: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x0042DB9C: sh          $v0, 0x996($s2)
    MEM_H(0X996, ctx->r18) = ctx->r2;
    // 0x0042DBA0: swc1        $f0, 0x2BC($s2)
    MEM_W(0X2BC, ctx->r18) = ctx->f0.u32l;
    // 0x0042DBA4: swc1        $f0, 0x2C0($s2)
    MEM_W(0X2C0, ctx->r18) = ctx->f0.u32l;
    // 0x0042DBA8: swc1        $f0, 0x2C4($s2)
    MEM_W(0X2C4, ctx->r18) = ctx->f0.u32l;
    // 0x0042DBAC: jal         0x00243414
    // 0x0042DBB0: sw          $v1, 0x35C($s2)
    MEM_W(0X35C, ctx->r18) = ctx->r3;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0042DBB0: sw          $v1, 0x35C($s2)
    MEM_W(0X35C, ctx->r18) = ctx->r3;
    after_1:
    // 0x0042DBB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DBB8: jal         0x00258668
    // 0x0042DBBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00258668(rdram, ctx);
        goto after_2;
    // 0x0042DBBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0042DBC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0042DBC4: jal         0x0024CF58
    // 0x0042DBC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0024CF58(rdram, ctx);
        goto after_3;
    // 0x0042DBC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0042DBCC: lw          $a0, 0x51C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X51C);
    // 0x0042DBD0: jal         0x00284254
    // 0x0042DBD4: nop

    func_00284254(rdram, ctx);
        goto after_4;
    // 0x0042DBD4: nop

    after_4:
    // 0x0042DBD8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0042DBDC: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x0042DBE0: swc1        $f0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f0.u32l;
    // 0x0042DBE4: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x0042DBE8: swc1        $f0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f0.u32l;
    // 0x0042DBEC: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x0042DBF0: swc1        $f0, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f0.u32l;
    // 0x0042DBF4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0042DBF8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042DBFC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042DC00: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042DC04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042DC08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042DC0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042DC10: jr          $ra
    // 0x0042DC14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042DC14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00462200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004292D4:
    // 0x00462200: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
L_00429308:
    // 0x00462204: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
L_00429348:
    // 0x00462208: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x0046220C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00462210: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00462214: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00462218: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x0046221C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x00462220: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x00462224: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00462228: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0046222C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00462230: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00462234: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00462238: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0046223C: jal         0x00429D1C
    // 0x00462240: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_00429D1C(rdram, ctx);
        goto after_0;
    // 0x00462240: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x00462244: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00462248: beq         $v0, $v1, L_00462348
    if (ctx->r2 == ctx->r3) {
        // 0x0046224C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00462348;
    }
    // 0x0046224C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00462250: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00462254: blez        $v0, L_0046233C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00462258: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0046233C;
    }
    // 0x00462258: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0046225C: andi        $s6, $s1, 0xFFFF
    ctx->r22 = ctx->r17 & 0XFFFF;
    // 0x00462260: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x00462264: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_00462268:
    // 0x00462268: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x0046226C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462270: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462274: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00462278: jal         0x00299680
    // 0x0046227C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x0046227C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_1:
    // 0x00462280: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00462284: bne         $a3, $zero, L_00462348
    if (ctx->r7 != 0) {
        // 0x00462288: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00462348;
    }
    // 0x00462288: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0046228C: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x00462290: bne         $v0, $s6, L_00462328
    if (ctx->r2 != ctx->r22) {
        // 0x00462294: nop
    
            goto L_00462328;
    }
    // 0x00462294: nop

    // 0x00462298: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0046229C: bne         $v0, $s7, L_00462328
    if (ctx->r2 != ctx->r23) {
        // 0x004622A0: nop
    
            goto L_00462328;
    }
    // 0x004622A0: nop

    // 0x004622A4: beq         $s4, $zero, L_004622D4
    if (ctx->r20 == 0) {
        // 0x004622A8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004622D4;
    }
    // 0x004622A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004622AC: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x004622B0: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004622B4:
    // 0x004622B4: addu        $v1, $s4, $a1
    ctx->r3 = ADD32(ctx->r20, ctx->r5);
    // 0x004622B8: lbu         $a0, 0x10($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X10);
    // 0x004622BC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004622C0: bne         $a0, $v0, L_00462320
    if (ctx->r4 != ctx->r2) {
        // 0x004622C4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00462320;
    }
    // 0x004622C4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004622C8: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x004622CC: bne         $v0, $zero, L_004622B4
    if (ctx->r2 != 0) {
        // 0x004622D0: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_004622B4;
    }
    // 0x004622D0: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004622D4:
    // 0x004622D4: beq         $s3, $zero, L_00462308
    if (ctx->r19 == 0) {
        // 0x004622D8: nop
    
            goto L_00462308;
    }
    // 0x004622D8: nop

    // 0x004622DC: bne         $a2, $zero, L_00462328
    if (ctx->r6 != 0) {
        // 0x004622E0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00462328;
    }
    // 0x004622E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004622E4: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_004622E8:
    // 0x004622E8: addu        $v1, $s3, $a1
    ctx->r3 = ADD32(ctx->r19, ctx->r5);
    // 0x004622EC: lbu         $a0, 0xC($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XC);
    // 0x004622F0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004622F4: bne         $a0, $v0, L_00462318
    if (ctx->r4 != ctx->r2) {
        // 0x004622F8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00462318;
    }
    // 0x004622F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004622FC: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x00462300: bne         $v0, $zero, L_004622E8
    if (ctx->r2 != 0) {
        // 0x00462304: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_004622E8;
    }
    // 0x00462304: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_00462308:
    // 0x00462308: bne         $a2, $zero, L_00462328
    if (ctx->r6 != 0) {
        // 0x0046230C: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00462328;
    }
    // 0x0046230C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00462310: j           L_00429348
    // 0x00462314: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
    entry_00429348(rdram, ctx);
    return;
    // 0x00462314: sw          $s0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r16;
L_00462318:
    // 0x00462318: j           L_00429308
    // 0x0046231C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    entry_00429308(rdram, ctx);
    return;
    // 0x0046231C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00462320:
    // 0x00462320: j           L_004292D4
    // 0x00462324: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    entry_004292D4(rdram, ctx);
    return;
    // 0x00462324: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00462328:
    // 0x00462328: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x0046232C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462330: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00462334: bne         $v0, $zero, L_00462268
    if (ctx->r2 != 0) {
        // 0x00462338: addiu       $a3, $sp, 0x10
        ctx->r7 = ADD32(ctx->r29, 0X10);
            goto L_00462268;
    }
    // 0x00462338: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_0046233C:
    // 0x0046233C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00462340: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00462344: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00462348:
    // 0x00462348: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0046234C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x00462350: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00462354: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x00462358: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0046235C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00462360: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00462364: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00462368: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0046236C: jr          $ra
    // 0x00462370: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00462370: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00450CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417CF8:
    // 0x00450CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00450CA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00450CA8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00450CAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450CB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00450CB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00450CB8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00450CBC: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
    // 0x00450CC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_00450CC4:
    // 0x00450CC4: jal         0x002855E8
    // 0x00450CC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00450CC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00450CCC: beq         $v0, $zero, L_00450CDC
    if (ctx->r2 == 0) {
        // 0x00450CD0: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_00450CDC;
    }
    // 0x00450CD0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00450CD4: j           L_00417CF8
    // 0x00450CD8: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    entry_00417CF8(rdram, ctx);
    return;
    // 0x00450CD8: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
L_00450CDC:
    // 0x00450CDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00450CE0: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00450CE4: bne         $v0, $zero, L_00450CC4
    if (ctx->r2 != 0) {
        // 0x00450CE8: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00450CC4;
    }
    // 0x00450CE8: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x00450CEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00450CF0: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00450CF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00450CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00450CFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00450D00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00450D04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450D08: jr          $ra
    // 0x00450D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00450D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00412E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412E44: jr          $ra
    // 0x00412E48: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    return;
    // 0x00412E48: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
;}
RECOMP_FUNC void func_0027ADA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027ADA8: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x0027ADAC: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x0027ADB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027ADB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027ADB8: lbu         $a0, -0x5516($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5516);
    // 0x0027ADBC: sw          $ra, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r31;
    // 0x0027ADC0: jal         0x00279028
    // 0x0027ADC4: nop

    func_00279028(rdram, ctx);
        goto after_0;
    // 0x0027ADC4: nop

    after_0:
    // 0x0027ADC8: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0027ADCC: beq         $v0, $zero, L_0027ADDC
    if (ctx->r2 == 0) {
        // 0x0027ADD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027ADDC;
    }
    // 0x0027ADD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027ADD4: jal         0x00277090
    // 0x0027ADD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00277090(rdram, ctx);
        goto after_1;
    // 0x0027ADD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_0027ADDC:
    // 0x0027ADDC: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x0027ADE0: beq         $v0, $zero, L_0027ADF0
    if (ctx->r2 == 0) {
        // 0x0027ADE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027ADF0;
    }
    // 0x0027ADE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027ADE8: jal         0x00277090
    // 0x0027ADEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_00277090(rdram, ctx);
        goto after_2;
    // 0x0027ADEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_0027ADF0:
    // 0x0027ADF0: lw          $ra, 0x114($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X114);
    // 0x0027ADF4: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x0027ADF8: jr          $ra
    // 0x0027ADFC: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x0027ADFC: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_0020EF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EF8C: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x0020EF90: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020EF94: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020EF98: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x0020EF9C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020EFA0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020EFA4: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020EFA8: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x0020EFAC: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020EFB0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020EFB4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020EFB8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020EFBC: swc1        $f1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020EFC0: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x0020EFC4: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020EFC8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020EFCC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020EFD0: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0020EFD4: jr          $ra
    // 0x0020EFD8: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0020EFD8: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_002130A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002130A8: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x002130AC: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x002130B0: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x002130B4: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x002130B8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x002130BC: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x002130C0: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x002130C4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002130C8: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x002130CC: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x002130D0: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x002130D4: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x002130D8: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x002130DC: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x002130E0: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x002130E4: jal         0x0020D908
    // 0x002130E8: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x002130E8: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    after_0:
    // 0x002130EC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x002130F0: lw          $v1, -0x138($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X138);
    // 0x002130F4: lb          $v0, 0x11($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X11);
    // 0x002130F8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002130FC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213100: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00213104: lb          $v0, 0x12($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X12);
    // 0x00213108: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0021310C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00213110: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213114: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00213118: lb          $v0, 0x13($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X13);
    // 0x0021311C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00213120: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00213124: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213128: jal         0x0020F040
    // 0x0021312C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x0021312C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00213130: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00213134: blez        $v0, L_00213288
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00213138: addu        $s3, $s4, $zero
        ctx->r19 = ADD32(ctx->r20, 0);
            goto L_00213288;
    }
    // 0x00213138: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x0021313C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00213140:
    // 0x00213140: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00213144: jal         0x002017D4
    // 0x00213148: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00213148: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_2:
    // 0x0021314C: lw          $s5, 0x4($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X4);
    // 0x00213150: blez        $s5, L_00213274
    if (SIGNED(ctx->r21) <= 0) {
        // 0x00213154: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00213274;
    }
    // 0x00213154: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00213158: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021315C: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x00213160: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x00213164: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00213168: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021316C: addu        $s0, $v0, $t0
    ctx->r16 = ADD32(ctx->r2, ctx->r8);
L_00213170:
    // 0x00213170: lhu         $a1, 0x6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6);
    // 0x00213174: andi        $v0, $a1, 0x80
    ctx->r2 = ctx->r5 & 0X80;
    // 0x00213178: bnel        $v0, $zero, L_00213268
    if (ctx->r2 != 0) {
        // 0x0021317C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00213268;
    }
    goto skip_0;
    // 0x0021317C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00213180: beq         $fp, $zero, L_00213198
    if (ctx->r30 == 0) {
        // 0x00213184: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00213198;
    }
    // 0x00213184: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00213188: srl         $a1, $a1, 8
    ctx->r5 = S32(U32(ctx->r5) >> 8);
    // 0x0021318C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00213190: jal         0x0020D908
    // 0x00213194: addu        $a1, $s7, $a1
    ctx->r5 = ADD32(ctx->r23, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_3;
    // 0x00213194: addu        $a1, $s7, $a1
    ctx->r5 = ADD32(ctx->r23, ctx->r5);
    after_3:
L_00213198:
    // 0x00213198: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x0021319C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002131A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002131A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002131A8: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x002131AC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x002131B0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x002131B4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002131B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002131BC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x002131C0: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x002131C4: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x002131C8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002131CC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002131D0: jal         0x0020FAFC
    // 0x002131D4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_0020FAFC(rdram, ctx);
        goto after_4;
    // 0x002131D4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x002131D8: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x002131DC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x002131E0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002131E4: lwc1        $f3, 0x74($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X74);
    // 0x002131E8: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x002131EC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002131F0: lwc1        $f1, 0x78($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X78);
    // 0x002131F4: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002131F8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002131FC: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00213200: add.s       $f3, $f2, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00213204: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00213208: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0021320C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00213210: lwc1        $f0, 0x5788($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5788);
    // 0x00213214: bc1t        L_00213234
    if (c1cs) {
        // 0x00213218: nop
    
            goto L_00213234;
    }
    // 0x00213218: nop

    // 0x0021321C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00213220: lwc1        $f0, 0x578C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X578C);
    // 0x00213224: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00213228: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021322C: lwc1        $f1, 0x5790($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5790);
    // 0x00213230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00213234:
    // 0x00213234: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00213238: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x0021323C: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00213240: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00213244: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00213248: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0021324C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00213250: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00213254: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
    // 0x00213258: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021325C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00213260: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x00213264: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00213268:
    // 0x00213268: slt         $v0, $s2, $s5
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0021326C: bne         $v0, $zero, L_00213170
    if (ctx->r2 != 0) {
        // 0x00213270: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_00213170;
    }
    // 0x00213270: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_00213274:
    // 0x00213274: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00213278: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0021327C: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213280: bne         $v0, $zero, L_00213140
    if (ctx->r2 != 0) {
        // 0x00213284: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00213140;
    }
    // 0x00213284: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00213288:
    // 0x00213288: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0021328C: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x00213290: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x00213294: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x00213298: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x0021329C: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x002132A0: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x002132A4: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x002132A8: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x002132AC: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x002132B0: jr          $ra
    // 0x002132B4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x002132B4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_00224C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224C0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00224C10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224C18: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x00224C1C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00224C20: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00224C24: blez        $a2, L_00224C80
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00224C28: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00224C80;
    }
    // 0x00224C28: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00224C2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00224C30:
    // 0x00224C30: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00224C34: bnel        $v0, $a1, L_00224C74
    if (ctx->r2 != ctx->r5) {
        // 0x00224C38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00224C74;
    }
    goto skip_0;
    // 0x00224C38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x00224C3C: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00224C40: jal         0x002017D4
    // 0x00224C44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224C44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00224C48: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224C50: jal         0x002017D4
    // 0x00224C54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224C54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00224C58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224C5C: jal         0x002017D4
    // 0x00224C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00224C64: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00224C68: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00224C6C: j           L_00224C84
    // 0x00224C70: nop

        goto L_00224C84;
    // 0x00224C70: nop

L_00224C74:
    // 0x00224C74: slt         $v0, $s1, $a2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00224C78: bne         $v0, $zero, L_00224C30
    if (ctx->r2 != 0) {
        // 0x00224C7C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00224C30;
    }
    // 0x00224C7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00224C80:
    // 0x00224C80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00224C84:
    // 0x00224C84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00224C88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224C8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224C90: jr          $ra
    // 0x00224C94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224C94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
