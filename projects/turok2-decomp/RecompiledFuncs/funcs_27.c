#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00224CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224CF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224CFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224D00: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00224D04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00224D08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224D0C: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00224D10: jal         0x002017D4
    // 0x00224D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00224D18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224D1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224D20: jal         0x002017D4
    // 0x00224D24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224D24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00224D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224D2C: jal         0x002017D4
    // 0x00224D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00224D34: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00224D38: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00224D3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00224D40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224D44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224D48: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00224D4C: jr          $ra
    // 0x00224D50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224D50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00254B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254B6C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00254B70: beq         $v1, $zero, L_00254B94
    if (ctx->r3 == 0) {
        // 0x00254B74: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00254B94;
    }
    // 0x00254B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00254B78:
    // 0x00254B78: lw          $a0, 0x518($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X518);
    // 0x00254B7C: lbu         $v0, 0x3F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3F);
    // 0x00254B80: beql        $v0, $a1, L_00254B88
    if (ctx->r2 == ctx->r5) {
        // 0x00254B84: sb          $zero, 0x3F($a0)
        MEM_B(0X3F, ctx->r4) = 0;
            goto L_00254B88;
    }
    goto skip_0;
    // 0x00254B84: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
    skip_0:
L_00254B88:
    // 0x00254B88: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x00254B8C: bne         $v1, $zero, L_00254B78
    if (ctx->r3 != 0) {
        // 0x00254B90: nop
    
            goto L_00254B78;
    }
    // 0x00254B90: nop

L_00254B94:
    // 0x00254B94: jr          $ra
    // 0x00254B98: nop

    return;
    // 0x00254B98: nop

;}
RECOMP_FUNC void func_00229320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00229320: sb          $a1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r5;
    // 0x00229324: sb          $a2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r6;
    // 0x00229328: sb          $a3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r7;
    // 0x0022932C: jr          $ra
    // 0x00229330: nop

    return;
    // 0x00229330: nop

;}
RECOMP_FUNC void func_0044FAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FAA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044FAA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044FAAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044FAB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0044FAB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044FAB8: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x0044FABC: beq         $s0, $zero, L_0044FAE4
    if (ctx->r16 == 0) {
        // 0x0044FAC0: nop
    
            goto L_0044FAE4;
    }
    // 0x0044FAC0: nop

L_0044FAC4:
    // 0x0044FAC4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0044FAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044FACC: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0044FAD0: jalr        $v0
    // 0x0044FAD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0044FAD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0044FAD8: lw          $s0, 0x1D0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1D0);
    // 0x0044FADC: bne         $s0, $zero, L_0044FAC4
    if (ctx->r16 != 0) {
        // 0x0044FAE0: nop
    
            goto L_0044FAC4;
    }
    // 0x0044FAE0: nop

L_0044FAE4:
    // 0x0044FAE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0044FAE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044FAEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044FAF0: jr          $ra
    // 0x0044FAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044FAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044BC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412CF4:
    // 0x0044BC4C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044BC50: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044BC54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0044BC58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0044BC5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0044BC60: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x0044BC64: bne         $v0, $zero, L_0044BCA0
    if (ctx->r2 != 0) {
        // 0x0044BC68: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0044BCA0;
    }
    // 0x0044BC68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044BC6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044BC70: lwc1        $f0, 0xADC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XADC);
    // 0x0044BC74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0044BC78: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x0044BC7C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0044BC80: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0044BC84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0044BC88: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0044BC8C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x0044BC90: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x0044BC94: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x0044BC98: j           L_00412CF4
    // 0x0044BC9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    entry_00412CF4(rdram, ctx);
    return;
    // 0x0044BC9C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044BCA0:
    // 0x0044BCA0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0044BCA4: jal         0x002017D4
    // 0x0044BCA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044BCA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044BCAC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BCB0: jal         0x002017D4
    // 0x0044BCB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044BCB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0044BCB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044BCBC: jal         0x002017D4
    // 0x0044BCC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044BCC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0044BCC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0044BCC8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x0044BCCC: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0044BCD0: jal         0x004101B8
    // 0x0044BCD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_3;
    // 0x0044BCD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x0044BCD8: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x0044BCDC: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0044BCE0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x0044BCE4: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x0044BCE8: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x0044BCEC: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x0044BCF0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044BCF4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0044BCF8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0044BCFC: jr          $ra
    // 0x0044BD00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044BD00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0026BBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0026BBB8:
    // 0x0026BBC0: lui         $a2, 0x5555
    ctx->r6 = S32(0X5555 << 16);
    // 0x0026BBC4: ori         $a2, $a2, 0x5556
    ctx->r6 = ctx->r6 | 0X5556;
    // 0x0026BBC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0026BBCC: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
L_0026BBD0:
    // 0x0026BBD0: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026BBD4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0026BBD8: addu        $a0, $a3, $a0
    ctx->r4 = ADD32(ctx->r7, ctx->r4);
    // 0x0026BBDC: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0026BBE0: mfhi        $t0
    ctx->r8 = hi;
    // 0x0026BBE4: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x0026BBE8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026BBEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026BBF0: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0026BBF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026BBF8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0026BBFC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x0026BC00: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026BC04: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026BC08: lwc1        $f3, 0x8($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026BC0C: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0026BC10: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026BC14: sub.s       $f0, $f5, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f5.fl - ctx->f1.fl;
    // 0x0026BC18: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026BC1C: sub.s       $f3, $f6, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f6.fl - ctx->f3.fl;
    // 0x0026BC20: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026BC24: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026BC28: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0026BC2C: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026BC30: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x0026BC34: nop

    // 0x0026BC38: bc1t        L_0026BBB8
    if (c1cs) {
            // 0x0026BC3C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_0026BBB8(rdram, ctx);
    return;
    }
    // 0x0026BC3C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0026BC40: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x0026BC44: bne         $v0, $zero, L_0026BBD0
    if (ctx->r2 != 0) {
        // 0x0026BC48: addiu       $a1, $a0, 0x1
        ctx->r5 = ADD32(ctx->r4, 0X1);
            goto L_0026BBD0;
    }
    // 0x0026BC48: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
    // 0x0026BC4C: jr          $ra
    // 0x0026BC50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0026BC50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0042B6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042B6B0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0042B6B4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x0042B6B8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x0042B6BC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0042B6C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0042B6C4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0042B6C8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x0042B6CC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0042B6D0: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x0042B6D4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x0042B6D8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0042B6DC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0042B6E0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0042B6E4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0042B6E8: jal         0x00200B00
    // 0x0042B6EC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0042B6EC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x0042B6F0: beq         $v0, $zero, L_0042BA10
    if (ctx->r2 == 0) {
        // 0x0042B6F4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0042BA10;
    }
    // 0x0042B6F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042B6F8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0042B6FC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0042B700: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0042B704: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0042B708: jal         0x002017E8
    // 0x0042B70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017E8(rdram, ctx);
        goto after_1;
    // 0x0042B70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042B710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B714: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0042B718: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x0042B71C: jal         0x002017E8
    // 0x0042B720: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_2;
    // 0x0042B720: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0042B724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B728: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0042B72C: jal         0x002017D4
    // 0x0042B730: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0042B730: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0042B734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B738: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0042B73C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0042B740: lw          $s6, 0x4($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X4);
    // 0x0042B744: jal         0x002017E8
    // 0x0042B748: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_002017E8(rdram, ctx);
        goto after_4;
    // 0x0042B748: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x0042B74C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x0042B750: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0042B754: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B758: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0042B75C: sll         $v1, $s6, 5
    ctx->r3 = S32(ctx->r22 << 5);
    // 0x0042B760: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x0042B764: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x0042B768: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0042B76C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0042B770: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x0042B774: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x0042B778: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0042B77C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x0042B780: jal         0x00205D7C
    // 0x0042B784: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    func_00205D7C(rdram, ctx);
        goto after_5;
    // 0x0042B784: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    after_5:
    // 0x0042B788: beq         $v0, $zero, L_0042BA00
    if (ctx->r2 == 0) {
        // 0x0042B78C: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_0042BA00;
    }
    // 0x0042B78C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0042B790: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x0042B794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B798: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042B79C: lw          $s4, 0x0($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X0);
    // 0x0042B7A0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0042B7A4: addu        $a1, $s4, $s3
    ctx->r5 = ADD32(ctx->r20, ctx->r19);
    // 0x0042B7A8: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x0042B7AC: jal         0x0020192C
    // 0x0042B7B0: sw          $s3, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_6;
    // 0x0042B7B0: sw          $s3, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r19;
    after_6:
    // 0x0042B7B4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0042B7B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042B7BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0042B7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B7C4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0042B7C8: addu        $s3, $v1, $s3
    ctx->r19 = ADD32(ctx->r3, ctx->r19);
    // 0x0042B7CC: addu        $s1, $s4, $s3
    ctx->r17 = ADD32(ctx->r20, ctx->r19);
    // 0x0042B7D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0042B7D4: jal         0x0020192C
    // 0x0042B7D8: sw          $s3, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_7;
    // 0x0042B7D8: sw          $s3, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r19;
    after_7:
    // 0x0042B7DC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0042B7E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042B7E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0042B7E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042B7EC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0042B7F0: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x0042B7F4: addu        $s0, $s4, $s3
    ctx->r16 = ADD32(ctx->r20, ctx->r19);
    // 0x0042B7F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042B7FC: jal         0x0020192C
    // 0x0042B800: sw          $s3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_8;
    // 0x0042B800: sw          $s3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r19;
    after_8:
    // 0x0042B804: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0042B808: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x0042B80C: addiu       $fp, $s0, 0x8
    ctx->r30 = ADD32(ctx->r16, 0X8);
    // 0x0042B810: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0042B814: sw          $s6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r22;
    // 0x0042B818: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x0042B81C: lw          $s7, 0x4($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X4);
    // 0x0042B820: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0042B824: blez        $s7, L_0042B848
    if (SIGNED(ctx->r23) <= 0) {
        // 0x0042B828: sw          $s1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r17;
            goto L_0042B848;
    }
    // 0x0042B828: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x0042B82C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042B830:
    // 0x0042B830: jal         0x0026BAE4
    // 0x0042B834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BAE4(rdram, ctx);
        goto after_9;
    // 0x0042B834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0042B838: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042B83C: slt         $v0, $s2, $s7
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x0042B840: bne         $v0, $zero, L_0042B830
    if (ctx->r2 != 0) {
        // 0x0042B844: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_0042B830;
    }
    // 0x0042B844: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_0042B848:
    // 0x0042B848: blez        $s6, L_0042B96C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0042B84C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042B96C;
    }
    // 0x0042B84C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0042B850:
    // 0x0042B850: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x0042B854: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x0042B858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042B85C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x0042B860: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0042B864: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x0042B868: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x0042B86C: jal         0x0026BB30
    // 0x0042B870: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_0026BB30(rdram, ctx);
        goto after_10;
    // 0x0042B870: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_10:
    // 0x0042B874: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x0042B878: lw          $a0, 0x70($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X70);
    // 0x0042B87C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042B880: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x0042B884: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x0042B888: jal         0x002017D4
    // 0x0042B88C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x0042B88C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x0042B890: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042B894: jal         0x002017D4
    // 0x0042B898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_12;
    // 0x0042B898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0042B89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0042B8A0: jal         0x002017D4
    // 0x0042B8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x0042B8A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_13:
    // 0x0042B8A8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042B8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B8B0: jal         0x002017D4
    // 0x0042B8B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x0042B8B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x0042B8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B8BC: jal         0x00201818
    // 0x0042B8C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_15;
    // 0x0042B8C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x0042B8C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042B8C8: jal         0x002017D4
    // 0x0042B8CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x0042B8CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x0042B8D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0042B8D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042B8D8: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x0042B8DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042B8E0: bgez        $s2, L_0042B8EC
    if (SIGNED(ctx->r18) >= 0) {
        // 0x0042B8E4: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_0042B8EC;
    }
    // 0x0042B8E4: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x0042B8E8: addiu       $a0, $s2, 0x7
    ctx->r4 = ADD32(ctx->r18, 0X7);
L_0042B8EC:
    // 0x0042B8EC: sra         $v0, $a0, 3
    ctx->r2 = S32(SIGNED(ctx->r4) >> 3);
    // 0x0042B8F0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0042B8F4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042B8F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042B8FC: beq         $v0, $zero, L_0042B910
    if (ctx->r2 == 0) {
        // 0x0042B900: nop
    
            goto L_0042B910;
    }
    // 0x0042B900: nop

    // 0x0042B904: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x0042B908: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x0042B90C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_0042B910:
    // 0x0042B910: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0042B914: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042B918: lw          $v1, 0x6D00($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D00);
    // 0x0042B91C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042B920: beql        $v0, $zero, L_0042B928
    if (ctx->r2 == 0) {
        // 0x0042B924: sw          $v1, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r3;
            goto L_0042B928;
    }
    goto skip_0;
    // 0x0042B924: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    skip_0:
L_0042B928:
    // 0x0042B928: jal         0x00284188
    // 0x0042B92C: nop

    func_00284188(rdram, ctx);
        goto after_17;
    // 0x0042B92C: nop

    after_17:
    // 0x0042B930: beq         $v0, $zero, L_0042B944
    if (ctx->r2 == 0) {
        // 0x0042B934: nop
    
            goto L_0042B944;
    }
    // 0x0042B934: nop

    // 0x0042B938: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042B93C: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0042B940: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_0042B944:
    // 0x0042B944: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x0042B948: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0042B94C: beq         $v0, $zero, L_0042B960
    if (ctx->r2 == 0) {
        // 0x0042B950: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042B960;
    }
    // 0x0042B950: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042B954: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042B958: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0042B95C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_0042B960:
    // 0x0042B960: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042B964: bne         $v0, $zero, L_0042B850
    if (ctx->r2 != 0) {
        // 0x0042B968: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_0042B850;
    }
    // 0x0042B968: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_0042B96C:
    // 0x0042B96C: blez        $s6, L_0042B9C4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0042B970: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0042B9C4;
    }
    // 0x0042B970: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042B974: addu        $s0, $fp, $zero
    ctx->r16 = ADD32(ctx->r30, 0);
L_0042B978:
    // 0x0042B978: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042B97C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_0042B980:
    // 0x0042B980: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0042B984: beq         $v0, $zero, L_0042B9A8
    if (ctx->r2 == 0) {
        // 0x0042B988: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0042B9A8;
    }
    // 0x0042B988: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042B98C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0042B990: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0042B994: beq         $v0, $zero, L_0042B9A8
    if (ctx->r2 == 0) {
        // 0x0042B998: nop
    
            goto L_0042B9A8;
    }
    // 0x0042B998: nop

    // 0x0042B99C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042B9A0: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0042B9A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_0042B9A8:
    // 0x0042B9A8: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x0042B9AC: bne         $v0, $zero, L_0042B980
    if (ctx->r2 != 0) {
        // 0x0042B9B0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0042B980;
    }
    // 0x0042B9B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0042B9B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042B9B8: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042B9BC: bne         $v0, $zero, L_0042B978
    if (ctx->r2 != 0) {
        // 0x0042B9C0: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_0042B978;
    }
    // 0x0042B9C0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_0042B9C4:
    // 0x0042B9C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042B9C8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0042B9CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042B9D0: addu        $s3, $s3, $t0
    ctx->r19 = ADD32(ctx->r19, ctx->r8);
    // 0x0042B9D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0042B9D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x0042B9DC: addu        $a1, $t0, $s3
    ctx->r5 = ADD32(ctx->r8, ctx->r19);
    // 0x0042B9E0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0042B9E4: jal         0x0020192C
    // 0x0042B9E8: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_18;
    // 0x0042B9E8: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    after_18:
    // 0x0042B9EC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0042B9F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0042B9F4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0042B9F8: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x0042B9FC: sw          $s3, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r19;
L_0042BA00:
    // 0x0042BA00: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x0042BA04: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0042BA08: jal         0x002057B0
    // 0x0042BA0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_19;
    // 0x0042BA0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
L_0042BA10:
    // 0x0042BA10: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0042BA14: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0042BA18: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0042BA1C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0042BA20: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042BA24: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042BA28: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042BA2C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042BA30: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042BA34: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042BA38: jr          $ra
    // 0x0042BA3C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0042BA3C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0045BEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00422F40:
    // 0x0045BEE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045BEE4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0045BEE8: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x0045BEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045BEF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045BEF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BEF8: sw          $zero, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = 0;
    // 0x0045BEFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BF00: sw          $v0, 0x998($at)
    MEM_W(0X998, ctx->r1) = ctx->r2;
    // 0x0045BF04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BF08: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
    // 0x0045BF0C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BF10: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x0045BF14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BF18: sw          $zero, 0x980($at)
    MEM_W(0X980, ctx->r1) = 0;
    // 0x0045BF1C: beq         $v1, $zero, L_0045BF34
    if (ctx->r3 == 0) {
        // 0x0045BF20: nop
    
            goto L_0045BF34;
    }
    // 0x0045BF20: nop

    // 0x0045BF24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045BF28: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0045BF2C: j           L_00422F40
    // 0x0045BF30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_00422F40(rdram, ctx);
    return;
    // 0x0045BF30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0045BF34:
    // 0x0045BF34: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0045BF38: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0045BF3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045BF40: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x0045BF44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045BF48: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0045BF4C: jal         0x00285A68
    // 0x0045BF50: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x0045BF50: nop

    after_0:
    // 0x0045BF54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045BF58: jr          $ra
    // 0x0045BF5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045BF5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041885C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041885C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418860: lbu         $v1, -0x54FF($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FF);
    // 0x00418864: beq         $v1, $zero, L_0041887C
    if (ctx->r3 == 0) {
        // 0x00418868: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041887C;
    }
    // 0x00418868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041886C: beq         $v1, $v0, L_0041888C
    if (ctx->r3 == ctx->r2) {
        // 0x00418870: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041888C;
    }
    // 0x00418870: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418874: j           L_0041889C
    // 0x00418878: nop

        goto L_0041889C;
    // 0x00418878: nop

L_0041887C:
    // 0x0041887C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418880: addiu       $v0, $v0, 0x617C
    ctx->r2 = ADD32(ctx->r2, 0X617C);
    // 0x00418884: j           L_00418898
    // 0x00418888: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418898;
    // 0x00418888: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041888C:
    // 0x0041888C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418890: addiu       $v0, $v0, 0x6164
    ctx->r2 = ADD32(ctx->r2, 0X6164);
    // 0x00418894: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418898:
    // 0x00418898: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041889C:
    // 0x0041889C: jr          $ra
    // 0x004188A0: nop

    return;
    // 0x004188A0: nop

;}
RECOMP_FUNC void func_0044FC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FC28: lw          $v0, 0x1C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C8);
    // 0x0044FC2C: lw          $v1, 0x1CC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1CC);
    // 0x0044FC30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044FC34: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
    // 0x0044FC38: slti        $v0, $v0, 0x30
    ctx->r2 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x0044FC3C: bne         $v0, $zero, L_0044FC4C
    if (ctx->r2 != 0) {
        // 0x0044FC40: nop
    
            goto L_0044FC4C;
    }
    // 0x0044FC40: nop

    // 0x0044FC44: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
    // 0x0044FC48: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
L_0044FC4C:
    // 0x0044FC4C: jr          $ra
    // 0x0044FC50: nop

    return;
    // 0x0044FC50: nop

;}
RECOMP_FUNC void func_00289474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289478: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028947C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289480: jal         0x002888BC
    // 0x00289484: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_002888BC(rdram, ctx);
        goto after_0;
    // 0x00289484: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00289488: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028948C: jr          $ra
    // 0x00289490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041E7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E7D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E7D4: sw          $a0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r4;
    // 0x0041E7D8: jal         0x00426480
    // 0x0041E7DC: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E7DC: nop

    after_0:
    // 0x0041E7E0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E7E4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E7E8: jal         0x0042655C
    // 0x0041E7EC: nop

    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E7EC: nop

    after_1:
    // 0x0041E7F0: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0041E7F4: bne         $v0, $v1, L_0041E85C
    if (ctx->r2 != ctx->r3) {
        // 0x0041E7F8: nop
    
            goto L_0041E85C;
    }
    // 0x0041E7F8: nop

    // 0x0041E7FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E800: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E804: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E808: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x0041E80C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E810: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E814: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E818: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041E81C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E820: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // 0x0041E824: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E828: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x0041E82C: jal         0x00416644
    // 0x0041E830: nop

    func_00416644(rdram, ctx);
        goto after_2;
    // 0x0041E830: nop

    after_2:
    // 0x0041E834: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E838: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041E83C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E840: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x0041E844: j           L_0041EA5C
    // 0x0041E848: nop

        goto L_0041EA5C;
    // 0x0041E848: nop

L_0041E84C:
    // 0x0041E84C: j           L_0041E8B0
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_0041E8B0;
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041E854:
    // 0x0041E854: j           L_0041E904
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E904;
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E85C:
    // 0x0041E85C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E860: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E864: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E86C:
    // 0x0041E86C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E870: jal         0x00426978
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_00426978(rdram, ctx);
        goto after_3;
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x0041E878: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0041E87C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E880: jal         0x00426C88
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_4;
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x0041E888: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E88C: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041E890: jal         0x00426D54
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_5;
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x0041E898: beq         $v0, $zero, L_0041E84C
    if (ctx->r2 == 0) {
        // 0x0041E89C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E84C;
    }
    // 0x0041E89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8A0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8A4: bnel        $v0, $zero, L_0041E86C
    if (ctx->r2 != 0) {
        // 0x0041E8A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E86C;
    }
    goto skip_0;
    // 0x0041E8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x0041E8AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0041E8B0:
    // 0x0041E8B0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E8B4: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E8B8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E8C0:
    // 0x0041E8C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E8C4: jal         0x00426978
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_00426978(rdram, ctx);
        goto after_6;
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x0041E8CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x0041E8D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E8D4: jal         0x00426C88
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_7;
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x0041E8DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E8E0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E8E4: jal         0x00426D54
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_8;
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_8:
    // 0x0041E8EC: beq         $v0, $zero, L_0041E854
    if (ctx->r2 == 0) {
        // 0x0041E8F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E854;
    }
    // 0x0041E8F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8F4: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8F8: bnel        $v0, $zero, L_0041E8C0
    if (ctx->r2 != 0) {
        // 0x0041E8FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E8C0;
    }
    goto skip_1;
    // 0x0041E8FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x0041E900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E904:
    // 0x0041E904: bne         $s2, $zero, L_0041EA30
    if (ctx->r18 != 0) {
        // 0x0041E908: nop
    
            goto L_0041EA30;
    }
    // 0x0041E908: nop

    // 0x0041E90C: bne         $v0, $zero, L_0041EA30
    if (ctx->r2 != 0) {
        // 0x0041E910: nop
    
            goto L_0041EA30;
    }
    // 0x0041E910: nop

    // 0x0041E914: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E918: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E91C: jal         0x004267A0
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_004267A0(rdram, ctx);
        goto after_9;
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_9:
    // 0x0041E924: bne         $v0, $zero, L_0041E9F0
    if (ctx->r2 != 0) {
        // 0x0041E928: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E928: nop

    // 0x0041E92C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E930: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E934: jal         0x0042670C
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_0042670C(rdram, ctx);
        goto after_10;
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x0041E93C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E940: bne         $s0, $zero, L_0041E9F0
    if (ctx->r16 != 0) {
        // 0x0041E944: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E944: nop

    // 0x0041E948: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E94C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E950: jal         0x00426E6C
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_11;
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_11:
    // 0x0041E958: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041E95C: jal         0x00426E6C
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00426E6C(rdram, ctx);
        goto after_12;
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_12:
    // 0x0041E964: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E968: beq         $v1, $zero, L_0041E9A8
    if (ctx->r3 == 0) {
        // 0x0041E96C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E9A8;
    }
    // 0x0041E96C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E970: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0041E974: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E978: bne         $v1, $zero, L_0041E9A8
    if (ctx->r3 != 0) {
        // 0x0041E97C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_0041E9A8;
    }
    // 0x0041E97C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041E980: beq         $v0, $zero, L_0041E9A0
    if (ctx->r2 == 0) {
        // 0x0041E984: nop
    
            goto L_0041E9A0;
    }
    // 0x0041E984: nop

    // 0x0041E988: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E98C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E990: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E994: addiu       $a1, $a1, -0x3E18
    ctx->r5 = ADD32(ctx->r5, -0X3E18);
    // 0x0041E998: j           L_0041E9B8
    // 0x0041E99C: nop

        goto L_0041E9B8;
    // 0x0041E99C: nop

L_0041E9A0:
    // 0x0041E9A0: beq         $v1, $zero, L_0041E9E8
    if (ctx->r3 == 0) {
        // 0x0041E9A4: nop
    
            goto L_0041E9E8;
    }
    // 0x0041E9A4: nop

L_0041E9A8:
    // 0x0041E9A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9B4: addiu       $a1, $a1, -0x3E3C
    ctx->r5 = ADD32(ctx->r5, -0X3E3C);
L_0041E9B8:
    // 0x0041E9B8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E9BC: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041E9C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E9C4: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E9C8: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E9D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E9D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E9DC: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041E9E0: jal         0x00416644
    // 0x0041E9E4: nop

    func_00416644(rdram, ctx);
        goto after_13;
    // 0x0041E9E4: nop

    after_13:
L_0041E9E8:
    // 0x0041E9E8: beq         $s0, $zero, L_0041EA30
    if (ctx->r16 == 0) {
        // 0x0041E9EC: nop
    
            goto L_0041EA30;
    }
    // 0x0041E9EC: nop

L_0041E9F0:
    // 0x0041E9F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9F4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9F8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9FC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EA00: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EA04: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041EA08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EA0C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041EA10: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041EA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EA1C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041EA20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA24: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041EA28: jal         0x00416644
    // 0x0041EA2C: nop

    func_00416644(rdram, ctx);
        goto after_14;
    // 0x0041EA2C: nop

    after_14:
L_0041EA30:
    // 0x0041EA30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041EA34: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0041EA38: bne         $v0, $zero, L_0041EA4C
    if (ctx->r2 != 0) {
        // 0x0041EA3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041EA4C;
    }
    // 0x0041EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA40: jal         0x0041DA28
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0041DA28(rdram, ctx);
        goto after_15;
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_15:
    // 0x0041EA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041EA4C:
    // 0x0041EA4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA50: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041EA54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EA58: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_0041EA5C:
    // 0x0041EA5C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041EA60: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0041EA64: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0041EA68: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0041EA6C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0041EA70: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0041EA74: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0041EA78: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0041EA7C: jr          $ra
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00290240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290240: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00290244: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x00290248: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0029024C: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x00290250: addiu       $fp, $a1, 0x4
    ctx->r30 = ADD32(ctx->r5, 0X4);
    // 0x00290254: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x00290258: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x0029025C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x00290260: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x00290264: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x00290268: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0029026C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00290270: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00290274: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x00290278: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x0029027C: lbu         $s6, 0x9($a1)
    ctx->r22 = MEM_BU(ctx->r5, 0X9);
    // 0x00290280: lbu         $s0, 0xA($a1)
    ctx->r16 = MEM_BU(ctx->r5, 0XA);
    // 0x00290284: andi        $s4, $v0, 0xF
    ctx->r20 = ctx->r2 & 0XF;
    // 0x00290288: andi        $v1, $v0, 0xF0
    ctx->r3 = ctx->r2 & 0XF0;
    // 0x0029028C: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x00290290: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    // 0x00290294: beq         $v1, $v0, L_00290788
    if (ctx->r3 == ctx->r2) {
        // 0x00290298: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_00290788;
    }
    // 0x00290298: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x0029029C: slti        $v0, $v1, 0xB1
    ctx->r2 = SIGNED(ctx->r3) < 0XB1 ? 1 : 0;
    // 0x002902A0: beq         $v0, $zero, L_002902DC
    if (ctx->r2 == 0) {
        // 0x002902A4: addiu       $v0, $zero, 0x90
        ctx->r2 = ADD32(0, 0X90);
            goto L_002902DC;
    }
    // 0x002902A4: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x002902A8: beq         $v1, $v0, L_00290314
    if (ctx->r3 == ctx->r2) {
        // 0x002902AC: slti        $v0, $v1, 0x91
        ctx->r2 = SIGNED(ctx->r3) < 0X91 ? 1 : 0;
            goto L_00290314;
    }
    // 0x002902AC: slti        $v0, $v1, 0x91
    ctx->r2 = SIGNED(ctx->r3) < 0X91 ? 1 : 0;
    // 0x002902B0: beq         $v0, $zero, L_002902C8
    if (ctx->r2 == 0) {
        // 0x002902B4: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_002902C8;
    }
    // 0x002902B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x002902B8: beq         $v1, $v0, L_00290680
    if (ctx->r3 == ctx->r2) {
        // 0x002902BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00290680;
    }
    // 0x002902BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002902C0: j           L_00290A98
    // 0x002902C4: nop

        goto L_00290A98;
    // 0x002902C4: nop

L_002902C8:
    // 0x002902C8: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x002902CC: beq         $v1, $v0, L_002906D4
    if (ctx->r3 == ctx->r2) {
        // 0x002902D0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002906D4;
    }
    // 0x002902D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002902D4: j           L_00290A98
    // 0x002902D8: nop

        goto L_00290A98;
    // 0x002902D8: nop

L_002902DC:
    // 0x002902DC: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x002902E0: beq         $v1, $v0, L_00290728
    if (ctx->r3 == ctx->r2) {
        // 0x002902E4: slti        $v0, $v1, 0xD1
        ctx->r2 = SIGNED(ctx->r3) < 0XD1 ? 1 : 0;
            goto L_00290728;
    }
    // 0x002902E4: slti        $v0, $v1, 0xD1
    ctx->r2 = SIGNED(ctx->r3) < 0XD1 ? 1 : 0;
    // 0x002902E8: beq         $v0, $zero, L_00290300
    if (ctx->r2 == 0) {
        // 0x002902EC: addiu       $v0, $zero, 0xC0
        ctx->r2 = ADD32(0, 0XC0);
            goto L_00290300;
    }
    // 0x002902EC: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x002902F0: beq         $v1, $v0, L_002909B0
    if (ctx->r3 == ctx->r2) {
        // 0x002902F4: nop
    
            goto L_002909B0;
    }
    // 0x002902F4: nop

    // 0x002902F8: j           L_00290A98
    // 0x002902FC: nop

        goto L_00290A98;
    // 0x002902FC: nop

L_00290300:
    // 0x00290300: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x00290304: beq         $v1, $v0, L_00290A08
    if (ctx->r3 == ctx->r2) {
        // 0x00290308: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_00290A08;
    }
    // 0x00290308: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x0029030C: j           L_00290A98
    // 0x00290310: nop

        goto L_00290A98;
    // 0x00290310: nop

L_00290314:
    // 0x00290314: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x00290318: beq         $s1, $zero, L_0029067C
    if (ctx->r17 == 0) {
        // 0x0029031C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0029067C;
    }
    // 0x0029031C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00290320: lw          $v1, 0x2C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2C);
    // 0x00290324: bne         $v1, $v0, L_00290A98
    if (ctx->r3 != ctx->r2) {
        // 0x00290328: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00290A98;
    }
    // 0x00290328: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029032C: andi        $s2, $s6, 0xFF
    ctx->r18 = ctx->r22 & 0XFF;
    // 0x00290330: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00290334: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00290338: andi        $s0, $s4, 0xFF
    ctx->r16 = ctx->r20 & 0XFF;
    // 0x0029033C: jal         0x00292640
    // 0x00290340: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00292640(rdram, ctx);
        goto after_0;
    // 0x00290340: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00290344: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00290348: beq         $s5, $zero, L_00290A98
    if (ctx->r21 == 0) {
        // 0x0029034C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00290A98;
    }
    // 0x0029034C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00290350: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00290354: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00290358: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
    // 0x0029035C: sll         $s2, $s0, 4
    ctx->r18 = S32(ctx->r16 << 4);
    // 0x00290360: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00290364: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x00290368: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0029036C: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x00290370: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x00290374: jal         0x0029247C
    // 0x00290378: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    func_0029247C(rdram, ctx);
        goto after_1;
    // 0x00290378: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    after_1:
    // 0x0029037C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00290380: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x00290384: addiu       $s7, $s1, 0x4
        ctx->r23 = ADD32(ctx->r17, 0X4);
            goto L_00290A98;
    }
    // 0x00290384: addiu       $s7, $s1, 0x4
    ctx->r23 = ADD32(ctx->r17, 0X4);
    // 0x00290388: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0029038C: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00290390: jal         0x00293F60
    // 0x00290394: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_00293F60(rdram, ctx);
        goto after_2;
    // 0x00290394: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x00290398: sw          $s5, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r21;
    // 0x0029039C: sb          $zero, 0x34($s1)
    MEM_B(0X34, ctx->r17) = 0;
    // 0x002903A0: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
    // 0x002903A4: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x002903A8: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x002903AC: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x002903B0: bnel        $v0, $zero, L_002903C0
    if (ctx->r2 != 0) {
        // 0x002903B4: sb          $zero, 0x35($s1)
        MEM_B(0X35, ctx->r17) = 0;
            goto L_002903C0;
    }
    goto skip_0;
    // 0x002903B4: sb          $zero, 0x35($s1)
    MEM_B(0X35, ctx->r17) = 0;
    skip_0:
    // 0x002903B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002903BC: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
L_002903C0:
    // 0x002903C0: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x002903C4: andi        $v1, $s6, 0xFF
    ctx->r3 = ctx->r22 & 0XFF;
    // 0x002903C8: lbu         $a0, 0x5($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5);
    // 0x002903CC: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x002903D0: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x002903D4: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x002903D8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x002903DC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002903E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002903E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002903E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002903EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002903F0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x002903F4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002903F8: jal         0x00290D90
    // 0x002903FC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00290D90(rdram, ctx);
        goto after_3;
    // 0x002903FC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_3:
    // 0x00290400: swc1        $f0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f0.u32l;
    // 0x00290404: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00290408: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029040C: lwc1        $f0, -0x5CA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5CA0);
    // 0x00290410: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00290414: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    // 0x00290418: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x0029041C: lw          $v0, 0x1C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1C);
    // 0x00290420: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00290424: sb          $zero, 0x37($s1)
    MEM_B(0X37, ctx->r17) = 0;
    // 0x00290428: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029042C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x00290430: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00290434: sll         $v0, $s4, 4
    ctx->r2 = S32(ctx->r20 << 4);
    // 0x00290438: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029043C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00290440: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x00290444: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x00290448: beq         $v0, $zero, L_002904B8
    if (ctx->r2 == 0) {
        // 0x0029044C: nop
    
            goto L_002904B8;
    }
    // 0x0029044C: nop

    // 0x00290450: lw          $v0, 0x70($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X70);
    // 0x00290454: beq         $v0, $zero, L_002904B8
    if (ctx->r2 == 0) {
        // 0x00290458: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_002904B8;
    }
    // 0x00290458: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0029045C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x00290460: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x00290464: lbu         $a3, 0x5($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X5);
    // 0x00290468: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0029046C: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x00290470: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00290474: lw          $v0, 0x70($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X70);
    // 0x00290478: jalr        $v0
    // 0x0029047C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0029047C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x00290480: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00290484: beq         $s2, $zero, L_002904B8
    if (ctx->r18 == 0) {
        // 0x00290488: addiu       $a0, $s3, 0x48
        ctx->r4 = ADD32(ctx->r19, 0X48);
            goto L_002904B8;
    }
    // 0x00290488: addiu       $a0, $s3, 0x48
    ctx->r4 = ADD32(ctx->r19, 0X48);
    // 0x0029048C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00290490: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00290494: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x00290498: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x0029049C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x002904A0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002904A4: jal         0x00291034
    // 0x002904A8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_00291034(rdram, ctx);
        goto after_5;
    // 0x002904A8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_5:
    // 0x002904AC: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x002904B0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x002904B4: sb          $v0, 0x37($s1)
    MEM_B(0X37, ctx->r17) = ctx->r2;
L_002904B8:
    // 0x002904B8: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x002904BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002904C0: lwc1        $f1, -0x5C9C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5C9C);
    // 0x002904C4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002904C8: nop

    // 0x002904CC: bc1t        L_002904E4
    if (c1cs) {
        // 0x002904D0: addiu       $a0, $s1, 0x36
        ctx->r4 = ADD32(ctx->r17, 0X36);
            goto L_002904E4;
    }
    // 0x002904D0: addiu       $a0, $s1, 0x36
    ctx->r4 = ADD32(ctx->r17, 0X36);
    // 0x002904D4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002904D8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002904DC: j           L_002904F8
    // 0x002904E0: nop

        goto L_002904F8;
    // 0x002904E0: nop

L_002904E4:
    // 0x002904E4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002904E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002904EC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002904F0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002904F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_002904F8:
    // 0x002904F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002904FC: lwc1        $f0, -0x5C98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5C98);
    // 0x00290500: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x00290504: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x00290508: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x0029050C: beq         $v0, $zero, L_00290580
    if (ctx->r2 == 0) {
        // 0x00290510: nop
    
            goto L_00290580;
    }
    // 0x00290510: nop

    // 0x00290514: lw          $v0, 0x70($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X70);
    // 0x00290518: beq         $v0, $zero, L_00290580
    if (ctx->r2 == 0) {
        // 0x0029051C: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_00290580;
    }
    // 0x0029051C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00290520: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x00290524: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x00290528: lbu         $a3, 0x9($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9);
    // 0x0029052C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00290530: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x00290534: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00290538: lw          $v0, 0x70($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X70);
    // 0x0029053C: jalr        $v0
    // 0x00290540: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x00290540: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x00290544: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00290548: beq         $s2, $zero, L_00290580
    if (ctx->r18 == 0) {
        // 0x0029054C: addiu       $a0, $s3, 0x48
        ctx->r4 = ADD32(ctx->r19, 0X48);
            goto L_00290580;
    }
    // 0x0029054C: addiu       $a0, $s3, 0x48
    ctx->r4 = ADD32(ctx->r19, 0X48);
    // 0x00290550: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00290554: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00290558: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x0029055C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x00290560: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x00290564: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00290568: sb          $s4, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r20;
    // 0x0029056C: jal         0x00291034
    // 0x00290570: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_00291034(rdram, ctx);
        goto after_7;
    // 0x00290570: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_7:
    // 0x00290574: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x00290578: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x0029057C: sb          $v0, 0x37($s1)
    MEM_B(0X37, ctx->r17) = ctx->r2;
L_00290580:
    // 0x00290580: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00290584: sll         $v0, $s4, 4
    ctx->r2 = S32(ctx->r20 << 4);
    // 0x00290588: swc1        $f1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0029058C: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00290590: lwc1        $f20, 0x28($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X28);
    // 0x00290594: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00290598: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0029059C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002905A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002905A4: lbu         $s0, 0xA($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0XA);
    // 0x002905A8: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x002905AC: jal         0x00292804
    // 0x002905B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00292804(rdram, ctx);
        goto after_8;
    // 0x002905B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_8:
    // 0x002905B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002905B8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002905BC: jal         0x00292774
    // 0x002905C0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00292774(rdram, ctx);
        goto after_9;
    // 0x002905C0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_9:
    // 0x002905C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002905C8: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x002905CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002905D0: lw          $s2, 0x0($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X0);
    // 0x002905D4: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x002905D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002905DC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x002905E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002905E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002905E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x002905EC: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x002905F0: lw          $a2, 0x8($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X8);
    // 0x002905F4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x002905F8: jal         0x00294540
    // 0x002905FC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_00294540(rdram, ctx);
        goto after_10;
    // 0x002905FC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_10:
    // 0x00290600: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00290604: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x00290608: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x0029060C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00290610: addiu       $s0, $s3, 0x48
    ctx->r16 = ADD32(ctx->r19, 0X48);
    // 0x00290614: lbu         $v0, 0xD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XD);
    // 0x00290618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029061C: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x00290620: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00290624: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00290628: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0029062C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00290630: jal         0x00291034
    // 0x00290634: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_11;
    // 0x00290634: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_11:
    // 0x00290638: lw          $v0, 0x8($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X8);
    // 0x0029063C: beq         $v0, $zero, L_00290A98
    if (ctx->r2 == 0) {
        // 0x00290640: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_00290A98;
    }
    // 0x00290640: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x00290644: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x00290648: ori         $v0, $s4, 0x80
    ctx->r2 = ctx->r20 | 0X80;
    // 0x0029064C: sb          $v0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r2;
    // 0x00290650: sb          $s6, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r22;
    // 0x00290654: sb          $zero, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = 0;
    // 0x00290658: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x0029065C: lw          $a2, 0x8($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X8);
    // 0x00290660: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00290664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00290668: mflo        $a2
    ctx->r6 = lo;
    // 0x0029066C: jal         0x00291034
    // 0x00290670: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00291034(rdram, ctx);
        goto after_12;
    // 0x00290670: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_12:
    // 0x00290674: j           L_00290A98
    // 0x00290678: nop

        goto L_00290A98;
    // 0x00290678: nop

L_0029067C:
    // 0x0029067C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00290680:
    // 0x00290680: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    // 0x00290684: jal         0x002925E0
    // 0x00290688: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_002925E0(rdram, ctx);
        goto after_13;
    // 0x00290688: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_13:
    // 0x0029068C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00290690: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x00290694: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00290A98;
    }
    // 0x00290694: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00290698: lbu         $v1, 0x35($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X35);
    // 0x0029069C: bne         $v1, $v0, L_002906B0
    if (ctx->r3 != ctx->r2) {
        // 0x002906A0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_002906B0;
    }
    // 0x002906A0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x002906A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002906A8: j           L_00290A98
    // 0x002906AC: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
        goto L_00290A98;
    // 0x002906AC: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
L_002906B0:
    // 0x002906B0: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x002906B4: sb          $v1, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r3;
    // 0x002906B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002906BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002906C0: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x002906C4: jal         0x00292A74
    // 0x002906C8: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00292A74(rdram, ctx);
        goto after_14;
    // 0x002906C8: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_14:
    // 0x002906CC: j           L_00290A98
    // 0x002906D0: nop

        goto L_00290A98;
    // 0x002906D0: nop

L_002906D4:
    // 0x002906D4: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    // 0x002906D8: jal         0x002925E0
    // 0x002906DC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_002925E0(rdram, ctx);
        goto after_15;
    // 0x002906DC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_15:
    // 0x002906E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002906E4: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x002906E8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00290A98;
    }
    // 0x002906E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002906EC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002906F0: jal         0x00292774
    // 0x002906F4: sb          $s0, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r16;
    func_00292774(rdram, ctx);
        goto after_16;
    // 0x002906F4: sb          $s0, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r16;
    after_16:
    // 0x002906F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002906FC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00290700: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x00290704: jal         0x002927E8
    // 0x00290708: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_17;
    // 0x00290708: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_17:
    // 0x0029070C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00290710: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00290714: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00290718: jal         0x002943E0
    // 0x0029071C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_18;
    // 0x0029071C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_18:
    // 0x00290720: j           L_00290A98
    // 0x00290724: nop

        goto L_00290A98;
    // 0x00290724: nop

L_00290728:
    // 0x00290728: lw          $s1, 0x64($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X64);
    // 0x0029072C: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x00290730: andi        $s2, $s4, 0xFF
        ctx->r18 = ctx->r20 & 0XFF;
            goto L_00290A98;
    }
    // 0x00290730: andi        $s2, $s4, 0xFF
    ctx->r18 = ctx->r20 & 0XFF;
L_00290734:
    // 0x00290734: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x00290738: bne         $v0, $s2, L_00290774
    if (ctx->r2 != ctx->r18) {
        // 0x0029073C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00290774;
    }
    // 0x0029073C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00290740: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00290744: jal         0x00292774
    // 0x00290748: sb          $s5, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r21;
    func_00292774(rdram, ctx);
        goto after_19;
    // 0x00290748: sb          $s5, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r21;
    after_19:
    // 0x0029074C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00290750: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00290754: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x00290758: jal         0x002927E8
    // 0x0029075C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_20;
    // 0x0029075C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_20:
    // 0x00290760: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00290764: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00290768: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x0029076C: jal         0x002943E0
    // 0x00290770: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_21;
    // 0x00290770: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_21:
L_00290774:
    // 0x00290774: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00290778: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x0029077C: nop
    
            goto L_00290A98;
    }
    // 0x0029077C: nop

    // 0x00290780: j           L_00290734
    // 0x00290784: nop

        goto L_00290734;
    // 0x00290784: nop

L_00290788:
    // 0x00290788: andi        $v1, $s6, 0xFF
    ctx->r3 = ctx->r22 & 0XFF;
    // 0x0029078C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00290790: beq         $v1, $v0, L_002908A8
    if (ctx->r3 == ctx->r2) {
        // 0x00290794: slti        $v0, $v1, 0x11
        ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
            goto L_002908A8;
    }
    // 0x00290794: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x00290798: beq         $v0, $zero, L_002907B8
    if (ctx->r2 == 0) {
        // 0x0029079C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_002907B8;
    }
    // 0x0029079C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x002907A0: beq         $v1, $v0, L_00290828
    if (ctx->r3 == ctx->r2) {
        // 0x002907A4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_00290828;
    }
    // 0x002907A4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x002907A8: beq         $v1, $v0, L_002907D4
    if (ctx->r3 == ctx->r2) {
        // 0x002907AC: andi        $a2, $s4, 0xFF
        ctx->r6 = ctx->r20 & 0XFF;
            goto L_002907D4;
    }
    // 0x002907AC: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x002907B0: j           L_00290A98
    // 0x002907B4: nop

        goto L_00290A98;
    // 0x002907B4: nop

L_002907B8:
    // 0x002907B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x002907BC: beq         $v1, $v0, L_002908BC
    if (ctx->r3 == ctx->r2) {
        // 0x002907C0: addiu       $v0, $zero, 0x5B
        ctx->r2 = ADD32(0, 0X5B);
            goto L_002908BC;
    }
    // 0x002907C0: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
    // 0x002907C4: beq         $v1, $v0, L_00290968
    if (ctx->r3 == ctx->r2) {
        // 0x002907C8: andi        $a2, $s4, 0xFF
        ctx->r6 = ctx->r20 & 0XFF;
            goto L_00290968;
    }
    // 0x002907C8: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x002907CC: j           L_00290A98
    // 0x002907D0: nop

        goto L_00290A98;
    // 0x002907D0: nop

L_002907D4:
    // 0x002907D4: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x002907D8: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x002907DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002907E0: sb          $s0, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r16;
    // 0x002907E4: lw          $s1, 0x64($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X64);
    // 0x002907E8: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x002907EC: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_00290A98;
    }
    // 0x002907EC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
L_002907F0:
    // 0x002907F0: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x002907F4: bne         $v0, $s0, L_00290814
    if (ctx->r2 != ctx->r16) {
        // 0x002907F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00290814;
    }
    // 0x002907F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002907FC: jal         0x00292804
    // 0x00290800: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00292804(rdram, ctx);
        goto after_22;
    // 0x00290800: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_22:
    // 0x00290804: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00290808: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0029080C: jal         0x002942B0
    // 0x00290810: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_002942B0(rdram, ctx);
        goto after_23;
    // 0x00290810: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_23:
L_00290814:
    // 0x00290814: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00290818: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x0029081C: nop
    
            goto L_00290A98;
    }
    // 0x0029081C: nop

    // 0x00290820: j           L_002907F0
    // 0x00290824: nop

        goto L_002907F0;
    // 0x00290824: nop

L_00290828:
    // 0x00290828: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x0029082C: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x00290830: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x00290834: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00290838: sb          $s0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r16;
    // 0x0029083C: lw          $s1, 0x64($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X64);
    // 0x00290840: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x00290844: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_00290A98;
    }
    // 0x00290844: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00290848: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_0029084C:
    // 0x0029084C: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x00290850: bne         $v0, $s2, L_00290894
    if (ctx->r2 != ctx->r18) {
        // 0x00290854: nop
    
            goto L_00290894;
    }
    // 0x00290854: nop

    // 0x00290858: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0029085C: beq         $v0, $s4, L_00290894
    if (ctx->r2 == ctx->r20) {
        // 0x00290860: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00290894;
    }
    // 0x00290860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00290864: jal         0x00292774
    // 0x00290868: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_00292774(rdram, ctx);
        goto after_24;
    // 0x00290868: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_24:
    // 0x0029086C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00290870: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x00290874: jal         0x002927E8
    // 0x00290878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002927E8(rdram, ctx);
        goto after_25;
    // 0x00290878: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_25:
    // 0x0029087C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00290880: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x00290884: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00290888: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x0029088C: jal         0x002943E0
    // 0x00290890: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_26;
    // 0x00290890: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_26:
L_00290894:
    // 0x00290894: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00290898: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x0029089C: nop
    
            goto L_00290A98;
    }
    // 0x0029089C: nop

    // 0x002908A0: j           L_0029084C
    // 0x002908A4: nop

        goto L_0029084C;
    // 0x002908A4: nop

L_002908A8:
    // 0x002908A8: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x002908AC: sll         $v0, $s4, 4
    ctx->r2 = S32(ctx->r20 << 4);
    // 0x002908B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002908B4: j           L_00290A98
    // 0x002908B8: sb          $s0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r16;
        goto L_00290A98;
    // 0x002908B8: sb          $s0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r16;
L_002908BC:
    // 0x002908BC: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x002908C0: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x002908C4: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x002908C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002908CC: sb          $s0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r16;
    // 0x002908D0: lw          $s1, 0x64($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X64);
    // 0x002908D4: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x002908D8: addu        $s4, $a2, $zero
        ctx->r20 = ADD32(ctx->r6, 0);
            goto L_00290A98;
    }
    // 0x002908D8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x002908DC: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x002908E0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x002908E4: sltiu       $s0, $v0, 0x40
    ctx->r16 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x002908E8: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x002908EC: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x002908F0: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
L_002908F4:
    // 0x002908F4: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x002908F8: bne         $v0, $s4, L_00290954
    if (ctx->r2 != ctx->r20) {
        // 0x002908FC: nop
    
            goto L_00290954;
    }
    // 0x002908FC: nop

    // 0x00290900: lbu         $v0, 0x35($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X35);
    // 0x00290904: beq         $v0, $s2, L_00290954
    if (ctx->r2 == ctx->r18) {
        // 0x00290908: nop
    
            goto L_00290954;
    }
    // 0x00290908: nop

    // 0x0029090C: bne         $s0, $zero, L_00290924
    if (ctx->r16 != 0) {
        // 0x00290910: nop
    
            goto L_00290924;
    }
    // 0x00290910: nop

    // 0x00290914: beql        $v0, $zero, L_00290954
    if (ctx->r2 == 0) {
        // 0x00290918: sb          $s7, 0x35($s1)
        MEM_B(0X35, ctx->r17) = ctx->r23;
            goto L_00290954;
    }
    goto skip_1;
    // 0x00290918: sb          $s7, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r23;
    skip_1:
    // 0x0029091C: j           L_00290954
    // 0x00290920: nop

        goto L_00290954;
    // 0x00290920: nop

L_00290924:
    // 0x00290924: bne         $v0, $s6, L_00290934
    if (ctx->r2 != ctx->r22) {
        // 0x00290928: nop
    
            goto L_00290934;
    }
    // 0x00290928: nop

    // 0x0029092C: j           L_00290954
    // 0x00290930: sb          $zero, 0x35($s1)
    MEM_B(0X35, ctx->r17) = 0;
        goto L_00290954;
    // 0x00290930: sb          $zero, 0x35($s1)
    MEM_B(0X35, ctx->r17) = 0;
L_00290934:
    // 0x00290934: bne         $v0, $s5, L_00290954
    if (ctx->r2 != ctx->r21) {
        // 0x00290938: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00290954;
    }
    // 0x00290938: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029093C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00290940: sb          $s2, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r18;
    // 0x00290944: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00290948: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x0029094C: jal         0x00292A74
    // 0x00290950: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00292A74(rdram, ctx);
        goto after_27;
    // 0x00290950: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_27:
L_00290954:
    // 0x00290954: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00290958: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x0029095C: nop
    
            goto L_00290A98;
    }
    // 0x0029095C: nop

    // 0x00290960: j           L_002908F4
    // 0x00290964: nop

        goto L_002908F4;
    // 0x00290964: nop

L_00290968:
    // 0x00290968: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x0029096C: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x00290970: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00290974: sb          $s0, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r16;
    // 0x00290978: lw          $s1, 0x64($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X64);
    // 0x0029097C: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x00290980: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_00290A98;
    }
    // 0x00290980: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
L_00290984:
    // 0x00290984: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x00290988: bne         $v0, $s0, L_0029099C
    if (ctx->r2 != ctx->r16) {
        // 0x0029098C: addiu       $a1, $s1, 0x4
        ctx->r5 = ADD32(ctx->r17, 0X4);
            goto L_0029099C;
    }
    // 0x0029098C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00290990: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00290994: jal         0x00294200
    // 0x00290998: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    func_00294200(rdram, ctx);
        goto after_28;
    // 0x00290998: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    after_28:
L_0029099C:
    // 0x0029099C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x002909A0: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x002909A4: nop
    
            goto L_00290A98;
    }
    // 0x002909A4: nop

    // 0x002909A8: j           L_00290984
    // 0x002909AC: nop

        goto L_00290984;
    // 0x002909AC: nop

L_002909B0:
    // 0x002909B0: lw          $v0, 0x20($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X20);
    // 0x002909B4: bne         $v0, $zero, L_002909D4
    if (ctx->r2 != 0) {
        // 0x002909B8: nop
    
            goto L_002909D4;
    }
    // 0x002909B8: nop

    // 0x002909BC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x002909C0: addiu       $a0, $a0, -0x5D70
    ctx->r4 = ADD32(ctx->r4, -0X5D70);
    // 0x002909C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002909C8: addiu       $a1, $a1, -0x5D6C
    ctx->r5 = ADD32(ctx->r5, -0X5D6C);
    // 0x002909CC: jal         0x0029B020
    // 0x002909D0: addiu       $a2, $zero, 0x2C7
    ctx->r6 = ADD32(0, 0X2C7);
    func_0029B020(rdram, ctx);
        goto after_29;
    // 0x002909D0: addiu       $a2, $zero, 0x2C7
    ctx->r6 = ADD32(0, 0X2C7);
    after_29:
L_002909D4:
    // 0x002909D4: lw          $a1, 0x20($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X20);
    // 0x002909D8: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x002909DC: andi        $v1, $s6, 0xFF
    ctx->r3 = ctx->r22 & 0XFF;
    // 0x002909E0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002909E4: beq         $v0, $zero, L_00290A98
    if (ctx->r2 == 0) {
        // 0x002909E8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00290A98;
    }
    // 0x002909E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002909EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002909F0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002909F4: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x002909F8: jal         0x00292A20
    // 0x002909FC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00292A20(rdram, ctx);
        goto after_30;
    // 0x002909FC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_30:
    // 0x00290A00: j           L_00290A98
    // 0x00290A04: nop

        goto L_00290A98;
    // 0x00290A04: nop

L_00290A08:
    // 0x00290A08: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x00290A0C: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x00290A10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00290A14: andi        $s2, $s4, 0xFF
    ctx->r18 = ctx->r20 & 0XFF;
    // 0x00290A18: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
    // 0x00290A1C: sll         $s0, $s2, 4
    ctx->r16 = S32(ctx->r18 << 4);
    // 0x00290A20: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00290A24: lh          $v0, 0x4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4);
    // 0x00290A28: addiu       $v1, $v1, -0x2000
    ctx->r3 = ADD32(ctx->r3, -0X2000);
    // 0x00290A2C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00290A30: mflo        $v0
    ctx->r2 = lo;
    // 0x00290A34: bltzl       $v0, L_00290A3C
    if (SIGNED(ctx->r2) < 0) {
        // 0x00290A38: addiu       $v0, $v0, 0x1FFF
        ctx->r2 = ADD32(ctx->r2, 0X1FFF);
            goto L_00290A3C;
    }
    goto skip_2;
    // 0x00290A38: addiu       $v0, $v0, 0x1FFF
    ctx->r2 = ADD32(ctx->r2, 0X1FFF);
    skip_2:
L_00290A3C:
    // 0x00290A3C: jal         0x00290D90
    // 0x00290A40: sra         $a0, $v0, 13
    ctx->r4 = S32(SIGNED(ctx->r2) >> 13);
    func_00290D90(rdram, ctx);
        goto after_31;
    // 0x00290A40: sra         $a0, $v0, 13
    ctx->r4 = S32(SIGNED(ctx->r2) >> 13);
    after_31:
    // 0x00290A44: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
    // 0x00290A48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00290A4C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00290A50: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x00290A54: lw          $s1, 0x64($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X64);
    // 0x00290A58: beq         $s1, $zero, L_00290A98
    if (ctx->r17 == 0) {
        // 0x00290A5C: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_00290A98;
    }
    // 0x00290A5C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00290A60:
    // 0x00290A60: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x00290A64: bne         $v0, $s0, L_00290A8C
    if (ctx->r2 != ctx->r16) {
        // 0x00290A68: nop
    
            goto L_00290A8C;
    }
    // 0x00290A68: nop

    // 0x00290A6C: lwc1        $f0, 0x28($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X28);
    // 0x00290A70: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00290A74: lwc1        $f1, 0x2C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2C);
    // 0x00290A78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00290A7C: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x00290A80: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00290A84: jal         0x00294340
    // 0x00290A88: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00294340(rdram, ctx);
        goto after_32;
    // 0x00290A88: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_32:
L_00290A8C:
    // 0x00290A8C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00290A90: bne         $s1, $zero, L_00290A60
    if (ctx->r17 != 0) {
        // 0x00290A94: nop
    
            goto L_00290A60;
    }
    // 0x00290A94: nop

L_00290A98:
    // 0x00290A98: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x00290A9C: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x00290AA0: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x00290AA4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x00290AA8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x00290AAC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x00290AB0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00290AB4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00290AB8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00290ABC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00290AC0: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x00290AC4: jr          $ra
    // 0x00290AC8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00290AC8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_002682CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002682CC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002682D0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002682D4: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x002682D8: beq         $v0, $zero, L_002682F4
    if (ctx->r2 == 0) {
        // 0x002682DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002682F4;
    }
    // 0x002682DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002682E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002682E4: addu        $at, $at, $v0
    gpr jr_addend_002682EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002682E8: lw          $v0, 0x7E60($at)
    ctx->r2 = ADD32(ctx->r1, 0X7E60);
    // 0x002682EC: jr          $v0
    // 0x002682F0: nop

    // The original 13-entry table has two destinations. The false-return
    // destination (0x002682FC) was split into a provisional ELF function and
    // therefore omitted from the generated switch.
    switch (jr_addend_002682EC >> 2) {
        case 1:
        case 4:
        case 9:
        case 11:
            func_002682FC(rdram, ctx);
            return;
        case 0:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 12:
            goto L_002682F4;
        default:
            switch_error(__func__, 0x002682EC, 0x800A7E60);
    }
    // 0x002682F0: nop

L_002682F4:
    // 0x002682F4: jr          $ra
    // 0x002682F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x002682F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0041B7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B7BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B7C0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B7C4: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0041B7C8: beq         $v0, $zero, L_0041B7DC
    if (ctx->r2 == 0) {
        // 0x0041B7CC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B7DC;
    }
    // 0x0041B7CC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B7D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B7D4: j           L_0041B7EC
    // 0x0041B7D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B7EC;
    // 0x0041B7D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B7DC:
    // 0x0041B7DC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B7E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B7E4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B7E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B7EC:
    // 0x0041B7EC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B7F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B7F4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B7F8: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0041B7FC: beq         $v0, $zero, L_0041B814
    if (ctx->r2 == 0) {
        // 0x0041B800: nop
    
            goto L_0041B814;
    }
    // 0x0041B800: nop

    // 0x0041B804: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B808: addiu       $v0, $v0, 0x5A14
    ctx->r2 = ADD32(ctx->r2, 0X5A14);
    // 0x0041B80C: j           L_0041B820
    // 0x0041B810: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B820;
    // 0x0041B810: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B814:
    // 0x0041B814: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B818: addiu       $v0, $v0, 0x5A30
    ctx->r2 = ADD32(ctx->r2, 0X5A30);
    // 0x0041B81C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B820:
    // 0x0041B820: jr          $ra
    // 0x0041B824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00201910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201910: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00201914: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00201918: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020191C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x00201920: mflo        $a2
    ctx->r6 = lo;
    // 0x00201924: jr          $ra
    // 0x00201928: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    return;
    // 0x00201928: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void func_0040A8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A8FC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x0040A900: sw          $s7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r23;
    // 0x0040A904: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0040A908: sw          $fp, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r30;
    // 0x0040A90C: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x0040A910: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x0040A914: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0040A918: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x0040A91C: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x0040A920: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
    // 0x0040A924: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x0040A928: sw          $s5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r21;
    // 0x0040A92C: addu        $s5, $s1, $zero
    ctx->r21 = ADD32(ctx->r17, 0);
    // 0x0040A930: sw          $s6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r22;
    // 0x0040A934: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
    // 0x0040A938: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x0040A93C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x0040A940: addiu       $a1, $s7, 0x140
    ctx->r5 = ADD32(ctx->r23, 0X140);
    // 0x0040A944: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x0040A948: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040A94C: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x0040A950: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x0040A954: sdc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF0, ctx->r29);
    // 0x0040A958: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x0040A95C: jal         0x00246108
    // 0x0040A960: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040A960: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x0040A964: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0040A968: addiu       $s2, $s2, -0x490
    ctx->r18 = ADD32(ctx->r18, -0X490);
    // 0x0040A96C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x0040A970: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A974: lwc1        $f20, 0x864($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X864);
    // 0x0040A978: beq         $a0, $zero, L_0040A998
    if (ctx->r4 == 0) {
        // 0x0040A97C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0040A998;
    }
    // 0x0040A97C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0040A980: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040A984: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040A988: beq         $v0, $zero, L_0040A998
    if (ctx->r2 == 0) {
        // 0x0040A98C: nop
    
            goto L_0040A998;
    }
    // 0x0040A98C: nop

    // 0x0040A990: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x0040A994: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
L_0040A998:
    // 0x0040A998: lw          $v0, 0x674($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X674);
    // 0x0040A99C: beq         $v0, $zero, L_0040A9BC
    if (ctx->r2 == 0) {
        // 0x0040A9A0: mov.s       $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
            goto L_0040A9BC;
    }
    // 0x0040A9A0: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x0040A9A4: lwc1        $f1, 0x678($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X678);
    // 0x0040A9A8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0040A9AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0040A9B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040A9B4: j           L_0040A9C4
    // 0x0040A9B8: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
        goto L_0040A9C4;
    // 0x0040A9B8: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
L_0040A9BC:
    // 0x0040A9BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A9C0: lwc1        $f1, 0x868($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X868);
L_0040A9C4:
    // 0x0040A9C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A9C8: lwc1        $f0, 0x86C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X86C);
    // 0x0040A9CC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A9D0: nop

    // 0x0040A9D4: bc1tl       L_0040A9DC
    if (c1cs) {
        // 0x0040A9D8: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0040A9DC;
    }
    goto skip_0;
    // 0x0040A9D8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_0:
L_0040A9DC:
    // 0x0040A9DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A9E0: lwc1        $f0, 0x870($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X870);
    // 0x0040A9E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040A9E8: nop

    // 0x0040A9EC: bc1tl       L_0040A9F4
    if (c1cs) {
        // 0x0040A9F0: addiu       $s6, $zero, 0x1
        ctx->r22 = ADD32(0, 0X1);
            goto L_0040A9F4;
    }
    goto skip_1;
    // 0x0040A9F0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    skip_1:
L_0040A9F4:
    // 0x0040A9F4: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x0040A9F8: beq         $v0, $zero, L_0040AB80
    if (ctx->r2 == 0) {
        // 0x0040A9FC: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_0040AB80;
    }
    // 0x0040A9FC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x0040AA00: lw          $v1, 0x66C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X66C);
    // 0x0040AA04: bne         $v1, $v0, L_0040AA40
    if (ctx->r3 != ctx->r2) {
        // 0x0040AA08: nop
    
            goto L_0040AA40;
    }
    // 0x0040AA08: nop

    // 0x0040AA0C: lw          $v0, 0x67C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X67C);
    // 0x0040AA10: slti        $v0, $v0, 0x65
    ctx->r2 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x0040AA14: bnel        $v0, $zero, L_0040AA64
    if (ctx->r2 != 0) {
        // 0x0040AA18: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0040AA64;
    }
    goto skip_2;
    // 0x0040AA18: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_2:
    // 0x0040AA1C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AA20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA24: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AA28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AA2C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x0040AA30: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AA34: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x0040AA38: j           L_0040AA64
    // 0x0040AA3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
        goto L_0040AA64;
    // 0x0040AA3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AA40:
    // 0x0040AA40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040AA44: lwc1        $f0, 0x874($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X874);
    // 0x0040AA48: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040AA4C: nop

    // 0x0040AA50: bc1fl       L_0040AA60
    if (!c1cs) {
        // 0x0040AA54: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_0040AA60;
    }
    goto skip_3;
    // 0x0040AA54: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_3:
    // 0x0040AA58: j           L_0040AA64
    // 0x0040AA5C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_0040AA64;
    // 0x0040AA5C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0040AA60:
    // 0x0040AA60: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
L_0040AA64:
    // 0x0040AA64: beq         $s1, $zero, L_0040AAA4
    if (ctx->r17 == 0) {
        // 0x0040AA68: sll         $a0, $s0, 2
        ctx->r4 = S32(ctx->r16 << 2);
            goto L_0040AAA4;
    }
    // 0x0040AA68: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x0040AA6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA70: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x0040AA74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AA78: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040AA7C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x0040AA80: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x0040AA84: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0040AA88: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0040AA8C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0040AA90: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x0040AA94: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x0040AA98: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040AA9C: j           L_0040AB48
    // 0x0040AAA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
        goto L_0040AB48;
    // 0x0040AAA0: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
L_0040AAA4:
    // 0x0040AAA4: beq         $s3, $zero, L_0040AB10
    if (ctx->r19 == 0) {
        // 0x0040AAA8: nop
    
            goto L_0040AB10;
    }
    // 0x0040AAA8: nop

    // 0x0040AAAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040AAB0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x0040AAB4: beq         $a0, $zero, L_0040AAC8
    if (ctx->r4 == 0) {
        // 0x0040AAB8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040AAC8;
    }
    // 0x0040AAB8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0040AABC:
    // 0x0040AABC: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x0040AAC0: bne         $a0, $zero, L_0040AABC
    if (ctx->r4 != 0) {
        // 0x0040AAC4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0040AABC;
    }
    // 0x0040AAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0040AAC8:
    // 0x0040AAC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0040AACC: beq         $v0, $zero, L_0040AAF0
    if (ctx->r2 == 0) {
        // 0x0040AAD0: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_0040AAF0;
    }
    // 0x0040AAD0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AAD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AAD8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AADC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AAE0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x0040AAE4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AAE8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0040AAEC: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AAF0:
    // 0x0040AAF0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0040AAF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040AAF8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0040AAFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040AB00: addiu       $v1, $zero, 0x1D
    ctx->r3 = ADD32(0, 0X1D);
    // 0x0040AB04: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0040AB08: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x0040AB0C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_0040AB10:
    // 0x0040AB10: beq         $s4, $zero, L_0040AB48
    if (ctx->r20 == 0) {
        // 0x0040AB14: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0040AB48;
    }
    // 0x0040AB14: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB18: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0040AB1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040AB20: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x0040AB24: beq         $s5, $zero, L_0040AB34
    if (ctx->r21 == 0) {
        // 0x0040AB28: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_0040AB34;
    }
    // 0x0040AB28: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0040AB2C: j           L_0040AB40
    // 0x0040AB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_0040AB40;
    // 0x0040AB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_0040AB34:
    // 0x0040AB34: bne         $s6, $zero, L_0040AB40
    if (ctx->r22 != 0) {
        // 0x0040AB38: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0040AB40;
    }
    // 0x0040AB38: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0040AB3C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_0040AB40:
    // 0x0040AB40: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x0040AB44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040AB48:
    // 0x0040AB48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040AB4C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040AB50: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040AB54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040AB58: jal         0x0026D518
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_1;
    // 0x0040AB5C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_1:
    // 0x0040AB60: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0040AB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040AB68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040AB6C: sw          $v0, 0x66C($s2)
    MEM_W(0X66C, ctx->r18) = ctx->r2;
    // 0x0040AB70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040AB74: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0040AB78: jal         0x00243414
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040AB7C: sw          $zero, 0x67C($s2)
    MEM_W(0X67C, ctx->r18) = 0;
    after_2:
L_0040AB80:
    // 0x0040AB80: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x0040AB84: lw          $fp, 0xE8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XE8);
    // 0x0040AB88: lw          $s7, 0xE4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE4);
    // 0x0040AB8C: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0040AB90: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0040AB94: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0040AB98: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040AB9C: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040ABA0: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040ABA4: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040ABA8: ldc1        $f20, 0xF0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF0);
    // 0x0040ABAC: jr          $ra
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x0040ABB0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_00424A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00424A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00424A18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00424A1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00424A20: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00424A24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00424A28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00424A2C: jal         0x00275A74
    // 0x00424A30: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_00275A74(rdram, ctx);
        goto after_0;
    // 0x00424A30: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00424A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00424A38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00424A3C: jal         0x00416454
    // 0x00424A40: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416454(rdram, ctx);
        goto after_1;
    // 0x00424A40: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00424A44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00424A48: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00424A4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00424A50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424A54: jr          $ra
    // 0x00424A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00424A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040C394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C394: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0040C398: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x0040C39C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040C3A0: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x0040C3A4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x0040C3A8: sdc1        $f21, 0x80($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X80, ctx->r29);
    // 0x0040C3AC: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x0040C3B0: jal         0x0026D518
    // 0x0040C3B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040C3B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0040C3B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040C3BC: lwc1        $f12, 0x1F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1F8);
    // 0x0040C3C0: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0040C3C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040C3C8: lwc1        $f14, 0x1FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x0040C3CC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0040C3D0: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x0040C3D4: jal         0x002119FC
    // 0x0040C3D8: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0040C3D8: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_1:
    // 0x0040C3DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C3E0: lwc1        $f12, 0x8B8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8B8);
    // 0x0040C3E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C3E8: lwc1        $f14, 0x8BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8BC);
    // 0x0040C3EC: jal         0x002119FC
    // 0x0040C3F0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x0040C3F0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_2:
    // 0x0040C3F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0040C3F8: jal         0x002982F0
    // 0x0040C3FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0040C3FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x0040C400: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0040C404: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0040C408: jal         0x002974C0
    // 0x0040C40C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x0040C40C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x0040C410: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0040C414: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040C418: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040C41C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x0040C420: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0040C424: swc1        $f21, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f_odd[(21 - 1) * 2];
    // 0x0040C428: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0040C42C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x0040C430: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x0040C434: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x0040C438: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x0040C43C: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x0040C440: jal         0x00220A1C
    // 0x0040C444: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_5;
    // 0x0040C444: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x0040C448: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0040C44C: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0040C450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0040C454: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C458: lwc1        $f0, 0x8C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8C0);
    // 0x0040C45C: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0040C460: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0040C464: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x0040C468: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x0040C46C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0040C470: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x0040C474: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x0040C478: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x0040C47C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x0040C480: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0040C484: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0040C488: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0040C48C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0040C490: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0040C494: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x0040C498: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x0040C49C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0040C4A0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0040C4A4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x0040C4A8: jal         0x00227240
    // 0x0040C4AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00227240(rdram, ctx);
        goto after_6;
    // 0x0040C4AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0040C4B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040C4B4: beq         $a0, $zero, L_0040C4D8
    if (ctx->r4 == 0) {
        // 0x0040C4B8: nop
    
            goto L_0040C4D8;
    }
    // 0x0040C4B8: nop

    // 0x0040C4BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0040C4C0: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x0040C4C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040C4C8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x0040C4CC: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x0040C4D0: jal         0x00246690
    // 0x0040C4D4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_7;
    // 0x0040C4D4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_7:
L_0040C4D8:
    // 0x0040C4D8: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x0040C4DC: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x0040C4E0: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x0040C4E4: ldc1        $f21, 0x80($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X80);
    // 0x0040C4E8: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x0040C4EC: jr          $ra
    // 0x0040C4F0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0040C4F0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_002A1DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1DEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002A1DF0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002A1DF4: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002A1DF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A1DFC: lui         $s2, 0xB1FE
    ctx->r18 = S32(0XB1FE << 16);
    // 0x002A1E00: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A1E04: ori         $a0, $a0, 0xFFF4
    ctx->r4 = ctx->r4 | 0XFFF4;
    // 0x002A1E08: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002A1E0C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x002A1E10: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002A1E14: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002A1E18: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A1E1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1E20: jal         0x002A1384
    // 0x002A1E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A1E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A1E28: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002A1E2C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A1E30: jal         0x002A1384
    // 0x002A1E34: ori         $a0, $a0, 0xFFF8
    ctx->r4 = ctx->r4 | 0XFFF8;
    func_002A1384(rdram, ctx);
        goto after_1;
    // 0x002A1E34: ori         $a0, $a0, 0xFFF8
    ctx->r4 = ctx->r4 | 0XFFF8;
    after_1:
    // 0x002A1E38: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002A1E3C: lui         $v1, 0x3FFF
    ctx->r3 = S32(0X3FFF << 16);
    // 0x002A1E40: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x002A1E44: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002A1E48: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x002A1E4C: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x002A1E50: beq         $v1, $zero, L_002A1E64
    if (ctx->r3 == 0) {
        // 0x002A1E54: lui         $v0, 0xEFFF
        ctx->r2 = S32(0XEFFF << 16);
            goto L_002A1E64;
    }
    // 0x002A1E54: lui         $v0, 0xEFFF
    ctx->r2 = S32(0XEFFF << 16);
    // 0x002A1E58: jal         0x002A13F0
    // 0x002A1E5C: nop

    func_002A13F0(rdram, ctx);
        goto after_2;
    // 0x002A1E5C: nop

    after_2:
    // 0x002A1E60: lui         $v0, 0xEFFF
    ctx->r2 = S32(0XEFFF << 16);
L_002A1E64:
    // 0x002A1E64: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A1E68: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x002A1E6C: beq         $v0, $zero, L_002A1E7C
    if (ctx->r2 == 0) {
        // 0x002A1E70: lui         $v0, 0x8F13
        ctx->r2 = S32(0X8F13 << 16);
            goto L_002A1E7C;
    }
    // 0x002A1E70: lui         $v0, 0x8F13
    ctx->r2 = S32(0X8F13 << 16);
    // 0x002A1E74: addiu       $v0, $v0, -0x7AA0
    ctx->r2 = ADD32(ctx->r2, -0X7AA0);
    // 0x002A1E78: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_002A1E7C:
    // 0x002A1E7C: beq         $s3, $zero, L_002A1FDC
    if (ctx->r19 == 0) {
        // 0x002A1E80: lui         $s7, 0x8013
        ctx->r23 = S32(0X8013 << 16);
            goto L_002A1FDC;
    }
    // 0x002A1E80: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x002A1E84: addiu       $s4, $s7, -0x7ED0
    ctx->r20 = ADD32(ctx->r23, -0X7ED0);
    // 0x002A1E88: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_002A1E8C:
    // 0x002A1E8C: lw          $v0, -0x7ED0($s7)
    ctx->r2 = MEM_W(ctx->r23, -0X7ED0);
    // 0x002A1E90: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x002A1E94: bne         $v0, $zero, L_002A1EAC
    if (ctx->r2 != 0) {
        // 0x002A1E98: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002A1EAC;
    }
    // 0x002A1E98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002A1E9C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x002A1EA0: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x002A1EA4: beq         $v0, $zero, L_002A1EE4
    if (ctx->r2 == 0) {
        // 0x002A1EA8: sltiu       $v0, $a0, 0x30
        ctx->r2 = ctx->r4 < 0X30 ? 1 : 0;
            goto L_002A1EE4;
    }
    // 0x002A1EA8: sltiu       $v0, $a0, 0x30
    ctx->r2 = ctx->r4 < 0X30 ? 1 : 0;
L_002A1EAC:
    // 0x002A1EAC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_002A1EB0:
    // 0x002A1EB0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x002A1EB4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A1EB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A1EBC: addu        $v1, $v0, $s4
    ctx->r3 = ADD32(ctx->r2, ctx->r20);
    // 0x002A1EC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002A1EC4: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x002A1EC8: bnel        $v0, $zero, L_002A1EB0
    if (ctx->r2 != 0) {
        // 0x002A1ECC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_002A1EB0;
    }
    goto skip_0;
    // 0x002A1ECC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x002A1ED0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002A1ED4: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x002A1ED8: bnel        $v0, $zero, L_002A1EB0
    if (ctx->r2 != 0) {
        // 0x002A1EDC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_002A1EB0;
    }
    goto skip_1;
    // 0x002A1EDC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x002A1EE0: sltiu       $v0, $a0, 0x30
    ctx->r2 = ctx->r4 < 0X30 ? 1 : 0;
L_002A1EE4:
    // 0x002A1EE4: bne         $v0, $zero, L_002A1F00
    if (ctx->r2 != 0) {
        // 0x002A1EE8: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_002A1F00;
    }
    // 0x002A1EE8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x002A1EEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002A1EF0: andi        $v1, $s1, 0xFFF
    ctx->r3 = ctx->r17 & 0XFFF;
    // 0x002A1EF4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x002A1EF8: j           L_002A1F1C
    // 0x002A1EFC: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
        goto L_002A1F1C;
    // 0x002A1EFC: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
L_002A1F00:
    // 0x002A1F00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002A1F04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A1F08: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x002A1F0C: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x002A1F10: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x002A1F14: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
    // 0x002A1F18: subu        $s0, $v1, $v0
    ctx->r16 = SUB32(ctx->r3, ctx->r2);
L_002A1F1C:
    // 0x002A1F1C: sltu        $v0, $s3, $s0
    ctx->r2 = ctx->r19 < ctx->r16 ? 1 : 0;
    // 0x002A1F20: bnel        $v0, $zero, L_002A1F28
    if (ctx->r2 != 0) {
        // 0x002A1F24: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_002A1F28;
    }
    goto skip_2;
    // 0x002A1F24: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    skip_2:
L_002A1F28:
    // 0x002A1F28: and         $v0, $a0, $s5
    ctx->r2 = ctx->r4 & ctx->r21;
    // 0x002A1F2C: bne         $v0, $zero, L_002A1F54
    if (ctx->r2 != 0) {
        // 0x002A1F30: andi        $v0, $a0, 0x4
        ctx->r2 = ctx->r4 & 0X4;
            goto L_002A1F54;
    }
    // 0x002A1F30: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x002A1F34: bnel        $s5, $s6, L_002A1FD0
    if (ctx->r21 != ctx->r22) {
        // 0x002A1F38: addu        $s2, $s2, $s0
        ctx->r18 = ADD32(ctx->r18, ctx->r16);
            goto L_002A1FD0;
    }
    goto skip_3;
    // 0x002A1F38: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    skip_3:
    // 0x002A1F3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1F40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A1F44: jal         0x002A1CB4
    // 0x002A1F48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002A1CB4(rdram, ctx);
        goto after_3;
    // 0x002A1F48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x002A1F4C: j           L_002A1FD0
    // 0x002A1F50: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
        goto L_002A1FD0;
    // 0x002A1F50: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_002A1F54:
    // 0x002A1F54: beq         $v0, $zero, L_002A1F84
    if (ctx->r2 == 0) {
        // 0x002A1F58: nop
    
            goto L_002A1F84;
    }
    // 0x002A1F58: nop

    // 0x002A1F5C: bne         $s5, $s6, L_002A1F70
    if (ctx->r21 != ctx->r22) {
        // 0x002A1F60: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1F70;
    }
    // 0x002A1F60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1F64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1F68: j           L_002A1F74
    // 0x002A1F6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_002A1F74;
    // 0x002A1F6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_002A1F70:
    // 0x002A1F70: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_002A1F74:
    // 0x002A1F74: jal         0x002A1D7C
    // 0x002A1F78: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002A1D7C(rdram, ctx);
        goto after_4;
    // 0x002A1F78: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002A1F7C: j           L_002A1FD0
    // 0x002A1F80: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
        goto L_002A1FD0;
    // 0x002A1F80: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_002A1F84:
    // 0x002A1F84: bne         $s5, $s6, L_002A1FA4
    if (ctx->r21 != ctx->r22) {
        // 0x002A1F88: andi        $v0, $a0, 0x8
        ctx->r2 = ctx->r4 & 0X8;
            goto L_002A1FA4;
    }
    // 0x002A1F88: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x002A1F8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1F90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002A1F94: jal         0x002A1A3C
    // 0x002A1F98: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002A1A3C(rdram, ctx);
        goto after_5;
    // 0x002A1F98: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002A1F9C: j           L_002A1FD0
    // 0x002A1FA0: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
        goto L_002A1FD0;
    // 0x002A1FA0: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_002A1FA4:
    // 0x002A1FA4: beq         $v0, $zero, L_002A1FC0
    if (ctx->r2 == 0) {
        // 0x002A1FA8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1FC0;
    }
    // 0x002A1FA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1FAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002A1FB0: jal         0x002A1844
    // 0x002A1FB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002A1844(rdram, ctx);
        goto after_6;
    // 0x002A1FB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x002A1FB8: j           L_002A1FD0
    // 0x002A1FBC: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
        goto L_002A1FD0;
    // 0x002A1FBC: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_002A1FC0:
    // 0x002A1FC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002A1FC4: jal         0x002A15B8
    // 0x002A1FC8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_002A15B8(rdram, ctx);
        goto after_7;
    // 0x002A1FC8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x002A1FCC: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_002A1FD0:
    // 0x002A1FD0: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x002A1FD4: bne         $s3, $zero, L_002A1E8C
    if (ctx->r19 != 0) {
        // 0x002A1FD8: addu        $s1, $s1, $s0
        ctx->r17 = ADD32(ctx->r17, ctx->r16);
            goto L_002A1E8C;
    }
    // 0x002A1FD8: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
L_002A1FDC:
    // 0x002A1FDC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002A1FE0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x002A1FE4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002A1FE8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002A1FEC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002A1FF0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A1FF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1FF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A2000: jr          $ra
    // 0x002A2004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002A2004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00254BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254BE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00254BE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00254BEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00254BF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00254BF4: lw          $s0, 0x20($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X20);
    // 0x00254BF8: beq         $s0, $zero, L_00254C2C
    if (ctx->r16 == 0) {
        // 0x00254BFC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00254C2C;
    }
    // 0x00254BFC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00254C00:
    // 0x00254C00: lw          $v0, 0x510($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X510);
    // 0x00254C04: beq         $v0, $zero, L_00254C20
    if (ctx->r2 == 0) {
        // 0x00254C08: nop
    
            goto L_00254C20;
    }
    // 0x00254C08: nop

    // 0x00254C0C: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00254C10: jal         0x00416AF8
    // 0x00254C14: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416AF8(rdram, ctx);
        goto after_0;
    // 0x00254C14: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00254C18: beql        $v0, $zero, L_00254C20
    if (ctx->r2 == 0) {
        // 0x00254C1C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00254C20;
    }
    goto skip_0;
    // 0x00254C1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_00254C20:
    // 0x00254C20: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00254C24: bne         $s0, $zero, L_00254C00
    if (ctx->r16 != 0) {
        // 0x00254C28: nop
    
            goto L_00254C00;
    }
    // 0x00254C28: nop

L_00254C2C:
    // 0x00254C2C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00254C30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00254C34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00254C38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00254C3C: jr          $ra
    // 0x00254C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00254C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044D938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00414AF8:
    // 0x0044D938: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
L_00414CA8:
    // 0x0044D93C: sw          $s5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r21;
    // 0x0044D940: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0044D944: sw          $fp, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r30;
    // 0x0044D948: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x0044D94C: sw          $s7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r23;
    // 0x0044D950: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x0044D954: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0044D958: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0044D95C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x0044D960: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x0044D964: sw          $s6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r22;
    // 0x0044D968: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x0044D96C: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x0044D970: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x0044D974: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x0044D978: jal         0x00266C5C
    // 0x0044D97C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0044D97C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    after_0:
    // 0x0044D980: lw          $v1, 0x20($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X20);
    // 0x0044D984: beq         $v1, $zero, L_0044DE78
    if (ctx->r3 == 0) {
        // 0x0044D988: addu        $s6, $v1, $zero
        ctx->r22 = ADD32(ctx->r3, 0);
            goto L_0044DE78;
    }
    // 0x0044D988: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x0044D98C: lw          $v0, 0x328($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X328);
    // 0x0044D990: lw          $s4, 0x14($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X14);
    // 0x0044D994: beq         $v0, $zero, L_0044DE78
    if (ctx->r2 == 0) {
        // 0x0044D998: addiu       $s1, $s6, 0xA0
        ctx->r17 = ADD32(ctx->r22, 0XA0);
            goto L_0044DE78;
    }
    // 0x0044D998: addiu       $s1, $s6, 0xA0
    ctx->r17 = ADD32(ctx->r22, 0XA0);
    // 0x0044D99C: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x0044D9A0: ori         $v0, $v0, 0x7
    ctx->r2 = ctx->r2 | 0X7;
    // 0x0044D9A4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0044D9A8: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x0044D9AC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x0044D9B0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0044D9B4: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0044D9B8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0044D9BC: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x0044D9C0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0044D9C4: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x0044D9C8: addiu       $v1, $v1, 0x368
    ctx->r3 = ADD32(ctx->r3, 0X368);
    // 0x0044D9CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D9D0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0044D9D4: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x0044D9D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D9DC: lwc1        $f2, 0x2030($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0044D9E0: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0044D9E4: lwc1        $f1, 0x288($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X288);
    // 0x0044D9E8: lwc1        $f0, 0x18($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X18);
    // 0x0044D9EC: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0044D9F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D9F4: lwc1        $f2, 0x28C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28C);
    // 0x0044D9F8: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x0044D9FC: lwc1        $f0, 0x20($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X20);
    // 0x0044DA00: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044DA04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DA08: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x0044DA0C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0044DA10: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x0044DA14: lwc1        $f0, 0x1C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x0044DA18: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0044DA1C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0044DA20: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x0044DA24: lwc1        $f0, 0x34($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X34);
    // 0x0044DA28: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0044DA2C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x0044DA30: swc1        $f0, 0x32C($s6)
    MEM_W(0X32C, ctx->r22) = ctx->f0.u32l;
    // 0x0044DA34: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x0044DA38: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0044DA3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044DA40: bne         $v0, $zero, L_0044DAF8
    if (ctx->r2 != 0) {
        // 0x0044DA44: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0044DAF8;
    }
    // 0x0044DA44: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0044DA48: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044DA4C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044DA50: lw          $s2, 0x4($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X4);
    // 0x0044DA54: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x0044DA58: lw          $s0, 0x20($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X20);
    // 0x0044DA5C: jal         0x00225EBC
    // 0x0044DA60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x0044DA60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0044DA64: bnel        $v0, $zero, L_0044DA74
    if (ctx->r2 != 0) {
        // 0x0044DA68: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_0044DA74;
    }
    goto skip_0;
    // 0x0044DA68: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x0044DA6C: j           L_00414AF8
    // 0x0044DA70: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    entry_00414AF8(rdram, ctx);
    return;
    // 0x0044DA70: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
L_0044DA74:
    // 0x0044DA74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0044DA78: addiu       $a1, $v1, 0x90
    ctx->r5 = ADD32(ctx->r3, 0X90);
    // 0x0044DA7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044DA80: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x0044DA84: sw          $v0, 0x328($s0)
    MEM_W(0X328, ctx->r16) = ctx->r2;
L_0044DA88:
    // 0x0044DA88: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x0044DA8C: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x0044DA90: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x0044DA94: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x0044DA98: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x0044DA9C: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x0044DAA0: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x0044DAA4: sw          $t4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r12;
    // 0x0044DAA8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044DAAC: bne         $v1, $a1, L_0044DA88
    if (ctx->r3 != ctx->r5) {
        // 0x0044DAB0: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0044DA88;
    }
    // 0x0044DAB0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0044DAB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DAB8: lwc1        $f0, 0xBEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBEC);
    // 0x0044DABC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x0044DAC0: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x0044DAC4: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x0044DAC8: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x0044DACC: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x0044DAD0: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x0044DAD4: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0044DAD8: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
    // 0x0044DADC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0044DAE0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0044DAE4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0044DAE8: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0044DAEC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x0044DAF0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x0044DAF4: swc1        $f1, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0044DAF8:
    // 0x0044DAF8: lw          $t1, 0xC($s4)
    ctx->r9 = MEM_W(ctx->r20, 0XC);
    // 0x0044DAFC: lw          $t2, 0x10($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X10);
    // 0x0044DB00: lw          $t3, 0x14($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X14);
    // 0x0044DB04: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x0044DB08: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x0044DB0C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x0044DB10: lwc1        $f1, 0x32C($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X32C);
    // 0x0044DB14: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x0044DB18: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044DB1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DB20: lwc1        $f0, 0xBF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBF0);
    // 0x0044DB24: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044DB28: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0044DB2C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044DB30: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0044DB34: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0044DB38: lw          $a0, 0x40($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X40);
    // 0x0044DB3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x0044DB40: jal         0x0020F85C
    // 0x0044DB44: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0044DB44: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    after_2:
    // 0x0044DB48: beq         $s3, $zero, L_0044DC00
    if (ctx->r19 == 0) {
        // 0x0044DB4C: lui         $s0, 0x200
        ctx->r16 = S32(0X200 << 16);
            goto L_0044DC00;
    }
    // 0x0044DB4C: lui         $s0, 0x200
    ctx->r16 = S32(0X200 << 16);
    // 0x0044DB50: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x0044DB54: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0044DB58: bne         $v0, $zero, L_0044DC00
    if (ctx->r2 != 0) {
        // 0x0044DB5C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0044DC00;
    }
    // 0x0044DB5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044DB60: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0044DB64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0044DB68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0044DB6C: lw          $v0, 0x40($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X40);
    // 0x0044DB70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DB74: lwc1        $f0, 0xBF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBF4);
    // 0x0044DB78: lwc1        $f1, 0x28($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X28);
    // 0x0044DB7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0044DB80: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0044DB84: lw          $a3, 0x6D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D00);
    // 0x0044DB88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044DB8C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0044DB90: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DB94: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DB98: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DB9C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0044DBA0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x0044DBA4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x0044DBA8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x0044DBAC: lw          $t1, 0x18($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X18);
    // 0x0044DBB0: lw          $t2, 0x1C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X1C);
    // 0x0044DBB4: lw          $t3, 0x20($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X20);
    // 0x0044DBB8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x0044DBBC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x0044DBC0: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x0044DBC4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x0044DBC8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x0044DBCC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x0044DBD0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x0044DBD4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x0044DBD8: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x0044DBDC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x0044DBE0: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x0044DBE4: jal         0x00219BC0
    // 0x0044DBE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00219BC0(rdram, ctx);
        goto after_3;
    // 0x0044DBE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
    // 0x0044DBEC: jal         0x0021E5D4
    // 0x0044DBF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021E5D4(rdram, ctx);
        goto after_4;
    // 0x0044DBF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0044DBF4: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x0044DBF8: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x0044DBFC: sw          $v0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r2;
L_0044DC00:
    // 0x0044DC00: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0044DC04: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0044DC08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044DC0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044DC10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0044DC14: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0044DC18: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x0044DC1C: bgez        $v0, L_0044DC30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0044DC20: nop
    
            goto L_0044DC30;
    }
    // 0x0044DC20: nop

    // 0x0044DC24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DC28: ldc1        $f0, 0xBF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XBF8);
    // 0x0044DC2C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_0044DC30:
    // 0x0044DC30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DC34: lwc1        $f0, 0xC00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC00);
    // 0x0044DC38: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x0044DC3C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0044DC40: jal         0x002982F0
    // 0x0044DC44: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0044DC44: nop

    after_5:
    // 0x0044DC48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DC4C: lwc1        $f1, 0xC04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC04);
    // 0x0044DC50: lwc1        $f2, 0x30($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X30);
    // 0x0044DC54: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044DC58: lwc1        $f1, 0x34($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X34);
    // 0x0044DC5C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0044DC60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DC64: lwc1        $f3, 0xC08($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XC08);
    // 0x0044DC68: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0044DC6C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0044DC70: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0044DC74: lh          $v1, 0x0($s7)
    ctx->r3 = MEM_H(ctx->r23, 0X0);
    // 0x0044DC78: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x0044DC7C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x0044DC80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0044DC84: swc1        $f4, 0x8E0($at)
    MEM_W(0X8E0, ctx->r1) = ctx->f4.u32l;
    // 0x0044DC88: bne         $v1, $v0, L_0044DCA0
    if (ctx->r3 != ctx->r2) {
        // 0x0044DC8C: nop
    
            goto L_0044DCA0;
    }
    // 0x0044DC8C: nop

    // 0x0044DC90: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0044DC94: addiu       $v0, $v0, 0x71F4
    ctx->r2 = ADD32(ctx->r2, 0X71F4);
    // 0x0044DC98: j           L_00414CA8
    // 0x0044DC9C: nop

    entry_00414CA8(rdram, ctx);
    return;
    // 0x0044DC9C: nop

L_0044DCA0:
    // 0x0044DCA0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0044DCA4: addiu       $v0, $v0, 0x71D0
    ctx->r2 = ADD32(ctx->r2, 0X71D0);
    // 0x0044DCA8: jal         0x00206078
    // 0x0044DCAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    func_00206078(rdram, ctx);
        goto after_6;
    // 0x0044DCAC: sw          $v0, 0x234($s1)
    MEM_W(0X234, ctx->r17) = ctx->r2;
    after_6:
    // 0x0044DCB0: bne         $v0, $zero, L_0044DCC0
    if (ctx->r2 != 0) {
        // 0x0044DCB4: nop
    
            goto L_0044DCC0;
    }
    // 0x0044DCB4: nop

    // 0x0044DCB8: jal         0x00206068
    // 0x0044DCBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00206068(rdram, ctx);
        goto after_7;
    // 0x0044DCBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
L_0044DCC0:
    // 0x0044DCC0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x0044DCC4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0044DCC8: bne         $v1, $v0, L_0044DCF8
    if (ctx->r3 != ctx->r2) {
        // 0x0044DCCC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0044DCF8;
    }
    // 0x0044DCCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044DCD0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0044DCD4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044DCD8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044DCDC: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x0044DCE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044DCE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044DCE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0044DCEC: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
    // 0x0044DCF0: jal         0x002241D8
    // 0x0044DCF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002241D8(rdram, ctx);
        goto after_8;
    // 0x0044DCF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_0044DCF8:
    // 0x0044DCF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044DCFC: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0044DD00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x0044DD04: beq         $v0, $a0, L_0044DD88
    if (ctx->r2 == ctx->r4) {
        // 0x0044DD08: lui         $a2, 0xE300
        ctx->r6 = S32(0XE300 << 16);
            goto L_0044DD88;
    }
    // 0x0044DD08: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0044DD0C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0044DD10: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x0044DD14: ori         $a3, $a3, 0xC00
    ctx->r7 = ctx->r7 | 0XC00;
    // 0x0044DD18: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x0044DD1C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0044DD20: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0044DD24: ori         $t0, $t0, 0x1201
    ctx->r8 = ctx->r8 | 0X1201;
    // 0x0044DD28: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0044DD2C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0044DD30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044DD34: sw          $a0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r4;
    // 0x0044DD38: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0044DD3C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0044DD40: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0044DD44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0044DD48: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0044DD4C: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x0044DD50: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0044DD54: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0044DD58: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0044DD5C: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x0044DD60: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0044DD64: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0044DD68: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0044DD6C: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x0044DD70: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0044DD74: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0044DD78: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0044DD7C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0044DD80: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x0044DD84: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0044DD88:
    // 0x0044DD88: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x0044DD8C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x0044DD90: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x0044DD94: sw          $t1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r9;
    // 0x0044DD98: sw          $t2, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r10;
    // 0x0044DD9C: sw          $t3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r11;
    // 0x0044DDA0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DDA4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DDA8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DDAC: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0044DDB0: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0044DDB4: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x0044DDB8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DDBC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DDC0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DDC4: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x0044DDC8: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x0044DDCC: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x0044DDD0: jal         0x0021EBC0
    // 0x0044DDD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021EBC0(rdram, ctx);
        goto after_9;
    // 0x0044DDD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0044DDD8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DDDC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DDE0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DDE4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0044DDE8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0044DDEC: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x0044DDF0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DDF4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DDF8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DDFC: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x0044DE00: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x0044DE04: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x0044DE08: jal         0x0021A344
    // 0x0044DE0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021A344(rdram, ctx);
        goto after_10;
    // 0x0044DE0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0044DE10: lwc1        $f1, 0x2C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X2C);
    // 0x0044DE14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0044DE18: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0044DE1C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044DE20: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0044DE24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044DE28: swc1        $f0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f0.u32l;
    // 0x0044DE2C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DE30: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DE34: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DE38: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x0044DE3C: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x0044DE40: sw          $t3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r11;
    // 0x0044DE44: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x0044DE48: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x0044DE4C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0044DE50: sw          $t1, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->r9;
    // 0x0044DE54: sw          $t2, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r10;
    // 0x0044DE58: sw          $t3, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->r11;
    // 0x0044DE5C: jal         0x0020B5D4
    // 0x0044DE60: nop

    func_0020B5D4(rdram, ctx);
        goto after_11;
    // 0x0044DE60: nop

    after_11:
    // 0x0044DE64: lw          $a1, 0x40($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X40);
    // 0x0044DE68: jal         0x0021D39C
    // 0x0044DE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021D39C(rdram, ctx);
        goto after_12;
    // 0x0044DE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0044DE70: jal         0x0020B624
    // 0x0044DE74: nop

    func_0020B624(rdram, ctx);
        goto after_13;
    // 0x0044DE74: nop

    after_13:
L_0044DE78:
    // 0x0044DE78: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x0044DE7C: lw          $fp, 0xB0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB0);
    // 0x0044DE80: lw          $s7, 0xAC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XAC);
    // 0x0044DE84: lw          $s6, 0xA8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA8);
    // 0x0044DE88: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x0044DE8C: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x0044DE90: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x0044DE94: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x0044DE98: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x0044DE9C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x0044DEA0: jr          $ra
    // 0x0044DEA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x0044DEA4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00289CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289CE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289CEC: lw          $v0, 0x6D70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D70);
    // 0x00289CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289CF4: beq         $v0, $zero, L_00289D10
    if (ctx->r2 == 0) {
        // 0x00289CF8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00289D10;
    }
    // 0x00289CF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00289D00: jal         0x00288E58
    // 0x00289D04: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x00289D04: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00289D08: j           L_00289D54
    // 0x00289D0C: nop

        goto L_00289D54;
    // 0x00289D0C: nop

L_00289D10:
    // 0x00289D10: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00289D14: lw          $v0, 0x5D2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D2C);
    // 0x00289D18: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00289D1C: beq         $v0, $zero, L_00289D54
    if (ctx->r2 == 0) {
        // 0x00289D20: nop
    
            goto L_00289D54;
    }
    // 0x00289D20: nop

    // 0x00289D24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00289D28: lw          $v0, -0x5300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5300);
    // 0x00289D2C: bne         $v0, $zero, L_00289D54
    if (ctx->r2 != 0) {
        // 0x00289D30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00289D54;
    }
    // 0x00289D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289D34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289D38: lwc1        $f0, -0x61E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61E0);
    // 0x00289D3C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289D40: sw          $v0, -0x5300($at)
    MEM_W(-0X5300, ctx->r1) = ctx->r2;
    // 0x00289D44: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00289D48: sw          $zero, 0x5D2C($at)
    MEM_W(0X5D2C, ctx->r1) = 0;
    // 0x00289D4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289D50: swc1        $f0, -0x4EE4($at)
    MEM_W(-0X4EE4, ctx->r1) = ctx->f0.u32l;
L_00289D54:
    // 0x00289D54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289D58: jr          $ra
    // 0x00289D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002842F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002842F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002842FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00284300: jal         0x00284188
    // 0x00284304: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00284304: nop

    after_0:
    // 0x00284308: beql        $v0, $zero, L_00284324
    if (ctx->r2 == 0) {
        // 0x0028430C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00284324;
    }
    goto skip_0;
    // 0x0028430C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00284310: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284314: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284318: lw          $v0, 0x74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X74);
    // 0x0028431C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00284320: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00284324:
    // 0x00284324: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00284328: jr          $ra
    // 0x0028432C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028432C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00412548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412548: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041254C: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x00412550: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00412554: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00412558: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0041255C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00412560: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00412564: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00412568: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0041256C: beq         $v0, $zero, L_0041264C
    if (ctx->r2 == 0) {
        // 0x00412570: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_0041264C;
    }
    // 0x00412570: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00412574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412578: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041257C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x00412580: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00412584: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x00412588: jal         0x0020185C
    // 0x0041258C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0041258C: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00412590: bne         $v0, $zero, L_004125C8
    if (ctx->r2 != 0) {
        // 0x00412594: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004125C8;
    }
    // 0x00412594: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412598: j           L_004125F8
    // 0x0041259C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
        goto L_004125F8;
    // 0x0041259C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_004125A0:
    // 0x004125A0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004125A4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x004125A8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x004125AC: sw          $v0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r2;
    // 0x004125B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x004125B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004125B8: sw          $s1, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r17;
    // 0x004125BC: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x004125C0: j           L_00412640
    // 0x004125C4: sw          $a0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r4;
        goto L_00412640;
    // 0x004125C4: sw          $a0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r4;
L_004125C8:
    // 0x004125C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004125CC: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x004125D0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x004125D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004125D8: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x004125DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004125E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004125E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004125E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004125EC: jal         0x0020367C
    // 0x004125F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x004125F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x004125F4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_004125F8:
    // 0x004125F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004125FC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00412600: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x00412604: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x00412608: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041260C: addiu       $s2, $v0, -0x1
    ctx->r18 = ADD32(ctx->r2, -0X1);
    // 0x00412610: blez        $s2, L_00412640
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00412614: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_00412640;
    }
    // 0x00412614: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00412618: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_0041261C:
    // 0x0041261C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00412620: jal         0x00288780
    // 0x00412624: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_00288780(rdram, ctx);
        goto after_2;
    // 0x00412624: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_2:
    // 0x00412628: beq         $v0, $zero, L_004125A0
    if (ctx->r2 == 0) {
        // 0x0041262C: nop
    
            goto L_004125A0;
    }
    // 0x0041262C: nop

    // 0x00412630: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00412634: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00412638: bne         $v0, $zero, L_0041261C
    if (ctx->r2 != 0) {
        // 0x0041263C: addiu       $s0, $s0, 0x4C
        ctx->r16 = ADD32(ctx->r16, 0X4C);
            goto L_0041261C;
    }
    // 0x0041263C: addiu       $s0, $s0, 0x4C
    ctx->r16 = ADD32(ctx->r16, 0X4C);
L_00412640:
    // 0x00412640: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412644: jal         0x002051F4
    // 0x00412648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002051F4(rdram, ctx);
        goto after_3;
    // 0x00412648: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
L_0041264C:
    // 0x0041264C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00412650: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00412654: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00412658: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041265C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00412660: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412664: jr          $ra
    // 0x00412668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00412668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00446CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446CA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446CA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446CAC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446CB0: beq         $v0, $zero, L_00446CC0
    if (ctx->r2 == 0) {
        // 0x00446CB4: nop
    
            goto L_00446CC0;
    }
    // 0x00446CB4: nop

    // 0x00446CB8: jal         0x00243414
    // 0x00446CBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446CBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00446CC0:
    // 0x00446CC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446CC4: jr          $ra
    // 0x00446CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040ECDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040ECDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040ECE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040ECE4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040ECE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040ECEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040ECF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040ECF4: lw          $v0, 0x4FC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4FC);
    // 0x0040ECF8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0040ECFC: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040ED00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040ED04: lw          $v0, 0x2410($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2410);
    // 0x0040ED08: beq         $v0, $zero, L_0040ED18
    if (ctx->r2 == 0) {
        // 0x0040ED0C: nop
    
            goto L_0040ED18;
    }
    // 0x0040ED0C: nop

    // 0x0040ED10: jalr        $v0
    // 0x0040ED14: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040ED14: nop

    after_0:
L_0040ED18:
    // 0x0040ED18: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040ED1C: blez        $v0, L_0040ED44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040ED20: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040ED44;
    }
    // 0x0040ED20: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040ED24: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_0040ED28:
    // 0x0040ED28: jal         0x00235510
    // 0x0040ED2C: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    func_00235510(rdram, ctx);
        goto after_1;
    // 0x0040ED2C: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    after_1:
    // 0x0040ED30: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040ED34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040ED38: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040ED3C: bne         $v0, $zero, L_0040ED28
    if (ctx->r2 != 0) {
        // 0x0040ED40: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_0040ED28;
    }
    // 0x0040ED40: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
L_0040ED44:
    // 0x0040ED44: jal         0x0040C850
    // 0x0040ED48: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    func_0040C850(rdram, ctx);
        goto after_2;
    // 0x0040ED48: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    after_2:
    // 0x0040ED4C: jal         0x0040C850
    // 0x0040ED50: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    func_0040C850(rdram, ctx);
        goto after_3;
    // 0x0040ED50: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    after_3:
    // 0x0040ED54: jal         0x0040C850
    // 0x0040ED58: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    func_0040C850(rdram, ctx);
        goto after_4;
    // 0x0040ED58: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    after_4:
    // 0x0040ED5C: jal         0x0040CB28
    // 0x0040ED60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0040CB28(rdram, ctx);
        goto after_5;
    // 0x0040ED60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0040ED64: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040ED68: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0040ED6C: jal         0x0027AD88
    // 0x0040ED70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0027AD88(rdram, ctx);
        goto after_6;
    // 0x0040ED70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_6:
    // 0x0040ED74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040ED78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040ED7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040ED80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040ED84: jr          $ra
    // 0x0040ED88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040ED88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026AFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026AFC0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0026AFC4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0026AFC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026AFCC: beq         $s0, $zero, L_0026B11C
    if (ctx->r16 == 0) {
        // 0x0026AFD0: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_0026B11C;
    }
    // 0x0026AFD0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0026AFD4: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0026AFD8: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x0026AFDC: beq         $v0, $zero, L_0026B120
    if (ctx->r2 == 0) {
        // 0x0026AFE0: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_0026B120;
    }
    // 0x0026AFE0: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x0026AFE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AFE8: lwc1        $f0, 0x7FD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FD4);
    // 0x0026AFEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026AFF0: lw          $v0, 0x260C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X260C);
    // 0x0026AFF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0026AFF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0026AFFC: beq         $s0, $v0, L_0026B0B0
    if (ctx->r16 == ctx->r2) {
        // 0x0026B000: swc1        $f0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
            goto L_0026B0B0;
    }
    // 0x0026B000: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0026B004: bne         $s0, $zero, L_0026B02C
    if (ctx->r16 != 0) {
        // 0x0026B008: nop
    
            goto L_0026B02C;
    }
    // 0x0026B008: nop

    // 0x0026B00C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026B010: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0026B014: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026B018: swc1        $f0, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->f0.u32l;
    // 0x0026B01C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026B020: sw          $zero, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = 0;
    // 0x0026B024: j           L_0026B070
    // 0x0026B028: nop

        goto L_0026B070;
    // 0x0026B028: nop

L_0026B02C:
    // 0x0026B02C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026B030: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026B034: beq         $s0, $v0, L_0026B070
    if (ctx->r16 == ctx->r2) {
        // 0x0026B038: nop
    
            goto L_0026B070;
    }
    // 0x0026B038: nop

    // 0x0026B03C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0026B040: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x0026B044: jal         0x0020EF2C
    // 0x0026B048: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026B048: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x0026B04C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0026B050: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0026B054: jal         0x0020EF2C
    // 0x0026B058: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026B058: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x0026B05C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026B060: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026B064: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0026B068: jal         0x0020EFDC
    // 0x0026B06C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026B06C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
L_0026B070:
    // 0x0026B070: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026B074: addiu       $a0, $a0, 0x2030
    ctx->r4 = ADD32(ctx->r4, 0X2030);
    // 0x0026B078: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026B07C: sw          $s0, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r16;
    // 0x0026B080: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0026B084: addiu       $t2, $t2, 0x2020
    ctx->r10 = ADD32(ctx->r10, 0X2020);
    // 0x0026B088: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026B08C: addiu       $t1, $t1, 0x2030
    ctx->r9 = ADD32(ctx->r9, 0X2030);
    // 0x0026B090: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x0026B094: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0026B098: sw          $a3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r7;
    // 0x0026B09C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x0026B0A0: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x0026B0A4: sw          $a3, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r7;
    // 0x0026B0A8: jal         0x0020F040
    // 0x0026B0AC: nop

    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x0026B0AC: nop

    after_3:
L_0026B0B0:
    // 0x0026B0B0: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0026B0B4: addiu       $t2, $t2, 0x2030
    ctx->r10 = ADD32(ctx->r10, 0X2030);
    // 0x0026B0B8: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x0026B0BC: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0026B0C0: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x0026B0C4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x0026B0C8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0026B0CC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0026B0D0: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0026B0D4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026B0D8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026B0DC: lwc1        $f3, 0x24($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026B0E0: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026B0E4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026B0E8: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026B0EC: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026B0F0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026B0F4: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0026B0F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026B0FC: lwc1        $f0, 0x7FD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FD8);
    // 0x0026B100: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026B104: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026B108: sw          $s0, 0x260C($at)
    MEM_W(0X260C, ctx->r1) = ctx->r16;
    // 0x0026B10C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B110: nop

    // 0x0026B114: bc1t        L_0026B120
    if (c1cs) {
        // 0x0026B118: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026B120;
    }
    // 0x0026B118: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0026B11C:
    // 0x0026B11C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026B120:
    // 0x0026B120: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0026B124: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0026B128: jr          $ra
    // 0x0026B12C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0026B12C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00416AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416AA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00416AA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00416AAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00416AB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00416AB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00416AB8: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x00416ABC: beq         $s0, $zero, L_00416AE4
    if (ctx->r16 == 0) {
        // 0x00416AC0: nop
    
            goto L_00416AE4;
    }
    // 0x00416AC0: nop

L_00416AC4:
    // 0x00416AC4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00416AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416ACC: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x00416AD0: jalr        $v0
    // 0x00416AD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00416AD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00416AD8: lw          $s0, 0x1D0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1D0);
    // 0x00416ADC: bne         $s0, $zero, L_00416AC4
    if (ctx->r16 != 0) {
        // 0x00416AE0: nop
    
            goto L_00416AC4;
    }
    // 0x00416AE0: nop

L_00416AE4:
    // 0x00416AE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00416AE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00416AEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416AF0: jr          $ra
    // 0x00416AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00416AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040BE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BE50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040BE54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040BE58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040BE5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040BE60: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040BE64: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x0040BE68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0040BE6C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0040BE70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0040BE74: jal         0x002535E4
    // 0x0040BE78: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x0040BE78: nop

    after_0:
    // 0x0040BE7C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040BE80: blez        $v0, L_0040BE94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040BE84: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BE94;
    }
    // 0x0040BE84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BE88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040BE8C: jal         0x00243414
    // 0x0040BE90: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040BE90: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    after_1:
L_0040BE94:
    // 0x0040BE94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0040BE98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040BE9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040BEA0: jr          $ra
    // 0x0040BEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040BEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00291140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00291144: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00291148: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0029114C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00291150: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00291154: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00291158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029115C: jal         0x0029E230
    // 0x00291160: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x00291160: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00291164: lw          $s1, 0x8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X8);
    // 0x00291168: beq         $s1, $zero, L_00291194
    if (ctx->r17 == 0) {
        // 0x0029116C: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00291194;
    }
    // 0x0029116C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_00291170:
    // 0x00291170: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00291174: jal         0x002933B0
    // 0x00291178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x00291178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0029117C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291180: jal         0x002933E0
    // 0x00291184: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x00291184: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00291188: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0029118C: bne         $s1, $zero, L_00291170
    if (ctx->r17 != 0) {
        // 0x00291190: nop
    
            goto L_00291170;
    }
    // 0x00291190: nop

L_00291194:
    // 0x00291194: jal         0x0029E230
    // 0x00291198: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0029E230(rdram, ctx);
        goto after_3;
    // 0x00291198: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0029119C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002911A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002911A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002911A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002911AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002911B0: jr          $ra
    // 0x002911B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002911B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002573F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002573F0: sw          $v0, 0x12A4($a0)
    MEM_W(0X12A4, ctx->r4) = ctx->r2;
    // 0x002573F4: jr          $ra
    // 0x002573F8: nop

    return;
    // 0x002573F8: nop

;}
RECOMP_FUNC void func_0020F9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F9D4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0020F9D8: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F9DC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F9E0: lwc1        $f3, 0x10($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0020F9E4: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020F9E8: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020F9EC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F9F0: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x0020F9F4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020F9F8: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020F9FC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FA00: lwc1        $f1, 0x30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0020FA04: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FA08: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x0020FA0C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0020FA10: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FA14: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FA18: lwc1        $f3, 0x14($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0020FA1C: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FA20: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FA24: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FA28: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020FA2C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FA30: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FA34: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FA38: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x0020FA3C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FA40: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0020FA44: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020FA48: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FA4C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FA50: lwc1        $f3, 0x18($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x0020FA54: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FA58: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FA5C: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FA60: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020FA64: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FA68: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FA6C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FA70: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x0020FA74: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FA78: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x0020FA7C: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0020FA80: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FA84: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FA88: lwc1        $f3, 0x1C($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x0020FA8C: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FA90: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FA94: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FA98: lwc1        $f1, 0x2C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X2C);
    // 0x0020FA9C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FAA0: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FAA4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FAA8: lwc1        $f1, 0x3C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X3C);
    // 0x0020FAAC: add.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FAB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0020FAB4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x0020FAB8: nop

    // 0x0020FABC: bc1t        L_0020FAF4
    if (c1cs) {
        // 0x0020FAC0: nop
    
            goto L_0020FAF4;
    }
    // 0x0020FAC0: nop

    // 0x0020FAC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020FAC8: lwc1        $f1, 0x55F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55F0);
    // 0x0020FACC: lwc1        $f3, 0x0($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020FAD0: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FAD4: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FAD8: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020FADC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FAE0: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020FAE4: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020FAE8: swc1        $f3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020FAEC: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x0020FAF0: swc1        $f2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f2.u32l;
L_0020FAF4:
    // 0x0020FAF4: jr          $ra
    // 0x0020FAF8: nop

    return;
    // 0x0020FAF8: nop

;}
RECOMP_FUNC void func_0025A684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A688: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A68C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A690: lhu         $a3, 0x80($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X80);
    // 0x0025A694: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A698: addiu       $a2, $a2, -0xE8
    ctx->r6 = ADD32(ctx->r6, -0XE8);
    // 0x0025A69C: jal         0x00245A98
    // 0x0025A6A0: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A6A0: nop

    after_0:
    // 0x0025A6A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A6A8: jr          $ra
    // 0x0025A6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00456CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DDB0:
    // 0x00456CB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_0041DE50:
    // 0x00456CB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00456CB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00456CBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00456CC0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00456CC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00456CC8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00456CCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00456CD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00456CD4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00456CD8: jal         0x004263A0
    // 0x00456CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x00456CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x00456CE0: jal         0x0042647C
    // 0x00456CE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_0042647C(rdram, ctx);
        goto after_1;
    // 0x00456CE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00456CE8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00456CEC: jal         0x0041DB7C
    // 0x00456CF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_0041DB7C(rdram, ctx);
        goto after_2;
    // 0x00456CF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00456CF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00456CF8: beq         $s0, $zero, L_00456E50
    if (ctx->r16 == 0) {
        // 0x00456CFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00456E50;
    }
    // 0x00456CFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00456D00: jal         0x002858CC
    // 0x00456D04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002858CC(rdram, ctx);
        goto after_3;
    // 0x00456D04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00456D08: beq         $s3, $zero, L_00456D18
    if (ctx->r19 == 0) {
        // 0x00456D0C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00456D18;
    }
    // 0x00456D0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00456D10: beq         $v1, $zero, L_00456D58
    if (ctx->r3 == 0) {
        // 0x00456D14: nop
    
            goto L_00456D58;
    }
    // 0x00456D14: nop

L_00456D18:
    // 0x00456D18: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00456D1C: beq         $s3, $v0, L_00456D58
    if (ctx->r19 == ctx->r2) {
        // 0x00456D20: nop
    
            goto L_00456D58;
    }
    // 0x00456D20: nop

    // 0x00456D24: beq         $v1, $zero, L_00456E50
    if (ctx->r3 == 0) {
        // 0x00456D28: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_00456E50;
    }
    // 0x00456D28: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00456D2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00456D30: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00456D34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00456D38: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00456D3C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00456D40: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456D44: addiu       $a1, $a1, -0x4408
    ctx->r5 = ADD32(ctx->r5, -0X4408);
    // 0x00456D48: jal         0x00416644
    // 0x00456D4C: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x00456D4C: nop

    after_4:
    // 0x00456D50: j           L_0041DE50
    // 0x00456D54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    entry_0041DE50(rdram, ctx);
    return;
    // 0x00456D54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00456D58:
    // 0x00456D58: jal         0x004264B4
    // 0x00456D5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_004264B4(rdram, ctx);
        goto after_5;
    // 0x00456D5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00456D60: beq         $v0, $zero, L_00456DD0
    if (ctx->r2 == 0) {
        // 0x00456D64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00456DD0;
    }
    // 0x00456D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00456D68: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00456D6C: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x00456D70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456D74: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00456D78: beq         $v1, $zero, L_00456D90
    if (ctx->r3 == 0) {
        // 0x00456D7C: nop
    
            goto L_00456D90;
    }
    // 0x00456D7C: nop

    // 0x00456D80: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456D84: addiu       $a1, $a1, -0x44BC
    ctx->r5 = ADD32(ctx->r5, -0X44BC);
    // 0x00456D88: j           L_0041DDB0
    // 0x00456D8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    entry_0041DDB0(rdram, ctx);
    return;
    // 0x00456D8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00456D90:
    // 0x00456D90: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456D94: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00456D98: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456D9C: addiu       $a1, $a1, -0x4474
    ctx->r5 = ADD32(ctx->r5, -0X4474);
    // 0x00456DA0: beq         $v0, $zero, L_00456DB0
    if (ctx->r2 == 0) {
        // 0x00456DA4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00456DB0;
    }
    // 0x00456DA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00456DA8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456DAC: addiu       $a1, $a1, -0x4498
    ctx->r5 = ADD32(ctx->r5, -0X4498);
L_00456DB0:
    // 0x00456DB0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00456DB4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00456DB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00456DBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00456DC0: jal         0x00416644
    // 0x00456DC4: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x00456DC4: nop

    after_6:
    // 0x00456DC8: j           L_0041DE50
    // 0x00456DCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    entry_0041DE50(rdram, ctx);
    return;
    // 0x00456DCC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00456DD0:
    // 0x00456DD0: bne         $s4, $zero, L_00456E44
    if (ctx->r20 != 0) {
        // 0x00456DD4: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00456E44;
    }
    // 0x00456DD4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00456DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00456DDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00456DE0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00456DE4: jal         0x00426AF8
    // 0x00456DE8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426AF8(rdram, ctx);
        goto after_7;
    // 0x00456DE8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00456DEC: beq         $v0, $zero, L_00456E1C
    if (ctx->r2 == 0) {
        // 0x00456DF0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00456E1C;
    }
    // 0x00456DF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00456DF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00456DF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00456DFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00456E00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00456E04: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456E08: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x00456E0C: jal         0x00416644
    // 0x00456E10: nop

    func_00416644(rdram, ctx);
        goto after_8;
    // 0x00456E10: nop

    after_8:
    // 0x00456E14: j           L_0041DE50
    // 0x00456E18: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    entry_0041DE50(rdram, ctx);
    return;
    // 0x00456E18: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00456E1C:
    // 0x00456E1C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00456E20: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00456E24: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00456E28: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00456E2C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00456E30: addiu       $a1, $a1, -0x44E0
    ctx->r5 = ADD32(ctx->r5, -0X44E0);
    // 0x00456E34: jal         0x00416644
    // 0x00456E38: nop

    func_00416644(rdram, ctx);
        goto after_9;
    // 0x00456E38: nop

    after_9:
    // 0x00456E3C: j           L_0041DE50
    // 0x00456E40: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    entry_0041DE50(rdram, ctx);
    return;
    // 0x00456E40: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00456E44:
    // 0x00456E44: bnel        $s3, $v0, L_00456E4C
    if (ctx->r19 != ctx->r2) {
        // 0x00456E48: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00456E4C;
    }
    goto skip_0;
    // 0x00456E48: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_0:
L_00456E4C:
    // 0x00456E4C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00456E50:
    // 0x00456E50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00456E54: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00456E58: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00456E5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00456E60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00456E64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00456E68: jr          $ra
    // 0x00456E6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00456E6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002A305C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A305C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x002A3060 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002A3060(rdram, ctx);
;}
RECOMP_FUNC void func_004216B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004216B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004216B4: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x004216B8: jr          $ra
    // 0x004216BC: nop

    return;
    // 0x004216BC: nop

;}
RECOMP_FUNC void func_00447A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447A4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447A50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00447A54: lw          $v0, 0x144($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X144);
    // 0x00447A58: bne         $v0, $zero, L_00447B24
    if (ctx->r2 != 0) {
        // 0x00447A5C: nop
    
            goto L_00447B24;
    }
    // 0x00447A5C: nop

    // 0x00447A60: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x00447A64: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x00447A68: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x00447A6C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x00447A70: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447A74: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447A78: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x00447A7C: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x00447A80: blez        $v0, L_00447AA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447A84: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_00447AA8;
    }
    // 0x00447A84: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x00447A88: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447A8C:
    // 0x00447A8C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00447A90: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447A94: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00447A98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447A9C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447AA0: bne         $v0, $zero, L_00447A8C
    if (ctx->r2 != 0) {
        // 0x00447AA4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447A8C;
    }
    // 0x00447AA4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447AA8:
    // 0x00447AA8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447AAC: blez        $v0, L_00447AD4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447AB0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447AD4;
    }
    // 0x00447AB0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447AB4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447AB8:
    // 0x00447AB8: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00447ABC: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447AC0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00447AC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447AC8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447ACC: bne         $v0, $zero, L_00447AB8
    if (ctx->r2 != 0) {
        // 0x00447AD0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447AB8;
    }
    // 0x00447AD0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447AD4:
    // 0x00447AD4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447AD8: blez        $v0, L_00447B00
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447ADC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447B00;
    }
    // 0x00447ADC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447AE0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00447AE4:
    // 0x00447AE4: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x00447AE8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447AEC: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x00447AF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00447AF4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447AF8: bne         $v0, $zero, L_00447AE4
    if (ctx->r2 != 0) {
        // 0x00447AFC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00447AE4;
    }
    // 0x00447AFC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00447B00:
    // 0x00447B00: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x00447B04: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x00447B08: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00447B0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00447B10: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00447B14: beq         $v0, $zero, L_00447B24
    if (ctx->r2 == 0) {
        // 0x00447B18: nop
    
            goto L_00447B24;
    }
    // 0x00447B18: nop

    // 0x00447B1C: jalr        $v0
    // 0x00447B20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00447B20: nop

    after_0:
L_00447B24:
    // 0x00447B24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447B28: jr          $ra
    // 0x00447B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020A33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020A33C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0020A340: lw          $v1, 0x7070($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7070);
    // 0x0020A344: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020A348: lw          $v0, -0x71DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71DC);
    // 0x0020A34C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0020A350: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020A354: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x0020A358: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020A35C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0020A360: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0020A364: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0020A368: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020A36C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0020A370: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020A374: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0020A378: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0020A37C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020A380: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020A384: lw          $v1, 0x114($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X114);
    // 0x0020A388: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x0020A38C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020A390: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0020A394: lw          $v1, 0x2214($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2214);
    // 0x0020A398: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x0020A39C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0020A3A0: sltiu       $v1, $v1, 0xBB8
    ctx->r3 = ctx->r3 < 0XBB8 ? 1 : 0;
    // 0x0020A3A4: bne         $v1, $zero, L_0020A53C
    if (ctx->r3 != 0) {
        // 0x0020A3A8: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_0020A53C;
    }
    // 0x0020A3A8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0020A3AC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0020A3B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020A3B4: jal         0x002017D4
    // 0x0020A3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020A3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0020A3BC: bltz        $s2, L_0020A53C
    if (SIGNED(ctx->r18) < 0) {
        // 0x0020A3C0: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_0020A53C;
    }
    // 0x0020A3C0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0020A3C4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0020A3C8: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0020A3CC: beq         $v0, $zero, L_0020A53C
    if (ctx->r2 == 0) {
        // 0x0020A3D0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020A53C;
    }
    // 0x0020A3D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020A3D4: jal         0x0020565C
    // 0x0020A3D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020565C(rdram, ctx);
        goto after_1;
    // 0x0020A3D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0020A3DC: beq         $s5, $zero, L_0020A3F8
    if (ctx->r21 == 0) {
        // 0x0020A3E0: lui         $a1, 0xDB06
        ctx->r5 = S32(0XDB06 << 16);
            goto L_0020A3F8;
    }
    // 0x0020A3E0: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x0020A3E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020A3E8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020A3EC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020A3F0: j           L_0020A40C
    // 0x0020A3F4: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
        goto L_0020A40C;
    // 0x0020A3F4: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
L_0020A3F8:
    // 0x0020A3F8: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x0020A3FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0020A400: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0020A404: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020A408: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
L_0020A40C:
    // 0x0020A40C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0020A410: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0020A414: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020A418: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0020A41C: sw          $s6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r22;
    // 0x0020A420: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x0020A424: bne         $a0, $zero, L_0020A440
    if (ctx->r4 != 0) {
        // 0x0020A428: lui         $v1, 0xDB06
        ctx->r3 = S32(0XDB06 << 16);
            goto L_0020A440;
    }
    // 0x0020A428: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x0020A42C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020A430: jal         0x002017D4
    // 0x0020A434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0020A434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0020A438: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020A43C: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
L_0020A440:
    // 0x0020A440: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020A444: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0020A448: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x0020A44C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x0020A450: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0020A454: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x0020A458: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x0020A45C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0020A460: beq         $s3, $zero, L_0020A4B4
    if (ctx->r19 == 0) {
        // 0x0020A464: sw          $a0, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r4;
            goto L_0020A4B4;
    }
    // 0x0020A464: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x0020A468: lui         $a1, 0xDC08
    ctx->r5 = S32(0XDC08 << 16);
    // 0x0020A46C: ori         $a1, $a1, 0x60A
    ctx->r5 = ctx->r5 | 0X60A;
    // 0x0020A470: lui         $a2, 0xDC08
    ctx->r6 = S32(0XDC08 << 16);
    // 0x0020A474: ori         $a2, $a2, 0x90A
    ctx->r6 = ctx->r6 | 0X90A;
    // 0x0020A478: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    // 0x0020A47C: lui         $v0, 0xDB02
    ctx->r2 = S32(0XDB02 << 16);
    // 0x0020A480: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0020A484: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0020A488: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x0020A48C: addiu       $v1, $a3, 0x10
    ctx->r3 = ADD32(ctx->r7, 0X10);
    // 0x0020A490: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x0020A494: addiu       $v0, $s3, 0x8
    ctx->r2 = ADD32(ctx->r19, 0X8);
    // 0x0020A498: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0020A49C: sw          $a1, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r5;
    // 0x0020A4A0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0020A4A4: addiu       $v0, $a3, 0x18
    ctx->r2 = ADD32(ctx->r7, 0X18);
    // 0x0020A4A8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0020A4AC: sw          $a2, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r6;
    // 0x0020A4B0: sw          $s3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r19;
L_0020A4B4:
    // 0x0020A4B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0020A4B8: jal         0x002017D4
    // 0x0020A4BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020A4BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0020A4C0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0020A4C4: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0020A4C8: blez        $s2, L_0020A53C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0020A4CC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0020A53C;
    }
    // 0x0020A4CC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0020A4D0: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x0020A4D4: lui         $s5, 0xDE00
    ctx->r21 = S32(0XDE00 << 16);
    // 0x0020A4D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0020A4DC:
    // 0x0020A4DC: jal         0x002017D4
    // 0x0020A4E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x0020A4E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0020A4E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020A4E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020A4EC: jal         0x002017D4
    // 0x0020A4F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0020A4F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0020A4F4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020A4F8: jal         0x00208810
    // 0x0020A4FC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_00208810(rdram, ctx);
        goto after_6;
    // 0x0020A4FC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_6:
    // 0x0020A500: beql        $v0, $zero, L_0020A530
    if (ctx->r2 == 0) {
        // 0x0020A504: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0020A530;
    }
    goto skip_0;
    // 0x0020A504: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0020A508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0020A50C: jal         0x002017D4
    // 0x0020A510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x0020A510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x0020A514: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x0020A518: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0020A51C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0020A520: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x0020A524: sw          $s5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r21;
    // 0x0020A528: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0020A52C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0020A530:
    // 0x0020A530: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0020A534: bne         $v0, $zero, L_0020A4DC
    if (ctx->r2 != 0) {
        // 0x0020A538: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0020A4DC;
    }
    // 0x0020A538: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0020A53C:
    // 0x0020A53C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0020A540: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0020A544: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0020A548: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020A54C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020A550: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020A554: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020A558: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020A55C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020A560: jr          $ra
    // 0x0020A564: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0020A564: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00447EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447EA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00447EA4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00447EA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00447EAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00447EB0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00447EB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00447EB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00447EBC: jal         0x0021D7BC
    // 0x00447EC0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_0021D7BC(rdram, ctx);
        goto after_0;
    // 0x00447EC0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00447EC4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00447EC8: beq         $v0, $zero, L_00447F44
    if (ctx->r2 == 0) {
        // 0x00447ECC: nop
    
            goto L_00447F44;
    }
    // 0x00447ECC: nop

    // 0x00447ED0: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00447ED4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x00447ED8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00447EDC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00447EE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00447EE4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00447EE8: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    // 0x00447EEC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00447EF0: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x00447EF4: jal         0x00236324
    // 0x00447EF8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00236324(rdram, ctx);
        goto after_1;
    // 0x00447EF8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00447EFC: jal         0x00235898
    // 0x00447F00: nop

    func_00235898(rdram, ctx);
        goto after_2;
    // 0x00447F00: nop

    after_2:
    // 0x00447F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00447F08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00447F0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00447F10: lb          $v0, 0x151($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X151);
    // 0x00447F14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00447F18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00447F1C: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00447F20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00447F24: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00447F28: lw          $a1, 0x98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X98);
    // 0x00447F2C: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00447F30: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00447F34: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00447F38: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00447F3C: jal         0x0020A33C
    // 0x00447F40: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_3;
    // 0x00447F40: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_3:
L_00447F44:
    // 0x00447F44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00447F48: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00447F4C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00447F50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00447F54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00447F58: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x00447F5C: jr          $ra
    // 0x00447F60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00447F60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045200C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045200C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452010: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00452014: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00452018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045201C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452020: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00452024: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00452028: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0045202C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00452030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452034: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00452038: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    // 0x0045203C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00452040: jal         0x0041648C
    // 0x00452044: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00452044: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00452048: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x0045204C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00452054: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452058: jr          $ra
    // 0x0045205C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045205C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002912F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002912F0: andi        $v1, $a1, 0xF
    ctx->r3 = ctx->r5 & 0XF;
    // 0x002912F4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x002912F8: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x002912FC: beq         $v1, $v0, L_0029130C
    if (ctx->r3 == ctx->r2) {
        // 0x00291300: addu        $v0, $a1, $v1
        ctx->r2 = ADD32(ctx->r5, ctx->r3);
            goto L_0029130C;
    }
    // 0x00291300: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    // 0x00291304: j           L_00291310
    // 0x00291308: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_00291310;
    // 0x00291308: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0029130C:
    // 0x0029130C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_00291310:
    // 0x00291310: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00291314: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x00291318: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x0029131C: jr          $ra
    // 0x00291320: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    return;
    // 0x00291320: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00276F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00276F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00276F98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00276F9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00276FA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00276FA4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00276FA8: sll         $s1, $a1, 1
    ctx->r17 = S32(ctx->r5 << 1);
    // 0x00276FAC: lw          $a0, 0x2B50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B50);
    // 0x00276FB0: jal         0x002017D4
    // 0x00276FB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00276FB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00276FB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00276FBC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00276FC0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00276FC4: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x00276FC8: bgez        $v0, L_00276FDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00276FCC: nop
    
            goto L_00276FDC;
    }
    // 0x00276FCC: nop

    // 0x00276FD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00276FD4: ldc1        $f0, -0x7DD8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X7DD8);
    // 0x00276FD8: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_00276FDC:
    // 0x00276FDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00276FE0: lwc1        $f1, -0x7DD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7DD0);
    // 0x00276FE4: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x00276FE8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00276FEC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x00276FF0: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x00276FF4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00276FF8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00276FFC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277000: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x00277004: lw          $a0, 0x2B50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2B50);
    // 0x00277008: jal         0x002017D4
    // 0x0027700C: ori         $a1, $s1, 0x1
    ctx->r5 = ctx->r17 | 0X1;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0027700C: ori         $a1, $s1, 0x1
    ctx->r5 = ctx->r17 | 0X1;
    after_1:
    // 0x00277010: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00277014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00277018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027701C: jr          $ra
    // 0x00277020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00277020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004227B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004227B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004227B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004227B8: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x004227BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004227C0: sw          $zero, 0x98C($at)
    MEM_W(0X98C, ctx->r1) = 0;
    // 0x004227C4: jr          $ra
    // 0x004227C8: nop

    return;
    // 0x004227C8: nop

;}
RECOMP_FUNC void func_0041B1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1A8: jr          $ra
    // 0x0041B1AC: addiu       $v0, $zero, 0x1D4D
    ctx->r2 = ADD32(0, 0X1D4D);
    return;
    // 0x0041B1AC: addiu       $v0, $zero, 0x1D4D
    ctx->r2 = ADD32(0, 0X1D4D);
;}
RECOMP_FUNC void func_0026426C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026426C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x00264270: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x00264274: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00264278: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x0026427C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00264280: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x00264284: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x00264288: sdc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC0, ctx->r29);
    // 0x0026428C: lw          $a1, 0x120($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X120);
    // 0x00264290: jal         0x00210630
    // 0x00264294: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210630(rdram, ctx);
        goto after_0;
    // 0x00264294: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00264298: lw          $a1, 0x11C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X11C);
    // 0x0026429C: jal         0x00210790
    // 0x002642A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210790(rdram, ctx);
        goto after_1;
    // 0x002642A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x002642A4: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x002642A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002642AC: lwc1        $f20, 0x7C30($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7C30);
    // 0x002642B0: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x002642B4: jal         0x002982F0
    // 0x002642B8: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x002642B8: nop

    after_2:
    // 0x002642BC: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x002642C0: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x002642C4: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x002642C8: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x002642CC: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x002642D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002642D4: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x002642D8: jal         0x002974C0
    // 0x002642DC: nop

    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x002642DC: nop

    after_3:
    // 0x002642E0: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x002642E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002642E8: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x002642EC: addiu       $a2, $s0, 0x40
    ctx->r6 = ADD32(ctx->r16, 0X40);
    // 0x002642F0: jal         0x00210F68
    // 0x002642F4: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_4;
    // 0x002642F4: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x002642F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002642FC: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x00264300: jal         0x00211114
    // 0x00264304: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00211114(rdram, ctx);
        goto after_5;
    // 0x00264304: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00264308: addiu       $s1, $s0, 0x58
    ctx->r17 = ADD32(ctx->r16, 0X58);
    // 0x0026430C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00264310: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00264314: jal         0x0020C618
    // 0x00264318: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020C618(rdram, ctx);
        goto after_6;
    // 0x00264318: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0026431C: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x00264320: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x00264324: lw          $a3, 0x3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X3C);
    // 0x00264328: jal         0x0021034C
    // 0x0026432C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021034C(rdram, ctx);
        goto after_7;
    // 0x0026432C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00264330: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x00264334: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x00264338: jal         0x0020F510
    // 0x0026433C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_0020F510(rdram, ctx);
        goto after_8;
    // 0x0026433C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_8:
    // 0x00264340: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00264344: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00264348: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0026434C: jal         0x00210318
    // 0x00264350: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_9;
    // 0x00264350: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00264354: jal         0x00210C3C
    // 0x00264358: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210C3C(rdram, ctx);
        goto after_10;
    // 0x00264358: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0026435C: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x00264360: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00264364: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00264368: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x0026436C: ldc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC0);
    // 0x00264370: jr          $ra
    // 0x00264374: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x00264374: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00289A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289A7C: jr          $ra
    // 0x00289A80: nop

    return;
    // 0x00289A80: nop

;}
RECOMP_FUNC void func_00455298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C2D8:
    // 0x00455298: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
L_0041C318:
    // 0x0045529C: addiu       $a1, $a1, -0x5378
    ctx->r5 = ADD32(ctx->r5, -0X5378);
L_0041C31C:
    // 0x004552A0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x004552A4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004552A8: bne         $v1, $v0, L_004552CC
    if (ctx->r3 != ctx->r2) {
        // 0x004552AC: nop
    
            goto L_004552CC;
    }
    // 0x004552AC: nop

    // 0x004552B0: lbu         $v0, -0x197($a1)
    ctx->r2 = MEM_BU(ctx->r5, -0X197);
    // 0x004552B4: bne         $v0, $zero, L_004552CC
    if (ctx->r2 != 0) {
        // 0x004552B8: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_004552CC;
    }
    // 0x004552B8: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004552BC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004552C0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004552C4: j           L_0041C2D8
    // 0x004552C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    entry_0041C2D8(rdram, ctx);
    return;
    // 0x004552C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_004552CC:
    // 0x004552CC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004552D0: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004552D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x004552D8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004552DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004552E0: lbu         $v1, -0x550D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550D);
    // 0x004552E4: beq         $v1, $zero, L_004552FC
    if (ctx->r3 == 0) {
        // 0x004552E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004552FC;
    }
    // 0x004552E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004552EC: beq         $v1, $v0, L_0045530C
    if (ctx->r3 == ctx->r2) {
        // 0x004552F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045530C;
    }
    // 0x004552F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004552F4: j           L_0041C31C
    // 0x004552F8: nop

    entry_0041C31C(rdram, ctx);
    return;
    // 0x004552F8: nop

L_004552FC:
    // 0x004552FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455300: addiu       $v0, $v0, 0x3FD8
    ctx->r2 = ADD32(ctx->r2, 0X3FD8);
    // 0x00455304: j           L_0041C318
    // 0x00455308: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041C318(rdram, ctx);
    return;
    // 0x00455308: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045530C:
    // 0x0045530C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00455310: addiu       $v0, $v0, 0x3FF0
    ctx->r2 = ADD32(ctx->r2, 0X3FF0);
    // 0x00455314: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00455318: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045531C: jr          $ra
    // 0x00455320: nop

    return;
    // 0x00455320: nop

;}
RECOMP_FUNC void func_002857C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002857C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002857CC: lbu         $v0, 0x6CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF0);
    // 0x002857D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002857D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002857D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002857DC: beq         $v0, $zero, L_00285818
    if (ctx->r2 == 0) {
        // 0x002857E0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00285818;
    }
    // 0x002857E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002857E4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002857E8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x002857EC: addiu       $s0, $s0, 0x5EC0
    ctx->r16 = ADD32(ctx->r16, 0X5EC0);
L_002857F0:
    // 0x002857F0: jal         0x0028582C
    // 0x002857F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0028582C(rdram, ctx);
        goto after_0;
    // 0x002857F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002857F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002857FC: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00285800: bne         $v0, $zero, L_002857F0
    if (ctx->r2 != 0) {
        // 0x00285804: addiu       $s0, $s0, 0x224
        ctx->r16 = ADD32(ctx->r16, 0X224);
            goto L_002857F0;
    }
    // 0x00285804: addiu       $s0, $s0, 0x224
    ctx->r16 = ADD32(ctx->r16, 0X224);
    // 0x00285808: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0028580C: addiu       $a0, $a0, 0x5C78
    ctx->r4 = ADD32(ctx->r4, 0X5C78);
    // 0x00285810: jal         0x0028582C
    // 0x00285814: nop

    func_0028582C(rdram, ctx);
        goto after_1;
    // 0x00285814: nop

    after_1:
L_00285818:
    // 0x00285818: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0028581C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00285820: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285824: jr          $ra
    // 0x00285828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00285828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00281B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281B78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281B7C: lwc1        $f0, -0x63D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63D8);
    // 0x00281B80: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00281B84: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00281B88: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00281B8C: jr          $ra
    // 0x00281B90: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00281B90: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
;}
