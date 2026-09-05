#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0027688C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027688C: lh          $v0, 0x10($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X10);
    // 0x00276890: jr          $ra
    // 0x00276894: nop

    return;
    // 0x00276894: nop

;}
RECOMP_FUNC void func_00224B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224B58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224B5C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00224B60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00224B64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224B68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224B6C: lbu         $s1, 0x13($a1)
    ctx->r17 = MEM_BU(ctx->r5, 0X13);
    // 0x00224B70: lw          $a0, 0x6C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X6C);
    // 0x00224B74: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00224B78: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00224B7C: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00224B80: jal         0x002017D4
    // 0x00224B84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224B84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00224B88: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224B8C: jal         0x002017D4
    // 0x00224B90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224B90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224B94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224B98: jal         0x002017D4
    // 0x00224B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x00224BA0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224BA8: jal         0x002017D4
    // 0x00224BAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224BAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224BB4: jal         0x00201818
    // 0x00224BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00224BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224BC0: jal         0x002017D4
    // 0x00224BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00224BC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224BCC: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00224BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00224BD4: bgez        $s1, L_00224BE0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00224BD8: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00224BE0;
    }
    // 0x00224BD8: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224BDC: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00224BE0:
    // 0x00224BE0: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00224BE4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00224BE8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00224BEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00224BF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224BF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224BF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00224BFC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00224C00: jr          $ra
    // 0x00224C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00247660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00247660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00247664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00247668: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024766C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00247670: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00247674: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00247678: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024767C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00247680: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00247684: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00247688: lh          $v0, 0x8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X8);
    // 0x0024768C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00247690: blez        $v0, L_002476A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00247694: addiu       $v1, $s0, 0xC10
        ctx->r3 = ADD32(ctx->r16, 0XC10);
            goto L_002476A4;
    }
    // 0x00247694: addiu       $v1, $s0, 0xC10
    ctx->r3 = ADD32(ctx->r16, 0XC10);
    // 0x00247698: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x0024769C: bne         $v0, $zero, L_002476C0
    if (ctx->r2 != 0) {
        // 0x002476A0: nop
    
            goto L_002476C0;
    }
    // 0x002476A0: nop

L_002476A4:
    // 0x002476A4: sw          $zero, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = 0;
    // 0x002476A8: lw          $v0, 0xB4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB4);
    // 0x002476AC: beq         $v0, $zero, L_002476C0
    if (ctx->r2 == 0) {
        // 0x002476B0: nop
    
            goto L_002476C0;
    }
    // 0x002476B0: nop

    // 0x002476B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x002476B8: bnel        $v0, $a0, L_002476C0
    if (ctx->r2 != ctx->r4) {
        // 0x002476BC: sw          $a0, 0xB4($v1)
        MEM_W(0XB4, ctx->r3) = ctx->r4;
            goto L_002476C0;
    }
    goto skip_0;
    // 0x002476BC: sw          $a0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r4;
    skip_0:
L_002476C0:
    // 0x002476C0: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x002476C4: beql        $v0, $zero, L_00247858
    if (ctx->r2 == 0) {
        // 0x002476C8: addiu       $a0, $s0, 0xC10
        ctx->r4 = ADD32(ctx->r16, 0XC10);
            goto L_00247858;
    }
    goto skip_1;
    // 0x002476C8: addiu       $a0, $s0, 0xC10
    ctx->r4 = ADD32(ctx->r16, 0XC10);
    skip_1:
    // 0x002476CC: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x002476D0: andi        $v1, $v0, 0x100
    ctx->r3 = ctx->r2 & 0X100;
    // 0x002476D4: beq         $v1, $zero, L_002477B8
    if (ctx->r3 == 0) {
        // 0x002476D8: nop
    
            goto L_002477B8;
    }
    // 0x002476D8: nop

    // 0x002476DC: lw          $a0, 0xA64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA64);
    // 0x002476E0: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
    // 0x002476E4: bne         $v1, $v0, L_002477B8
    if (ctx->r3 != ctx->r2) {
        // 0x002476E8: nop
    
            goto L_002477B8;
    }
    // 0x002476E8: nop

    // 0x002476EC: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x002476F0: beq         $v0, $zero, L_00247718
    if (ctx->r2 == 0) {
        // 0x002476F4: addiu       $v1, $s0, 0xC10
        ctx->r3 = ADD32(ctx->r16, 0XC10);
            goto L_00247718;
    }
    // 0x002476F4: addiu       $v1, $s0, 0xC10
    ctx->r3 = ADD32(ctx->r16, 0XC10);
    // 0x002476F8: sw          $zero, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = 0;
    // 0x002476FC: lw          $v0, 0xB4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB4);
    // 0x00247700: beq         $v0, $zero, L_002477B8
    if (ctx->r2 == 0) {
        // 0x00247704: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_002477B8;
    }
    // 0x00247704: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x00247708: bnel        $v0, $a0, L_002477B8
    if (ctx->r2 != ctx->r4) {
        // 0x0024770C: sw          $a0, 0xB4($v1)
        MEM_W(0XB4, ctx->r3) = ctx->r4;
            goto L_002477B8;
    }
    goto skip_2;
    // 0x0024770C: sw          $a0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r4;
    skip_2:
    // 0x00247710: j           L_002477B8
    // 0x00247714: nop

        goto L_002477B8;
    // 0x00247714: nop

L_00247718:
    // 0x00247718: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x0024771C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00247720: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00247724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00247728: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024772C: lhu         $v0, 0x8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X8);
    // 0x00247730: beq         $v0, $zero, L_002477B8
    if (ctx->r2 == 0) {
        // 0x00247734: nop
    
            goto L_002477B8;
    }
    // 0x00247734: nop

    // 0x00247738: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024773C: lw          $v0, -0x5560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5560);
    // 0x00247740: beq         $v0, $zero, L_00247750
    if (ctx->r2 == 0) {
        // 0x00247744: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_00247750;
    }
    // 0x00247744: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x00247748: bne         $v0, $zero, L_002477B8
    if (ctx->r2 != 0) {
        // 0x0024774C: nop
    
            goto L_002477B8;
    }
    // 0x0024774C: nop

L_00247750:
    // 0x00247750: lh          $v1, 0x996($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X996);
    // 0x00247754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247758: sw          $v0, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = ctx->r2;
    // 0x0024775C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x00247760: bne         $v1, $v0, L_00247778
    if (ctx->r3 != ctx->r2) {
        // 0x00247764: nop
    
            goto L_00247778;
    }
    // 0x00247764: nop

    // 0x00247768: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024776C: lwc1        $f0, 0x6A60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A60);
    // 0x00247770: j           L_00247784
    // 0x00247774: swc1        $f0, 0xB94($s0)
    MEM_W(0XB94, ctx->r16) = ctx->f0.u32l;
        goto L_00247784;
    // 0x00247774: swc1        $f0, 0xB94($s0)
    MEM_W(0XB94, ctx->r16) = ctx->f0.u32l;
L_00247778:
    // 0x00247778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024777C: lwc1        $f0, 0x6A64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A64);
    // 0x00247780: swc1        $f0, 0xB94($s0)
    MEM_W(0XB94, ctx->r16) = ctx->f0.u32l;
L_00247784:
    // 0x00247784: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00247788: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024778C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00247790: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00247794: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00247798: addiu       $v1, $s0, 0xC10
    ctx->r3 = ADD32(ctx->r16, 0XC10);
    // 0x0024779C: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x002477A0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002477A4: bnel        $v0, $a0, L_002477B8
    if (ctx->r2 != ctx->r4) {
        // 0x002477A8: sw          $a0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r4;
            goto L_002477B8;
    }
    goto skip_3;
    // 0x002477A8: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    skip_3:
    // 0x002477AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002477B0: sw          $v0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r2;
    // 0x002477B4: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_002477B8:
    // 0x002477B8: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x002477BC: beq         $v0, $zero, L_00247854
    if (ctx->r2 == 0) {
        // 0x002477C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00247854;
    }
    // 0x002477C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002477C4: lwc1        $f20, 0xB94($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XB94);
    // 0x002477C8: lw          $v1, 0xA64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA64);
    // 0x002477CC: sw          $v0, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = ctx->r2;
    // 0x002477D0: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x002477D4: beq         $v0, $zero, L_00247854
    if (ctx->r2 == 0) {
        // 0x002477D8: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_00247854;
    }
    // 0x002477D8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x002477DC: beq         $v0, $zero, L_00247814
    if (ctx->r2 == 0) {
        // 0x002477E0: nop
    
            goto L_00247814;
    }
    // 0x002477E0: nop

    // 0x002477E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002477E8: lwc1        $f0, 0x6A68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A68);
    // 0x002477EC: add.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x002477F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002477F4: lwc1        $f1, 0x6A6C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A6C);
    // 0x002477F8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002477FC: nop

    // 0x00247800: bc1tl       L_00247808
    if (c1cs) {
        // 0x00247804: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00247808;
    }
    goto skip_4;
    // 0x00247804: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_00247808:
    // 0x00247808: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0024780C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00247810: sw          $v0, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = ctx->r2;
L_00247814:
    // 0x00247814: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x00247818: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0024781C: beq         $v0, $zero, L_00247858
    if (ctx->r2 == 0) {
        // 0x00247820: addiu       $a0, $s0, 0xC10
        ctx->r4 = ADD32(ctx->r16, 0XC10);
            goto L_00247858;
    }
    // 0x00247820: addiu       $a0, $s0, 0xC10
    ctx->r4 = ADD32(ctx->r16, 0XC10);
    // 0x00247824: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247828: lwc1        $f0, 0x6A70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A70);
    // 0x0024782C: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00247830: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247834: lwc1        $f1, 0x6A74($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A74);
    // 0x00247838: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024783C: nop

    // 0x00247840: bc1tl       L_00247848
    if (c1cs) {
        // 0x00247844: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00247848;
    }
    goto skip_5;
    // 0x00247844: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_00247848:
    // 0x00247848: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0024784C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00247850: sw          $v0, 0xB8C($s0)
    MEM_W(0XB8C, ctx->r16) = ctx->r2;
L_00247854:
    // 0x00247854: addiu       $a0, $s0, 0xC10
    ctx->r4 = ADD32(ctx->r16, 0XC10);
L_00247858:
    // 0x00247858: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024785C: jal         0x00247170
    // 0x00247860: swc1        $f20, 0xB94($s0)
    MEM_W(0XB94, ctx->r16) = ctx->f20.u32l;
    func_00247170(rdram, ctx);
        goto after_0;
    // 0x00247860: swc1        $f20, 0xB94($s0)
    MEM_W(0XB94, ctx->r16) = ctx->f20.u32l;
    after_0:
    // 0x00247864: lw          $v1, 0xCC4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XCC4);
    // 0x00247868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024786C: beq         $v1, $v0, L_002478B4
    if (ctx->r3 == ctx->r2) {
        // 0x00247870: nop
    
            goto L_002478B4;
    }
    // 0x00247870: nop

    // 0x00247874: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00247878: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0024787C: jal         0x002117DC
    // 0x00247880: addiu       $a0, $s0, 0xB90
    ctx->r4 = ADD32(ctx->r16, 0XB90);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x00247880: addiu       $a0, $s0, 0xB90
    ctx->r4 = ADD32(ctx->r16, 0XB90);
    after_1:
    // 0x00247884: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00247888: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    // 0x0024788C: nop

    // 0x00247890: bc1f        L_002478B4
    if (!c1cs) {
        // 0x00247894: nop
    
            goto L_002478B4;
    }
    // 0x00247894: nop

    // 0x00247898: lwc1        $f1, 0xB90($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB90);
    // 0x0024789C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002478A0: lwc1        $f0, 0x6A78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A78);
    // 0x002478A4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002478A8: nop

    // 0x002478AC: bc1tl       L_002478B4
    if (c1cs) {
        // 0x002478B0: swc1        $f2, 0xB90($s0)
        MEM_W(0XB90, ctx->r16) = ctx->f2.u32l;
            goto L_002478B4;
    }
    goto skip_6;
    // 0x002478B0: swc1        $f2, 0xB90($s0)
    MEM_W(0XB90, ctx->r16) = ctx->f2.u32l;
    skip_6:
L_002478B4:
    // 0x002478B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002478B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002478BC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x002478C0: jr          $ra
    // 0x002478C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002478C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00265908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265908: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0026590C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00265910: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x00265914: nop

    // 0x00265918: bc1t        L_00265934
    if (c1cs) {
        // 0x0026591C: nop
    
            goto L_00265934;
    }
    // 0x0026591C: nop

    // 0x00265920: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x00265924: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00265928: nop

    // 0x0026592C: bc1f        L_0026594C
    if (!c1cs) {
        // 0x00265930: nop
    
            goto L_0026594C;
    }
    // 0x00265930: nop

L_00265934:
    // 0x00265934: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x00265938: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026593C: nop

    // 0x00265940: bc1tl       L_00265948
    if (c1cs) {
        // 0x00265944: swc1        $f1, 0x40($a1)
        MEM_W(0X40, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
            goto L_00265948;
    }
    goto skip_0;
    // 0x00265944: swc1        $f1, 0x40($a1)
    MEM_W(0X40, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_00265948:
    // 0x00265948: swc1        $f2, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f2.u32l;
L_0026594C:
    // 0x0026594C: jr          $ra
    // 0x00265950: nop

    return;
    // 0x00265950: nop

;}
RECOMP_FUNC void func_00271AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271AC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271AC8: lwc1        $f0, -0x7F18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F18);
    // 0x00271ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00271AD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00271AD4: lwc1        $f1, 0x2BA8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X2BA8);
    // 0x00271AD8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00271ADC: nop

    // 0x00271AE0: bc1fl       L_00271AE8
    if (!c1cs) {
        // 0x00271AE4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00271AE8;
    }
    goto skip_0;
    // 0x00271AE4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_00271AE8:
    // 0x00271AE8: addiu       $a0, $a0, 0x2BC0
    ctx->r4 = ADD32(ctx->r4, 0X2BC0);
    // 0x00271AEC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00271AF0: jal         0x00276B10
    // 0x00271AF4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_00276B10(rdram, ctx);
        goto after_0;
    // 0x00271AF4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x00271AF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00271AFC: jr          $ra
    // 0x00271B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00441BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441BFC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00441C00: lh          $v1, 0x46($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X46);
    // 0x00441C04: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00441C08: jr          $ra
    // 0x00441C0C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x00441C0C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_00426734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426734: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00426738: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0042673C: bne         $v0, $zero, L_0042678C
    if (ctx->r2 != 0) {
        // 0x00426740: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0042678C;
    }
    // 0x00426740: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00426744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00426748: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x0042674C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00426750: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
L_00426754:
    // 0x00426754: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00426758: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0042675C: sll         $v1, $a2, 5
    ctx->r3 = S32(ctx->r6 << 5);
    // 0x00426760: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x00426764: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00426768: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0042676C: bne         $v0, $zero, L_00426780
    if (ctx->r2 != 0) {
        // 0x00426770: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00426780;
    }
    // 0x00426770: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00426774: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00426778: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042677C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_00426780:
    // 0x00426780: slti        $v0, $a2, 0x10
    ctx->r2 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x00426784: bne         $v0, $zero, L_00426754
    if (ctx->r2 != 0) {
        // 0x00426788: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00426754;
    }
    // 0x00426788: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_0042678C:
    // 0x0042678C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426790: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426794: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x00426798: jr          $ra
    // 0x0042679C: nop

    return;
    // 0x0042679C: nop

;}
RECOMP_FUNC void func_0041B040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B040: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041B044: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041B048: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0041B04C: xor         $v0, $v0, $a1
    ctx->r2 = ctx->r2 ^ ctx->r5;
    // 0x0041B050: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0041B054: jr          $ra
    // 0x0041B058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0045242C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045242C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452430: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452434: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00452438: addiu       $a2, $a2, -0x7634
    ctx->r6 = ADD32(ctx->r6, -0X7634);
    // 0x0045243C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452440: jal         0x00416894
    // 0x00452444: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452444: nop

    after_0:
    // 0x00452448: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045244C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452450: jr          $ra
    // 0x00452454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00426BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426BD8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00426BDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426BE0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00426BE4: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x00426BE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426BEC: bne         $v1, $v0, L_00426C0C
    if (ctx->r3 != ctx->r2) {
            // 0x00426BF0: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    func_00426C0C(rdram, ctx);
    return;
    }
    // 0x00426BF0: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x00426BF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426BF8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00426BFC: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x00426C00: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00426C04: jr          $ra
    // 0x00426C08: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00426C08: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_00200F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200F20: addi        $t0, $zero, 0x1F
    ctx->r8 = ADD32(0, 0X1F);
    // 0x00200F24: addu        $t8, $ra, $zero
    ctx->r24 = ADD32(ctx->r31, 0);
    // 0x00200F28: jal         0x00200EC0
    // 0x00200F2C: addi        $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    func_00200EC0(rdram, ctx);
        goto after_0;
    // 0x00200F2C: addi        $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    after_0:
    // 0x00200F30: addu        $ra, $t8, $zero
    ctx->r31 = ADD32(ctx->r24, 0);
    // 0x00200F34: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00200F38: bltz        $t0, L_0020106C
    if (SIGNED(ctx->r8) < 0) {
        // 0x00200F3C: nop
    
            goto L_0020106C;
    }
    // 0x00200F3C: nop

    // 0x00200F40: addu        $t2, $t0, $zero
    ctx->r10 = ADD32(ctx->r8, 0);
    // 0x00200F44: addu        $t3, $t0, $zero
    ctx->r11 = ADD32(ctx->r8, 0);
    // 0x00200F48: addi        $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00200F4C: addu        $s1, $sp, $zero
    ctx->r17 = ADD32(ctx->r29, 0);
L_00200F50:
    // 0x00200F50: addi        $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x00200F54: addu        $t8, $ra, $zero
    ctx->r24 = ADD32(ctx->r31, 0);
    // 0x00200F58: jal         0x00200EC0
    // 0x00200F5C: addi        $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    func_00200EC0(rdram, ctx);
        goto after_1;
    // 0x00200F5C: addi        $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    after_1:
    // 0x00200F60: addu        $ra, $t8, $zero
    ctx->r31 = ADD32(ctx->r24, 0);
    // 0x00200F64: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
    // 0x00200F68: addi        $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00200F6C: bne         $t2, $zero, L_00200F50
    if (ctx->r10 != 0) {
        // 0x00200F70: addi        $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_00200F50;
    }
    // 0x00200F70: addi        $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x00200F74: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00200F78: addi        $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x00200F7C: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x00200F80: addi        $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00200F84: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x00200F88: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x00200F8C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
L_00200F90:
    // 0x00200F90: addu        $t4, $t3, $zero
    ctx->r12 = ADD32(ctx->r11, 0);
    // 0x00200F94: addi        $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
L_00200F98:
    // 0x00200F98: lbu         $at, 0x0($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X0);
    // 0x00200F9C: addi        $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00200FA0: bne         $t1, $at, L_0020103C
    if (ctx->r9 != ctx->r1) {
        // 0x00200FA4: nop
    
            goto L_0020103C;
    }
    // 0x00200FA4: nop

    // 0x00200FA8: addi        $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x00200FAC: sllv        $t5, $t5, $t1
    ctx->r13 = S32(ctx->r13 << (ctx->r9 & 31));
    // 0x00200FB0: addi        $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x00200FB4: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    // 0x00200FB8: addi        $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00200FBC: addu        $t5, $t2, $zero
    ctx->r13 = ADD32(ctx->r10, 0);
    // 0x00200FC0: sll         $at, $t5, 16
    ctx->r1 = S32(ctx->r13 << 16);
    // 0x00200FC4: srl         $t5, $t5, 16
    ctx->r13 = S32(U32(ctx->r13) >> 16);
    // 0x00200FC8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
    // 0x00200FCC: addu        $t7, $t1, $zero
    ctx->r15 = ADD32(ctx->r9, 0);
    // 0x00200FD0: addi        $t7, $t7, -0x1
    ctx->r15 = ADD32(ctx->r15, -0X1);
L_00200FD4:
    // 0x00200FD4: addi        $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00200FD8: srl         $at, $at, 16
    ctx->r1 = S32(U32(ctx->r1) >> 16);
    // 0x00200FDC: and         $t6, $at, $t6
    ctx->r14 = ctx->r1 & ctx->r14;
    // 0x00200FE0: and         $at, $t5, $a3
    ctx->r1 = ctx->r13 & ctx->r7;
    // 0x00200FE4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x00200FE8: srl         $t6, $t6, 1
    ctx->r14 = S32(U32(ctx->r14) >> 1);
    // 0x00200FEC: beq         $at, $zero, L_00200FF8
    if (ctx->r1 == 0) {
        // 0x00200FF0: nop
    
            goto L_00200FF8;
    }
    // 0x00200FF0: nop

    // 0x00200FF4: or          $t6, $t6, $a3
    ctx->r14 = ctx->r14 | ctx->r7;
L_00200FF8:
    // 0x00200FF8: bne         $t7, $zero, L_00200FD4
    if (ctx->r15 != 0) {
        // 0x00200FFC: addi        $t7, $t7, -0x1
        ctx->r15 = ADD32(ctx->r15, -0X1);
            goto L_00200FD4;
    }
    // 0x00200FFC: addi        $t7, $t7, -0x1
    ctx->r15 = ADD32(ctx->r15, -0X1);
    // 0x00201000: addi        $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x00201004: sub         $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x00201008: srlv        $t6, $t6, $t5
    ctx->r14 = S32(U32(ctx->r14) >> (ctx->r13 & 31));
    // 0x0020100C: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x00201010: addi        $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00201014: sb          $t1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r9;
    // 0x00201018: addu        $t5, $t3, $zero
    ctx->r13 = ADD32(ctx->r11, 0);
    // 0x0020101C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x00201020: sb          $t5, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r13;
    // 0x00201024: addi        $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x00201028: addiu       $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x0020102C: sllv        $t6, $t6, $t5
    ctx->r14 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x00201030: addiu       $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x00201034: sh          $t6, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r14;
    // 0x00201038: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
L_0020103C:
    // 0x0020103C: bne         $t4, $zero, L_00200F98
    if (ctx->r12 != 0) {
        // 0x00201040: addi        $t4, $t4, -0x1
        ctx->r12 = ADD32(ctx->r12, -0X1);
            goto L_00200F98;
    }
    // 0x00201040: addi        $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x00201044: srl         $t0, $t0, 1
    ctx->r8 = S32(U32(ctx->r8) >> 1);
    // 0x00201048: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0020104C: addi        $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x00201050: bne         $t1, $at, L_00200F90
    if (ctx->r9 != ctx->r1) {
        // 0x00201054: nop
    
            goto L_00200F90;
    }
    // 0x00201054: nop

    // 0x00201058: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x0020105C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x00201060: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x00201064: addi        $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x00201068: addi        $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
L_0020106C:
    // 0x0020106C: jr          $ra
    // 0x00201070: nop

    return;
    // 0x00201070: nop

;}
RECOMP_FUNC void func_0046603C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046603C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00466040: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00466044: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00466048: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0046604C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00466050: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00466054: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00466058: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0046605C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00466060: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00466064: jal         0x00200500
    // 0x00466068: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x00466068: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x0046606C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x00466070: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00466074: jal         0x00200500
    // 0x00466078: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00466078: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x0046607C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00466080: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
    // 0x00466084: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466088: lwc1        $f20, 0x60B8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X60B8);
L_0046608C:
    // 0x0046608C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x00466090: addu        $s0, $s3, $s1
    ctx->r16 = ADD32(ctx->r19, ctx->r17);
    // 0x00466094: jal         0x00200574
    // 0x00466098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00466098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0046609C: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x004660A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004660A4: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x004660A8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x004660AC: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x004660B0: bne         $v0, $zero, L_0046608C
    if (ctx->r2 != 0) {
        // 0x004660B4: sh          $zero, 0x16($s0)
        MEM_H(0X16, ctx->r16) = 0;
            goto L_0046608C;
    }
    // 0x004660B4: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x004660B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004660BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004660C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004660C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004660C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004660CC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x004660D0: jr          $ra
    // 0x004660D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004660D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002111E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002111E8: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x002111EC: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x002111F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002111F4: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x002111F8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002111FC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00211200: swc1        $f1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00211204: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x00211208: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0021120C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211210: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00211214: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00211218: swc1        $f1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021121C: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x00211220: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x00211224: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211228: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021122C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00211230: swc1        $f1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00211234: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
    // 0x00211238: lwc1        $f1, 0xC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x0021123C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00211240: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00211244: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00211248: jr          $ra
    // 0x0021124C: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0021124C: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0024646C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024646C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00246470: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00246474: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00246478: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0024647C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00246480: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00246484: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00246488: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0024648C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x00246490: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x00246494: bne         $v0, $zero, L_0024656C
    if (ctx->r2 != 0) {
        // 0x00246498: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_0024656C;
    }
    // 0x00246498: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0024649C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x002464A0: addiu       $s0, $s0, -0x26B0
    ctx->r16 = ADD32(ctx->r16, -0X26B0);
    // 0x002464A4: or          $v0, $v1, $a2
    ctx->r2 = ctx->r3 | ctx->r6;
    // 0x002464A8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002464AC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002464B0: beq         $v0, $zero, L_00246508
    if (ctx->r2 == 0) {
        // 0x002464B4: and         $v0, $s2, $v0
        ctx->r2 = ctx->r18 & ctx->r2;
            goto L_00246508;
    }
    // 0x002464B4: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_002464B8:
    // 0x002464B8: beql        $v0, $zero, L_002464FC
    if (ctx->r2 == 0) {
        // 0x002464BC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_002464FC;
    }
    goto skip_0;
    // 0x002464BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x002464C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002464C4: lwc1        $f12, 0x697C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X697C);
    // 0x002464C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002464CC: lwc1        $f14, 0x6980($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6980);
    // 0x002464D0: jal         0x002119FC
    // 0x002464D4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x002464D4: nop

    after_0:
    // 0x002464D8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x002464DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002464E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002464E4: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x002464E8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x002464EC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x002464F0: jal         0x00268C48
    // 0x002464F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268C48(rdram, ctx);
        goto after_1;
    // 0x002464F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002464F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_002464FC:
    // 0x002464FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00246500: bne         $v0, $zero, L_002464B8
    if (ctx->r2 != 0) {
        // 0x00246504: and         $v0, $s2, $v0
        ctx->r2 = ctx->r18 & ctx->r2;
            goto L_002464B8;
    }
    // 0x00246504: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_00246508:
    // 0x00246508: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0024650C: addiu       $s0, $s0, -0x25A8
    ctx->r16 = ADD32(ctx->r16, -0X25A8);
    // 0x00246510: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00246514: beq         $v0, $zero, L_0024656C
    if (ctx->r2 == 0) {
        // 0x00246518: and         $v0, $s3, $v0
        ctx->r2 = ctx->r19 & ctx->r2;
            goto L_0024656C;
    }
    // 0x00246518: and         $v0, $s3, $v0
    ctx->r2 = ctx->r19 & ctx->r2;
L_0024651C:
    // 0x0024651C: beql        $v0, $zero, L_00246560
    if (ctx->r2 == 0) {
        // 0x00246520: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_00246560;
    }
    goto skip_1;
    // 0x00246520: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_1:
    // 0x00246524: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246528: lwc1        $f12, 0x6984($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6984);
    // 0x0024652C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246530: lwc1        $f14, 0x6988($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6988);
    // 0x00246534: jal         0x002119FC
    // 0x00246538: nop

    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00246538: nop

    after_2:
    // 0x0024653C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00246540: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00246544: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00246548: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024654C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00246550: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00246554: jal         0x00268C48
    // 0x00246558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268C48(rdram, ctx);
        goto after_3;
    // 0x00246558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0024655C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_00246560:
    // 0x00246560: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00246564: bne         $v0, $zero, L_0024651C
    if (ctx->r2 != 0) {
        // 0x00246568: and         $v0, $s3, $v0
        ctx->r2 = ctx->r19 & ctx->r2;
            goto L_0024651C;
    }
    // 0x00246568: and         $v0, $s3, $v0
    ctx->r2 = ctx->r19 & ctx->r2;
L_0024656C:
    // 0x0024656C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00246570: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00246574: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00246578: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0024657C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00246580: jr          $ra
    // 0x00246584: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00246584: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00298650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298650: lui         $v0, 0xA450
    ctx->r2 = S32(0XA450 << 16);
    // 0x00298654: ori         $v0, $v0, 0xC
    ctx->r2 = ctx->r2 | 0XC;
    // 0x00298658: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029865C: jr          $ra
    // 0x00298660: slti        $v0, $v0, 0x0
    ctx->r2 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    return;
    // 0x00298660: slti        $v0, $v0, 0x0
    ctx->r2 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
;}
RECOMP_FUNC void func_00253D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253D68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00253D6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253D70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253D74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00253D78: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00253D7C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00253D80: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00253D84: jal         0x00220A1C
    // 0x00253D88: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00220A1C(rdram, ctx);
        goto after_0;
    // 0x00253D88: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00253D8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00253D90: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00253D94: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x00253D98: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x00253D9C: sw          $a2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r6;
    // 0x00253DA0: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x00253DA4: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x00253DA8: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00253DAC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00253DB0: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x00253DB4: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x00253DB8: sw          $a2, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->r6;
    // 0x00253DBC: sw          $a3, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->r7;
    // 0x00253DC0: sw          $t0, 0x294($s0)
    MEM_W(0X294, ctx->r16) = ctx->r8;
    // 0x00253DC4: sw          $v1, 0x298($s0)
    MEM_W(0X298, ctx->r16) = ctx->r3;
    // 0x00253DC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00253DCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00253DD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253DD4: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x00253DD8: jr          $ra
    // 0x00253DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00253DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00407800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00407804: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00407808: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040780C: beq         $v0, $zero, L_00407830
    if (ctx->r2 == 0) {
        // 0x00407810: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00407830;
    }
    // 0x00407810: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407814: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407818: lwc1        $f0, 0x544($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X544);
    // 0x0040781C: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00407820: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00407824: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00407828: jal         0x00243414
    // 0x0040782C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040782C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
L_00407830:
    // 0x00407830: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00407834: jr          $ra
    // 0x00407838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00407838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A50C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
;}
RECOMP_FUNC void func_00253640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00253644: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00253648: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025364C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253650: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00253654: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00253658: jal         0x0026EFB8
    // 0x0025365C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x0025365C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00253660: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00253664: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00253668: beq         $v0, $zero, L_002536A0
    if (ctx->r2 == 0) {
        // 0x0025366C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002536A0;
    }
    // 0x0025366C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00253670: beq         $s0, $zero, L_00253680
    if (ctx->r16 == 0) {
        // 0x00253674: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00253680;
    }
    // 0x00253674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00253678: beq         $s0, $v0, L_00253694
    if (ctx->r16 == ctx->r2) {
        // 0x0025367C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00253694;
    }
    // 0x0025367C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
L_00253680:
    // 0x00253680: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00253684: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00253688: lw          $v0, 0x9A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A0);
    // 0x0025368C: j           L_002536A0
    // 0x00253690: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_002536A0;
    // 0x00253690: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_00253694:
    // 0x00253694: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00253698: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x0025369C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_002536A0:
    // 0x002536A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002536A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002536A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002536AC: jr          $ra
    // 0x002536B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002536B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026421C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026421C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00264224: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00264228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0026422C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00264230: jal         0x00243414
    // 0x00264234: sb          $zero, 0x37($a1)
    MEM_B(0X37, ctx->r5) = 0;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00264234: sb          $zero, 0x37($a1)
    MEM_B(0X37, ctx->r5) = 0;
    after_0:
    // 0x00264238: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026423C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00264240: jal         0x00220408
    // 0x00264244: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_1;
    // 0x00264244: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00264248: bne         $v0, $zero, L_0026425C
    if (ctx->r2 != 0) {
        // 0x0026424C: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_0026425C;
    }
    // 0x0026424C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00264250: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00264254: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00264258: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_0026425C:
    // 0x0026425C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00264260: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00264264: jr          $ra
    // 0x00264268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00238334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238334: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00238338: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0023833C: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x00238340: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x00238344: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00238348: lwc1        $f21, 0x65B8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X65B8);
    // 0x0023834C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00238350: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00238354: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00238358: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023835C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00238360: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00238364: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00238368: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x0023836C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00238370: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00238374: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00238378: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x0023837C: beq         $v0, $zero, L_00238394
    if (ctx->r2 == 0) {
        // 0x00238380: sw          $a3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r7;
            goto L_00238394;
    }
    // 0x00238380: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x00238384: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x00238388: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0023838C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00238390: sltu        $s2, $v0, $s2
    ctx->r18 = ctx->r2 < ctx->r18 ? 1 : 0;
L_00238394:
    // 0x00238394: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00238398: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023839C: bne         $v1, $v0, L_002383CC
    if (ctx->r3 != ctx->r2) {
        // 0x002383A0: nop
    
            goto L_002383CC;
    }
    // 0x002383A0: nop

    // 0x002383A4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002383A8: addiu       $a0, $a0, 0x1CE0
    ctx->r4 = ADD32(ctx->r4, 0X1CE0);
    // 0x002383AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002383B0: bne         $v0, $s0, L_002383CC
    if (ctx->r2 != ctx->r16) {
        // 0x002383B4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002383CC;
    }
    // 0x002383B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002383B8: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x002383BC: beq         $v1, $v0, L_002383CC
    if (ctx->r3 == ctx->r2) {
        // 0x002383C0: addiu       $v1, $a0, 0x18
        ctx->r3 = ADD32(ctx->r4, 0X18);
            goto L_002383CC;
    }
    // 0x002383C0: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x002383C4: j           L_002383F8
    // 0x002383C8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
        goto L_002383F8;
    // 0x002383C8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_002383CC:
    // 0x002383CC: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x002383D0: addiu       $s1, $s1, 0x1970
    ctx->r17 = ADD32(ctx->r17, 0X1970);
    // 0x002383D4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002383D8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x002383DC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x002383E0: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x002383E4: jal         0x0021E374
    // 0x002383E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E374(rdram, ctx);
        goto after_0;
    // 0x002383E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002383EC: beq         $v0, $zero, L_002383F8
    if (ctx->r2 == 0) {
        // 0x002383F0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_002383F8;
    }
    // 0x002383F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002383F4: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
L_002383F8:
    // 0x002383F8: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x002383FC: beq         $s2, $zero, L_00238414
    if (ctx->r18 == 0) {
        // 0x00238400: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_00238414;
    }
    // 0x00238400: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00238404: beq         $v1, $zero, L_00238414
    if (ctx->r3 == 0) {
        // 0x00238408: nop
    
            goto L_00238414;
    }
    // 0x00238408: nop

    // 0x0023840C: lwc1        $f0, 0x68($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X68);
    // 0x00238410: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
L_00238414:
    // 0x00238414: beq         $s3, $zero, L_002384D8
    if (ctx->r19 == 0) {
        // 0x00238418: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_002384D8;
    }
    // 0x00238418: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x0023841C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x00238420: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x00238424: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x00238428: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0023842C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00238430: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00238434: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00238438: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x0023843C: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00238440: jal         0x002671B4
    // 0x00238444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00238444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00238448: add.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x0023844C: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x00238450: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00238454: nop

    // 0x00238458: bc1f        L_00238468
    if (!c1cs) {
        // 0x0023845C: nop
    
            goto L_00238468;
    }
    // 0x0023845C: nop

    // 0x00238460: j           L_0023847C
    // 0x00238464: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_0023847C;
    // 0x00238464: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00238468:
    // 0x00238468: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0023846C: nop

    // 0x00238470: bc1fl       L_0023847C
    if (!c1cs) {
        // 0x00238474: swc1        $f0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
            goto L_0023847C;
    }
    goto skip_0;
    // 0x00238474: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    skip_0:
    // 0x00238478: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
L_0023847C:
    // 0x0023847C: jal         0x002672C8
    // 0x00238480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_2;
    // 0x00238480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00238484: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x00238488: lwc1        $f1, 0x64($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x0023848C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00238490: jal         0x0020F6BC
    // 0x00238494: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    func_0020F6BC(rdram, ctx);
        goto after_3;
    // 0x00238494: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    after_3:
    // 0x00238498: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0023849C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x002384A0: nop

    // 0x002384A4: bc1f        L_002384B8
    if (!c1cs) {
        // 0x002384A8: nop
    
            goto L_002384B8;
    }
    // 0x002384A8: nop

    // 0x002384AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002384B0: j           L_002384D8
    // 0x002384B4: nop

        goto L_002384D8;
    // 0x002384B4: nop

L_002384B8:
    // 0x002384B8: beq         $s4, $zero, L_002384D8
    if (ctx->r20 == 0) {
        // 0x002384BC: mov.s       $f0, $f21
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
            goto L_002384D8;
    }
    // 0x002384BC: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x002384C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002384C4: lwc1        $f0, 0x65BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X65BC);
    // 0x002384C8: div.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f20.fl);
    // 0x002384CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002384D0: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x002384D4: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
L_002384D8:
    // 0x002384D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x002384DC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x002384E0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x002384E4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002384E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002384EC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002384F0: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x002384F4: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x002384F8: jr          $ra
    // 0x002384FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002384FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00276844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276844: lb          $v0, 0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5);
    // 0x00276848: jr          $ra
    // 0x0027684C: nop

    return;
    // 0x0027684C: nop

;}
RECOMP_FUNC void func_00447090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447090: lw          $v0, 0x510($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X510);
    // 0x00447094: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00447098: jr          $ra
    // 0x0044709C: sw          $v0, 0x510($a1)
    MEM_W(0X510, ctx->r5) = ctx->r2;
    return;
    // 0x0044709C: sw          $v0, 0x510($a1)
    MEM_W(0X510, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_002763F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002763F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002763F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002763FC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00276400: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00276404: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00276408: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x0027640C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00276410: addiu       $v0, $s2, 0x4
    ctx->r2 = ADD32(ctx->r18, 0X4);
    // 0x00276414: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00276418: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027641C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00276420: sw          $s3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r19;
    // 0x00276424: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
    // 0x00276428: jal         0x00273A34
    // 0x0027642C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    func_00273A34(rdram, ctx);
        goto after_0;
    // 0x0027642C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    after_0:
    // 0x00276430: addiu       $a0, $s2, 0xE0
    ctx->r4 = ADD32(ctx->r18, 0XE0);
    // 0x00276434: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00276438: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x0027643C: addiu       $v0, $s2, 0xD8
    ctx->r2 = ADD32(ctx->r18, 0XD8);
    // 0x00276440: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
    // 0x00276444: jal         0x00273A34
    // 0x00276448: sw          $v0, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = ctx->r2;
    func_00273A34(rdram, ctx);
        goto after_1;
    // 0x00276448: sw          $v0, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = ctx->r2;
    after_1:
    // 0x0027644C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00276450: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00276454:
    // 0x00276454: addu        $v0, $s0, $s2
    ctx->r2 = ADD32(ctx->r16, ctx->r18);
    // 0x00276458: addiu       $v0, $v0, 0x1AC
    ctx->r2 = ADD32(ctx->r2, 0X1AC);
    // 0x0027645C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00276460: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00276464: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00276468: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
    // 0x0027646C: jal         0x00273A34
    // 0x00276470: sw          $v0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r2;
    func_00273A34(rdram, ctx);
        goto after_2;
    // 0x00276470: sw          $v0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r2;
    after_2:
    // 0x00276474: addu        $v0, $s0, $s2
    ctx->r2 = ADD32(ctx->r16, ctx->r18);
    // 0x00276478: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x0027647C: addiu       $v0, $v0, 0x1AC
    ctx->r2 = ADD32(ctx->r2, 0X1AC);
    // 0x00276480: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00276484: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x00276488: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0027648C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00276490: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00276494: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00276498: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0027649C: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x002764A0: bne         $v0, $zero, L_00276454
    if (ctx->r2 != 0) {
        // 0x002764A4: addiu       $s0, $s0, 0xD4
        ctx->r16 = ADD32(ctx->r16, 0XD4);
            goto L_00276454;
    }
    // 0x002764A4: addiu       $s0, $s0, 0xD4
    ctx->r16 = ADD32(ctx->r16, 0XD4);
    // 0x002764A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002764AC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002764B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002764B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002764B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002764BC: jr          $ra
    // 0x002764C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002764C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00258E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258E38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00258E3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00258E40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00258E44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00258E48: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00258E4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00258E50: lw          $a0, 0x1A8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1A8);
    // 0x00258E54: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    // 0x00258E58: jal         0x00253DE0
    // 0x00258E5C: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    func_00253DE0(rdram, ctx);
        goto after_0;
    // 0x00258E5C: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    after_0:
    // 0x00258E60: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x00258E64: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x00258E68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00258E6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258E70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00258E74: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00258E78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258E7C: lwc1        $f1, 0x72A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X72A4);
    // 0x00258E80: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00258E84: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00258E88: swc1        $f0, 0x118($s1)
    MEM_W(0X118, ctx->r17) = ctx->f0.u32l;
    // 0x00258E8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00258E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258E98: jr          $ra
    // 0x00258E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00258E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002157F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002157F0: lhu         $v0, 0x16C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16C);
    // 0x002157F4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002157F8: beq         $v0, $zero, L_00215860
    if (ctx->r2 == 0) {
        // 0x002157FC: nop
    
            goto L_00215860;
    }
    // 0x002157FC: nop

    // 0x00215800: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00215804: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00215808: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021580C: lwc1        $f1, 0x5890($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5890);
    // 0x00215810: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00215814: lwc1        $f1, 0x170($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X170);
    // 0x00215818: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021581C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215820: lwc1        $f0, 0x5894($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5894);
    // 0x00215824: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00215828: nop

    // 0x0021582C: bc1f        L_00215848
    if (!c1cs) {
        // 0x00215830: swc1        $f1, 0x170($a0)
        MEM_W(0X170, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00215848;
    }
    // 0x00215830: swc1        $f1, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00215834: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215838: lwc1        $f0, 0x5898($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5898);
    // 0x0021583C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00215840: jr          $ra
    // 0x00215844: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00215844: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
L_00215848:
    // 0x00215848: lhu         $v0, 0x16C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16C);
    // 0x0021584C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215850: lwc1        $f0, 0x589C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X589C);
    // 0x00215854: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x00215858: sh          $v0, 0x16C($a0)
    MEM_H(0X16C, ctx->r4) = ctx->r2;
    // 0x0021585C: swc1        $f0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f0.u32l;
L_00215860:
    // 0x00215860: jr          $ra
    // 0x00215864: nop

    return;
    // 0x00215864: nop

;}
RECOMP_FUNC void func_00420878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420878: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0042087C: bne         $v1, $v0, L_0042088C
    if (ctx->r3 != ctx->r2) {
        // 0x00420880: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_0042088C;
    }
    // 0x00420880: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00420884: j           L_00420C18
    // 0x00420888: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00420C18;
    // 0x00420888: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0042088C:
    // 0x0042088C: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420890: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420894: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x00420898: beq         $v1, $v0, L_004208B0
    if (ctx->r3 == ctx->r2) {
        // 0x0042089C: nop
    
            goto L_004208B0;
    }
    // 0x0042089C: nop

    // 0x004208A0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004208A4: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004208A8: bne         $v1, $v0, L_004208B8
    if (ctx->r3 != ctx->r2) {
        // 0x004208AC: nop
    
            goto L_004208B8;
    }
    // 0x004208AC: nop

L_004208B0:
    // 0x004208B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004208B4: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
L_004208B8:
    // 0x004208B8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004208BC: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x004208C0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004208C4: beq         $v1, $v0, L_004208D4
    if (ctx->r3 == ctx->r2) {
        // 0x004208C8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004208D4;
    }
    // 0x004208C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004208CC: bne         $v1, $v0, L_004208F8
    if (ctx->r3 != ctx->r2) {
        // 0x004208D0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_004208F8;
    }
    // 0x004208D0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_004208D4:
    // 0x004208D4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004208D8: jal         0x00285AE0
    // 0x004208DC: nop

    func_00285AE0(rdram, ctx);
        goto after_0;
    // 0x004208DC: nop

    after_0:
    // 0x004208E0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004208E4: jal         0x00285BD0
    // 0x004208E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_1;
    // 0x004208E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x004208EC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004208F0: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x004208F4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_004208F8:
    // 0x004208F8: bne         $v1, $v0, L_00420998
    if (ctx->r3 != ctx->r2) {
        // 0x004208FC: nop
    
            goto L_00420998;
    }
    // 0x004208FC: nop

    // 0x00420900: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420904: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00420908: beq         $v0, $zero, L_00420980
    if (ctx->r2 == 0) {
        // 0x0042090C: nop
    
            goto L_00420980;
    }
    // 0x0042090C: nop

    // 0x00420910: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420914: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00420918: bne         $v0, $zero, L_00420980
    if (ctx->r2 != 0) {
        // 0x0042091C: nop
    
            goto L_00420980;
    }
    // 0x0042091C: nop

    // 0x00420920: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420924: lw          $v0, 0x98C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X98C);
    // 0x00420928: bne         $v0, $zero, L_00420980
    if (ctx->r2 != 0) {
        // 0x0042092C: nop
    
            goto L_00420980;
    }
    // 0x0042092C: nop

    // 0x00420930: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420934: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420938: beq         $v0, $zero, L_00420950
    if (ctx->r2 == 0) {
        // 0x0042093C: nop
    
            goto L_00420950;
    }
    // 0x0042093C: nop

    // 0x00420940: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x00420944: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x00420948: j           L_00420958
    // 0x0042094C: nop

        goto L_00420958;
    // 0x0042094C: nop

L_00420950:
    // 0x00420950: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00420954: lb          $s1, 0x4($v0)
    ctx->r17 = MEM_B(ctx->r2, 0X4);
L_00420958:
    // 0x00420958: jal         0x00285A80
    // 0x0042095C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00285A80(rdram, ctx);
        goto after_2;
    // 0x0042095C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00420960: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420964: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00420968: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0042096C: lw          $a1, 0x92C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X92C);
    // 0x00420970: jal         0x0042C700
    // 0x00420974: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0042C700(rdram, ctx);
        goto after_3;
    // 0x00420974: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x00420978: j           L_00420C18
    // 0x0042097C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x0042097C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420980:
    // 0x00420980: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00420984: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00420988: jal         0x004303AC
    // 0x0042098C: nop

    func_004303AC(rdram, ctx);
        goto after_4;
    // 0x0042098C: nop

    after_4:
    // 0x00420990: j           L_00420C18
    // 0x00420994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x00420994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420998:
    // 0x00420998: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042099C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004209A0: beq         $v0, $zero, L_004209B8
    if (ctx->r2 == 0) {
        // 0x004209A4: nop
    
            goto L_004209B8;
    }
    // 0x004209A4: nop

    // 0x004209A8: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x004209AC: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x004209B0: j           L_004209C0
    // 0x004209B4: nop

        goto L_004209C0;
    // 0x004209B4: nop

L_004209B8:
    // 0x004209B8: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x004209BC: lb          $s1, 0x4($v0)
    ctx->r17 = MEM_B(ctx->r2, 0X4);
L_004209C0:
    // 0x004209C0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004209C4: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x004209C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x004209CC: bne         $v1, $v0, L_004209F4
    if (ctx->r3 != ctx->r2) {
        // 0x004209D0: nop
    
            goto L_004209F4;
    }
    // 0x004209D0: nop

    // 0x004209D4: jal         0x00285A80
    // 0x004209D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00285A80(rdram, ctx);
        goto after_5;
    // 0x004209D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x004209DC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004209E0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004209E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x004209E8: lw          $a1, 0x54($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X54);
    // 0x004209EC: jal         0x0042C700
    // 0x004209F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0042C700(rdram, ctx);
        goto after_6;
    // 0x004209F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
L_004209F4:
    // 0x004209F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004209F8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004209FC: beq         $v0, $zero, L_00420A20
    if (ctx->r2 == 0) {
        // 0x00420A00: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_00420A20;
    }
    // 0x00420A00: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00420A04: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00420A08: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00420A0C: bne         $v1, $v0, L_00420A2C
    if (ctx->r3 != ctx->r2) {
        // 0x00420A10: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00420A2C;
    }
    // 0x00420A10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00420A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420A18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420A1C: sw          $v0, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = ctx->r2;
L_00420A20:
    // 0x00420A20: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00420A24: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00420A28: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00420A2C:
    // 0x00420A2C: bne         $v1, $v0, L_00420ADC
    if (ctx->r3 != ctx->r2) {
        // 0x00420A30: nop
    
            goto L_00420ADC;
    }
    // 0x00420A30: nop

    // 0x00420A34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420A38: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00420A3C: beq         $v0, $zero, L_00420ADC
    if (ctx->r2 == 0) {
        // 0x00420A40: nop
    
            goto L_00420ADC;
    }
    // 0x00420A40: nop

    // 0x00420A44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420A48: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00420A4C: bne         $v0, $zero, L_00420ADC
    if (ctx->r2 != 0) {
        // 0x00420A50: nop
    
            goto L_00420ADC;
    }
    // 0x00420A50: nop

    // 0x00420A54: jal         0x00426480
    // 0x00420A58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00426480(rdram, ctx);
        goto after_7;
    // 0x00420A58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00420A5C: jal         0x0042655C
    // 0x00420A60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0042655C(rdram, ctx);
        goto after_8;
    // 0x00420A60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00420A64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00420A68: jal         0x002858CC
    // 0x00420A6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002858CC(rdram, ctx);
        goto after_9;
    // 0x00420A6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00420A70: beql        $s0, $zero, L_00420A80
    if (ctx->r16 == 0) {
        // 0x00420A74: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420A80;
    }
    goto skip_0;
    // 0x00420A74: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    skip_0:
    // 0x00420A78: beq         $v0, $zero, L_00420AB8
    if (ctx->r2 == 0) {
        // 0x00420A7C: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420AB8;
    }
    // 0x00420A7C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00420A80:
    // 0x00420A80: beq         $s0, $v0, L_00420AB8
    if (ctx->r16 == ctx->r2) {
        // 0x00420A84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420AB8;
    }
    // 0x00420A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420A88: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420A8C: bne         $v1, $v0, L_00420AB8
    if (ctx->r3 != ctx->r2) {
        // 0x00420A90: nop
    
            goto L_00420AB8;
    }
    // 0x00420A90: nop

    // 0x00420A94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420A98: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420A9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420AA0: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420AA4: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420AA8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420AAC: addiu       $a1, $a1, -0x4910
    ctx->r5 = ADD32(ctx->r5, -0X4910);
    // 0x00420AB0: j           L_00420C0C
    // 0x00420AB4: nop

        goto L_00420C0C;
    // 0x00420AB4: nop

L_00420AB8:
    // 0x00420AB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420ABC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420AC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420AC4: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420AC8: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420ACC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420AD0: addiu       $a1, $a1, -0x6E70
    ctx->r5 = ADD32(ctx->r5, -0X6E70);
    // 0x00420AD4: j           L_00420C0C
    // 0x00420AD8: nop

        goto L_00420C0C;
    // 0x00420AD8: nop

L_00420ADC:
    // 0x00420ADC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00420AE0: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00420AE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00420AE8: bne         $v1, $v0, L_00420BB0
    if (ctx->r3 != ctx->r2) {
        // 0x00420AEC: nop
    
            goto L_00420BB0;
    }
    // 0x00420AEC: nop

    // 0x00420AF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420AF4: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x00420AF8: beq         $v0, $zero, L_00420BB0
    if (ctx->r2 == 0) {
        // 0x00420AFC: nop
    
            goto L_00420BB0;
    }
    // 0x00420AFC: nop

    // 0x00420B00: jal         0x00426480
    // 0x00420B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00426480(rdram, ctx);
        goto after_10;
    // 0x00420B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00420B08: jal         0x0042655C
    // 0x00420B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0042655C(rdram, ctx);
        goto after_11;
    // 0x00420B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x00420B10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00420B14: jal         0x002858CC
    // 0x00420B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002858CC(rdram, ctx);
        goto after_12;
    // 0x00420B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00420B1C: beql        $s0, $zero, L_00420B2C
    if (ctx->r16 == 0) {
        // 0x00420B20: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420B2C;
    }
    goto skip_1;
    // 0x00420B20: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    skip_1:
    // 0x00420B24: beq         $v0, $zero, L_00420B64
    if (ctx->r2 == 0) {
        // 0x00420B28: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00420B64;
    }
    // 0x00420B28: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00420B2C:
    // 0x00420B2C: beq         $s0, $v0, L_00420B64
    if (ctx->r16 == ctx->r2) {
        // 0x00420B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420B64;
    }
    // 0x00420B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420B34: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420B38: bne         $v1, $v0, L_00420B64
    if (ctx->r3 != ctx->r2) {
        // 0x00420B3C: nop
    
            goto L_00420B64;
    }
    // 0x00420B3C: nop

    // 0x00420B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B44: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B4C: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B50: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B54: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B58: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x00420B5C: j           L_00420C0C
    // 0x00420B60: nop

        goto L_00420C0C;
    // 0x00420B60: nop

L_00420B64:
    // 0x00420B64: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B68: beq         $v0, $zero, L_00420B7C
    if (ctx->r2 == 0) {
        // 0x00420B6C: nop
    
            goto L_00420B7C;
    }
    // 0x00420B6C: nop

    // 0x00420B70: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420B74: j           L_00420B84
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420B84;
    // 0x00420B78: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420B7C:
    // 0x00420B7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420B80: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420B84:
    // 0x00420B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420B88: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420B8C: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x00420B90: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420B94: addiu       $a1, $a1, -0x410C
    ctx->r5 = ADD32(ctx->r5, -0X410C);
    // 0x00420B98: jal         0x00416644
    // 0x00420B9C: nop

    func_00416644(rdram, ctx);
        goto after_13;
    // 0x00420B9C: nop

    after_13:
    // 0x00420BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420BA4: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00420BA8: j           L_00420C18
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420C18;
    // 0x00420BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420BB0:
    // 0x00420BB0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BB8: beql        $v1, $v0, L_00420BC0
    if (ctx->r3 == ctx->r2) {
        // 0x00420BBC: sw          $zero, 0x24($s2)
        MEM_W(0X24, ctx->r18) = 0;
            goto L_00420BC0;
    }
    goto skip_2;
    // 0x00420BBC: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
    skip_2:
L_00420BC0:
    // 0x00420BC0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x00420BC4: beq         $v1, $zero, L_00420C18
    if (ctx->r3 == 0) {
        // 0x00420BC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420C18;
    }
    // 0x00420BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420BCC: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00420BD0: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x00420BD4: beq         $v1, $v0, L_00420BF4
    if (ctx->r3 == ctx->r2) {
        // 0x00420BD8: nop
    
            goto L_00420BF4;
    }
    // 0x00420BD8: nop

    // 0x00420BDC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00420BE0: beq         $v0, $zero, L_00420BF4
    if (ctx->r2 == 0) {
        // 0x00420BE4: nop
    
            goto L_00420BF4;
    }
    // 0x00420BE4: nop

    // 0x00420BE8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00420BEC: j           L_00420BFC
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_00420BFC;
    // 0x00420BF0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_00420BF4:
    // 0x00420BF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420BF8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420BFC:
    // 0x00420BFC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00420C00: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x00420C04: lw          $a2, 0x1C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X1C);
    // 0x00420C08: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
L_00420C0C:
    // 0x00420C0C: jal         0x00416644
    // 0x00420C10: nop

    func_00416644(rdram, ctx);
        goto after_14;
    // 0x00420C10: nop

    after_14:
    // 0x00420C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420C18:
    // 0x00420C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00420C1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420C20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420C24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420C28: jr          $ra
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00420C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028CDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CDC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028CDC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028CDCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028CDD0: bgez        $s0, L_0028CDE8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028CDD4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_0028CDE8;
    }
    // 0x0028CDD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028CDD8: jal         0x0028B430
    // 0x0028CDDC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028CDDC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x0028CDE0: j           L_0028CDEC
    // 0x0028CDE4: negu        $a0, $s0
    ctx->r4 = SUB32(0, ctx->r16);
        goto L_0028CDEC;
    // 0x0028CDE4: negu        $a0, $s0
    ctx->r4 = SUB32(0, ctx->r16);
L_0028CDE8:
    // 0x0028CDE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0028CDEC:
    // 0x0028CDEC: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    // 0x0028CDF0: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x0028CDF4: lui         $a2, 0x6666
    ctx->r6 = S32(0X6666 << 16);
    // 0x0028CDF8: ori         $a2, $a2, 0x6667
    ctx->r6 = ctx->r6 | 0X6667;
L_0028CDFC:
    // 0x0028CDFC: mult        $a0, $a2
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028CE00: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0028CE04: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x0028CE08: mfhi        $a3
    ctx->r7 = hi;
    // 0x0028CE0C: sra         $v1, $a3, 2
    ctx->r3 = S32(SIGNED(ctx->r7) >> 2);
    // 0x0028CE10: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028CE14: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028CE18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028CE1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028CE20: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x0028CE24: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028CE28: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0028CE2C: bne         $a0, $zero, L_0028CDFC
    if (ctx->r4 != 0) {
        // 0x0028CE30: sb          $v0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r2;
            goto L_0028CDFC;
    }
    // 0x0028CE30: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x0028CE34: jal         0x0028CF38
    // 0x0028CE38: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_0028CF38(rdram, ctx);
        goto after_1;
    // 0x0028CE38: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x0028CE3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028CE40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028CE44: jr          $ra
    // 0x0028CE48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028CE48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00201CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201CC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00201CC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00201CC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00201CCC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00201CD0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00201CD4: addiu       $a0, $s2, 0x230
    ctx->r4 = ADD32(ctx->r18, 0X230);
    // 0x00201CD8: addiu       $a1, $s2, 0x248
    ctx->r5 = ADD32(ctx->r18, 0X248);
    // 0x00201CDC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x00201CE0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00201CE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00201CE8: jal         0x0029B030
    // 0x00201CEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00201CEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x00201CF0: addiu       $s0, $s2, 0xA48
    ctx->r16 = ADD32(ctx->r18, 0XA48);
    // 0x00201CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00201CF8: addiu       $a1, $s2, 0xA60
    ctx->r5 = ADD32(ctx->r18, 0XA60);
    // 0x00201CFC: jal         0x0029B030
    // 0x00201D00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x00201D00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x00201D04: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x00201D08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00201D0C: jal         0x0029B950
    // 0x00201D10: addiu       $a2, $zero, 0x7D1
    ctx->r6 = ADD32(0, 0X7D1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00201D10: addiu       $a2, $zero, 0x7D1
    ctx->r6 = ADD32(0, 0X7D1);
    after_2:
    // 0x00201D14: addiu       $a0, $s2, 0x5068
    ctx->r4 = ADD32(ctx->r18, 0X5068);
    // 0x00201D18: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x00201D1C: jal         0x00200500
    // 0x00201D20: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_00200500(rdram, ctx);
        goto after_3;
    // 0x00201D20: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_3:
    // 0x00201D24: addiu       $a0, $s2, 0x507C
    ctx->r4 = ADD32(ctx->r18, 0X507C);
    // 0x00201D28: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x00201D2C: jal         0x00200500
    // 0x00201D30: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_00200500(rdram, ctx);
        goto after_4;
    // 0x00201D30: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_4:
    // 0x00201D34: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00201D38: addiu       $s0, $zero, 0xE68
    ctx->r16 = ADD32(0, 0XE68);
L_00201D3C:
    // 0x00201D3C: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    // 0x00201D40: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
    // 0x00201D44: jal         0x00200574
    // 0x00201D48: addiu       $a0, $s2, 0x5068
    ctx->r4 = ADD32(ctx->r18, 0X5068);
    func_00200574(rdram, ctx);
        goto after_5;
    // 0x00201D48: addiu       $a0, $s2, 0x5068
    ctx->r4 = ADD32(ctx->r18, 0X5068);
    after_5:
    // 0x00201D4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00201D50: slti        $v0, $s1, 0x210
    ctx->r2 = SIGNED(ctx->r17) < 0X210 ? 1 : 0;
    // 0x00201D54: bne         $v0, $zero, L_00201D3C
    if (ctx->r2 != 0) {
        // 0x00201D58: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_00201D3C;
    }
    // 0x00201D58: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x00201D5C: addiu       $a0, $s2, 0xA68
    ctx->r4 = ADD32(ctx->r18, 0XA68);
    // 0x00201D60: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x00201D64: jal         0x00266C5C
    // 0x00201D68: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_00266C5C(rdram, ctx);
        goto after_6;
    // 0x00201D68: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_6:
    // 0x00201D6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00201D70: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00201D74: lui         $a2, 0x20
    ctx->r6 = S32(0X20 << 16);
    // 0x00201D78: addiu       $a2, $a2, 0x1FBC
    ctx->r6 = ADD32(ctx->r6, 0X1FBC);
    // 0x00201D7C: addiu       $v0, $s2, 0xE68
    ctx->r2 = ADD32(ctx->r18, 0XE68);
    // 0x00201D80: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00201D84: lw          $v1, 0x6E94($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6E94);
    // 0x00201D88: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00201D8C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00201D90: jal         0x0029B060
    // 0x00201D94: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    osCreateThread_recomp(rdram, ctx);
        goto after_7;
    // 0x00201D94: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_7:
    // 0x00201D98: jal         0x0029BB10
    // 0x00201D9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_8;
    // 0x00201D9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x00201DA0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00201DA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00201DA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00201DAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00201DB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00201DB4: jr          $ra
    // 0x00201DB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00201DB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004470A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004470A0: lw          $v0, 0x514($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X514);
    // 0x004470A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004470A8: jr          $ra
    // 0x004470AC: sw          $v0, 0x514($a1)
    MEM_W(0X514, ctx->r5) = ctx->r2;
    return;
    // 0x004470AC: sw          $v0, 0x514($a1)
    MEM_W(0X514, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_0029B540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029B544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029B548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029B54C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029B550: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0029B554: andi        $v0, $s0, 0x3
    ctx->r2 = ctx->r16 & 0X3;
    // 0x0029B558: beq         $v0, $zero, L_0029B578
    if (ctx->r2 == 0) {
        // 0x0029B55C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_0029B578;
    }
    // 0x0029B55C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029B560: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0029B564: addiu       $a0, $a0, -0x56E0
    ctx->r4 = ADD32(ctx->r4, -0X56E0);
    // 0x0029B568: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029B56C: addiu       $a1, $a1, -0x56DC
    ctx->r5 = ADD32(ctx->r5, -0X56DC);
    // 0x0029B570: jal         0x0029B020
    // 0x0029B574: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x0029B574: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_0:
L_0029B578:
    // 0x0029B578: jal         0x0029A140
    // 0x0029B57C: nop

    func_0029A140(rdram, ctx);
        goto after_1;
    // 0x0029B57C: nop

    after_1:
    // 0x0029B580: bnel        $v0, $zero, L_0029B598
    if (ctx->r2 != 0) {
        // 0x0029B584: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029B598;
    }
    goto skip_0;
    // 0x0029B584: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x0029B588: lui         $v0, 0xA000
    ctx->r2 = S32(0XA000 << 16);
    // 0x0029B58C: or          $v0, $s0, $v0
    ctx->r2 = ctx->r16 | ctx->r2;
    // 0x0029B590: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x0029B594: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029B598:
    // 0x0029B598: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029B59C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029B5A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029B5A4: jr          $ra
    // 0x0029B5A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029B5A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00269048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269048: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0026904C: jal         0x0026D128
    // 0x00269050: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    func_0026D128(rdram, ctx);
        goto after_0;
    // 0x00269050: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    after_0:
    // 0x00269054: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00269058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026905C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00269060: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00269064: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00269068: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0026906C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00269070: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00269074: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00269078: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0026907C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00269080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00269084: bne         $v1, $v0, L_002690CC
    if (ctx->r3 != ctx->r2) {
        // 0x00269088: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_002690CC;
    }
    // 0x00269088: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0026908C: lw          $v1, 0x140($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X140);
    // 0x00269090: andi        $v0, $v1, 0x280
    ctx->r2 = ctx->r3 & 0X280;
    // 0x00269094: beq         $v0, $zero, L_002690A4
    if (ctx->r2 == 0) {
        // 0x00269098: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_002690A4;
    }
    // 0x00269098: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x0026909C: j           L_002690BC
    // 0x002690A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_002690BC;
    // 0x002690A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_002690A4:
    // 0x002690A4: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x002690A8: beq         $v0, $zero, L_002690BC
    if (ctx->r2 == 0) {
        // 0x002690AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002690BC;
    }
    // 0x002690AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002690B0: jal         0x002685F0
    // 0x002690B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002685F0(rdram, ctx);
        goto after_1;
    // 0x002690B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002690B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_002690BC:
    // 0x002690BC: lw          $v1, 0x140($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X140);
    // 0x002690C0: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x002690C4: j           L_002690D4
    // 0x002690C8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
        goto L_002690D4;
    // 0x002690C8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_002690CC:
    // 0x002690CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002690D0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_002690D4:
    // 0x002690D4: bnel        $v1, $zero, L_002690F8
    if (ctx->r3 != 0) {
        // 0x002690D8: sw          $zero, 0x24($s0)
        MEM_W(0X24, ctx->r16) = 0;
            goto L_002690F8;
    }
    goto skip_0;
    // 0x002690D8: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    skip_0:
    // 0x002690DC: bne         $a0, $zero, L_00269104
    if (ctx->r4 != 0) {
        // 0x002690E0: nop
    
            goto L_00269104;
    }
    // 0x002690E0: nop

    // 0x002690E4: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002690E8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x002690EC: bne         $v0, $zero, L_00269104
    if (ctx->r2 != 0) {
        // 0x002690F0: nop
    
            goto L_00269104;
    }
    // 0x002690F0: nop

    // 0x002690F4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_002690F8:
    // 0x002690F8: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x002690FC: j           L_00269484
    // 0x00269100: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
        goto L_00269484;
    // 0x00269100: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
L_00269104:
    // 0x00269104: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x00269108: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0026910C: beql        $v0, $zero, L_00269344
    if (ctx->r2 == 0) {
        // 0x00269110: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00269344;
    }
    goto skip_1;
    // 0x00269110: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_1:
    // 0x00269114: beq         $s3, $zero, L_00269340
    if (ctx->r19 == 0) {
        // 0x00269118: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00269340;
    }
    // 0x00269118: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026911C: lb          $v0, 0x5F($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5F);
    // 0x00269120: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269124: lwc1        $f1, 0x7EF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EF0);
    // 0x00269128: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0026912C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269130: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269134: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00269138: lb          $v0, 0x60($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X60);
    // 0x0026913C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00269140: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269144: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269148: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0026914C: lb          $v0, 0x61($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X61);
    // 0x00269150: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00269154: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269158: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026915C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00269160: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x00269164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269168: lwc1        $f1, 0x7EF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EF4);
    // 0x0026916C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00269170: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269174: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269178: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0026917C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269180: lwc1        $f1, 0x7EF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EF8);
    // 0x00269184: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00269188: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026918C: lwc1        $f1, 0x7EFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EFC);
    // 0x00269190: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269194: jal         0x0020EF60
    // 0x00269198: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x00269198: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_2:
    // 0x0026919C: lhu         $v1, 0x52($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X52);
    // 0x002691A0: andi        $v0, $v1, 0x600
    ctx->r2 = ctx->r3 & 0X600;
    // 0x002691A4: beq         $v0, $zero, L_002691D0
    if (ctx->r2 == 0) {
        // 0x002691A8: andi        $v0, $v1, 0x400
        ctx->r2 = ctx->r3 & 0X400;
            goto L_002691D0;
    }
    // 0x002691A8: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x002691AC: bnel        $v0, $zero, L_002691B4
    if (ctx->r2 != 0) {
        // 0x002691B0: neg.s       $f20, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
            goto L_002691B4;
    }
    goto skip_2;
    // 0x002691B0: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    skip_2:
L_002691B4:
    // 0x002691B4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002691B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002691BC: bne         $v1, $v0, L_002691D0
    if (ctx->r3 != ctx->r2) {
        // 0x002691C0: nop
    
            goto L_002691D0;
    }
    // 0x002691C0: nop

    // 0x002691C4: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x002691C8: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x002691CC: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
L_002691D0:
    // 0x002691D0: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002691D4: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002691D8: beq         $v0, $zero, L_0026934C
    if (ctx->r2 == 0) {
        // 0x002691DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026934C;
    }
    // 0x002691DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002691E0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002691E4: bne         $v1, $v0, L_0026934C
    if (ctx->r3 != ctx->r2) {
        // 0x002691E8: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_0026934C;
    }
    // 0x002691E8: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x002691EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002691F0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x002691F4: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x002691F8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x002691FC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00269200: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00269204: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00269208: jal         0x0020EAA0
    // 0x0026920C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0020EAA0(rdram, ctx);
        goto after_3;
    // 0x0026920C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x00269210: lwc1        $f1, 0x50($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X50);
    // 0x00269214: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00269218: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026921C: nop

    // 0x00269220: bc1t        L_00269334
    if (c1cs) {
        // 0x00269224: swc1        $f1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00269334;
    }
    // 0x00269224: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00269228: jal         0x00210EF0
    // 0x0026922C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00210EF0(rdram, ctx);
        goto after_4;
    // 0x0026922C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x00269230: jal         0x00210EF0
    // 0x00269234: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_00210EF0(rdram, ctx);
        goto after_5;
    // 0x00269234: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x00269238: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0026923C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00269240: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x00269244: nop

    // 0x00269248: bc1f        L_00269268
    if (!c1cs) {
        // 0x0026924C: nop
    
            goto L_00269268;
    }
    // 0x0026924C: nop

    // 0x00269250: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269254: lwc1        $f0, 0x7F00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F00);
    // 0x00269258: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0026925C: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x00269260: j           L_0026927C
    // 0x00269264: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
        goto L_0026927C;
    // 0x00269264: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
L_00269268:
    // 0x00269268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026926C: lwc1        $f0, 0x7F04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F04);
    // 0x00269270: sub.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00269274: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x00269278: sub.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f3.fl;
L_0026927C:
    // 0x0026927C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00269280: nop

    // 0x00269284: bc1tl       L_0026928C
    if (c1cs) {
        // 0x00269288: swc1        $f3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_0026928C;
    }
    goto skip_3;
    // 0x00269288: swc1        $f3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    skip_3:
L_0026928C:
    // 0x0026928C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00269290: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00269294: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00269298: nop

    // 0x0026929C: bc1f        L_002692E4
    if (!c1cs) {
        // 0x002692A0: nop
    
            goto L_002692E4;
    }
    // 0x002692A0: nop

    // 0x002692A4: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x002692A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002692AC: lwc1        $f1, 0x25F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X25F4);
    // 0x002692B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002692B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002692B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002692C0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002692C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002692CC: lwc1        $f1, 0x7F08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7F08);
    // 0x002692D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692D4: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x002692D8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002692DC: j           L_00269320
    // 0x002692E0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
        goto L_00269320;
    // 0x002692E0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_002692E4:
    // 0x002692E4: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x002692E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002692EC: lwc1        $f1, 0x25F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X25F4);
    // 0x002692F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002692F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002692F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269300: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00269304: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269308: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026930C: lwc1        $f1, 0x7F0C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7F0C);
    // 0x00269310: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269314: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00269318: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x0026931C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_00269320:
    // 0x00269320: nop

    // 0x00269324: bc1tl       L_0026932C
    if (c1cs) {
        // 0x00269328: swc1        $f2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
            goto L_0026932C;
    }
    goto skip_4;
    // 0x00269328: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    skip_4:
L_0026932C:
    // 0x0026932C: jal         0x00210EF0
    // 0x00269330: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00210EF0(rdram, ctx);
        goto after_6;
    // 0x00269330: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_6:
L_00269334:
    // 0x00269334: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00269338: j           L_0026934C
    // 0x0026933C: swc1        $f0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f0.u32l;
        goto L_0026934C;
    // 0x0026933C: swc1        $f0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f0.u32l;
L_00269340:
    // 0x00269340: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00269344:
    // 0x00269344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00269348: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_0026934C:
    // 0x0026934C: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x00269350: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269354: lwc1        $f1, 0x25F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X25F0);
    // 0x00269358: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0026935C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269360: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269364: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269368: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0026936C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269370: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00269374: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00269378: nop

    // 0x0026937C: bc1tl       L_002693B4
    if (c1cs) {
        // 0x00269380: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002693B4;
    }
    goto skip_5;
    // 0x00269380: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
    // 0x00269384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269388: lwc1        $f2, 0x7F10($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7F10);
    // 0x0026938C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00269390: nop

    // 0x00269394: bc1tl       L_002693B4
    if (c1cs) {
        // 0x00269398: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_002693B4;
    }
    goto skip_6;
    // 0x00269398: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_6:
    // 0x0026939C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002693A0: nop

    // 0x002693A4: bc1tl       L_002693B4
    if (c1cs) {
        // 0x002693A8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002693B4;
    }
    goto skip_7;
    // 0x002693A8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_7:
    // 0x002693AC: j           L_002693B8
    // 0x002693B0: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
        goto L_002693B8;
    // 0x002693B0: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
L_002693B4:
    // 0x002693B4: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
L_002693B8:
    // 0x002693B8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x002693BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002693C0: jal         0x0020EF8C
    // 0x002693C4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_0020EF8C(rdram, ctx);
        goto after_7;
    // 0x002693C4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x002693C8: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x002693CC: lwc1        $f1, 0x24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x002693D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002693D4: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x002693D8: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x002693DC: lwc1        $f1, 0x2C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X2C);
    // 0x002693E0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002693E4: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x002693E8: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002693EC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x002693F0: beq         $v0, $zero, L_00269464
    if (ctx->r2 == 0) {
        // 0x002693F4: nop
    
            goto L_00269464;
    }
    // 0x002693F4: nop

    // 0x002693F8: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002693FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00269400: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00269404: nop

    // 0x00269408: bc1t        L_00269418
    if (c1cs) {
        // 0x0026940C: nop
    
            goto L_00269418;
    }
    // 0x0026940C: nop

    // 0x00269410: j           L_00269434
    // 0x00269414: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_00269434;
    // 0x00269414: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00269418:
    // 0x00269418: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x0026941C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00269420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269424: lwc1        $f2, 0x7F14($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7F14);
    // 0x00269428: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026942C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00269430: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
L_00269434:
    // 0x00269434: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x00269438: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026943C: lwc1        $f0, 0x7F18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F18);
    // 0x00269440: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00269444: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x00269448: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026944C: lwc1        $f0, 0x7F1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F1C);
    // 0x00269450: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00269454: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00269458: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026945C: j           L_00269484
    // 0x00269460: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_00269484;
    // 0x00269460: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00269464:
    // 0x00269464: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00269468: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x0026946C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269470: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269474: lwc1        $f2, 0x7F20($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7F20);
    // 0x00269478: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026947C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00269480: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00269484:
    // 0x00269484: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00269488: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0026948C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00269490: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00269494: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00269498: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0026949C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x002694A0: jr          $ra
    // 0x002694A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x002694A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0045F6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F6C0: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x0045F6C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F6C8: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0045F6CC: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F6D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F6D4: bne         $v1, $v0, L_0045F72C
    if (ctx->r3 != ctx->r2) {
        // 0x0045F6D8: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0045F72C;
    }
    // 0x0045F6D8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0045F6DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F6E0: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0045F6E4: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x0045F6E8: bnel        $v0, $zero, L_0045F71C
    if (ctx->r2 != 0) {
        // 0x0045F6EC: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_0045F71C;
    }
    goto skip_0;
    // 0x0045F6EC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x0045F6F0: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x0045F6F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045F6F8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045F6FC: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x0045F700: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045F704: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045F708: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0045F70C: bltzl       $v0, L_0045F714
    if (SIGNED(ctx->r2) < 0) {
        // 0x0045F710: addiu       $v0, $v0, 0xFF
        ctx->r2 = ADD32(ctx->r2, 0XFF);
            goto L_0045F714;
    }
    goto skip_1;
    // 0x0045F710: addiu       $v0, $v0, 0xFF
    ctx->r2 = ADD32(ctx->r2, 0XFF);
    skip_1:
L_0045F714:
    // 0x0045F714: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x0045F718: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0045F71C:
    // 0x0045F71C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0045F720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F728: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
L_0045F72C:
    // 0x0045F72C: jr          $ra
    // 0x0045F730: nop

    return;
    // 0x0045F730: nop

;}
RECOMP_FUNC void func_004056DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004056DC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x004056E0: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x004056E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004056E8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004056EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004056F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004056F4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004056F8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004056FC: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00405700: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00405704: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x00405708: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x0040570C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405710: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00405714: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00405718: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0040571C: jal         0x00246108
    // 0x00405720: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00405720: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00405724: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00405728: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0040572C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405730: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00405734: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00405738: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040573C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00405740: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00405744: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00405748: bne         $v1, $v0, L_00405778
    if (ctx->r3 != ctx->r2) {
        // 0x0040574C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00405778;
    }
    // 0x0040574C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00405750: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00405754: beq         $v0, $zero, L_00405778
    if (ctx->r2 == 0) {
        // 0x00405758: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00405778;
    }
    // 0x00405758: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0040575C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00405760: bne         $v0, $zero, L_00405924
    if (ctx->r2 != 0) {
        // 0x00405764: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00405924;
    }
    // 0x00405764: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00405768: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040576C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00405770: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00405774: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00405778:
    // 0x00405778: bne         $v1, $v0, L_004057B8
    if (ctx->r3 != ctx->r2) {
        // 0x0040577C: nop
    
            goto L_004057B8;
    }
    // 0x0040577C: nop

    // 0x00405780: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00405784: beq         $v0, $zero, L_004057B8
    if (ctx->r2 == 0) {
        // 0x00405788: nop
    
            goto L_004057B8;
    }
    // 0x00405788: nop

    // 0x0040578C: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x00405790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00405794: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00405798: nop

    // 0x0040579C: bc1f        L_004057B8
    if (!c1cs) {
        // 0x004057A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004057B8;
    }
    // 0x004057A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004057A4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x004057A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004057AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004057B0: j           L_00405934
    // 0x004057B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_00405934;
    // 0x004057B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_004057B8:
    // 0x004057B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004057BC: addiu       $a0, $a0, -0x61C
    ctx->r4 = ADD32(ctx->r4, -0X61C);
    // 0x004057C0: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x004057C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004057C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x004057CC: nop

    // 0x004057D0: bc1f        L_004057E8
    if (!c1cs) {
        // 0x004057D4: nop
    
            goto L_004057E8;
    }
    // 0x004057D4: nop

    // 0x004057D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004057DC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004057E0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004057E4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_004057E8:
    // 0x004057E8: lbu         $v0, -0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X3);
    // 0x004057EC: beq         $v0, $zero, L_004058F0
    if (ctx->r2 == 0) {
        // 0x004057F0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_004058F0;
    }
    // 0x004057F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004057F4: lw          $v1, -0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, -0XC);
    // 0x004057F8: beq         $v1, $v0, L_004058F0
    if (ctx->r3 == ctx->r2) {
        // 0x004057FC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004058F0;
    }
    // 0x004057FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405800: lw          $a0, 0x20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20);
    // 0x00405804: bnel        $a0, $v0, L_004058DC
    if (ctx->r4 != ctx->r2) {
        // 0x00405808: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004058DC;
    }
    goto skip_0;
    // 0x00405808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0040580C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405810: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x00405814: beq         $v1, $a0, L_00405844
    if (ctx->r3 == ctx->r4) {
        // 0x00405818: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00405844;
    }
    // 0x00405818: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0040581C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405820: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405824: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x00405828: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040582C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405830: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00405834: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405838: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x0040583C: j           L_00405850
    // 0x00405840: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
        goto L_00405850;
    // 0x00405840: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_00405844:
    // 0x00405844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405848: swc1        $f2, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f2.u32l;
    // 0x0040584C: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_00405850:
    // 0x00405850: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405854: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405858: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040585C: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x00405860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405864: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405868: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040586C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405870: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405878: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x0040587C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405880: bne         $v0, $s0, L_00405890
    if (ctx->r2 != ctx->r16) {
        // 0x00405884: nop
    
            goto L_00405890;
    }
    // 0x00405884: nop

    // 0x00405888: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040588C: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00405890:
    // 0x00405890: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405894: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405898: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040589C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004058A0: lwc1        $f14, 0x464($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X464);
    // 0x004058A4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004058A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004058AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004058B0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004058B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004058B8: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x004058BC: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x004058C0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004058C4: jal         0x002119FC
    // 0x004058C8: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x004058C8: nop

    after_1:
    // 0x004058CC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004058D0: nop

    // 0x004058D4: bc1t        L_00405850
    if (c1cs) {
        // 0x004058D8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405850;
    }
    // 0x004058D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004058DC:
    // 0x004058DC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x004058E0: jal         0x00404C44
    // 0x004058E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00404C44(rdram, ctx);
        goto after_2;
    // 0x004058E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004058E8: bne         $v0, $zero, L_0040593C
    if (ctx->r2 != 0) {
        // 0x004058EC: nop
    
            goto L_0040593C;
    }
    // 0x004058EC: nop

L_004058F0:
    // 0x004058F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004058F4: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x004058F8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x004058FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00405900: bne         $v1, $v0, L_0040593C
    if (ctx->r3 != ctx->r2) {
        // 0x00405904: nop
    
            goto L_0040593C;
    }
    // 0x00405904: nop

    // 0x00405908: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0040590C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405910: lwc1        $f0, 0x468($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X468);
    // 0x00405914: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00405918: nop

    // 0x0040591C: bc1f        L_0040593C
    if (!c1cs) {
        // 0x00405920: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040593C;
    }
    // 0x00405920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00405924:
    // 0x00405924: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00405928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040592C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00405930: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00405934:
    // 0x00405934: jal         0x00243414
    // 0x00405938: nop

    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00405938: nop

    after_3:
L_0040593C:
    // 0x0040593C: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00405940: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405944: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405948: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040594C: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00405950: jr          $ra
    // 0x00405954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_0029DFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DFCC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // turok2: reconnected split function: a stray ELF symbol at 0x0029DFD0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029DFD0(rdram, ctx);
;}
RECOMP_FUNC void func_00444A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444A48: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444A4C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00444A50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444A54: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444A58: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444A5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444A60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00444A64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444A68: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00444A6C: jal         0x00246108
    // 0x00444A70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444A70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444A74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444A78: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444A7C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444A80: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444A84: jal         0x00245BAC
    // 0x00444A88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444A88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444A8C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444A90: beq         $v0, $zero, L_00444AA4
    if (ctx->r2 == 0) {
        // 0x00444A94: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444AA4;
    }
    // 0x00444A94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444A98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444A9C: jal         0x00243414
    // 0x00444AA0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444AA0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_00444AA4:
    // 0x00444AA4: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444AA8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444AAC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444AB0: jr          $ra
    // 0x00444AB4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444AB4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00204DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00204DE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00204DE8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00204DEC: addiu       $s0, $s0, -0x7214
    ctx->r16 = ADD32(ctx->r16, -0X7214);
    // 0x00204DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00204DF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00204DF8: beq         $v0, $zero, L_00204E04
    if (ctx->r2 == 0) {
        // 0x00204DFC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00204E04;
    }
    // 0x00204DFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00204E00: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00204E04:
    // 0x00204E04: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00204E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00204E0C: jal         0x0029DFF0
    // 0x00204E10: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00204E10: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    after_0:
    // 0x00204E14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00204E18: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204E1C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00204E24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00204E28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204E2C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204E30: beql        $v1, $v0, L_00204E58
    if (ctx->r3 == ctx->r2) {
        // 0x00204E34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00204E58;
    }
    goto skip_0;
    // 0x00204E34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x00204E38: jal         0x0029E010
    // 0x00204E3C: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00204E3C: nop

    after_1:
    // 0x00204E40: addiu       $a0, $s0, -0x3C
    ctx->r4 = ADD32(ctx->r16, -0X3C);
    // 0x00204E44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204E48: jal         0x0029B6F0
    // 0x00204E4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00204E4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00204E50: j           L_00204E60
    // 0x00204E54: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_00204E60;
    // 0x00204E54: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00204E58:
    // 0x00204E58: jal         0x0029E010
    // 0x00204E5C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00204E5C: nop

    after_3:
L_00204E60:
    // 0x00204E60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00204E64:
    // 0x00204E64: jal         0x00203330
    // 0x00204E68: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_00203330(rdram, ctx);
        goto after_4;
    // 0x00204E68: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_4:
    // 0x00204E6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00204E70: slti        $v0, $s0, 0xA
    ctx->r2 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x00204E74: bne         $v0, $zero, L_00204E64
    if (ctx->r2 != 0) {
        // 0x00204E78: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00204E64;
    }
    // 0x00204E78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00204E7C: jal         0x0029DFF0
    // 0x00204E80: nop

    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x00204E80: nop

    after_5:
    // 0x00204E84: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204E88: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204E8C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00204E90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204E94: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204E98: beq         $v1, $zero, L_00204EC4
    if (ctx->r3 == 0) {
        // 0x00204E9C: nop
    
            goto L_00204EC4;
    }
    // 0x00204E9C: nop

    // 0x00204EA0: jal         0x0029E010
    // 0x00204EA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00204EA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00204EA8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204EAC: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00204EB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204EB4: jal         0x0029B820
    // 0x00204EB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00204EB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00204EBC: j           L_00204ECC
    // 0x00204EC0: nop

        goto L_00204ECC;
    // 0x00204EC0: nop

L_00204EC4:
    // 0x00204EC4: jal         0x0029E010
    // 0x00204EC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00204EC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_00204ECC:
    // 0x00204ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00204ED0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00204ED4: jr          $ra
    // 0x00204ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00204ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002325F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002325F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002325F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002325F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002325FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00232600: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00232604: beq         $a1, $zero, L_00232638
    if (ctx->r5 == 0) {
        // 0x00232608: nop
    
            goto L_00232638;
    }
    // 0x00232608: nop

    // 0x0023260C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00232610: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00232614: beq         $v0, $zero, L_00232674
    if (ctx->r2 == 0) {
        // 0x00232618: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232674;
    }
    // 0x00232618: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023261C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00232620: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00232624: jal         0x0022425C
    // 0x00232628: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00232628: nop

    after_0:
    // 0x0023262C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00232630: bne         $a0, $zero, L_00232648
    if (ctx->r4 != 0) {
        // 0x00232634: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00232648;
    }
    // 0x00232634: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
L_00232638:
    // 0x00232638: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0023263C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x00232640: j           L_00232674
    // 0x00232644: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
        goto L_00232674;
    // 0x00232644: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_00232648:
    // 0x00232648: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0023264C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00232650: bne         $v0, $zero, L_00232674
    if (ctx->r2 != 0) {
        // 0x00232654: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232674;
    }
    // 0x00232654: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232658: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0023265C: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00232660: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00232664: nop

    // 0x00232668: bc1t        L_00232674
    if (c1cs) {
        // 0x0023266C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00232674;
    }
    // 0x0023266C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00232670: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232674:
    // 0x00232674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00232678: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023267C: jr          $ra
    // 0x00232680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00232680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044EFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004160C8:
    // 0x0044EFB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0044EFBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0044EFC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0044EFC4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0044EFC8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0044EFCC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0044EFD0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0044EFD4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0044EFD8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0044EFDC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0044EFE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0044EFE4: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x0044EFE8: beq         $s1, $zero, L_0044F0C4
    if (ctx->r17 == 0) {
        // 0x0044EFEC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0044F0C4;
    }
    // 0x0044EFEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044EFF0: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x0044EFF4: lw          $s3, 0x20($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X20);
    // 0x0044EFF8: lw          $s4, 0x1C($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X1C);
    // 0x0044EFFC: lw          $s5, 0x20($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X20);
    // 0x0044F000: lw          $s6, 0x24($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X24);
    // 0x0044F004: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0044F008: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044F00C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0044F010: blez        $v1, L_0044F048
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0044F014: addiu       $a1, $v0, 0x1D8
        ctx->r5 = ADD32(ctx->r2, 0X1D8);
            goto L_0044F048;
    }
    // 0x0044F014: addiu       $a1, $v0, 0x1D8
    ctx->r5 = ADD32(ctx->r2, 0X1D8);
    // 0x0044F018: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0044F01C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0044F020: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_0044F024:
    // 0x0044F024: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0044F028: bne         $v0, $t0, L_0044F034
    if (ctx->r2 != ctx->r8) {
        // 0x0044F02C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0044F034;
    }
    // 0x0044F02C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044F030: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_0044F034:
    // 0x0044F034: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x0044F038: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0044F03C: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0044F040: bne         $v0, $zero, L_0044F024
    if (ctx->r2 != 0) {
        // 0x0044F044: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_0044F024;
    }
    // 0x0044F044: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_0044F048:
    // 0x0044F048: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044F04C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0044F050: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x0044F054: jal         0x00204EDC
    // 0x0044F058: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0044F058: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x0044F05C: beql        $v0, $zero, L_0044F0C8
    if (ctx->r2 == 0) {
        // 0x0044F060: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0044F0C8;
    }
    goto skip_0;
    // 0x0044F060: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0044F064: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0044F068: beq         $s0, $zero, L_0044F0C4
    if (ctx->r16 == 0) {
        // 0x0044F06C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044F0C4;
    }
    // 0x0044F06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044F070: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044F074: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0044F078: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044F07C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0044F080: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0044F084: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x0044F088: jal         0x00414EA8
    // 0x0044F08C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0044F08C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x0044F090: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044F094: jal         0x00200518
    // 0x0044F098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x0044F098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044F09C: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x0044F0A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0044F0A4: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x0044F0A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044F0AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0044F0B0: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x0044F0B4: beql        $v0, $zero, L_0044F0BC
    if (ctx->r2 == 0) {
        // 0x0044F0B8: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_0044F0BC;
    }
    goto skip_1;
    // 0x0044F0B8: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_1:
L_0044F0BC:
    // 0x0044F0BC: j           L_004160C8
    // 0x0044F0C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    entry_004160C8(rdram, ctx);
    return;
    // 0x0044F0C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F0C4:
    // 0x0044F0C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0044F0C8:
    // 0x0044F0C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0044F0CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0044F0D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0044F0D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0044F0D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0044F0DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0044F0E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0044F0E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0044F0E8: jr          $ra
    // 0x0044F0EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0044F0EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0044FC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FC6C: jr          $ra
    // 0x0044FC70: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0044FC70: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_00451214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451214: jr          $ra
    // 0x00451218: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00451218: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0027AD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027AD04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0027AD08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027AD0C: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x0027AD10: jal         0x00277328
    // 0x0027AD14: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    func_00277328(rdram, ctx);
        goto after_0;
    // 0x0027AD14: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_0:
    // 0x0027AD18: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027AD1C: jr          $ra
    // 0x0027AD20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027AD20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00296750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296750: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00296754: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00296758: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0029675C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x00296760: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x00296764: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00296768: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0029676C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00296770: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00296774: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00296778: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0029677C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x00296780: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00296784: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00296788: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0029678C: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x00296790: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x00296794: bne         $s0, $zero, L_002967B4
    if (ctx->r16 != 0) {
        // 0x00296798: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_002967B4;
    }
    // 0x00296798: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0029679C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x002967A0: addiu       $a0, $a0, -0x5940
    ctx->r4 = ADD32(ctx->r4, -0X5940);
    // 0x002967A4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002967A8: addiu       $a1, $a1, -0x593C
    ctx->r5 = ADD32(ctx->r5, -0X593C);
    // 0x002967AC: jal         0x0029B020
    // 0x002967B0: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x002967B0: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    after_0:
L_002967B4:
    // 0x002967B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002967B8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x002967BC: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x002967C0: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x002967C4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x002967C8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002967CC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002967D0: addiu       $s5, $zero, 0x140
    ctx->r21 = ADD32(0, 0X140);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x002967D4: jalr        $v0
    // 0x002967D8: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_1;
    // 0x002967D8: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    after_1:
    // 0x002967DC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002967E0: addu        $t0, $s1, $zero
    ctx->r8 = ADD32(ctx->r17, 0);
    // 0x002967E4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x002967E8: addu        $t1, $s1, $zero
    ctx->r9 = ADD32(ctx->r17, 0);
    // 0x002967EC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x002967F0: lui         $t3, 0xC00
    ctx->r11 = S32(0XC00 << 16);
    // 0x002967F4: ori         $t3, $t3, 0xDA83
    ctx->r11 = ctx->r11 | 0XDA83;
    // 0x002967F8: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x002967FC: ori         $t2, $t2, 0x6C0
    ctx->r10 = ctx->r10 | 0X6C0;
    // 0x00296800: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x00296804: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00296808: lui         $a3, 0xC00
    ctx->r7 = S32(0XC00 << 16);
    // 0x0029680C: ori         $a3, $a3, 0x5A82
    ctx->r7 = ctx->r7 | 0X5A82;
    // 0x00296810: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x00296814: ori         $a1, $a1, 0x6C0
    ctx->r5 = ctx->r5 | 0X6C0;
    // 0x00296818: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029681C: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x00296820: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x00296824: sll         $s0, $s7, 1
    ctx->r16 = S32(ctx->r23 << 1);
    // 0x00296828: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0029682C: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x00296830: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x00296834: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x00296838: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
    // 0x0029683C: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x00296840: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x00296844: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00296848: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x0029684C: jal         0x00296EC8
    // 0x00296850: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_00296EC8(rdram, ctx);
        goto after_2;
    // 0x00296850: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_2:
    // 0x00296854: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00296858: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x0029685C: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x00296860: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x00296864: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00296868: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x0029686C: lbu         $v0, 0x24($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X24);
    // 0x00296870: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00296874: beq         $v0, $zero, L_00296A64
    if (ctx->r2 == 0) {
        // 0x00296878: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_00296A64;
    }
    // 0x00296878: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_0029687C:
    // 0x0029687C: lhu         $t4, 0x1E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1E);
    // 0x00296880: lw          $a0, 0x18($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X18);
    // 0x00296884: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x00296888: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029688C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00296890: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00296894: lw          $v0, 0x20($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X20);
    // 0x00296898: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0029689C: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x002968A0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x002968A4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x002968A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x002968AC: subu        $s4, $a0, $v1
    ctx->r20 = SUB32(ctx->r4, ctx->r3);
    // 0x002968B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002968B4: bne         $s4, $s2, L_002968CC
    if (ctx->r20 != ctx->r18) {
        // 0x002968B8: subu        $fp, $a0, $v0
        ctx->r30 = SUB32(ctx->r4, ctx->r2);
            goto L_002968CC;
    }
    // 0x002968B8: subu        $fp, $a0, $v0
    ctx->r30 = SUB32(ctx->r4, ctx->r2);
    // 0x002968BC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x002968C0: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x002968C4: j           L_002968EC
    // 0x002968C8: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
        goto L_002968EC;
    // 0x002968C8: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
L_002968CC:
    // 0x002968CC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002968D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002968D4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x002968D8: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x002968DC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x002968E0: jal         0x0029704C
    // 0x002968E4: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_0029704C(rdram, ctx);
        goto after_3;
    // 0x002968E4: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_3:
    // 0x002968E8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_002968EC:
    // 0x002968EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002968F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002968F4: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x002968F8: sra         $s2, $v0, 16
    ctx->r18 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002968FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00296900: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x00296904: jal         0x00296CD0
    // 0x00296908: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_00296CD0(rdram, ctx);
        goto after_4;
    // 0x00296908: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_4:
    // 0x0029690C: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x00296910: beq         $v1, $zero, L_0029696C
    if (ctx->r3 == 0) {
        // 0x00296914: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0029696C;
    }
    // 0x00296914: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00296918: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0029691C: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x00296920: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    // 0x00296924: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00296928: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x0029692C: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x00296930: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00296934: or          $v1, $v1, $t4
    ctx->r3 = ctx->r3 | ctx->r12;
    // 0x00296938: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0029693C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00296940: bne         $v0, $zero, L_0029696C
    if (ctx->r2 != 0) {
        // 0x00296944: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_0029696C;
    }
    // 0x00296944: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00296948: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0029694C: bne         $v0, $zero, L_0029696C
    if (ctx->r2 != 0) {
        // 0x00296950: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0029696C;
    }
    // 0x00296950: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00296954: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00296958: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x0029695C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00296960: jal         0x00296EC8
    // 0x00296964: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_00296EC8(rdram, ctx);
        goto after_5;
    // 0x00296964: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_5:
    // 0x00296968: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_0029696C:
    // 0x0029696C: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x00296970: beq         $v0, $zero, L_002969BC
    if (ctx->r2 == 0) {
        // 0x00296974: addu        $t1, $s1, $zero
        ctx->r9 = ADD32(ctx->r17, 0);
            goto L_002969BC;
    }
    // 0x00296974: addu        $t1, $s1, $zero
    ctx->r9 = ADD32(ctx->r17, 0);
    // 0x00296978: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0029697C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00296980: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00296984: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x00296988: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0029698C: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x00296990: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x00296994: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x00296998: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0029699C: lhu         $v1, 0xA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XA);
    // 0x002969A0: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x002969A4: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x002969A8: or          $v1, $v1, $t4
    ctx->r3 = ctx->r3 | ctx->r12;
    // 0x002969AC: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x002969B0: jal         0x00296EC8
    // 0x002969B4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_00296EC8(rdram, ctx);
        goto after_6;
    // 0x002969B4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_6:
    // 0x002969B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_002969BC:
    // 0x002969BC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x002969C0: beq         $a0, $zero, L_002969DC
    if (ctx->r4 == 0) {
        // 0x002969C4: sll         $a1, $s5, 16
        ctx->r5 = S32(ctx->r21 << 16);
            goto L_002969DC;
    }
    // 0x002969C4: sll         $a1, $s5, 16
    ctx->r5 = S32(ctx->r21 << 16);
    // 0x002969C8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x002969CC: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x002969D0: jal         0x002971BC
    // 0x002969D4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_002971BC(rdram, ctx);
        goto after_7;
    // 0x002969D4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_7:
    // 0x002969D8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_002969DC:
    // 0x002969DC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x002969E0: bne         $v0, $zero, L_00296A04
    if (ctx->r2 != 0) {
        // 0x002969E4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00296A04;
    }
    // 0x002969E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002969E8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002969EC: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x002969F0: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x002969F4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x002969F8: jal         0x00296EC8
    // 0x002969FC: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_00296EC8(rdram, ctx);
        goto after_8;
    // 0x002969FC: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_8:
    // 0x00296A00: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00296A04:
    // 0x00296A04: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x00296A08: beq         $v0, $zero, L_00296A30
    if (ctx->r2 == 0) {
        // 0x00296A0C: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_00296A30;
    }
    // 0x00296A0C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00296A10: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00296A14: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x00296A18: ori         $v1, $v1, 0x800
    ctx->r3 = ctx->r3 | 0X800;
    // 0x00296A1C: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x00296A20: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x00296A24: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00296A28: or          $a0, $a0, $t4
    ctx->r4 = ctx->r4 | ctx->r12;
    // 0x00296A2C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_00296A30:
    // 0x00296A30: lhu         $t4, 0x1E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1E);
    // 0x00296A34: addiu       $v1, $t4, 0x1
    ctx->r3 = ADD32(ctx->r12, 0X1);
    // 0x00296A38: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x00296A3C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00296A40: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00296A44: lw          $a0, 0x18($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X18);
    // 0x00296A48: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00296A4C: addu        $s2, $a0, $v0
    ctx->r18 = ADD32(ctx->r4, ctx->r2);
    // 0x00296A50: lbu         $v0, 0x24($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X24);
    // 0x00296A54: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x00296A58: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00296A5C: bne         $v1, $zero, L_0029687C
    if (ctx->r3 != 0) {
        // 0x00296A60: nop
    
            goto L_0029687C;
    }
    // 0x00296A60: nop

L_00296A64:
    // 0x00296A64: sll         $a2, $s7, 1
    ctx->r6 = S32(ctx->r23 << 1);
    // 0x00296A68: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x00296A6C: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x00296A70: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    // 0x00296A74: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00296A78: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00296A7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00296A80: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x00296A84: beq         $v0, $zero, L_00296A94
    if (ctx->r2 == 0) {
        // 0x00296A88: sw          $a0, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r4;
            goto L_00296A94;
    }
    // 0x00296A88: sw          $a0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r4;
    // 0x00296A8C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x00296A90: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_00296A94:
    // 0x00296A94: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x00296A98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00296A9C: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x00296AA0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00296AA4: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x00296AA8: lui         $a0, 0xA00
    ctx->r4 = S32(0XA00 << 16);
    // 0x00296AAC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00296AB0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00296AB4: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x00296AB8: lui         $a0, 0x6C0
    ctx->r4 = S32(0X6C0 << 16);
    // 0x00296ABC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00296AC0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00296AC4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00296AC8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00296ACC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00296AD0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00296AD4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00296AD8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00296ADC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00296AE0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00296AE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00296AE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00296AEC: jr          $ra
    // 0x00296AF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00296AF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00294D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294D18: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00294D1C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00294D20: lwc1        $f1, 0x44($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X44);
    // 0x00294D24: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00294D28: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00294D2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00294D30: lwc1        $f1, -0x5B30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5B30);
    // 0x00294D34: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00294D38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00294D3C: lwc1        $f1, -0x5B2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5B2C);
    // 0x00294D40: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00294D44: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00294D48: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00294D4C: jr          $ra
    // 0x00294D50: nop

    return;
    // 0x00294D50: nop

;}
RECOMP_FUNC void func_0045E140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00425388:
    // 0x0045E140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0045E144: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0045E148: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0045E14C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0045E150: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0045E154: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045E158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045E15C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045E160: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0045E164: beq         $a1, $zero, L_0045E174
    if (ctx->r5 == 0) {
        // 0x0045E168: lui         $s4, 0x10
        ctx->r20 = S32(0X10 << 16);
            goto L_0045E174;
    }
    // 0x0045E168: lui         $s4, 0x10
    ctx->r20 = S32(0X10 << 16);
    // 0x0045E16C: jal         0x002052D8
    // 0x0045E170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x0045E170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0045E174:
    // 0x0045E174: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x0045E178: beq         $a1, $zero, L_0045E188
    if (ctx->r5 == 0) {
        // 0x0045E17C: nop
    
            goto L_0045E188;
    }
    // 0x0045E17C: nop

    // 0x0045E180: jal         0x002052D8
    // 0x0045E184: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0045E184: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0045E188:
    // 0x0045E188: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x0045E18C: beq         $a1, $zero, L_0045E19C
    if (ctx->r5 == 0) {
        // 0x0045E190: nop
    
            goto L_0045E19C;
    }
    // 0x0045E190: nop

    // 0x0045E194: jal         0x002052D8
    // 0x0045E198: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0045E198: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0045E19C:
    // 0x0045E19C: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x0045E1A0: beq         $a1, $zero, L_0045E1B4
    if (ctx->r5 == 0) {
        // 0x0045E1A4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0045E1B4;
    }
    // 0x0045E1A4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0045E1A8: jal         0x002052D8
    // 0x0045E1AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0045E1AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0045E1B0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0045E1B4:
    // 0x0045E1B4: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0045E1B8:
    // 0x0045E1B8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0045E1BC: beql        $a1, $zero, L_0045E1D0
    if (ctx->r5 == 0) {
        // 0x0045E1C0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0045E1D0;
    }
    goto skip_0;
    // 0x0045E1C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0045E1C4: jal         0x002052D8
    // 0x0045E1C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x0045E1C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0045E1CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0045E1D0:
    // 0x0045E1D0: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x0045E1D4: bne         $v0, $zero, L_0045E1B8
    if (ctx->r2 != 0) {
        // 0x0045E1D8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0045E1B8;
    }
    // 0x0045E1D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0045E1DC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0045E1E0: addiu       $v0, $s3, 0x8
    ctx->r2 = ADD32(ctx->r19, 0X8);
    // 0x0045E1E4: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x0045E1E8: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x0045E1EC: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x0045E1F0: sw          $zero, 0x18($s3)
    MEM_W(0X18, ctx->r19) = 0;
    // 0x0045E1F4: sw          $zero, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = 0;
L_0045E1F8:
    // 0x0045E1F8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0045E1FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0045E200: bgez        $v1, L_0045E1F8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0045E204: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_0045E1F8;
    }
    // 0x0045E204: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045E208: jal         0x00266B80
    // 0x0045E20C: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    func_00266B80(rdram, ctx);
        goto after_5;
    // 0x0045E20C: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    after_5:
    // 0x0045E210: addu        $v1, $s0, $s4
    ctx->r3 = ADD32(ctx->r16, ctx->r20);
    // 0x0045E214: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0045E218: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0045E21C: bne         $v0, $zero, L_0045E2FC
    if (ctx->r2 != 0) {
        // 0x0045E220: lui         $s2, 0x1
        ctx->r18 = S32(0X1 << 16);
            goto L_0045E2FC;
    }
    // 0x0045E220: lui         $s2, 0x1
    ctx->r18 = S32(0X1 << 16);
    // 0x0045E224: jal         0x00266B80
    // 0x0045E228: lui         $s2, 0x5
    ctx->r18 = S32(0X5 << 16);
    func_00266B80(rdram, ctx);
        goto after_6;
    // 0x0045E228: lui         $s2, 0x5
    ctx->r18 = S32(0X5 << 16);
    after_6:
    // 0x0045E22C: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x0045E230: or          $s1, $v0, $v1
    ctx->r17 = ctx->r2 | ctx->r3;
    // 0x0045E234: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045E238: subu        $a1, $s1, $s4
    ctx->r5 = SUB32(ctx->r17, ctx->r20);
    // 0x0045E23C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0045E240: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045E244: addiu       $a3, $a3, 0x1810
    ctx->r7 = ADD32(ctx->r7, 0X1810);
    // 0x0045E248: jal         0x00204FD0
    // 0x0045E24C: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    func_00204FD0(rdram, ctx);
        goto after_7;
    // 0x0045E24C: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    after_7:
    // 0x0045E250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045E254: subu        $a1, $s1, $s0
    ctx->r5 = SUB32(ctx->r17, ctx->r16);
    // 0x0045E258: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x0045E25C: ori         $a2, $a2, 0xD200
    ctx->r6 = ctx->r6 | 0XD200;
    // 0x0045E260: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045E264: addiu       $a3, $a3, 0x181C
    ctx->r7 = ADD32(ctx->r7, 0X181C);
    // 0x0045E268: jal         0x00204FD0
    // 0x0045E26C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00204FD0(rdram, ctx);
        goto after_8;
    // 0x0045E26C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_8:
    // 0x0045E270: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0045E274: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x0045E278: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0045E27C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0045E280: jal         0x00266C5C
    // 0x0045E284: ori         $a2, $a2, 0xD200
    ctx->r6 = ctx->r6 | 0XD200;
    func_00266C5C(rdram, ctx);
        goto after_9;
    // 0x0045E284: ori         $a2, $a2, 0xD200
    ctx->r6 = ctx->r6 | 0XD200;
    after_9:
    // 0x0045E288: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0045E28C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0045E290: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0045E294: jal         0x00266C5C
    // 0x0045E298: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    func_00266C5C(rdram, ctx);
        goto after_10;
    // 0x0045E298: ori         $a2, $a2, 0x4600
    ctx->r6 = ctx->r6 | 0X4600;
    after_10:
    // 0x0045E29C: sw          $s0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r16;
    // 0x0045E2A0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045E2A4: ori         $s2, $s2, 0x4600
    ctx->r18 = ctx->r18 | 0X4600;
    // 0x0045E2A8: sw          $s1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r17;
    // 0x0045E2AC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0045E2B0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045E2B4: lw          $a1, 0x2210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2210);
    // 0x0045E2B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E2BC: sw          $v0, 0xA78($at)
    MEM_W(0XA78, ctx->r1) = ctx->r2;
    // 0x0045E2C0: beq         $a1, $zero, L_0045E388
    if (ctx->r5 == 0) {
        // 0x0045E2C4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0045E388;
    }
    // 0x0045E2C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045E2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0045E2CC:
    // 0x0045E2CC: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0045E2D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0045E2D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045E2D8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045E2DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E2E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0045E2E4: sw          $v0, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r2;
    // 0x0045E2E8: sltu        $v0, $s0, $a1
    ctx->r2 = ctx->r16 < ctx->r5 ? 1 : 0;
    // 0x0045E2EC: bne         $v0, $zero, L_0045E2CC
    if (ctx->r2 != 0) {
        // 0x0045E2F0: addu        $a0, $a0, $s2
        ctx->r4 = ADD32(ctx->r4, ctx->r18);
            goto L_0045E2CC;
    }
    // 0x0045E2F0: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x0045E2F4: j           L_00425388
    // 0x0045E2F8: nop

    entry_00425388(rdram, ctx);
    return;
    // 0x0045E2F8: nop

L_0045E2FC:
    // 0x0045E2FC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0045E300: lw          $a2, 0x2210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2210);
    // 0x0045E304: ori         $s2, $s2, 0xECC0
    ctx->r18 = ctx->r18 | 0XECC0;
    // 0x0045E308: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0045E30C: mult        $a2, $s2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0045E310: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x0045E314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045E318: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045E31C: addiu       $a3, $a3, 0x182C
    ctx->r7 = ADD32(ctx->r7, 0X182C);
    // 0x0045E320: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045E324: mflo        $a2
    ctx->r6 = lo;
    // 0x0045E328: jal         0x00204FD0
    // 0x0045E32C: subu        $a1, $s1, $a2
    ctx->r5 = SUB32(ctx->r17, ctx->r6);
    func_00204FD0(rdram, ctx);
        goto after_11;
    // 0x0045E32C: subu        $a1, $s1, $a2
    ctx->r5 = SUB32(ctx->r17, ctx->r6);
    after_11:
    // 0x0045E330: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0045E334: lw          $a2, 0x2210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2210);
    // 0x0045E338: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0045E33C: beq         $a2, $zero, L_0045E370
    if (ctx->r6 == 0) {
        // 0x0045E340: sw          $a1, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->r5;
            goto L_0045E370;
    }
    // 0x0045E340: sw          $a1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r5;
    // 0x0045E344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0045E348:
    // 0x0045E348: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x0045E34C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0045E350: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045E354: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045E358: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E35C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0045E360: sw          $v0, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r2;
    // 0x0045E364: sltu        $v0, $s0, $a2
    ctx->r2 = ctx->r16 < ctx->r6 ? 1 : 0;
    // 0x0045E368: bne         $v0, $zero, L_0045E348
    if (ctx->r2 != 0) {
        // 0x0045E36C: addu        $a0, $a0, $s2
        ctx->r4 = ADD32(ctx->r4, ctx->r18);
            goto L_0045E348;
    }
    // 0x0045E36C: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
L_0045E370:
    // 0x0045E370: mult        $s2, $s0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0045E374: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0045E378: mflo        $t0
    ctx->r8 = lo;
    // 0x0045E37C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x0045E380: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E384: sw          $v0, 0xA78($at)
    MEM_W(0XA78, ctx->r1) = ctx->r2;
L_0045E388:
    // 0x0045E388: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045E38C: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x0045E390: beq         $v0, $zero, L_0045E3CC
    if (ctx->r2 == 0) {
        // 0x0045E394: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0045E3CC;
    }
    // 0x0045E394: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045E398: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0045E39C:
    // 0x0045E39C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0045E3A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E3A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045E3A8: lw          $a0, 0xA88($at)
    ctx->r4 = MEM_W(ctx->r1, 0XA88);
    // 0x0045E3AC: jal         0x00266C5C
    // 0x0045E3B0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00266C5C(rdram, ctx);
        goto after_12;
    // 0x0045E3B0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_12:
    // 0x0045E3B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045E3B8: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x0045E3BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045E3C0: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x0045E3C4: bnel        $v0, $zero, L_0045E39C
    if (ctx->r2 != 0) {
        // 0x0045E3C8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0045E39C;
    }
    goto skip_1;
    // 0x0045E3C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_1:
L_0045E3CC:
    // 0x0045E3CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0045E3D0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0045E3D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0045E3D8: lw          $a0, 0xA78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA78);
    // 0x0045E3DC: jal         0x00266C5C
    // 0x0045E3E0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00266C5C(rdram, ctx);
        goto after_13;
    // 0x0045E3E0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_13:
    // 0x0045E3E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045E3E8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0045E3EC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045E3F0: lw          $a1, 0x2214($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2214);
    // 0x0045E3F4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045E3F8: lw          $v0, 0x2218($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2218);
    // 0x0045E3FC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045E400: addiu       $a3, $a3, 0x184C
    ctx->r7 = ADD32(ctx->r7, 0X184C);
    // 0x0045E404: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0045E408: jal         0x00204EDC
    // 0x0045E40C: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    func_00204EDC(rdram, ctx);
        goto after_14;
    // 0x0045E40C: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    after_14:
    // 0x0045E410: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045E414: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x0045E418: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0045E41C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045E420: addiu       $a3, $a3, 0x185C
    ctx->r7 = ADD32(ctx->r7, 0X185C);
    // 0x0045E424: jal         0x00204EDC
    // 0x0045E428: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_15;
    // 0x0045E428: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    after_15:
    // 0x0045E42C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045E430: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x0045E434: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    // 0x0045E438: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0045E43C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045E440: addiu       $a3, $a3, 0x1864
    ctx->r7 = ADD32(ctx->r7, 0X1864);
    // 0x0045E444: jal         0x00204EDC
    // 0x0045E448: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_16;
    // 0x0045E448: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    after_16:
    // 0x0045E44C: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x0045E450: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045E454: lw          $a1, 0x2214($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2214);
    // 0x0045E458: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x0045E45C: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x0045E460: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x0045E464: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E468: sw          $v0, 0xA44($at)
    MEM_W(0XA44, ctx->r1) = ctx->r2;
    // 0x0045E46C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045E470: lw          $v0, 0x2218($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2218);
    // 0x0045E474: ori         $a0, $a0, 0x2000
    ctx->r4 = ctx->r4 | 0X2000;
    // 0x0045E478: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E47C: sw          $a0, 0xA7C($at)
    MEM_W(0XA7C, ctx->r1) = ctx->r4;
    // 0x0045E480: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x0045E484: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0045E488: lw          $a2, 0x2210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2210);
    // 0x0045E48C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0045E490: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0045E494: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0045E498: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0045E49C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E4A0: sw          $v1, 0xA80($at)
    MEM_W(0XA80, ctx->r1) = ctx->r3;
    // 0x0045E4A4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0045E4A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E4AC: sw          $v1, 0xA4C($at)
    MEM_W(0XA4C, ctx->r1) = ctx->r3;
    // 0x0045E4B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0045E4B4: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x0045E4B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E4BC: sw          $v1, 0xA84($at)
    MEM_W(0XA84, ctx->r1) = ctx->r3;
    // 0x0045E4C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0045E4C4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0045E4C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E4CC: sw          $v1, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r3;
    // 0x0045E4D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E4D4: sw          $a0, 0xA40($at)
    MEM_W(0XA40, ctx->r1) = ctx->r4;
    // 0x0045E4D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045E4DC: sw          $v0, 0xA48($at)
    MEM_W(0XA48, ctx->r1) = ctx->r2;
    // 0x0045E4E0: beq         $a2, $zero, L_0045E500
    if (ctx->r6 == 0) {
        // 0x0045E4E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045E500;
    }
    // 0x0045E4E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045E4E8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0045E4EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0045E4F0:
    // 0x0045E4F0: sltu        $v0, $s0, $v1
    ctx->r2 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x0045E4F4: bne         $v0, $zero, L_0045E4F0
    if (ctx->r2 != 0) {
        // 0x0045E4F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0045E4F0;
    }
    // 0x0045E4F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045E4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045E500:
    // 0x0045E500: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0045E504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0045E508: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0045E50C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0045E510: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045E514: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045E518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045E51C: jr          $ra
    // 0x0045E520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0045E520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025EEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EEA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025EEA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025EEAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025EEB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025EEB4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025EEB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025EEBC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0025EEC0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025EEC4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025EEC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025EECC: jal         0x00220408
    // 0x0025EED0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x0025EED0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0025EED4: bne         $v0, $zero, L_0025EF04
    if (ctx->r2 != 0) {
        // 0x0025EED8: nop
    
            goto L_0025EF04;
    }
    // 0x0025EED8: nop

    // 0x0025EEDC: lb          $v0, 0x34($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X34);
    // 0x0025EEE0: bne         $v0, $zero, L_0025EF04
    if (ctx->r2 != 0) {
        // 0x0025EEE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025EF04;
    }
    // 0x0025EEE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025EEE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025EEEC: jal         0x0025EE38
    // 0x0025EEF0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0025EE38(rdram, ctx);
        goto after_1;
    // 0x0025EEF0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0025EEF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025EEF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025EEFC: jal         0x00243414
    // 0x0025EF00: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025EF00: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_0025EF04:
    // 0x0025EF04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025EF08: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025EF0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025EF10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025EF14: jr          $ra
    // 0x0025EF18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025EF18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025A600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A604: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A608: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A60C: lhu         $a3, 0x7E($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7E);
    // 0x0025A610: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A614: addiu       $a2, $a2, -0x178
    ctx->r6 = ADD32(ctx->r6, -0X178);
    // 0x0025A618: jal         0x00245A98
    // 0x0025A61C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A61C: nop

    after_0:
    // 0x0025A620: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A624: jr          $ra
    // 0x0025A628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040E7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E7DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E7E0: lw          $v0, 0x510($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X510);
    // 0x0040E7E4: bne         $v0, $zero, L_0040E8B0
    if (ctx->r2 != 0) {
        // 0x0040E7E8: nop
    
            goto L_0040E8B0;
    }
    // 0x0040E7E8: nop

    // 0x0040E7EC: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x0040E7F0: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040E7F4: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x0040E7F8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0040E7FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040E800: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E804: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x0040E808: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0040E80C: blez        $v0, L_0040E834
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E810: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_0040E834;
    }
    // 0x0040E810: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x0040E814: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040E818:
    // 0x0040E818: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0040E81C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E820: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040E824: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E828: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E82C: bne         $v0, $zero, L_0040E818
    if (ctx->r2 != 0) {
        // 0x0040E830: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040E818;
    }
    // 0x0040E830: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040E834:
    // 0x0040E834: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040E838: blez        $v0, L_0040E860
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E83C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E860;
    }
    // 0x0040E83C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E840: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040E844:
    // 0x0040E844: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0040E848: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E84C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040E850: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E854: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E858: bne         $v0, $zero, L_0040E844
    if (ctx->r2 != 0) {
        // 0x0040E85C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040E844;
    }
    // 0x0040E85C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040E860:
    // 0x0040E860: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040E864: blez        $v0, L_0040E88C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E868: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E88C;
    }
    // 0x0040E868: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E86C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040E870:
    // 0x0040E870: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040E874: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E878: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040E87C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E880: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E884: bne         $v0, $zero, L_0040E870
    if (ctx->r2 != 0) {
        // 0x0040E888: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040E870;
    }
    // 0x0040E888: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040E88C:
    // 0x0040E88C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0040E890: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x0040E894: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040E898: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040E89C: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040E8A0: beq         $v0, $zero, L_0040E8B0
    if (ctx->r2 == 0) {
        // 0x0040E8A4: nop
    
            goto L_0040E8B0;
    }
    // 0x0040E8A4: nop

    // 0x0040E8A8: jalr        $v0
    // 0x0040E8AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040E8AC: nop

    after_0:
L_0040E8B0:
    // 0x0040E8B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E8B4: jr          $ra
    // 0x0040E8B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E8B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00272D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00272D3C: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x00272D40: addiu       $v0, $v0, -0x1B2
    ctx->r2 = ADD32(ctx->r2, -0X1B2);
    // 0x00272D44: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00272D48: bne         $v0, $zero, L_00272D60
    if (ctx->r2 != 0) {
            // 0x00272D4C: nop

    func_00272D60(rdram, ctx);
    return;
    }
    // 0x00272D4C: nop

    // 0x00272D50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272D54: lwc1        $f0, -0x7EC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7EC0);
    // 0x00272D58: jr          $ra
    // 0x00272D5C: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00272D5C: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
;}
