#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029BF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BF74: addiu       $v0, $fp, 0x10C
    ctx->r2 = ADD32(ctx->r30, 0X10C);
    // 0x0029BF78: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0029BF7C: lw          $t3, 0x18($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X18);
;}
RECOMP_FUNC void func_00255220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255224: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00255228: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x0025522C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x00255230: beq         $v1, $v0, L_00255248
    if (ctx->r3 == ctx->r2) {
        // 0x00255234: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_00255248;
    }
    // 0x00255234: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00255238: beq         $v1, $v0, L_00255248
    if (ctx->r3 == ctx->r2) {
        // 0x0025523C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_00255248;
    }
    // 0x0025523C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00255240: bne         $v1, $v0, L_0025524C
    if (ctx->r3 != ctx->r2) {
        // 0x00255244: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025524C;
    }
    // 0x00255244: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00255248:
    // 0x00255248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025524C:
    // 0x0025524C: bne         $v0, $zero, L_0025528C
    if (ctx->r2 != 0) {
        // 0x00255250: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025528C;
    }
    // 0x00255250: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255254: lw          $v0, 0x140($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X140);
    // 0x00255258: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0025525C: beq         $v0, $zero, L_00255288
    if (ctx->r2 == 0) {
        // 0x00255260: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_00255288;
    }
    // 0x00255260: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00255264: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x00255268: beq         $v1, $v0, L_00255288
    if (ctx->r3 == ctx->r2) {
        // 0x0025526C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_00255288;
    }
    // 0x0025526C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00255270: beq         $v1, $v0, L_0025528C
    if (ctx->r3 == ctx->r2) {
        // 0x00255274: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025528C;
    }
    // 0x00255274: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255278: jal         0x0024E5F0
    // 0x0025527C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x0025527C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x00255280: j           L_0025528C
    // 0x00255284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0025528C;
    // 0x00255284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00255288:
    // 0x00255288: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0025528C:
    // 0x0025528C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00255290: jr          $ra
    // 0x00255294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00255294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00453B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453B14: lw          $v0, -0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, -0X4);
    // 0x00453B18: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x00453B1C: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00453B20: beq         $v0, $zero, L_00453B58
    if (ctx->r2 == 0) {
        // 0x00453B24: addiu       $a2, $a2, -0x4
        ctx->r6 = ADD32(ctx->r6, -0X4);
            goto L_00453B58;
    }
    // 0x00453B24: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x00453B28: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
L_00453B2C:
    // 0x00453B2C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453B30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00453B34: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x00453B38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453B3C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00453B40: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x00453B44: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00453B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00453B4C: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00453B50: bnel        $v1, $zero, L_00453B2C
    if (ctx->r3 != 0) {
        // 0x00453B54: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_00453B2C;
    }
    goto skip_0;
    // 0x00453B54: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    skip_0:
L_00453B58:
    // 0x00453B58: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00453B5C: addiu       $a1, $a1, 0x1F80
    ctx->r5 = ADD32(ctx->r5, 0X1F80);
    // 0x00453B60: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00453B64: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00453B68: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00453B6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453B70: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00453B74: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x00453B78: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00453B7C: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x00453B80: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00453B84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00453B88: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00453B8C: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x00453B90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453B94: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00453B98: sb          $zero, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = 0;
    // 0x00453B9C: jr          $ra
    // 0x00453BA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453BA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00430374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430374: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x00430378: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x0043037C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00430380: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00430384: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00430388: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x0043038C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00430390: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00430394: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00430398: sw          $v0, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r2;
    // 0x0043039C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004303A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004303A4: jr          $ra
    // 0x004303A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004303A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025BC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025BC70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025BC74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025BC78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025BC7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025BC80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025BC84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025BC88: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0025BC8C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0025BC90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025BC94: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0025BC98: or          $a0, $v0, $v1
    ctx->r4 = ctx->r2 | ctx->r3;
    // 0x0025BC9C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025BCA0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025BCA4: sw          $a0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r4;
    // 0x0025BCA8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0025BCAC: lbu         $v1, -0x550F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550F);
    // 0x0025BCB0: bne         $v1, $zero, L_0025BCC4
    if (ctx->r3 != 0) {
        // 0x0025BCB4: addiu       $s2, $v0, 0x14
        ctx->r18 = ADD32(ctx->r2, 0X14);
            goto L_0025BCC4;
    }
    // 0x0025BCB4: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // 0x0025BCB8: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x0025BCBC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0025BCC0: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0025BCC4:
    // 0x0025BCC4: lhu         $v0, 0xB8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XB8);
    // 0x0025BCC8: addiu       $v1, $v0, -0x44E
    ctx->r3 = ADD32(ctx->r2, -0X44E);
    // 0x0025BCCC: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0025BCD0: beq         $v0, $zero, L_0025BCEC
    if (ctx->r2 == 0) {
        // 0x0025BCD4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0025BCEC;
    }
    // 0x0025BCD4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025BCD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BCDC: addu        $at, $at, $v0
    gpr jr_addend_0025BCE4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025BCE0: lw          $v0, 0x7558($at)
    ctx->r2 = ADD32(ctx->r1, 0X7558);
    // 0x0025BCE4: jr          $v0
    // 0x0025BCE8: nop

    switch (jr_addend_0025BCE4 >> 2) {
        case 0: goto L_0025BE70; break;
        case 1: goto L_0025BCEC; break;
        case 2: goto L_0025BE70; break;
        case 3: goto L_0025BE70; break;
        case 4: goto L_0025BCEC; break;
        case 5: goto L_0025BE70; break;
        case 6: goto L_0025BE70; break;
        case 7: goto L_0025BE70; break;
        case 8: goto L_0025BE70; break;
        default: switch_error(__func__, 0x0025BCE4, 0x800A7558);
    }
    // 0x0025BCE8: nop

L_0025BCEC:
    // 0x0025BCEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025BCF0: addiu       $v0, $v0, 0xA60
    ctx->r2 = ADD32(ctx->r2, 0XA60);
    // 0x0025BCF4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0025BCF8: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BCFC: addiu       $v0, $v0, -0x3A08
    ctx->r2 = ADD32(ctx->r2, -0X3A08);
    // 0x0025BD00: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
    // 0x0025BD04: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BD08: addiu       $v0, $v0, -0x3FE8
    ctx->r2 = ADD32(ctx->r2, -0X3FE8);
    // 0x0025BD0C: sw          $v0, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->r2;
    // 0x0025BD10: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BD14: addiu       $v0, $v0, -0x4580
    ctx->r2 = ADD32(ctx->r2, -0X4580);
    // 0x0025BD18: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
    // 0x0025BD1C: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0025BD20: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x0025BD24: bne         $v1, $v0, L_0025BD50
    if (ctx->r3 != ctx->r2) {
        // 0x0025BD28: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0025BD50;
    }
    // 0x0025BD28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025BD2C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025BD30: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025BD34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0025BD38: sw          $zero, 0x100($s0)
    MEM_W(0X100, ctx->r16) = 0;
    // 0x0025BD3C: sw          $zero, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = 0;
    // 0x0025BD40: jal         0x00220260
    // 0x0025BD44: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x0025BD44: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    after_0:
    // 0x0025BD48: j           L_0025BD74
    // 0x0025BD4C: nop

        goto L_0025BD74;
    // 0x0025BD4C: nop

L_0025BD50:
    // 0x0025BD50: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BD54: addiu       $v0, $v0, -0x3538
    ctx->r2 = ADD32(ctx->r2, -0X3538);
    // 0x0025BD58: sw          $v0, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->r2;
    // 0x0025BD5C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BD60: addiu       $v0, $v0, -0x1098
    ctx->r2 = ADD32(ctx->r2, -0X1098);
    // 0x0025BD64: sw          $v0, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->r2;
    // 0x0025BD68: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BD6C: addiu       $v0, $v0, -0x4D2C
    ctx->r2 = ADD32(ctx->r2, -0X4D2C);
    // 0x0025BD70: sw          $v0, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r2;
L_0025BD74:
    // 0x0025BD74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BD78: lwc1        $f0, 0x757C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X757C);
    // 0x0025BD7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BD80: lwc1        $f12, 0x7580($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7580);
    // 0x0025BD84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BD88: lwc1        $f14, 0x7584($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7584);
    // 0x0025BD8C: sw          $zero, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = 0;
    // 0x0025BD90: sw          $zero, 0x110($s0)
    MEM_W(0X110, ctx->r16) = 0;
    // 0x0025BD94: sw          $zero, 0x114($s0)
    MEM_W(0X114, ctx->r16) = 0;
    // 0x0025BD98: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
    // 0x0025BD9C: sw          $zero, 0x120($s0)
    MEM_W(0X120, ctx->r16) = 0;
    // 0x0025BDA0: sw          $zero, 0x124($s0)
    MEM_W(0X124, ctx->r16) = 0;
    // 0x0025BDA4: sw          $zero, 0x128($s0)
    MEM_W(0X128, ctx->r16) = 0;
    // 0x0025BDA8: jal         0x002119FC
    // 0x0025BDAC: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0025BDAC: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x0025BDB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BDB4: lwc1        $f1, 0x7588($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7588);
    // 0x0025BDB8: swc1        $f0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
    // 0x0025BDBC: sw          $zero, 0x134($s0)
    MEM_W(0X134, ctx->r16) = 0;
    // 0x0025BDC0: swc1        $f1, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025BDC4: lbu         $v0, 0x4C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4C);
    // 0x0025BDC8: sb          $v0, 0x130($s0)
    MEM_B(0X130, ctx->r16) = ctx->r2;
    // 0x0025BDCC: lbu         $v0, 0x4D($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4D);
    // 0x0025BDD0: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x0025BDD4: sb          $v0, 0x130($v1)
    MEM_B(0X130, ctx->r3) = ctx->r2;
    // 0x0025BDD8: lbu         $a0, 0x4E($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4E);
    // 0x0025BDDC: lb          $v0, 0x130($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X130);
    // 0x0025BDE0: bne         $v0, $zero, L_0025BE0C
    if (ctx->r2 != 0) {
        // 0x0025BDE4: sb          $a0, 0x132($s0)
        MEM_B(0X132, ctx->r16) = ctx->r4;
            goto L_0025BE0C;
    }
    // 0x0025BDE4: sb          $a0, 0x132($s0)
    MEM_B(0X132, ctx->r16) = ctx->r4;
    // 0x0025BDE8: lb          $v0, 0x130($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X130);
    // 0x0025BDEC: beq         $v0, $zero, L_0025BDFC
    if (ctx->r2 == 0) {
        // 0x0025BDF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025BDFC;
    }
    // 0x0025BDF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025BDF4: j           L_0025BE10
    // 0x0025BDF8: sb          $v0, 0x133($s0)
    MEM_B(0X133, ctx->r16) = ctx->r2;
        goto L_0025BE10;
    // 0x0025BDF8: sb          $v0, 0x133($s0)
    MEM_B(0X133, ctx->r16) = ctx->r2;
L_0025BDFC:
    // 0x0025BDFC: beq         $a0, $zero, L_0025BE0C
    if (ctx->r4 == 0) {
        // 0x0025BE00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025BE0C;
    }
    // 0x0025BE00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025BE04: j           L_0025BE10
    // 0x0025BE08: sb          $v0, 0x133($s0)
    MEM_B(0X133, ctx->r16) = ctx->r2;
        goto L_0025BE10;
    // 0x0025BE08: sb          $v0, 0x133($s0)
    MEM_B(0X133, ctx->r16) = ctx->r2;
L_0025BE0C:
    // 0x0025BE0C: sb          $zero, 0x133($s0)
    MEM_B(0X133, ctx->r16) = 0;
L_0025BE10:
    // 0x0025BE10: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025BE14: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x0025BE18: sw          $v0, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->r2;
    // 0x0025BE1C: lw          $v1, 0xD4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD4);
    // 0x0025BE20: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0025BE24: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0025BE28: bne         $v0, $zero, L_0025BE50
    if (ctx->r2 != 0) {
        // 0x0025BE2C: nop
    
            goto L_0025BE50;
    }
    // 0x0025BE2C: nop

    // 0x0025BE30: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0025BE34: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0025BE38: beq         $v0, $zero, L_0025BE50
    if (ctx->r2 == 0) {
        // 0x0025BE3C: addiu       $v0, $zero, -0x2001
        ctx->r2 = ADD32(0, -0X2001);
            goto L_0025BE50;
    }
    // 0x0025BE3C: addiu       $v0, $zero, -0x2001
    ctx->r2 = ADD32(0, -0X2001);
    // 0x0025BE40: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0025BE44: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0025BE48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025BE4C: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0025BE50:
    // 0x0025BE50: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0025BE54: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0025BE58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025BE5C: bne         $v0, $zero, L_0025BE70
    if (ctx->r2 != 0) {
        // 0x0025BE60: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0025BE70;
    }
    // 0x0025BE60: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0025BE64: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0025BE68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025BE6C: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0025BE70:
    // 0x0025BE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025BE74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025BE78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025BE7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025BE80: jr          $ra
    // 0x0025BE84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025BE84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00416F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00416F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00416F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00416F98: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x00416F9C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00416FA0: jalr        $v0
    // 0x00416FA4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00416FA4: nop

    after_0:
    // 0x00416FA8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x00416FAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00416FB0: sltiu       $v0, $a0, 0x9
    ctx->r2 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x00416FB4: beq         $v0, $zero, L_00416FD0
    if (ctx->r2 == 0) {
        // 0x00416FB8: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00416FD0;
    }
    // 0x00416FB8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00416FBC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416FC0: addu        $at, $at, $v0
    gpr jr_addend_00416FC8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00416FC4: lw          $v0, 0xE00($at)
    ctx->r2 = ADD32(ctx->r1, 0XE00);
    // 0x00416FC8: jr          $v0
    // 0x00416FCC: nop

    switch (jr_addend_00416FC8 >> 2) {
        case 0: goto L_00416FDC; break;
        case 1: goto L_00417010; break;
        case 2: goto L_00417010; break;
        case 3: goto L_00416FE8; break;
        case 4: goto L_00416FFC; break;
        case 5: goto L_00417010; break;
        case 6: goto L_00417020; break;
        case 7: goto L_00417034; break;
        case 8: goto L_00417048; break;
        default: switch_error(__func__, 0x00416FC8, 0x800C0E00);
    }
    // 0x00416FCC: nop

L_00416FD0:
    // 0x00416FD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00416FD4: j           L_0041706C
    // 0x00416FD8: nop

        goto L_0041706C;
    // 0x00416FD8: nop

L_00416FDC:
    // 0x00416FDC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00416FE0: j           L_0041706C
    // 0x00416FE4: nop

        goto L_0041706C;
    // 0x00416FE4: nop

L_00416FE8:
    // 0x00416FE8: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x00416FEC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00416FF0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00416FF4: j           L_0041706C
    // 0x00416FF8: nop

        goto L_0041706C;
    // 0x00416FF8: nop

L_00416FFC:
    // 0x00416FFC: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00417000: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00417004: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00417008: j           L_0041706C
    // 0x0041700C: nop

        goto L_0041706C;
    // 0x0041700C: nop

L_00417010:
    // 0x00417010: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00417014: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00417018: j           L_0041706C
    // 0x0041701C: nop

        goto L_0041706C;
    // 0x0041701C: nop

L_00417020:
    // 0x00417020: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00417024: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00417028: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041702C: j           L_0041706C
    // 0x00417030: nop

        goto L_0041706C;
    // 0x00417030: nop

L_00417034:
    // 0x00417034: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00417038: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041703C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00417040: j           L_0041706C
    // 0x00417044: nop

        goto L_0041706C;
    // 0x00417044: nop

L_00417048:
    // 0x00417048: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0041704C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00417050: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00417054: bgezl       $v0, L_0041706C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00417058: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0041706C;
    }
    goto skip_0;
    // 0x00417058: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x0041705C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417060: ldc1        $f0, 0xE28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XE28);
    // 0x00417064: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00417068: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0041706C:
    // 0x0041706C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00417070: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417074: jr          $ra
    // 0x00417078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00254F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254F58: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x00254F5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254F60: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00254F64: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00254F68: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00254F6C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00254F70: nop

    // 0x00254F74: bc1t        L_00254F80
    if (c1cs) {
        // 0x00254F78: swc1        $f0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
            goto L_00254F80;
    }
    // 0x00254F78: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x00254F7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00254F80:
    // 0x00254F80: jr          $ra
    // 0x00254F84: nop

    return;
    // 0x00254F84: nop

;}
RECOMP_FUNC void func_002A50E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A50E0: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002A50E4: beq         $v0, $zero, L_002A50F4
    if (ctx->r2 == 0) {
            // 0x002A50E8: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    func_002A50F4(rdram, ctx);
    return;
    }
    // 0x002A50E8: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x002A50EC: jr          $ra
    // 0x002A50F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002A50F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00418408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041840C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00418410: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x00418414: lw          $v1, 0x518($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X518);
    // 0x00418418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041841C: sw          $v0, 0xBF4($a2)
    MEM_W(0XBF4, ctx->r6) = ctx->r2;
    // 0x00418420: sb          $zero, 0x30($v1)
    MEM_B(0X30, ctx->r3) = 0;
    // 0x00418424: lw          $v0, 0x514($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X514);
    // 0x00418428: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0041842C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00418430: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x00418434: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418438: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041843C: jal         0x00416644
    // 0x00418440: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00418440: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00418444: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00418448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041844C: jr          $ra
    // 0x00418450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00274684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274684: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274688: nop

    // 0x0027468C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274690: nop

    // 0x00274694: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00274698: jr          $ra
    // 0x0027469C: nop

    return;
    // 0x0027469C: nop

;}
RECOMP_FUNC void func_00467920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042E974:
    // 0x00467920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00467924: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00467928: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0046792C: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00467930: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00467934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467938: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x0046793C: bne         $v0, $zero, L_0046795C
    if (ctx->r2 != 0) {
        // 0x00467940: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0046795C;
    }
    // 0x00467940: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00467944: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x00467948: jal         0x00285BD0
    // 0x0046794C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x0046794C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00467950: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x00467954: beq         $v0, $zero, L_0046796C
    if (ctx->r2 == 0) {
        // 0x00467958: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0046796C;
    }
    // 0x00467958: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0046795C:
    // 0x0046795C: jal         0x002540E4
    // 0x00467960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_1;
    // 0x00467960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00467964: j           L_0042E974
    // 0x00467968: nop

    entry_0042E974(rdram, ctx);
    return;
    // 0x00467968: nop

L_0046796C:
    // 0x0046796C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x00467970: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x00467974: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00467978: lwc1        $f0, 0x70D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70D8);
    // 0x0046797C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00467980: jal         0x00248340
    // 0x00467984: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_2;
    // 0x00467984: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00467988: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0046798C: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00467990: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x00467994: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x00467998: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0046799C: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x004679A0: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x004679A4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x004679A8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004679AC: bne         $v1, $v0, L_004679F8
    if (ctx->r3 != ctx->r2) {
        // 0x004679B0: nop
    
            goto L_004679F8;
    }
    // 0x004679B0: nop

    // 0x004679B4: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x004679B8: bne         $v0, $zero, L_004679F8
    if (ctx->r2 != 0) {
        // 0x004679BC: nop
    
            goto L_004679F8;
    }
    // 0x004679BC: nop

    // 0x004679C0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004679C4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x004679C8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x004679CC: bne         $v0, $zero, L_004679F8
    if (ctx->r2 != 0) {
        // 0x004679D0: nop
    
            goto L_004679F8;
    }
    // 0x004679D0: nop

    // 0x004679D4: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x004679D8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x004679DC: beq         $v0, $zero, L_004679F8
    if (ctx->r2 == 0) {
        // 0x004679E0: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_004679F8;
    }
    // 0x004679E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x004679E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004679E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004679EC: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x004679F0: jal         0x0027580C
    // 0x004679F4: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x004679F4: nop

    after_3:
L_004679F8:
    // 0x004679F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004679FC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467A00: beq         $v0, $zero, L_00467A10
    if (ctx->r2 == 0) {
        // 0x00467A04: nop
    
            goto L_00467A10;
    }
    // 0x00467A04: nop

    // 0x00467A08: jal         0x00248A8C
    // 0x00467A0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x00467A0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_00467A10:
    // 0x00467A10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00467A14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00467A18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467A1C: jr          $ra
    // 0x00467A20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00467A20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00443E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00443E24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00443E28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00443E2C: addiu       $a0, $a0, -0x490
    ctx->r4 = ADD32(ctx->r4, -0X490);
    // 0x00443E30: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00443E34: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00443E38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00443E3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00443E40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00443E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00443E48: sw          $v0, 0x688($a0)
    MEM_W(0X688, ctx->r4) = ctx->r2;
    // 0x00443E4C: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00443E50: lw          $v1, 0x1D04($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D04);
    // 0x00443E54: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x00443E58: sw          $v0, 0x68C($a0)
    MEM_W(0X68C, ctx->r4) = ctx->r2;
    // 0x00443E5C: sw          $zero, 0x65C($a0)
    MEM_W(0X65C, ctx->r4) = 0;
    // 0x00443E60: sw          $zero, 0x67C($a0)
    MEM_W(0X67C, ctx->r4) = 0;
    // 0x00443E64: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x00443E68: lw          $v0, 0x65C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X65C);
    // 0x00443E6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00443E70: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443E74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443E78: lw          $v1, 0x1D1C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1D1C);
    // 0x00443E7C: sw          $v1, 0x664($a0)
    MEM_W(0X664, ctx->r4) = ctx->r3;
    // 0x00443E80: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00443E84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00443E88: lw          $v1, 0x1D10($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1D10);
    // 0x00443E8C: addiu       $v0, $zero, 0x2800
    ctx->r2 = ADD32(0, 0X2800);
    // 0x00443E90: sw          $v0, 0x1B8($a0)
    MEM_W(0X1B8, ctx->r4) = ctx->r2;
    // 0x00443E94: sw          $v0, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->r2;
    // 0x00443E98: sw          $v0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r2;
    // 0x00443E9C: sw          $v0, 0x358($a0)
    MEM_W(0X358, ctx->r4) = ctx->r2;
    // 0x00443EA0: sw          $v0, 0x2F0($a0)
    MEM_W(0X2F0, ctx->r4) = ctx->r2;
    // 0x00443EA4: sw          $v0, 0x288($a0)
    MEM_W(0X288, ctx->r4) = ctx->r2;
    // 0x00443EA8: ori         $v0, $zero, 0xF000
    ctx->r2 = 0 | 0XF000;
    // 0x00443EAC: sw          $v0, 0x678($a0)
    MEM_W(0X678, ctx->r4) = ctx->r2;
    // 0x00443EB0: sw          $v0, 0x674($a0)
    MEM_W(0X674, ctx->r4) = ctx->r2;
    // 0x00443EB4: sw          $v1, 0x660($a0)
    MEM_W(0X660, ctx->r4) = ctx->r3;
    // 0x00443EB8: lb          $v0, 0x34($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X34);
    // 0x00443EBC: beq         $v0, $zero, L_00443F04
    if (ctx->r2 == 0) {
        // 0x00443EC0: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_00443F04;
    }
    // 0x00443EC0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x00443EC4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00443EC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00443ECC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_00443ED0:
    // 0x00443ED0: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x00443ED4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00443ED8: beql        $v0, $zero, L_00443EF8
    if (ctx->r2 == 0) {
        // 0x00443EDC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00443EF8;
    }
    goto skip_0;
    // 0x00443EDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00443EE0: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x00443EE4: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00443EE8: addiu       $a1, $a1, 0x1D28
    ctx->r5 = ADD32(ctx->r5, 0X1D28);
    // 0x00443EEC: jal         0x00236314
    // 0x00443EF0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00443EF0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x00443EF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00443EF8:
    // 0x00443EF8: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00443EFC: bne         $v0, $zero, L_00443ED0
    if (ctx->r2 != 0) {
        // 0x00443F00: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00443ED0;
    }
    // 0x00443F00: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
L_00443F04:
    // 0x00443F04: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00443F08: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00443F0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00443F10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00443F14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00443F18: jr          $ra
    // 0x00443F1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00443F1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00452C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00419CCC:
    // 0x00452C14: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_00419CDC:
    // 0x00452C18: lbu         $v0, -0x5512($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5512);
    // 0x00452C1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452C20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00452C24: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00452C28: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00452C2C: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00452C30: bgez        $a2, L_00452C3C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00452C34: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00452C3C;
    }
    // 0x00452C34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00452C38: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00452C3C:
    // 0x00452C3C: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00452C40: bne         $s0, $zero, L_00452C58
    if (ctx->r16 != 0) {
        // 0x00452C44: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00452C58;
    }
    // 0x00452C44: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00452C48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452C4C: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x00452C50: j           L_00419CDC
    // 0x00452C54: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00419CDC(rdram, ctx);
    return;
    // 0x00452C54: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00452C58:
    // 0x00452C58: bne         $s0, $v0, L_00452C70
    if (ctx->r16 != ctx->r2) {
        // 0x00452C5C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00452C70;
    }
    // 0x00452C5C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00452C60: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452C64: addiu       $v0, $v0, 0x65B8
    ctx->r2 = ADD32(ctx->r2, 0X65B8);
    // 0x00452C68: j           L_00419CDC
    // 0x00452C6C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00419CDC(rdram, ctx);
    return;
    // 0x00452C6C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00452C70:
    // 0x00452C70: bne         $s0, $v0, L_00452C88
    if (ctx->r16 != ctx->r2) {
        // 0x00452C74: nop
    
            goto L_00452C88;
    }
    // 0x00452C74: nop

    // 0x00452C78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452C7C: addiu       $v0, $v0, 0x65A0
    ctx->r2 = ADD32(ctx->r2, 0X65A0);
    // 0x00452C80: j           L_00419CDC
    // 0x00452C84: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00419CDC(rdram, ctx);
    return;
    // 0x00452C84: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00452C88:
    // 0x00452C88: blez        $s0, L_00452CB0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00452C8C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00452CB0;
    }
    // 0x00452C8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00452C90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452C94: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00452C98: jal         0x004160F0
    // 0x00452C9C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00452C9C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00452CA0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00452CA4: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00452CA8: j           L_00419CCC
    // 0x00452CAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00419CCC(rdram, ctx);
    return;
    // 0x00452CAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00452CB0:
    // 0x00452CB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00452CB4: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00452CB8: jal         0x004160F0
    // 0x00452CBC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00452CBC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00452CC0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00452CC4: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00452CC8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00452CCC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00452CD0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00452CD4: jal         0x0029E3E0
    // 0x00452CD8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00452CD8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x00452CDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00452CE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00452CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00452CE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452CEC: jr          $ra
    // 0x00452CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044CF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041411C:
    // 0x0044CF74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_00414120:
    // 0x0044CF78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
L_00414124:
    // 0x0044CF7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_004141B0:
    // 0x0044CF80: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
L_004141FC:
    // 0x0044CF84: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
L_004142CC:
    // 0x0044CF88: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
L_004142FC:
    // 0x0044CF8C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0044CF90: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0044CF94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0044CF98: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x0044CF9C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0044CFA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0044CFA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0044CFA8: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x0044CFAC: bne         $v0, $v1, L_0044CFC8
    if (ctx->r2 != ctx->r3) {
        // 0x0044CFB0: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_0044CFC8;
    }
    // 0x0044CFB0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0044CFB4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044CFB8: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x0044CFBC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044CFC0: bnel        $v0, $zero, L_0044CFF4
    if (ctx->r2 != 0) {
        // 0x0044CFC4: sw          $zero, 0x38($s2)
        MEM_W(0X38, ctx->r18) = 0;
            goto L_0044CFF4;
    }
    goto skip_0;
    // 0x0044CFC4: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    skip_0:
L_0044CFC8:
    // 0x0044CFC8: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x0044CFCC: beq         $v0, $zero, L_0044CFF4
    if (ctx->r2 == 0) {
        // 0x0044CFD0: nop
    
            goto L_0044CFF4;
    }
    // 0x0044CFD0: nop

    // 0x0044CFD4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044CFD8: bgez        $v0, L_0044CFFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0044CFDC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_0044CFFC;
    }
    // 0x0044CFDC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0044CFE0: jal         0x00266B80
    // 0x0044CFE4: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0044CFE4: nop

    after_0:
    // 0x0044CFE8: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0044CFEC: beql        $v0, $v1, L_0044CFF4
    if (ctx->r2 == ctx->r3) {
        // 0x0044CFF0: sw          $zero, 0x38($s2)
        MEM_W(0X38, ctx->r18) = 0;
            goto L_0044CFF4;
    }
    goto skip_1;
    // 0x0044CFF0: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    skip_1:
L_0044CFF4:
    // 0x0044CFF4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044CFF8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
L_0044CFFC:
    // 0x0044CFFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044D000: beq         $v0, $zero, L_0044D038
    if (ctx->r2 == 0) {
        // 0x0044D004: nop
    
            goto L_0044D038;
    }
    // 0x0044D004: nop

    // 0x0044D008: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x0044D00C: bnel        $v0, $zero, L_0044D014
    if (ctx->r2 != 0) {
        // 0x0044D010: sw          $zero, 0x38($s2)
        MEM_W(0X38, ctx->r18) = 0;
            goto L_0044D014;
    }
    goto skip_2;
    // 0x0044D010: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    skip_2:
L_0044D014:
    // 0x0044D014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044D018: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044D01C: jal         0x00415CE8
    // 0x0044D020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00415CE8(rdram, ctx);
        goto after_1;
    // 0x0044D020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0044D024: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044D028: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044D02C: jal         0x00415CE8
    // 0x0044D030: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00415CE8(rdram, ctx);
        goto after_2;
    // 0x0044D030: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x0044D034: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_0044D038:
    // 0x0044D038: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x0044D03C: beql        $v0, $zero, L_0044D044
    if (ctx->r2 == 0) {
        // 0x0044D040: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0044D044;
    }
    goto skip_3;
    // 0x0044D040: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_3:
L_0044D044:
    // 0x0044D044: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044D048: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x0044D04C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0044D050: beq         $v1, $v0, L_0044D0F8
    if (ctx->r3 == ctx->r2) {
        // 0x0044D054: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044D0F8;
    }
    // 0x0044D054: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044D058: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x0044D05C: beq         $v0, $zero, L_0044D0A0
    if (ctx->r2 == 0) {
        // 0x0044D060: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_0044D0A0;
    }
    // 0x0044D060: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0044D064: beq         $v1, $v0, L_0044D0E0
    if (ctx->r3 == ctx->r2) {
        // 0x0044D068: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_0044D0E0;
    }
    // 0x0044D068: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x0044D06C: beq         $v0, $zero, L_0044D084
    if (ctx->r2 == 0) {
        // 0x0044D070: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0044D084;
    }
    // 0x0044D070: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0044D074: beq         $v1, $v0, L_0044D11C
    if (ctx->r3 == ctx->r2) {
        // 0x0044D078: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_0044D11C;
    }
    // 0x0044D078: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0044D07C: j           L_00414124
    // 0x0044D080: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    entry_00414124(rdram, ctx);
    return;
    // 0x0044D080: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_0044D084:
    // 0x0044D084: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0044D088: beq         $v1, $v0, L_0044D0E8
    if (ctx->r3 == ctx->r2) {
        // 0x0044D08C: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_0044D0E8;
    }
    // 0x0044D08C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0044D090: beq         $v1, $v0, L_0044D0F0
    if (ctx->r3 == ctx->r2) {
        // 0x0044D094: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044D0F0;
    }
    // 0x0044D094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044D098: j           L_00414120
    // 0x0044D09C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    entry_00414120(rdram, ctx);
    return;
    // 0x0044D09C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044D0A0:
    // 0x0044D0A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x0044D0A4: beq         $v1, $v0, L_0044D108
    if (ctx->r3 == ctx->r2) {
        // 0x0044D0A8: sltiu       $v0, $v1, 0x801
        ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
            goto L_0044D108;
    }
    // 0x0044D0A8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x0044D0AC: beq         $v0, $zero, L_0044D0C4
    if (ctx->r2 == 0) {
        // 0x0044D0B0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_0044D0C4;
    }
    // 0x0044D0B0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x0044D0B4: beq         $v1, $v0, L_0044D100
    if (ctx->r3 == ctx->r2) {
        // 0x0044D0B8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044D100;
    }
    // 0x0044D0B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044D0BC: j           L_00414120
    // 0x0044D0C0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    entry_00414120(rdram, ctx);
    return;
    // 0x0044D0C0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044D0C4:
    // 0x0044D0C4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x0044D0C8: beq         $v1, $v0, L_0044D110
    if (ctx->r3 == ctx->r2) {
        // 0x0044D0CC: addiu       $v0, $zero, 0x2000
        ctx->r2 = ADD32(0, 0X2000);
            goto L_0044D110;
    }
    // 0x0044D0CC: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0044D0D0: beq         $v1, $v0, L_0044D118
    if (ctx->r3 == ctx->r2) {
        // 0x0044D0D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044D118;
    }
    // 0x0044D0D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044D0D8: j           L_00414120
    // 0x0044D0DC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    entry_00414120(rdram, ctx);
    return;
    // 0x0044D0DC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_0044D0E0:
    // 0x0044D0E0: j           L_0041411C
    // 0x0044D0E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D0E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_0044D0E8:
    // 0x0044D0E8: j           L_0041411C
    // 0x0044D0EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D0EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_0044D0F0:
    // 0x0044D0F0: j           L_0041411C
    // 0x0044D0F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D0F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_0044D0F8:
    // 0x0044D0F8: j           L_0041411C
    // 0x0044D0FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D0FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_0044D100:
    // 0x0044D100: j           L_0041411C
    // 0x0044D104: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D104: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_0044D108:
    // 0x0044D108: j           L_0041411C
    // 0x0044D10C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D10C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_0044D110:
    // 0x0044D110: j           L_0041411C
    // 0x0044D114: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    entry_0041411C(rdram, ctx);
    return;
    // 0x0044D114: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_0044D118:
    // 0x0044D118: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0044D11C:
    // 0x0044D11C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0044D120: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0044D124: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044D128: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044D12C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x0044D130: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D134: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044D138: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0044D13C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0044D140: beq         $v0, $v1, L_0044D1BC
    if (ctx->r2 == ctx->r3) {
        // 0x0044D144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044D1BC;
    }
    // 0x0044D144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044D148: beq         $v1, $v0, L_0044D188
    if (ctx->r3 == ctx->r2) {
        // 0x0044D14C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0044D188;
    }
    // 0x0044D14C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0044D150: beq         $v0, $zero, L_0044D168
    if (ctx->r2 == 0) {
        // 0x0044D154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0044D168;
    }
    // 0x0044D154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0044D158: beq         $v1, $zero, L_0044D178
    if (ctx->r3 == 0) {
        // 0x0044D15C: nop
    
            goto L_0044D178;
    }
    // 0x0044D15C: nop

    // 0x0044D160: j           L_004141B0
    // 0x0044D164: nop

    entry_004141B0(rdram, ctx);
    return;
    // 0x0044D164: nop

L_0044D168:
    // 0x0044D168: beq         $v1, $v0, L_0044D1A0
    if (ctx->r3 == ctx->r2) {
        // 0x0044D16C: nop
    
            goto L_0044D1A0;
    }
    // 0x0044D16C: nop

    // 0x0044D170: j           L_004141B0
    // 0x0044D174: nop

    entry_004141B0(rdram, ctx);
    return;
    // 0x0044D174: nop

L_0044D178:
    // 0x0044D178: jal         0x00277F6C
    // 0x0044D17C: nop

    func_00277F6C(rdram, ctx);
        goto after_3;
    // 0x0044D17C: nop

    after_3:
    // 0x0044D180: j           L_004141B0
    // 0x0044D184: nop

    entry_004141B0(rdram, ctx);
    return;
    // 0x0044D184: nop

L_0044D188:
    // 0x0044D188: jal         0x00277F6C
    // 0x0044D18C: nop

    func_00277F6C(rdram, ctx);
        goto after_4;
    // 0x0044D18C: nop

    after_4:
    // 0x0044D190: jal         0x0027836C
    // 0x0044D194: nop

    func_0027836C(rdram, ctx);
        goto after_5;
    // 0x0044D194: nop

    after_5:
    // 0x0044D198: j           L_004141B0
    // 0x0044D19C: nop

    entry_004141B0(rdram, ctx);
    return;
    // 0x0044D19C: nop

L_0044D1A0:
    // 0x0044D1A0: jal         0x00277F6C
    // 0x0044D1A4: nop

    func_00277F6C(rdram, ctx);
        goto after_6;
    // 0x0044D1A4: nop

    after_6:
    // 0x0044D1A8: jal         0x0027845C
    // 0x0044D1AC: nop

    func_0027845C(rdram, ctx);
        goto after_7;
    // 0x0044D1AC: nop

    after_7:
    // 0x0044D1B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0044D1B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D1B8: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_0044D1BC:
    // 0x0044D1BC: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x0044D1C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0044D1C4: bne         $v0, $v1, L_0044D1DC
    if (ctx->r2 != ctx->r3) {
        // 0x0044D1C8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0044D1DC;
    }
    // 0x0044D1C8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0044D1CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D1D0: lwc1        $f1, 0xBCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBCC);
    // 0x0044D1D4: j           L_004141FC
    // 0x0044D1D8: nop

    entry_004141FC(rdram, ctx);
    return;
    // 0x0044D1D8: nop

L_0044D1DC:
    // 0x0044D1DC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044D1E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D1E4: lwc1        $f1, 0xBD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD0);
    // 0x0044D1E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0044D1EC: bne         $v0, $zero, L_0044D1FC
    if (ctx->r2 != 0) {
        // 0x0044D1F0: nop
    
            goto L_0044D1FC;
    }
    // 0x0044D1F0: nop

    // 0x0044D1F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D1F8: lwc1        $f1, 0xBD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD4);
L_0044D1FC:
    // 0x0044D1FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x0044D200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044D204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D20C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0044D218: beq         $v0, $zero, L_0044D224
    if (ctx->r2 == 0) {
        // 0x0044D21C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_0044D224;
    }
    // 0x0044D21C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0044D220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_0044D224:
    // 0x0044D224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x0044D228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044D22C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D23C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0044D240: beq         $v0, $zero, L_0044D24C
    if (ctx->r2 == 0) {
        // 0x0044D244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0044D24C;
    }
    // 0x0044D244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0044D248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0044D24C:
    // 0x0044D24C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x0044D250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044D254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D25C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0044D268: beq         $v0, $zero, L_0044D274
    if (ctx->r2 == 0) {
        // 0x0044D26C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_0044D274;
    }
    // 0x0044D26C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0044D270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_0044D274:
    // 0x0044D274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x0044D278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044D27C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D28C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0044D290: beq         $v0, $zero, L_0044D29C
    if (ctx->r2 == 0) {
        // 0x0044D294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0044D29C;
    }
    // 0x0044D294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x0044D298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0044D29C:
    // 0x0044D29C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x0044D2A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044D2A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D2A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D2AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D2B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D2B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0044D2B8: beq         $v0, $zero, L_0044D2C8
    if (ctx->r2 == 0) {
        // 0x0044D2BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0044D2C8;
    }
    // 0x0044D2BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0044D2C0: j           L_004142CC
    // 0x0044D2C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    entry_004142CC(rdram, ctx);
    return;
    // 0x0044D2C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_0044D2C8:
    // 0x0044D2C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0044D2CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x0044D2D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044D2D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D2D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044D2DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044D2E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D2E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0044D2E8: beq         $v0, $zero, L_0044D2F8
    if (ctx->r2 == 0) {
        // 0x0044D2EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0044D2F8;
    }
    // 0x0044D2EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0044D2F0: j           L_004142FC
    // 0x0044D2F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    entry_004142FC(rdram, ctx);
    return;
    // 0x0044D2F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_0044D2F8:
    // 0x0044D2F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0044D2FC: jal         0x0027B094
    // 0x0044D300: nop

    func_0027B094(rdram, ctx);
        goto after_8;
    // 0x0044D300: nop

    after_8:
    // 0x0044D304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x0044D308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0044D30C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x0044D310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044D314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x0044D318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0044D31C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0044D320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0044D328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D32C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0044D330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x0044D334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0044D33C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044D340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044D344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0044D34C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x0044D350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x0044D358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0044D35C: jal         0x0027B0C0
    // 0x0044D360: nop

    func_0027B0C0(rdram, ctx);
        goto after_9;
    // 0x0044D360: nop

    after_9:
    // 0x0044D364: beq         $s3, $zero, L_0044D370
    if (ctx->r19 == 0) {
        // 0x0044D368: nop
    
            goto L_0044D370;
    }
    // 0x0044D368: nop

    // 0x0044D36C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_0044D370:
    // 0x0044D370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x0044D374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0044D37C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x0044D380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x0044D384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044D388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044D38C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x0044D390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044D394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x0044D398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0044D39C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0044D3A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0044D3A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x0044D3A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0044D3AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0044D3B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0044D3B4: jal         0x00278CDC
    // 0x0044D3B8: nop

    func_00278CDC(rdram, ctx);
        goto after_10;
    // 0x0044D3B8: nop

    after_10:
    // 0x0044D3BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0044D3C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0044D3C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0044D3C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0044D3CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0044D3D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0044D3D4: jr          $ra
    // 0x0044D3D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044D3D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041B1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B1E8: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B1EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0041B1F0: beq         $v0, $zero, L_0041B204
    if (ctx->r2 == 0) {
        // 0x0041B1F4: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B204;
    }
    // 0x0041B1F4: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B1F8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B1FC: j           L_0041B214
    // 0x0041B200: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B214;
    // 0x0041B200: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B204:
    // 0x0041B204: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B208: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B20C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B210: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B214:
    // 0x0041B214: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B218: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B21C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B220: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0041B224: beq         $v0, $zero, L_0041B23C
    if (ctx->r2 == 0) {
        // 0x0041B228: nop
    
            goto L_0041B23C;
    }
    // 0x0041B228: nop

    // 0x0041B22C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B230: addiu       $v0, $v0, 0x57AC
    ctx->r2 = ADD32(ctx->r2, 0X57AC);
    // 0x0041B234: j           L_0041B248
    // 0x0041B238: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B248;
    // 0x0041B238: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B23C:
    // 0x0041B23C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B240: addiu       $v0, $v0, 0x57C8
    ctx->r2 = ADD32(ctx->r2, 0X57C8);
    // 0x0041B244: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B248:
    // 0x0041B248: jr          $ra
    // 0x0041B24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002603C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002603C0: lhu         $v0, 0x7E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X7E);
    // 0x002603C4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x002603C8: jr          $ra
    // 0x002603CC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x002603CC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_002551B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002551B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002551BC: lwc1        $f1, 0x7140($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7140);
    // 0x002551C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002551C4: lwc1        $f2, 0x7144($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7144);
    // 0x002551C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002551CC: lwc1        $f0, 0x7148($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7148);
    // 0x002551D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002551D4: lwc1        $f3, 0x714C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X714C);
    // 0x002551D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002551DC: lwc1        $f4, 0x7150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7150);
    // 0x002551E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002551E4: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x002551E8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x002551EC: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    // 0x002551F0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002551F4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002551F8: sw          $zero, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = 0;
    // 0x002551FC: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x00255200: sw          $zero, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = 0;
    // 0x00255204: swc1        $f1, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00255208: swc1        $f2, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f2.u32l;
    // 0x0025520C: swc1        $f0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f0.u32l;
    // 0x00255210: swc1        $f3, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00255214: swc1        $f0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f0.u32l;
    // 0x00255218: jr          $ra
    // 0x0025521C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x0025521C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_002666A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002666A4: sw          $t0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r8;
    // 0x002666A8: sw          $t1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r9;
    // 0x002666AC: sw          $t2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r10;
;}
RECOMP_FUNC void func_00292640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292640: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00292644: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00292648: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0029264C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00292650: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00292654: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x00292658: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0029265C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00292660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00292664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00292668: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x0029266C: sll         $a3, $a3, 4
    ctx->r7 = S32(ctx->r7 << 4);
    // 0x00292670: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00292674: lw          $s2, 0x0($a3)
    ctx->r18 = MEM_W(ctx->r7, 0X0);
    // 0x00292678: lh          $s0, 0xE($s2)
    ctx->r16 = MEM_H(ctx->r18, 0XE);
    // 0x0029267C: bne         $s2, $zero, L_0029269C
    if (ctx->r18 != 0) {
        // 0x00292680: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0029269C;
    }
    // 0x00292680: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00292684: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00292688: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x0029268C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00292690: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00292694: jal         0x0029B020
    // 0x00292698: addiu       $a2, $zero, 0x376
    ctx->r6 = ADD32(0, 0X376);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00292698: addiu       $a2, $zero, 0x376
    ctx->r6 = ADD32(0, 0X376);
    after_0:
L_0029269C:
    // 0x0029269C: blez        $s0, L_00292754
    if (SIGNED(ctx->r16) <= 0) {
        // 0x002926A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00292754;
    }
    // 0x002926A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002926A4: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x002926A8: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x002926AC: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
L_002926B0:
    // 0x002926B0: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x002926B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002926B8: sra         $a0, $v0, 1
    ctx->r4 = S32(SIGNED(ctx->r2) >> 1);
    // 0x002926BC: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x002926C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002926C4: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x002926C8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x002926CC: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x002926D0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x002926D4: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x002926D8: bnel        $v0, $zero, L_00292744
    if (ctx->r2 != 0) {
        // 0x002926DC: addiu       $s0, $a0, -0x1
        ctx->r16 = ADD32(ctx->r4, -0X1);
            goto L_00292744;
    }
    goto skip_0;
    // 0x002926DC: addiu       $s0, $a0, -0x1
    ctx->r16 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x002926E0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x002926E4: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x002926E8: bne         $v0, $zero, L_00292710
    if (ctx->r2 != 0) {
        // 0x002926EC: nop
    
            goto L_00292710;
    }
    // 0x002926EC: nop

    // 0x002926F0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002926F4: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x002926F8: bne         $v0, $zero, L_00292710
    if (ctx->r2 != 0) {
        // 0x002926FC: nop
    
            goto L_00292710;
    }
    // 0x002926FC: nop

    // 0x00292700: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x00292704: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x00292708: beq         $v0, $zero, L_00292754
    if (ctx->r2 == 0) {
        // 0x0029270C: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00292754;
    }
    // 0x0029270C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_00292710:
    // 0x00292710: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x00292714: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x00292718: bnel        $v0, $zero, L_00292744
    if (ctx->r2 != 0) {
        // 0x0029271C: addiu       $s0, $a0, -0x1
        ctx->r16 = ADD32(ctx->r4, -0X1);
            goto L_00292744;
    }
    goto skip_1;
    // 0x0029271C: addiu       $s0, $a0, -0x1
    ctx->r16 = ADD32(ctx->r4, -0X1);
    skip_1:
    // 0x00292720: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00292724: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x00292728: beql        $v0, $zero, L_00292744
    if (ctx->r2 == 0) {
        // 0x0029272C: addiu       $s1, $a0, 0x1
        ctx->r17 = ADD32(ctx->r4, 0X1);
            goto L_00292744;
    }
    goto skip_2;
    // 0x0029272C: addiu       $s1, $a0, 0x1
    ctx->r17 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x00292730: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x00292734: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x00292738: bnel        $v0, $zero, L_00292744
    if (ctx->r2 != 0) {
        // 0x0029273C: addiu       $s1, $a0, 0x1
        ctx->r17 = ADD32(ctx->r4, 0X1);
            goto L_00292744;
    }
    goto skip_3;
    // 0x0029273C: addiu       $s1, $a0, 0x1
    ctx->r17 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x00292740: addiu       $s0, $a0, -0x1
    ctx->r16 = ADD32(ctx->r4, -0X1);
L_00292744:
    // 0x00292744: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00292748: beq         $v0, $zero, L_002926B0
    if (ctx->r2 == 0) {
        // 0x0029274C: addu        $v0, $s1, $s0
        ctx->r2 = ADD32(ctx->r17, ctx->r16);
            goto L_002926B0;
    }
    // 0x0029274C: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    // 0x00292750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00292754:
    // 0x00292754: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00292758: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029275C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00292760: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00292764: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00292768: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029276C: jr          $ra
    // 0x00292770: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00292770: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00421B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421B50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421B58: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00421B5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00421B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00421B64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00421B68: beq         $a0, $v0, L_00421B80
    if (ctx->r4 == ctx->r2) {
        // 0x00421B6C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_00421B80;
    }
    // 0x00421B6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00421B70: addiu       $s0, $a0, 0x1
    ctx->r16 = ADD32(ctx->r4, 0X1);
    // 0x00421B74: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00421B78: beql        $v0, $zero, L_00421B80
    if (ctx->r2 == 0) {
        // 0x00421B7C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00421B80;
    }
    goto skip_0;
    // 0x00421B7C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_00421B80:
    // 0x00421B80: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00421B84: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_00421B88:
    // 0x00421B88: jal         0x00426480
    // 0x00421B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x00421B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00421B90: jal         0x0042655C
    // 0x00421B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x00421B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00421B98: bne         $v0, $s2, L_00421BC0
    if (ctx->r2 != ctx->r18) {
        // 0x00421B9C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00421BC0;
    }
    // 0x00421B9C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00421BA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00421BA4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00421BA8: beql        $v0, $zero, L_00421BB0
    if (ctx->r2 == 0) {
        // 0x00421BAC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00421BB0;
    }
    goto skip_1;
    // 0x00421BAC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00421BB0:
    // 0x00421BB0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00421BB4: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00421BB8: bne         $v0, $zero, L_00421B88
    if (ctx->r2 != 0) {
        // 0x00421BBC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00421B88;
    }
    // 0x00421BBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00421BC0:
    // 0x00421BC0: beql        $s1, $v0, L_00421BC8
    if (ctx->r17 == ctx->r2) {
        // 0x00421BC4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00421BC8;
    }
    goto skip_2;
    // 0x00421BC4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_2:
L_00421BC8:
    // 0x00421BC8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00421BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00421BD0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00421BD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421BD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421BDC: jr          $ra
    // 0x00421BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004053C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004053C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004053C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004053CC: addiu       $v0, $v0, -0x5E4
    ctx->r2 = ADD32(ctx->r2, -0X5E4);
    // 0x004053D0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004053D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004053D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004053DC: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x004053E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004053E4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x004053E8: nop

    // 0x004053EC: bc1t        L_004056C4
    if (c1cs) {
        // 0x004053F0: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_004056C4;
    }
    // 0x004053F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004053F4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x004053F8: beq         $v0, $zero, L_004056C8
    if (ctx->r2 == 0) {
        // 0x004053FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004056C8;
    }
    // 0x004053FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00405400: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405404: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x00405408: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0040540C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405410: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405414: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405418: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040541C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405420: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00405424: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00405428: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x0040542C: beq         $v0, $zero, L_004056C4
    if (ctx->r2 == 0) {
        // 0x00405430: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004056C4;
    }
    // 0x00405430: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405434: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405438: addu        $at, $at, $v0
    gpr jr_addend_00405440 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040543C: lw          $v0, 0x448($at)
    ctx->r2 = ADD32(ctx->r1, 0X448);
    // 0x00405440: jr          $v0
    // 0x00405444: nop

    switch (jr_addend_00405440 >> 2) {
        case 0: goto L_00405448; break;
        case 1: goto L_00405484; break;
        case 2: goto L_004054EC; break;
        case 3: goto L_004056C4; break;
        case 4: goto L_00405530; break;
        case 5: goto L_00405544; break;
        default: switch_error(__func__, 0x00405440, 0x800C0448);
    }
    // 0x00405444: nop

L_00405448:
    // 0x00405448: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040544C: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x00405450: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405454: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405458: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040545C: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405464: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00405468: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0040546C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00405470: beq         $v0, $s1, L_004054DC
    if (ctx->r2 == ctx->r17) {
        // 0x00405474: nop
    
            goto L_004054DC;
    }
    // 0x00405474: nop

    // 0x00405478: lh          $a0, 0x6($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X6);
    // 0x0040547C: j           L_004054C4
    // 0x00405480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
        goto L_004054C4;
    // 0x00405480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00405484:
    // 0x00405484: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405488: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x0040548C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405490: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405494: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405498: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x0040549C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004054A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004054A4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004054A8: jal         0x0026D518
    // 0x004054AC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x004054AC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    after_0:
    // 0x004054B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004054B4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004054B8: beq         $a0, $s1, L_004054DC
    if (ctx->r4 == ctx->r17) {
        // 0x004054BC: nop
    
            goto L_004054DC;
    }
    // 0x004054BC: nop

    // 0x004054C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_004054C4:
    // 0x004054C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x004054C8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x004054CC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x004054D0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x004054D4: jal         0x00275544
    // 0x004054D8: nop

    func_00275544(rdram, ctx);
        goto after_1;
    // 0x004054D8: nop

    after_1:
L_004054DC:
    // 0x004054DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004054E0: sw          $s1, -0x5D8($at)
    MEM_W(-0X5D8, ctx->r1) = ctx->r17;
    // 0x004054E4: j           L_004056C8
    // 0x004054E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004056C8;
    // 0x004054E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004054EC:
    // 0x004054EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004054F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004054F4: lw          $a0, -0x5D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5D8);
    // 0x004054F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004054FC: addiu       $a1, $a1, -0x5E0
    ctx->r5 = ADD32(ctx->r5, -0X5E0);
    // 0x00405500: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x00405504: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405508: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040550C: lw          $a0, -0x5E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E0);
    // 0x00405510: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405514: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405518: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0040551C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00405520: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00405524: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x00405528: j           L_004056C8
    // 0x0040552C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
        goto L_004056C8;
    // 0x0040552C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
L_00405530:
    // 0x00405530: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405538: sw          $v0, -0x5D8($at)
    MEM_W(-0X5D8, ctx->r1) = ctx->r2;
    // 0x0040553C: j           L_004056C8
    // 0x00405540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004056C8;
    // 0x00405540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00405544:
    // 0x00405544: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405548: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0040554C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405550: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405554: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405558: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040555C: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405560: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405564: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405568: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0040556C: jal         0x002119FC
    // 0x00405570: nop

    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00405570: nop

    after_2:
    // 0x00405574: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00405578: addiu       $a2, $a2, -0x5E4
    ctx->r6 = ADD32(ctx->r6, -0X5E4);
    // 0x0040557C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405580: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x00405584: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405588: lwc1        $f1, 0x460($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X460);
    // 0x0040558C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00405590: lw          $a1, -0x5E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5E0);
    // 0x00405594: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405598: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040559C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004055A0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004055A4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004055A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004055AC: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x004055B0: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x004055B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004055B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004055BC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004055C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004055C4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004055C8: swc1        $f1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x004055CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x004055D0: blez        $v0, L_00405674
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004055D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00405674;
    }
    // 0x004055D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004055D8: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x004055DC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x004055E0: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_004055E4:
    // 0x004055E4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x004055E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004055EC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004055F0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004055F4: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x004055F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004055FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405600: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405604: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00405608: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0040560C: bne         $v0, $t0, L_00405640
    if (ctx->r2 != ctx->r8) {
        // 0x00405610: nop
    
            goto L_00405640;
    }
    // 0x00405610: nop

    // 0x00405614: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405618: lw          $v0, -0x5D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5D8);
    // 0x0040561C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405620: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00405624: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405628: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0040562C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00405630: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00405634: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00405638: bnel        $v0, $zero, L_00405640
    if (ctx->r2 != 0) {
        // 0x0040563C: sw          $zero, 0x0($a3)
        MEM_W(0X0, ctx->r7) = 0;
            goto L_00405640;
    }
    goto skip_0;
    // 0x0040563C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    skip_0:
L_00405640:
    // 0x00405640: lw          $v0, -0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, -0X4);
    // 0x00405644: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00405648: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040564C: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x00405650: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405654: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405658: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040565C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00405660: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00405664: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00405668: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040566C: bne         $v0, $zero, L_004055E4
    if (ctx->r2 != 0) {
        // 0x00405670: nop
    
            goto L_004055E4;
    }
    // 0x00405670: nop

L_00405674:
    // 0x00405674: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405678: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0040567C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405680: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405684: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405688: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x0040568C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405690: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405694: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00405698: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040569C: bne         $v1, $v0, L_004056C8
    if (ctx->r3 != ctx->r2) {
        // 0x004056A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004056C8;
    }
    // 0x004056A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004056A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004056A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004056AC: addiu       $v1, $v1, -0x5DC
    ctx->r3 = ADD32(ctx->r3, -0X5DC);
    // 0x004056B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x004056B4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x004056B8: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x004056BC: j           L_004056C8
    // 0x004056C0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
        goto L_004056C8;
    // 0x004056C0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_004056C4:
    // 0x004056C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004056C8:
    // 0x004056C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004056CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004056D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004056D4: jr          $ra
    // 0x004056D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004056D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00203CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00203CA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00203CA4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00203CA8: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x00203CAC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00203CB0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00203CB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00203CB8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00203CBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00203CC0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00203CC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00203CC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00203CCC: jal         0x0029DFF0
    // 0x00203CD0: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00203CD0: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00203CD4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00203CD8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203CDC: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00203CE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00203CE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203CEC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203CF0: beq         $v1, $v0, L_00203D1C
    if (ctx->r3 == ctx->r2) {
        // 0x00203CF4: nop
    
            goto L_00203D1C;
    }
    // 0x00203CF4: nop

    // 0x00203CF8: jal         0x0029E010
    // 0x00203CFC: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00203CFC: nop

    after_1:
    // 0x00203D00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203D04: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203D08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203D0C: jal         0x0029B6F0
    // 0x00203D10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00203D10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00203D14: j           L_00203D28
    // 0x00203D18: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
        goto L_00203D28;
    // 0x00203D18: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00203D1C:
    // 0x00203D1C: jal         0x0029E010
    // 0x00203D20: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00203D20: nop

    after_3:
    // 0x00203D24: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00203D28:
    // 0x00203D28: srl         $v1, $s0, 1
    ctx->r3 = S32(U32(ctx->r16) >> 1);
    // 0x00203D2C: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203D30: srl         $v1, $s0, 9
    ctx->r3 = S32(U32(ctx->r16) >> 9);
    // 0x00203D34: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203D38: srl         $v1, $s0, 17
    ctx->r3 = S32(U32(ctx->r16) >> 17);
    // 0x00203D3C: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203D40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203D44: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x00203D48: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203D4C: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00203D50: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00203D54: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00203D58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00203D5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00203D60: bne         $v0, $s0, L_00203D80
    if (ctx->r2 != ctx->r16) {
        // 0x00203D64: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00203D80;
    }
    // 0x00203D64: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00203D68: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00203D6C: j           L_00203DA0
    // 0x00203D70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_00203DA0;
    // 0x00203D70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00203D74:
    // 0x00203D74: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00203D78: j           L_00203DA0
    // 0x00203D7C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_00203DA0;
    // 0x00203D7C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00203D80:
    // 0x00203D80: beq         $v1, $zero, L_00203DA0
    if (ctx->r3 == 0) {
        // 0x00203D84: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00203DA0;
    }
    // 0x00203D84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00203D88:
    // 0x00203D88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00203D8C: beq         $v0, $s0, L_00203D74
    if (ctx->r2 == ctx->r16) {
        // 0x00203D90: nop
    
            goto L_00203D74;
    }
    // 0x00203D90: nop

    // 0x00203D94: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x00203D98: bne         $v1, $zero, L_00203D88
    if (ctx->r3 != 0) {
        // 0x00203D9C: nop
    
            goto L_00203D88;
    }
    // 0x00203D9C: nop

L_00203DA0:
    // 0x00203DA0: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x00203DA4: beq         $a2, $zero, L_00203E44
    if (ctx->r6 == 0) {
        // 0x00203DA8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00203E44;
    }
    // 0x00203DA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203DAC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00203DB0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00203DB4: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00203DB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00203DBC: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00203DC0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x00203DC4: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x00203DC8: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x00203DCC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203DD0: lw          $v0, -0x7210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7210);
    // 0x00203DD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203DD8: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x00203DDC: jal         0x00200818
    // 0x00203DE0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    func_00200818(rdram, ctx);
        goto after_4;
    // 0x00203DE0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    after_4:
    // 0x00203DE4: jal         0x0029DFF0
    // 0x00203DE8: nop

    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x00203DE8: nop

    after_5:
    // 0x00203DEC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203DF0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203DF4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00203DF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203DFC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203E00: beq         $v1, $zero, L_00203E2C
    if (ctx->r3 == 0) {
        // 0x00203E04: nop
    
            goto L_00203E2C;
    }
    // 0x00203E04: nop

    // 0x00203E08: jal         0x0029E010
    // 0x00203E0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00203E0C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00203E10: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203E14: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203E18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203E1C: jal         0x0029B820
    // 0x00203E20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00203E20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00203E24: j           L_00203E34
    // 0x00203E28: nop

        goto L_00203E34;
    // 0x00203E28: nop

L_00203E2C:
    // 0x00203E2C: jal         0x0029E010
    // 0x00203E30: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00203E30: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_00203E34:
    // 0x00203E34: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00203E38: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00203E3C: j           L_002041C4
    // 0x00203E40: nop

        goto L_002041C4;
    // 0x00203E40: nop

L_00203E44:
    // 0x00203E44: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203E48: addiu       $v0, $v0, -0x7214
    ctx->r2 = ADD32(ctx->r2, -0X7214);
    // 0x00203E4C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00203E50: lw          $a0, -0x5C($v0)
    ctx->r4 = MEM_W(ctx->r2, -0X5C);
    // 0x00203E54: beq         $a0, $zero, L_00203E74
    if (ctx->r4 == 0) {
        // 0x00203E58: or          $s3, $s3, $v1
        ctx->r19 = ctx->r19 | ctx->r3;
            goto L_00203E74;
    }
    // 0x00203E58: or          $s3, $s3, $v1
    ctx->r19 = ctx->r19 | ctx->r3;
L_00203E5C:
    // 0x00203E5C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00203E60: beql        $v0, $s0, L_00203E74
    if (ctx->r2 == ctx->r16) {
        // 0x00203E64: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00203E74;
    }
    goto skip_0;
    // 0x00203E64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x00203E68: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x00203E6C: bne         $a0, $zero, L_00203E5C
    if (ctx->r4 != 0) {
        // 0x00203E70: nop
    
            goto L_00203E5C;
    }
    // 0x00203E70: nop

L_00203E74:
    // 0x00203E74: bne         $a1, $zero, L_00204170
    if (ctx->r5 != 0) {
        // 0x00203E78: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00204170;
    }
    // 0x00203E78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00203E7C: jal         0x002066F8
    // 0x00203E80: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002066F8(rdram, ctx);
        goto after_9;
    // 0x00203E80: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_9:
    // 0x00203E84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00203E88: beq         $v1, $zero, L_00204170
    if (ctx->r3 == 0) {
        // 0x00203E8C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_00204170;
    }
    // 0x00203E8C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00203E90: sw          $s0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r16;
    // 0x00203E94: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x00203E98: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x00203E9C: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x00203EA0: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x00203EA4: sw          $s4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r20;
    // 0x00203EA8: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x00203EAC: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x00203EB0: beq         $s1, $zero, L_00203ED0
    if (ctx->r17 == 0) {
        // 0x00203EB4: sw          $v0, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r2;
            goto L_00203ED0;
    }
    // 0x00203EB4: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x00203EB8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00203EBC: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x00203EC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00203EC4: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00203EC8: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x00203ECC: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_00203ED0:
    // 0x00203ED0: beq         $s2, $zero, L_00203EF0
    if (ctx->r18 == 0) {
        // 0x00203ED4: nop
    
            goto L_00203EF0;
    }
    // 0x00203ED4: nop

    // 0x00203ED8: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00203EDC: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x00203EE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00203EE4: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00203EE8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x00203EEC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_00203EF0:
    // 0x00203EF0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00203EF4: addiu       $s0, $s0, -0x7284
    ctx->r16 = ADD32(ctx->r16, -0X7284);
    // 0x00203EF8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00203EFC: jal         0x00200738
    // 0x00203F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_10;
    // 0x00203F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00203F04: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00203F08: jal         0x00200574
    // 0x00203F0C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_00200574(rdram, ctx);
        goto after_11;
    // 0x00203F0C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_11:
    // 0x00203F10: jal         0x0029DFF0
    // 0x00203F14: nop

    func_0029DFF0(rdram, ctx);
        goto after_12;
    // 0x00203F14: nop

    after_12:
    // 0x00203F18: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203F1C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203F20: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00203F24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203F28: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203F2C: beq         $v1, $zero, L_00203F54
    if (ctx->r3 == 0) {
        // 0x00203F30: nop
    
            goto L_00203F54;
    }
    // 0x00203F30: nop

    // 0x00203F34: jal         0x0029E010
    // 0x00203F38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_13;
    // 0x00203F38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_13:
    // 0x00203F3C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x00203F40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203F44: jal         0x0029B820
    // 0x00203F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_14;
    // 0x00203F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x00203F4C: j           L_00203F5C
    // 0x00203F50: nop

        goto L_00203F5C;
    // 0x00203F50: nop

L_00203F54:
    // 0x00203F54: jal         0x0029E010
    // 0x00203F58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_15;
    // 0x00203F58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_15:
L_00203F5C:
    // 0x00203F5C: beq         $s3, $zero, L_00204050
    if (ctx->r19 == 0) {
        // 0x00203F60: addiu       $v1, $zero, -0xF
        ctx->r3 = ADD32(0, -0XF);
            goto L_00204050;
    }
    // 0x00203F60: addiu       $v1, $zero, -0xF
    ctx->r3 = ADD32(0, -0XF);
    // 0x00203F64: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00203F68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00203F6C: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x00203F70: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x00203F74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00203F78: jal         0x00201B50
    // 0x00203F7C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    func_00201B50(rdram, ctx);
        goto after_16;
    // 0x00203F7C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    after_16:
    // 0x00203F80: jal         0x0029DFF0
    // 0x00203F84: nop

    func_0029DFF0(rdram, ctx);
        goto after_17;
    // 0x00203F84: nop

    after_17:
    // 0x00203F88: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00203F8C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203F90: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00203F98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00203F9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203FA0: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203FA4: beq         $v1, $v0, L_00203FD0
    if (ctx->r3 == ctx->r2) {
        // 0x00203FA8: nop
    
            goto L_00203FD0;
    }
    // 0x00203FA8: nop

    // 0x00203FAC: jal         0x0029E010
    // 0x00203FB0: nop

    func_0029E010(rdram, ctx);
        goto after_18;
    // 0x00203FB0: nop

    after_18:
    // 0x00203FB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203FB8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203FBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203FC0: jal         0x0029B6F0
    // 0x00203FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_19;
    // 0x00203FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x00203FC8: j           L_00203FDC
    // 0x00203FCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00203FDC;
    // 0x00203FCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00203FD0:
    // 0x00203FD0: jal         0x0029E010
    // 0x00203FD4: nop

    func_0029E010(rdram, ctx);
        goto after_20;
    // 0x00203FD4: nop

    after_20:
    // 0x00203FD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00203FDC:
    // 0x00203FDC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00203FE0: jal         0x002044A8
    // 0x00203FE4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_002044A8(rdram, ctx);
        goto after_21;
    // 0x00203FE4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_21:
    // 0x00203FE8: jal         0x0029DFF0
    // 0x00203FEC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0029DFF0(rdram, ctx);
        goto after_22;
    // 0x00203FEC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_22:
    // 0x00203FF0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203FF4: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203FF8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00203FFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204000: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204004: beq         $v1, $zero, L_00204030
    if (ctx->r3 == 0) {
        // 0x00204008: nop
    
            goto L_00204030;
    }
    // 0x00204008: nop

    // 0x0020400C: jal         0x0029E010
    // 0x00204010: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_23;
    // 0x00204010: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_23:
    // 0x00204014: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204018: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x0020401C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204020: jal         0x0029B820
    // 0x00204024: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_24;
    // 0x00204024: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_24:
    // 0x00204028: j           L_00204038
    // 0x0020402C: nop

        goto L_00204038;
    // 0x0020402C: nop

L_00204030:
    // 0x00204030: jal         0x0029E010
    // 0x00204034: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_25;
    // 0x00204034: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_25:
L_00204038:
    // 0x00204038: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0020403C: beql        $v0, $zero, L_002041C4
    if (ctx->r2 == 0) {
        // 0x00204040: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002041C4;
    }
    goto skip_1;
    // 0x00204040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x00204044: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00204048: j           L_002041C4
    // 0x0020404C: nop

        goto L_002041C4;
    // 0x0020404C: nop

L_00204050:
    // 0x00204050: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00204054: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x00204058: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0020405C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00204060: addiu       $s0, $s0, -0x7BB0
    ctx->r16 = ADD32(ctx->r16, -0X7BB0);
    // 0x00204064: jal         0x00201BDC
    // 0x00204068: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00201BDC(rdram, ctx);
        goto after_26;
    // 0x00204068: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_26:
    // 0x0020406C: bne         $v0, $zero, L_002041C4
    if (ctx->r2 != 0) {
        // 0x00204070: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002041C4;
    }
    // 0x00204070: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00204074: jal         0x0029DFF0
    // 0x00204078: nop

    func_0029DFF0(rdram, ctx);
        goto after_27;
    // 0x00204078: nop

    after_27:
    // 0x0020407C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00204080: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204084: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0020408C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00204090: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204094: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204098: beq         $v1, $v0, L_002040C0
    if (ctx->r3 == ctx->r2) {
        // 0x0020409C: nop
    
            goto L_002040C0;
    }
    // 0x0020409C: nop

    // 0x002040A0: jal         0x0029E010
    // 0x002040A4: nop

    func_0029E010(rdram, ctx);
        goto after_28;
    // 0x002040A4: nop

    after_28:
    // 0x002040A8: addiu       $a0, $s0, 0x960
    ctx->r4 = ADD32(ctx->r16, 0X960);
    // 0x002040AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002040B0: jal         0x0029B6F0
    // 0x002040B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_29;
    // 0x002040B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_29:
    // 0x002040B8: j           L_002040C8
    // 0x002040BC: nop

        goto L_002040C8;
    // 0x002040BC: nop

L_002040C0:
    // 0x002040C0: jal         0x0029E010
    // 0x002040C4: nop

    func_0029E010(rdram, ctx);
        goto after_30;
    // 0x002040C4: nop

    after_30:
L_002040C8:
    // 0x002040C8: beq         $s1, $zero, L_002040F0
    if (ctx->r17 == 0) {
        // 0x002040CC: nop
    
            goto L_002040F0;
    }
    // 0x002040CC: nop

    // 0x002040D0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x002040D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002040D8: bne         $v0, $zero, L_002040F0
    if (ctx->r2 != 0) {
        // 0x002040DC: sw          $v0, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->r2;
            goto L_002040F0;
    }
    // 0x002040DC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x002040E0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x002040E4: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x002040E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002040EC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_002040F0:
    // 0x002040F0: beq         $s2, $zero, L_00204118
    if (ctx->r18 == 0) {
        // 0x002040F4: nop
    
            goto L_00204118;
    }
    // 0x002040F4: nop

    // 0x002040F8: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x002040FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00204100: bne         $v0, $zero, L_00204118
    if (ctx->r2 != 0) {
        // 0x00204104: sw          $v0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r2;
            goto L_00204118;
    }
    // 0x00204104: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x00204108: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x0020410C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00204110: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00204114: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_00204118:
    // 0x00204118: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020411C: addiu       $s0, $s0, -0x7270
    ctx->r16 = ADD32(ctx->r16, -0X7270);
    // 0x00204120: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00204124: jal         0x00200738
    // 0x00204128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_31;
    // 0x00204128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_31:
    // 0x0020412C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00204130: jal         0x00200518
    // 0x00204134: addiu       $a0, $s0, -0x14
    ctx->r4 = ADD32(ctx->r16, -0X14);
    func_00200518(rdram, ctx);
        goto after_32;
    // 0x00204134: addiu       $a0, $s0, -0x14
    ctx->r4 = ADD32(ctx->r16, -0X14);
    after_32:
    // 0x00204138: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0020413C: jal         0x002066B0
    // 0x00204140: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002066B0(rdram, ctx);
        goto after_33;
    // 0x00204140: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_33:
    // 0x00204144: jal         0x0029DFF0
    // 0x00204148: nop

    func_0029DFF0(rdram, ctx);
        goto after_34;
    // 0x00204148: nop

    after_34:
    // 0x0020414C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204150: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204154: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00204158: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020415C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204160: beq         $v1, $zero, L_002041B8
    if (ctx->r3 == 0) {
        // 0x00204164: nop
    
            goto L_002041B8;
    }
    // 0x00204164: nop

    // 0x00204168: j           L_00204194
    // 0x0020416C: nop

        goto L_00204194;
    // 0x0020416C: nop

L_00204170:
    // 0x00204170: jal         0x0029DFF0
    // 0x00204174: nop

    func_0029DFF0(rdram, ctx);
        goto after_35;
    // 0x00204174: nop

    after_35:
    // 0x00204178: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020417C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204180: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00204184: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204188: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020418C: beq         $v1, $zero, L_002041B8
    if (ctx->r3 == 0) {
        // 0x00204190: nop
    
            goto L_002041B8;
    }
    // 0x00204190: nop

L_00204194:
    // 0x00204194: jal         0x0029E010
    // 0x00204198: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_36;
    // 0x00204198: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_36:
    // 0x0020419C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002041A0: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002041A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002041A8: jal         0x0029B820
    // 0x002041AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_37;
    // 0x002041AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_37:
    // 0x002041B0: j           L_002041C4
    // 0x002041B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_002041C4;
    // 0x002041B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002041B8:
    // 0x002041B8: jal         0x0029E010
    // 0x002041BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_38;
    // 0x002041BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_38:
    // 0x002041C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002041C4:
    // 0x002041C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002041C8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x002041CC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002041D0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002041D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002041D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002041DC: jr          $ra
    // 0x002041E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002041E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045FCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FCAC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0045FCB0: beq         $v0, $zero, L_0045FCC4
    if (ctx->r2 == 0) {
        // 0x0045FCB4: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_0045FCC4;
    }
    // 0x0045FCB4: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_0045FCB8:
    // 0x0045FCB8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FCBC: bne         $v0, $zero, L_0045FCB8
    if (ctx->r2 != 0) {
        // 0x0045FCC0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045FCB8;
    }
    // 0x0045FCC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0045FCC4:
    // 0x0045FCC4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x0045FCC8: jr          $ra
    // 0x0045FCCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    return;
    // 0x0045FCCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
;}
RECOMP_FUNC void func_00265ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265ED8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00265EDC: srl         $v0, $v0, 22
    ctx->r2 = S32(U32(ctx->r2) >> 22);
    // 0x00265EE0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00265EE4: jr          $ra
    // 0x00265EE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x00265EE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_00249898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00249898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0024989C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002498A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002498A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002498A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002498AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002498B0: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x002498B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002498B8: beq         $v1, $v0, L_00249A40
    if (ctx->r3 == ctx->r2) {
        // 0x002498BC: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00249A40;
    }
    // 0x002498BC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002498C0: lh          $v0, 0x52A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52A);
    // 0x002498C4: beq         $v0, $zero, L_00249A40
    if (ctx->r2 == 0) {
        // 0x002498C8: lui         $v1, 0xE300
        ctx->r3 = S32(0XE300 << 16);
            goto L_00249A40;
    }
    // 0x002498C8: lui         $v1, 0xE300
    ctx->r3 = S32(0XE300 << 16);
    // 0x002498CC: ori         $v1, $v1, 0x1201
    ctx->r3 = ctx->r3 | 0X1201;
    // 0x002498D0: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x002498D4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002498D8: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x002498DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002498E0: ori         $a1, $a1, 0xC00
    ctx->r5 = ctx->r5 | 0XC00;
    // 0x002498E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002498E8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002498EC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002498F0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x002498F4: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
    // 0x002498F8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x002498FC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00249900: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00249904: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x00249908: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x0024990C: jal         0x0020B5B8
    // 0x00249910: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    func_0020B5B8(rdram, ctx);
        goto after_0;
    // 0x00249910: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    after_0:
    // 0x00249914: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x00249918: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024991C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00249920: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00249924: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00249928: lwc1        $f0, 0x288($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X288);
    // 0x0024992C: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x00249930: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00249934: lwc1        $f3, 0x40($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X40);
    // 0x00249938: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0024993C: addiu       $v1, $s2, 0x288
    ctx->r3 = ADD32(ctx->r18, 0X288);
    // 0x00249940: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00249944: lwc1        $f1, 0x3C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X3C);
    // 0x00249948: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0024994C: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
    // 0x00249950: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00249954: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00249958: add.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x0024995C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00249960: lwc1        $f5, 0xC($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00249964: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x00249968: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024996C: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00249970: add.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f5.fl;
    // 0x00249974: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00249978: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x0024997C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x00249980: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x00249984: trunc.w.s   $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    ctx->f6.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00249988: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0024998C: trunc.w.s   $f6, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    ctx->f6.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00249990: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x00249994: jal         0x0028852C
    // 0x00249998: nop

    func_0028852C(rdram, ctx);
        goto after_1;
    // 0x00249998: nop

    after_1:
    // 0x0024999C: lui         $v0, 0xD9FF
    ctx->r2 = S32(0XD9FF << 16);
    // 0x002499A0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002499A4: lui         $a1, 0xDB04
    ctx->r5 = S32(0XDB04 << 16);
    // 0x002499A8: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x002499AC: lui         $a2, 0xDB04
    ctx->r6 = S32(0XDB04 << 16);
    // 0x002499B0: ori         $a2, $a2, 0xC
    ctx->r6 = ctx->r6 | 0XC;
    // 0x002499B4: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x002499B8: ori         $a3, $a3, 0x14
    ctx->r7 = ctx->r7 | 0X14;
    // 0x002499BC: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x002499C0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x002499C4: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x002499C8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002499CC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002499D0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x002499D4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002499D8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x002499DC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002499E0: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x002499E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002499E8: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x002499EC: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x002499F0: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x002499F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x002499F8: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x002499FC: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x00249A00: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    // 0x00249A04: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00249A08: ori         $a0, $zero, 0xFFFF
    ctx->r4 = 0 | 0XFFFF;
    // 0x00249A0C: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x00249A10: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x00249A14: sw          $a3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r7;
    // 0x00249A18: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x00249A1C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00249A20: sw          $t0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r8;
    // 0x00249A24: jal         0x0020B5D4
    // 0x00249A28: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    func_0020B5D4(rdram, ctx);
        goto after_2;
    // 0x00249A28: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    after_2:
    // 0x00249A2C: addiu       $a0, $s1, 0x288
    ctx->r4 = ADD32(ctx->r17, 0X288);
    // 0x00249A30: jal         0x0021D39C
    // 0x00249A34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0021D39C(rdram, ctx);
        goto after_3;
    // 0x00249A34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00249A38: jal         0x0020B624
    // 0x00249A3C: nop

    func_0020B624(rdram, ctx);
        goto after_4;
    // 0x00249A3C: nop

    after_4:
L_00249A40:
    // 0x00249A40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00249A44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00249A48: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00249A4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00249A50: jr          $ra
    // 0x00249A54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00249A54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0023C678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C678: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0023C67C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0023C680: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x0023C684: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x0023C688: mtc1        $a2, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r6;
    // 0x0023C68C: lwc1        $f5, 0x30($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0023C690: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_0023C694:
    // 0x0023C694: c.lt.s      $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl < ctx->f5.fl;
    // 0x0023C698: nop

    // 0x0023C69C: bc1f        L_0023C6BC
    if (!c1cs) {
        // 0x0023C6A0: addu        $a2, $a0, $a3
        ctx->r6 = ADD32(ctx->r4, ctx->r7);
            goto L_0023C6BC;
    }
    // 0x0023C6A0: addu        $a2, $a0, $a3
    ctx->r6 = ADD32(ctx->r4, ctx->r7);
    // 0x0023C6A4: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x0023C6A8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0023C6AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023C6B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023C6B4: j           L_0023C6D4
    // 0x0023C6B8: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
        goto L_0023C6D4;
    // 0x0023C6B8: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
L_0023C6BC:
    // 0x0023C6BC: addu        $a1, $a0, $a3
    ctx->r5 = ADD32(ctx->r4, ctx->r7);
    // 0x0023C6C0: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x0023C6C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0023C6C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023C6CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023C6D0: addu        $a2, $a0, $v0
    ctx->r6 = ADD32(ctx->r4, ctx->r2);
L_0023C6D4:
    // 0x0023C6D4: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0023C6D8: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0023C6DC: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0023C6E0: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0023C6E4: sub.s       $f0, $f6, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f1.fl;
    // 0x0023C6E8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C6EC: sub.s       $f3, $f7, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f7.fl - ctx->f3.fl;
    // 0x0023C6F0: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0023C6F4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023C6F8: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0023C6FC: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023C700: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x0023C704: nop

    // 0x0023C708: bc1f        L_0023C718
    if (!c1cs) {
        // 0x0023C70C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0023C718;
    }
    // 0x0023C70C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0023C710: jr          $ra
    // 0x0023C714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023C714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C718:
    // 0x0023C718: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0023C71C: slti        $v0, $t1, 0x4
    ctx->r2 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x0023C720: bne         $v0, $zero, L_0023C694
    if (ctx->r2 != 0) {
        // 0x0023C724: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_0023C694;
    }
    // 0x0023C724: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x0023C728: jr          $ra
    // 0x0023C72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0023C72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_004502B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004502B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004502B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004502B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004502BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004502C0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x004502C4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x004502C8: beq         $v0, $zero, L_004502D8
    if (ctx->r2 == 0) {
        // 0x004502CC: nop
    
            goto L_004502D8;
    }
    // 0x004502CC: nop

    // 0x004502D0: jalr        $v0
    // 0x004502D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004502D4: nop

    after_0:
L_004502D8:
    // 0x004502D8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004502DC: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x004502E0: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x004502E4: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    // 0x004502E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004502EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004502F0: jr          $ra
    // 0x004502F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004502F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002242F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002242F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002242FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224300: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00224304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00224308: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x0022430C: jal         0x002017D4
    // 0x00224310: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224310: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00224314: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00224318: sll         $s0, $s0, 5
    ctx->r16 = S32(ctx->r16 << 5);
    // 0x0022431C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00224320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00224324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224328: jr          $ra
    // 0x0022432C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0022432C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044803C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044803C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x00448040: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x00448044: lw          $s2, 0xB4($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB4);
    // 0x00448048: sdc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X98, ctx->r29);
    // 0x0044804C: lwc1        $f21, 0xB8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0XB8);
    // 0x00448050: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
    // 0x00448054: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x00448058: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0044805C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00448060: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x00448064: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00448068: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0044806C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00448070: beq         $s0, $zero, L_00448084
    if (ctx->r16 == 0) {
        // 0x00448074: sw          $ra, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r31;
            goto L_00448084;
    }
    // 0x00448074: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x00448078: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0044807C: beq         $v0, $zero, L_004481B4
    if (ctx->r2 == 0) {
        // 0x00448080: nop
    
            goto L_004481B4;
    }
    // 0x00448080: nop

L_00448084:
    // 0x00448084: beq         $s1, $zero, L_004480A4
    if (ctx->r17 == 0) {
        // 0x00448088: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004480A4;
    }
    // 0x00448088: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044808C: beq         $a3, $v0, L_004480A4
    if (ctx->r7 == ctx->r2) {
        // 0x00448090: nop
    
            goto L_004480A4;
    }
    // 0x00448090: nop

    // 0x00448094: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00448098: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0044809C: beq         $v0, $zero, L_004481B4
    if (ctx->r2 == 0) {
        // 0x004480A0: nop
    
            goto L_004481B4;
    }
    // 0x004480A0: nop

L_004480A4:
    // 0x004480A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004480A8: lwc1        $f0, 0x940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X940);
    // 0x004480AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x004480B0: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x004480B4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004480B8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004480BC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x004480C0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x004480C4: jal         0x002982F0
    // 0x004480C8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x004480C8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x004480CC: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x004480D0: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x004480D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004480D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x004480DC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x004480E0: jal         0x002974C0
    // 0x004480E4: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x004480E4: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x004480E8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x004480EC: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x004480F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004480F4: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x004480F8: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x004480FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00448100: addiu       $v0, $sp, 0x70
    ctx->r2 = ADD32(ctx->r29, 0X70);
    // 0x00448104: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00448108: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0044810C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00448110: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x00448114: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x00448118: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x0044811C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x00448120: jal         0x002688C8
    // 0x00448124: nop

    func_002688C8(rdram, ctx);
        goto after_2;
    // 0x00448124: nop

    after_2:
    // 0x00448128: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0044812C: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x00448130: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00448134: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x00448138: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x0044813C: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x00448140: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00448144: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x00448148: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x0044814C: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x00448150: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00448154: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00448158: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0044815C: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00448160: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00448164: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00448168: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0044816C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x00448170: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00448174: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00448178: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x0044817C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00448180: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x00448184: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x00448188: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0044818C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00448190: jal         0x00228108
    // 0x00448194: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    func_00228108(rdram, ctx);
        goto after_3;
    // 0x00448194: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_3:
    // 0x00448198: beq         $v0, $zero, L_004481B4
    if (ctx->r2 == 0) {
        // 0x0044819C: nop
    
            goto L_004481B4;
    }
    // 0x0044819C: nop

    // 0x004481A0: beq         $s0, $zero, L_004481B4
    if (ctx->r16 == 0) {
        // 0x004481A4: nop
    
            goto L_004481B4;
    }
    // 0x004481A4: nop

    // 0x004481A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004481AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004481B0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_004481B4:
    // 0x004481B4: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x004481B8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x004481BC: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x004481C0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x004481C4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x004481C8: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x004481CC: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x004481D0: jr          $ra
    // 0x004481D4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x004481D4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_0024C47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024C47C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0024C480: addu        $t4, $a1, $zero
    ctx->r12 = ADD32(ctx->r5, 0);
    // 0x0024C484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0024C488: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x0024C48C: addiu       $t2, $sp, 0x18
    ctx->r10 = ADD32(ctx->r29, 0X18);
    // 0x0024C490: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0024C494: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x0024C498: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0024C49C: lw          $v1, 0x58($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X58);
    // 0x0024C4A0: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x0024C4A4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0024C4A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0024C4AC: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
L_0024C4B0:
    // 0x0024C4B0: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x0024C4B4: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024C4B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024C4BC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0024C4C0: lw          $v1, -0x9E8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024C4C4: beql        $v0, $zero, L_0024C51C
    if (ctx->r2 == 0) {
        // 0x0024C4C8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0024C51C;
    }
    goto skip_0;
    // 0x0024C4C8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x0024C4CC: lw          $v0, 0x3C8($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X3C8);
    // 0x0024C4D0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024C4D4: beq         $v0, $zero, L_0024C4E8
    if (ctx->r2 == 0) {
        // 0x0024C4D8: nop
    
            goto L_0024C4E8;
    }
    // 0x0024C4D8: nop

    // 0x0024C4DC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0024C4E0: j           L_0024C4F0
    // 0x0024C4E4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_0024C4F0;
    // 0x0024C4E4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_0024C4E8:
    // 0x0024C4E8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0024C4EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_0024C4F0:
    // 0x0024C4F0: bne         $v0, $zero, L_0024C500
    if (ctx->r2 != 0) {
        // 0x0024C4F4: nop
    
            goto L_0024C500;
    }
    // 0x0024C4F4: nop

    // 0x0024C4F8: j           L_0024C51C
    // 0x0024C4FC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0024C51C;
    // 0x0024C4FC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0024C500:
    // 0x0024C500: lh          $a2, 0xC($v1)
    ctx->r6 = MEM_H(ctx->r3, 0XC);
    // 0x0024C504: addu        $v0, $t4, $a2
    ctx->r2 = ADD32(ctx->r12, ctx->r6);
    // 0x0024C508: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024C50C: beq         $v0, $zero, L_0024C51C
    if (ctx->r2 == 0) {
        // 0x0024C510: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0024C51C;
    }
    // 0x0024C510: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0024C514: slt         $v0, $t0, $a2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0024C518: xor         $v1, $v0, $v1
    ctx->r3 = ctx->r2 ^ ctx->r3;
L_0024C51C:
    // 0x0024C51C: beq         $v1, $zero, L_0024C528
    if (ctx->r3 == 0) {
        // 0x0024C520: sw          $v1, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r3;
            goto L_0024C528;
    }
    // 0x0024C520: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x0024C524: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0024C528:
    // 0x0024C528: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x0024C52C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0024C530: slti        $v0, $t0, 0x23
    ctx->r2 = SIGNED(ctx->r8) < 0X23 ? 1 : 0;
    // 0x0024C534: bne         $v0, $zero, L_0024C4B0
    if (ctx->r2 != 0) {
        // 0x0024C538: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_0024C4B0;
    }
    // 0x0024C538: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x0024C53C: div         $zero, $t3, $a3
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r7)));
    // 0x0024C540: bne         $a3, $zero, L_0024C54C
    if (ctx->r7 != 0) {
        // 0x0024C544: nop
    
            goto L_0024C54C;
    }
    // 0x0024C544: nop

    // 0x0024C548: break       7
    do_break(2409800);
L_0024C54C:
    // 0x0024C54C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0024C550: bne         $a3, $at, L_0024C564
    if (ctx->r7 != ctx->r1) {
        // 0x0024C554: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0024C564;
    }
    // 0x0024C554: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0024C558: bne         $t3, $at, L_0024C564
    if (ctx->r11 != ctx->r1) {
        // 0x0024C55C: nop
    
            goto L_0024C564;
    }
    // 0x0024C55C: nop

    // 0x0024C560: break       6
    do_break(2409824);
L_0024C564:
    // 0x0024C564: mflo        $a1
    ctx->r5 = lo;
    // 0x0024C568: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x0024C56C: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024C570: beq         $v0, $zero, L_0024C5AC
    if (ctx->r2 == 0) {
        // 0x0024C574: nop
    
            goto L_0024C5AC;
    }
    // 0x0024C574: nop

    // 0x0024C578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C57C: lwc1        $f0, 0x6C70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C70);
    // 0x0024C580: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x0024C584: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024C588: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024C58C: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x0024C590: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024C594: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024C598: nop

    // 0x0024C59C: bc1f        L_0024C5A8
    if (!c1cs) {
        // 0x0024C5A0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0024C5A8;
    }
    // 0x0024C5A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0024C5A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_0024C5A8:
    // 0x0024C5A8: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
L_0024C5AC:
    // 0x0024C5AC: mflo        $v1
    ctx->r3 = lo;
    // 0x0024C5B0: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x0024C5B4: nop

    // 0x0024C5B8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0024C5BC: bne         $v1, $zero, L_0024C5C8
    if (ctx->r3 != 0) {
        // 0x0024C5C0: nop
    
            goto L_0024C5C8;
    }
    // 0x0024C5C0: nop

    // 0x0024C5C4: break       7
    do_break(2409924);
L_0024C5C8:
    // 0x0024C5C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0024C5CC: bne         $v1, $at, L_0024C5E0
    if (ctx->r3 != ctx->r1) {
        // 0x0024C5D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0024C5E0;
    }
    // 0x0024C5D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0024C5D4: bne         $v0, $at, L_0024C5E0
    if (ctx->r2 != ctx->r1) {
        // 0x0024C5D8: nop
    
            goto L_0024C5E0;
    }
    // 0x0024C5D8: nop

    // 0x0024C5DC: break       6
    do_break(2409948);
L_0024C5E0:
    // 0x0024C5E0: mflo        $v0
    ctx->r2 = lo;
    // 0x0024C5E4: slti        $v0, $v0, 0x15
    ctx->r2 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x0024C5E8: bne         $v0, $zero, L_0024C634
    if (ctx->r2 != 0) {
        // 0x0024C5EC: addiu       $a2, $sp, 0x18
        ctx->r6 = ADD32(ctx->r29, 0X18);
            goto L_0024C634;
    }
    // 0x0024C5EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0024C5F0: addiu       $t0, $zero, 0x168
    ctx->r8 = ADD32(0, 0X168);
L_0024C5F4:
    // 0x0024C5F4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x0024C5F8: div         $zero, $t0, $v1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r3)));
    // 0x0024C5FC: bne         $v1, $zero, L_0024C608
    if (ctx->r3 != 0) {
        // 0x0024C600: nop
    
            goto L_0024C608;
    }
    // 0x0024C600: nop

    // 0x0024C604: break       7
    do_break(2409988);
L_0024C608:
    // 0x0024C608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0024C60C: bne         $v1, $at, L_0024C620
    if (ctx->r3 != ctx->r1) {
        // 0x0024C610: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0024C620;
    }
    // 0x0024C610: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0024C614: bne         $t0, $at, L_0024C620
    if (ctx->r8 != ctx->r1) {
        // 0x0024C618: nop
    
            goto L_0024C620;
    }
    // 0x0024C618: nop

    // 0x0024C61C: break       6
    do_break(2410012);
L_0024C620:
    // 0x0024C620: mflo        $v0
    ctx->r2 = lo;
    // 0x0024C624: slti        $v0, $v0, 0x15
    ctx->r2 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x0024C628: beq         $v0, $zero, L_0024C5F4
    if (ctx->r2 == 0) {
        // 0x0024C62C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0024C5F4;
    }
    // 0x0024C62C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0024C630: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
L_0024C634:
    // 0x0024C634: jal         0x0024BF1C
    // 0x0024C638: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_0024BF1C(rdram, ctx);
        goto after_0;
    // 0x0024C638: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x0024C63C: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0024C640: jr          $ra
    // 0x0024C644: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0024C644: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0043CCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043CCF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0043CCFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0043CD00: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0043CD04: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0043CD08: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0043CD0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0043CD10: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x0043CD14: addiu       $s2, $s2, 0x7078
    ctx->r18 = ADD32(ctx->r18, 0X7078);
    // 0x0043CD18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043CD1C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043CD20: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0043CD24: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x0043CD28: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x0043CD2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0043CD30: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x0043CD34: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043CD38: addiu       $v0, $v0, 0x165C
    ctx->r2 = ADD32(ctx->r2, 0X165C);
    // 0x0043CD3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0043CD40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0043CD44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0043CD48: sw          $v0, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r2;
    // 0x0043CD4C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0043CD50: addiu       $v0, $v0, 0x3F3C
    ctx->r2 = ADD32(ctx->r2, 0X3F3C);
    // 0x0043CD54: sw          $v0, 0xF0($s3)
    MEM_W(0XF0, ctx->r19) = ctx->r2;
    // 0x0043CD58: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0043CD5C: addiu       $v0, $v0, 0x37B0
    ctx->r2 = ADD32(ctx->r2, 0X37B0);
    // 0x0043CD60: sw          $v0, 0xF8($s3)
    MEM_W(0XF8, ctx->r19) = ctx->r2;
    // 0x0043CD64: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0043CD68: addiu       $v0, $v0, 0x3AD4
    ctx->r2 = ADD32(ctx->r2, 0X3AD4);
    // 0x0043CD6C: sw          $v0, 0x108($s3)
    MEM_W(0X108, ctx->r19) = ctx->r2;
    // 0x0043CD70: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0043CD74: addiu       $v0, $v0, 0x7DC0
    ctx->r2 = ADD32(ctx->r2, 0X7DC0);
    // 0x0043CD78: sw          $v0, 0xF4($s3)
    MEM_W(0XF4, ctx->r19) = ctx->r2;
    // 0x0043CD7C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0043CD80: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043CD84: addiu       $s0, $s0, -0x690
    ctx->r16 = ADD32(ctx->r16, -0X690);
    // 0x0043CD88: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x0043CD8C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x0043CD90: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0043CD94: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
    // 0x0043CD98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043CD9C: jal         0x00225F6C
    // 0x0043CDA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x0043CDA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0043CDA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043CDA8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043CDAC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0043CDB0: addiu       $a3, $zero, 0xC9
    ctx->r7 = ADD32(0, 0XC9);
    // 0x0043CDB4: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x0043CDB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043CDBC: jal         0x00225F6C
    // 0x0043CDC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x0043CDC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x0043CDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043CDC8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043CDCC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0043CDD0: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x0043CDD4: addiu       $v0, $s0, 0xC
    ctx->r2 = ADD32(ctx->r16, 0XC);
    // 0x0043CDD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043CDDC: jal         0x00225F6C
    // 0x0043CDE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_2;
    // 0x0043CDE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
    // 0x0043CDE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043CDE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043CDEC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0043CDF0: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    // 0x0043CDF4: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
    // 0x0043CDF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043CDFC: jal         0x00225F6C
    // 0x0043CE00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_3;
    // 0x0043CE00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_3:
    // 0x0043CE04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043CE08: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043CE0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0043CE10: addiu       $a3, $zero, 0xCC
    ctx->r7 = ADD32(0, 0XCC);
    // 0x0043CE14: addiu       $v0, $s0, 0x14
    ctx->r2 = ADD32(ctx->r16, 0X14);
    // 0x0043CE18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043CE1C: jal         0x00225F6C
    // 0x0043CE20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_4;
    // 0x0043CE20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_4:
    // 0x0043CE24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043CE28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0043CE2C: jal         0x00225EBC
    // 0x0043CE30: addiu       $a2, $zero, 0x1DB2
    ctx->r6 = ADD32(0, 0X1DB2);
    func_00225EBC(rdram, ctx);
        goto after_5;
    // 0x0043CE30: addiu       $a2, $zero, 0x1DB2
    ctx->r6 = ADD32(0, 0X1DB2);
    after_5:
    // 0x0043CE34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0043CE38: addiu       $s1, $s0, -0x344
    ctx->r17 = ADD32(ctx->r16, -0X344);
    // 0x0043CE3C: sw          $v0, -0x24($s0)
    MEM_W(-0X24, ctx->r16) = ctx->r2;
L_0043CE40:
    // 0x0043CE40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0043CE44: jal         0x002362E4
    // 0x0043CE48: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002362E4(rdram, ctx);
        goto after_6;
    // 0x0043CE48: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x0043CE4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0043CE50: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x0043CE54: bne         $v0, $zero, L_0043CE40
    if (ctx->r2 != 0) {
        // 0x0043CE58: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_0043CE40;
    }
    // 0x0043CE58: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
    // 0x0043CE5C: jal         0x00403C14
    // 0x0043CE60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00403C14(rdram, ctx);
        goto after_7;
    // 0x0043CE60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x0043CE64: jal         0x004070B4
    // 0x0043CE68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_004070B4(rdram, ctx);
        goto after_8;
    // 0x0043CE68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x0043CE6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0043CE70: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043CE74: addiu       $s0, $s0, -0x624
    ctx->r16 = ADD32(ctx->r16, -0X624);
    // 0x0043CE78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043CE7C: lwc1        $f0, 0x38C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X38C);
    // 0x0043CE80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043CE84: lwc1        $f1, 0x390($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X390);
    // 0x0043CE88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043CE8C: lwc1        $f2, 0x394($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X394);
    // 0x0043CE90: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0043CE94: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x0043CE98: sw          $s1, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r17;
    // 0x0043CE9C: sw          $zero, -0x8C($s0)
    MEM_W(-0X8C, ctx->r16) = 0;
    // 0x0043CEA0: sw          $zero, -0x84($s0)
    MEM_W(-0X84, ctx->r16) = 0;
    // 0x0043CEA4: sw          $s1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r17;
    // 0x0043CEA8: sb          $zero, -0x78($s0)
    MEM_B(-0X78, ctx->r16) = 0;
    // 0x0043CEAC: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x0043CEB0: swc1        $f0, -0x3C8($s0)
    MEM_W(-0X3C8, ctx->r16) = ctx->f0.u32l;
    // 0x0043CEB4: swc1        $f1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043CEB8: jal         0x00406F10
    // 0x0043CEBC: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    func_00406F10(rdram, ctx);
        goto after_9;
    // 0x0043CEBC: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    after_9:
    // 0x0043CEC0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0043CEC4: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x0043CEC8: sw          $zero, -0x3BC($s0)
    MEM_W(-0X3BC, ctx->r16) = 0;
    // 0x0043CECC: sw          $zero, -0x3B8($s0)
    MEM_W(-0X3B8, ctx->r16) = 0;
    // 0x0043CED0: sw          $zero, -0x74($s0)
    MEM_W(-0X74, ctx->r16) = 0;
    // 0x0043CED4: sw          $zero, -0x80($s0)
    MEM_W(-0X80, ctx->r16) = 0;
    // 0x0043CED8: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x0043CEDC: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0043CEE0: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x0043CEE4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0043CEE8: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    // 0x0043CEEC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0043CEF0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0043CEF4: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x0043CEF8: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0043CEFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0043CF00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043CF04: sw          $zero, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = 0;
    // 0x0043CF08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043CF0C: sw          $zero, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = 0;
    // 0x0043CF10: jal         0x00243414
    // 0x0043CF14: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_10;
    // 0x0043CF14: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    after_10:
    // 0x0043CF18: sb          $s1, 0x37($s3)
    MEM_B(0X37, ctx->r19) = ctx->r17;
    // 0x0043CF1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0043CF20: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0043CF24: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0043CF28: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0043CF2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0043CF30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0043CF34: jr          $ra
    // 0x0043CF38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0043CF38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004156FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004156FC: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x00415700: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x00415704: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00415708: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041570C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x00415710: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x00415714: sw          $fp, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r30;
    // 0x00415718: sw          $s7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r23;
    // 0x0041571C: sw          $s6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r22;
    // 0x00415720: sw          $s5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r21;
    // 0x00415724: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x00415728: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0041572C: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00415730: sdc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XE0, ctx->r29);
    // 0x00415734: sdc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XD8, ctx->r29);
    // 0x00415738: sdc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD0, ctx->r29);
    // 0x0041573C: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x00415740: jal         0x00416B28
    // 0x00415744: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_00416B28(rdram, ctx);
        goto after_0;
    // 0x00415744: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_0:
    // 0x00415748: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x0041574C: addiu       $a0, $zero, -0x400
    ctx->r4 = ADD32(0, -0X400);
    // 0x00415750: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x00415754: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x00415758: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x0041575C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x00415760: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x00415764: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x00415768: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0041576C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x00415770: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x00415774: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x00415778: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x0041577C: blez        $v1, L_00415850
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00415780: addu        $s6, $v0, $zero
        ctx->r22 = ADD32(ctx->r2, 0);
            goto L_00415850;
    }
    // 0x00415780: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x00415784: lui         $fp, 0x80
    ctx->r30 = S32(0X80 << 16);
    // 0x00415788: lui         $s7, 0x2000
    ctx->r23 = S32(0X2000 << 16);
    // 0x0041578C: addiu       $s5, $zero, 0x400
    ctx->r21 = ADD32(0, 0X400);
    // 0x00415790: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00415794: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00415798:
    // 0x00415798: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0041579C: addu        $s0, $v0, $s1
    ctx->r16 = ADD32(ctx->r2, ctx->r17);
    // 0x004157A0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x004157A4: and         $v0, $v1, $fp
    ctx->r2 = ctx->r3 & ctx->r30;
    // 0x004157A8: beq         $v0, $zero, L_0041583C
    if (ctx->r2 == 0) {
        // 0x004157AC: and         $v0, $v1, $s7
        ctx->r2 = ctx->r3 & ctx->r23;
            goto L_0041583C;
    }
    // 0x004157AC: and         $v0, $v1, $s7
    ctx->r2 = ctx->r3 & ctx->r23;
    // 0x004157B0: beq         $v0, $zero, L_004157D4
    if (ctx->r2 == 0) {
        // 0x004157B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004157D4;
    }
    // 0x004157B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004157B8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x004157BC: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x004157C0: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x004157C4: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x004157C8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004157CC: j           L_004157DC
    // 0x004157D0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
        goto L_004157DC;
    // 0x004157D0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_004157D4:
    // 0x004157D4: jal         0x0041363C
    // 0x004157D8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x004157D8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_1:
L_004157DC:
    // 0x004157DC: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x004157E0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x004157E4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x004157E8: bnel        $v0, $zero, L_004157F0
    if (ctx->r2 != 0) {
        // 0x004157EC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_004157F0;
    }
    goto skip_0;
    // 0x004157EC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_004157F0:
    // 0x004157F0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x004157F4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x004157F8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x004157FC: beq         $v0, $zero, L_00415808
    if (ctx->r2 == 0) {
        // 0x00415800: sw          $v1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r3;
            goto L_00415808;
    }
    // 0x00415800: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x00415804: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_00415808:
    // 0x00415808: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x0041580C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x00415810: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00415814: beq         $v0, $zero, L_00415820
    if (ctx->r2 == 0) {
        // 0x00415818: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_00415820;
    }
    // 0x00415818: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x0041581C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_00415820:
    // 0x00415820: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x00415824: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00415828: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041582C: beq         $v0, $zero, L_00415838
    if (ctx->r2 == 0) {
        // 0x00415830: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_00415838;
    }
    // 0x00415830: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00415834: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00415838:
    // 0x00415838: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
L_0041583C:
    // 0x0041583C: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415840: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415844: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415848: bne         $v0, $zero, L_00415798
    if (ctx->r2 != 0) {
        // 0x0041584C: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415798;
    }
    // 0x0041584C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_00415850:
    // 0x00415850: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x00415854: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00415858: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x0041585C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x00415860: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x00415864: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x00415868: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x0041586C: bltz        $a0, L_00415CA8
    if (SIGNED(ctx->r4) < 0) {
        // 0x00415870: sw          $a1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r5;
            goto L_00415CA8;
    }
    // 0x00415870: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x00415874: bltz        $a1, L_00415CA8
    if (SIGNED(ctx->r5) < 0) {
        // 0x00415878: nop
    
            goto L_00415CA8;
    }
    // 0x00415878: nop

    // 0x0041587C: lwc1        $f0, 0x288($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X288);
    // 0x00415880: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415884: lwc1        $f4, 0xC1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC1C);
    // 0x00415888: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0041588C: lwc1        $f2, 0x290($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0X290);
    // 0x00415890: lh          $v0, 0x2($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X2);
    // 0x00415894: lwc1        $f3, 0x28C($s6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r22, 0X28C);
    // 0x00415898: lwc1        $f1, 0x294($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X294);
    // 0x0041589C: mul.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x004158A0: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x004158A4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004158A8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004158AC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x004158B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x004158B4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x004158B8: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x004158BC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004158C0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004158C4: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x004158C8: add.s       $f23, $f2, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x004158CC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x004158D0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x004158D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004158D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004158DC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004158E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004158E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004158E8: sub.s       $f4, $f23, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x004158EC: srl         $v0, $a1, 31
    ctx->r2 = S32(U32(ctx->r5) >> 31);
    // 0x004158F0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x004158F4: add.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl + ctx->f0.fl;
    // 0x004158F8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004158FC: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00415900: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00415904: sub.s       $f3, $f1, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00415908: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x0041590C: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x00415910: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00415914: trunc.w.s   $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f4.fl);
    // 0x00415918: swc1        $f5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0041591C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415920: swc1        $f5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x00415924: trunc.w.s   $f5, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x00415928: swc1        $f5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0041592C: trunc.w.s   $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00415930: swc1        $f5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x00415934: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x00415938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041593C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415940: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x00415944: blez        $v1, L_00415CA8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00415948: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00415CA8;
    }
    // 0x00415948: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0041594C: lui         $s7, 0x80
    ctx->r23 = S32(0X80 << 16);
    // 0x00415950: lui         $s5, 0x2000
    ctx->r21 = S32(0X2000 << 16);
    // 0x00415954: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x00415958: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041595C: lwc1        $f22, 0xC20($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0XC20);
    // 0x00415960: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x00415964: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00415968:
    // 0x00415968: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0041596C: addu        $s0, $v0, $s1
    ctx->r16 = ADD32(ctx->r2, ctx->r17);
    // 0x00415970: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415974: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x00415978: beq         $v0, $zero, L_00415C94
    if (ctx->r2 == 0) {
        // 0x0041597C: nop
    
            goto L_00415C94;
    }
    // 0x0041597C: nop

    // 0x00415980: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00415984: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415988: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x0041598C: beq         $v0, $zero, L_004159CC
    if (ctx->r2 == 0) {
        // 0x00415990: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004159CC;
    }
    // 0x00415990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415994: jal         0x0041363C
    // 0x00415998: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x00415998: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x0041599C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x004159A0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004159A4: lwc1        $f0, 0x290($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X290);
    // 0x004159A8: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x004159AC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004159B0: swc1        $f5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x004159B4: lwc1        $f0, 0x294($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X294);
    // 0x004159B8: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x004159BC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004159C0: swc1        $f5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x004159C4: j           L_004159D8
    // 0x004159C8: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
        goto L_004159D8;
    // 0x004159C8: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_004159CC:
    // 0x004159CC: jal         0x0041363C
    // 0x004159D0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_0041363C(rdram, ctx);
        goto after_3;
    // 0x004159D0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x004159D4: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_004159D8:
    // 0x004159D8: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
L_004159DC:
    // 0x004159DC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x004159E0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x004159E4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x004159E8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x004159EC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x004159F0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x004159F4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x004159F8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x004159FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00415A00: bne         $v0, $fp, L_004159DC
    if (ctx->r2 != ctx->r30) {
        // 0x00415A04: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_004159DC;
    }
    // 0x00415A04: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00415A08: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00415A0C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00415A10: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A14: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00415A18: bne         $v0, $zero, L_00415A58
    if (ctx->r2 != 0) {
        // 0x00415A1C: nop
    
            goto L_00415A58;
    }
    // 0x00415A1C: nop

    // 0x00415A20: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x00415A24: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x00415A28: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x00415A2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00415A30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00415A34: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415A38: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x00415A3C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00415A40: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x00415A44: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x00415A48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00415A4C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00415A50: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x00415A54: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
L_00415A58:
    // 0x00415A58: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00415A60: beq         $v0, $zero, L_00415A98
    if (ctx->r2 == 0) {
        // 0x00415A64: nop
    
            goto L_00415A98;
    }
    // 0x00415A64: nop

    // 0x00415A68: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415A6C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00415A70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00415A74: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00415A78: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00415A7C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00415A80: sub.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f23.fl - ctx->f0.fl;
    // 0x00415A84: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415A88: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415A8C: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415A90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415A94: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_00415A98:
    // 0x00415A98: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415A9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00415AA0: beq         $v0, $zero, L_00415ABC
    if (ctx->r2 == 0) {
        // 0x00415AA4: nop
    
            goto L_00415ABC;
    }
    // 0x00415AA4: nop

    // 0x00415AA8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00415AAC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415AB0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x00415AB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415AB8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
L_00415ABC:
    // 0x00415ABC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415AC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00415AC4: beq         $v0, $zero, L_00415AE0
    if (ctx->r2 == 0) {
        // 0x00415AC8: nop
    
            goto L_00415AE0;
    }
    // 0x00415AC8: nop

    // 0x00415ACC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00415AD0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x00415AD4: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x00415AD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00415ADC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
L_00415AE0:
    // 0x00415AE0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00415AE4: and         $v0, $a0, $s7
    ctx->r2 = ctx->r4 & ctx->r23;
    // 0x00415AE8: beq         $v0, $zero, L_00415C94
    if (ctx->r2 == 0) {
        // 0x00415AEC: nop
    
            goto L_00415C94;
    }
    // 0x00415AEC: nop

    // 0x00415AF0: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x00415AF4: bnel        $v0, $s2, L_00415C7C
    if (ctx->r2 != ctx->r18) {
        // 0x00415AF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415C7C;
    }
    goto skip_1;
    // 0x00415AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x00415AFC: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x00415B00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00415B04: beq         $v1, $v0, L_00415C78
    if (ctx->r3 == ctx->r2) {
        // 0x00415B08: andi        $v0, $a0, 0x8
        ctx->r2 = ctx->r4 & 0X8;
            goto L_00415C78;
    }
    // 0x00415B08: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x00415B0C: bne         $v0, $zero, L_00415C7C
    if (ctx->r2 != 0) {
        // 0x00415B10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415C7C;
    }
    // 0x00415B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415B14: lwc1        $f21, 0x98($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x00415B18: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00415B1C: lwc1        $f20, 0x94($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X94);
    // 0x00415B20: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00415B24: sub.s       $f0, $f21, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f20.fl;
    // 0x00415B28: jal         0x0027AF4C
    // 0x00415B2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    func_0027AF4C(rdram, ctx);
        goto after_4;
    // 0x00415B2C: add.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f20.fl + ctx->f0.fl;
    after_4:
    // 0x00415B30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00415B34: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x00415B38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00415B3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415B40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00415B44: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00415B48: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00415B4C: bgez        $v0, L_00415B60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00415B50: nop
    
            goto L_00415B60;
    }
    // 0x00415B50: nop

    // 0x00415B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B58: ldc1        $f0, 0xC28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XC28);
    // 0x00415B5C: add.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = ctx->f12.d + ctx->f0.d;
L_00415B60:
    // 0x00415B60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B64: lwc1        $f0, 0xC30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC30);
    // 0x00415B68: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x00415B6C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00415B70: jal         0x002982F0
    // 0x00415B74: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x00415B74: nop

    after_5:
    // 0x00415B78: lwc1        $f2, 0x30($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X30);
    // 0x00415B7C: lwc1        $f1, 0x34($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X34);
    // 0x00415B80: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00415B84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B88: lwc1        $f1, 0xC34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC34);
    // 0x00415B8C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415B90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415B94: lwc1        $f1, 0xC38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC38);
    // 0x00415B98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00415B9C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00415BA0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415BA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00415BA8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00415BAC: beq         $v0, $zero, L_00415BFC
    if (ctx->r2 == 0) {
        // 0x00415BB0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00415BFC;
    }
    // 0x00415BB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00415BB4: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x00415BB8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x00415BBC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00415BC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00415BC4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00415BC8: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415BCC: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00415BD0: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415BD4: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00415BD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00415BDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415BE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415BE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00415BE8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00415BEC: bc1f        L_00415C3C
    if (!c1cs) {
        // 0x00415BF0: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_00415C3C;
    }
    // 0x00415BF0: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x00415BF4: j           L_00415C50
    // 0x00415BF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
        goto L_00415C50;
    // 0x00415BF8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_00415BFC:
    // 0x00415BFC: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x00415C00: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x00415C04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00415C08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00415C0C: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00415C10: mfc1        $a1, $f5
    ctx->r5 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C14: trunc.w.s   $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00415C18: mfc1        $a3, $f5
    ctx->r7 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C1C: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00415C20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00415C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00415C28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00415C2C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00415C30: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00415C34: bc1t        L_00415C4C
    if (c1cs) {
        // 0x00415C38: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_00415C4C;
    }
    // 0x00415C38: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
L_00415C3C:
    // 0x00415C3C: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C40: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C44: j           L_00415C60
    // 0x00415C48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
        goto L_00415C60;
    // 0x00415C48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00415C4C:
    // 0x00415C4C: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
L_00415C50:
    // 0x00415C50: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00415C54: mfc1        $v0, $f5
    ctx->r2 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00415C58: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x00415C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00415C60:
    // 0x00415C60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00415C64: jal         0x002778A8
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    func_002778A8(rdram, ctx);
        goto after_6;
    // 0x00415C68: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    after_6:
    // 0x00415C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415C70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415C74: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_00415C78:
    // 0x00415C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00415C7C:
    // 0x00415C7C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00415C80: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415C84: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00415C88: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00415C8C: jalr        $v0
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x00415C90: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
L_00415C94:
    // 0x00415C94: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00415C98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00415C9C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415CA0: bne         $v0, $zero, L_00415968
    if (ctx->r2 != 0) {
        // 0x00415CA4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_00415968;
    }
    // 0x00415CA4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_00415CA8:
    // 0x00415CA8: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00415CAC: lw          $fp, 0xC0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC0);
    // 0x00415CB0: lw          $s7, 0xBC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XBC);
    // 0x00415CB4: lw          $s6, 0xB8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB8);
    // 0x00415CB8: lw          $s5, 0xB4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB4);
    // 0x00415CBC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00415CC0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00415CC4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00415CC8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00415CCC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00415CD0: ldc1        $f23, 0xE0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE0);
    // 0x00415CD4: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x00415CD8: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x00415CDC: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00415CE0: jr          $ra
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00415CE4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_0026C0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C0E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026C0E8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026C0EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C0F0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C0F4: jal         0x0022425C
    // 0x0026C0F8: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0026C0F8: nop

    after_0:
    // 0x0026C0FC: beql        $v0, $zero, L_0026C108
    if (ctx->r2 == 0) {
        // 0x0026C100: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026C108;
    }
    goto skip_0;
    // 0x0026C100: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026C104: lbu         $v0, 0x58($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X58);
L_0026C108:
    // 0x0026C108: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026C10C: jr          $ra
    // 0x0026C110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00247FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00247FB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00247FB4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00247FB8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00247FBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00247FC0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00247FC4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00247FC8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00247FCC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00247FD0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00247FD4: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x00247FD8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00247FDC: lw          $s1, 0x1A8($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X1A8);
    // 0x00247FE0: jal         0x002017D4
    // 0x00247FE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00247FE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00247FE8: lw          $v1, 0x18($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X18);
    // 0x00247FEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00247FF0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00247FF4: beq         $v1, $zero, L_00248324
    if (ctx->r3 == 0) {
        // 0x00247FF8: nop
    
            goto L_00248324;
    }
    // 0x00247FF8: nop

    // 0x00247FFC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00248000: addiu       $v1, $v1, -0x550F
    ctx->r3 = ADD32(ctx->r3, -0X550F);
    // 0x00248004: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00248008: beq         $v0, $zero, L_002481C4
    if (ctx->r2 == 0) {
        // 0x0024800C: nop
    
            goto L_002481C4;
    }
    // 0x0024800C: nop

    // 0x00248010: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x00248014: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00248018: beq         $v0, $zero, L_0024802C
    if (ctx->r2 == 0) {
        // 0x0024801C: nop
    
            goto L_0024802C;
    }
    // 0x0024801C: nop

    // 0x00248020: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x00248024: beq         $v0, $zero, L_00248324
    if (ctx->r2 == 0) {
        // 0x00248028: nop
    
            goto L_00248324;
    }
    // 0x00248028: nop

L_0024802C:
    // 0x0024802C: lw          $v0, 0x1E3($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E3);
    // 0x00248030: beq         $v0, $zero, L_002481C4
    if (ctx->r2 == 0) {
        // 0x00248034: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_002481C4;
    }
    // 0x00248034: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00248038: lw          $v1, 0xBF4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XBF4);
    // 0x0024803C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248040: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x00248044: beq         $v1, $zero, L_00248054
    if (ctx->r3 == 0) {
        // 0x00248048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248054;
    }
    // 0x00248048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024804C: beq         $v1, $v0, L_00248074
    if (ctx->r3 == ctx->r2) {
        // 0x00248050: nop
    
            goto L_00248074;
    }
    // 0x00248050: nop

L_00248054:
    // 0x00248054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00248058: lwc1        $f0, 0x6A88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A88);
    // 0x0024805C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00248060: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x00248064: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00248068: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0024806C: j           L_00248090
    // 0x00248070: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
        goto L_00248090;
    // 0x00248070: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
L_00248074:
    // 0x00248074: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00248078: lwc1        $f0, 0x6A8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A8C);
    // 0x0024807C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00248080: addiu       $v0, $v0, -0x474C
    ctx->r2 = ADD32(ctx->r2, -0X474C);
    // 0x00248084: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00248088: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0024808C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_00248090:
    // 0x00248090: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00248094: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00248098: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0024809C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002480A0: lwc1        $f0, 0x6A90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A90);
    // 0x002480A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002480A8: lwc1        $f1, 0x6A94($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6A94);
    // 0x002480AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002480B0: addiu       $v0, $v0, -0x4740
    ctx->r2 = ADD32(ctx->r2, -0X4740);
    // 0x002480B4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x002480B8: jal         0x0021D928
    // 0x002480BC: swc1        $f1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    func_0021D928(rdram, ctx);
        goto after_1;
    // 0x002480BC: swc1        $f1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x002480C0: lwc1        $f1, 0x1298($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1298);
    // 0x002480C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002480C8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002480CC: nop

    // 0x002480D0: bc1f        L_00248124
    if (!c1cs) {
        // 0x002480D4: nop
    
            goto L_00248124;
    }
    // 0x002480D4: nop

    // 0x002480D8: jal         0x002548FC
    // 0x002480DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002548FC(rdram, ctx);
        goto after_2;
    // 0x002480DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002480E0: bne         $v0, $zero, L_00248124
    if (ctx->r2 != 0) {
        // 0x002480E4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00248124;
    }
    // 0x002480E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002480E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002480EC: lb          $v1, 0x1B($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X1B);
    // 0x002480F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002480F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002480F8: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x002480FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00248100: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00248104: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00248108: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0024810C: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00248110: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00248114: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00248118: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x0024811C: jal         0x0020B258
    // 0x00248120: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020B258(rdram, ctx);
        goto after_3;
    // 0x00248120: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_3:
L_00248124:
    // 0x00248124: lw          $v1, 0x520($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X520);
    // 0x00248128: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0024812C: beq         $v1, $v0, L_00248324
    if (ctx->r3 == ctx->r2) {
        // 0x00248130: nop
    
            goto L_00248324;
    }
    // 0x00248130: nop

    // 0x00248134: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x00248138: beq         $v0, $zero, L_00248324
    if (ctx->r2 == 0) {
        // 0x0024813C: nop
    
            goto L_00248324;
    }
    // 0x0024813C: nop

    // 0x00248140: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x00248144: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00248148: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024814C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00248150: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00248154: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x00248158: addiu       $s0, $v0, -0x5E0
    ctx->r16 = ADD32(ctx->r2, -0X5E0);
    // 0x0024815C: bltz        $s0, L_00248324
    if (SIGNED(ctx->r16) < 0) {
        // 0x00248160: nop
    
            goto L_00248324;
    }
    // 0x00248160: nop

    // 0x00248164: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x00248168: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0024816C: jal         0x002017D4
    // 0x00248170: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00248170: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x00248174: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00248178: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0024817C: beq         $v0, $zero, L_00248324
    if (ctx->r2 == 0) {
        // 0x00248180: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00248324;
    }
    // 0x00248180: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00248184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00248188: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0024818C: lb          $v0, 0x151($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X151);
    // 0x00248190: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00248194: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00248198: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0024819C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x002481A0: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x002481A4: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002481A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x002481AC: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x002481B0: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x002481B4: jal         0x0020A33C
    // 0x002481B8: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_5;
    // 0x002481B8: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_5:
    // 0x002481BC: j           L_00248324
    // 0x002481C0: nop

        goto L_00248324;
    // 0x002481C0: nop

L_002481C4:
    // 0x002481C4: lwc1        $f1, 0x1298($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1298);
    // 0x002481C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002481CC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002481D0: nop

    // 0x002481D4: bc1f        L_00248240
    if (!c1cs) {
        // 0x002481D8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00248240;
    }
    // 0x002481D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002481DC: jal         0x002548FC
    // 0x002481E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002548FC(rdram, ctx);
        goto after_6;
    // 0x002481E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x002481E4: bne         $v0, $zero, L_00248240
    if (ctx->r2 != 0) {
        // 0x002481E8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00248240;
    }
    // 0x002481E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002481EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002481F0: jal         0x0021D928
    // 0x002481F4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021D928(rdram, ctx);
        goto after_7;
    // 0x002481F4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_7:
    // 0x002481F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002481FC: lb          $v1, 0x1B($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X1B);
    // 0x00248200: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00248204: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00248208: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0024820C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00248210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00248214: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00248218: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0024821C: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00248220: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00248224: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00248228: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0024822C: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00248230: jal         0x0020B258
    // 0x00248234: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020B258(rdram, ctx);
        goto after_8;
    // 0x00248234: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_8:
    // 0x00248238: j           L_0024824C
    // 0x0024823C: nop

        goto L_0024824C;
    // 0x0024823C: nop

L_00248240:
    // 0x00248240: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00248244: jal         0x0021D7BC
    // 0x00248248: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021D7BC(rdram, ctx);
        goto after_9;
    // 0x00248248: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_9:
L_0024824C:
    // 0x0024824C: lw          $v1, 0x520($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X520);
    // 0x00248250: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00248254: beq         $v1, $v0, L_00248324
    if (ctx->r3 == ctx->r2) {
        // 0x00248258: nop
    
            goto L_00248324;
    }
    // 0x00248258: nop

    // 0x0024825C: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x00248260: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00248264: bne         $v0, $zero, L_00248324
    if (ctx->r2 != 0) {
        // 0x00248268: nop
    
            goto L_00248324;
    }
    // 0x00248268: nop

    // 0x0024826C: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x00248270: beq         $v0, $zero, L_00248324
    if (ctx->r2 == 0) {
        // 0x00248274: nop
    
            goto L_00248324;
    }
    // 0x00248274: nop

    // 0x00248278: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0024827C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00248280: lw          $v0, -0x24A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24A4);
    // 0x00248284: beq         $v1, $v0, L_00248324
    if (ctx->r3 == ctx->r2) {
        // 0x00248288: nop
    
            goto L_00248324;
    }
    // 0x00248288: nop

    // 0x0024828C: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x00248290: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00248294: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00248298: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024829C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002482A0: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x002482A4: addiu       $s0, $v0, -0x5E0
    ctx->r16 = ADD32(ctx->r2, -0X5E0);
    // 0x002482A8: bltz        $s0, L_00248324
    if (SIGNED(ctx->r16) < 0) {
        // 0x002482AC: nop
    
            goto L_00248324;
    }
    // 0x002482AC: nop

    // 0x002482B0: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x002482B4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x002482B8: jal         0x002017D4
    // 0x002482BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x002482BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x002482C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002482C4: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002482C8: beq         $v0, $zero, L_00248324
    if (ctx->r2 == 0) {
        // 0x002482CC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00248324;
    }
    // 0x002482CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002482D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002482D4: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x002482D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002482DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002482E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002482E4: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x002482E8: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x002482EC: addiu       $v0, $v0, -0x5E0
    ctx->r2 = ADD32(ctx->r2, -0X5E0);
    // 0x002482F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002482F4: lb          $v0, 0x151($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X151);
    // 0x002482F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002482FC: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00248300: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00248304: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00248308: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x0024830C: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00248310: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00248314: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00248318: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0024831C: jal         0x0020B6A0
    // 0x00248320: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020B6A0(rdram, ctx);
        goto after_11;
    // 0x00248320: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_11:
L_00248324:
    // 0x00248324: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00248328: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0024832C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00248330: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00248334: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00248338: jr          $ra
    // 0x0024833C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0024833C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0025426C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025426C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00254270: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00254274: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00254278: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025427C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00254280: lh          $v0, 0x996($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X996);
    // 0x00254284: lw          $v1, 0x3F4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X3F4);
    // 0x00254288: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0025428C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254290: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00254294: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00254298: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x0025429C: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x002542A0: jal         0x002241D8
    // 0x002542A4: addiu       $a1, $a1, 0x288
    ctx->r5 = ADD32(ctx->r5, 0X288);
    func_002241D8(rdram, ctx);
        goto after_0;
    // 0x002542A4: addiu       $a1, $a1, 0x288
    ctx->r5 = ADD32(ctx->r5, 0X288);
    after_0:
    // 0x002542A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002542AC: jr          $ra
    // 0x002542B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002542B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00284468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284468: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028446C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00284478: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028447C: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x00284480: bne         $v0, $zero, L_002844E0
    if (ctx->r2 != 0) {
        // 0x00284484: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_002844E0;
    }
    // 0x00284484: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00284488: jal         0x00275904
    // 0x0028448C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_0;
    // 0x0028448C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x00284490: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284494: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284498: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x0028449C: bne         $v0, $zero, L_002844AC
    if (ctx->r2 != 0) {
        // 0x002844A0: nop
    
            goto L_002844AC;
    }
    // 0x002844A0: nop

    // 0x002844A4: beq         $s0, $zero, L_002844B4
    if (ctx->r16 == 0) {
        // 0x002844A8: nop
    
            goto L_002844B4;
    }
    // 0x002844A8: nop

L_002844AC:
    // 0x002844AC: jal         0x00283A4C
    // 0x002844B0: nop

    func_00283A4C(rdram, ctx);
        goto after_1;
    // 0x002844B0: nop

    after_1:
L_002844B4:
    // 0x002844B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002844B8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002844BC: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x002844C0: beq         $v1, $zero, L_002844D0
    if (ctx->r3 == 0) {
        // 0x002844C4: nop
    
            goto L_002844D0;
    }
    // 0x002844C4: nop

    // 0x002844C8: jalr        $v1
    // 0x002844CC: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x002844CC: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    after_2:
L_002844D0:
    // 0x002844D0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002844D4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x002844D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002844DC: sw          $v0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r2;
L_002844E0:
    // 0x002844E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002844E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002844E8: jr          $ra
    // 0x002844EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002844EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00422314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422314: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422318: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x0042231C: beq         $v0, $zero, L_00422334
    if (ctx->r2 == 0) {
        // 0x00422320: nop
    
            goto L_00422334;
    }
    // 0x00422320: nop

    // 0x00422324: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422328: addiu       $v0, $v0, 0x4B1C
    ctx->r2 = ADD32(ctx->r2, 0X4B1C);
    // 0x0042232C: j           L_00422428
    // 0x00422330: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422428;
    // 0x00422330: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422334:
    // 0x00422334: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422338: addiu       $v0, $v0, 0x4B48
    ctx->r2 = ADD32(ctx->r2, 0X4B48);
    // 0x0042233C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422340: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422344: lb          $v1, 0x950($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X950);
    // 0x00422348: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x0042234C: beq         $v0, $zero, L_00422368
    if (ctx->r2 == 0) {
        // 0x00422350: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422368;
    }
    // 0x00422350: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422358: addu        $at, $at, $v0
    gpr jr_addend_00422360 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042235C: lw          $v0, 0x1488($at)
    ctx->r2 = ADD32(ctx->r1, 0X1488);
    // 0x00422360: jr          $v0
    // 0x00422364: nop

    switch (jr_addend_00422360 >> 2) {
        case 0: goto L_00422368; break;
        case 1: goto L_00422378; break;
        case 2: goto L_00422388; break;
        case 3: goto L_00422398; break;
        case 4: goto L_004223A8; break;
        case 5: goto L_004223B8; break;
        case 6: goto L_004223C8; break;
        case 7: goto L_004223D8; break;
        case 8: goto L_004223E8; break;
        case 9: goto L_004223F8; break;
        default: switch_error(__func__, 0x00422360, 0x800C1488);
    }
    // 0x00422364: nop

L_00422368:
    // 0x00422368: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042236C: addiu       $v1, $v1, 0x5340
    ctx->r3 = ADD32(ctx->r3, 0X5340);
    // 0x00422370: j           L_00422400
    // 0x00422374: nop

        goto L_00422400;
    // 0x00422374: nop

L_00422378:
    // 0x00422378: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042237C: addiu       $v1, $v1, 0x534C
    ctx->r3 = ADD32(ctx->r3, 0X534C);
    // 0x00422380: j           L_00422400
    // 0x00422384: nop

        goto L_00422400;
    // 0x00422384: nop

L_00422388:
    // 0x00422388: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042238C: addiu       $v1, $v1, 0x5358
    ctx->r3 = ADD32(ctx->r3, 0X5358);
    // 0x00422390: j           L_00422400
    // 0x00422394: nop

        goto L_00422400;
    // 0x00422394: nop

L_00422398:
    // 0x00422398: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042239C: addiu       $v1, $v1, 0x5364
    ctx->r3 = ADD32(ctx->r3, 0X5364);
    // 0x004223A0: j           L_00422400
    // 0x004223A4: nop

        goto L_00422400;
    // 0x004223A4: nop

L_004223A8:
    // 0x004223A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223AC: addiu       $v1, $v1, 0x5370
    ctx->r3 = ADD32(ctx->r3, 0X5370);
    // 0x004223B0: j           L_00422400
    // 0x004223B4: nop

        goto L_00422400;
    // 0x004223B4: nop

L_004223B8:
    // 0x004223B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223BC: addiu       $v1, $v1, 0x537C
    ctx->r3 = ADD32(ctx->r3, 0X537C);
    // 0x004223C0: j           L_00422400
    // 0x004223C4: nop

        goto L_00422400;
    // 0x004223C4: nop

L_004223C8:
    // 0x004223C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223CC: addiu       $v1, $v1, 0x5388
    ctx->r3 = ADD32(ctx->r3, 0X5388);
    // 0x004223D0: j           L_00422400
    // 0x004223D4: nop

        goto L_00422400;
    // 0x004223D4: nop

L_004223D8:
    // 0x004223D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223DC: addiu       $v1, $v1, 0x5394
    ctx->r3 = ADD32(ctx->r3, 0X5394);
    // 0x004223E0: j           L_00422400
    // 0x004223E4: nop

        goto L_00422400;
    // 0x004223E4: nop

L_004223E8:
    // 0x004223E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223EC: addiu       $v1, $v1, 0x53A0
    ctx->r3 = ADD32(ctx->r3, 0X53A0);
    // 0x004223F0: j           L_00422400
    // 0x004223F4: nop

        goto L_00422400;
    // 0x004223F4: nop

L_004223F8:
    // 0x004223F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223FC: addiu       $v1, $v1, 0x53AC
    ctx->r3 = ADD32(ctx->r3, 0X53AC);
L_00422400:
    // 0x00422400: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00422404: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00422408: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_0042240C:
    // 0x0042240C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00422410: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00422414: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00422418: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0042241C: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x00422420: bne         $v0, $zero, L_0042240C
    if (ctx->r2 != 0) {
        // 0x00422424: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0042240C;
    }
    // 0x00422424: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00422428:
    // 0x00422428: jr          $ra
    // 0x0042242C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0042242C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0027E770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027E770: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027E774: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027E778: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027E77C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027E780: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0027E784: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0027E788: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0027E78C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0027E790: jal         0x002847D0
    // 0x0027E794: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_002847D0(rdram, ctx);
        goto after_0;
    // 0x0027E794: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x0027E798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027E79C: jal         0x002222E0
    // 0x0027E7A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002222E0(rdram, ctx);
        goto after_1;
    // 0x0027E7A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0027E7A4: jal         0x00284188
    // 0x0027E7A8: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x0027E7A8: nop

    after_2:
    // 0x0027E7AC: bne         $v0, $zero, L_0027E7C4
    if (ctx->r2 != 0) {
        // 0x0027E7B0: nop
    
            goto L_0027E7C4;
    }
    // 0x0027E7B0: nop

    // 0x0027E7B4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027E7B8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0027E7BC: jal         0x00252C70
    // 0x0027E7C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00252C70(rdram, ctx);
        goto after_3;
    // 0x0027E7C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_0027E7C4:
    // 0x0027E7C4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x0027E7C8: addiu       $s2, $s2, -0x5378
    ctx->r18 = ADD32(ctx->r18, -0X5378);
    // 0x0027E7CC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0027E7D0: addiu       $s4, $zero, 0xD
    ctx->r20 = ADD32(0, 0XD);
    // 0x0027E7D4: bne         $v0, $s4, L_0027E7EC
    if (ctx->r2 != ctx->r20) {
        // 0x0027E7D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027E7EC;
    }
    // 0x0027E7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027E7DC: addiu       $a0, $s2, -0x1418
    ctx->r4 = ADD32(ctx->r18, -0X1418);
    // 0x0027E7E0: jal         0x00253148
    // 0x0027E7E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00253148(rdram, ctx);
        goto after_4;
    // 0x0027E7E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0027E7E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0027E7EC:
    // 0x0027E7EC: jal         0x00223F8C
    // 0x0027E7F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00223F8C(rdram, ctx);
        goto after_5;
    // 0x0027E7F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0027E7F4: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x0027E7F8: addiu       $s3, $s3, 0x2B8
    ctx->r19 = ADD32(ctx->r19, 0X2B8);
    // 0x0027E7FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0027E800: jal         0x00235C30
    // 0x0027E804: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00235C30(rdram, ctx);
        goto after_6;
    // 0x0027E804: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0027E808: jal         0x00284188
    // 0x0027E80C: nop

    func_00284188(rdram, ctx);
        goto after_7;
    // 0x0027E80C: nop

    after_7:
    // 0x0027E810: bnel        $v0, $zero, L_0027E830
    if (ctx->r2 != 0) {
        // 0x0027E814: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0027E830;
    }
    goto skip_0;
    // 0x0027E814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x0027E818: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0027E81C: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x0027E820: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x0027E824: jal         0x0022782C
    // 0x0027E828: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022782C(rdram, ctx);
        goto after_8;
    // 0x0027E828: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0027E82C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0027E830:
    // 0x0027E830: jal         0x0022077C
    // 0x0027E834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022077C(rdram, ctx);
        goto after_9;
    // 0x0027E834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0027E838: addiu       $a0, $s1, 0x558
    ctx->r4 = ADD32(ctx->r17, 0X558);
    // 0x0027E83C: jal         0x00283238
    // 0x0027E840: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00283238(rdram, ctx);
        goto after_10;
    // 0x0027E840: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0027E844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027E848: jal         0x002240C4
    // 0x0027E84C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002240C4(rdram, ctx);
        goto after_11;
    // 0x0027E84C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0027E850: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0027E854: jal         0x002352F8
    // 0x0027E858: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002352F8(rdram, ctx);
        goto after_12;
    // 0x0027E858: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0027E85C: jal         0x00280AA0
    // 0x0027E860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00280AA0(rdram, ctx);
        goto after_13;
    // 0x0027E860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x0027E864: jal         0x00284188
    // 0x0027E868: nop

    func_00284188(rdram, ctx);
        goto after_14;
    // 0x0027E868: nop

    after_14:
    // 0x0027E86C: bne         $v0, $zero, L_0027E888
    if (ctx->r2 != 0) {
        // 0x0027E870: nop
    
            goto L_0027E888;
    }
    // 0x0027E870: nop

    // 0x0027E874: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0027E878: bne         $v0, $s4, L_0027E888
    if (ctx->r2 != ctx->r20) {
        // 0x0027E87C: addiu       $a0, $s2, -0x1418
        ctx->r4 = ADD32(ctx->r18, -0X1418);
            goto L_0027E888;
    }
    // 0x0027E87C: addiu       $a0, $s2, -0x1418
    ctx->r4 = ADD32(ctx->r18, -0X1418);
    // 0x0027E880: jal         0x002531D0
    // 0x0027E884: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002531D0(rdram, ctx);
        goto after_15;
    // 0x0027E884: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_15:
L_0027E888:
    // 0x0027E888: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027E88C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0027E890: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0027E894: beq         $v0, $zero, L_0027EA68
    if (ctx->r2 == 0) {
        // 0x0027E898: lui         $a3, 0xE300
        ctx->r7 = S32(0XE300 << 16);
            goto L_0027EA68;
    }
    // 0x0027E898: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x0027E89C: ori         $a3, $a3, 0xA01
    ctx->r7 = ctx->r7 | 0XA01;
    // 0x0027E8A0: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x0027E8A4: ori         $t0, $t0, 0x1D00
    ctx->r8 = ctx->r8 | 0X1D00;
    // 0x0027E8A8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0027E8AC: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0027E8B0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x0027E8B4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0027E8B8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027E8BC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0027E8C0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027E8C4: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x0027E8C8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0027E8CC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027E8D0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0027E8D4: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x0027E8D8: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x0027E8DC: addiu       $a3, $v1, 0x10
    ctx->r7 = ADD32(ctx->r3, 0X10);
    // 0x0027E8E0: lui         $v0, 0xF900
    ctx->r2 = S32(0XF900 << 16);
    // 0x0027E8E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0027E8E8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027E8EC: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x0027E8F0: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0027E8F4: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x0027E8F8: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    // 0x0027E8FC: lui         $v0, 0xEE00
    ctx->r2 = S32(0XEE00 << 16);
    // 0x0027E900: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x0027E904: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x0027E908: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x0027E90C: sw          $a1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r5;
    // 0x0027E910: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E914: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0027E918: sw          $t0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r8;
    // 0x0027E91C: jal         0x00207FEC
    // 0x0027E920: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    func_00207FEC(rdram, ctx);
        goto after_16;
    // 0x0027E920: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_16:
    // 0x0027E924: lwc1        $f1, 0x290($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X290);
    // 0x0027E928: lwc1        $f0, 0x288($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X288);
    // 0x0027E92C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x0027E930: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0027E934: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027E938: lwc1        $f1, -0x6610($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6610);
    // 0x0027E93C: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0027E940: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027E944: nop

    // 0x0027E948: bc1t        L_0027E960
    if (c1cs) {
        // 0x0027E94C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0027E960;
    }
    // 0x0027E94C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0027E950: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E954: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0027E958: j           L_0027E974
    // 0x0027E95C: nop

        goto L_0027E974;
    // 0x0027E95C: nop

L_0027E960:
    // 0x0027E960: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027E964: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027E968: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E96C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0027E970: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027E974:
    // 0x0027E974: lwc1        $f0, 0x294($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X294);
    // 0x0027E978: lwc1        $f1, 0x28C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X28C);
    // 0x0027E97C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027E980: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0027E984: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027E988: lwc1        $f1, -0x660C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X660C);
    // 0x0027E98C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027E990: nop

    // 0x0027E994: bc1t        L_0027E9AC
    if (c1cs) {
        // 0x0027E998: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027E9AC;
    }
    // 0x0027E998: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027E99C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E9A0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0027E9A4: j           L_0027E9C4
    // 0x0027E9A8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027E9C4;
    // 0x0027E9A8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027E9AC:
    // 0x0027E9AC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027E9B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027E9B4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E9B8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0027E9BC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027E9C0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027E9C4:
    // 0x0027E9C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027E9C8: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027E9CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027E9D0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027E9D4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027E9D8: lwc1        $f0, 0x290($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X290);
    // 0x0027E9DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027E9E0: lwc1        $f1, -0x6608($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6608);
    // 0x0027E9E4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027E9E8: nop

    // 0x0027E9EC: bc1tl       L_0027EA04
    if (c1cs) {
        // 0x0027E9F0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027EA04;
    }
    goto skip_1;
    // 0x0027E9F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0027E9F4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027E9F8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0027E9FC: j           L_0027EA18
    // 0x0027EA00: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027EA18;
    // 0x0027EA00: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027EA04:
    // 0x0027EA04: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027EA08: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027EA0C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0027EA10: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027EA14: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027EA18:
    // 0x0027EA18: lwc1        $f0, 0x294($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X294);
    // 0x0027EA1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027EA20: lwc1        $f1, -0x6604($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6604);
    // 0x0027EA24: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027EA28: nop

    // 0x0027EA2C: bc1t        L_0027EA44
    if (c1cs) {
        // 0x0027EA30: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_0027EA44;
    }
    // 0x0027EA30: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x0027EA34: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027EA38: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0027EA3C: j           L_0027EA5C
    // 0x0027EA40: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
        goto L_0027EA5C;
    // 0x0027EA40: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
L_0027EA44:
    // 0x0027EA44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027EA48: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027EA4C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027EA50: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0027EA54: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0027EA58: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
L_0027EA5C:
    // 0x0027EA5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027EA60: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x0027EA64: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0027EA68:
    // 0x0027EA68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0027EA6C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0027EA70: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0027EA74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0027EA78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027EA7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027EA80: jr          $ra
    // 0x0027EA84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027EA84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00210894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00210898: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0021089C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002108A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002108A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002108A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002108AC: jal         0x002982F0
    // 0x002108B0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x002108B0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x002108B4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002108B8: jal         0x002974C0
    // 0x002108BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x002108BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x002108C0: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x002108C4: mul.s       $f11, $f0, $f12
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f11.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x002108C8: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002108CC: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
    // 0x002108D0: mul.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x002108D4: nop

    // 0x002108D8: mul.s       $f10, $f20, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x002108DC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002108E0: mul.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x002108E4: lwc1        $f3, 0x24($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x002108E8: mul.s       $f3, $f4, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f4.fl, ctx->f3.fl);
    // 0x002108EC: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002108F0: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002108F4: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x002108F8: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x002108FC: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00210900: mul.s       $f9, $f0, $f12
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f9.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00210904: nop

    // 0x00210908: mul.s       $f7, $f20, $f12
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f7.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x0021090C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00210910: mul.s       $f5, $f0, $f12
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f5.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00210914: nop

    // 0x00210918: mul.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x0021091C: nop

    // 0x00210920: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00210924: add.s       $f11, $f11, $f8
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f8.fl;
    // 0x00210928: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x0021092C: add.s       $f9, $f9, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f3.fl;
    // 0x00210930: add.s       $f7, $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f2.fl;
    // 0x00210934: add.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f4.fl;
    // 0x00210938: swc1        $f11, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(11 - 1) * 2];
    // 0x0021093C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x00210940: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00210944: swc1        $f9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(9 - 1) * 2];
    // 0x00210948: swc1        $f7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x0021094C: swc1        $f5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x00210950: swc1        $f20, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f20.u32l;
    // 0x00210954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021095C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00210960: jr          $ra
    // 0x00210964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00210964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002253F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002253F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002253FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00225400: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00225404: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00225408: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0022540C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00225410: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225414: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00225418: lw          $s0, 0x1180($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1180);
    // 0x0022541C: beq         $s0, $zero, L_002254A0
    if (ctx->r16 == 0) {
        // 0x00225420: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002254A0;
    }
    // 0x00225420: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00225424: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_00225428:
    // 0x00225428: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0022542C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x00225430: lw          $s2, 0x4($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X4);
    // 0x00225434: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00225438: beq         $v0, $zero, L_00225468
    if (ctx->r2 == 0) {
        // 0x0022543C: addu        $v1, $s1, $zero
        ctx->r3 = ADD32(ctx->r17, 0);
            goto L_00225468;
    }
    // 0x0022543C: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x00225440: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00225444: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00225448: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0022544C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00225450: c.le.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl <= ctx->f20.fl;
    // 0x00225454: nop

    // 0x00225458: bc1f        L_00225468
    if (!c1cs) {
        // 0x0022545C: swc1        $f1, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00225468;
    }
    // 0x0022545C: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00225460: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00225464: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_00225468:
    // 0x00225468: beq         $v1, $zero, L_00225478
    if (ctx->r3 == 0) {
        // 0x0022546C: nop
    
            goto L_00225478;
    }
    // 0x0022546C: nop

    // 0x00225470: jal         0x0026DFB0
    // 0x00225474: nop

    func_0026DFB0(rdram, ctx);
        goto after_0;
    // 0x00225474: nop

    after_0:
L_00225478:
    // 0x00225478: beq         $s1, $zero, L_00225494
    if (ctx->r17 == 0) {
        // 0x0022547C: addiu       $a0, $s3, 0x1180
        ctx->r4 = ADD32(ctx->r19, 0X1180);
            goto L_00225494;
    }
    // 0x0022547C: addiu       $a0, $s3, 0x1180
    ctx->r4 = ADD32(ctx->r19, 0X1180);
    // 0x00225480: jal         0x00200738
    // 0x00225484: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00225484: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00225488: addiu       $a0, $s3, 0x1194
    ctx->r4 = ADD32(ctx->r19, 0X1194);
    // 0x0022548C: jal         0x00200518
    // 0x00225490: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00225490: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_00225494:
    // 0x00225494: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00225498: bne         $s0, $zero, L_00225428
    if (ctx->r16 != 0) {
        // 0x0022549C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00225428;
    }
    // 0x0022549C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_002254A0:
    // 0x002254A0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002254A4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002254A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002254AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002254B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002254B4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x002254B8: jr          $ra
    // 0x002254BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002254BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00275A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275A30: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275A34: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275A38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275A3C: jal         0x002719F4
    // 0x00275A40: nop

    func_002719F4(rdram, ctx);
        goto after_0;
    // 0x00275A40: nop

    after_0:
    // 0x00275A44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275A48: jr          $ra
    // 0x00275A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00236928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236928: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0023692C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x00236930: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00236934: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00236938: lbu         $v0, 0x23($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X23);
    // 0x0023693C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00236940: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x00236944: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00236948: beq         $v0, $zero, L_00236964
    if (ctx->r2 == 0) {
        // 0x0023694C: nop
    
            goto L_00236964;
    }
    // 0x0023694C: nop

    // 0x00236950: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00236954: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x00236958: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x0023695C: j           L_00236974
    // 0x00236960: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
        goto L_00236974;
    // 0x00236960: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
L_00236964:
    // 0x00236964: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00236968: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x0023696C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00236970: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
L_00236974:
    // 0x00236974: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00236978: lbu         $v0, 0x21($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X21);
    // 0x0023697C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00236980: lwc1        $f1, 0x6528($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6528);
    // 0x00236984: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00236988: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023698C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00236990: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x00236994: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00236998: lbu         $v0, 0x22($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X22);
    // 0x0023699C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002369A0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002369A4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002369A8: beq         $a1, $zero, L_00236A2C
    if (ctx->r5 == 0) {
        // 0x002369AC: swc1        $f0, 0x14($a2)
        MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
            goto L_00236A2C;
    }
    // 0x002369AC: swc1        $f0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
    // 0x002369B0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x002369B4: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x002369B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002369BC: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x002369C0: sllv        $v0, $v1, $v0
    ctx->r2 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x002369C4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002369C8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002369CC: swc1        $f1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x002369D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002369D4: lbu         $v0, 0x1D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1D);
    // 0x002369D8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002369DC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002369E0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002369E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002369E8: lwc1        $f0, 0x652C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X652C);
    // 0x002369EC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002369F0: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x002369F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002369F8: swc1        $f1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x002369FC: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00236A00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00236A04: lwc1        $f1, 0x6530($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6530);
    // 0x00236A08: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x00236A0C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00236A10: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x00236A14: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x00236A18: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00236A1C: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00236A20: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00236A24: swc1        $f1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x00236A28: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
L_00236A2C:
    // 0x00236A2C: jr          $ra
    // 0x00236A30: nop

    return;
    // 0x00236A30: nop

;}
RECOMP_FUNC void func_0044F9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F9C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0044F9CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044F9D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044F9D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0044F9D8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0044F9DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044F9E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044F9E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F9E8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0044F9EC: beq         $s0, $zero, L_0044FA84
    if (ctx->r16 == 0) {
        // 0x0044F9F0: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_0044FA84;
    }
    // 0x0044F9F0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x0044F9F4: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0044F9F8: addiu       $s3, $s3, -0x61D4
    ctx->r19 = ADD32(ctx->r19, -0X61D4);
L_0044F9FC:
    // 0x0044F9FC: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x0044FA00: lw          $s2, 0x1D4($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X1D4);
    // 0x0044FA04: bne         $v0, $s4, L_0044FA24
    if (ctx->r2 != ctx->r20) {
        // 0x0044FA08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0044FA24;
    }
    // 0x0044FA08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044FA0C: beq         $s1, $s3, L_0044FA24
    if (ctx->r17 == ctx->r19) {
        // 0x0044FA10: nop
    
            goto L_0044FA24;
    }
    // 0x0044FA10: nop

    // 0x0044FA14: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x0044FA18: bnel        $v0, $zero, L_0044FA7C
    if (ctx->r2 != 0) {
        // 0x0044FA1C: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0044FA7C;
    }
    goto skip_0;
    // 0x0044FA1C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0044FA20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0044FA24:
    // 0x0044FA24: jal         0x0041531C
    // 0x0044FA28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0041531C(rdram, ctx);
        goto after_0;
    // 0x0044FA28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0044FA2C: beql        $v0, $zero, L_0044FA7C
    if (ctx->r2 == 0) {
        // 0x0044FA30: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0044FA7C;
    }
    goto skip_1;
    // 0x0044FA30: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_1:
    // 0x0044FA34: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0044FA38: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x0044FA3C: beql        $v0, $zero, L_0044FA54
    if (ctx->r2 == 0) {
        // 0x0044FA40: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044FA54;
    }
    goto skip_2;
    // 0x0044FA40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_2:
    // 0x0044FA44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044FA48: jalr        $v0
    // 0x0044FA4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0044FA4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0044FA50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0044FA54:
    // 0x0044FA54: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0044FA58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0044FA5C: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x0044FA60: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x0044FA64: jal         0x00200738
    // 0x0044FA68: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x0044FA68: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    after_2:
    // 0x0044FA6C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0044FA70: jal         0x002052D8
    // 0x0044FA74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0044FA74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0044FA78: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0044FA7C:
    // 0x0044FA7C: bne         $s0, $zero, L_0044F9FC
    if (ctx->r16 != 0) {
        // 0x0044FA80: nop
    
            goto L_0044F9FC;
    }
    // 0x0044FA80: nop

L_0044FA84:
    // 0x0044FA84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0044FA88: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0044FA8C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0044FA90: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044FA94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044FA98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044FA9C: jr          $ra
    // 0x0044FAA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0044FAA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0045BE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00422EC8:
    // 0x0045BE34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045BE38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045BE3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045BE40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045BE44: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x0045BE48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045BE4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE50: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0045BE54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045BE58: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0045BE5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE60: sw          $zero, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = 0;
    // 0x0045BE64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE68: sw          $v0, 0x998($at)
    MEM_W(0X998, ctx->r1) = ctx->r2;
    // 0x0045BE6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE70: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
    // 0x0045BE74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE78: sw          $v0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r2;
    // 0x0045BE7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE80: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x0045BE84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE88: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x0045BE8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045BE90: sw          $zero, 0x980($at)
    MEM_W(0X980, ctx->r1) = 0;
    // 0x0045BE94: lb          $a0, 0x4($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X4);
    // 0x0045BE98: jal         0x00285A68
    // 0x0045BE9C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x0045BE9C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    after_0:
    // 0x0045BEA0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045BEA4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045BEA8: beq         $v0, $zero, L_0045BEC0
    if (ctx->r2 == 0) {
        // 0x0045BEAC: nop
    
            goto L_0045BEC0;
    }
    // 0x0045BEAC: nop

    // 0x0045BEB0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045BEB4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045BEB8: j           L_00422EC8
    // 0x0045BEBC: nop

    entry_00422EC8(rdram, ctx);
    return;
    // 0x0045BEBC: nop

L_0045BEC0:
    // 0x0045BEC0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045BEC4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045BEC8: jal         0x004263A0
    // 0x0045BECC: nop

    func_004263A0(rdram, ctx);
        goto after_1;
    // 0x0045BECC: nop

    after_1:
    // 0x0045BED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045BED4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045BED8: jr          $ra
    // 0x0045BEDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045BEDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00469374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00469374: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00469378: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0046937C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00469380: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00469384: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00469388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0046938C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00469390: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00469394: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00469398: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0046939C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x004693A0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x004693A4: jal         0x0042C0B4
    // 0x004693A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    entry_0042C0B4(rdram, ctx);
        goto after_0;
    // 0x004693A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004693AC: beql        $v0, $zero, L_004693B4
    if (ctx->r2 == 0) {
        // 0x004693B0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004693B4;
    }
    goto skip_0;
    // 0x004693B0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_004693B4:
    // 0x004693B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004693B8: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x004693BC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x004693C0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x004693C4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x004693C8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x004693CC: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x004693D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004693D4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004693D8: sw          $zero, 0x3FFC($at)
    MEM_W(0X3FFC, ctx->r1) = 0;
    // 0x004693DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004693E0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004693E4: sw          $s1, 0x3FF8($at)
    MEM_W(0X3FF8, ctx->r1) = ctx->r17;
    // 0x004693E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004693EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004693F0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004693F4: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x004693F8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004693FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
;}
RECOMP_FUNC void func_002759C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002759C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002759C8: lw          $v0, -0x5360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5360);
    // 0x002759CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002759D0: bne         $v0, $zero, L_002759FC
    if (ctx->r2 != 0) {
        // 0x002759D4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_002759FC;
    }
    // 0x002759D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002759D8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002759DC: addiu       $v1, $v1, 0x478C
    ctx->r3 = ADD32(ctx->r3, 0X478C);
    // 0x002759E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002759E4: beq         $v0, $a0, L_002759FC
    if (ctx->r2 == ctx->r4) {
        // 0x002759E8: nop
    
            goto L_002759FC;
    }
    // 0x002759E8: nop

    // 0x002759EC: bne         $a0, $zero, L_002759FC
    if (ctx->r4 != 0) {
        // 0x002759F0: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_002759FC;
    }
    // 0x002759F0: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x002759F4: jal         0x00275A08
    // 0x002759F8: nop

    func_00275A08(rdram, ctx);
        goto after_0;
    // 0x002759F8: nop

    after_0:
L_002759FC:
    // 0x002759FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275A00: jr          $ra
    // 0x00275A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426D54: j           L_00426D70
    // 0x00426D58: nop

    entry_00426D70(rdram, ctx);
    return;
    // 0x00426D58: nop

    // turok2: reconnected split function: a stray ELF symbol at 0x00426D5C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426D5C(rdram, ctx);
;}
RECOMP_FUNC void func_0022F350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022F350: addiu       $sp, $sp, -0x2E0
    ctx->r29 = ADD32(ctx->r29, -0X2E0);
    // 0x0022F354: sw          $s3, 0x2AC($sp)
    MEM_W(0X2AC, ctx->r29) = ctx->r19;
    // 0x0022F358: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0022F35C: addiu       $s3, $s3, -0x535C
    ctx->r19 = ADD32(ctx->r19, -0X535C);
    // 0x0022F360: sw          $ra, 0x2C4($sp)
    MEM_W(0X2C4, ctx->r29) = ctx->r31;
    // 0x0022F364: sw          $fp, 0x2C0($sp)
    MEM_W(0X2C0, ctx->r29) = ctx->r30;
    // 0x0022F368: sw          $s7, 0x2BC($sp)
    MEM_W(0X2BC, ctx->r29) = ctx->r23;
    // 0x0022F36C: sw          $s6, 0x2B8($sp)
    MEM_W(0X2B8, ctx->r29) = ctx->r22;
    // 0x0022F370: sw          $s5, 0x2B4($sp)
    MEM_W(0X2B4, ctx->r29) = ctx->r21;
    // 0x0022F374: sw          $s4, 0x2B0($sp)
    MEM_W(0X2B0, ctx->r29) = ctx->r20;
    // 0x0022F378: sw          $s2, 0x2A8($sp)
    MEM_W(0X2A8, ctx->r29) = ctx->r18;
    // 0x0022F37C: sw          $s1, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->r17;
    // 0x0022F380: sw          $s0, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->r16;
    // 0x0022F384: sdc1        $f22, 0x2D8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X2D8, ctx->r29);
    // 0x0022F388: sdc1        $f21, 0x2D0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X2D0, ctx->r29);
    // 0x0022F38C: sdc1        $f20, 0x2C8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X2C8, ctx->r29);
    // 0x0022F390: sw          $a0, 0x2E0($sp)
    MEM_W(0X2E0, ctx->r29) = ctx->r4;
    // 0x0022F394: sw          $a1, 0x2E4($sp)
    MEM_W(0X2E4, ctx->r29) = ctx->r5;
    // 0x0022F398: sw          $a2, 0x2E8($sp)
    MEM_W(0X2E8, ctx->r29) = ctx->r6;
    // 0x0022F39C: sw          $a3, 0x2EC($sp)
    MEM_W(0X2EC, ctx->r29) = ctx->r7;
    // 0x0022F3A0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0022F3A4: bne         $v0, $zero, L_00230A74
    if (ctx->r2 != 0) {
        // 0x0022F3A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00230A74;
    }
    // 0x0022F3A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022F3AC: lw          $t1, 0x2E0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022F3B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0022F3B4: sw          $zero, 0x264($sp)
    MEM_W(0X264, ctx->r29) = 0;
    // 0x0022F3B8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0022F3BC: addu        $at, $t1, $at
    ctx->r1 = ADD32(ctx->r9, ctx->r1);
    // 0x0022F3C0: lw          $s2, -0x139C($at)
    ctx->r18 = MEM_W(ctx->r1, -0X139C);
    // 0x0022F3C4: addiu       $v0, $sp, 0xC0
    ctx->r2 = ADD32(ctx->r29, 0XC0);
    // 0x0022F3C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0022F3CC: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x0022F3D0: jal         0x002017D4
    // 0x0022F3D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0022F3D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0022F3D8: addiu       $v1, $zero, 0xFC
    ctx->r3 = ADD32(0, 0XFC);
    // 0x0022F3DC: lw          $t2, 0x2F4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2F4);
    // 0x0022F3E0: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x0022F3E4: bne         $t2, $v1, L_0022F3FC
    if (ctx->r10 != ctx->r3) {
        // 0x0022F3E8: addiu       $s1, $v0, 0x8
        ctx->r17 = ADD32(ctx->r2, 0X8);
            goto L_0022F3FC;
    }
    // 0x0022F3E8: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x0022F3EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022F3F0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0022F3F4: jal         0x00223A94
    // 0x0022F3F8: addiu       $a1, $sp, 0x314
    ctx->r5 = ADD32(ctx->r29, 0X314);
    func_00223A94(rdram, ctx);
        goto after_1;
    // 0x0022F3F8: addiu       $a1, $sp, 0x314
    ctx->r5 = ADD32(ctx->r29, 0X314);
    after_1:
L_0022F3FC:
    // 0x0022F3FC: addiu       $v0, $sp, 0x254
    ctx->r2 = ADD32(ctx->r29, 0X254);
    // 0x0022F400: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022F404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022F408: lw          $a2, 0x2F4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2F4);
    // 0x0022F40C: addiu       $a3, $sp, 0x250
    ctx->r7 = ADD32(ctx->r29, 0X250);
    // 0x0022F410: jal         0x00266D8C
    // 0x0022F414: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00266D8C(rdram, ctx);
        goto after_2;
    // 0x0022F414: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x0022F418: beq         $v0, $zero, L_00230A60
    if (ctx->r2 == 0) {
        // 0x0022F41C: nop
    
            goto L_00230A60;
    }
    // 0x0022F41C: nop

    // 0x0022F420: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022F424: jal         0x002017D4
    // 0x0022F428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0022F428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x0022F42C: sw          $zero, 0x278($sp)
    MEM_W(0X278, ctx->r29) = 0;
    // 0x0022F430: lw          $a0, -0x1414($s3)
    ctx->r4 = MEM_W(ctx->r19, -0X1414);
    // 0x0022F434: beq         $a0, $zero, L_0022F440
    if (ctx->r4 == 0) {
        // 0x0022F438: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_0022F440;
    }
    // 0x0022F438: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0022F43C: sw          $a0, 0x278($sp)
    MEM_W(0X278, ctx->r29) = ctx->r4;
L_0022F440:
    // 0x0022F440: lw          $t3, 0x2E8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2E8);
    // 0x0022F444: beq         $t3, $zero, L_0022F480
    if (ctx->r11 == 0) {
        // 0x0022F448: sw          $zero, 0x27C($sp)
        MEM_W(0X27C, ctx->r29) = 0;
            goto L_0022F480;
    }
    // 0x0022F448: sw          $zero, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = 0;
    // 0x0022F44C: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x0022F450: beq         $v0, $zero, L_0022F470
    if (ctx->r2 == 0) {
        // 0x0022F454: nop
    
            goto L_0022F470;
    }
    // 0x0022F454: nop

    // 0x0022F458: bltz        $v0, L_0022F480
    if (SIGNED(ctx->r2) < 0) {
        // 0x0022F45C: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_0022F480;
    }
    // 0x0022F45C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0022F460: beq         $v0, $zero, L_0022F480
    if (ctx->r2 == 0) {
        // 0x0022F464: addu        $t4, $t3, $zero
        ctx->r12 = ADD32(ctx->r11, 0);
            goto L_0022F480;
    }
    // 0x0022F464: addu        $t4, $t3, $zero
    ctx->r12 = ADD32(ctx->r11, 0);
    // 0x0022F468: j           L_0022F480
    // 0x0022F46C: sw          $t4, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r12;
        goto L_0022F480;
    // 0x0022F46C: sw          $t4, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r12;
L_0022F470:
    // 0x0022F470: lw          $t1, 0x2E8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E8);
    // 0x0022F474: lw          $t1, 0x80($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X80);
    // 0x0022F478: sw          $zero, 0x2E8($sp)
    MEM_W(0X2E8, ctx->r29) = 0;
    // 0x0022F47C: sw          $t1, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r9;
L_0022F480:
    // 0x0022F480: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022F484: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0022F488: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0022F48C: beq         $v0, $zero, L_0022F49C
    if (ctx->r2 == 0) {
        // 0x0022F490: sb          $t2, 0x28F($sp)
        MEM_B(0X28F, ctx->r29) = ctx->r10;
            goto L_0022F49C;
    }
    // 0x0022F490: sb          $t2, 0x28F($sp)
    MEM_B(0X28F, ctx->r29) = ctx->r10;
    // 0x0022F494: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x0022F498: sb          $t3, 0x28F($sp)
    MEM_B(0X28F, ctx->r29) = ctx->r11;
L_0022F49C:
    // 0x0022F49C: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
    // 0x0022F4A0: lw          $v0, 0x254($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X254);
    // 0x0022F4A4: slt         $v0, $v0, $t4
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x0022F4A8: bne         $v0, $zero, L_00230A60
    if (ctx->r2 != 0) {
        // 0x0022F4AC: sw          $t4, 0x274($sp)
        MEM_W(0X274, ctx->r29) = ctx->r12;
            goto L_00230A60;
    }
    // 0x0022F4AC: sw          $t4, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r12;
    // 0x0022F4B0: lui         $fp, 0xFFFF
    ctx->r30 = S32(0XFFFF << 16);
    // 0x0022F4B4: addiu       $t1, $sp, 0x258
    ctx->r9 = ADD32(ctx->r29, 0X258);
    // 0x0022F4B8: addiu       $t2, $sp, 0x259
    ctx->r10 = ADD32(ctx->r29, 0X259);
    // 0x0022F4BC: sll         $v0, $t4, 4
    ctx->r2 = S32(ctx->r12 << 4);
    // 0x0022F4C0: subu        $v0, $v0, $t4
    ctx->r2 = SUB32(ctx->r2, ctx->r12);
    // 0x0022F4C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0022F4C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0022F4CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F4D0: lwc1        $f21, 0x63A4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X63A4);
    // 0x0022F4D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F4D8: lwc1        $f22, 0x63A8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X63A8);
    // 0x0022F4DC: addu        $s7, $v0, $v1
    ctx->r23 = ADD32(ctx->r2, ctx->r3);
    // 0x0022F4E0: sw          $t1, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r9;
    // 0x0022F4E4: sw          $t2, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r10;
L_0022F4E8:
    // 0x0022F4E8: lbu         $v0, 0x10($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X10);
    // 0x0022F4EC: lbu         $t3, 0x28F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X28F);
    // 0x0022F4F0: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x0022F4F4: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x0022F4F8: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x0022F4FC: beq         $v1, $zero, L_0022F5A0
    if (ctx->r3 == 0) {
        // 0x0022F500: sltu        $s0, $zero, $v0
        ctx->r16 = 0 < ctx->r2 ? 1 : 0;
            goto L_0022F5A0;
    }
    // 0x0022F500: sltu        $s0, $zero, $v0
    ctx->r16 = 0 < ctx->r2 ? 1 : 0;
    // 0x0022F504: lw          $t4, 0x27C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X27C);
    // 0x0022F508: beq         $t4, $zero, L_0022F5A0
    if (ctx->r12 == 0) {
        // 0x0022F50C: ori         $t2, $zero, 0xEC28
        ctx->r10 = 0 | 0XEC28;
            goto L_0022F5A0;
    }
    // 0x0022F50C: ori         $t2, $zero, 0xEC28
    ctx->r10 = 0 | 0XEC28;
    // 0x0022F510: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022F514: lb          $v1, 0x8($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X8);
    // 0x0022F518: lw          $t1, 0x2E0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022F51C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022F520: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0022F524: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0022F528: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x0022F52C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x0022F530: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0022F534: beq         $s7, $zero, L_0022F574
    if (ctx->r23 == 0) {
        // 0x0022F538: nop
    
            goto L_0022F574;
    }
    // 0x0022F538: nop

    // 0x0022F53C: beq         $v1, $zero, L_0022F598
    if (ctx->r3 == 0) {
        // 0x0022F540: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022F598;
    }
    // 0x0022F540: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022F544:
    // 0x0022F544: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x0022F548: lw          $t3, 0x27C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X27C);
    // 0x0022F54C: bne         $v0, $t3, L_0022F560
    if (ctx->r2 != ctx->r11) {
        // 0x0022F550: nop
    
            goto L_0022F560;
    }
    // 0x0022F550: nop

    // 0x0022F554: lw          $v0, 0xF8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XF8);
    // 0x0022F558: beq         $v0, $s7, L_0022F598
    if (ctx->r2 == ctx->r23) {
        // 0x0022F55C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0022F598;
    }
    // 0x0022F55C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0022F560:
    // 0x0022F560: lw          $v1, 0x1C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C8);
    // 0x0022F564: bne         $v1, $zero, L_0022F544
    if (ctx->r3 != 0) {
        // 0x0022F568: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022F544;
    }
    // 0x0022F568: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0022F56C: j           L_0022F598
    // 0x0022F570: nop

        goto L_0022F598;
    // 0x0022F570: nop

L_0022F574:
    // 0x0022F574: beq         $v1, $zero, L_0022F598
    if (ctx->r3 == 0) {
        // 0x0022F578: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022F598;
    }
    // 0x0022F578: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022F57C:
    // 0x0022F57C: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x0022F580: lw          $t4, 0x27C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X27C);
    // 0x0022F584: beq         $v0, $t4, L_0022F598
    if (ctx->r2 == ctx->r12) {
        // 0x0022F588: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0022F598;
    }
    // 0x0022F588: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0022F58C: lw          $v1, 0x1C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C8);
    // 0x0022F590: bne         $v1, $zero, L_0022F57C
    if (ctx->r3 != 0) {
        // 0x0022F594: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0022F57C;
    }
    // 0x0022F594: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0022F598:
    // 0x0022F598: bnel        $v0, $zero, L_0022F5A0
    if (ctx->r2 != 0) {
        // 0x0022F59C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F5A0;
    }
    goto skip_0;
    // 0x0022F59C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0022F5A0:
    // 0x0022F5A0: lw          $t1, 0x278($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X278);
    // 0x0022F5A4: beq         $t1, $zero, L_0022F5C0
    if (ctx->r9 == 0) {
        // 0x0022F5A8: addiu       $a0, $sp, 0xA0
        ctx->r4 = ADD32(ctx->r29, 0XA0);
            goto L_0022F5C0;
    }
    // 0x0022F5A8: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x0022F5AC: addiu       $a1, $sp, 0x314
    ctx->r5 = ADD32(ctx->r29, 0X314);
    // 0x0022F5B0: jal         0x0020EF2C
    // 0x0022F5B4: addiu       $a2, $t1, 0x4
    ctx->r6 = ADD32(ctx->r9, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x0022F5B4: addiu       $a2, $t1, 0x4
    ctx->r6 = ADD32(ctx->r9, 0X4);
    after_4:
    // 0x0022F5B8: j           L_0022F5CC
    // 0x0022F5BC: nop

        goto L_0022F5CC;
    // 0x0022F5BC: nop

L_0022F5C0:
    // 0x0022F5C0: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
    // 0x0022F5C4: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    // 0x0022F5C8: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
L_0022F5CC:
    // 0x0022F5CC: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x0022F5D0: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0022F5D4: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x0022F5D8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022F5DC: lwc1        $f1, 0xA8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA8);
    // 0x0022F5E0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022F5E4: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x0022F5E8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0022F5EC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0022F5F0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0022F5F4: beq         $v0, $zero, L_0022F610
    if (ctx->r2 == 0) {
        // 0x0022F5F8: add.s       $f2, $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
            goto L_0022F610;
    }
    // 0x0022F5F8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0022F5FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F600: lwc1        $f0, 0x63AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63AC);
    // 0x0022F604: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0022F608: j           L_0022F62C
    // 0x0022F60C: nop

        goto L_0022F62C;
    // 0x0022F60C: nop

L_0022F610:
    // 0x0022F610: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0022F614: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0022F618: beq         $v0, $zero, L_0022F638
    if (ctx->r2 == 0) {
        // 0x0022F61C: nop
    
            goto L_0022F638;
    }
    // 0x0022F61C: nop

    // 0x0022F620: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F624: lwc1        $f0, 0x63B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x0022F628: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_0022F62C:
    // 0x0022F62C: nop

    // 0x0022F630: bc1tl       L_0022F638
    if (c1cs) {
        // 0x0022F634: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F638;
    }
    goto skip_1;
    // 0x0022F634: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_0022F638:
    // 0x0022F638: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022F63C: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x0022F640: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x0022F644: beq         $v0, $zero, L_0022F68C
    if (ctx->r2 == 0) {
        // 0x0022F648: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022F68C;
    }
    // 0x0022F648: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022F64C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F650: addu        $at, $at, $v0
    gpr jr_addend_0022F658 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022F654: lw          $v0, 0x63B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X63B8);
    // 0x0022F658: jr          $v0
    // 0x0022F65C: nop

    switch (jr_addend_0022F658 >> 2) {
        case 0: goto L_0022F674; break;
        case 1: goto L_0022F680; break;
        case 2: goto L_0022F68C; break;
        case 3: goto L_0022F6CC; break;
        case 4: goto L_0022F6F8; break;
        case 5: goto L_0022F668; break;
        case 6: goto L_0022F660; break;
        default: switch_error(__func__, 0x0022F658, 0x800A63B8);
    }
    // 0x0022F65C: nop

L_0022F660:
    // 0x0022F660: j           L_0022F6FC
    // 0x0022F664: addiu       $t2, $zero, -0x7
    ctx->r10 = ADD32(0, -0X7);
        goto L_0022F6FC;
    // 0x0022F664: addiu       $t2, $zero, -0x7
    ctx->r10 = ADD32(0, -0X7);
L_0022F668:
    // 0x0022F668: addiu       $t3, $zero, -0x6
    ctx->r11 = ADD32(0, -0X6);
    // 0x0022F66C: j           L_0022F700
    // 0x0022F670: sw          $t3, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r11;
        goto L_0022F700;
    // 0x0022F670: sw          $t3, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r11;
L_0022F674:
    // 0x0022F674: addiu       $t4, $zero, -0x4
    ctx->r12 = ADD32(0, -0X4);
    // 0x0022F678: j           L_0022F700
    // 0x0022F67C: sw          $t4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r12;
        goto L_0022F700;
    // 0x0022F67C: sw          $t4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r12;
L_0022F680:
    // 0x0022F680: addiu       $t1, $zero, -0x5
    ctx->r9 = ADD32(0, -0X5);
    // 0x0022F684: j           L_0022F700
    // 0x0022F688: sw          $t1, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r9;
        goto L_0022F700;
    // 0x0022F688: sw          $t1, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r9;
L_0022F68C:
    // 0x0022F68C: lw          $t2, 0x324($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X324);
    // 0x0022F690: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x0022F694: beq         $t2, $v0, L_0022F6B8
    if (ctx->r10 == ctx->r2) {
        // 0x0022F698: slt         $v0, $t2, $v0
        ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_0022F6B8;
    }
    // 0x0022F698: slt         $v0, $t2, $v0
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0022F69C: bne         $v0, $zero, L_0022F6C4
    if (ctx->r2 != 0) {
        // 0x0022F6A0: addiu       $t4, $zero, -0x3
        ctx->r12 = ADD32(0, -0X3);
            goto L_0022F6C4;
    }
    // 0x0022F6A0: addiu       $t4, $zero, -0x3
    ctx->r12 = ADD32(0, -0X3);
    // 0x0022F6A4: slti        $v0, $t2, -0x1
    ctx->r2 = SIGNED(ctx->r10) < -0X1 ? 1 : 0;
    // 0x0022F6A8: beq         $v0, $zero, L_0022F6C4
    if (ctx->r2 == 0) {
        // 0x0022F6AC: slti        $v0, $t2, -0x3
        ctx->r2 = SIGNED(ctx->r10) < -0X3 ? 1 : 0;
            goto L_0022F6C4;
    }
    // 0x0022F6AC: slti        $v0, $t2, -0x3
    ctx->r2 = SIGNED(ctx->r10) < -0X3 ? 1 : 0;
    // 0x0022F6B0: bnel        $v0, $zero, L_0022F700
    if (ctx->r2 != 0) {
        // 0x0022F6B4: sw          $t4, 0x270($sp)
        MEM_W(0X270, ctx->r29) = ctx->r12;
            goto L_0022F700;
    }
    goto skip_2;
    // 0x0022F6B4: sw          $t4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r12;
    skip_2:
L_0022F6B8:
    // 0x0022F6B8: lw          $t3, 0x324($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X324);
    // 0x0022F6BC: j           L_0022F700
    // 0x0022F6C0: sw          $t3, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r11;
        goto L_0022F700;
    // 0x0022F6C0: sw          $t3, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r11;
L_0022F6C4:
    // 0x0022F6C4: j           L_0022F700
    // 0x0022F6C8: sw          $t4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r12;
        goto L_0022F700;
    // 0x0022F6C8: sw          $t4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r12;
L_0022F6CC:
    // 0x0022F6CC: lwc1        $f0, 0x324($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X324);
    // 0x0022F6D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022F6D4: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0022F6D8: nop

    // 0x0022F6DC: bc1fl       L_0022F6F0
    if (!c1cs) {
        // 0x0022F6E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F6F0;
    }
    goto skip_3;
    // 0x0022F6E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
    // 0x0022F6E4: lw          $t1, 0x324($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X324);
    // 0x0022F6E8: j           L_0022F700
    // 0x0022F6EC: sw          $t1, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r9;
        goto L_0022F700;
    // 0x0022F6EC: sw          $t1, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r9;
L_0022F6F0:
    // 0x0022F6F0: j           L_0022F700
    // 0x0022F6F4: sw          $zero, 0x270($sp)
    MEM_W(0X270, ctx->r29) = 0;
        goto L_0022F700;
    // 0x0022F6F4: sw          $zero, 0x270($sp)
    MEM_W(0X270, ctx->r29) = 0;
L_0022F6F8:
    // 0x0022F6F8: lw          $t2, 0x324($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X324);
L_0022F6FC:
    // 0x0022F6FC: sw          $t2, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r10;
L_0022F700:
    // 0x0022F700: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0022F704: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0022F708: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022F70C: beq         $v0, $zero, L_0022F734
    if (ctx->r2 == 0) {
        // 0x0022F710: nop
    
            goto L_0022F734;
    }
    // 0x0022F710: nop

    // 0x0022F714: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022F718: lbu         $v0, -0x5511($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5511);
    // 0x0022F71C: beql        $v0, $zero, L_0022F734
    if (ctx->r2 == 0) {
        // 0x0022F720: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F734;
    }
    goto skip_4;
    // 0x0022F720: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_4:
    // 0x0022F724: lw          $t3, 0x328($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X328);
    // 0x0022F728: andi        $v0, $t3, 0x1
    ctx->r2 = ctx->r11 & 0X1;
    // 0x0022F72C: beql        $v0, $zero, L_0022F734
    if (ctx->r2 == 0) {
        // 0x0022F730: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F734;
    }
    goto skip_5;
    // 0x0022F730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_5:
L_0022F734:
    // 0x0022F734: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0022F738: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0022F73C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022F740: beq         $v0, $zero, L_0022F758
    if (ctx->r2 == 0) {
        // 0x0022F744: nop
    
            goto L_0022F758;
    }
    // 0x0022F744: nop

    // 0x0022F748: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022F74C: lbu         $v0, -0x5511($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5511);
    // 0x0022F750: bnel        $v0, $zero, L_0022F758
    if (ctx->r2 != 0) {
        // 0x0022F754: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F758;
    }
    goto skip_6;
    // 0x0022F754: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_6:
L_0022F758:
    // 0x0022F758: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022F75C: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x0022F760: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x0022F764: beq         $v1, $v0, L_0022F7CC
    if (ctx->r3 == ctx->r2) {
        // 0x0022F768: nop
    
            goto L_0022F7CC;
    }
    // 0x0022F768: nop

    // 0x0022F76C: jal         0x002113A4
    // 0x0022F770: nop

    func_002113A4(rdram, ctx);
        goto after_5;
    // 0x0022F770: nop

    after_5:
    // 0x0022F774: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0022F778: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0022F77C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0022F780: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0022F784: mfhi        $t1
    ctx->r9 = hi;
    // 0x0022F788: sra         $a0, $t1, 6
    ctx->r4 = S32(SIGNED(ctx->r9) >> 6);
    // 0x0022F78C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0022F790: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0022F794: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0022F798: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0022F79C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0022F7A0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0022F7A4: lw          $a0, 0x38($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X38);
    // 0x0022F7A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0022F7AC: lb          $a0, 0x4($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4);
    // 0x0022F7B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0022F7B4: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0022F7B8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0022F7BC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0022F7C0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0022F7C4: bnel        $v1, $zero, L_0022F7CC
    if (ctx->r3 != 0) {
        // 0x0022F7C8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0022F7CC;
    }
    goto skip_7;
    // 0x0022F7C8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_7:
L_0022F7CC:
    // 0x0022F7CC: beql        $s0, $zero, L_00230A48
    if (ctx->r16 == 0) {
        // 0x0022F7D0: addiu       $s7, $s7, 0x3C
        ctx->r23 = ADD32(ctx->r23, 0X3C);
            goto L_00230A48;
    }
    goto skip_8;
    // 0x0022F7D0: addiu       $s7, $s7, 0x3C
    ctx->r23 = ADD32(ctx->r23, 0X3C);
    skip_8:
    // 0x0022F7D4: lw          $v1, 0x38($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X38);
    // 0x0022F7D8: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x0022F7DC: beq         $v0, $zero, L_0022F7F4
    if (ctx->r2 == 0) {
        // 0x0022F7E0: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_0022F7F4;
    }
    // 0x0022F7E0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0022F7E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022F7E8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0022F7EC: jal         0x00225C08
    // 0x0022F7F0: addiu       $a2, $sp, 0x314
    ctx->r6 = ADD32(ctx->r29, 0X314);
    func_00225C08(rdram, ctx);
        goto after_6;
    // 0x0022F7F0: addiu       $a2, $sp, 0x314
    ctx->r6 = ADD32(ctx->r29, 0X314);
    after_6:
L_0022F7F4:
    // 0x0022F7F4: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x0022F7F8: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x0022F7FC: beq         $v0, $zero, L_0022F9A0
    if (ctx->r2 == 0) {
        // 0x0022F800: sw          $zero, 0x280($sp)
        MEM_W(0X280, ctx->r29) = 0;
            goto L_0022F9A0;
    }
    // 0x0022F800: sw          $zero, 0x280($sp)
    MEM_W(0X280, ctx->r29) = 0;
    // 0x0022F804: lw          $t2, 0x2E4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F808: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x0022F80C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0022F810: beq         $v1, $t3, L_0022F954
    if (ctx->r3 == ctx->r11) {
        // 0x0022F814: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022F954;
    }
    // 0x0022F814: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022F818: bne         $v1, $v0, L_0022F980
    if (ctx->r3 != ctx->r2) {
        // 0x0022F81C: lui         $v1, 0x10
        ctx->r3 = S32(0X10 << 16);
            goto L_0022F980;
    }
    // 0x0022F81C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0022F820: lw          $v0, 0x40($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X40);
    // 0x0022F824: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022F828: bne         $v0, $zero, L_0022F8BC
    if (ctx->r2 != 0) {
        // 0x0022F82C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0022F8BC;
    }
    // 0x0022F82C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0022F830: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022F834: lw          $v0, -0x6720($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6720);
    // 0x0022F838: bne         $v0, $t3, L_0022F884
    if (ctx->r2 != ctx->r11) {
        // 0x0022F83C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0022F884;
    }
    // 0x0022F83C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0022F840: addiu       $a1, $t2, 0x4
    ctx->r5 = ADD32(ctx->r10, 0X4);
    // 0x0022F844: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0022F848: lw          $s0, -0x6730($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6730);
    // 0x0022F84C: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x0022F850: jal         0x0020F85C
    // 0x0022F854: addiu       $a0, $s0, 0x20C
    ctx->r4 = ADD32(ctx->r16, 0X20C);
    func_0020F85C(rdram, ctx);
        goto after_7;
    // 0x0022F854: addiu       $a0, $s0, 0x20C
    ctx->r4 = ADD32(ctx->r16, 0X20C);
    after_7:
    // 0x0022F858: lwc1        $f0, 0x1B8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x0022F85C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0022F860: nop

    // 0x0022F864: bc1tl       L_0022F86C
    if (c1cs) {
        // 0x0022F868: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0022F86C;
    }
    goto skip_9;
    // 0x0022F868: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_9:
L_0022F86C:
    // 0x0022F86C: lw          $a0, 0x2E4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F870: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0022F874: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0022F878: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0022F87C: j           L_0022F894
    // 0x0022F880: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0022F894;
    // 0x0022F880: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0022F884:
    // 0x0022F884: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0022F888: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0022F88C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0022F890: lw          $a0, 0x2E4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2E4);
L_0022F894:
    // 0x0022F894: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0022F898: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x0022F89C: jal         0x0022D2FC
    // 0x0022F8A0: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    func_0022D2FC(rdram, ctx);
        goto after_8;
    // 0x0022F8A0: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    after_8:
    // 0x0022F8A4: lw          $t4, 0x2E4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F8A8: lw          $v0, 0x40($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X40);
    // 0x0022F8AC: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0022F8B0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022F8B4: sw          $v0, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->r2;
    // 0x0022F8B8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0022F8BC:
    // 0x0022F8BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0022F8C0: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0022F8C4: lw          $t1, 0x2E4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F8C8: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0022F8CC: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x0022F8D0: jal         0x0020D908
    // 0x0022F8D4: addu        $a1, $t1, $a1
    ctx->r5 = ADD32(ctx->r9, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_9;
    // 0x0022F8D4: addu        $a1, $t1, $a1
    ctx->r5 = ADD32(ctx->r9, ctx->r5);
    after_9:
    // 0x0022F8D8: lw          $t2, 0x2E4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F8DC: lw          $v0, 0xF8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XF8);
    // 0x0022F8E0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0022F8E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F8E8: lwc1        $f0, 0x63D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63D4);
    // 0x0022F8EC: beq         $v0, $zero, L_0022F8FC
    if (ctx->r2 == 0) {
        // 0x0022F8F0: nop
    
            goto L_0022F8FC;
    }
    // 0x0022F8F0: nop

    // 0x0022F8F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F8F8: lwc1        $f0, 0x63D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63D8);
L_0022F8FC:
    // 0x0022F8FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022F900: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0022F904: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0022F908: jal         0x0021034C
    // 0x0022F90C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_10;
    // 0x0022F90C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_10:
    // 0x0022F910: lw          $t3, 0x2E4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F914: lw          $v0, 0xF8($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XF8);
    // 0x0022F918: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022F91C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0022F920: beq         $v0, $zero, L_0022FA18
    if (ctx->r2 == 0) {
        // 0x0022F924: nop
    
            goto L_0022FA18;
    }
    // 0x0022F924: nop

    // 0x0022F928: lwc1        $f0, 0x130($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X130);
    // 0x0022F92C: lwc1        $f1, 0x134($t3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r11, 0X134);
    // 0x0022F930: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0022F934: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022F938: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0022F93C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x0022F940: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022F944: jal         0x00210318
    // 0x0022F948: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_00210318(rdram, ctx);
        goto after_11;
    // 0x0022F948: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_11:
    // 0x0022F94C: j           L_0022FA18
    // 0x0022F950: nop

        goto L_0022FA18;
    // 0x0022F950: nop

L_0022F954:
    // 0x0022F954: lui         $t4, 0x40
    ctx->r12 = S32(0X40 << 16);
    // 0x0022F958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022F95C: lwc1        $f0, 0x63DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63DC);
    // 0x0022F960: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0022F964: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022F968: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0022F96C: sw          $t4, 0x280($sp)
    MEM_W(0X280, ctx->r29) = ctx->r12;
    // 0x0022F970: jal         0x0020FC74
    // 0x0022F974: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0020FC74(rdram, ctx);
        goto after_12;
    // 0x0022F974: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_12:
    // 0x0022F978: j           L_0022FA18
    // 0x0022F97C: nop

        goto L_0022FA18;
    // 0x0022F97C: nop

L_0022F980:
    // 0x0022F980: lw          $t1, 0x2E4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022F984: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    // 0x0022F988: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x0022F98C: lw          $a3, 0xC($t1)
    ctx->r7 = MEM_W(ctx->r9, 0XC);
    // 0x0022F990: jal         0x0020FC24
    // 0x0022F994: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020FC24(rdram, ctx);
        goto after_13;
    // 0x0022F994: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_13:
    // 0x0022F998: j           L_0022FA18
    // 0x0022F99C: nop

        goto L_0022FA18;
    // 0x0022F99C: nop

L_0022F9A0:
    // 0x0022F9A0: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0022F9A4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0022F9A8: beq         $v0, $zero, L_0022F9C0
    if (ctx->r2 == 0) {
        // 0x0022F9AC: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_0022F9C0;
    }
    // 0x0022F9AC: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0022F9B0: jal         0x0020F79C
    // 0x0022F9B4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020F79C(rdram, ctx);
        goto after_14;
    // 0x0022F9B4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_14:
    // 0x0022F9B8: j           L_0022FA18
    // 0x0022F9BC: nop

        goto L_0022FA18;
    // 0x0022F9BC: nop

L_0022F9C0:
    // 0x0022F9C0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0022F9C4: beq         $v0, $zero, L_0022F9F0
    if (ctx->r2 == 0) {
        // 0x0022F9C8: addiu       $a0, $sp, 0xB0
        ctx->r4 = ADD32(ctx->r29, 0XB0);
            goto L_0022F9F0;
    }
    // 0x0022F9C8: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x0022F9CC: lw          $v0, 0x31C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X31C);
    // 0x0022F9D0: lw          $a1, 0x2E8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2E8);
    // 0x0022F9D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022F9D8: lw          $a2, 0x314($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X314);
    // 0x0022F9DC: lw          $a3, 0x318($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X318);
    // 0x0022F9E0: jal         0x002673CC
    // 0x0022F9E4: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    func_002673CC(rdram, ctx);
        goto after_15;
    // 0x0022F9E4: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    after_15:
    // 0x0022F9E8: j           L_0022FA10
    // 0x0022F9EC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
        goto L_0022FA10;
    // 0x0022F9EC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
L_0022F9F0:
    // 0x0022F9F0: lw          $t2, 0x304($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X304);
    // 0x0022F9F4: lw          $t3, 0x308($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X308);
    // 0x0022F9F8: lw          $t4, 0x30C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30C);
    // 0x0022F9FC: lw          $t1, 0x310($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X310);
    // 0x0022FA00: sw          $t2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r10;
    // 0x0022FA04: sw          $t3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r11;
    // 0x0022FA08: sw          $t4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r12;
    // 0x0022FA0C: sw          $t1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r9;
L_0022FA10:
    // 0x0022FA10: jal         0x00211114
    // 0x0022FA14: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00211114(rdram, ctx);
        goto after_16;
    // 0x0022FA14: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_16:
L_0022FA18:
    // 0x0022FA18: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022FA1C: lb          $s0, 0x7($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X7);
    // 0x0022FA20: beq         $s0, $zero, L_0022FA64
    if (ctx->r16 == 0) {
        // 0x0022FA24: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0022FA64;
    }
    // 0x0022FA24: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0022FA28: jal         0x002113A4
    // 0x0022FA2C: nop

    func_002113A4(rdram, ctx);
        goto after_17;
    // 0x0022FA2C: nop

    after_17:
    // 0x0022FA30: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x0022FA34: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0022FA38: bne         $v1, $zero, L_0022FA44
    if (ctx->r3 != 0) {
        // 0x0022FA3C: nop
    
            goto L_0022FA44;
    }
    // 0x0022FA3C: nop

    // 0x0022FA40: break       7
    do_break(2292288);
L_0022FA44:
    // 0x0022FA44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022FA48: bne         $v1, $at, L_0022FA5C
    if (ctx->r3 != ctx->r1) {
        // 0x0022FA4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022FA5C;
    }
    // 0x0022FA4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022FA50: bne         $v0, $at, L_0022FA5C
    if (ctx->r2 != ctx->r1) {
        // 0x0022FA54: nop
    
            goto L_0022FA5C;
    }
    // 0x0022FA54: nop

    // 0x0022FA58: break       6
    do_break(2292312);
L_0022FA5C:
    // 0x0022FA5C: mfhi        $v1
    ctx->r3 = hi;
    // 0x0022FA60: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
L_0022FA64:
    // 0x0022FA64: lb          $v0, 0x6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6);
    // 0x0022FA68: sw          $zero, 0x268($sp)
    MEM_W(0X268, ctx->r29) = 0;
    // 0x0022FA6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0022FA70: blez        $v0, L_00230A44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0022FA74: sw          $v0, 0x26C($sp)
        MEM_W(0X26C, ctx->r29) = ctx->r2;
            goto L_00230A44;
    }
    // 0x0022FA74: sw          $v0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r2;
    // 0x0022FA78: addiu       $t1, $sp, 0x25A
    ctx->r9 = ADD32(ctx->r29, 0X25A);
    // 0x0022FA7C: sw          $t1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r9;
L_0022FA80:
    // 0x0022FA80: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022FA84: lh          $s0, 0x2($v0)
    ctx->r16 = MEM_H(ctx->r2, 0X2);
    // 0x0022FA88: beq         $s0, $zero, L_0022FAE4
    if (ctx->r16 == 0) {
        // 0x0022FA8C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0022FAE4;
    }
    // 0x0022FA8C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0022FA90: jal         0x002113A4
    // 0x0022FA94: nop

    func_002113A4(rdram, ctx);
        goto after_18;
    // 0x0022FA94: nop

    after_18:
    // 0x0022FA98: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x0022FA9C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0022FAA0: bne         $v1, $zero, L_0022FAAC
    if (ctx->r3 != 0) {
        // 0x0022FAA4: nop
    
            goto L_0022FAAC;
    }
    // 0x0022FAA4: nop

    // 0x0022FAA8: break       7
    do_break(2292392);
L_0022FAAC:
    // 0x0022FAAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022FAB0: bne         $v1, $at, L_0022FAC4
    if (ctx->r3 != ctx->r1) {
        // 0x0022FAB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022FAC4;
    }
    // 0x0022FAB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022FAB8: bne         $v0, $at, L_0022FAC4
    if (ctx->r2 != ctx->r1) {
        // 0x0022FABC: nop
    
            goto L_0022FAC4;
    }
    // 0x0022FABC: nop

    // 0x0022FAC0: break       6
    do_break(2292416);
L_0022FAC4:
    // 0x0022FAC4: mfhi        $v1
    ctx->r3 = hi;
    // 0x0022FAC8: j           L_0022FAE4
    // 0x0022FACC: nop

        goto L_0022FAE4;
    // 0x0022FACC: nop

L_0022FAD0:
    // 0x0022FAD0: lw          $a0, 0x2E0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022FAD4: jal         0x0022F1C8
    // 0x0022FAD8: nop

    func_0022F1C8(rdram, ctx);
        goto after_19;
    // 0x0022FAD8: nop

    after_19:
    // 0x0022FADC: j           L_0022FB4C
    // 0x0022FAE0: nop

        goto L_0022FB4C;
    // 0x0022FAE0: nop

L_0022FAE4:
    // 0x0022FAE4: lw          $a0, 0x38($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X38);
    // 0x0022FAE8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0022FAEC: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x0022FAF0: beq         $s2, $zero, L_00230A2C
    if (ctx->r18 == 0) {
        // 0x0022FAF4: nop
    
            goto L_00230A2C;
    }
    // 0x0022FAF4: nop

    // 0x0022FAF8: lw          $t1, 0x2E0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022FAFC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0022FB00: addu        $at, $t1, $at
    ctx->r1 = ADD32(ctx->r9, ctx->r1);
    // 0x0022FB04: lw          $v0, -0x1400($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1400);
    // 0x0022FB08: lbu         $s0, 0x8($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X8);
    // 0x0022FB0C: bne         $v0, $zero, L_0022FB4C
    if (ctx->r2 != 0) {
        // 0x0022FB10: nop
    
            goto L_0022FB4C;
    }
    // 0x0022FB10: nop

    // 0x0022FB14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0022FB18: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x0022FB1C: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0022FB20: bne         $v0, $zero, L_0022FB4C
    if (ctx->r2 != 0) {
        // 0x0022FB24: ori         $t2, $zero, 0xEC28
        ctx->r10 = 0 | 0XEC28;
            goto L_0022FB4C;
    }
    // 0x0022FB24: ori         $t2, $zero, 0xEC28
    ctx->r10 = 0 | 0XEC28;
    // 0x0022FB28: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0022FB2C: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
L_0022FB30:
    // 0x0022FB30: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x0022FB34: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x0022FB38: bne         $a1, $zero, L_0022FAD0
    if (ctx->r5 != 0) {
        // 0x0022FB3C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0022FAD0;
    }
    // 0x0022FB3C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0022FB40: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0022FB44: beq         $v0, $zero, L_0022FB30
    if (ctx->r2 == 0) {
        // 0x0022FB48: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_0022FB30;
    }
    // 0x0022FB48: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_0022FB4C:
    // 0x0022FB4C: lw          $t3, 0x2E0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022FB50: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0022FB54: addu        $at, $t3, $at
    ctx->r1 = ADD32(ctx->r11, ctx->r1);
    // 0x0022FB58: lw          $s1, -0x1400($at)
    ctx->r17 = MEM_W(ctx->r1, -0X1400);
    // 0x0022FB5C: bnel        $s1, $zero, L_0022FB6C
    if (ctx->r17 != 0) {
        // 0x0022FB60: ori         $a0, $zero, 0xEC00
        ctx->r4 = 0 | 0XEC00;
            goto L_0022FB6C;
    }
    goto skip_10;
    // 0x0022FB60: ori         $a0, $zero, 0xEC00
    ctx->r4 = 0 | 0XEC00;
    skip_10:
    // 0x0022FB64: j           L_0022FBC0
    // 0x0022FB68: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
        goto L_0022FBC0;
    // 0x0022FB68: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_0022FB6C:
    // 0x0022FB6C: lw          $t4, 0x2E0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022FB70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022FB74: jal         0x00200738
    // 0x0022FB78: addu        $a0, $t4, $a0
    ctx->r4 = ADD32(ctx->r12, ctx->r4);
    func_00200738(rdram, ctx);
        goto after_20;
    // 0x0022FB78: addu        $a0, $t4, $a0
    ctx->r4 = ADD32(ctx->r12, ctx->r4);
    after_20:
    // 0x0022FB7C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x0022FB80: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x0022FB84: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x0022FB88: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0022FB8C: ori         $t1, $zero, 0xEC28
    ctx->r9 = 0 | 0XEC28;
    // 0x0022FB90: addu        $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
    // 0x0022FB94: lw          $t2, 0x2E0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2E0);
    // 0x0022FB98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022FB9C: addu        $s0, $t2, $s0
    ctx->r16 = ADD32(ctx->r10, ctx->r16);
    // 0x0022FBA0: jal         0x00200518
    // 0x0022FBA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_21;
    // 0x0022FBA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x0022FBA8: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
    // 0x0022FBAC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0022FBB0: sw          $s0, 0x1C0($s6)
    MEM_W(0X1C0, ctx->r22) = ctx->r16;
    // 0x0022FBB4: sw          $zero, 0x1D0($s6)
    MEM_W(0X1D0, ctx->r22) = 0;
    // 0x0022FBB8: sw          $zero, 0x1CC($s6)
    MEM_W(0X1CC, ctx->r22) = 0;
    // 0x0022FBBC: sw          $v0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r2;
L_0022FBC0:
    // 0x0022FBC0: beql        $s6, $zero, L_00230A48
    if (ctx->r22 == 0) {
        // 0x0022FBC4: addiu       $s7, $s7, 0x3C
        ctx->r23 = ADD32(ctx->r23, 0X3C);
            goto L_00230A48;
    }
    goto skip_11;
    // 0x0022FBC4: addiu       $s7, $s7, 0x3C
    ctx->r23 = ADD32(ctx->r23, 0X3C);
    skip_11:
    // 0x0022FBC8: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x0022FBCC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x0022FBD0: sw          $t3, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r11;
    // 0x0022FBD4: lh          $a1, 0x4($s7)
    ctx->r5 = MEM_H(ctx->r23, 0X4);
    // 0x0022FBD8: jal         0x00207914
    // 0x0022FBDC: addiu       $a0, $s6, 0xFC
    ctx->r4 = ADD32(ctx->r22, 0XFC);
    entry_00207914(rdram, ctx);
        goto after_22;
    // 0x0022FBDC: addiu       $a0, $s6, 0xFC
    ctx->r4 = ADD32(ctx->r22, 0XFC);
    after_22:
    // 0x0022FBE0: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x0022FBE4: sw          $zero, 0x1C($s6)
    MEM_W(0X1C, ctx->r22) = 0;
    // 0x0022FBE8: sw          $zero, 0x20($s6)
    MEM_W(0X20, ctx->r22) = 0;
    // 0x0022FBEC: sw          $zero, 0x24($s6)
    MEM_W(0X24, ctx->r22) = 0;
    // 0x0022FBF0: sw          $zero, 0x28($s6)
    MEM_W(0X28, ctx->r22) = 0;
    // 0x0022FBF4: sw          $zero, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = 0;
    // 0x0022FBF8: sw          $zero, 0x30($s6)
    MEM_W(0X30, ctx->r22) = 0;
    // 0x0022FBFC: lhu         $t4, 0x2F6($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2F6);
    // 0x0022FC00: sw          $s7, 0xF8($s6)
    MEM_W(0XF8, ctx->r22) = ctx->r23;
    // 0x0022FC04: sh          $t4, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r12;
    // 0x0022FC08: lbu         $t1, 0x273($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X273);
    // 0x0022FC0C: sb          $t1, 0x1AC($s6)
    MEM_B(0X1AC, ctx->r22) = ctx->r9;
    // 0x0022FC10: lw          $t2, 0x2E4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2E4);
    // 0x0022FC14: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x0022FC18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022FC1C: bnel        $v1, $v0, L_0022FC28
    if (ctx->r3 != ctx->r2) {
        // 0x0022FC20: sw          $zero, 0x108($s6)
        MEM_W(0X108, ctx->r22) = 0;
            goto L_0022FC28;
    }
    goto skip_12;
    // 0x0022FC20: sw          $zero, 0x108($s6)
    MEM_W(0X108, ctx->r22) = 0;
    skip_12:
    // 0x0022FC24: sw          $t2, 0x108($s6)
    MEM_W(0X108, ctx->r22) = ctx->r10;
L_0022FC28:
    // 0x0022FC28: lw          $t3, 0x27C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X27C);
    // 0x0022FC2C: sw          $t3, 0x104($s6)
    MEM_W(0X104, ctx->r22) = ctx->r11;
    // 0x0022FC30: lw          $t4, 0x2E8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2E8);
    // 0x0022FC34: sw          $t4, 0x10C($s6)
    MEM_W(0X10C, ctx->r22) = ctx->r12;
    // 0x0022FC38: lw          $t1, 0x2EC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2EC);
    // 0x0022FC3C: beq         $t1, $zero, L_0022FC50
    if (ctx->r9 == 0) {
        // 0x0022FC40: sw          $t1, 0x110($s6)
        MEM_W(0X110, ctx->r22) = ctx->r9;
            goto L_0022FC50;
    }
    // 0x0022FC40: sw          $t1, 0x110($s6)
    MEM_W(0X110, ctx->r22) = ctx->r9;
    // 0x0022FC44: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x0022FC48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0022FC4C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_0022FC50:
    // 0x0022FC50: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x0022FC54: ori         $v0, $v0, 0x19FF
    ctx->r2 = ctx->r2 | 0X19FF;
    // 0x0022FC58: lw          $v1, 0x40($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X40);
    // 0x0022FC5C: lw          $t2, 0x2F0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2F0);
    // 0x0022FC60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0022FC64: sw          $t2, 0x114($s6)
    MEM_W(0X114, ctx->r22) = ctx->r10;
    // 0x0022FC68: lw          $t3, 0x328($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X328);
    // 0x0022FC6C: lw          $t4, 0x280($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X280);
    // 0x0022FC70: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0022FC74: or          $v0, $t3, $t4
    ctx->r2 = ctx->r11 | ctx->r12;
    // 0x0022FC78: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x0022FC7C: lw          $v0, 0xF8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XF8);
    // 0x0022FC80: sw          $a0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r4;
    // 0x0022FC84: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022FC88: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0022FC8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022FC90: beq         $v0, $zero, L_0022FCBC
    if (ctx->r2 == 0) {
        // 0x0022FC94: addiu       $a2, $s6, 0xFC
        ctx->r6 = ADD32(ctx->r22, 0XFC);
            goto L_0022FCBC;
    }
    // 0x0022FC94: addiu       $a2, $s6, 0xFC
    ctx->r6 = ADD32(ctx->r22, 0XFC);
    // 0x0022FC98: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x0022FC9C: beq         $v0, $zero, L_0022FCAC
    if (ctx->r2 == 0) {
        // 0x0022FCA0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022FCAC;
    }
    // 0x0022FCA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022FCA4: j           L_0022FCBC
    // 0x0022FCA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_0022FCBC;
    // 0x0022FCA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_0022FCAC:
    // 0x0022FCAC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0022FCB0: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x0022FCB4: beql        $v1, $v0, L_0022FCBC
    if (ctx->r3 == ctx->r2) {
        // 0x0022FCB8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0022FCBC;
    }
    goto skip_13;
    // 0x0022FCB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_13:
L_0022FCBC:
    // 0x0022FCBC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0022FCC0: sll         $v1, $a1, 30
    ctx->r3 = S32(ctx->r5 << 30);
    // 0x0022FCC4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022FCC8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0022FCCC: sb          $zero, 0x1B5($s6)
    MEM_B(0X1B5, ctx->r22) = 0;
    // 0x0022FCD0: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022FCD4: lb          $s0, 0xD($v0)
    ctx->r16 = MEM_B(ctx->r2, 0XD);
    // 0x0022FCD8: bgez        $s0, L_0022FCF0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0022FCDC: nop
    
            goto L_0022FCF0;
    }
    // 0x0022FCDC: nop

    // 0x0022FCE0: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0022FCE4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022FCE8: j           L_0022FD40
    // 0x0022FCEC: swc1        $f0, 0x11C($s6)
    MEM_W(0X11C, ctx->r22) = ctx->f0.u32l;
        goto L_0022FD40;
    // 0x0022FCEC: swc1        $f0, 0x11C($s6)
    MEM_W(0X11C, ctx->r22) = ctx->f0.u32l;
L_0022FCF0:
    // 0x0022FCF0: beq         $s0, $zero, L_0022FD30
    if (ctx->r16 == 0) {
        // 0x0022FCF4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0022FD30;
    }
    // 0x0022FCF4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0022FCF8: jal         0x002113A4
    // 0x0022FCFC: nop

    func_002113A4(rdram, ctx);
        goto after_23;
    // 0x0022FCFC: nop

    after_23:
    // 0x0022FD00: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x0022FD04: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0022FD08: bne         $v1, $zero, L_0022FD14
    if (ctx->r3 != 0) {
        // 0x0022FD0C: nop
    
            goto L_0022FD14;
    }
    // 0x0022FD0C: nop

    // 0x0022FD10: break       7
    do_break(2293008);
L_0022FD14:
    // 0x0022FD14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022FD18: bne         $v1, $at, L_0022FD2C
    if (ctx->r3 != ctx->r1) {
        // 0x0022FD1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022FD2C;
    }
    // 0x0022FD1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022FD20: bne         $v0, $at, L_0022FD2C
    if (ctx->r2 != ctx->r1) {
        // 0x0022FD24: nop
    
            goto L_0022FD2C;
    }
    // 0x0022FD24: nop

    // 0x0022FD28: break       6
    do_break(2293032);
L_0022FD2C:
    // 0x0022FD2C: mfhi        $v1
    ctx->r3 = hi;
L_0022FD30:
    // 0x0022FD30: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0022FD34: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022FD38: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0022FD3C: swc1        $f0, 0x11C($s6)
    MEM_W(0X11C, ctx->r22) = ctx->f0.u32l;
L_0022FD40:
    // 0x0022FD40: lw          $v0, 0x2C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X2C);
    // 0x0022FD44: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x0022FD48: lhu         $v0, 0xA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA);
    // 0x0022FD4C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FD50: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FD54: jal         0x0026D128
    // 0x0022FD58: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_24;
    // 0x0022FD58: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_24:
    // 0x0022FD5C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0022FD60: swc1        $f0, 0x178($s6)
    MEM_W(0X178, ctx->r22) = ctx->f0.u32l;
    // 0x0022FD64: lw          $v0, 0x2C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X2C);
    // 0x0022FD68: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x0022FD6C: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x0022FD70: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FD74: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FD78: jal         0x0026D128
    // 0x0022FD7C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_25;
    // 0x0022FD7C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_25:
    // 0x0022FD80: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0022FD84: swc1        $f0, 0x180($s6)
    MEM_W(0X180, ctx->r22) = ctx->f0.u32l;
    // 0x0022FD88: lw          $v0, 0x2C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X2C);
    // 0x0022FD8C: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x0022FD90: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0022FD94: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FD98: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FD9C: jal         0x0026D128
    // 0x0022FDA0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_26;
    // 0x0022FDA0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_26:
    // 0x0022FDA4: swc1        $f0, 0x188($s6)
    MEM_W(0X188, ctx->r22) = ctx->f0.u32l;
    // 0x0022FDA8: lw          $v0, 0x2C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X2C);
    // 0x0022FDAC: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x0022FDB0: lhu         $v0, 0x16($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X16);
    // 0x0022FDB4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FDB8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FDBC: jal         0x0026D128
    // 0x0022FDC0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_27;
    // 0x0022FDC0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_27:
    // 0x0022FDC4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0022FDC8: swc1        $f0, 0x17C($s6)
    MEM_W(0X17C, ctx->r22) = ctx->f0.u32l;
    // 0x0022FDCC: lw          $v0, 0x2C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X2C);
    // 0x0022FDD0: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x0022FDD4: lhu         $v0, 0x12($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X12);
    // 0x0022FDD8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FDDC: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FDE0: jal         0x0026D128
    // 0x0022FDE4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_28;
    // 0x0022FDE4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_28:
    // 0x0022FDE8: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0022FDEC: swc1        $f0, 0x184($s6)
    MEM_W(0X184, ctx->r22) = ctx->f0.u32l;
    // 0x0022FDF0: lw          $v0, 0x2C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X2C);
    // 0x0022FDF4: lhu         $a0, 0xC($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC);
    // 0x0022FDF8: lhu         $v0, 0xE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XE);
    // 0x0022FDFC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FE00: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FE04: jal         0x0026D128
    // 0x0022FE08: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_29;
    // 0x0022FE08: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_29:
    // 0x0022FE0C: swc1        $f0, 0x18C($s6)
    MEM_W(0X18C, ctx->r22) = ctx->f0.u32l;
    // 0x0022FE10: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0022FE14: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0022FE18: beql        $v0, $zero, L_0022FE6C
    if (ctx->r2 == 0) {
        // 0x0022FE1C: sw          $zero, 0x120($s6)
        MEM_W(0X120, ctx->r22) = 0;
            goto L_0022FE6C;
    }
    goto skip_14;
    // 0x0022FE1C: sw          $zero, 0x120($s6)
    MEM_W(0X120, ctx->r22) = 0;
    skip_14:
    // 0x0022FE20: beq         $s2, $zero, L_0022FE60
    if (ctx->r18 == 0) {
        // 0x0022FE24: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0022FE60;
    }
    // 0x0022FE24: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0022FE28: jal         0x002113A4
    // 0x0022FE2C: nop

    func_002113A4(rdram, ctx);
        goto after_30;
    // 0x0022FE2C: nop

    after_30:
    // 0x0022FE30: addiu       $v1, $s2, 0x1
    ctx->r3 = ADD32(ctx->r18, 0X1);
    // 0x0022FE34: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0022FE38: bne         $v1, $zero, L_0022FE44
    if (ctx->r3 != 0) {
        // 0x0022FE3C: nop
    
            goto L_0022FE44;
    }
    // 0x0022FE3C: nop

    // 0x0022FE40: break       7
    do_break(2293312);
L_0022FE44:
    // 0x0022FE44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0022FE48: bne         $v1, $at, L_0022FE5C
    if (ctx->r3 != ctx->r1) {
        // 0x0022FE4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0022FE5C;
    }
    // 0x0022FE4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0022FE50: bne         $v0, $at, L_0022FE5C
    if (ctx->r2 != ctx->r1) {
        // 0x0022FE54: nop
    
            goto L_0022FE5C;
    }
    // 0x0022FE54: nop

    // 0x0022FE58: break       6
    do_break(2293336);
L_0022FE5C:
    // 0x0022FE5C: mfhi        $v1
    ctx->r3 = hi;
L_0022FE60:
    // 0x0022FE60: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0022FE64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022FE68: swc1        $f0, 0x120($s6)
    MEM_W(0X120, ctx->r22) = ctx->f0.u32l;
L_0022FE6C:
    // 0x0022FE6C: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x0022FE70: lb          $v1, 0xB($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XB);
    // 0x0022FE74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022FE78: sh          $s2, 0x128($s6)
    MEM_H(0X128, ctx->r22) = ctx->r18;
    // 0x0022FE7C: sb          $zero, 0x12A($s6)
    MEM_B(0X12A, ctx->r22) = 0;
    // 0x0022FE80: sb          $v0, 0x12B($s6)
    MEM_B(0X12B, ctx->r22) = ctx->r2;
    // 0x0022FE84: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0022FE88: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022FE8C: swc1        $f0, 0x124($s6)
    MEM_W(0X124, ctx->r22) = ctx->f0.u32l;
    // 0x0022FE90: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x0022FE94: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x0022FE98: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0022FE9C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FEA0: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FEA4: jal         0x0026D128
    // 0x0022FEA8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_31;
    // 0x0022FEA8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_31:
    // 0x0022FEAC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0022FEB0: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x0022FEB4: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x0022FEB8: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x0022FEBC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FEC0: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FEC4: jal         0x0026D128
    // 0x0022FEC8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_32;
    // 0x0022FEC8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_32:
    // 0x0022FECC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0022FED0: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x0022FED4: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x0022FED8: lhu         $v0, 0xA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA);
    // 0x0022FEDC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FEE0: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FEE4: jal         0x0026D128
    // 0x0022FEE8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_33;
    // 0x0022FEE8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_33:
    // 0x0022FEEC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x0022FEF0: jal         0x0020F040
    // 0x0022FEF4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_34;
    // 0x0022FEF4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_34:
    // 0x0022FEF8: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x0022FEFC: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0022FF00: nop

    // 0x0022FF04: bc1f        L_0022FF34
    if (!c1cs) {
        // 0x0022FF08: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0022FF34;
    }
    // 0x0022FF08: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0022FF0C: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0022FF10: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0022FF14: nop

    // 0x0022FF18: bc1f        L_0022FF38
    if (!c1cs) {
        // 0x0022FF1C: addiu       $a1, $sp, 0x60
        ctx->r5 = ADD32(ctx->r29, 0X60);
            goto L_0022FF38;
    }
    // 0x0022FF1C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0022FF20: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x0022FF24: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0022FF28: nop

    // 0x0022FF2C: bc1t        L_0022FF48
    if (c1cs) {
        // 0x0022FF30: nop
    
            goto L_0022FF48;
    }
    // 0x0022FF30: nop

L_0022FF34:
    // 0x0022FF34: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
L_0022FF38:
    // 0x0022FF38: jal         0x0020F85C
    // 0x0022FF3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_0020F85C(rdram, ctx);
        goto after_35;
    // 0x0022FF3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_35:
    // 0x0022FF40: j           L_0022FF60
    // 0x0022FF44: nop

        goto L_0022FF60;
    // 0x0022FF44: nop

L_0022FF48:
    // 0x0022FF48: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x0022FF4C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x0022FF50: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x0022FF54: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x0022FF58: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x0022FF5C: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
L_0022FF60:
    // 0x0022FF60: lw          $t1, 0x270($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X270);
    // 0x0022FF64: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x0022FF68: bne         $t1, $v0, L_0022FFA0
    if (ctx->r9 != ctx->r2) {
        // 0x0022FF6C: nop
    
            goto L_0022FFA0;
    }
    // 0x0022FF6C: nop

    // 0x0022FF70: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0022FF74: addiu       $t1, $t1, 0x1DC4
    ctx->r9 = ADD32(ctx->r9, 0X1DC4);
    // 0x0022FF78: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x0022FF7C: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x0022FF80: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x0022FF84: sw          $t2, 0x150($s6)
    MEM_W(0X150, ctx->r22) = ctx->r10;
    // 0x0022FF88: sw          $t3, 0x154($s6)
    MEM_W(0X154, ctx->r22) = ctx->r11;
    // 0x0022FF8C: sw          $t4, 0x158($s6)
    MEM_W(0X158, ctx->r22) = ctx->r12;
    // 0x0022FF90: jal         0x0020F040
    // 0x0022FF94: addiu       $a0, $s6, 0x150
    ctx->r4 = ADD32(ctx->r22, 0X150);
    func_0020F040(rdram, ctx);
        goto after_36;
    // 0x0022FF94: addiu       $a0, $s6, 0x150
    ctx->r4 = ADD32(ctx->r22, 0X150);
    after_36:
    // 0x0022FF98: j           L_0022FFB8
    // 0x0022FF9C: nop

        goto L_0022FFB8;
    // 0x0022FF9C: nop

L_0022FFA0:
    // 0x0022FFA0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x0022FFA4: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x0022FFA8: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x0022FFAC: sw          $t2, 0x150($s6)
    MEM_W(0X150, ctx->r22) = ctx->r10;
    // 0x0022FFB0: sw          $t3, 0x154($s6)
    MEM_W(0X154, ctx->r22) = ctx->r11;
    // 0x0022FFB4: sw          $t4, 0x158($s6)
    MEM_W(0X158, ctx->r22) = ctx->r12;
L_0022FFB8:
    // 0x0022FFB8: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0022FFBC: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x0022FFC0: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0022FFC4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FFC8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FFCC: jal         0x0026D128
    // 0x0022FFD0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_37;
    // 0x0022FFD0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_37:
    // 0x0022FFD4: swc1        $f0, 0x12C($s6)
    MEM_W(0X12C, ctx->r22) = ctx->f0.u32l;
    // 0x0022FFD8: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0022FFDC: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x0022FFE0: lhu         $v0, 0xA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA);
    // 0x0022FFE4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0022FFE8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0022FFEC: jal         0x0026D128
    // 0x0022FFF0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_38;
    // 0x0022FFF0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_38:
    // 0x0022FFF4: swc1        $f0, 0x130($s6)
    MEM_W(0X130, ctx->r22) = ctx->f0.u32l;
    // 0x0022FFF8: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0022FFFC: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x00230000: lhu         $v0, 0x12($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X12);
    // 0x00230004: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230008: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023000C: jal         0x0026D128
    // 0x00230010: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_39;
    // 0x00230010: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_39:
    // 0x00230014: swc1        $f0, 0x134($s6)
    MEM_W(0X134, ctx->r22) = ctx->f0.u32l;
    // 0x00230018: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0023001C: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x00230020: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x00230024: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230028: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023002C: jal         0x0026D128
    // 0x00230030: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_40;
    // 0x00230030: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_40:
    // 0x00230034: swc1        $f0, 0x138($s6)
    MEM_W(0X138, ctx->r22) = ctx->f0.u32l;
    // 0x00230038: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0023003C: lhu         $a0, 0xC($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC);
    // 0x00230040: lhu         $v0, 0xE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XE);
    // 0x00230044: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230048: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023004C: jal         0x0026D128
    // 0x00230050: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_41;
    // 0x00230050: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_41:
    // 0x00230054: swc1        $f0, 0x13C($s6)
    MEM_W(0X13C, ctx->r22) = ctx->f0.u32l;
    // 0x00230058: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x0023005C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x00230060: lhu         $v0, 0x16($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X16);
    // 0x00230064: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230068: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023006C: jal         0x0026D128
    // 0x00230070: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_42;
    // 0x00230070: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_42:
    // 0x00230074: swc1        $f0, 0x140($s6)
    MEM_W(0X140, ctx->r22) = ctx->f0.u32l;
    // 0x00230078: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x0023007C: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x00230080: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x00230084: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230088: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023008C: jal         0x0026D128
    // 0x00230090: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_43;
    // 0x00230090: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_43:
    // 0x00230094: swc1        $f0, 0x15C($s6)
    MEM_W(0X15C, ctx->r22) = ctx->f0.u32l;
    // 0x00230098: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x0023009C: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x002300A0: lhu         $v0, 0xA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA);
    // 0x002300A4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002300A8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x002300AC: jal         0x0026D128
    // 0x002300B0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_44;
    // 0x002300B0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_44:
    // 0x002300B4: swc1        $f0, 0x160($s6)
    MEM_W(0X160, ctx->r22) = ctx->f0.u32l;
    // 0x002300B8: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x002300BC: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x002300C0: lhu         $v0, 0x12($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X12);
    // 0x002300C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002300C8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x002300CC: jal         0x0026D128
    // 0x002300D0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_45;
    // 0x002300D0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_45:
    // 0x002300D4: swc1        $f0, 0x164($s6)
    MEM_W(0X164, ctx->r22) = ctx->f0.u32l;
    // 0x002300D8: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x002300DC: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x002300E0: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x002300E4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002300E8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x002300EC: jal         0x0026D128
    // 0x002300F0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_46;
    // 0x002300F0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_46:
    // 0x002300F4: swc1        $f0, 0x168($s6)
    MEM_W(0X168, ctx->r22) = ctx->f0.u32l;
    // 0x002300F8: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x002300FC: lhu         $a0, 0xC($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC);
    // 0x00230100: lhu         $v0, 0xE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XE);
    // 0x00230104: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230108: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023010C: jal         0x0026D128
    // 0x00230110: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_47;
    // 0x00230110: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_47:
    // 0x00230114: swc1        $f0, 0x16C($s6)
    MEM_W(0X16C, ctx->r22) = ctx->f0.u32l;
    // 0x00230118: lw          $v0, 0x20($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X20);
    // 0x0023011C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x00230120: lhu         $v0, 0x16($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X16);
    // 0x00230124: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230128: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x0023012C: jal         0x0026D128
    // 0x00230130: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_48;
    // 0x00230130: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_48:
    // 0x00230134: swc1        $f0, 0x170($s6)
    MEM_W(0X170, ctx->r22) = ctx->f0.u32l;
    // 0x00230138: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0023013C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x00230140: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00230144: beq         $v0, $zero, L_00230164
    if (ctx->r2 == 0) {
        // 0x00230148: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_00230164;
    }
    // 0x00230148: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0023014C: lb          $v0, 0x8($s7)
    ctx->r2 = MEM_B(ctx->r23, 0X8);
    // 0x00230150: bne         $v0, $t2, L_00230164
    if (ctx->r2 != ctx->r10) {
        // 0x00230154: nop
    
            goto L_00230164;
    }
    // 0x00230154: nop

    // 0x00230158: sb          $zero, 0x1B4($s6)
    MEM_B(0X1B4, ctx->r22) = 0;
    // 0x0023015C: j           L_00230178
    // 0x00230160: sw          $zero, 0x174($s6)
    MEM_W(0X174, ctx->r22) = 0;
        goto L_00230178;
    // 0x00230160: sw          $zero, 0x174($s6)
    MEM_W(0X174, ctx->r22) = 0;
L_00230164:
    // 0x00230164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00230168: lwc1        $f0, 0x63E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63E0);
    // 0x0023016C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00230170: sb          $v0, 0x1B4($s6)
    MEM_B(0X1B4, ctx->r22) = ctx->r2;
    // 0x00230174: swc1        $f0, 0x174($s6)
    MEM_W(0X174, ctx->r22) = ctx->f0.u32l;
L_00230178:
    // 0x00230178: lw          $t3, 0x320($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X320);
    // 0x0023017C: sw          $t3, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r11;
    // 0x00230180: lw          $t4, 0x314($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X314);
    // 0x00230184: lw          $t1, 0x318($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X318);
    // 0x00230188: lw          $t2, 0x31C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X31C);
    // 0x0023018C: sw          $t4, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r12;
    // 0x00230190: sw          $t1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r9;
    // 0x00230194: sw          $t2, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r10;
    // 0x00230198: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x0023019C: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x002301A0: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x002301A4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002301A8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x002301AC: jal         0x0026D128
    // 0x002301B0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_49;
    // 0x002301B0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_49:
    // 0x002301B4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x002301B8: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x002301BC: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x002301C0: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x002301C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002301C8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x002301CC: jal         0x0026D128
    // 0x002301D0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_50;
    // 0x002301D0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_50:
    // 0x002301D4: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x002301D8: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x002301DC: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x002301E0: lhu         $v0, 0xA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XA);
    // 0x002301E4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002301E8: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x002301EC: jal         0x0026D128
    // 0x002301F0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_51;
    // 0x002301F0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_51:
    // 0x002301F4: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x002301F8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x002301FC: c.eq.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl == ctx->f20.fl;
    // 0x00230200: nop

    // 0x00230204: bc1f        L_00230230
    if (!c1cs) {
        // 0x00230208: swc1        $f2, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
            goto L_00230230;
    }
    // 0x00230208: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x0023020C: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x00230210: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00230214: nop

    // 0x00230218: bc1fl       L_00230234
    if (!c1cs) {
        // 0x0023021C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_00230234;
    }
    goto skip_15;
    // 0x0023021C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    skip_15:
    // 0x00230220: c.eq.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl == ctx->f20.fl;
    // 0x00230224: nop

    // 0x00230228: bc1t        L_002302BC
    if (c1cs) {
        // 0x0023022C: nop
    
            goto L_002302BC;
    }
    // 0x0023022C: nop

L_00230230:
    // 0x00230230: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_00230234:
    // 0x00230234: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x00230238: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x0023023C: jal         0x0020F85C
    // 0x00230240: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_52;
    // 0x00230240: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_52:
    // 0x00230244: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00230248: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0023024C: bne         $v0, $zero, L_00230260
    if (ctx->r2 != 0) {
        // 0x00230250: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00230260;
    }
    // 0x00230250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230254: addiu       $a1, $sp, 0x314
    ctx->r5 = ADD32(ctx->r29, 0X314);
    // 0x00230258: jal         0x0020EEF8
    // 0x0023025C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_0020EEF8(rdram, ctx);
        goto after_53;
    // 0x0023025C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_53:
L_00230260:
    // 0x00230260: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x00230264: beq         $v0, $zero, L_002302A4
    if (ctx->r2 == 0) {
        // 0x00230268: addiu       $v0, $s6, 0x4
        ctx->r2 = ADD32(ctx->r22, 0X4);
            goto L_002302A4;
    }
    // 0x00230268: addiu       $v0, $s6, 0x4
    ctx->r2 = ADD32(ctx->r22, 0X4);
    // 0x0023026C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00230270: addiu       $v0, $s6, 0x10
    ctx->r2 = ADD32(ctx->r22, 0X10);
    // 0x00230274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00230278: lb          $v0, 0xB($s7)
    ctx->r2 = MEM_B(ctx->r23, 0XB);
    // 0x0023027C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00230280: lb          $v0, 0x9($s7)
    ctx->r2 = MEM_B(ctx->r23, 0X9);
    // 0x00230284: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00230288: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x0023028C: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x00230290: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x00230294: jal         0x002688C8
    // 0x00230298: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_002688C8(rdram, ctx);
        goto after_54;
    // 0x00230298: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_54:
    // 0x0023029C: j           L_002302BC
    // 0x002302A0: nop

        goto L_002302BC;
    // 0x002302A0: nop

L_002302A4:
    // 0x002302A4: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x002302A8: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x002302AC: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x002302B0: sw          $t4, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r12;
    // 0x002302B4: sw          $t1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r9;
    // 0x002302B8: sw          $t2, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r10;
L_002302BC:
    // 0x002302BC: lw          $t4, 0x4($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X4);
    // 0x002302C0: lw          $t1, 0x8($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X8);
    // 0x002302C4: lw          $t2, 0xC($s6)
    ctx->r10 = MEM_W(ctx->r22, 0XC);
    // 0x002302C8: sw          $t4, 0x144($s6)
    MEM_W(0X144, ctx->r22) = ctx->r12;
    // 0x002302CC: sw          $t1, 0x148($s6)
    MEM_W(0X148, ctx->r22) = ctx->r9;
    // 0x002302D0: sw          $t2, 0x14C($s6)
    MEM_W(0X14C, ctx->r22) = ctx->r10;
    // 0x002302D4: lw          $t4, 0x4($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X4);
    // 0x002302D8: lw          $t1, 0x8($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X8);
    // 0x002302DC: lw          $t2, 0xC($s6)
    ctx->r10 = MEM_W(ctx->r22, 0XC);
    // 0x002302E0: sw          $t4, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r12;
    // 0x002302E4: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x002302E8: sw          $t2, 0x3C($s6)
    MEM_W(0X3C, ctx->r22) = ctx->r10;
    // 0x002302EC: lw          $v0, 0x30($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X30);
    // 0x002302F0: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x002302F4: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x002302F8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002302FC: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x00230300: jal         0x0026D128
    // 0x00230304: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_55;
    // 0x00230304: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_55:
    // 0x00230308: addiu       $s0, $s6, 0x18
    ctx->r16 = ADD32(ctx->r22, 0X18);
    // 0x0023030C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230310: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00230314: jal         0x0020EF60
    // 0x00230318: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_0020EF60(rdram, ctx);
        goto after_56;
    // 0x00230318: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_56:
    // 0x0023031C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00230320: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00230324: beq         $v0, $zero, L_00230338
    if (ctx->r2 == 0) {
        // 0x00230328: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00230338;
    }
    // 0x00230328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023032C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00230330: jal         0x0020EEF8
    // 0x00230334: addiu       $a2, $sp, 0x2F8
    ctx->r6 = ADD32(ctx->r29, 0X2F8);
    func_0020EEF8(rdram, ctx);
        goto after_57;
    // 0x00230334: addiu       $a2, $sp, 0x2F8
    ctx->r6 = ADD32(ctx->r29, 0X2F8);
    after_57:
L_00230338:
    // 0x00230338: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x0023033C: lb          $v0, 0xC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC);
    // 0x00230340: beq         $v0, $zero, L_00230390
    if (ctx->r2 == 0) {
        // 0x00230344: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00230390;
    }
    // 0x00230344: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00230348: jal         0x002113A4
    // 0x0023034C: nop

    func_002113A4(rdram, ctx);
        goto after_58;
    // 0x0023034C: nop

    after_58:
    // 0x00230350: lw          $a0, 0x34($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X34);
    // 0x00230354: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x00230358: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0023035C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00230360: bne         $v1, $zero, L_0023036C
    if (ctx->r3 != 0) {
        // 0x00230364: nop
    
            goto L_0023036C;
    }
    // 0x00230364: nop

    // 0x00230368: break       7
    do_break(2294632);
L_0023036C:
    // 0x0023036C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00230370: bne         $v1, $at, L_00230384
    if (ctx->r3 != ctx->r1) {
        // 0x00230374: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00230384;
    }
    // 0x00230374: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00230378: bne         $v0, $at, L_00230384
    if (ctx->r2 != ctx->r1) {
        // 0x0023037C: nop
    
            goto L_00230384;
    }
    // 0x0023037C: nop

    // 0x00230380: break       6
    do_break(2294656);
L_00230384:
    // 0x00230384: mfhi        $v1
    ctx->r3 = hi;
    // 0x00230388: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x0023038C: subu        $s0, $v1, $v0
    ctx->r16 = SUB32(ctx->r3, ctx->r2);
L_00230390:
    // 0x00230390: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x00230394: lb          $v0, 0xD($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XD);
    // 0x00230398: beq         $v0, $zero, L_002303E0
    if (ctx->r2 == 0) {
        // 0x0023039C: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_002303E0;
    }
    // 0x0023039C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x002303A0: jal         0x002113A4
    // 0x002303A4: nop

    func_002113A4(rdram, ctx);
        goto after_59;
    // 0x002303A4: nop

    after_59:
    // 0x002303A8: lw          $v1, 0x34($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X34);
    // 0x002303AC: lb          $v1, 0xD($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XD);
    // 0x002303B0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x002303B4: bne         $v1, $zero, L_002303C0
    if (ctx->r3 != 0) {
        // 0x002303B8: nop
    
            goto L_002303C0;
    }
    // 0x002303B8: nop

    // 0x002303BC: break       7
    do_break(2294716);
L_002303C0:
    // 0x002303C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002303C4: bne         $v1, $at, L_002303D8
    if (ctx->r3 != ctx->r1) {
        // 0x002303C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002303D8;
    }
    // 0x002303C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002303CC: bne         $v0, $at, L_002303D8
    if (ctx->r2 != ctx->r1) {
        // 0x002303D0: nop
    
            goto L_002303D8;
    }
    // 0x002303D0: nop

    // 0x002303D4: break       6
    do_break(2294740);
L_002303D8:
    // 0x002303D8: mfhi        $v1
    ctx->r3 = hi;
    // 0x002303DC: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
L_002303E0:
    // 0x002303E0: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x002303E4: lb          $v0, 0xE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XE);
    // 0x002303E8: beq         $v0, $zero, L_00230434
    if (ctx->r2 == 0) {
        // 0x002303EC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00230434;
    }
    // 0x002303EC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002303F0: jal         0x002113A4
    // 0x002303F4: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    func_002113A4(rdram, ctx);
        goto after_60;
    // 0x002303F4: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    after_60:
    // 0x002303F8: lw          $v1, 0x34($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X34);
    // 0x002303FC: lb          $v1, 0xE($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XE);
    // 0x00230400: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00230404: bne         $v1, $zero, L_00230410
    if (ctx->r3 != 0) {
        // 0x00230408: nop
    
            goto L_00230410;
    }
    // 0x00230408: nop

    // 0x0023040C: break       7
    do_break(2294796);
L_00230410:
    // 0x00230410: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00230414: bne         $v1, $at, L_00230428
    if (ctx->r3 != ctx->r1) {
        // 0x00230418: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00230428;
    }
    // 0x00230418: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0023041C: bne         $v0, $at, L_00230428
    if (ctx->r2 != ctx->r1) {
        // 0x00230420: nop
    
            goto L_00230428;
    }
    // 0x00230420: nop

    // 0x00230424: break       6
    do_break(2294820);
L_00230428:
    // 0x00230428: mfhi        $v1
    ctx->r3 = hi;
    // 0x0023042C: j           L_00230438
    // 0x00230430: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
        goto L_00230438;
    // 0x00230430: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_00230434:
    // 0x00230434: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
L_00230438:
    // 0x00230438: sra         $s0, $s0, 24
    ctx->r16 = S32(SIGNED(ctx->r16) >> 24);
    // 0x0023043C: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x00230440: lw          $t1, 0x290($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X290);
    // 0x00230444: lw          $t2, 0x294($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X294);
    // 0x00230448: lw          $t3, 0x298($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X298);
    // 0x0023044C: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x00230450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230454: sb          $a1, 0x25B($sp)
    MEM_B(0X25B, ctx->r29) = ctx->r5;
    // 0x00230458: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x0023045C: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x00230460: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x00230464: sb          $a2, 0x25C($sp)
    MEM_B(0X25C, ctx->r29) = ctx->r6;
    // 0x00230468: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x0023046C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x00230470: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x00230474: sb          $v0, 0x25D($sp)
    MEM_B(0X25D, ctx->r29) = ctx->r2;
    // 0x00230478: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0023047C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x00230480: jal         0x00228C40
    // 0x00230484: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_00228C40(rdram, ctx);
        goto after_61;
    // 0x00230484: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_61:
    // 0x00230488: andi        $s5, $s5, 0xFF
    ctx->r21 = ctx->r21 & 0XFF;
    // 0x0023048C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00230490: addiu       $s4, $sp, 0x25B
    ctx->r20 = ADD32(ctx->r29, 0X25B);
    // 0x00230494: addiu       $s3, $sp, 0x25C
    ctx->r19 = ADD32(ctx->r29, 0X25C);
    // 0x00230498: lbu         $a1, 0x258($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X258);
    // 0x0023049C: lbu         $a2, 0x259($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X259);
    // 0x002304A0: lbu         $a3, 0x25A($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X25A);
    // 0x002304A4: addiu       $s2, $sp, 0x25D
    ctx->r18 = ADD32(ctx->r29, 0X25D);
    // 0x002304A8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x002304AC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x002304B0: jal         0x00228FF8
    // 0x002304B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_00228FF8(rdram, ctx);
        goto after_62;
    // 0x002304B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_62:
    // 0x002304B8: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x002304BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002304C0: lbu         $a1, 0x25B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X25B);
    // 0x002304C4: lbu         $a2, 0x25C($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X25C);
    // 0x002304C8: lbu         $a3, 0x25D($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X25D);
    // 0x002304CC: addiu       $v0, $sp, 0x25E
    ctx->r2 = ADD32(ctx->r29, 0X25E);
    // 0x002304D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002304D4: addiu       $v0, $sp, 0x25F
    ctx->r2 = ADD32(ctx->r29, 0X25F);
    // 0x002304D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002304DC: addiu       $v0, $sp, 0x260
    ctx->r2 = ADD32(ctx->r29, 0X260);
    // 0x002304E0: jal         0x002291D4
    // 0x002304E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_002291D4(rdram, ctx);
        goto after_63;
    // 0x002304E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_63:
    // 0x002304E8: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x002304EC: lw          $v1, 0x34($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X34);
    // 0x002304F0: lw          $t4, 0x290($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X290);
    // 0x002304F4: lw          $t1, 0x294($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X294);
    // 0x002304F8: lw          $t2, 0x298($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X298);
    // 0x002304FC: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x00230500: sb          $v0, 0x25B($sp)
    MEM_B(0X25B, ctx->r29) = ctx->r2;
    // 0x00230504: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x00230508: lbu         $a1, 0x25B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X25B);
    // 0x0023050C: sb          $v0, 0x25C($sp)
    MEM_B(0X25C, ctx->r29) = ctx->r2;
    // 0x00230510: lw          $v0, 0x34($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X34);
    // 0x00230514: lbu         $a2, 0x25C($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X25C);
    // 0x00230518: lbu         $v0, 0x5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5);
    // 0x0023051C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230520: sb          $v0, 0x25D($sp)
    MEM_B(0X25D, ctx->r29) = ctx->r2;
    // 0x00230524: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x00230528: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x0023052C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00230530: jal         0x00228C40
    // 0x00230534: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_00228C40(rdram, ctx);
        goto after_64;
    // 0x00230534: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_64:
    // 0x00230538: lbu         $a1, 0x258($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X258);
    // 0x0023053C: lbu         $a2, 0x259($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X259);
    // 0x00230540: lbu         $a3, 0x25A($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X25A);
    // 0x00230544: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00230548: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0023054C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00230550: jal         0x00228FF8
    // 0x00230554: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_00228FF8(rdram, ctx);
        goto after_65;
    // 0x00230554: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_65:
    // 0x00230558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023055C: lbu         $a1, 0x25B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X25B);
    // 0x00230560: lbu         $a2, 0x25C($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X25C);
    // 0x00230564: lbu         $a3, 0x25D($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X25D);
    // 0x00230568: addiu       $v0, $sp, 0x261
    ctx->r2 = ADD32(ctx->r29, 0X261);
    // 0x0023056C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00230570: addiu       $v0, $sp, 0x262
    ctx->r2 = ADD32(ctx->r29, 0X262);
    // 0x00230574: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00230578: addiu       $v0, $sp, 0x263
    ctx->r2 = ADD32(ctx->r29, 0X263);
    // 0x0023057C: jal         0x002291D4
    // 0x00230580: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_002291D4(rdram, ctx);
        goto after_66;
    // 0x00230580: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_66:
    // 0x00230584: lbu         $v0, 0x25E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X25E);
    // 0x00230588: sb          $v0, 0x1AE($s6)
    MEM_B(0X1AE, ctx->r22) = ctx->r2;
    // 0x0023058C: lbu         $v0, 0x25F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X25F);
    // 0x00230590: sb          $v0, 0x1AF($s6)
    MEM_B(0X1AF, ctx->r22) = ctx->r2;
    // 0x00230594: lbu         $v0, 0x260($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X260);
    // 0x00230598: sb          $v0, 0x1B0($s6)
    MEM_B(0X1B0, ctx->r22) = ctx->r2;
    // 0x0023059C: lbu         $v0, 0x261($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X261);
    // 0x002305A0: sb          $v0, 0x1B1($s6)
    MEM_B(0X1B1, ctx->r22) = ctx->r2;
    // 0x002305A4: lbu         $v0, 0x262($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X262);
    // 0x002305A8: sb          $v0, 0x1B2($s6)
    MEM_B(0X1B2, ctx->r22) = ctx->r2;
    // 0x002305AC: lbu         $v0, 0x263($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X263);
    // 0x002305B0: sb          $v0, 0x1B3($s6)
    MEM_B(0X1B3, ctx->r22) = ctx->r2;
    // 0x002305B4: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x002305B8: addiu       $t2, $t2, 0x1BA0
    ctx->r10 = ADD32(ctx->r10, 0X1BA0);
    // 0x002305BC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x002305C0: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x002305C4: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x002305C8: sw          $t3, 0x190($s6)
    MEM_W(0X190, ctx->r22) = ctx->r11;
    // 0x002305CC: sw          $t4, 0x194($s6)
    MEM_W(0X194, ctx->r22) = ctx->r12;
    // 0x002305D0: sw          $t1, 0x198($s6)
    MEM_W(0X198, ctx->r22) = ctx->r9;
    // 0x002305D4: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x002305D8: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x002305DC: lw          $t1, 0x14($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X14);
    // 0x002305E0: sw          $t3, 0x19C($s6)
    MEM_W(0X19C, ctx->r22) = ctx->r11;
    // 0x002305E4: sw          $t4, 0x1A0($s6)
    MEM_W(0X1A0, ctx->r22) = ctx->r12;
    // 0x002305E8: sw          $t1, 0x1A4($s6)
    MEM_W(0X1A4, ctx->r22) = ctx->r9;
    // 0x002305EC: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x002305F0: sw          $t3, 0x1A8($s6)
    MEM_W(0X1A8, ctx->r22) = ctx->r11;
    // 0x002305F4: lbu         $v0, 0xA($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0XA);
    // 0x002305F8: addiu       $s0, $s6, 0x190
    ctx->r16 = ADD32(ctx->r22, 0X190);
    // 0x002305FC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x00230600: lbu         $v0, 0x9($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X9);
    // 0x00230604: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x00230608: lbu         $v0, 0xB($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0XB);
    // 0x0023060C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x00230610: lw          $v0, 0x30($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X30);
    // 0x00230614: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x00230618: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0023061C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00230620: and         $a0, $a0, $fp
    ctx->r4 = ctx->r4 & ctx->r30;
    // 0x00230624: jal         0x0026D128
    // 0x00230628: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    func_0026D128(rdram, ctx);
        goto after_67;
    // 0x00230628: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    after_67:
    // 0x0023062C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00230630: lw          $v0, 0x30($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X30);
    // 0x00230634: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x00230638: jal         0x0026D210
    // 0x0023063C: nop

    func_0026D210(rdram, ctx);
        goto after_68;
    // 0x0023063C: nop

    after_68:
    // 0x00230640: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x00230644: lw          $v0, 0x30($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X30);
    // 0x00230648: lhu         $a0, 0xA($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA);
    // 0x0023064C: jal         0x0026D210
    // 0x00230650: nop

    func_0026D210(rdram, ctx);
        goto after_69;
    // 0x00230650: nop

    after_69:
    // 0x00230654: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x00230658: lw          $v0, 0x30($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X30);
    // 0x0023065C: lhu         $a0, 0xC($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC);
    // 0x00230660: jal         0x0026D210
    // 0x00230664: nop

    func_0026D210(rdram, ctx);
        goto after_70;
    // 0x00230664: nop

    after_70:
    // 0x00230668: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x0023066C: lw          $v0, 0x30($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X30);
    // 0x00230670: lhu         $a0, 0xE($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XE);
    // 0x00230674: jal         0x0026D210
    // 0x00230678: nop

    func_0026D210(rdram, ctx);
        goto after_71;
    // 0x00230678: nop

    after_71:
    // 0x0023067C: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x00230680: lw          $t3, 0x2F4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2F4);
    // 0x00230684: addiu       $v0, $zero, 0x101
    ctx->r2 = ADD32(0, 0X101);
    // 0x00230688: beq         $t3, $v0, L_00230698
    if (ctx->r11 == ctx->r2) {
        // 0x0023068C: addiu       $v0, $zero, 0x128
        ctx->r2 = ADD32(0, 0X128);
            goto L_00230698;
    }
    // 0x0023068C: addiu       $v0, $zero, 0x128
    ctx->r2 = ADD32(0, 0X128);
    // 0x00230690: bne         $t3, $v0, L_002306A4
    if (ctx->r11 != ctx->r2) {
        // 0x00230694: nop
    
            goto L_002306A4;
    }
    // 0x00230694: nop

L_00230698:
    // 0x00230698: lw          $v0, 0x190($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X190);
    // 0x0023069C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x002306A0: sw          $v0, 0x190($s6)
    MEM_W(0X190, ctx->r22) = ctx->r2;
L_002306A4:
    // 0x002306A4: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x002306A8: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x002306AC: beq         $v0, $zero, L_002306C0
    if (ctx->r2 == 0) {
        // 0x002306B0: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_002306C0;
    }
    // 0x002306B0: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x002306B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002306B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002306BC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_002306C0:
    // 0x002306C0: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x002306C4: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x002306C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002306CC: beq         $v0, $zero, L_002306E0
    if (ctx->r2 == 0) {
        // 0x002306D0: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_002306E0;
    }
    // 0x002306D0: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x002306D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002306D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002306DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_002306E0:
    // 0x002306E0: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x002306E4: lb          $v1, 0x5($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X5);
    // 0x002306E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002306EC: beq         $v1, $v0, L_00230794
    if (ctx->r3 == ctx->r2) {
        // 0x002306F0: nop
    
            goto L_00230794;
    }
    // 0x002306F0: nop

    // 0x002306F4: lw          $t4, 0x2E0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2E0);
    // 0x002306F8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x002306FC: addu        $at, $t4, $at
    ctx->r1 = ADD32(ctx->r12, ctx->r1);
    // 0x00230700: lw          $a1, -0x13EC($at)
    ctx->r5 = MEM_W(ctx->r1, -0X13EC);
    // 0x00230704: beq         $a1, $zero, L_00230748
    if (ctx->r5 == 0) {
        // 0x00230708: nop
    
            goto L_00230748;
    }
    // 0x00230708: nop

    // 0x0023070C: lw          $v1, 0xF8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0XF8);
L_00230710:
    // 0x00230710: lw          $v0, 0xF8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XF8);
    // 0x00230714: beq         $v0, $v1, L_00230728
    if (ctx->r2 == ctx->r3) {
        // 0x00230718: nop
    
            goto L_00230728;
    }
    // 0x00230718: nop

    // 0x0023071C: lw          $a1, 0x1D0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1D0);
    // 0x00230720: bne         $a1, $zero, L_00230710
    if (ctx->r5 != 0) {
        // 0x00230724: nop
    
            goto L_00230710;
    }
    // 0x00230724: nop

L_00230728:
    // 0x00230728: beq         $a1, $zero, L_00230748
    if (ctx->r5 == 0) {
        // 0x0023072C: ori         $a0, $zero, 0xEC14
        ctx->r4 = 0 | 0XEC14;
            goto L_00230748;
    }
    // 0x0023072C: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x00230730: lw          $t1, 0x2E0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2E0);
    // 0x00230734: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x00230738: jal         0x002005D0
    // 0x0023073C: addu        $a0, $t1, $a0
    ctx->r4 = ADD32(ctx->r9, ctx->r4);
    func_002005D0(rdram, ctx);
        goto after_72;
    // 0x0023073C: addu        $a0, $t1, $a0
    ctx->r4 = ADD32(ctx->r9, ctx->r4);
    after_72:
    // 0x00230740: j           L_00230784
    // 0x00230744: nop

        goto L_00230784;
    // 0x00230744: nop

L_00230748:
    // 0x00230748: lw          $v0, 0xF8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XF8);
    // 0x0023074C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00230750: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x00230754: beq         $v0, $zero, L_00230774
    if (ctx->r2 == 0) {
        // 0x00230758: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_00230774;
    }
    // 0x00230758: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0023075C: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x00230760: lw          $t2, 0x2E0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2E0);
    // 0x00230764: jal         0x00200518
    // 0x00230768: addu        $a0, $t2, $a0
    ctx->r4 = ADD32(ctx->r10, ctx->r4);
    func_00200518(rdram, ctx);
        goto after_73;
    // 0x00230768: addu        $a0, $t2, $a0
    ctx->r4 = ADD32(ctx->r10, ctx->r4);
    after_73:
    // 0x0023076C: j           L_00230784
    // 0x00230770: nop

        goto L_00230784;
    // 0x00230770: nop

L_00230774:
    // 0x00230774: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x00230778: lw          $t3, 0x2E0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2E0);
    // 0x0023077C: jal         0x00200574
    // 0x00230780: addu        $a0, $t3, $a0
    ctx->r4 = ADD32(ctx->r11, ctx->r4);
    func_00200574(rdram, ctx);
        goto after_74;
    // 0x00230780: addu        $a0, $t3, $a0
    ctx->r4 = ADD32(ctx->r11, ctx->r4);
    after_74:
L_00230784:
    // 0x00230784: lw          $v0, 0x40($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X40);
    // 0x00230788: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0023078C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00230790: sw          $v0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r2;
L_00230794:
    // 0x00230794: lw          $v0, 0x18($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X18);
    // 0x00230798: lhu         $v0, 0x94($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X94);
    // 0x0023079C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002307A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002307A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002307A8: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x002307AC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002307B0: bne         $v0, $zero, L_002307C4
    if (ctx->r2 != 0) {
        // 0x002307B4: addiu       $v0, $zero, 0x68
        ctx->r2 = ADD32(0, 0X68);
            goto L_002307C4;
    }
    // 0x002307B4: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x002307B8: lw          $t4, 0x2F4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2F4);
    // 0x002307BC: bne         $t4, $v0, L_002307D8
    if (ctx->r12 != ctx->r2) {
        // 0x002307C0: addiu       $s1, $s6, 0x18
        ctx->r17 = ADD32(ctx->r22, 0X18);
            goto L_002307D8;
    }
    // 0x002307C0: addiu       $s1, $s6, 0x18
    ctx->r17 = ADD32(ctx->r22, 0X18);
L_002307C4:
    // 0x002307C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002307C8: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x002307CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002307D0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002307D4: addiu       $s1, $s6, 0x18
    ctx->r17 = ADD32(ctx->r22, 0X18);
L_002307D8:
    // 0x002307D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002307DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002307E0: lw          $a2, -0x31F0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X31F0);
    // 0x002307E4: jal         0x0020EF60
    // 0x002307E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_75;
    // 0x002307E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_75:
    // 0x002307EC: lw          $t1, 0x2F4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2F4);
    // 0x002307F0: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x002307F4: beq         $t1, $v0, L_00230804
    if (ctx->r9 == ctx->r2) {
        // 0x002307F8: addiu       $v0, $zero, 0x4F
        ctx->r2 = ADD32(0, 0X4F);
            goto L_00230804;
    }
    // 0x002307F8: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    // 0x002307FC: bne         $t1, $v0, L_00230958
    if (ctx->r9 != ctx->r2) {
        // 0x00230800: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00230958;
    }
    // 0x00230800: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00230804:
    // 0x00230804: lw          $t2, 0x2E4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2E4);
    // 0x00230808: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x0023080C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00230810: bne         $v1, $v0, L_00230958
    if (ctx->r3 != ctx->r2) {
        // 0x00230814: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00230958;
    }
    // 0x00230814: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00230818: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023081C: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x00230820: beq         $v0, $zero, L_00230958
    if (ctx->r2 == 0) {
        // 0x00230824: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00230958;
    }
    // 0x00230824: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00230828: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023082C: lw          $v1, 0x1CF4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CF4);
    // 0x00230830: beq         $v1, $v0, L_00230954
    if (ctx->r3 == ctx->r2) {
        // 0x00230834: addiu       $a0, $sp, 0x1C0
        ctx->r4 = ADD32(ctx->r29, 0X1C0);
            goto L_00230954;
    }
    // 0x00230834: addiu       $a0, $sp, 0x1C0
    ctx->r4 = ADD32(ctx->r29, 0X1C0);
    // 0x00230838: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x0023083C: sb          $v0, 0x1AC($s6)
    MEM_B(0X1AC, ctx->r22) = ctx->r2;
    // 0x00230840: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00230844: lw          $s0, 0x1CE0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1CE0);
    // 0x00230848: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0023084C: lw          $a1, 0x1CF4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1CF4);
    // 0x00230850: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00230854: lbu         $s2, 0x1D5E($s2)
    ctx->r18 = MEM_BU(ctx->r18, 0X1D5E);
    // 0x00230858: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x0023085C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00230860: jal         0x0020D908
    // 0x00230864: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_76;
    // 0x00230864: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_76:
    // 0x00230868: addiu       $a0, $sp, 0x200
    ctx->r4 = ADD32(ctx->r29, 0X200);
    // 0x0023086C: jal         0x0020C208
    // 0x00230870: addiu       $a1, $sp, 0x1C0
    ctx->r5 = ADD32(ctx->r29, 0X1C0);
    func_0020C208(rdram, ctx);
        goto after_77;
    // 0x00230870: addiu       $a1, $sp, 0x1C0
    ctx->r5 = ADD32(ctx->r29, 0X1C0);
    after_77:
    // 0x00230874: addiu       $a0, $sp, 0x200
    ctx->r4 = ADD32(ctx->r29, 0X200);
    // 0x00230878: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0023087C: addiu       $t3, $t3, 0x1CE0
    ctx->r11 = ADD32(ctx->r11, 0X1CE0);
    // 0x00230880: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    // 0x00230884: jal         0x0020F85C
    // 0x00230888: addiu       $a2, $s6, 0x34
    ctx->r6 = ADD32(ctx->r22, 0X34);
    func_0020F85C(rdram, ctx);
        goto after_78;
    // 0x00230888: addiu       $a2, $s6, 0x34
    ctx->r6 = ADD32(ctx->r22, 0X34);
    after_78:
    // 0x0023088C: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00230890: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00230894: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x00230898: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0023089C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x002308A0: sw          $t4, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->r12;
    // 0x002308A4: sw          $t1, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r9;
    // 0x002308A8: sw          $t2, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->r10;
    // 0x002308AC: jal         0x0020F040
    // 0x002308B0: addiu       $a0, $sp, 0x240
    ctx->r4 = ADD32(ctx->r29, 0X240);
    func_0020F040(rdram, ctx);
        goto after_79;
    // 0x002308B0: addiu       $a0, $sp, 0x240
    ctx->r4 = ADD32(ctx->r29, 0X240);
    after_79:
    // 0x002308B4: addiu       $a0, $sp, 0x200
    ctx->r4 = ADD32(ctx->r29, 0X200);
    // 0x002308B8: addiu       $a1, $sp, 0x240
    ctx->r5 = ADD32(ctx->r29, 0X240);
    // 0x002308BC: jal         0x0020FAFC
    // 0x002308C0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020FAFC(rdram, ctx);
        goto after_80;
    // 0x002308C0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_80:
    // 0x002308C4: lw          $v0, 0x40($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X40);
    // 0x002308C8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002308CC: sw          $s0, 0x114($s6)
    MEM_W(0X114, ctx->r22) = ctx->r16;
    // 0x002308D0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002308D4: sw          $v0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r2;
    // 0x002308D8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002308DC: lbu         $v0, 0x1CF7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1CF7);
    // 0x002308E0: sb          $v0, 0x1AD($s6)
    MEM_B(0X1AD, ctx->r22) = ctx->r2;
    // 0x002308E4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002308E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002308EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x002308F0: bne         $v0, $t4, L_00230928
    if (ctx->r2 != ctx->r12) {
        // 0x002308F4: nop
    
            goto L_00230928;
    }
    // 0x002308F4: nop

    // 0x002308F8: lw          $a2, 0x10C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X10C);
    // 0x002308FC: beq         $a2, $zero, L_00230910
    if (ctx->r6 == 0) {
        // 0x00230900: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00230910;
    }
    // 0x00230900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230904: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00230908: j           L_00230920
    // 0x0023090C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
        goto L_00230920;
    // 0x0023090C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_00230910:
    // 0x00230910: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00230914: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x00230918: addiu       $t1, $t1, 0x1CE0
    ctx->r9 = ADD32(ctx->r9, 0X1CE0);
    // 0x0023091C: addiu       $a2, $t1, 0x8
    ctx->r6 = ADD32(ctx->r9, 0X8);
L_00230920:
    // 0x00230920: jal         0x0025E52C
    // 0x00230924: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_81;
    // 0x00230924: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_81:
L_00230928:
    // 0x00230928: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x0023092C: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x00230930: bne         $v1, $v0, L_00230958
    if (ctx->r3 != ctx->r2) {
        // 0x00230934: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00230958;
    }
    // 0x00230934: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00230938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023093C: bne         $s2, $v0, L_0023095C
    if (ctx->r18 != ctx->r2) {
        // 0x00230940: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0023095C;
    }
    // 0x00230940: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00230944: lw          $v0, 0x40($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X40);
    // 0x00230948: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0023094C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00230950: sw          $v0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r2;
L_00230954:
    // 0x00230954: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00230958:
    // 0x00230958: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0023095C:
    // 0x0023095C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00230960: lwc1        $f0, -0x31EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X31EC);
    // 0x00230964: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00230968: jal         0x0022D09C
    // 0x0023096C: swc1        $f0, 0x1BC($s6)
    MEM_W(0X1BC, ctx->r22) = ctx->f0.u32l;
    func_0022D09C(rdram, ctx);
        goto after_82;
    // 0x0023096C: swc1        $f0, 0x1BC($s6)
    MEM_W(0X1BC, ctx->r22) = ctx->f0.u32l;
    after_82:
    // 0x00230970: lb          $a2, 0x6($s7)
    ctx->r6 = MEM_B(ctx->r23, 0X6);
    // 0x00230974: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00230978: beq         $a2, $s0, L_00230990
    if (ctx->r6 == ctx->r16) {
        // 0x0023097C: nop
    
            goto L_00230990;
    }
    // 0x0023097C: nop

    // 0x00230980: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00230984: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00230988: jal         0x002350EC
    // 0x0023098C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_002350EC(rdram, ctx);
        goto after_83;
    // 0x0023098C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_83:
L_00230990:
    // 0x00230990: lb          $a1, 0x7($s7)
    ctx->r5 = MEM_B(ctx->r23, 0X7);
    // 0x00230994: beql        $a1, $s0, L_002309B0
    if (ctx->r5 == ctx->r16) {
        // 0x00230998: sw          $zero, 0x118($s6)
        MEM_W(0X118, ctx->r22) = 0;
            goto L_002309B0;
    }
    goto skip_16;
    // 0x00230998: sw          $zero, 0x118($s6)
    MEM_W(0X118, ctx->r22) = 0;
    skip_16:
    // 0x0023099C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x002309A0: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x002309A4: jal         0x00228AB0
    // 0x002309A8: nop

    func_00228AB0(rdram, ctx);
        goto after_84;
    // 0x002309A8: nop

    after_84:
    // 0x002309AC: sw          $v0, 0x118($s6)
    MEM_W(0X118, ctx->r22) = ctx->r2;
L_002309B0:
    // 0x002309B0: lw          $v0, 0x40($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X40);
    // 0x002309B4: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x002309B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002309BC: bne         $v0, $zero, L_00230A2C
    if (ctx->r2 != 0) {
        // 0x002309C0: nop
    
            goto L_00230A2C;
    }
    // 0x002309C0: nop

    // 0x002309C4: lh          $t0, 0xC($s7)
    ctx->r8 = MEM_H(ctx->r23, 0XC);
    // 0x002309C8: beq         $t0, $zero, L_00230A2C
    if (ctx->r8 == 0) {
        // 0x002309CC: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_00230A2C;
    }
    // 0x002309CC: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x002309D0: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x002309D4: beq         $v1, $v0, L_002309F8
    if (ctx->r3 == ctx->r2) {
        // 0x002309D8: slt         $v0, $v1, $v0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_002309F8;
    }
    // 0x002309D8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002309DC: bne         $v0, $zero, L_00230A10
    if (ctx->r2 != 0) {
        // 0x002309E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00230A10;
    }
    // 0x002309E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002309E4: slti        $v0, $v1, 0x61
    ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    // 0x002309E8: beq         $v0, $zero, L_00230A0C
    if (ctx->r2 == 0) {
        // 0x002309EC: slti        $v0, $v1, 0x5F
        ctx->r2 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
            goto L_00230A0C;
    }
    // 0x002309EC: slti        $v0, $v1, 0x5F
    ctx->r2 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
    // 0x002309F0: bne         $v0, $zero, L_00230A10
    if (ctx->r2 != 0) {
        // 0x002309F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00230A10;
    }
    // 0x002309F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002309F8:
    // 0x002309F8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x002309FC: jal         0x00232AC4
    // 0x00230A00: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    func_00232AC4(rdram, ctx);
        goto after_85;
    // 0x00230A00: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    after_85:
    // 0x00230A04: j           L_00230A2C
    // 0x00230A08: nop

        goto L_00230A2C;
    // 0x00230A08: nop

L_00230A0C:
    // 0x00230A0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00230A10:
    // 0x00230A10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00230A14: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00230A18: lw          $a1, 0x4($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X4);
    // 0x00230A1C: lw          $a2, 0x8($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X8);
    // 0x00230A20: lw          $a3, 0xC($s6)
    ctx->r7 = MEM_W(ctx->r22, 0XC);
    // 0x00230A24: jal         0x00275544
    // 0x00230A28: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_00275544(rdram, ctx);
        goto after_86;
    // 0x00230A28: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_86:
L_00230A2C:
    // 0x00230A2C: lw          $t2, 0x268($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X268);
    // 0x00230A30: lw          $t3, 0x26C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X26C);
    // 0x00230A34: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x00230A38: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x00230A3C: bne         $v0, $zero, L_0022FA80
    if (ctx->r2 != 0) {
        // 0x00230A40: sw          $t2, 0x268($sp)
        MEM_W(0X268, ctx->r29) = ctx->r10;
            goto L_0022FA80;
    }
    // 0x00230A40: sw          $t2, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r10;
L_00230A44:
    // 0x00230A44: addiu       $s7, $s7, 0x3C
    ctx->r23 = ADD32(ctx->r23, 0X3C);
L_00230A48:
    // 0x00230A48: lw          $t4, 0x274($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X274);
    // 0x00230A4C: lw          $v0, 0x254($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X254);
    // 0x00230A50: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x00230A54: slt         $v0, $v0, $t4
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x00230A58: beq         $v0, $zero, L_0022F4E8
    if (ctx->r2 == 0) {
        // 0x00230A5C: sw          $t4, 0x274($sp)
        MEM_W(0X274, ctx->r29) = ctx->r12;
            goto L_0022F4E8;
    }
    // 0x00230A5C: sw          $t4, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r12;
L_00230A60:
    // 0x00230A60: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00230A64: addiu       $v0, $v0, 0x1CE0
    ctx->r2 = ADD32(ctx->r2, 0X1CE0);
    // 0x00230A68: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00230A6C: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x00230A70: lw          $v0, 0x264($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X264);
L_00230A74:
    // 0x00230A74: lw          $ra, 0x2C4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C4);
    // 0x00230A78: lw          $fp, 0x2C0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X2C0);
    // 0x00230A7C: lw          $s7, 0x2BC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2BC);
    // 0x00230A80: lw          $s6, 0x2B8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2B8);
    // 0x00230A84: lw          $s5, 0x2B4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2B4);
    // 0x00230A88: lw          $s4, 0x2B0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2B0);
    // 0x00230A8C: lw          $s3, 0x2AC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2AC);
    // 0x00230A90: lw          $s2, 0x2A8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2A8);
    // 0x00230A94: lw          $s1, 0x2A4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2A4);
    // 0x00230A98: lw          $s0, 0x2A0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2A0);
    // 0x00230A9C: ldc1        $f22, 0x2D8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X2D8);
    // 0x00230AA0: ldc1        $f21, 0x2D0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X2D0);
    // 0x00230AA4: ldc1        $f20, 0x2C8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X2C8);
    // 0x00230AA8: jr          $ra
    // 0x00230AAC: addiu       $sp, $sp, 0x2E0
    ctx->r29 = ADD32(ctx->r29, 0X2E0);
    return;
    // 0x00230AAC: addiu       $sp, $sp, 0x2E0
    ctx->r29 = ADD32(ctx->r29, 0X2E0);
;}
RECOMP_FUNC void func_0026809C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026809C: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x002680A0: jr          $ra
    // 0x002680A4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    return;
    // 0x002680A4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
;}
RECOMP_FUNC void func_0045F4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F4B4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0045F4B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F4BC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045F4C0: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F4C4: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x0045F4C8: jr          $ra
    // 0x0045F4CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x0045F4CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
