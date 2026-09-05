#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0040D7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040D7AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040D7B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040D7B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040D7B8: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x0040D7BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040D7C0: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x0040D7C4: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D7C8: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x0040D7CC: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x0040D7D0: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D7D4: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x0040D7D8: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x0040D7DC: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0040D7E0: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x0040D7E4: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0040D7E8: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D7EC: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D7F0: bne         $v1, $v0, L_0040D808
    if (ctx->r3 != ctx->r2) {
        // 0x0040D7F4: nop
    
            goto L_0040D808;
    }
    // 0x0040D7F4: nop

    // 0x0040D7F8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D7FC: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x0040D800: j           L_0040D814
    // 0x0040D804: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
        goto L_0040D814;
    // 0x0040D804: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040D808:
    // 0x0040D808: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D80C: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x0040D810: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040D814:
    // 0x0040D814: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D818: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D81C: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040D820: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040D824: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040D828: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D82C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D830: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040D834: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040D838: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040D83C: bne         $v1, $v0, L_0040D850
    if (ctx->r3 != ctx->r2) {
        // 0x0040D840: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040D850;
    }
    // 0x0040D840: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040D844: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040D848: j           L_0040D85C
    // 0x0040D84C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040D85C;
    // 0x0040D84C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040D850:
    // 0x0040D850: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040D854: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040D858: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040D85C:
    // 0x0040D85C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D860: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040D864: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040D868: beq         $v0, $zero, L_0040D884
    if (ctx->r2 == 0) {
        // 0x0040D86C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040D884;
    }
    // 0x0040D86C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040D870: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040D874: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040D878: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040D87C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040D880: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040D884:
    // 0x0040D884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040D888: jal         0x00243414
    // 0x0040D88C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040D88C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040D890: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040D894: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040D898: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D89C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040D8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040D8A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D8A8: jr          $ra
    // 0x0040D8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040D8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00446D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446D3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446D40: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446D44: beq         $v0, $zero, L_00446D54
    if (ctx->r2 == 0) {
        // 0x00446D48: nop
    
            goto L_00446D54;
    }
    // 0x00446D48: nop

    // 0x00446D4C: jal         0x00243414
    // 0x00446D50: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446D50: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00446D54:
    // 0x00446D54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446D58: jr          $ra
    // 0x00446D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444524: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444528: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0044452C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444530: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444534: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444538: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0044453C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00444540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444544: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00444548: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0044454C: sw          $zero, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = 0;
    // 0x00444550: jal         0x00246108
    // 0x00444554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044455C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444560: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444564: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444568: jal         0x00245BAC
    // 0x0044456C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0044456C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444570: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444574: beq         $v0, $zero, L_00444588
    if (ctx->r2 == 0) {
        // 0x00444578: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444588;
    }
    // 0x00444578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0044457C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444580: jal         0x00243414
    // 0x00444584: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444584: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_00444588:
    // 0x00444588: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0044458C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444590: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444594: jr          $ra
    // 0x00444598: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444598: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00428004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428004: beq         $v0, $zero, L_00428014
    if (ctx->r2 == 0) {
        // 0x00428008: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_00428014;
    }
    // 0x00428008: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0042800C: bne         $v0, $zero, L_0042803C
    if (ctx->r2 != 0) {
        // 0x00428010: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0042803C;
    }
    // 0x00428010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00428014:
    // 0x00428014: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x00428018: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x0042801C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00428020: bne         $v0, $v1, L_0042803C
    if (ctx->r2 != ctx->r3) {
        // 0x00428024: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042803C;
    }
    // 0x00428024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00428028: lbu         $v1, 0x12($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X12);
    // 0x0042802C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00428030: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00428034: beql        $v1, $zero, L_0042803C
    if (ctx->r3 == 0) {
        // 0x00428038: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0042803C;
    }
    goto skip_0;
    // 0x00428038: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
L_0042803C:
    // 0x0042803C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00428040: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00428044: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00428048: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0042804C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00428050: jr          $ra
    // 0x00428054: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00428054: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041812C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041812C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00418130: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00418134: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00418138: addiu       $a2, $a2, -0x7990
    ctx->r6 = ADD32(ctx->r6, -0X7990);
    // 0x0041813C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00418140: jal         0x00416894
    // 0x00418144: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00418144: nop

    after_0:
    // 0x00418148: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041814C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418150: jr          $ra
    // 0x00418154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00418154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027A4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027A4DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0027A4E0: addu        $t4, $a0, $zero
    ctx->r12 = ADD32(ctx->r4, 0);
    // 0x0027A4E4: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x0027A4E8: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x0027A4EC: mtc1        $a2, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r6;
    // 0x0027A4F0: lwc1        $f3, 0x1C($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0027A4F4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0027A4F8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x0027A4FC: lwc1        $f5, 0x20($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0027A500: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x0027A504: c.eq.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl == ctx->f1.fl;
    // 0x0027A508: nop

    // 0x0027A50C: bc1t        L_0027A528
    if (c1cs) {
        // 0x0027A510: sw          $s0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r16;
            goto L_0027A528;
    }
    // 0x0027A510: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x0027A514: mtc1        $t3, $f0
    ctx->f0.u32l = ctx->r11;
    // 0x0027A518: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027A51C: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0027A520: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027A524: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_0027A528:
    // 0x0027A528: c.eq.s      $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f5.fl == ctx->f1.fl;
    // 0x0027A52C: nop

    // 0x0027A530: bc1t        L_0027A54C
    if (c1cs) {
        // 0x0027A534: addiu       $t2, $zero, 0x400
        ctx->r10 = ADD32(0, 0X400);
            goto L_0027A54C;
    }
    // 0x0027A534: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x0027A538: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x0027A53C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027A540: div.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f5.fl);
    // 0x0027A544: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027A548: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_0027A54C:
    // 0x0027A54C: lui         $a2, 0xF590
    ctx->r6 = S32(0XF590 << 16);
    // 0x0027A550: ori         $a2, $a2, 0x100
    ctx->r6 = ctx->r6 | 0X100;
    // 0x0027A554: addu        $t0, $t1, $zero
    ctx->r8 = ADD32(ctx->r9, 0);
    // 0x0027A558: mtc1        $t1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r9;
    // 0x0027A55C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027A560: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0027A564: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0027A568: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0027A56C: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x0027A570: mtc1        $t5, $f0
    ctx->f0.u32l = ctx->r13;
    // 0x0027A574: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027A578: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0027A57C: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x0027A580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027A584: lwc1        $f2, -0x7C10($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7C10);
    // 0x0027A588: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0027A58C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027A590: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0027A594: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x0027A598: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0027A59C: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x0027A5A0: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x0027A5A4: lui         $t4, 0x700
    ctx->r12 = S32(0X700 << 16);
    // 0x0027A5A8: mul.s       $f3, $f7, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f7.fl, ctx->f2.fl);
    // 0x0027A5AC: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x0027A5B0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0027A5B4: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x0027A5B8: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x0027A5BC: add.s       $f1, $f6, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f6.fl + ctx->f1.fl;
    // 0x0027A5C0: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x0027A5C4: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027A5C8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027A5CC: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0027A5D0: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0027A5D4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0027A5D8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027A5DC: add.s       $f0, $f7, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f7.fl + ctx->f0.fl;
    // 0x0027A5E0: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x0027A5E4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0027A5E8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027A5EC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x0027A5F0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x0027A5F4: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0027A5F8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x0027A5FC: trunc.w.s   $f8, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    ctx->f8.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0027A600: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x0027A604: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027A608: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x0027A60C: bgez        $t1, L_0027A618
    if (SIGNED(ctx->r9) >= 0) {
        // 0x0027A610: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_0027A618;
    }
    // 0x0027A610: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x0027A614: addiu       $t0, $t1, 0xF
    ctx->r8 = ADD32(ctx->r9, 0XF);
L_0027A618:
    // 0x0027A618: sra         $a1, $t0, 4
    ctx->r5 = S32(SIGNED(ctx->r8) >> 4);
    // 0x0027A61C: blez        $a1, L_0027A628
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027A620: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_0027A628;
    }
    // 0x0027A620: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x0027A624: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_0027A628:
    // 0x0027A628: mult        $t1, $t5
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027A62C: mflo        $s0
    ctx->r16 = lo;
    // 0x0027A630: addiu       $v0, $s0, 0x3
    ctx->r2 = ADD32(ctx->r16, 0X3);
    // 0x0027A634: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x0027A638: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x0027A63C: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x0027A640: beql        $v0, $zero, L_0027A648
    if (ctx->r2 == 0) {
        // 0x0027A644: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_0027A648;
    }
    goto skip_0;
    // 0x0027A644: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_0:
L_0027A648:
    // 0x0027A648: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x0027A64C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027A650: blez        $a1, L_0027A694
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0027A654: or          $a0, $v0, $t4
        ctx->r4 = ctx->r2 | ctx->r12;
            goto L_0027A694;
    }
    // 0x0027A654: or          $a0, $v0, $t4
    ctx->r4 = ctx->r2 | ctx->r12;
    // 0x0027A658: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x0027A65C: bne         $a1, $zero, L_0027A668
    if (ctx->r5 != 0) {
        // 0x0027A660: nop
    
            goto L_0027A668;
    }
    // 0x0027A660: nop

    // 0x0027A664: break       7
    do_break(2598500);
L_0027A668:
    // 0x0027A668: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027A66C: bne         $a1, $at, L_0027A680
    if (ctx->r5 != ctx->r1) {
        // 0x0027A670: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027A680;
    }
    // 0x0027A670: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027A674: bne         $v1, $at, L_0027A680
    if (ctx->r3 != ctx->r1) {
        // 0x0027A678: nop
    
            goto L_0027A680;
    }
    // 0x0027A678: nop

    // 0x0027A67C: break       6
    do_break(2598524);
L_0027A680:
    // 0x0027A680: mflo        $v0
    ctx->r2 = lo;
    // 0x0027A684: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A688: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027A68C: j           L_0027A6A0
    // 0x0027A690: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
        goto L_0027A6A0;
    // 0x0027A690: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_0027A694:
    // 0x0027A694: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x0027A698: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027A69C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0027A6A0:
    // 0x0027A6A0: lui         $a3, 0xF580
    ctx->r7 = S32(0XF580 << 16);
    // 0x0027A6A4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x0027A6A8: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x0027A6AC: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x0027A6B0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x0027A6B4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027A6B8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0027A6BC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0027A6C0: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x0027A6C4: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x0027A6C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027A6CC: sra         $v0, $t1, 1
    ctx->r2 = S32(SIGNED(ctx->r9) >> 1);
    // 0x0027A6D0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0027A6D4: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x0027A6D8: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x0027A6DC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027A6E0: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x0027A6E4: addiu       $t0, $a1, 0x10
    ctx->r8 = ADD32(ctx->r5, 0X10);
    // 0x0027A6E8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027A6EC: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x0027A6F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027A6F4: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x0027A6F8: addiu       $v1, $t1, -0x1
    ctx->r3 = ADD32(ctx->r9, -0X1);
    // 0x0027A6FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027A700: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027A704: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027A708: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0027A70C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x0027A710: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0027A714: addiu       $v0, $t5, -0x1
    ctx->r2 = ADD32(ctx->r13, -0X1);
    // 0x0027A718: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027A71C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027A720: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027A724: addiu       $a3, $a1, 0x18
    ctx->r7 = ADD32(ctx->r5, 0X18);
    // 0x0027A728: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0027A72C: andi        $v1, $t6, 0xFFF
    ctx->r3 = ctx->r14 & 0XFFF;
    // 0x0027A730: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x0027A734: andi        $v0, $t7, 0xFFF
    ctx->r2 = ctx->r15 & 0XFFF;
    // 0x0027A738: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x0027A73C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0027A740: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027A744: andi        $v0, $t8, 0xFFF
    ctx->r2 = ctx->r24 & 0XFFF;
    // 0x0027A748: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027A74C: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x0027A750: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x0027A754: andi        $v1, $t9, 0xFFF
    ctx->r3 = ctx->r25 & 0XFFF;
    // 0x0027A758: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027A75C: addiu       $a0, $a1, 0x20
    ctx->r4 = ADD32(ctx->r5, 0X20);
    // 0x0027A760: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x0027A764: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x0027A768: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x0027A76C: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x0027A770: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x0027A774: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x0027A778: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0027A77C: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x0027A780: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x0027A784: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x0027A788: andi        $v1, $t2, 0xFFFF
    ctx->r3 = ctx->r10 & 0XFFFF;
    // 0x0027A78C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027A790: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027A794: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x0027A798: jr          $ra
    // 0x0027A79C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0027A79C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0028EE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002060B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002060B8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002060BC: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x002060C0: jr          $ra
    // 0x002060C4: nop

    return;
    // 0x002060C4: nop

;}
RECOMP_FUNC void func_00403CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403CF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00403CFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00403D00: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00403D04: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00403D08: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00403D0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00403D10: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00403D14: addiu       $s2, $s2, 0x7078
    ctx->r18 = ADD32(ctx->r18, 0X7078);
    // 0x00403D18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00403D1C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00403D20: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00403D24: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x00403D28: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x00403D2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00403D30: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x00403D34: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00403D38: addiu       $v0, $v0, 0x173C
    ctx->r2 = ADD32(ctx->r2, 0X173C);
    // 0x00403D3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00403D40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00403D44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00403D48: sw          $v0, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r2;
    // 0x00403D4C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00403D50: addiu       $v0, $v0, 0x3F3C
    ctx->r2 = ADD32(ctx->r2, 0X3F3C);
    // 0x00403D54: sw          $v0, 0xF0($s3)
    MEM_W(0XF0, ctx->r19) = ctx->r2;
    // 0x00403D58: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00403D5C: addiu       $v0, $v0, 0x37B0
    ctx->r2 = ADD32(ctx->r2, 0X37B0);
    // 0x00403D60: sw          $v0, 0xF8($s3)
    MEM_W(0XF8, ctx->r19) = ctx->r2;
    // 0x00403D64: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00403D68: addiu       $v0, $v0, 0x3AD4
    ctx->r2 = ADD32(ctx->r2, 0X3AD4);
    // 0x00403D6C: sw          $v0, 0x108($s3)
    MEM_W(0X108, ctx->r19) = ctx->r2;
    // 0x00403D70: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00403D74: addiu       $v0, $v0, 0x7DC0
    ctx->r2 = ADD32(ctx->r2, 0X7DC0);
    // 0x00403D78: sw          $v0, 0xF4($s3)
    MEM_W(0XF4, ctx->r19) = ctx->r2;
    // 0x00403D7C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00403D80: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00403D84: addiu       $s0, $s0, -0x690
    ctx->r16 = ADD32(ctx->r16, -0X690);
    // 0x00403D88: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x00403D8C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x00403D90: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00403D94: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
    // 0x00403D98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00403D9C: jal         0x00225F6C
    // 0x00403DA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x00403DA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00403DA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00403DA8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00403DAC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00403DB0: addiu       $a3, $zero, 0xC9
    ctx->r7 = ADD32(0, 0XC9);
    // 0x00403DB4: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x00403DB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00403DBC: jal         0x00225F6C
    // 0x00403DC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x00403DC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x00403DC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00403DC8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00403DCC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00403DD0: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x00403DD4: addiu       $v0, $s0, 0xC
    ctx->r2 = ADD32(ctx->r16, 0XC);
    // 0x00403DD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00403DDC: jal         0x00225F6C
    // 0x00403DE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_2;
    // 0x00403DE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
    // 0x00403DE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00403DE8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00403DEC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00403DF0: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    // 0x00403DF4: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
    // 0x00403DF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00403DFC: jal         0x00225F6C
    // 0x00403E00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_3;
    // 0x00403E00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_3:
    // 0x00403E04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00403E08: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00403E0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00403E10: addiu       $a3, $zero, 0xCC
    ctx->r7 = ADD32(0, 0XCC);
    // 0x00403E14: addiu       $v0, $s0, 0x14
    ctx->r2 = ADD32(ctx->r16, 0X14);
    // 0x00403E18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00403E1C: jal         0x00225F6C
    // 0x00403E20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_4;
    // 0x00403E20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_4:
    // 0x00403E24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00403E28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00403E2C: jal         0x00225EBC
    // 0x00403E30: addiu       $a2, $zero, 0x1DB2
    ctx->r6 = ADD32(0, 0X1DB2);
    func_00225EBC(rdram, ctx);
        goto after_5;
    // 0x00403E30: addiu       $a2, $zero, 0x1DB2
    ctx->r6 = ADD32(0, 0X1DB2);
    after_5:
    // 0x00403E34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00403E38: addiu       $s1, $s0, -0x344
    ctx->r17 = ADD32(ctx->r16, -0X344);
    // 0x00403E3C: sw          $v0, -0x24($s0)
    MEM_W(-0X24, ctx->r16) = ctx->r2;
L_00403E40:
    // 0x00403E40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00403E44: jal         0x002362E4
    // 0x00403E48: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002362E4(rdram, ctx);
        goto after_6;
    // 0x00403E48: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x00403E4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00403E50: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x00403E54: bne         $v0, $zero, L_00403E40
    if (ctx->r2 != 0) {
        // 0x00403E58: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_00403E40;
    }
    // 0x00403E58: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
    // 0x00403E5C: jal         0x00403C14
    // 0x00403E60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00403C14(rdram, ctx);
        goto after_7;
    // 0x00403E60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x00403E64: jal         0x004070B4
    // 0x00403E68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_004070B4(rdram, ctx);
        goto after_8;
    // 0x00403E68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x00403E6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00403E70: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00403E74: addiu       $s0, $s0, -0x624
    ctx->r16 = ADD32(ctx->r16, -0X624);
    // 0x00403E78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00403E7C: lwc1        $f0, 0x38C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X38C);
    // 0x00403E80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00403E84: lwc1        $f1, 0x390($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X390);
    // 0x00403E88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00403E8C: lwc1        $f2, 0x394($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X394);
    // 0x00403E90: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00403E94: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x00403E98: sw          $s1, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r17;
    // 0x00403E9C: sw          $zero, -0x8C($s0)
    MEM_W(-0X8C, ctx->r16) = 0;
    // 0x00403EA0: sw          $zero, -0x84($s0)
    MEM_W(-0X84, ctx->r16) = 0;
    // 0x00403EA4: sw          $s1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r17;
    // 0x00403EA8: sb          $zero, -0x78($s0)
    MEM_B(-0X78, ctx->r16) = 0;
    // 0x00403EAC: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x00403EB0: swc1        $f0, -0x3C8($s0)
    MEM_W(-0X3C8, ctx->r16) = ctx->f0.u32l;
    // 0x00403EB4: swc1        $f1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00403EB8: jal         0x00406F10
    // 0x00403EBC: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    func_00406F10(rdram, ctx);
        goto after_9;
    // 0x00403EBC: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    after_9:
    // 0x00403EC0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00403EC4: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x00403EC8: sw          $zero, -0x3BC($s0)
    MEM_W(-0X3BC, ctx->r16) = 0;
    // 0x00403ECC: sw          $zero, -0x3B8($s0)
    MEM_W(-0X3B8, ctx->r16) = 0;
    // 0x00403ED0: sw          $zero, -0x74($s0)
    MEM_W(-0X74, ctx->r16) = 0;
    // 0x00403ED4: sw          $zero, -0x80($s0)
    MEM_W(-0X80, ctx->r16) = 0;
    // 0x00403ED8: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x00403EDC: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00403EE0: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x00403EE4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00403EE8: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    // 0x00403EEC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00403EF0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00403EF4: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x00403EF8: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x00403EFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00403F00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00403F04: sw          $zero, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = 0;
    // 0x00403F08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00403F0C: sw          $zero, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = 0;
    // 0x00403F10: jal         0x00243414
    // 0x00403F14: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_10;
    // 0x00403F14: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    after_10:
    // 0x00403F18: sb          $s1, 0x37($s3)
    MEM_B(0X37, ctx->r19) = ctx->r17;
    // 0x00403F1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00403F20: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00403F24: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00403F28: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00403F2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00403F30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00403F34: jr          $ra
    // 0x00403F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00403F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00446F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446F74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00446F78: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00446F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00446F80: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446F84: beq         $v0, $zero, L_00446FB4
    if (ctx->r2 == 0) {
        // 0x00446F88: nop
    
            goto L_00446FB4;
    }
    // 0x00446F88: nop

    // 0x00446F8C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00446F90: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00446F94: beq         $v0, $zero, L_00446FB4
    if (ctx->r2 == 0) {
        // 0x00446F98: nop
    
            goto L_00446FB4;
    }
    // 0x00446F98: nop

    // 0x00446F9C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446FA0: lwc1        $f0, 0x90C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X90C);
    // 0x00446FA4: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x00446FA8: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x00446FAC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x00446FB0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
L_00446FB4:
    // 0x00446FB4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00446FB8: beq         $v0, $zero, L_00446FD4
    if (ctx->r2 == 0) {
        // 0x00446FBC: nop
    
            goto L_00446FD4;
    }
    // 0x00446FBC: nop

    // 0x00446FC0: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00446FC4: beq         $v0, $zero, L_00446FD4
    if (ctx->r2 == 0) {
        // 0x00446FC8: nop
    
            goto L_00446FD4;
    }
    // 0x00446FC8: nop

    // 0x00446FCC: jalr        $v0
    // 0x00446FD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00446FD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_00446FD4:
    // 0x00446FD4: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x00446FD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00446FDC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00446FE0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00446FE4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00446FE8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00446FEC: nop

    // 0x00446FF0: bc1tl       L_00446FF8
    if (c1cs) {
        // 0x00446FF4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00446FF8;
    }
    goto skip_0;
    // 0x00446FF4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_00446FF8:
    // 0x00446FF8: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x00446FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00447000: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447004: jr          $ra
    // 0x00447008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044823C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040F58C:
    // 0x0044823C: lw          $v0, 0xA64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA64);
    // 0x00448240: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00448244: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00448248: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044824C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00448250: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00448254: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00448258: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0044825C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00448260: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00448264: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00448268: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0044826C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00448270: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00448274: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00448278: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044827C: bne         $s1, $v0, L_0044828C
    if (ctx->r17 != ctx->r2) {
        // 0x00448280: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0044828C;
    }
    // 0x00448280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00448284: j           L_0040F58C
    // 0x00448288: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    entry_0040F58C(rdram, ctx);
    return;
    // 0x00448288: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
L_0044828C:
    // 0x0044828C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00448290: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x00448294: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00448298: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0044829C: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x004482A0: jal         0x00204EDC
    // 0x004482A4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x004482A4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x004482A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004482AC: beq         $v1, $zero, L_004482C0
    if (ctx->r3 == 0) {
        // 0x004482B0: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_004482C0;
    }
    // 0x004482B0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004482B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x004482B8: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x004482BC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_004482C0:
    // 0x004482C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004482C4: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x004482C8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x004482CC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004482D0: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x004482D4: jal         0x00204EDC
    // 0x004482D8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x004482D8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_1:
    // 0x004482DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004482E0: beq         $v1, $zero, L_004482F4
    if (ctx->r3 == 0) {
        // 0x004482E4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_004482F4;
    }
    // 0x004482E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004482E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x004482EC: addiu       $s2, $v0, 0x10
    ctx->r18 = ADD32(ctx->r2, 0X10);
    // 0x004482F0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_004482F4:
    // 0x004482F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004482F8: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x004482FC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00448300: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00448304: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x00448308: jal         0x00204EDC
    // 0x0044830C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0044830C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
    // 0x00448310: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00448314: beq         $v1, $zero, L_00448328
    if (ctx->r3 == 0) {
        // 0x00448318: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448328;
    }
    // 0x00448318: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044831C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00448320: addiu       $s0, $v0, 0x10
    ctx->r16 = ADD32(ctx->r2, 0X10);
    // 0x00448324: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00448328:
    // 0x00448328: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0044832C: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x00448330: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00448334: beq         $v0, $zero, L_00448394
    if (ctx->r2 == 0) {
        // 0x00448338: addiu       $v0, $s1, -0x1
        ctx->r2 = ADD32(ctx->r17, -0X1);
            goto L_00448394;
    }
    // 0x00448338: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
    // 0x0044833C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00448340: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    // 0x00448344: addiu       $v1, $s6, 0x4
    ctx->r3 = ADD32(ctx->r22, 0X4);
    // 0x00448348: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0044834C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00448350: lwc1        $f2, 0x964($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X964);
L_00448354:
    // 0x00448354: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00448358: lwc1        $f1, -0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, -0X4);
    // 0x0044835C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00448360: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00448364: c.eq.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl == ctx->f3.fl;
    // 0x00448368: nop

    // 0x0044836C: bc1f        L_0044837C
    if (!c1cs) {
        // 0x00448370: swc1        $f0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
            goto L_0044837C;
    }
    // 0x00448370: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x00448374: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x00448378: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_0044837C:
    // 0x0044837C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00448380: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00448384: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00448388: bne         $v0, $zero, L_00448354
    if (ctx->r2 != 0) {
        // 0x0044838C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00448354;
    }
    // 0x0044838C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00448390: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
L_00448394:
    // 0x00448394: blez        $v0, L_004483EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00448398: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004483EC;
    }
    // 0x00448398: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044839C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004483A0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x004483A4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x004483A8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x004483AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004483B0: lwc1        $f2, 0x968($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X968);
L_004483B4:
    // 0x004483B4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x004483B8: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x004483BC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004483C0: c.eq.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl == ctx->f3.fl;
    // 0x004483C4: nop

    // 0x004483C8: bc1f        L_004483D8
    if (!c1cs) {
        // 0x004483CC: swc1        $f1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_004483D8;
    }
    // 0x004483CC: swc1        $f1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x004483D0: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x004483D4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_004483D8:
    // 0x004483D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x004483DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004483E0: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x004483E4: bne         $v0, $zero, L_004483B4
    if (ctx->r2 != 0) {
        // 0x004483E8: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_004483B4;
    }
    // 0x004483E8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_004483EC:
    // 0x004483EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004483F0: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    // 0x004483F4: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004483F8: beql        $v0, $zero, L_00448464
    if (ctx->r2 == 0) {
        // 0x004483FC: addiu       $a3, $s1, -0x2
        ctx->r7 = ADD32(ctx->r17, -0X2);
            goto L_00448464;
    }
    goto skip_0;
    // 0x004483FC: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
    skip_0:
    // 0x00448400: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00448404: lwc1        $f4, 0x96C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X96C);
    // 0x00448408: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x0044840C: addiu       $v1, $s0, 0x4
    ctx->r3 = ADD32(ctx->r16, 0X4);
    // 0x00448410: addiu       $a1, $s7, 0x4
    ctx->r5 = ADD32(ctx->r23, 0X4);
L_00448414:
    // 0x00448414: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00448418: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0044841C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00448420: lwc1        $f2, -0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, -0X4);
    // 0x00448424: lwc1        $f3, 0x0($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00448428: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0044842C: lwc1        $f2, -0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, -0X4);
    // 0x00448430: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00448434: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00448438: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0044843C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x00448440: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00448444: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00448448: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0044844C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00448450: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x00448454: bne         $v0, $zero, L_00448414
    if (ctx->r2 != 0) {
        // 0x00448458: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_00448414;
    }
    // 0x00448458: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0044845C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00448460: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
L_00448464:
    // 0x00448464: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00448468: beq         $v0, $zero, L_004484D0
    if (ctx->r2 == 0) {
        // 0x0044846C: nop
    
            goto L_004484D0;
    }
    // 0x0044846C: nop

    // 0x00448470: addiu       $v1, $s3, 0x4
    ctx->r3 = ADD32(ctx->r19, 0X4);
    // 0x00448474: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x00448478: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
L_0044847C:
    // 0x0044847C: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00448480: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x00448484: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00448488: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0044848C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00448490: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00448494: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00448498: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x0044849C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x004484A0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x004484A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004484A8: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004484AC: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x004484B0: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x004484B4: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x004484B8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004484BC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x004484C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x004484C4: swc1        $f1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x004484C8: bne         $v0, $zero, L_0044847C
    if (ctx->r2 != 0) {
        // 0x004484CC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0044847C;
    }
    // 0x004484CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_004484D0:
    // 0x004484D0: blez        $s1, L_004484F0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x004484D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004484F0;
    }
    // 0x004484D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004484D8: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_004484DC:
    // 0x004484DC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x004484E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004484E4: slt         $v0, $a0, $s1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x004484E8: bne         $v0, $zero, L_004484DC
    if (ctx->r2 != 0) {
        // 0x004484EC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_004484DC;
    }
    // 0x004484EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_004484F0:
    // 0x004484F0: bne         $s4, $zero, L_00448550
    if (ctx->r20 != 0) {
        // 0x004484F4: nop
    
            goto L_00448550;
    }
    // 0x004484F4: nop

    // 0x004484F8: addiu       $a0, $s1, -0x2
    ctx->r4 = ADD32(ctx->r17, -0X2);
    // 0x004484FC: blez        $a0, L_00448550
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00448500: nop
    
            goto L_00448550;
    }
    // 0x00448500: nop

    // 0x00448504: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00448508: addu        $a3, $v0, $s5
    ctx->r7 = ADD32(ctx->r2, ctx->r21);
    // 0x0044850C: addu        $a1, $v0, $s3
    ctx->r5 = ADD32(ctx->r2, ctx->r19);
    // 0x00448510: addu        $v1, $v0, $s2
    ctx->r3 = ADD32(ctx->r2, ctx->r18);
    // 0x00448514: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
L_00448518:
    // 0x00448518: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0044851C: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x00448520: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00448524: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00448528: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x0044852C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00448530: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00448534: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00448538: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0044853C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x00448540: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00448544: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x00448548: bgtz        $a0, L_00448518
    if (SIGNED(ctx->r4) > 0) {
        // 0x0044854C: addiu       $a3, $a3, -0x4
        ctx->r7 = ADD32(ctx->r7, -0X4);
            goto L_00448518;
    }
    // 0x0044854C: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_00448550:
    // 0x00448550: beq         $s3, $zero, L_00448564
    if (ctx->r19 == 0) {
        // 0x00448554: nop
    
            goto L_00448564;
    }
    // 0x00448554: nop

    // 0x00448558: lw          $a1, -0x10($s3)
    ctx->r5 = MEM_W(ctx->r19, -0X10);
    // 0x0044855C: jal         0x002052D8
    // 0x00448560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x00448560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_00448564:
    // 0x00448564: beq         $s2, $zero, L_00448578
    if (ctx->r18 == 0) {
        // 0x00448568: nop
    
            goto L_00448578;
    }
    // 0x00448568: nop

    // 0x0044856C: lw          $a1, -0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, -0X10);
    // 0x00448570: jal         0x002052D8
    // 0x00448574: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x00448574: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
L_00448578:
    // 0x00448578: beq         $s0, $zero, L_0044858C
    if (ctx->r16 == 0) {
        // 0x0044857C: nop
    
            goto L_0044858C;
    }
    // 0x0044857C: nop

    // 0x00448580: lw          $a1, -0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X10);
    // 0x00448584: jal         0x002052D8
    // 0x00448588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_5;
    // 0x00448588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
L_0044858C:
    // 0x0044858C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00448590: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00448594: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00448598: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0044859C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004485A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004485A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004485A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004485AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004485B0: jr          $ra
    // 0x004485B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004485B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00405AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405AC8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x00405ACC: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x00405AD0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00405AD4: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x00405AD8: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x00405ADC: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x00405AE0: sdc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD8, ctx->r29);
    // 0x00405AE4: sdc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD0, ctx->r29);
    // 0x00405AE8: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00405AEC: beq         $v0, $zero, L_00405B14
    if (ctx->r2 == 0) {
        // 0x00405AF0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00405B14;
    }
    // 0x00405AF0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00405AF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405AF8: lwc1        $f0, 0x478($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X478);
    // 0x00405AFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405B00: swc1        $f0, 0x1FC($s1)
    MEM_W(0X1FC, ctx->r17) = ctx->f0.u32l;
    // 0x00405B04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405B08: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00405B0C: jal         0x00243414
    // 0x00405B10: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00405B10: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
L_00405B14:
    // 0x00405B14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00405B18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00405B1C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00405B20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00405B24: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00405B28: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00405B2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405B30: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00405B34: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00405B38: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00405B3C: jal         0x00246108
    // 0x00405B40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x00405B40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x00405B44: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00405B48: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00405B4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405B50: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x00405B54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00405B58: beq         $a1, $zero, L_00405C48
    if (ctx->r5 == 0) {
        // 0x00405B5C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00405C48;
    }
    // 0x00405B5C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00405B60: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x00405B64: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x00405B68: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x00405B6C: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x00405B70: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00405B74: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x00405B78: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x00405B7C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x00405B80: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x00405B84: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00405B88: jal         0x00246310
    // 0x00405B8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00246310(rdram, ctx);
        goto after_2;
    // 0x00405B8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00405B90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00405B94: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00405B98: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00405B9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x00405BA0: jal         0x00245BAC
    // 0x00405BA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_3;
    // 0x00405BA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00405BA8: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x00405BAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00405BB0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00405BB4: jal         0x0020EF2C
    // 0x00405BB8: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x00405BB8: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_4:
    // 0x00405BBC: jal         0x0020EAA0
    // 0x00405BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_5;
    // 0x00405BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00405BC4: lwc1        $f2, 0xD8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x00405BC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405BCC: lwc1        $f1, 0x47C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X47C);
    // 0x00405BD0: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x00405BD4: nop

    // 0x00405BD8: bc1f        L_00405BF8
    if (!c1cs) {
        // 0x00405BDC: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_00405BF8;
    }
    // 0x00405BDC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00405BE0: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00405BE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405BE8: lwc1        $f0, 0x480($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X480);
    // 0x00405BEC: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00405BF0: j           L_00405BFC
    // 0x00405BF4: nop

        goto L_00405BFC;
    // 0x00405BF4: nop

L_00405BF8:
    // 0x00405BF8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
L_00405BFC:
    // 0x00405BFC: lui         $a2, 0x4400
    ctx->r6 = S32(0X4400 << 16);
    // 0x00405C00: jal         0x0021160C
    // 0x00405C04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021160C(rdram, ctx);
        goto after_6;
    // 0x00405C04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x00405C08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00405C0C: jal         0x002982F0
    // 0x00405C10: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x00405C10: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_7:
    // 0x00405C14: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00405C18: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x00405C1C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00405C20: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00405C24: jal         0x002974C0
    // 0x00405C28: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x00405C28: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_8:
    // 0x00405C2C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00405C30: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x00405C34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405C38: lwc1        $f2, 0x484($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X484);
    // 0x00405C3C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00405C40: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x00405C44: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00405C48:
    // 0x00405C48: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x00405C4C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00405C50: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00405C54: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00405C58: ldc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD8);
    // 0x00405C5C: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x00405C60: jr          $ra
    // 0x00405C64: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x00405C64: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_00455AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455AAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455AB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455AB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455AB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455ABC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455AC0: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00455AC4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455AC8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455ACC: jal         0x0025340C
    // 0x00455AD0: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455AD0: nop

    after_0:
    // 0x00455AD4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00455AD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00455ADC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00455AE0: lhu         $s1, -0x54A4($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A4);
    // 0x00455AE4: jal         0x004160F0
    // 0x00455AE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00455AE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00455AEC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455AF0: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x00455AF4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00455AF8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00455AFC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00455B00: jal         0x0029E3E0
    // 0x00455B04: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00455B04: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00455B08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455B0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00455B10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455B14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455B18: jr          $ra
    // 0x00455B1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455B1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041E97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x0041E9E4: nop

    after_0:
L_0041E9E8:
    // 0x0041E9E8: beq         $s0, $zero, L_0041EA30
    if (ctx->r16 == 0) {
        // 0x0041E9EC: nop
    
            goto L_0041EA30;
    }
    // 0x0041E9EC: nop

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
        goto after_1;
    // 0x0041EA2C: nop

    after_1:
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
        goto after_2;
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
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
RECOMP_FUNC void func_00200738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200738: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0020073C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200740: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00200744: beq         $a2, $zero, L_00200760
    if (ctx->r6 == 0) {
        // 0x00200748: nop
    
            goto L_00200760;
    }
    // 0x00200748: nop

    // 0x0020074C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200750: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00200754: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00200758: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0020075C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00200760:
    // 0x00200760: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200764: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200768: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0020076C: beq         $a2, $zero, L_00200788
    if (ctx->r6 == 0) {
        // 0x00200770: nop
    
            goto L_00200788;
    }
    // 0x00200770: nop

    // 0x00200774: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200778: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x0020077C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00200780: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200784: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00200788:
    // 0x00200788: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020078C: bne         $v0, $a1, L_002007A4
    if (ctx->r2 != ctx->r5) {
        // 0x00200790: nop
    
            goto L_002007A4;
    }
    // 0x00200790: nop

    // 0x00200794: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200798: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020079C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002007A0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_002007A4:
    // 0x002007A4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002007A8: bne         $v0, $a1, L_002007C0
    if (ctx->r2 != ctx->r5) {
        // 0x002007AC: nop
    
            goto L_002007C0;
    }
    // 0x002007AC: nop

    // 0x002007B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002007B4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002007B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002007BC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_002007C0:
    // 0x002007C0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002007C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002007C8: jr          $ra
    // 0x002007CC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x002007CC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00452578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452578: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045257C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452584: jal         0x00421170
    // 0x00452588: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    entry_00421170(rdram, ctx);
        goto after_0;
    // 0x00452588: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0045258C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00452590: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00452594: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00452598: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x0045259C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004525A0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004525A4: addiu       $a1, $a1, -0x49F0
    ctx->r5 = ADD32(ctx->r5, -0X49F0);
    // 0x004525A8: jal         0x00416644
    // 0x004525AC: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x004525AC: nop

    after_1:
    // 0x004525B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004525B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004525B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004525BC: jr          $ra
    // 0x004525C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004525C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025EF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EF68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025EF6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025EF70: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025EF74: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025EF78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025EF7C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025EF80: beq         $v0, $zero, L_0025EFE4
    if (ctx->r2 == 0) {
        // 0x0025EF84: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0025EFE4;
    }
    // 0x0025EF84: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025EF88: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025EF8C: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0025EF90: beq         $a0, $zero, L_0025EFE4
    if (ctx->r4 == 0) {
        // 0x0025EF94: nop
    
            goto L_0025EFE4;
    }
    // 0x0025EF94: nop

    // 0x0025EF98: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0025EF9C: lw          $v1, 0x88($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X88);
    // 0x0025EFA0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0025EFA4: bne         $v0, $zero, L_0025EFE4
    if (ctx->r2 != 0) {
        // 0x0025EFA8: nop
    
            goto L_0025EFE4;
    }
    // 0x0025EFA8: nop

    // 0x0025EFAC: bne         $a0, $v1, L_0025EFE4
    if (ctx->r4 != ctx->r3) {
        // 0x0025EFB0: nop
    
            goto L_0025EFE4;
    }
    // 0x0025EFB0: nop

    // 0x0025EFB4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025EFB8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0025EFBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0025EFC0: bne         $v1, $v0, L_0025EFE4
    if (ctx->r3 != ctx->r2) {
        // 0x0025EFC4: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_0025EFE4;
    }
    // 0x0025EFC4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0025EFC8: sw          $a0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->r4;
    // 0x0025EFCC: jal         0x00264C8C
    // 0x0025EFD0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00264C8C(rdram, ctx);
        goto after_0;
    // 0x0025EFD0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0025EFD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025EFD8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025EFDC: jal         0x00243414
    // 0x0025EFE0: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0025EFE0: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_1:
L_0025EFE4:
    // 0x0025EFE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025EFE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025EFEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025EFF0: jr          $ra
    // 0x0025EFF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025EFF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026AC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026AC38: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0026AC3C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0026AC40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026AC44: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x0026AC48: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0026AC4C: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x0026AC50: jal         0x00269A90
    // 0x0026AC54: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00269A90(rdram, ctx);
        goto after_0;
    // 0x0026AC54: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0026AC58: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0026AC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026AC60: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0026AC64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AC68: lwc1        $f20, 0x7FC0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7FC0);
    // 0x0026AC6C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0026AC70: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0026AC74: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x0026AC78: jal         0x0020EFDC
    // 0x0026AC7C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_1;
    // 0x0026AC7C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x0026AC80: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0026AC84: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0026AC88: lwc1        $f1, 0x34($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x0026AC8C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0026AC90: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0026AC94: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026AC98: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0026AC9C: jal         0x00298470
    // 0x0026ACA0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0026ACA0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_2:
    // 0x0026ACA4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0026ACA8: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026ACAC: nop

    // 0x0026ACB0: bc1f        L_0026ACCC
    if (!c1cs) {
        // 0x0026ACB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0026ACCC;
    }
    // 0x0026ACB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026ACB8: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026ACBC: swc1        $f1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026ACC0: swc1        $f1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026ACC4: j           L_0026AD58
    // 0x0026ACC8: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
        goto L_0026AD58;
    // 0x0026ACC8: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
L_0026ACCC:
    // 0x0026ACCC: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0026ACD0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0026ACD4: jal         0x0020EF60
    // 0x0026ACD8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0026ACD8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0026ACDC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026ACE0: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026ACE4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026ACE8: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0026ACEC: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026ACF0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026ACF4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026ACF8: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026ACFC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0026AD00: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0026AD04: jal         0x0021153C
    // 0x0026AD08: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_4;
    // 0x0026AD08: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_4:
    // 0x0026AD0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026AD10: lwc1        $f1, 0x7FC4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7FC4);
    // 0x0026AD14: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026AD18: jal         0x002982F0
    // 0x0026AD1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0026AD1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x0026AD20: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0026AD24: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026AD28: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0026AD2C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026AD30: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0026AD34: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026AD38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026AD3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0026AD40: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0026AD44: swc1        $f3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026AD48: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x0026AD4C: jal         0x002974C0
    // 0x0026AD50: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_6;
    // 0x0026AD50: swc1        $f1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_6:
    // 0x0026AD54: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_0026AD58:
    // 0x0026AD58: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0026AD5C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0026AD60: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x0026AD64: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x0026AD68: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x0026AD6C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0026AD70: sw          $a3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r7;
    // 0x0026AD74: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x0026AD78: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
    // 0x0026AD7C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x0026AD80: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0026AD84: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0026AD88: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x0026AD8C: jr          $ra
    // 0x0026AD90: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0026AD90: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0044BE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BE6C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0044BE70: sra         $a3, $a1, 3
    ctx->r7 = S32(SIGNED(ctx->r5) >> 3);
    // 0x0044BE74: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0044BE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044BE7C: beq         $a2, $zero, L_0044BE98
    if (ctx->r6 == 0) {
            // 0x0044BE80: sllv        $a0, $v0, $a1
    ctx->r4 = S32(ctx->r2 << (ctx->r5 & 31));
    func_0044BE98(rdram, ctx);
    return;
    }
    // 0x0044BE80: sllv        $a0, $v0, $a1
    ctx->r4 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x0044BE84: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x0044BE88: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0044BE8C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0044BE90: jr          $ra
    // 0x0044BE94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x0044BE94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_004470D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004470D8: jr          $ra
    // 0x004470DC: nop

    return;
    // 0x004470DC: nop

;}
RECOMP_FUNC void func_0045469C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B6CC:
    // 0x0045469C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B700:
    // 0x004546A0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x004546A4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x004546A8: beq         $v0, $zero, L_004546BC
    if (ctx->r2 == 0) {
        // 0x004546AC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004546BC;
    }
    // 0x004546AC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004546B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004546B4: j           L_0041B6CC
    // 0x004546B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B6CC(rdram, ctx);
    return;
    // 0x004546B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_004546BC:
    // 0x004546BC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004546C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004546C4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004546C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004546CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004546D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004546D4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004546D8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x004546DC: beq         $v0, $zero, L_004546F4
    if (ctx->r2 == 0) {
        // 0x004546E0: nop
    
            goto L_004546F4;
    }
    // 0x004546E0: nop

    // 0x004546E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004546E8: addiu       $v0, $v0, 0x59DC
    ctx->r2 = ADD32(ctx->r2, 0X59DC);
    // 0x004546EC: j           L_0041B700
    // 0x004546F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B700(rdram, ctx);
    return;
    // 0x004546F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004546F4:
    // 0x004546F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004546F8: addiu       $v0, $v0, 0x59F8
    ctx->r2 = ADD32(ctx->r2, 0X59F8);
    // 0x004546FC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454700: jr          $ra
    // 0x00454704: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454704: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002034F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002034F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002034F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002034FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00203500: jal         0x0029DFF0
    // 0x00203504: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00203504: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00203508: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020350C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203510: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00203518: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020351C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203520: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203524: beq         $v1, $v0, L_00203550
    if (ctx->r3 == ctx->r2) {
        // 0x00203528: nop
    
            goto L_00203550;
    }
    // 0x00203528: nop

    // 0x0020352C: jal         0x0029E010
    // 0x00203530: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00203530: nop

    after_1:
    // 0x00203534: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203538: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x0020353C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203540: jal         0x0029B6F0
    // 0x00203544: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00203544: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00203548: j           L_0020355C
    // 0x0020354C: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
        goto L_0020355C;
    // 0x0020354C: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_00203550:
    // 0x00203550: jal         0x0029E010
    // 0x00203554: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00203554: nop

    after_3:
    // 0x00203558: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
L_0020355C:
    // 0x0020355C: srl         $v1, $s0, 1
    ctx->r3 = S32(U32(ctx->r16) >> 1);
    // 0x00203560: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203564: srl         $v1, $s0, 9
    ctx->r3 = S32(U32(ctx->r16) >> 9);
    // 0x00203568: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x0020356C: srl         $v1, $s0, 17
    ctx->r3 = S32(U32(ctx->r16) >> 17);
    // 0x00203570: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00203574: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203578: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x0020357C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203580: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00203584: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00203588: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0020358C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00203590: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00203594: bne         $v0, $s0, L_002035B4
    if (ctx->r2 != ctx->r16) {
        // 0x00203598: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_002035B4;
    }
    // 0x00203598: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0020359C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002035A0: j           L_002035D4
    // 0x002035A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_002035D4;
    // 0x002035A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_002035A8:
    // 0x002035A8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002035AC: j           L_002035D4
    // 0x002035B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_002035D4;
    // 0x002035B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_002035B4:
    // 0x002035B4: beq         $v1, $zero, L_002035D4
    if (ctx->r3 == 0) {
        // 0x002035B8: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_002035D4;
    }
    // 0x002035B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_002035BC:
    // 0x002035BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002035C0: beq         $v0, $s0, L_002035A8
    if (ctx->r2 == ctx->r16) {
        // 0x002035C4: nop
    
            goto L_002035A8;
    }
    // 0x002035C4: nop

    // 0x002035C8: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x002035CC: bne         $v1, $zero, L_002035BC
    if (ctx->r3 != 0) {
        // 0x002035D0: nop
    
            goto L_002035BC;
    }
    // 0x002035D0: nop

L_002035D4:
    // 0x002035D4: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002035D8: beq         $v0, $zero, L_00203618
    if (ctx->r2 == 0) {
        // 0x002035DC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00203618;
    }
    // 0x002035DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002035E0: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x002035E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002035E8: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x002035EC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002035F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x002035F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002035F8: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x002035FC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00203600: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x00203604: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203608: lw          $v0, -0x7210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7210);
    // 0x0020360C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00203610: jal         0x00200818
    // 0x00203614: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_00200818(rdram, ctx);
        goto after_4;
    // 0x00203614: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_4:
L_00203618:
    // 0x00203618: jal         0x0029DFF0
    // 0x0020361C: nop

    func_0029DFF0(rdram, ctx);
        goto after_5;
    // 0x0020361C: nop

    after_5:
    // 0x00203620: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203624: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00203628: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0020362C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203630: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00203634: beq         $v1, $zero, L_00203660
    if (ctx->r3 == 0) {
        // 0x00203638: nop
    
            goto L_00203660;
    }
    // 0x00203638: nop

    // 0x0020363C: jal         0x0029E010
    // 0x00203640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x00203640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00203644: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203648: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x0020364C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203650: jal         0x0029B820
    // 0x00203654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00203654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00203658: j           L_0020366C
    // 0x0020365C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_0020366C;
    // 0x0020365C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00203660:
    // 0x00203660: jal         0x0029E010
    // 0x00203664: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00203664: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x00203668: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0020366C:
    // 0x0020366C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00203670: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00203674: jr          $ra
    // 0x00203678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00203678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00407158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407158: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040715C: addiu       $v1, $v1, -0x5DC
    ctx->r3 = ADD32(ctx->r3, -0X5DC);
    // 0x00407160: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407164: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00407168: bne         $a0, $zero, L_00407174
    if (ctx->r4 != 0) {
        // 0x0040716C: sw          $v0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r2;
            goto L_00407174;
    }
    // 0x0040716C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00407170: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_00407174:
    // 0x00407174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00407178: bne         $a0, $v0, L_00407190
    if (ctx->r4 != ctx->r2) {
        // 0x0040717C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00407190;
    }
    // 0x0040717C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00407180: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00407184: addiu       $v0, $v0, 0x1660
    ctx->r2 = ADD32(ctx->r2, 0X1660);
    // 0x00407188: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x0040718C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00407190:
    // 0x00407190: bne         $a0, $v0, L_004071A8
    if (ctx->r4 != ctx->r2) {
        // 0x00407194: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004071A8;
    }
    // 0x00407194: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00407198: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040719C: addiu       $v0, $v0, 0x1700
    ctx->r2 = ADD32(ctx->r2, 0X1700);
    // 0x004071A0: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x004071A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_004071A8:
    // 0x004071A8: bne         $a0, $v0, L_004071C0
    if (ctx->r4 != ctx->r2) {
        // 0x004071AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004071C0;
    }
    // 0x004071AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004071B0: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004071B4: addiu       $v0, $v0, 0x1624
    ctx->r2 = ADD32(ctx->r2, 0X1624);
    // 0x004071B8: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x004071BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_004071C0:
    // 0x004071C0: bne         $a0, $v0, L_004071D4
    if (ctx->r4 != ctx->r2) {
        // 0x004071C4: nop
    
            goto L_004071D4;
    }
    // 0x004071C4: nop

    // 0x004071C8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004071CC: addiu       $v0, $v0, 0x169C
    ctx->r2 = ADD32(ctx->r2, 0X169C);
    // 0x004071D0: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
L_004071D4:
    // 0x004071D4: jr          $ra
    // 0x004071D8: nop

    return;
    // 0x004071D8: nop

;}
RECOMP_FUNC void func_0045B234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0041936C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041936C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419370: lbu         $v1, -0x54FA($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FA);
    // 0x00419374: beq         $v1, $zero, L_0041938C
    if (ctx->r3 == 0) {
        // 0x00419378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041938C;
    }
    // 0x00419378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041937C: beq         $v1, $v0, L_0041939C
    if (ctx->r3 == ctx->r2) {
        // 0x00419380: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041939C;
    }
    // 0x00419380: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419384: j           L_004193AC
    // 0x00419388: nop

        goto L_004193AC;
    // 0x00419388: nop

L_0041938C:
    // 0x0041938C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419390: addiu       $v0, $v0, 0x617C
    ctx->r2 = ADD32(ctx->r2, 0X617C);
    // 0x00419394: j           L_004193A8
    // 0x00419398: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004193A8;
    // 0x00419398: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041939C:
    // 0x0041939C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004193A0: addiu       $v0, $v0, 0x6164
    ctx->r2 = ADD32(ctx->r2, 0X6164);
    // 0x004193A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004193A8:
    // 0x004193A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004193AC:
    // 0x004193AC: jr          $ra
    // 0x004193B0: nop

    return;
    // 0x004193B0: nop

;}
RECOMP_FUNC void func_00401CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00401CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00401CF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00401CF4: beq         $s0, $zero, L_00401D70
    if (ctx->r16 == 0) {
        // 0x00401CF8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00401D70;
    }
    // 0x00401CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00401CFC: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00401D00: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x00401D04: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x00401D08: beq         $a0, $zero, L_00401D28
    if (ctx->r4 == 0) {
        // 0x00401D0C: sh          $v0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r2;
            goto L_00401D28;
    }
    // 0x00401D0C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00401D10: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00401D14: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00401D18: beq         $v0, $zero, L_00401D28
    if (ctx->r2 == 0) {
        // 0x00401D1C: nop
    
            goto L_00401D28;
    }
    // 0x00401D1C: nop

    // 0x00401D20: jal         0x00401CE8
    // 0x00401D24: nop

    func_00401CE8(rdram, ctx);
        goto after_0;
    // 0x00401D24: nop

    after_0:
L_00401D28:
    // 0x00401D28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00401D2C: beq         $a0, $zero, L_00401D4C
    if (ctx->r4 == 0) {
        // 0x00401D30: nop
    
            goto L_00401D4C;
    }
    // 0x00401D30: nop

    // 0x00401D34: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00401D38: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00401D3C: beq         $v0, $zero, L_00401D4C
    if (ctx->r2 == 0) {
        // 0x00401D40: nop
    
            goto L_00401D4C;
    }
    // 0x00401D40: nop

    // 0x00401D44: jal         0x00401CE8
    // 0x00401D48: nop

    func_00401CE8(rdram, ctx);
        goto after_1;
    // 0x00401D48: nop

    after_1:
L_00401D4C:
    // 0x00401D4C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x00401D50: beq         $a0, $zero, L_00401D70
    if (ctx->r4 == 0) {
        // 0x00401D54: nop
    
            goto L_00401D70;
    }
    // 0x00401D54: nop

    // 0x00401D58: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00401D5C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00401D60: beq         $v0, $zero, L_00401D70
    if (ctx->r2 == 0) {
        // 0x00401D64: nop
    
            goto L_00401D70;
    }
    // 0x00401D64: nop

    // 0x00401D68: jal         0x00401CE8
    // 0x00401D6C: nop

    func_00401CE8(rdram, ctx);
        goto after_2;
    // 0x00401D6C: nop

    after_2:
L_00401D70:
    // 0x00401D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00401D74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00401D78: jr          $ra
    // 0x00401D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00401D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002596B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002596B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002596B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002596BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002596C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002596C4: lw          $s0, 0x1A8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1A8);
    // 0x002596C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002596CC: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x002596D0: lh          $a1, 0xB14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XB14);
    // 0x002596D4: lhu         $a0, 0xB14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XB14);
    // 0x002596D8: bne         $v0, $a1, L_002596F4
    if (ctx->r2 != ctx->r5) {
        // 0x002596DC: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_002596F4;
    }
    // 0x002596DC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x002596E0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002596E4: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x002596E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002596EC: beq         $v1, $v0, L_00259774
    if (ctx->r3 == ctx->r2) {
        // 0x002596F0: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_00259774;
    }
    // 0x002596F0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_002596F4:
    // 0x002596F4: sh          $a0, 0x996($s0)
    MEM_H(0X996, ctx->r16) = ctx->r4;
    // 0x002596F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002596FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00259700: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00259704: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00259708: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x0025970C: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x00259710: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00259714: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259718: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025971C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00259720: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x00259724: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00259728: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0025972C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x00259730: bne         $v0, $zero, L_00259764
    if (ctx->r2 != 0) {
        // 0x00259734: sw          $v1, 0x108($s1)
        MEM_W(0X108, ctx->r17) = ctx->r3;
            goto L_00259764;
    }
    // 0x00259734: sw          $v1, 0x108($s1)
    MEM_W(0X108, ctx->r17) = ctx->r3;
    // 0x00259738: lh          $v0, 0x996($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X996);
    // 0x0025973C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00259740: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00259744: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00259748: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0025974C: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x00259750: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00259754: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00259758: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0025975C: jal         0x0027FC2C
    // 0x00259760: nop

    func_0027FC2C(rdram, ctx);
        goto after_0;
    // 0x00259760: nop

    after_0:
L_00259764:
    // 0x00259764: sw          $zero, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = 0;
    // 0x00259768: sw          $zero, 0x110($s1)
    MEM_W(0X110, ctx->r17) = 0;
    // 0x0025976C: sw          $zero, 0x128($s1)
    MEM_W(0X128, ctx->r17) = 0;
    // 0x00259770: sw          $zero, 0x118($s1)
    MEM_W(0X118, ctx->r17) = 0;
L_00259774:
    // 0x00259774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00259778: jal         0x00253DE0
    // 0x0025977C: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    func_00253DE0(rdram, ctx);
        goto after_1;
    // 0x0025977C: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    after_1:
    // 0x00259780: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00259784: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259788: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025978C: jr          $ra
    // 0x00259790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00259790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044E1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041524C:
    // 0x0044E1B4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
L_004152F4:
    // 0x0044E1B8: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x0044E1BC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x0044E1C0: slti        $t1, $a1, 0x12
    ctx->r9 = SIGNED(ctx->r5) < 0X12 ? 1 : 0;
    // 0x0044E1C4: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x0044E1C8: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x0044E1CC: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x0044E1D0: lui         $t5, 0x8
    ctx->r13 = S32(0X8 << 16);
    // 0x0044E1D4: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x0044E1D8: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x0044E1DC: lui         $t2, 0x10
    ctx->r10 = S32(0X10 << 16);
    // 0x0044E1E0: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x0044E1E4: lui         $t0, 0x180
    ctx->r8 = S32(0X180 << 16);
    // 0x0044E1E8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0044E1EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044E1F0: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x0044E1F4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0044E1F8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x0044E1FC: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
L_0044E200:
    // 0x0044E200: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0044E204: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x0044E208: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x0044E20C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x0044E210: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x0044E214: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044E218: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x0044E21C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044E220: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0044E224: bgez        $v1, L_0044E23C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0044E228: nop
    
            goto L_0044E23C;
    }
    // 0x0044E228: nop

    // 0x0044E22C: lhu         $v0, 0x12($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X12);
    // 0x0044E230: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0044E234: j           L_0041524C
    // 0x0044E238: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    entry_0041524C(rdram, ctx);
    return;
    // 0x0044E238: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
L_0044E23C:
    // 0x0044E23C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x0044E240: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044E244: beql        $v0, $zero, L_0044E24C
    if (ctx->r2 == 0) {
        // 0x0044E248: sh          $zero, 0x0($a3)
        MEM_H(0X0, ctx->r7) = 0;
            goto L_0044E24C;
    }
    goto skip_0;
    // 0x0044E248: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    skip_0:
L_0044E24C:
    // 0x0044E24C: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x0044E250: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x0044E254: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0044E258: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044E25C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0044E260: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0044E264: beq         $a1, $t9, L_0044E2B4
    if (ctx->r5 == ctx->r25) {
        // 0x0044E268: subu        $a2, $a2, $v0
        ctx->r6 = SUB32(ctx->r6, ctx->r2);
            goto L_0044E2B4;
    }
    // 0x0044E268: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x0044E26C: beq         $t1, $zero, L_0044E284
    if (ctx->r9 == 0) {
        // 0x0044E270: nop
    
            goto L_0044E284;
    }
    // 0x0044E270: nop

    // 0x0044E274: beq         $a1, $t8, L_0044E29C
    if (ctx->r5 == ctx->r24) {
        // 0x0044E278: nop
    
            goto L_0044E29C;
    }
    // 0x0044E278: nop

    // 0x0044E27C: j           L_004152F4
    // 0x0044E280: nop

    entry_004152F4(rdram, ctx);
    return;
    // 0x0044E280: nop

L_0044E284:
    // 0x0044E284: beq         $a1, $t7, L_0044E2CC
    if (ctx->r5 == ctx->r15) {
        // 0x0044E288: nop
    
            goto L_0044E2CC;
    }
    // 0x0044E288: nop

    // 0x0044E28C: beq         $a1, $t6, L_0044E2E4
    if (ctx->r5 == ctx->r14) {
        // 0x0044E290: nop
    
            goto L_0044E2E4;
    }
    // 0x0044E290: nop

    // 0x0044E294: j           L_004152F4
    // 0x0044E298: nop

    entry_004152F4(rdram, ctx);
    return;
    // 0x0044E298: nop

L_0044E29C:
    // 0x0044E29C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0044E2A0: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x0044E2A4: bnel        $v0, $zero, L_0044E2F4
    if (ctx->r2 != 0) {
        // 0x0044E2A8: sb          $a2, 0x11($a0)
        MEM_B(0X11, ctx->r4) = ctx->r6;
            goto L_0044E2F4;
    }
    goto skip_1;
    // 0x0044E2A8: sb          $a2, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r6;
    skip_1:
    // 0x0044E2AC: j           L_004152F4
    // 0x0044E2B0: nop

    entry_004152F4(rdram, ctx);
    return;
    // 0x0044E2B0: nop

L_0044E2B4:
    // 0x0044E2B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0044E2B8: and         $v0, $v0, $t4
    ctx->r2 = ctx->r2 & ctx->r12;
    // 0x0044E2BC: bnel        $v0, $zero, L_0044E2F4
    if (ctx->r2 != 0) {
        // 0x0044E2C0: sb          $a2, 0x10($a0)
        MEM_B(0X10, ctx->r4) = ctx->r6;
            goto L_0044E2F4;
    }
    goto skip_2;
    // 0x0044E2C0: sb          $a2, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r6;
    skip_2:
    // 0x0044E2C4: j           L_004152F4
    // 0x0044E2C8: nop

    entry_004152F4(rdram, ctx);
    return;
    // 0x0044E2C8: nop

L_0044E2CC:
    // 0x0044E2CC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0044E2D0: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x0044E2D4: bnel        $v0, $zero, L_0044E2F4
    if (ctx->r2 != 0) {
        // 0x0044E2D8: sb          $a2, 0x13($a0)
        MEM_B(0X13, ctx->r4) = ctx->r6;
            goto L_0044E2F4;
    }
    goto skip_3;
    // 0x0044E2D8: sb          $a2, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r6;
    skip_3:
    // 0x0044E2DC: j           L_004152F4
    // 0x0044E2E0: nop

    entry_004152F4(rdram, ctx);
    return;
    // 0x0044E2E0: nop

L_0044E2E4:
    // 0x0044E2E4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0044E2E8: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x0044E2EC: bnel        $v0, $zero, L_0044E2F4
    if (ctx->r2 != 0) {
        // 0x0044E2F0: sb          $a2, 0x12($a0)
        MEM_B(0X12, ctx->r4) = ctx->r6;
            goto L_0044E2F4;
    }
    goto skip_4;
    // 0x0044E2F0: sb          $a2, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r6;
    skip_4:
L_0044E2F4:
    // 0x0044E2F4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0044E2F8: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x0044E2FC: bne         $v0, $t0, L_0044E200
    if (ctx->r2 != ctx->r8) {
        // 0x0044E300: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_0044E200;
    }
    // 0x0044E300: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x0044E304: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0044E308: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0044E30C: beq         $v0, $zero, L_0044E200
    if (ctx->r2 == 0) {
        // 0x0044E310: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_0044E200;
    }
    // 0x0044E310: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x0044E314: jr          $ra
    // 0x0044E318: nop

    return;
    // 0x0044E318: nop

;}
RECOMP_FUNC void func_00444040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444040: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444044: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00444048: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0044404C: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444050: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00444054: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0044405C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444060: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00444064: jal         0x00246108
    // 0x00444068: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444068: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0044406C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444070: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444074: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444078: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0044407C: jal         0x00245BAC
    // 0x00444080: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444080: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00444084: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00444088: beq         $v0, $zero, L_0044409C
    if (ctx->r2 == 0) {
        // 0x0044408C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0044409C;
    }
    // 0x0044408C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444090: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00444094: jal         0x00243414
    // 0x00444098: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444098: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_0044409C:
    // 0x0044409C: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x004440A0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004440A4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x004440A8: jr          $ra
    // 0x004440AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x004440AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00467C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00467C14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00467C18: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00467C1C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x00467C20: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00467C24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00467C28: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00467C2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00467C30: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x00467C34: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00467C38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00467C3C: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x00467C40: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467C44: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x00467C48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467C4C: srl         $v1, $a3, 3
    ctx->r3 = S32(U32(ctx->r7) >> 3);
    // 0x00467C50: andi        $a3, $a3, 0x7
    ctx->r7 = ctx->r7 & 0X7;
    // 0x00467C54: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467C58: srav        $a3, $t1, $a3
    ctx->r7 = S32(SIGNED(ctx->r9) >> (ctx->r7 & 31));
    // 0x00467C5C: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00467C60: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x00467C64: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467C68: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x00467C6C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00467C70: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467C74: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00467C78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467C7C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00467C80: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00467C84: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00467C88: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00467C8C: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x00467C90: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x00467C94: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x00467C98: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00467C9C: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x00467CA0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00467CA4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00467CA8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00467CAC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467CB0: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x00467CB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467CB8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00467CBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00467CC0: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x00467CC4: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00467CC8: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x00467CCC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x00467CD0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x00467CD4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00467CD8: srl         $v1, $a3, 3
    ctx->r3 = S32(U32(ctx->r7) >> 3);
    // 0x00467CDC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00467CE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00467CE4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00467CE8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467CEC: andi        $a3, $a3, 0x7
    ctx->r7 = ctx->r7 & 0X7;
    // 0x00467CF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467CF4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00467CF8: srav        $a3, $t1, $a3
    ctx->r7 = S32(SIGNED(ctx->r9) >> (ctx->r7 & 31));
    // 0x00467CFC: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00467D00: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00467D04: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00467D08: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00467D0C: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x00467D10: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x00467D14: sll         $v1, $v1, 13
    ctx->r3 = S32(ctx->r3 << 13);
    // 0x00467D18: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00467D1C: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x00467D20: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00467D24: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467D28: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x00467D2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467D30: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467D34: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00467D38: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x00467D3C: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x00467D40: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x00467D44: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467D48: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00467D4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00467D50: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00467D54: srl         $v1, $a1, 3
    ctx->r3 = S32(U32(ctx->r5) >> 3);
    // 0x00467D58: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x00467D5C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467D60: srav        $a1, $t1, $a1
    ctx->r5 = S32(SIGNED(ctx->r9) >> (ctx->r5 & 31));
    // 0x00467D64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467D68: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467D6C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00467D70: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00467D74: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467D78: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00467D7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00467D80: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00467D84: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x00467D88: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00467D8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00467D90: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00467D94: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00467D98: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x00467D9C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00467DA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00467DA4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467DA8: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x00467DAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467DB0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00467DB4: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x00467DB8: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00467DBC: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00467DC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00467DC4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00467DC8: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x00467DCC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x00467DD0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00467DD4: srl         $v1, $a3, 3
    ctx->r3 = S32(U32(ctx->r7) >> 3);
    // 0x00467DD8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00467DDC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467DE0: andi        $a3, $a3, 0x7
    ctx->r7 = ctx->r7 & 0X7;
    // 0x00467DE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467DE8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467DEC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00467DF0: srav        $a3, $t1, $a3
    ctx->r7 = S32(SIGNED(ctx->r9) >> (ctx->r7 & 31));
    // 0x00467DF4: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x00467DF8: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x00467DFC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467E00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00467E04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00467E08: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00467E0C: srl         $v1, $a1, 3
    ctx->r3 = S32(U32(ctx->r5) >> 3);
    // 0x00467E10: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x00467E14: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00467E18: srav        $t1, $t1, $a1
    ctx->r9 = S32(SIGNED(ctx->r9) >> (ctx->r5 & 31));
    // 0x00467E1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00467E20: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00467E24: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00467E28: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x00467E2C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00467E30: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00467E34: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00467E38: jal         0x0042EB50
    // 0x00467E3C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    func_0042EB50(rdram, ctx);
        goto after_0;
    // 0x00467E3C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    after_0:
    // 0x00467E40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00467E44: jr          $ra
    // 0x00467E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00467E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275B80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275B84: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275B88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275B8C: jal         0x002714B0
    // 0x00275B90: nop

    func_002714B0(rdram, ctx);
        goto after_0;
    // 0x00275B90: nop

    after_0:
    // 0x00275B94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275B98: jr          $ra
    // 0x00275B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002602E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002602E0: lbu         $v0, 0xC8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC8);
    // 0x002602E4: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x002602E8: bltzl       $v0, L_002602F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x002602EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002602F0;
    }
    goto skip_0;
    // 0x002602EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_002602F0:
    // 0x002602F0: jr          $ra
    // 0x002602F4: sb          $v0, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r2;
    return;
    // 0x002602F4: sb          $v0, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_0045AEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0021F428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F428: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0021F42C: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x0021F430: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021F434: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x0021F438: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021F43C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x0021F440: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021F444: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0021F448: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x0021F44C: jal         0x00215AE0
    // 0x0021F450: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_00215AE0(rdram, ctx);
        goto after_0;
    // 0x0021F450: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x0021F454: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0021F458: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x0021F45C: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x0021F460: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0021F464: swc1        $f1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021F468: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x0021F46C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x0021F470: jal         0x002105A4
    // 0x0021F474: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_002105A4(rdram, ctx);
        goto after_1;
    // 0x0021F474: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x0021F478: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021F47C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0021F480: jal         0x0020F85C
    // 0x0021F484: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0021F484: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x0021F488: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x0021F48C: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0021F490: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021F494: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x0021F498: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x0021F49C: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x0021F4A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021F4A4: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x0021F4A8: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0021F4AC: lwc1        $f1, 0x3C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X3C);
    // 0x0021F4B0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021F4B4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0021F4B8: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x0021F4BC: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x0021F4C0: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x0021F4C4: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x0021F4C8: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0021F4CC: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0021F4D0: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0021F4D4: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0021F4D8: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0021F4DC: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0021F4E0: jr          $ra
    // 0x0021F4E4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0021F4E4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00418380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418380: jr          $ra
    // 0x00418384: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418384: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00285700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00285704: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x00285708: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028570C: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x00285710: ori         $v1, $v1, 0x404
    ctx->r3 = ctx->r3 | 0X404;
    // 0x00285714: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00285718: beq         $v0, $zero, L_0028573C
    if (ctx->r2 == 0) {
        // 0x0028571C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028573C;
    }
    // 0x0028571C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285720: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285724: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x00285728: beq         $v0, $zero, L_0028573C
    if (ctx->r2 == 0) {
        // 0x0028572C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028573C;
    }
    // 0x0028572C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285730: jal         0x00275624
    // 0x00285734: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x00285734: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_0:
    // 0x00285738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0028573C:
    // 0x0028573C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00285740: jr          $ra
    // 0x00285744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00285744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B5E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B5EC: sw          $zero, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = 0;
    // 0x0045B5F0: jr          $ra
    // 0x0045B5F4: nop

    return;
    // 0x0045B5F4: nop

;}
RECOMP_FUNC void func_00452CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452CF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452CF8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00452CFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00452D00: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00452D04: addiu       $s0, $s0, -0x5514
    ctx->r16 = ADD32(ctx->r16, -0X5514);
    // 0x00452D08: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00452D0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00452D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00452D14: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x00452D18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00452D1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00452D20: jal         0x0041648C
    // 0x00452D24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00452D24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00452D28: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00452D2C: addiu       $v0, $zero, 0xF7
    ctx->r2 = ADD32(0, 0XF7);
    // 0x00452D30: beql        $a1, $v0, L_00452D38
    if (ctx->r5 == ctx->r2) {
        // 0x00452D34: addiu       $a1, $zero, 0xF8
        ctx->r5 = ADD32(0, 0XF8);
            goto L_00452D38;
    }
    goto skip_0;
    // 0x00452D34: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
    skip_0:
L_00452D38:
    // 0x00452D38: jal         0x002759B4
    // 0x00452D3C: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    func_002759B4(rdram, ctx);
        goto after_1;
    // 0x00452D3C: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    after_1:
    // 0x00452D40: bgtz        $v0, L_00452D50
    if (SIGNED(ctx->r2) > 0) {
        // 0x00452D44: nop
    
            goto L_00452D50;
    }
    // 0x00452D44: nop

    // 0x00452D48: jal         0x002759C4
    // 0x00452D4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_002759C4(rdram, ctx);
        goto after_2;
    // 0x00452D4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_00452D50:
    // 0x00452D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00452D54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00452D58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452D5C: jr          $ra
    // 0x00452D60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00452D60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042130C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042130C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00421310: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x00421314: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00421318: jr          $ra
    // 0x0042131C: sw          $a1, 0x684($v0)
    MEM_W(0X684, ctx->r2) = ctx->r5;
    return;
    // 0x0042131C: sw          $a1, 0x684($v0)
    MEM_W(0X684, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_0022594C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022594C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00225950: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00225954: lw          $a3, 0x104C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X104C);
    // 0x00225958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022595C: lwc1        $f3, 0x5FFC($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X5FFC);
    // 0x00225960: blez        $a3, L_002259C8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x00225964: addiu       $a0, $a0, 0xFCC
        ctx->r4 = ADD32(ctx->r4, 0XFCC);
            goto L_002259C8;
    }
    // 0x00225964: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, 0XFCC);
    // 0x00225968: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0022596C: lwc1        $f5, 0x8($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00225970: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
L_00225974:
    // 0x00225974: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00225978: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0022597C: sub.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x00225980: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00225984: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00225988: sub.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f5.fl - ctx->f2.fl;
    // 0x0022598C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00225990: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00225994: sub.s       $f1, $f4, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f1.fl;
    // 0x00225998: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022599C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x002259A0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002259A4: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x002259A8: nop

    // 0x002259AC: bc1f        L_002259BC
    if (!c1cs) {
        // 0x002259B0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_002259BC;
    }
    // 0x002259B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002259B4: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x002259B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_002259BC:
    // 0x002259BC: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x002259C0: bne         $v0, $zero, L_00225974
    if (ctx->r2 != 0) {
        // 0x002259C4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00225974;
    }
    // 0x002259C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_002259C8:
    // 0x002259C8: jr          $ra
    // 0x002259CC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    return;
    // 0x002259CC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_0020FF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FF80: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020FF84: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020FF88: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020FF8C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020FF90: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FF94: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0020FF98: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0020FF9C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFA0: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0020FFA4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFA8: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0020FFAC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFB0: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x0020FFB4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFB8: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0020FFBC: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFC0: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0020FFC4: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFC8: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0020FFCC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFD0: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x0020FFD4: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFD8: lwc1        $f0, 0x2C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x0020FFDC: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFE0: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x0020FFE4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFE8: lwc1        $f0, 0x34($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X34);
    // 0x0020FFEC: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFF0: lwc1        $f0, 0x38($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X38);
    // 0x0020FFF4: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x0020FFF8: lwc1        $f0, 0x3C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x0020FFFC: jr          $ra
    // 0x00210000: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00210000: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00267DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267DD8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267DDC: jr          $ra
    // 0x00267DE0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    return;
    // 0x00267DE0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
;}
RECOMP_FUNC void func_00292844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00292848: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029284C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00292850: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00292854: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00292858: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0029285C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00292860: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00292864: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_00292868:
    // 0x00292868: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
    // 0x0029286C: beq         $s1, $zero, L_00292868
    if (ctx->r17 == 0) {
        // 0x00292870: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_00292868;
    }
    // 0x00292870: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00292874: lbu         $v0, 0x34($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34);
    // 0x00292878: beq         $v0, $zero, L_002928B0
    if (ctx->r2 == 0) {
        // 0x0029287C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002928B0;
    }
    // 0x0029287C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00292880: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00292884:
    // 0x00292884: jal         0x002929A0
    // 0x00292888: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002929A0(rdram, ctx);
        goto after_0;
    // 0x00292888: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0029288C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292890: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00292894: jal         0x00292A20
    // 0x00292898: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00292A20(rdram, ctx);
        goto after_1;
    // 0x00292898: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0029289C: lbu         $v0, 0x34($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34);
    // 0x002928A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002928A4: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x002928A8: bne         $v0, $zero, L_00292884
    if (ctx->r2 != 0) {
        // 0x002928AC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00292884;
    }
    // 0x002928AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002928B0:
    // 0x002928B0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x002928B4: beq         $v0, $zero, L_002928D4
    if (ctx->r2 == 0) {
        // 0x002928B8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002928D4;
    }
    // 0x002928B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002928BC: jal         0x002929A0
    // 0x002928C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002929A0(rdram, ctx);
        goto after_2;
    // 0x002928C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002928C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002928C8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x002928CC: jal         0x00292A20
    // 0x002928D0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_00292A20(rdram, ctx);
        goto after_3;
    // 0x002928D0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_3:
L_002928D4:
    // 0x002928D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002928D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002928DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002928E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002928E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002928E8: jr          $ra
    // 0x002928EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002928EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00254834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254834: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00254838: lbu         $a0, -0x5516($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5516);
    // 0x0025483C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00254840: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00254844: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00254848: jal         0x00279028
    // 0x0025484C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00279028(rdram, ctx);
        goto after_0;
    // 0x0025484C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00254850: lwc1        $f5, 0x288($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X288);
    // 0x00254854: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254858: lwc1        $f2, 0x7120($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7120);
    // 0x0025485C: mul.s       $f1, $f5, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x00254860: lwc1        $f3, 0x28C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00254864: mul.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x00254868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0025486C: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00254870: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00254874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00254878: lwc1        $f4, 0x7124($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7124);
    // 0x0025487C: div.s       $f5, $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = DIV_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00254880: mul.s       $f6, $f5, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x00254884: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00254888: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0025488C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00254890: div.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00254894: mul.s       $f4, $f3, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x00254898: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x0025489C: addiu       $a0, $zero, 0x1FB
    ctx->r4 = ADD32(0, 0X1FB);
    // 0x002548A0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002548A4: lwc1        $f1, 0x294($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x002548A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002548AC: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002548B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002548B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002548B8: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x002548BC: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x002548C0: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x002548C4: sub.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x002548C8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002548CC: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002548D0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x002548D4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x002548D8: trunc.w.s   $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x002548DC: mfc1        $a3, $f7
    ctx->r7 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002548E0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x002548E4: jal         0x0027B320
    // 0x002548E8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_1;
    // 0x002548E8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_1:
    // 0x002548EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002548F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002548F4: jr          $ra
    // 0x002548F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002548F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002562B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002562B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002562B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002562BC: jal         0x00251698
    // 0x002562C0: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x002562C0: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_0:
    // 0x002562C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002562C8: jr          $ra
    // 0x002562CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002562CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00422850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422850: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00422854: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422858: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0042285C: jr          $ra
    // 0x00422860: nop

    return;
    // 0x00422860: nop

;}
RECOMP_FUNC void func_00440CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00407D58:
    // 0x00440CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00440CB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00440CB8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00440CBC: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00440CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00440CC4: sw          $zero, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = 0;
    // 0x00440CC8: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00440CCC: jal         0x002535E4
    // 0x00440CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00440CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00440CD4: jal         0x002532A8
    // 0x00440CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002532A8(rdram, ctx);
        goto after_1;
    // 0x00440CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00440CDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00440CE0: lw          $v1, 0x9D0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X9D0);
    // 0x00440CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00440CE8: beq         $v1, $zero, L_00440D40
    if (ctx->r3 == 0) {
        // 0x00440CEC: sw          $v0, 0x9F0($a0)
        MEM_W(0X9F0, ctx->r4) = ctx->r2;
            goto L_00440D40;
    }
    // 0x00440CEC: sw          $v0, 0x9F0($a0)
    MEM_W(0X9F0, ctx->r4) = ctx->r2;
    // 0x00440CF0: lw          $v0, 0x9D4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9D4);
    // 0x00440CF4: beq         $v0, $zero, L_00440D40
    if (ctx->r2 == 0) {
        // 0x00440CF8: nop
    
            goto L_00440D40;
    }
    // 0x00440CF8: nop

    // 0x00440CFC: lw          $v0, 0x9D8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9D8);
    // 0x00440D00: beq         $v0, $zero, L_00440D40
    if (ctx->r2 == 0) {
        // 0x00440D04: nop
    
            goto L_00440D40;
    }
    // 0x00440D04: nop

    // 0x00440D08: lw          $v0, 0x9DC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9DC);
    // 0x00440D0C: beq         $v0, $zero, L_00440D40
    if (ctx->r2 == 0) {
        // 0x00440D10: nop
    
            goto L_00440D40;
    }
    // 0x00440D10: nop

    // 0x00440D14: lw          $v0, 0x9E0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E0);
    // 0x00440D18: beq         $v0, $zero, L_00440D40
    if (ctx->r2 == 0) {
        // 0x00440D1C: nop
    
            goto L_00440D40;
    }
    // 0x00440D1C: nop

    // 0x00440D20: jal         0x00412438
    // 0x00440D24: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    func_00412438(rdram, ctx);
        goto after_2;
    // 0x00440D24: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    after_2:
    // 0x00440D28: lui         $a0, 0x7FF
    ctx->r4 = S32(0X7FF << 16);
    // 0x00440D2C: addiu       $v1, $s0, 0x1268
    ctx->r3 = ADD32(ctx->r16, 0X1268);
    // 0x00440D30: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00440D34: ori         $a0, $a0, 0x19
    ctx->r4 = ctx->r4 | 0X19;
    // 0x00440D38: j           L_00407D58
    // 0x00440D3C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    entry_00407D58(rdram, ctx);
    return;
    // 0x00440D3C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
L_00440D40:
    // 0x00440D40: jal         0x00412438
    // 0x00440D44: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_00412438(rdram, ctx);
        goto after_3;
    // 0x00440D44: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_3:
    // 0x00440D48: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00440D4C: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00440D50: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00440D54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x00440D58: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00440D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00440D60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00440D64: jr          $ra
    // 0x00440D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00440D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E460: beq         $a2, $zero, L_0029E480
    if (ctx->r6 == 0) {
        // 0x0029E464: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0029E480;
    }
    // 0x0029E464: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_0029E468:
    // 0x0029E468: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0029E46C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0029E470: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0029E474: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0029E478: bne         $a2, $zero, L_0029E468
    if (ctx->r6 != 0) {
        // 0x0029E47C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0029E468;
    }
    // 0x0029E47C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0029E480:
    // 0x0029E480: jr          $ra
    // 0x0029E484: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0029E484: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00232934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232934: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x00232938: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x0023293C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00232940: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x00232944: sw          $s6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r22;
    // 0x00232948: sw          $s5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r21;
    // 0x0023294C: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x00232950: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x00232954: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x00232958: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x0023295C: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x00232960: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00232964: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00232968: lb          $s3, 0xC($v0)
    ctx->r19 = MEM_B(ctx->r2, 0XC);
    // 0x0023296C: blez        $s3, L_00232A98
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00232970: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_00232A98;
    }
    // 0x00232970: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00232974: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00232978: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0023297C: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x00232980: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x00232984: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x00232988: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x0023298C: jal         0x0020E810
    // 0x00232990: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x00232990: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_0:
    // 0x00232994: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x00232998: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x0023299C: jal         0x0020EF2C
    // 0x002329A0: addiu       $a2, $s0, 0x144
    ctx->r6 = ADD32(ctx->r16, 0X144);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x002329A0: addiu       $a2, $s0, 0x144
    ctx->r6 = ADD32(ctx->r16, 0X144);
    after_1:
    // 0x002329A4: lui         $s6, 0x8010
    ctx->r22 = S32(0X8010 << 16);
    // 0x002329A8: addiu       $s6, $s6, -0x76D8
    ctx->r22 = ADD32(ctx->r22, -0X76D8);
    // 0x002329AC: blez        $s3, L_00232A98
    if (SIGNED(ctx->r19) <= 0) {
        // 0x002329B0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00232A98;
    }
    // 0x002329B0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002329B4: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x002329B8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x002329BC: lui         $s4, 0x20
    ctx->r20 = S32(0X20 << 16);
    // 0x002329C0: ori         $s4, $s4, 0xE001
    ctx->r20 = ctx->r20 | 0XE001;
    // 0x002329C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002329C8: lwc1        $f1, 0x6428($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6428);
    // 0x002329CC: mtc1        $s3, $f0
    ctx->f0.u32l = ctx->r19;
    // 0x002329D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002329D4: add.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002329D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002329DC:
    // 0x002329DC: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x002329E0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002329E4: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x002329E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002329EC: jal         0x0020EF60
    // 0x002329F0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x002329F0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x002329F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002329F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002329FC: jal         0x0020EEF8
    // 0x00232A00: addiu       $a2, $s0, 0x144
    ctx->r6 = ADD32(ctx->r16, 0X144);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x00232A00: addiu       $a2, $s0, 0x144
    ctx->r6 = ADD32(ctx->r16, 0X144);
    after_3:
    // 0x00232A04: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x00232A08: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00232A0C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00232A10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00232A14: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00232A18: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x00232A1C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x00232A20: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x00232A24: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00232A28: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00232A2C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00232A30: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00232A34: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00232A38: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00232A3C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00232A40: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00232A44: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00232A48: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00232A4C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00232A50: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00232A54: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x00232A58: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x00232A5C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00232A60: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00232A64: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00232A68: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00232A6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00232A70: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x00232A74: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00232A78: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x00232A7C: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x00232A80: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x00232A84: jal         0x0022F350
    // 0x00232A88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_0022F350(rdram, ctx);
        goto after_4;
    // 0x00232A88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_4:
    // 0x00232A8C: slt         $v0, $s3, $s1
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00232A90: beq         $v0, $zero, L_002329DC
    if (ctx->r2 == 0) {
        // 0x00232A94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002329DC;
    }
    // 0x00232A94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00232A98:
    // 0x00232A98: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00232A9C: lw          $s6, 0xA8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA8);
    // 0x00232AA0: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x00232AA4: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x00232AA8: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x00232AAC: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x00232AB0: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x00232AB4: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x00232AB8: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00232ABC: jr          $ra
    // 0x00232AC0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00232AC0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00424F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424F50: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00424F54: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x00424F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00424F5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00424F60: jal         0x0026EFB8
    // 0x00424F64: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x00424F64: nop

    after_0:
    // 0x00424F68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00424F6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00424F70: sw          $v0, 0xA30($at)
    MEM_W(0XA30, ctx->r1) = ctx->r2;
    // 0x00424F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424F78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00424F7C: sw          $v0, 0xA34($at)
    MEM_W(0XA34, ctx->r1) = ctx->r2;
    // 0x00424F80: jr          $ra
    // 0x00424F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00424F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
